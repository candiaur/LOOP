#define uObjC_NATIVE_TYPE MKOverlayRenderer
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::MapKit::MKOverlayRenderer*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::MKOverlayRenderer_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.MapKit.MKOverlayRenderer.initWithOverlay(iOS.MapKit.IMKOverlay):IsStripped}
//- (instancetype) initWithOverlay:(id<MKOverlay>)overlay
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKOverlayRenderer:Of(__this).initWithOverlay(iOS.MapKit.IMKOverlay):Call(uObjC::Lifetime::GetUnoObject(overlay, #{iOS.MapKit.Interop.IMKOverlay:TypeOf}))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.pointForMapPoint(iOS.MapKit.MKMapPoint):IsStripped}
//- (CGPoint) pointForMapPoint:(MKMapPoint)mapPoint
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGPoint} __return = #{iOS.MapKit.MKOverlayRenderer:Of(__this).pointForMapPoint(iOS.MapKit.MKMapPoint):Call(uObjC::Struct::ToUno_MKMapPoint(mapPoint, #{iOS.MapKit.MKMapPoint}()))};
//    return uObjC::Struct::FromUno_CGPoint(__return, ::CGPoint());
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.mapPointForPoint(iOS.CoreGraphics.CGPoint):IsStripped}
//- (MKMapPoint) mapPointForPoint:(CGPoint)point
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKMapPoint} __return = #{iOS.MapKit.MKOverlayRenderer:Of(__this).mapPointForPoint(iOS.CoreGraphics.CGPoint):Call(uObjC::Struct::ToUno_CGPoint(point, #{iOS.CoreGraphics.CGPoint}()))};
//    return uObjC::Struct::FromUno_MKMapPoint(__return, ::MKMapPoint());
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.rectForMapRect(iOS.MapKit.MKMapRect):IsStripped}
//- (CGRect) rectForMapRect:(MKMapRect)mapRect
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.MapKit.MKOverlayRenderer:Of(__this).rectForMapRect(iOS.MapKit.MKMapRect):Call(uObjC::Struct::ToUno_MKMapRect(mapRect, #{iOS.MapKit.MKMapRect}()))};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.mapRectForRect(iOS.CoreGraphics.CGRect):IsStripped}
//- (MKMapRect) mapRectForRect:(CGRect)rect
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKMapRect} __return = #{iOS.MapKit.MKOverlayRenderer:Of(__this).mapRectForRect(iOS.CoreGraphics.CGRect):Call(uObjC::Struct::ToUno_CGRect(rect, #{iOS.CoreGraphics.CGRect}()))};
//    return uObjC::Struct::FromUno_MKMapRect(__return, ::MKMapRect());
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.canDrawMapRectZoomScale(iOS.MapKit.MKMapRect,double):IsStripped}
//- (BOOL) canDrawMapRect:(MKMapRect)mapRect zoomScale:(MKZoomScale)zoomScale
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.MapKit.MKOverlayRenderer:Of(__this).canDrawMapRectZoomScale(iOS.MapKit.MKMapRect,double):Call(uObjC::Struct::ToUno_MKMapRect(mapRect, #{iOS.MapKit.MKMapRect}()), (#{double})zoomScale)};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.drawMapRectZoomScaleInContext(iOS.MapKit.MKMapRect,double,iOS.CoreGraphics.CGContextRef):IsStripped}
//- (void) drawMapRect:(MKMapRect)mapRect zoomScale:(MKZoomScale)zoomScale inContext:(CGContextRef)context
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKOverlayRenderer:Of(__this).drawMapRectZoomScaleInContext(iOS.MapKit.MKMapRect,double,iOS.CoreGraphics.CGContextRef):Call(uObjC::Struct::ToUno_MKMapRect(mapRect, #{iOS.MapKit.MKMapRect}()), (#{double})zoomScale, (#{iOS.CoreGraphics.CGContextRef})(size_t) context)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.setNeedsDisplay():IsStripped}
//- (void) setNeedsDisplay
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKOverlayRenderer:Of(__this).setNeedsDisplay():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.setNeedsDisplayInMapRect(iOS.MapKit.MKMapRect):IsStripped}
//- (void) setNeedsDisplayInMapRect:(MKMapRect)mapRect
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKOverlayRenderer:Of(__this).setNeedsDisplayInMapRect(iOS.MapKit.MKMapRect):Call(uObjC::Struct::ToUno_MKMapRect(mapRect, #{iOS.MapKit.MKMapRect}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.setNeedsDisplayInMapRectZoomScale(iOS.MapKit.MKMapRect,double):IsStripped}
//- (void) setNeedsDisplayInMapRect:(MKMapRect)mapRect zoomScale:(MKZoomScale)zoomScale
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKOverlayRenderer:Of(__this).setNeedsDisplayInMapRectZoomScale(iOS.MapKit.MKMapRect,double):Call(uObjC::Struct::ToUno_MKMapRect(mapRect, #{iOS.MapKit.MKMapRect}()), (#{double})zoomScale)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.overlay():IsStripped}
//- (id<MKOverlay>) overlay
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.IMKOverlay} __return = #{iOS.MapKit.MKOverlayRenderer:Of(__this).overlay():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, #{iOS.MapKit.IMKOverlay:TypeOf});
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.alpha():IsStripped}
//- (CGFloat) alpha
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.MapKit.MKOverlayRenderer:Of(__this).alpha():Call()};
//    return (CGFloat)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.setAlpha(double):IsStripped}
//- (void) setAlpha:(CGFloat)alpha
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKOverlayRenderer:Of(__this).setAlpha(double):Call((#{double})alpha)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKOverlayRenderer.contentScaleFactor():IsStripped}
//- (CGFloat) contentScaleFactor
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.MapKit.MKOverlayRenderer:Of(__this).contentScaleFactor():Call()};
//    return (CGFloat)__return;
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
