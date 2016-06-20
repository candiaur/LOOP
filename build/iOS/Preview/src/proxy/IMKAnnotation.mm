#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE MKAnnotation
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::IMKAnnotation_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.MapKit.IMKAnnotation.setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D):IsStripped}
- (void) setCoordinate:(CLLocationCoordinate2D)newCoordinate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKAnnotation::setCoordinate(uInterface(__this, ::g::iOS::MapKit::IMKAnnotation_typeof()), uObjC::Struct::ToUno_CLLocationCoordinate2D(newCoordinate, ::g::iOS::CoreLocation::CLLocationCoordinate2D()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKAnnotation.coordinate():IsStripped}
- (CLLocationCoordinate2D) coordinate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreLocation::CLLocationCoordinate2D __return = ::g::iOS::MapKit::IMKAnnotation::coordinate(uInterface(__this, ::g::iOS::MapKit::IMKAnnotation_typeof()));
    return uObjC::Struct::FromUno_CLLocationCoordinate2D(__return, ::CLLocationCoordinate2D());
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKAnnotation.title():IsStripped}
- (NSString *) title
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uString* __return = ::g::iOS::MapKit::IMKAnnotation::title(uInterface(__this, ::g::iOS::MapKit::IMKAnnotation_typeof()));
    return uObjC::NativeString(__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKAnnotation.subtitle():IsStripped}
- (NSString *) subtitle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uString* __return = ::g::iOS::MapKit::IMKAnnotation::subtitle(uInterface(__this, ::g::iOS::MapKit::IMKAnnotation_typeof()));
    return uObjC::NativeString(__return);
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
