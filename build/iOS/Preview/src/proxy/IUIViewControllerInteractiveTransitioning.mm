#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerInteractiveTransitioning
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.IUIViewControllerInteractiveTransitioning.startInteractiveTransition(iOS.UIKit.IUIViewControllerContextTransitioning):IsStripped}
- (void) startInteractiveTransition:(id<UIViewControllerContextTransitioning>)transitionContext
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning::startInteractiveTransition(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof()), uObjC::Lifetime::GetUnoObject(transitionContext, ::g::iOS::UIKit::Interop::IUIViewControllerContextTransitioning_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerInteractiveTransitioning.completionSpeed():IsStripped}
- (CGFloat) completionSpeed
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning::completionSpeed(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof()));
    return (CGFloat)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerInteractiveTransitioning.completionCurve():IsStripped}
- (UIViewAnimationCurve) completionCurve
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning::completionCurve(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof()));
    return ::UIViewAnimationCurve(__return);
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
