#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE MKOverlay
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::IMKOverlay_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.MapKit.IMKOverlay.intersectsMapRect(iOS.MapKit.MKMapRect):IsStripped}
- (BOOL) intersectsMapRect:(MKMapRect)mapRect
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::MapKit::IMKOverlay::intersectsMapRect(uInterface(__this, ::g::iOS::MapKit::IMKOverlay_typeof()), uObjC::Struct::ToUno_MKMapRect(mapRect, ::g::iOS::MapKit::MKMapRect()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKOverlay.canReplaceMapContent():IsStripped}
- (BOOL) canReplaceMapContent
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::MapKit::IMKOverlay::canReplaceMapContent(uInterface(__this, ::g::iOS::MapKit::IMKOverlay_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKOverlay.coordinate():IsStripped}
- (CLLocationCoordinate2D) coordinate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreLocation::CLLocationCoordinate2D __return = ::g::iOS::MapKit::IMKOverlay::coordinate(uInterface(__this, ::g::iOS::MapKit::IMKOverlay_typeof()));
    return uObjC::Struct::FromUno_CLLocationCoordinate2D(__return, ::CLLocationCoordinate2D());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKOverlay.boundingMapRect():IsStripped}
- (MKMapRect) boundingMapRect
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKMapRect __return = ::g::iOS::MapKit::IMKOverlay::boundingMapRect(uInterface(__this, ::g::iOS::MapKit::IMKOverlay_typeof()));
    return uObjC::Struct::FromUno_MKMapRect(__return, ::MKMapRect());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKOverlay.setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D):IsStripped}
- (void) setCoordinate:(CLLocationCoordinate2D)newCoordinate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKOverlay::setCoordinate(uInterface(__this, ::g::iOS::MapKit::IMKOverlay_typeof()), uObjC::Struct::ToUno_CLLocationCoordinate2D(newCoordinate, ::g::iOS::CoreLocation::CLLocationCoordinate2D()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKOverlay.title():IsStripped}
- (NSString *) title
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uString* __return = ::g::iOS::MapKit::IMKOverlay::title(uInterface(__this, ::g::iOS::MapKit::IMKOverlay_typeof()));
    return uObjC::NativeString(__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKOverlay.subtitle():IsStripped}
- (NSString *) subtitle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uString* __return = ::g::iOS::MapKit::IMKOverlay::subtitle(uInterface(__this, ::g::iOS::MapKit::IMKOverlay_typeof()));
    return uObjC::NativeString(__return);
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
