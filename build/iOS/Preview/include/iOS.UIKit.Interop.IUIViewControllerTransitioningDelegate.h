// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIViewControllerTransitioningDelegate.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerTransitioningDelegate;}}}}
namespace g{namespace iOS{namespace UIKit{struct UIPresentationController;}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController;}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerTransitioningDelegate :8903
// {
struct IUIViewControllerTransitioningDelegate_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate interface1;
};

IUIViewControllerTransitioningDelegate_type* IUIViewControllerTransitioningDelegate_typeof();
void IUIViewControllerTransitioningDelegate__animationControllerForDismissedController_fn(IUIViewControllerTransitioningDelegate* __this, ::g::iOS::UIKit::UIViewController* dismissed_, uObject** __retval);
void IUIViewControllerTransitioningDelegate__animationControllerForPresentedControllerPresentingControllerSourceController_fn(IUIViewControllerTransitioningDelegate* __this, ::g::iOS::UIKit::UIViewController* presented_, ::g::iOS::UIKit::UIViewController* presenting_, ::g::iOS::UIKit::UIViewController* source_, uObject** __retval);
void IUIViewControllerTransitioningDelegate__interactionControllerForDismissal_fn(IUIViewControllerTransitioningDelegate* __this, uObject* animator_, uObject** __retval);
void IUIViewControllerTransitioningDelegate__interactionControllerForPresentation_fn(IUIViewControllerTransitioningDelegate* __this, uObject* animator_, uObject** __retval);
void IUIViewControllerTransitioningDelegate__presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController_fn(IUIViewControllerTransitioningDelegate* __this, ::g::iOS::UIKit::UIViewController* presented_, ::g::iOS::UIKit::UIViewController* presenting_, ::g::iOS::UIKit::UIViewController* source_, ::g::iOS::UIKit::UIPresentationController** __retval);

struct IUIViewControllerTransitioningDelegate : ::g::ObjC::Bindings::Object
{
    uObject* animationControllerForDismissedController(::g::iOS::UIKit::UIViewController* dismissed_);
    uObject* animationControllerForPresentedControllerPresentingControllerSourceController(::g::iOS::UIKit::UIViewController* presented_, ::g::iOS::UIKit::UIViewController* presenting_, ::g::iOS::UIKit::UIViewController* source_);
    uObject* interactionControllerForDismissal(uObject* animator_);
    uObject* interactionControllerForPresentation(uObject* animator_);
    ::g::iOS::UIKit::UIPresentationController* presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController(::g::iOS::UIKit::UIViewController* presented_, ::g::iOS::UIKit::UIViewController* presenting_, ::g::iOS::UIKit::UIViewController* source_);
};
// }

}}}} // ::g::iOS::UIKit::Interop
