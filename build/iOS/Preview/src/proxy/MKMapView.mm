#define uObjC_NATIVE_TYPE MKMapView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::MapKit::MKMapView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::MKMapView_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.MapKit.MKMapView.setRegionAnimated(iOS.MapKit.MKCoordinateRegion,bool):IsStripped}
- (void) setRegion:(MKCoordinateRegion)region animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setRegionAnimated(uObjC::Struct::ToUno_MKCoordinateRegion(region, ::g::iOS::MapKit::MKCoordinateRegion()), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setCenterCoordinateAnimated(iOS.CoreLocation.CLLocationCoordinate2D,bool):IsStripped}
- (void) setCenterCoordinate:(CLLocationCoordinate2D)coordinate animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setCenterCoordinateAnimated(uObjC::Struct::ToUno_CLLocationCoordinate2D(coordinate, ::g::iOS::CoreLocation::CLLocationCoordinate2D()), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.regionThatFits(iOS.MapKit.MKCoordinateRegion):IsStripped}
- (MKCoordinateRegion) regionThatFits:(MKCoordinateRegion)region
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKCoordinateRegion __return = __this->regionThatFits(uObjC::Struct::ToUno_MKCoordinateRegion(region, ::g::iOS::MapKit::MKCoordinateRegion()));
    return uObjC::Struct::FromUno_MKCoordinateRegion(__return, ::MKCoordinateRegion());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setVisibleMapRectAnimated(iOS.MapKit.MKMapRect,bool):IsStripped}
- (void) setVisibleMapRect:(MKMapRect)mapRect animated:(BOOL)animate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setVisibleMapRectAnimated(uObjC::Struct::ToUno_MKMapRect(mapRect, ::g::iOS::MapKit::MKMapRect()), (bool)animate);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.mapRectThatFits(iOS.MapKit.MKMapRect):IsStripped}
- (MKMapRect) mapRectThatFits:(MKMapRect)mapRect
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKMapRect __return = __this->mapRectThatFits(uObjC::Struct::ToUno_MKMapRect(mapRect, ::g::iOS::MapKit::MKMapRect()));
    return uObjC::Struct::FromUno_MKMapRect(__return, ::MKMapRect());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setVisibleMapRectEdgePaddingAnimated(iOS.MapKit.MKMapRect,iOS.UIKit.UIEdgeInsets,bool):IsStripped}
- (void) setVisibleMapRect:(MKMapRect)mapRect edgePadding:(UIEdgeInsets)insets animated:(BOOL)animate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setVisibleMapRectEdgePaddingAnimated(uObjC::Struct::ToUno_MKMapRect(mapRect, ::g::iOS::MapKit::MKMapRect()), uObjC::Struct::ToUno_UIEdgeInsets(insets, ::g::iOS::UIKit::UIEdgeInsets()), (bool)animate);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.mapRectThatFitsEdgePadding(iOS.MapKit.MKMapRect,iOS.UIKit.UIEdgeInsets):IsStripped}
- (MKMapRect) mapRectThatFits:(MKMapRect)mapRect edgePadding:(UIEdgeInsets)insets
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKMapRect __return = __this->mapRectThatFitsEdgePadding(uObjC::Struct::ToUno_MKMapRect(mapRect, ::g::iOS::MapKit::MKMapRect()), uObjC::Struct::ToUno_UIEdgeInsets(insets, ::g::iOS::UIKit::UIEdgeInsets()));
    return uObjC::Struct::FromUno_MKMapRect(__return, ::MKMapRect());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setCameraAnimated(iOS.MapKit.MKMapCamera,bool):IsStripped}
