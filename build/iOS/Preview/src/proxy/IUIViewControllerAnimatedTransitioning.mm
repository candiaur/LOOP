#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerAnimatedTransitioning
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.IUIViewControllerAnimatedTransitioning.transitionDuration(iOS.UIKit.IUIViewControllerContextTransitioning):IsStripped}
- (NSTimeInterval) transitionDuration:(id<UIViewControllerContextTransitioning>)transitionContext
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning::transitionDuration(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()), uObjC::Lifetime::GetUnoObject(transitionContext, ::g::iOS::UIKit::Interop::IUIViewControllerContextTransitioning_typeof()));
    return __return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerAnimatedTransitioning.animateTransition(iOS.UIKit.IUIViewControllerContextTransitioning):IsStripped}
- (void) animateTransition:(id<UIViewControllerContextTransitioning>)transitionContext
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning::animateTransition(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()), uObjC::Lifetime::GetUnoObject(transitionContext, ::g::iOS::UIKit::Interop::IUIViewControllerContextTransitioning_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIViewControllerAnimatedTransitioning.animationEnded(bool):IsStripped}
- (void) animationEnded:(BOOL)transitionCompleted
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning::animationEnded(uInterface(__this, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()), (bool)transitionCompleted);
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
