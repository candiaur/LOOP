#define uObjC_NATIVE_TYPE MKMapCamera
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::MapKit::MKMapCamera*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::MKMapCamera_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.MapKit.MKMapCamera._camera():IsStripped}
//+ (instancetype) camera
//{
//    #{ObjC.ID} __return = #{iOS.MapKit.MKMapCamera._camera():Call()};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera._cameraLookingAtCenterCoordinateFromEyeCoordinateEyeAltitude(iOS.CoreLocation.CLLocationCoordinate2D,iOS.CoreLocation.CLLocationCoordinate2D,double):IsStripped}
//+ (instancetype) cameraLookingAtCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate fromEyeCoordinate:(CLLocationCoordinate2D)eyeCoordinate eyeAltitude:(CLLocationDistance)eyeAltitude
//{
//    #{ObjC.ID} __return = #{iOS.MapKit.MKMapCamera._cameraLookingAtCenterCoordinateFromEyeCoordinateEyeAltitude(iOS.CoreLocation.CLLocationCoordinate2D,iOS.CoreLocation.CLLocationCoordinate2D,double):Call(uObjC::Struct::ToUno_CLLocationCoordinate2D(centerCoordinate, #{iOS.CoreLocation.CLLocationCoordinate2D}()), uObjC::Struct::ToUno_CLLocationCoordinate2D(eyeCoordinate, #{iOS.CoreLocation.CLLocationCoordinate2D}()), eyeAltitude)};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera.centerCoordinate():IsStripped}
//- (CLLocationCoordinate2D) centerCoordinate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreLocation.CLLocationCoordinate2D} __return = #{iOS.MapKit.MKMapCamera:Of(__this).centerCoordinate():Call()};
//    return uObjC::Struct::FromUno_CLLocationCoordinate2D(__return, ::CLLocationCoordinate2D());
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera.setCenterCoordinate(iOS.CoreLocation.CLLocationCoordinate2D):IsStripped}
//- (void) setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKMapCamera:Of(__this).setCenterCoordinate(iOS.CoreLocation.CLLocationCoordinate2D):Call(uObjC::Struct::ToUno_CLLocationCoordinate2D(centerCoordinate, #{iOS.CoreLocation.CLLocationCoordinate2D}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera.heading():IsStripped}
- (CLLocationDirection) heading
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = __this->heading();
    return __return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera.setHeading(double):IsStripped}
- (void) setHeading:(CLLocationDirection)heading
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setHeading(heading);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera.pitch():IsStripped}
- (CGFloat) pitch
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = __this->pitch();
    return (CGFloat)__return;
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera.setPitch(double):IsStripped}
- (void) setPitch:(CGFloat)pitch
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setPitch((double)pitch);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera.altitude():IsStripped}
//- (CLLocationDistance) altitude
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.MapKit.MKMapCamera:Of(__this).altitude():Call()};
//    return __return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera.setAltitude(double):IsStripped}
//- (void) setAltitude:(CLLocationDistance)altitude
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKMapCamera:Of(__this).setAltitude(double):Call(altitude)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera._supportsSecureCoding():IsStripped}
//+ (BOOL) supportsSecureCoding
//{
//    #{bool} __return = #{iOS.MapKit.MKMapCamera._supportsSecureCoding():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera.encodeWithCoder(iOS.Foundation.NSCoder):IsStripped}
//- (void) encodeWithCoder:(NSCoder *)aCoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKMapCamera:Of(__this).encodeWithCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(aCoder, #{iOS.Foundation.NSCoder:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKMapCamera.initWithCoder(iOS.Foundation.NSCoder):IsStripped}
//- (id) initWithCoder:(NSCoder *)aDecoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKMapCamera:Of(__this).initWithCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(aDecoder, #{iOS.Foundation.NSCoder:TypeOf}))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
