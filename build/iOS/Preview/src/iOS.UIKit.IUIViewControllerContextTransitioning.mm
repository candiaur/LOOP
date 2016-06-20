// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerContextTransitioning
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.IUIViewControllerContextTransitioning.h>
#include <iOS.UIKit.UIModalPresentationStyle.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.UIKit.UIViewController.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIViewControllerContextTransitioning :6333
// {
uInterfaceType* IUIViewControllerContextTransitioning_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("iOS.UIKit.IUIViewControllerContextTransitioning", 0, 0);
    type->Reflection.SetFunctions(14,
        new uFunction("cancelInteractiveTransition", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_cancelInteractiveTransition), false, uVoid_typeof(), 0),
        new uFunction("completeTransition", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_completeTransition), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("containerView", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_containerView), false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("finalFrameForViewController", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_finalFrameForViewController), false, ::g::iOS::CoreGraphics::CGRect_typeof(), 1, ::g::iOS::UIKit::UIViewController_typeof()),
        new uFunction("finishInteractiveTransition", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_finishInteractiveTransition), false, uVoid_typeof(), 0),
        new uFunction("initialFrameForViewController", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_initialFrameForViewController), false, ::g::iOS::CoreGraphics::CGRect_typeof(), 1, ::g::iOS::UIKit::UIViewController_typeof()),
        new uFunction("isAnimated", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_isAnimated), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isInteractive", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_isInteractive), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("presentationStyle", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_presentationStyle), false, ::g::iOS::UIKit::UIModalPresentationStyle_typeof(), 0),
        new uFunction("targetTransform", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_targetTransform), false, ::g::iOS::CoreGraphics::CGAffineTransform_typeof(), 0),
        new uFunction("transitionWasCancelled", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_transitionWasCancelled), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("updateInteractiveTransition", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_updateInteractiveTransition), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("viewControllerForKey", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_viewControllerForKey), false, ::g::iOS::UIKit::UIViewController_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("viewForKey", NULL, NULL, offsetof(IUIViewControllerContextTransitioning, fp_viewForKey), false, ::g::iOS::UIKit::UIView_typeof(), 1, ::g::Uno::String_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::UIKit
