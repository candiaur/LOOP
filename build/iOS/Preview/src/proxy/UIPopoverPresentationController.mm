#define uObjC_NATIVE_TYPE UIPopoverPresentationController
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIPopoverPresentationController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIPopoverPresentationController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UIPopoverPresentationController.delegate_():IsStripped}
//- (id<UIPopoverPresentationControllerDelegate>) delegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.IUIPopoverPresentationControllerDelegate} __return = #{iOS.UIKit.UIPopoverPresentationController:Of(__this).delegate_():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, #{iOS.UIKit.IUIPopoverPresentationControllerDelegate:TypeOf});
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.setDelegate(iOS.UIKit.IUIPopoverPresentationControllerDelegate):IsStripped}
//- (void) setDelegate:(id<UIPopoverPresentationControllerDelegate>)delegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPopoverPresentationController:Of(__this).setDelegate(iOS.UIKit.IUIPopoverPresentationControllerDelegate):Call(uObjC::Lifetime::GetUnoObject(delegate, #{iOS.UIKit.Interop.IUIPopoverPresentationControllerDelegate:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.permittedArrowDirections():IsStripped}
//- (UIPopoverArrowDirection) permittedArrowDirections
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPopoverArrowDirection} __return = #{iOS.UIKit.UIPopoverPresentationController:Of(__this).permittedArrowDirections():Call()};
//    return ::UIPopoverArrowDirection(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.setPermittedArrowDirections(iOS.UIKit.UIPopoverArrowDirection):IsStripped}
//- (void) setPermittedArrowDirections:(UIPopoverArrowDirection)permittedArrowDirections
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPopoverPresentationController:Of(__this).setPermittedArrowDirections(iOS.UIKit.UIPopoverArrowDirection):Call(#{uint}(permittedArrowDirections))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.sourceView():IsStripped}
//- (UIView *) sourceView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIPopoverPresentationController:Of(__this).sourceView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.setSourceView(iOS.UIKit.UIView):IsStripped}
//- (void) setSourceView:(UIView *)sourceView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPopoverPresentationController:Of(__this).setSourceView(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(sourceView, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.sourceRect():IsStripped}
//- (CGRect) sourceRect
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.UIKit.UIPopoverPresentationController:Of(__this).sourceRect():Call()};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.setSourceRect(iOS.CoreGraphics.CGRect):IsStripped}
//- (void) setSourceRect:(CGRect)sourceRect
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPopoverPresentationController:Of(__this).setSourceRect(iOS.CoreGraphics.CGRect):Call(uObjC::Struct::ToUno_CGRect(sourceRect, #{iOS.CoreGraphics.CGRect}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.barButtonItem():IsStripped}
//- (UIBarButtonItem *) barButtonItem
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem} __return = #{iOS.UIKit.UIPopoverPresentationController:Of(__this).barButtonItem():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.setBarButtonItem(iOS.UIKit.UIBarButtonItem):IsStripped}
//- (void) setBarButtonItem:(UIBarButtonItem *)barButtonItem
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPopoverPresentationController:Of(__this).setBarButtonItem(iOS.UIKit.UIBarButtonItem):Call((#{iOS.UIKit.UIBarButtonItem})uObjC::Lifetime::GetUnoObject(barButtonItem, #{iOS.UIKit.UIBarButtonItem:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.arrowDirection():IsStripped}
//- (UIPopoverArrowDirection) arrowDirection
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPopoverArrowDirection} __return = #{iOS.UIKit.UIPopoverPresentationController:Of(__this).arrowDirection():Call()};
//    return ::UIPopoverArrowDirection(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.passthroughViews():IsStripped}
//- (NSArray *) passthroughViews
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UIPopoverPresentationController:Of(__this).passthroughViews():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.setPassthroughViews(iOS.Foundation.NSArray):IsStripped}
//- (void) setPassthroughViews:(NSArray *)passthroughViews
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPopoverPresentationController:Of(__this).setPassthroughViews(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(passthroughViews, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.backgroundColor():IsStripped}
//- (UIColor *) backgroundColor
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIColor} __return = #{iOS.UIKit.UIPopoverPresentationController:Of(__this).backgroundColor():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.setBackgroundColor(iOS.UIKit.UIColor):IsStripped}
//- (void) setBackgroundColor:(UIColor *)backgroundColor
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPopoverPresentationController:Of(__this).setBackgroundColor(iOS.UIKit.UIColor):Call((#{iOS.UIKit.UIColor})uObjC::Lifetime::GetUnoObject(backgroundColor, #{iOS.UIKit.UIColor:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.popoverLayoutMargins():IsStripped}
//- (UIEdgeInsets) popoverLayoutMargins
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIEdgeInsets} __return = #{iOS.UIKit.UIPopoverPresentationController:Of(__this).popoverLayoutMargins():Call()};
//    return uObjC::Struct::FromUno_UIEdgeInsets(__return, ::UIEdgeInsets());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPopoverPresentationController.setPopoverLayoutMargins(iOS.UIKit.UIEdgeInsets):IsStripped}
//- (void) setPopoverLayoutMargins:(UIEdgeInsets)popoverLayoutMargins
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPopoverPresentationController:Of(__this).setPopoverLayoutMargins(iOS.UIKit.UIEdgeInsets):Call(uObjC::Struct::ToUno_UIEdgeInsets(popoverLayoutMargins, #{iOS.UIKit.UIEdgeInsets}()))};
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
