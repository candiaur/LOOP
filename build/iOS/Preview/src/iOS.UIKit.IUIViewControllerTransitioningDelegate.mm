// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerTransitioningDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.IUIViewControllerAnimatedTransitioning.h>
#include <iOS.UIKit.IUIViewControllerInteractiveTransitioning.h>
#include <iOS.UIKit.IUIViewControllerTransitioningDelegate.h>
#include <iOS.UIKit.UIPresentationController.h>
#include <iOS.UIKit.UIViewController.h>

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIViewControllerTransitioningDelegate :6490
// {
uInterfaceType* IUIViewControllerTransitioningDelegate_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("iOS.UIKit.IUIViewControllerTransitioningDelegate", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("animationControllerForDismissedController", NULL, NULL, offsetof(IUIViewControllerTransitioningDelegate, fp_animationControllerForDismissedController), false, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof(), 1, ::g::iOS::UIKit::UIViewController_typeof()),
        new uFunction("animationControllerForPresentedControllerPresentingControllerSourceController", NULL, NULL, offsetof(IUIViewControllerTransitioningDelegate, fp_animationControllerForPresentedControllerPresentingControllerSourceController), false, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof(), 3, ::g::iOS::UIKit::UIViewController_typeof(), ::g::iOS::UIKit::UIViewController_typeof(), ::g::iOS::UIKit::UIViewController_typeof()),
        new uFunction("interactionControllerForDismissal", NULL, NULL, offsetof(IUIViewControllerTransitioningDelegate, fp_interactionControllerForDismissal), false, ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()),
        new uFunction("interactionControllerForPresentation", NULL, NULL, offsetof(IUIViewControllerTransitioningDelegate, fp_interactionControllerForPresentation), false, ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()),
        new uFunction("presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController", NULL, NULL, offsetof(IUIViewControllerTransitioningDelegate, fp_presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController), false, ::g::iOS::UIKit::UIPresentationController_typeof(), 3, ::g::iOS::UIKit::UIViewController_typeof(), ::g::iOS::UIKit::UIViewController_typeof(), ::g::iOS::UIKit::UIViewController_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::UIKit
