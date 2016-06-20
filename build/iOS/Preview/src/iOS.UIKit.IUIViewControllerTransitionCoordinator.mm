// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerTransitionCoordinator
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.IUIViewControllerTransitionCoordinator.h>
#include <iOS.UIKit.UIModalPresentationStyle.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.UIKit.UIViewAnimationCurve.h>
#include <iOS.UIKit.UIViewController.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIViewControllerTransitionCoordinator :6411
// {
uInterfaceType* IUIViewControllerTransitionCoordinator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("iOS.UIKit.IUIViewControllerTransitionCoordinator", 0, 0);
    type->Reflection.SetFunctions(13,
        new uFunction("completionCurve", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_completionCurve), false, ::g::iOS::UIKit::UIViewAnimationCurve_typeof(), 0),
        new uFunction("completionVelocity", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_completionVelocity), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("containerView", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_containerView), false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("initiallyInteractive", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_initiallyInteractive), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isAnimated", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_isAnimated), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isCancelled", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_isCancelled), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isInteractive", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_isInteractive), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("percentComplete", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_percentComplete), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("presentationStyle", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_presentationStyle), false, ::g::iOS::UIKit::UIModalPresentationStyle_typeof(), 0),
        new uFunction("targetTransform", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_targetTransform), false, ::g::iOS::CoreGraphics::CGAffineTransform_typeof(), 0),
        new uFunction("transitionDuration", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_transitionDuration), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("viewControllerForKey", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_viewControllerForKey), false, ::g::iOS::UIKit::UIViewController_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("viewForKey", NULL, NULL, offsetof(IUIViewControllerTransitionCoordinator, fp_viewForKey), false, ::g::iOS::UIKit::UIView_typeof(), 1, ::g::Uno::String_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::UIKit
