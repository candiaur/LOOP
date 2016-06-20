#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerTransitioningDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.IUIViewControllerTransitioningDelegate.animationControllerForPresentedControllerPresentingControllerSourceController(iOS.UIKit.UIViewController,iOS.UIKit.UIViewController,iOS.UIKit.UIViewController):IsStripped}
- (id<UIViewControllerAnimatedTransitioning>) animationControllerForPresentedController:(UIViewController *)presented presentingController:(UIViewController *)presenting sourceController:(UIViewController *)source
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uObject* __return = ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate::animationControllerForPresentedControllerPresentingControllerSourceController(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(presented, ::g::iOS::UIKit::UIViewController_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(presenting, ::g::iOS::UIKit::UIViewController_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(source, ::g::iOS::UIKit::UIViewController_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitioningDelegate.animationControllerForDismissedController(iOS.UIKit.UIViewController):IsStripped}
- (id<UIViewControllerAnimatedTransitioning>) animationControllerForDismissedController:(UIViewController *)dismissed
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uObject* __return = ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate::animationControllerForDismissedController(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(dismissed, ::g::iOS::UIKit::UIViewController_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitioningDelegate.interactionControllerForPresentation(iOS.UIKit.IUIViewControllerAnimatedTransitioning):IsStripped}
- (id<UIViewControllerInteractiveTransitioning>) interactionControllerForPresentation:(id<UIViewControllerAnimatedTransitioning>)animator
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uObject* __return = ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate::interactionControllerForPresentation(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()), uObjC::Lifetime::GetUnoObject(animator, ::g::iOS::UIKit::Interop::IUIViewControllerAnimatedTransitioning_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitioningDelegate.interactionControllerForDismissal(iOS.UIKit.IUIViewControllerAnimatedTransitioning):IsStripped}
- (id<UIViewControllerInteractiveTransitioning>) interactionControllerForDismissal:(id<UIViewControllerAnimatedTransitioning>)animator
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uObject* __return = ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate::interactionControllerForDismissal(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()), uObjC::Lifetime::GetUnoObject(animator, ::g::iOS::UIKit::Interop::IUIViewControllerAnimatedTransitioning_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerTransitioningDelegate.presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController(iOS.UIKit.UIViewController,iOS.UIKit.UIViewController,iOS.UIKit.UIViewController):IsStripped}
- (UIPresentationController *) presentationControllerForPresentedViewController:(UIViewController *)presented presentingViewController:(UIViewController *)presenting sourceViewController:(UIViewController *)source
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIPresentationController* __return = ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate::presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(presented, ::g::iOS::UIKit::UIViewController_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(presenting, ::g::iOS::UIKit::UIViewController_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(source, ::g::iOS::UIKit::UIViewController_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