- (void) setCamera:(MKMapCamera *)camera animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setCameraAnimated((::g::iOS::MapKit::MKMapCamera*)uObjC::Lifetime::GetUnoObject(camera, ::g::iOS::MapKit::MKMapCamera_typeof()), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.convertCoordinateToPointToView(iOS.CoreLocation.CLLocationCoordinate2D,iOS.UIKit.UIView):IsStripped}
- (CGPoint) convertCoordinate:(CLLocationCoordinate2D)coordinate toPointToView:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGPoint __return = __this->convertCoordinateToPointToView(uObjC::Struct::ToUno_CLLocationCoordinate2D(coordinate, ::g::iOS::CoreLocation::CLLocationCoordinate2D()), (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::UIKit::UIView_typeof()));
    return uObjC::Struct::FromUno_CGPoint(__return, ::CGPoint());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.convertPointToCoordinateFromView(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIView):IsStripped}
- (CLLocationCoordinate2D) convertPoint:(CGPoint)point toCoordinateFromView:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreLocation::CLLocationCoordinate2D __return = __this->convertPointToCoordinateFromView(uObjC::Struct::ToUno_CGPoint(point, ::g::iOS::CoreGraphics::CGPoint()), (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::UIKit::UIView_typeof()));
    return uObjC::Struct::FromUno_CLLocationCoordinate2D(__return, ::CLLocationCoordinate2D());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.convertRegionToRectToView(iOS.MapKit.MKCoordinateRegion,iOS.UIKit.UIView):IsStripped}
- (CGRect) convertRegion:(MKCoordinateRegion)region toRectToView:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGRect __return = __this->convertRegionToRectToView(uObjC::Struct::ToUno_MKCoordinateRegion(region, ::g::iOS::MapKit::MKCoordinateRegion()), (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::UIKit::UIView_typeof()));
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.convertRectToRegionFromView(iOS.CoreGraphics.CGRect,iOS.UIKit.UIView):IsStripped}
- (MKCoordinateRegion) convertRect:(CGRect)rect toRegionFromView:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKCoordinateRegion __return = __this->convertRectToRegionFromView(uObjC::Struct::ToUno_CGRect(rect, ::g::iOS::CoreGraphics::CGRect()), (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::UIKit::UIView_typeof()));
    return uObjC::Struct::FromUno_MKCoordinateRegion(__return, ::MKCoordinateRegion());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setUserTrackingModeAnimated(iOS.MapKit.MKUserTrackingMode,bool):IsStripped}
