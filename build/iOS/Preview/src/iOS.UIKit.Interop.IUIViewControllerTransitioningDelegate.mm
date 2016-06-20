// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerTransitioningDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUIViewControllerTransitioningDelegate.h>
#include <iOS.UIKit.IUIViewControllerAnimatedTransitioning.h>
#include <iOS.UIKit.IUIViewControllerInteractiveTransitioning.h>
#include <iOS.UIKit.UIPresentationController.h>
#include <iOS.UIKit.UIViewController.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerTransitioningDelegate :8903
// {
static void IUIViewControllerTransitioningDelegate_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUIViewControllerTransitioningDelegate_type, interface0),
        ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof(), offsetof(IUIViewControllerTransitioningDelegate_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(5,
        new uFunction("animationControllerForDismissedController", NULL, (void*)IUIViewControllerTransitioningDelegate__animationControllerForDismissedController_fn, 0, false, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof(), 1, ::g::iOS::UIKit::UIViewController_typeof()),
        new uFunction("animationControllerForPresentedControllerPresentingControllerSourceController", NULL, (void*)IUIViewControllerTransitioningDelegate__animationControllerForPresentedControllerPresentingControllerSourceController_fn, 0, false, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof(), 3, ::g::iOS::UIKit::UIViewController_typeof(), ::g::iOS::UIKit::UIViewController_typeof(), ::g::iOS::UIKit::UIViewController_typeof()),
        new uFunction("interactionControllerForDismissal", NULL, (void*)IUIViewControllerTransitioningDelegate__interactionControllerForDismissal_fn, 0, false, ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()),
        new uFunction("interactionControllerForPresentation", NULL, (void*)IUIViewControllerTransitioningDelegate__interactionControllerForPresentation_fn, 0, false, ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()),
        new uFunction("presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController", NULL, (void*)IUIViewControllerTransitioningDelegate__presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController_fn, 0, false, ::g::iOS::UIKit::UIPresentationController_typeof(), 3, ::g::iOS::UIKit::UIViewController_typeof(), ::g::iOS::UIKit::UIViewController_typeof(), ::g::iOS::UIKit::UIViewController_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

IUIViewControllerTransitioningDelegate_type* IUIViewControllerTransitioningDelegate_typeof()
{
    static uSStrong<IUIViewControllerTransitioningDelegate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUIViewControllerTransitioningDelegate);
    options.TypeSize = sizeof(IUIViewControllerTransitioningDelegate_type);
    type = (IUIViewControllerTransitioningDelegate_type*)uClassType::New("iOS.UIKit.Interop.IUIViewControllerTransitioningDelegate", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IUIViewControllerTransitioningDelegate_build;
    type->interface1.fp_animationControllerForPresentedControllerPresentingControllerSourceController = (void(*)(uObject*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, uObject**))IUIViewControllerTransitioningDelegate__animationControllerForPresentedControllerPresentingControllerSourceController_fn;
    type->interface1.fp_animationControllerForDismissedController = (void(*)(uObject*, ::g::iOS::UIKit::UIViewController*, uObject**))IUIViewControllerTransitioningDelegate__animationControllerForDismissedController_fn;
    type->interface1.fp_interactionControllerForPresentation = (void(*)(uObject*, uObject*, uObject**))IUIViewControllerTransitioningDelegate__interactionControllerForPresentation_fn;
    type->interface1.fp_interactionControllerForDismissal = (void(*)(uObject*, uObject*, uObject**))IUIViewControllerTransitioningDelegate__interactionControllerForDismissal_fn;
    type->interface1.fp_presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController = (void(*)(uObject*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIPresentationController**))IUIViewControllerTransitioningDelegate__presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.UIKit.IUIViewControllerAnimatedTransitioning animationControllerForDismissedController(iOS.UIKit.UIViewController dismissed) :8915
void IUIViewControllerTransitioningDelegate__animationControllerForDismissedController_fn(IUIViewControllerTransitioningDelegate* __this, ::g::iOS::UIKit::UIViewController* dismissed_, uObject** __retval)
{
    *__retval = __this->animationControllerForDismissedController(dismissed_);
}

// public extern iOS.UIKit.IUIViewControllerAnimatedTransitioning animationControllerForPresentedControllerPresentingControllerSourceController(iOS.UIKit.UIViewController presented, iOS.UIKit.UIViewController presenting, iOS.UIKit.UIViewController source) :8912
void IUIViewControllerTransitioningDelegate__animationControllerForPresentedControllerPresentingControllerSourceController_fn(IUIViewControllerTransitioningDelegate* __this, ::g::iOS::UIKit::UIViewController* presented_, ::g::iOS::UIKit::UIViewController* presenting_, ::g::iOS::UIKit::UIViewController* source_, uObject** __retval)
{
    *__retval = __this->animationControllerForPresentedControllerPresentingControllerSourceController(presented_, presenting_, source_);
}

// public extern iOS.UIKit.IUIViewControllerInteractiveTransitioning interactionControllerForDismissal(iOS.UIKit.IUIViewControllerAnimatedTransitioning animator) :8921
void IUIViewControllerTransitioningDelegate__interactionControllerForDismissal_fn(IUIViewControllerTransitioningDelegate* __this, uObject* animator_, uObject** __retval)
{
    *__retval = __this->interactionControllerForDismissal(animator_);
}

// public extern iOS.UIKit.IUIViewControllerInteractiveTransitioning interactionControllerForPresentation(iOS.UIKit.IUIViewControllerAnimatedTransitioning animator) :8918
void IUIViewControllerTransitioningDelegate__interactionControllerForPresentation_fn(IUIViewControllerTransitioningDelegate* __this, uObject* animator_, uObject** __retval)
{
    *__retval = __this->interactionControllerForPresentation(animator_);
}

// public extern iOS.UIKit.UIPresentationController presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController(iOS.UIKit.UIViewController presented, iOS.UIKit.UIViewController presenting, iOS.UIKit.UIViewController source) :8924
void IUIViewControllerTransitioningDelegate__presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController_fn(IUIViewControllerTransitioningDelegate* __this, ::g::iOS::UIKit::UIViewController* presented_, ::g::iOS::UIKit::UIViewController* presenting_, ::g::iOS::UIKit::UIViewController* source_, ::g::iOS::UIKit::UIPresentationController** __retval)
{
    *__retval = __this->presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController(presented_, presenting_, source_);
}

// public extern iOS.UIKit.IUIViewControllerAnimatedTransitioning animationControllerForDismissedController(iOS.UIKit.UIViewController dismissed) [instance] :8915
uObject* IUIViewControllerTransitioningDelegate::animationControllerForDismissedController(::g::iOS::UIKit::UIViewController* dismissed_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitioningDelegate", "animationControllerForDismissedController(iOS.UIKit.UIViewController)");
    id<UIViewControllerAnimatedTransitioning> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UIViewControllerAnimatedTransitioning>, @selector(animationControllerForDismissedController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)dismissed_));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUIViewControllerAnimatedTransitioning_typeof());
}

// public extern iOS.UIKit.IUIViewControllerAnimatedTransitioning animationControllerForPresentedControllerPresentingControllerSourceController(iOS.UIKit.UIViewController presented, iOS.UIKit.UIViewController presenting, iOS.UIKit.UIViewController source) [instance] :8912
uObject* IUIViewControllerTransitioningDelegate::animationControllerForPresentedControllerPresentingControllerSourceController(::g::iOS::UIKit::UIViewController* presented_, ::g::iOS::UIKit::UIViewController* presenting_, ::g::iOS::UIKit::UIViewController* source_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitioningDelegate", "animationControllerForPresentedControllerPresentingControllerSourceController(iOS.UIKit.UIViewController,iOS.UIKit.UIViewController,iOS.UIKit.UIViewController)");
    id<UIViewControllerAnimatedTransitioning> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UIViewControllerAnimatedTransitioning>, @selector(animationControllerForPresentedController:presentingController:sourceController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)presented_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)presenting_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)source_));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUIViewControllerAnimatedTransitioning_typeof());
}

