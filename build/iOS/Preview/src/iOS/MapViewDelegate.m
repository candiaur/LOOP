#import "MapViewDelegate.h"
#define MERCATOR_OFFSET 268435456
#define MERCATOR_RADIUS 85445659.44705395
@implementation TouchRecognizer
	@synthesize touchesBeganCallback;
	@synthesize touchesEndedCallback;
	@synthesize touchesCancelledCallback;

	-(id) init
	{
		if (self = [super init])
			self.cancelsTouchesInView = NO;

		return self;
	}

	-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
	{
		if (touchesBeganCallback)
			touchesBeganCallback(touches, event);
	}

	-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event
	{
		if (touchesEndedCallback)
			touchesEndedCallback(touches, event);
	}

	-(BOOL)canBePreventedByGestureRecognizer:(UIGestureRecognizer *)preventingGestureRecognizer
	{
		return NO;
	}

	-(BOOL)canPreventGestureRecognizer:(UIGestureRecognizer *)preventedGestureRecognizer
	{
		return NO;
	}

	- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event { }
	- (void)reset { }
	- (void)ignoreTouch:(UITouch *)touch forEvent:(UIEvent *)event { }
	- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event 
	{ 
		if (touchesCancelledCallback)
			touchesCancelledCallback(touches, event);
	}

@end

@interface FusePinAnnotationView : MKPinAnnotationView
@end

@implementation FusePinAnnotationView
@end