- (void) setUserTrackingMode:(MKUserTrackingMode)mode animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setUserTrackingModeAnimated(int(mode), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.addAnnotation(iOS.MapKit.IMKAnnotation):IsStripped}
- (void) addAnnotation:(id<MKAnnotation>)annotation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addAnnotation(uObjC::Lifetime::GetUnoObject(annotation, ::g::iOS::MapKit::Interop::IMKAnnotation_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.addAnnotations(iOS.Foundation.NSArray):IsStripped}
- (void) addAnnotations:(NSArray *)annotations
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addAnnotations((::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(annotations, ::g::iOS::Foundation::NSArray_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.removeAnnotation(iOS.MapKit.IMKAnnotation):IsStripped}
- (void) removeAnnotation:(id<MKAnnotation>)annotation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeAnnotation(uObjC::Lifetime::GetUnoObject(annotation, ::g::iOS::MapKit::Interop::IMKAnnotation_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.removeAnnotations(iOS.Foundation.NSArray):IsStripped}
- (void) removeAnnotations:(NSArray *)annotations
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeAnnotations((::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(annotations, ::g::iOS::Foundation::NSArray_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.annotationsInMapRect(iOS.MapKit.MKMapRect):IsStripped}
- (NSSet *) annotationsInMapRect:(MKMapRect)mapRect
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::Foundation::NSSet* __return = __this->annotationsInMapRect(uObjC::Struct::ToUno_MKMapRect(mapRect, ::g::iOS::MapKit::MKMapRect()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.viewForAnnotation(iOS.MapKit.IMKAnnotation):IsStripped}
- (MKAnnotationView *) viewForAnnotation:(id<MKAnnotation>)annotation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKAnnotationView* __return = __this->viewForAnnotation(uObjC::Lifetime::GetUnoObject(annotation, ::g::iOS::MapKit::Interop::IMKAnnotation_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.dequeueReusableAnnotationViewWithIdentifier(string):IsStripped}
- (MKAnnotationView *) dequeueReusableAnnotationViewWithIdentifier:(NSString *)identifier
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKAnnotationView* __return = __this->dequeueReusableAnnotationViewWithIdentifier(uObjC::UnoString(identifier));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.selectAnnotationAnimated(iOS.MapKit.IMKAnnotation,bool):IsStripped}
- (void) selectAnnotation:(id<MKAnnotation>)annotation animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->selectAnnotationAnimated(uObjC::Lifetime::GetUnoObject(annotation, ::g::iOS::MapKit::Interop::IMKAnnotation_typeof()), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.deselectAnnotationAnimated(iOS.MapKit.IMKAnnotation,bool):IsStripped}
- (void) deselectAnnotation:(id<MKAnnotation>)annotation animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->deselectAnnotationAnimated(uObjC::Lifetime::GetUnoObject(annotation, ::g::iOS::MapKit::Interop::IMKAnnotation_typeof()), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.showAnnotationsAnimated(iOS.Foundation.NSArray,bool):IsStripped}
- (void) showAnnotations:(NSArray *)annotations animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->showAnnotationsAnimated((::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(annotations, ::g::iOS::Foundation::NSArray_typeof()), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.delegate_():IsStripped}
- (id<MKMapViewDelegate>) delegate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uObject* __return = __this->delegate_();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::g::iOS::MapKit::IMKMapViewDelegate_typeof());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setDelegate(iOS.MapKit.IMKMapViewDelegate):IsStripped}
- (void) setDelegate:(id<MKMapViewDelegate>)delegate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setDelegate(uObjC::Lifetime::GetUnoObject(delegate, ::g::iOS::MapKit::Interop::IMKMapViewDelegate_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.mapType():IsStripped}
- (MKMapType) mapType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uint32_t __return = __this->mapType();
    return ::MKMapType(__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setMapType(iOS.MapKit.MKMapType):IsStripped}
- (void) setMapType:(MKMapType)mapType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setMapType(uint32_t(mapType));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.region():IsStripped}
- (MKCoordinateRegion) region
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKCoordinateRegion __return = __this->region();
    return uObjC::Struct::FromUno_MKCoordinateRegion(__return, ::MKCoordinateRegion());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setRegion(iOS.MapKit.MKCoordinateRegion):IsStripped}
- (void) setRegion:(MKCoordinateRegion)region
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setRegion(uObjC::Struct::ToUno_MKCoordinateRegion(region, ::g::iOS::MapKit::MKCoordinateRegion()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.centerCoordinate():IsStripped}
- (CLLocationCoordinate2D) centerCoordinate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreLocation::CLLocationCoordinate2D __return = __this->centerCoordinate();
    return uObjC::Struct::FromUno_CLLocationCoordinate2D(__return, ::CLLocationCoordinate2D());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setCenterCoordinate(iOS.CoreLocation.CLLocationCoordinate2D):IsStripped}
- (void) setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setCenterCoordinate(uObjC::Struct::ToUno_CLLocationCoordinate2D(centerCoordinate, ::g::iOS::CoreLocation::CLLocationCoordinate2D()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.visibleMapRect():IsStripped}
- (MKMapRect) visibleMapRect
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKMapRect __return = __this->visibleMapRect();
    return uObjC::Struct::FromUno_MKMapRect(__return, ::MKMapRect());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setVisibleMapRect(iOS.MapKit.MKMapRect):IsStripped}
- (void) setVisibleMapRect:(MKMapRect)visibleMapRect
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setVisibleMapRect(uObjC::Struct::ToUno_MKMapRect(visibleMapRect, ::g::iOS::MapKit::MKMapRect()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.camera():IsStripped}
- (MKMapCamera *) camera
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKMapCamera* __return = __this->camera();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setCamera(iOS.MapKit.MKMapCamera):IsStripped}
- (void) setCamera:(MKMapCamera *)camera
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setCamera((::g::iOS::MapKit::MKMapCamera*)uObjC::Lifetime::GetUnoObject(camera, ::g::iOS::MapKit::MKMapCamera_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.isZoomEnabled():IsStripped}
- (BOOL) isZoomEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isZoomEnabled();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setZoomEnabled(bool):IsStripped}
- (void) setZoomEnabled:(BOOL)zoomEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setZoomEnabled((bool)zoomEnabled);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.isScrollEnabled():IsStripped}
- (BOOL) isScrollEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isScrollEnabled();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setScrollEnabled(bool):IsStripped}
- (void) setScrollEnabled:(BOOL)scrollEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setScrollEnabled((bool)scrollEnabled);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.isRotateEnabled():IsStripped}
- (BOOL) isRotateEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isRotateEnabled();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setRotateEnabled(bool):IsStripped}
- (void) setRotateEnabled:(BOOL)rotateEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setRotateEnabled((bool)rotateEnabled);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.isPitchEnabled():IsStripped}
- (BOOL) isPitchEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isPitchEnabled();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setPitchEnabled(bool):IsStripped}
- (void) setPitchEnabled:(BOOL)pitchEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setPitchEnabled((bool)pitchEnabled);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.showsPointsOfInterest():IsStripped}
- (BOOL) showsPointsOfInterest
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->showsPointsOfInterest();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setShowsPointsOfInterest(bool):IsStripped}
- (void) setShowsPointsOfInterest:(BOOL)showsPointsOfInterest
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setShowsPointsOfInterest((bool)showsPointsOfInterest);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.showsBuildings():IsStripped}
- (BOOL) showsBuildings
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->showsBuildings();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setShowsBuildings(bool):IsStripped}
- (void) setShowsBuildings:(BOOL)showsBuildings
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setShowsBuildings((bool)showsBuildings);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.showsUserLocation():IsStripped}
- (BOOL) showsUserLocation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->showsUserLocation();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setShowsUserLocation(bool):IsStripped}
- (void) setShowsUserLocation:(BOOL)showsUserLocation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setShowsUserLocation((bool)showsUserLocation);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.userLocation():IsStripped}
- (MKUserLocation *) userLocation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKUserLocation* __return = __this->userLocation();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.userTrackingMode():IsStripped}
- (MKUserTrackingMode) userTrackingMode
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->userTrackingMode();
    return ::MKUserTrackingMode(__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setUserTrackingMode(iOS.MapKit.MKUserTrackingMode):IsStripped}