// public extern iOS.UIKit.IUIViewControllerInteractiveTransitioning interactionControllerForDismissal(iOS.UIKit.IUIViewControllerAnimatedTransitioning animator) [instance] :8921
uObject* IUIViewControllerTransitioningDelegate::interactionControllerForDismissal(uObject* animator_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitioningDelegate", "interactionControllerForDismissal(iOS.UIKit.IUIViewControllerAnimatedTransitioning)");
    id<UIViewControllerInteractiveTransitioning> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UIViewControllerInteractiveTransitioning>, @selector(interactionControllerForDismissal:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)animator_, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUIViewControllerInteractiveTransitioning_typeof());
}

// public extern iOS.UIKit.IUIViewControllerInteractiveTransitioning interactionControllerForPresentation(iOS.UIKit.IUIViewControllerAnimatedTransitioning animator) [instance] :8918
uObject* IUIViewControllerTransitioningDelegate::interactionControllerForPresentation(uObject* animator_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitioningDelegate", "interactionControllerForPresentation(iOS.UIKit.IUIViewControllerAnimatedTransitioning)");
    id<UIViewControllerInteractiveTransitioning> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UIViewControllerInteractiveTransitioning>, @selector(interactionControllerForPresentation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)animator_, ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUIViewControllerInteractiveTransitioning_typeof());
}

// public extern iOS.UIKit.UIPresentationController presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController(iOS.UIKit.UIViewController presented, iOS.UIKit.UIViewController presenting, iOS.UIKit.UIViewController source) [instance] :8924
::g::iOS::UIKit::UIPresentationController* IUIViewControllerTransitioningDelegate::presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController(::g::iOS::UIKit::UIViewController* presented_, ::g::iOS::UIKit::UIViewController* presenting_, ::g::iOS::UIKit::UIViewController* source_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitioningDelegate", "presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController(iOS.UIKit.UIViewController,iOS.UIKit.UIViewController,iOS.UIKit.UIViewController)");
    ::UIPresentationController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIPresentationController*, @selector(presentationControllerForPresentedViewController:presentingViewController:sourceViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)presented_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)presenting_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)source_));
    return (::g::iOS::UIKit::UIPresentationController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIPresentationController_typeof());
}
// }

}}}} // ::g::iOS::UIKit::Interop