@implementation MapViewDelegate
{
	MKMapView* _mapView;
	NSMutableDictionary* _annotations;
	CLLocationManager* _locationMgr;
	int _touchCount;
}

	@synthesize mapMoveBlock;
	@synthesize markerSelectBlock;
	@synthesize touchBlock;

	static MapViewDelegate* _instance;
	static int _idPool = 0;
	+(MapViewDelegate*) instance
	{
		if(_instance == nil){
			_instance = [[MapViewDelegate alloc] init];
		}
		return _instance;
	}

	-(id)init
	{
		self = [super init];
		_touchCount = 0;
		_locationMgr = [[CLLocationManager alloc] init];
		[_locationMgr requestAlwaysAuthorization];
		_annotations = [[NSMutableDictionary alloc] init];
		return self;
	}

	-(void)setAsDelegate:(MKMapView*)mv
	{
		_mapView = mv;
		[_mapView setDelegate:self];
		
		TouchRecognizer* _touchRecognizer = [[[TouchRecognizer alloc] init] autorelease];

		_touchRecognizer.touchesBeganCallback = ^(NSSet * touches, UIEvent * event) 
		{
			_touchCount += [touches count];
			if(self.touchBlock == nil) return;
			
			UITouch* t = [touches anyObject];
			CGPoint l = [t locationInView:_mapView];
			
			CLLocationCoordinate2D coord = [_mapView convertPoint:l toCoordinateFromView:_mapView];
			
			touchBlock(0, coord.latitude, coord.longitude);
		};
		
		_touchRecognizer.touchesEndedCallback = ^(NSSet * touches, UIEvent * event) 
		{
			_touchCount -= [touches count];
			if(touchBlock == nil) return;
			
			UITouch* t = [touches anyObject];
			CGPoint l = [t locationInView:_mapView];
			
			CLLocationCoordinate2D coord = [_mapView convertPoint:l toCoordinateFromView:_mapView];
			
			touchBlock(1, coord.latitude, coord.longitude);

			if(_touchCount==0)
				touchBlock(4, coord.latitude, coord.longitude);
		};

		_touchRecognizer.touchesCancelledCallback = ^(NSSet * touches, UIEvent * event) 
		{
			_touchCount -= [touches count];
			//NSLog(@"Touch end");
			if(touchBlock == nil) return;
			if(_touchCount==0)
				touchBlock(4, 0, 0);
		};

		UITapGestureRecognizer* _tapRecognizer = [[[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(onTap:)] autorelease];
		UILongPressGestureRecognizer* _longPressRecognizer = [[[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(onLongPress:)] autorelease];
		
		[mv addGestureRecognizer:_touchRecognizer];
		[mv addGestureRecognizer:_tapRecognizer];
		[mv addGestureRecognizer:_longPressRecognizer];
	}

	-(int)nextId
	{
		return _idPool++;
	}

	- (MKAnnotationView *)mapView:(MKMapView *)mapView viewForAnnotation:(id<MKAnnotation>)annotation
	{
		if ([annotation isKindOfClass:[MKUserLocation class]])
		{
			return nil;
		}

		MKPointAnnotation *pt = (MKPointAnnotation *)annotation;
		MKPinAnnotationView *pinView = (MKPinAnnotationView *)[mapView dequeueReusableAnnotationViewWithIdentifier: pt.title];

		if(pinView == nil)
		{
			pinView = [[MKPinAnnotationView alloc] initWithAnnotation:annotation reuseIdentifier:pt.title];
			[pinView setCanShowCallout:NO];
		}
		else
		{
			pinView.annotation = annotation;
		}

		return pinView;
	}

	-(void)mapView:(MKMapView *)mapView didSelectAnnotationView:(MKAnnotationView *)view
	{
		if(markerSelectBlock)
			markerSelectBlock([[view annotation] title]);
	}

	-(int)addMarker:(NSString*)label latitude:(double)lat longitude:(double)lng
	{
		MKPointAnnotation* a = [[MKPointAnnotation alloc] init];
		a.coordinate = CLLocationCoordinate2DMake(lat,lng);
		a.title = label;
		[_mapView addAnnotation:a];
		[self nextId];
		[_annotations setObject:a forKey:@(_idPool)];
		return _idPool;
	}

	-(void)removeMarker:(int)identifier
	{
		MKPointAnnotation* a = [_annotations objectForKey:@(identifier)];
		if(a==nil) return;
		[_mapView removeAnnotation:a];
		[_annotations removeObjectForKey:@(identifier)];
	}

	-(void) clearMarkers
	{
		for(id key in _annotations)
		{
			MKPointAnnotation* a = [_annotations objectForKey:key];
			if(a==nil) continue;
			[_mapView removeAnnotation:a];
		}
		[_annotations removeAllObjects];
	}

	-(void)onTap:(UITapGestureRecognizer*)sender
	{
		if(sender.state == UIGestureRecognizerStateEnded && touchBlock != nil)
		{
			CGPoint l = [sender locationInView:_mapView];
			CLLocationCoordinate2D coord = [_mapView convertPoint:l toCoordinateFromView:_mapView];
			
			touchBlock(2, coord.latitude, coord.longitude);
		}
	}

	-(void)onLongPress:(UILongPressGestureRecognizer *)sender
	{
		if(touchBlock == nil) return;
		if (sender.state == UIGestureRecognizerStateBegan)
		{
			CGPoint l = [sender locationInView:_mapView];
			CLLocationCoordinate2D coord = [_mapView convertPoint:l toCoordinateFromView:_mapView];
			touchBlock(3, coord.latitude, coord.longitude);
		}
	}

	-(void)setMarkerSelectAction:(void(^)(NSString*))action
	{
		id previous = markerSelectBlock;
		markerSelectBlock = [action copy];
		[previous release];
	}

	-(void)setMapTouchAction:(void(^)(int type, double x, double y))action
	{
		id previous = touchBlock;
		touchBlock = [action copy];
		[previous release];
	}

	-(void)setMapMoveAction:(void(^)(bool))action
	{
		id previous = mapMoveBlock;
		mapMoveBlock = [action copy];
		[previous release];
	}

	- (void)mapView:(MKMapView *)mapView regionDidChangeAnimated:(BOOL)animated
	{
		if(mapMoveBlock)
			mapMoveBlock(animated);
	}

	//Zoom nightmare begins here

	-(double)longitudeToPixelSpaceX:(double)longitude
	{
		return round(MERCATOR_OFFSET + MERCATOR_RADIUS * longitude * M_PI / 180.0);
	}

	-(double)latitudeToPixelSpaceY:(double)latitude
	{
		return round(MERCATOR_OFFSET - MERCATOR_RADIUS * logf((1 + sinf(latitude * M_PI / 180.0)) / (1 - sinf(latitude * M_PI / 180.0))) / 2.0);
	}

	-(double)pixelSpaceXToLongitude:(double)pixelX
	{
		return ((round(pixelX) - MERCATOR_OFFSET) / MERCATOR_RADIUS) * 180.0 / M_PI;
	}

	-(double)pixelSpaceYToLatitude:(double)pixelY
	{
		return (M_PI / 2.0 - 2.0 * atan(exp((round(pixelY) - MERCATOR_OFFSET) / MERCATOR_RADIUS))) * 180.0 / M_PI;
	}

	-(MKCoordinateSpan)coordinateSpanWithMapView:(MKMapView *)mapView centerCoordinate:(CLLocationCoordinate2D)centerCoordinate andZoomLevel:(NSUInteger)zoomLevel
	{
		// convert center coordiate to pixel space
		double centerPixelX = [self longitudeToPixelSpaceX:centerCoordinate.longitude];
		double centerPixelY = [self latitudeToPixelSpaceY:centerCoordinate.latitude];
		
		// determine the scale value from the zoom level
		NSInteger zoomExponent = 20 - zoomLevel;
		double zoomScale = pow(2, zoomExponent);
		
		// scale the map’s size in pixel space
		CGSize mapSizeInPixels = mapView.bounds.size;
		double scaledMapWidth = mapSizeInPixels.width * zoomScale;
		double scaledMapHeight = mapSizeInPixels.height * zoomScale;
		
		// figure out the position of the top-left pixel
		double topLeftPixelX = centerPixelX - (scaledMapWidth / 2);
		double topLeftPixelY = centerPixelY - (scaledMapHeight / 2);
		
		// find delta between left and right longitudes
		CLLocationDegrees minLng = [self pixelSpaceXToLongitude:topLeftPixelX];
		CLLocationDegrees maxLng = [self pixelSpaceXToLongitude:topLeftPixelX + scaledMapWidth];
		CLLocationDegrees longitudeDelta = maxLng - minLng;
		
		// find delta between top and bottom latitudes
		CLLocationDegrees minLat = [self pixelSpaceYToLatitude:topLeftPixelY];
		CLLocationDegrees maxLat = [self pixelSpaceYToLatitude:topLeftPixelY + scaledMapHeight];
		CLLocationDegrees latitudeDelta = -1 * (maxLat - minLat);
		
		// create and return the lat/lng span
		MKCoordinateSpan span = MKCoordinateSpanMake(latitudeDelta, longitudeDelta);
		return span;
	}

-(void)moveTo:(double)lat longitude:(double)lng zoom:(double)z tilt:(double)t orientation:(double)o
	{
		z = MAX(2.0, MIN(z, 21));
		CLLocationCoordinate2D newCenter = CLLocationCoordinate2DMake(lat, lng);
		MKCoordinateSpan span = [self coordinateSpanWithMapView:_mapView centerCoordinate:newCenter andZoomLevel:z];
		_mapView.region = MKCoordinateRegionMake(newCenter, span);
	}

	-(double)getZoomLevel
	{
		CLLocationDegrees longitudeDelta = _mapView.region.span.longitudeDelta;
        double density = [[UIScreen mainScreen] scale];
		CGFloat mapWidthInPixels = _mapView.bounds.size.width * density;
        double zoomScale = longitudeDelta * MERCATOR_RADIUS * M_PI / (180.0 * mapWidthInPixels);
		double zoomer = 19.0 - log2(zoomScale);
		if ( zoomer < 0.0 ) zoomer = 0.0;

		return zoomer+2.0;
	}

@end