- (void) setUserTrackingMode:(MKUserTrackingMode)userTrackingMode
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setUserTrackingMode(int(userTrackingMode));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.isUserLocationVisible():IsStripped}
- (BOOL) isUserLocationVisible
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isUserLocationVisible();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.annotations():IsStripped}
- (NSArray *) annotations
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::Foundation::NSArray* __return = __this->annotations();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.selectedAnnotations():IsStripped}
- (NSArray *) selectedAnnotations
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::Foundation::NSArray* __return = __this->selectedAnnotations();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.setSelectedAnnotations(iOS.Foundation.NSArray):IsStripped}
- (void) setSelectedAnnotations:(NSArray *)selectedAnnotations
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setSelectedAnnotations((::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(selectedAnnotations, ::g::iOS::Foundation::NSArray_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.annotationVisibleRect():IsStripped}
- (CGRect) annotationVisibleRect
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGRect __return = __this->annotationVisibleRect();
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.addOverlayLevel(iOS.MapKit.IMKOverlay,iOS.MapKit.MKOverlayLevel):IsStripped}
- (void) addOverlay:(id<MKOverlay>)overlay level:(MKOverlayLevel)level
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addOverlayLevel(uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()), int(level));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.addOverlaysLevel(iOS.Foundation.NSArray,iOS.MapKit.MKOverlayLevel):IsStripped}
- (void) addOverlays:(NSArray *)overlays level:(MKOverlayLevel)level
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addOverlaysLevel((::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(overlays, ::g::iOS::Foundation::NSArray_typeof()), int(level));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.removeOverlay(iOS.MapKit.IMKOverlay):IsStripped}
- (void) removeOverlay:(id<MKOverlay>)overlay
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeOverlay(uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.removeOverlays(iOS.Foundation.NSArray):IsStripped}
- (void) removeOverlays:(NSArray *)overlays
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeOverlays((::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(overlays, ::g::iOS::Foundation::NSArray_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.insertOverlayAtIndexLevel(iOS.MapKit.IMKOverlay,ulong,iOS.MapKit.MKOverlayLevel):IsStripped}
- (void) insertOverlay:(id<MKOverlay>)overlay atIndex:(NSUInteger)index level:(MKOverlayLevel)level
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->insertOverlayAtIndexLevel(uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()), (uint64_t)index, int(level));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.insertOverlayAboveOverlay(iOS.MapKit.IMKOverlay,iOS.MapKit.IMKOverlay):IsStripped}
- (void) insertOverlay:(id<MKOverlay>)overlay aboveOverlay:(id<MKOverlay>)sibling
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->insertOverlayAboveOverlay(uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()), uObjC::Lifetime::GetUnoObject(sibling, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.insertOverlayBelowOverlay(iOS.MapKit.IMKOverlay,iOS.MapKit.IMKOverlay):IsStripped}
- (void) insertOverlay:(id<MKOverlay>)overlay belowOverlay:(id<MKOverlay>)sibling
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->insertOverlayBelowOverlay(uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()), uObjC::Lifetime::GetUnoObject(sibling, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.exchangeOverlayWithOverlay(iOS.MapKit.IMKOverlay,iOS.MapKit.IMKOverlay):IsStripped}
- (void) exchangeOverlay:(id<MKOverlay>)overlay1 withOverlay:(id<MKOverlay>)overlay2
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->exchangeOverlayWithOverlay(uObjC::Lifetime::GetUnoObject(overlay1, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()), uObjC::Lifetime::GetUnoObject(overlay2, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.overlaysInLevel(iOS.MapKit.MKOverlayLevel):IsStripped}
- (NSArray *) overlaysInLevel:(MKOverlayLevel)level
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::Foundation::NSArray* __return = __this->overlaysInLevel(int(level));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.rendererForOverlay(iOS.MapKit.IMKOverlay):IsStripped}
- (MKOverlayRenderer *) rendererForOverlay:(id<MKOverlay>)overlay
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKOverlayRenderer* __return = __this->rendererForOverlay(uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.viewForOverlay(iOS.MapKit.IMKOverlay):IsStripped}
- (MKOverlayView *) viewForOverlay:(id<MKOverlay>)overlay
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKOverlayView* __return = __this->viewForOverlay(uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.addOverlay(iOS.MapKit.IMKOverlay):IsStripped}
- (void) addOverlay:(id<MKOverlay>)overlay
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addOverlay(uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.addOverlays(iOS.Foundation.NSArray):IsStripped}
- (void) addOverlays:(NSArray *)overlays
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addOverlays((::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(overlays, ::g::iOS::Foundation::NSArray_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.insertOverlayAtIndex(iOS.MapKit.IMKOverlay,ulong):IsStripped}
- (void) insertOverlay:(id<MKOverlay>)overlay atIndex:(NSUInteger)index
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->insertOverlayAtIndex(uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()), (uint64_t)index);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.exchangeOverlayAtIndexWithOverlayAtIndex(ulong,ulong):IsStripped}
- (void) exchangeOverlayAtIndex:(NSUInteger)index1 withOverlayAtIndex:(NSUInteger)index2
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->exchangeOverlayAtIndexWithOverlayAtIndex((uint64_t)index1, (uint64_t)index2);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapView.overlays():IsStripped}
- (NSArray *) overlays
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::Foundation::NSArray* __return = __this->overlays();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
