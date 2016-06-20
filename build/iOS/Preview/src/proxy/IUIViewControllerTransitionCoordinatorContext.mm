#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerTransitionCoordinatorContext
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.isAnimated():IsStripped}
- (BOOL) isAnimated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::isAnimated(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.presentationStyle():IsStripped}
- (UIModalPresentationStyle) presentationStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::presentationStyle(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return ::UIModalPresentationStyle(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.initiallyInteractive():IsStripped}
- (BOOL) initiallyInteractive
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::initiallyInteractive(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.isInteractive():IsStripped}
- (BOOL) isInteractive
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::isInteractive(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.isCancelled():IsStripped}
- (BOOL) isCancelled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::isCancelled(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.transitionDuration():IsStripped}
- (NSTimeInterval) transitionDuration
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::transitionDuration(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return __return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.percentComplete():IsStripped}
- (CGFloat) percentComplete
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::percentComplete(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return (CGFloat)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.completionVelocity():IsStripped}
- (CGFloat) completionVelocity
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::completionVelocity(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return (CGFloat)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.completionCurve():IsStripped}
- (UIViewAnimationCurve) completionCurve
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::completionCurve(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return ::UIViewAnimationCurve(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.viewControllerForKey(string):IsStripped}
- (UIViewController *) viewControllerForKey:(NSString *)key
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::viewControllerForKey(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()), uObjC::UnoString(key));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.viewForKey(string):IsStripped}
- (UIView *) viewForKey:(NSString *)key
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIView* __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::viewForKey(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()), uObjC::UnoString(key));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.containerView():IsStripped}
- (UIView *) containerView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIView* __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::containerView(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.targetTransform():IsStripped}
- (CGAffineTransform) targetTransform
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGAffineTransform __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext::targetTransform(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()));
    return uObjC::Struct::FromUno_CGAffineTransform(__return, ::CGAffineTransform());
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
