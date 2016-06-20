#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerContextTransitioning
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.containerView():IsStripped}
- (UIView *) containerView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIView* __return = ::g::iOS::UIKit::IUIViewControllerContextTransitioning::containerView(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.isAnimated():IsStripped}
- (BOOL) isAnimated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerContextTransitioning::isAnimated(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.isInteractive():IsStripped}
- (BOOL) isInteractive
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerContextTransitioning::isInteractive(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.transitionWasCancelled():IsStripped}
- (BOOL) transitionWasCancelled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::g::iOS::UIKit::IUIViewControllerContextTransitioning::transitionWasCancelled(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.presentationStyle():IsStripped}
- (UIModalPresentationStyle) presentationStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::g::iOS::UIKit::IUIViewControllerContextTransitioning::presentationStyle(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
    return ::UIModalPresentationStyle(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.updateInteractiveTransition(double):IsStripped}
- (void) updateInteractiveTransition:(CGFloat)percentComplete
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIViewControllerContextTransitioning::updateInteractiveTransition(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()), (double)percentComplete);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.finishInteractiveTransition():IsStripped}
- (void) finishInteractiveTransition
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIViewControllerContextTransitioning::finishInteractiveTransition(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.cancelInteractiveTransition():IsStripped}
- (void) cancelInteractiveTransition
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIViewControllerContextTransitioning::cancelInteractiveTransition(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.completeTransition(bool):IsStripped}
- (void) completeTransition:(BOOL)didComplete
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIViewControllerContextTransitioning::completeTransition(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()), (bool)didComplete);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.viewControllerForKey(string):IsStripped}
- (UIViewController *) viewControllerForKey:(NSString *)key
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = ::g::iOS::UIKit::IUIViewControllerContextTransitioning::viewControllerForKey(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()), uObjC::UnoString(key));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.viewForKey(string):IsStripped}
- (UIView *) viewForKey:(NSString *)key
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIView* __return = ::g::iOS::UIKit::IUIViewControllerContextTransitioning::viewForKey(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()), uObjC::UnoString(key));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.targetTransform():IsStripped}
- (CGAffineTransform) targetTransform
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGAffineTransform __return = ::g::iOS::UIKit::IUIViewControllerContextTransitioning::targetTransform(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
    return uObjC::Struct::FromUno_CGAffineTransform(__return, ::CGAffineTransform());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.initialFrameForViewController(iOS.UIKit.UIViewController):IsStripped}
- (CGRect) initialFrameForViewController:(UIViewController *)vc
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGRect __return = ::g::iOS::UIKit::IUIViewControllerContextTransitioning::initialFrameForViewController(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(vc, ::g::iOS::UIKit::UIViewController_typeof()));
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerContextTransitioning.finalFrameForViewController(iOS.UIKit.UIViewController):IsStripped}
- (CGRect) finalFrameForViewController:(UIViewController *)vc
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGRect __return = ::g::iOS::UIKit::IUIViewControllerContextTransitioning::finalFrameForViewController(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(vc, ::g::iOS::UIKit::UIViewController_typeof()));
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
