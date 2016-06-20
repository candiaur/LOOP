#define uObjC_NATIVE_TYPE MKAnnotationView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::MapKit::MKAnnotationView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::MKAnnotationView_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.MapKit.MKAnnotationView.initWithAnnotationReuseIdentifier(iOS.MapKit.IMKAnnotation,string):IsStripped}
//- (instancetype) initWithAnnotation:(id<MKAnnotation>)annotation reuseIdentifier:(NSString *)reuseIdentifier
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).initWithAnnotationReuseIdentifier(iOS.MapKit.IMKAnnotation,string):Call(uObjC::Lifetime::GetUnoObject(annotation, #{iOS.MapKit.Interop.IMKAnnotation:TypeOf}), uObjC::UnoString(reuseIdentifier))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.prepareForReuse():IsStripped}
//- (void) prepareForReuse
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).prepareForReuse():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setSelectedAnimated(bool,bool):IsStripped}
//- (void) setSelected:(BOOL)selected animated:(BOOL)animated
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setSelectedAnimated(bool,bool):Call((#{bool})selected, (#{bool})animated)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setDragStateAnimated(iOS.MapKit.MKAnnotationViewDragState,bool):IsStripped}
//- (void) setDragState:(MKAnnotationViewDragState)newDragState animated:(BOOL)animated
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setDragStateAnimated(iOS.MapKit.MKAnnotationViewDragState,bool):Call(#{uint}(newDragState), (#{bool})animated)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.reuseIdentifier():IsStripped}
//- (NSString *) reuseIdentifier
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{string} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).reuseIdentifier():Call()};
//    return uObjC::NativeString(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.annotation():IsStripped}
//- (id<MKAnnotation>) annotation
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.IMKAnnotation} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).annotation():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, #{iOS.MapKit.IMKAnnotation:TypeOf});
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setAnnotation(iOS.MapKit.IMKAnnotation):IsStripped}
//- (void) setAnnotation:(id<MKAnnotation>)annotation
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setAnnotation(iOS.MapKit.IMKAnnotation):Call(uObjC::Lifetime::GetUnoObject(annotation, #{iOS.MapKit.Interop.IMKAnnotation:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.image():IsStripped}
//- (UIImage *) image
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIImage} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).image():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setImage(iOS.UIKit.UIImage):IsStripped}
//- (void) setImage:(UIImage *)image
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setImage(iOS.UIKit.UIImage):Call((#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(image, #{iOS.UIKit.UIImage:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.centerOffset():IsStripped}
//- (CGPoint) centerOffset
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGPoint} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).centerOffset():Call()};
//    return uObjC::Struct::FromUno_CGPoint(__return, ::CGPoint());
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setCenterOffset(iOS.CoreGraphics.CGPoint):IsStripped}
//- (void) setCenterOffset:(CGPoint)centerOffset
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setCenterOffset(iOS.CoreGraphics.CGPoint):Call(uObjC::Struct::ToUno_CGPoint(centerOffset, #{iOS.CoreGraphics.CGPoint}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.calloutOffset():IsStripped}
//- (CGPoint) calloutOffset
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGPoint} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).calloutOffset():Call()};
//    return uObjC::Struct::FromUno_CGPoint(__return, ::CGPoint());
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setCalloutOffset(iOS.CoreGraphics.CGPoint):IsStripped}
//- (void) setCalloutOffset:(CGPoint)calloutOffset
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setCalloutOffset(iOS.CoreGraphics.CGPoint):Call(uObjC::Struct::ToUno_CGPoint(calloutOffset, #{iOS.CoreGraphics.CGPoint}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.isEnabled():IsStripped}
//- (BOOL) isEnabled
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).isEnabled():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setEnabled(bool):IsStripped}
//- (void) setEnabled:(BOOL)enabled
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setEnabled(bool):Call((#{bool})enabled)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.isHighlighted():IsStripped}
//- (BOOL) isHighlighted
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).isHighlighted():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setHighlighted(bool):IsStripped}
//- (void) setHighlighted:(BOOL)highlighted
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setHighlighted(bool):Call((#{bool})highlighted)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.isSelected():IsStripped}
//- (BOOL) isSelected
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).isSelected():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setSelected(bool):IsStripped}
//- (void) setSelected:(BOOL)selected
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setSelected(bool):Call((#{bool})selected)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.canShowCallout():IsStripped}
//- (BOOL) canShowCallout
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).canShowCallout():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setCanShowCallout(bool):IsStripped}
//- (void) setCanShowCallout:(BOOL)canShowCallout
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setCanShowCallout(bool):Call((#{bool})canShowCallout)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.leftCalloutAccessoryView():IsStripped}
//- (UIView *) leftCalloutAccessoryView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).leftCalloutAccessoryView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setLeftCalloutAccessoryView(iOS.UIKit.UIView):IsStripped}
//- (void) setLeftCalloutAccessoryView:(UIView *)leftCalloutAccessoryView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setLeftCalloutAccessoryView(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(leftCalloutAccessoryView, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.rightCalloutAccessoryView():IsStripped}
//- (UIView *) rightCalloutAccessoryView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).rightCalloutAccessoryView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setRightCalloutAccessoryView(iOS.UIKit.UIView):IsStripped}
//- (void) setRightCalloutAccessoryView:(UIView *)rightCalloutAccessoryView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setRightCalloutAccessoryView(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(rightCalloutAccessoryView, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.isDraggable():IsStripped}
//- (BOOL) isDraggable
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).isDraggable():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setDraggable(bool):IsStripped}
//- (void) setDraggable:(BOOL)draggable
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setDraggable(bool):Call((#{bool})draggable)};
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.dragState():IsStripped}
//- (MKAnnotationViewDragState) dragState
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationViewDragState} __return = #{iOS.MapKit.MKAnnotationView:Of(__this).dragState():Call()};
//    return ::MKAnnotationViewDragState(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.MapKit.MKAnnotationView.setDragState(iOS.MapKit.MKAnnotationViewDragState):IsStripped}
//- (void) setDragState:(MKAnnotationViewDragState)dragState
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.MapKit.MKAnnotationView:Of(__this).setDragState(iOS.MapKit.MKAnnotationViewDragState):Call(#{uint}(dragState))};
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
