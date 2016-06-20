#define uObjC_NATIVE_TYPE MKUserLocation
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::MapKit::MKUserLocation*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::MKUserLocation_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.MapKit.MKUserLocation.isUpdating():IsStripped}
//- (BOOL) isUpdating
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.MapKit.MKUserLocation:Of(__this).isUpdating():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKUserLocation.location():IsStripped}
//- (CLLocation *) location
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreLocation.CLLocation} __return = #{iOS.MapKit.MKUserLocation:Of(__this).location():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKUserLocation.heading():IsStripped}
//- (CLHeading *) heading
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreLocation.CLHeading} __return = #{iOS.MapKit.MKUserLocation:Of(__this).heading():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKUserLocation.title():IsStripped}
- (NSString *) title
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uString* __return = __this->title();
    return uObjC::NativeString(__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKUserLocation.setTitle(string):IsStripped}
//- (void) setTitle:(NSString *)title
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKUserLocation:Of(__this).setTitle(string):Call(uObjC::UnoString(title))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKUserLocation.subtitle():IsStripped}
- (NSString *) subtitle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uString* __return = __this->subtitle();
    return uObjC::NativeString(__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKUserLocation.setSubtitle(string):IsStripped}
//- (void) setSubtitle:(NSString *)subtitle
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKUserLocation:Of(__this).setSubtitle(string):Call(uObjC::UnoString(subtitle))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKUserLocation.setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D):IsStripped}
- (void) setCoordinate:(CLLocationCoordinate2D)newCoordinate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setCoordinate(uObjC::Struct::ToUno_CLLocationCoordinate2D(newCoordinate, ::g::iOS::CoreLocation::CLLocationCoordinate2D()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKUserLocation.coordinate():IsStripped}
- (CLLocationCoordinate2D) coordinate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreLocation::CLLocationCoordinate2D __return = __this->coordinate();
    return uObjC::Struct::FromUno_CLLocationCoordinate2D(__return, ::CLLocationCoordinate2D());
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
