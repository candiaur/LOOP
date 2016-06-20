#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerTransitionCoordinator
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.isAnimated():IsStripped}
- (BOOL) isAnimated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::isAnimated(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.presentationStyle():IsStripped}
- (UIModalPresentationStyle) presentationStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::presentationStyle(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return ::UIModalPresentationStyle(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.initiallyInteractive():IsStripped}
- (BOOL) initiallyInteractive
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::initiallyInteractive(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.isInteractive():IsStripped}
- (BOOL) isInteractive
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::isInteractive(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.isCancelled():IsStripped}
- (BOOL) isCancelled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::isCancelled(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.transitionDuration():IsStripped}
- (NSTimeInterval) transitionDuration
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::transitionDuration(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return __return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.percentComplete():IsStripped}
- (CGFloat) percentComplete
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::percentComplete(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return (CGFloat)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.completionVelocity():IsStripped}
- (CGFloat) completionVelocity
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::completionVelocity(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return (CGFloat)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.completionCurve():IsStripped}
- (UIViewAnimationCurve) completionCurve
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::completionCurve(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return ::UIViewAnimationCurve(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.viewControllerForKey(string):IsStripped}
- (UIViewController *) viewControllerForKey:(NSString *)key
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::viewControllerForKey(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()), uObjC::UnoString(key));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.viewForKey(string):IsStripped}
- (UIView *) viewForKey:(NSString *)key
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIView* __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::viewForKey(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()), uObjC::UnoString(key));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.containerView():IsStripped}
- (UIView *) containerView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIView* __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::containerView(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitionCoordinator.targetTransform():IsStripped}
- (CGAffineTransform) targetTransform
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGAffineTransform __return = ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator::targetTransform(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
    return uObjC::Struct::FromUno_CGAffineTransform(__return, ::CGAffineTransform());
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
