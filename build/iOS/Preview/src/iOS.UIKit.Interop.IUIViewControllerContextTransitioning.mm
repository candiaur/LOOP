// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerContextTransitioning
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUIViewControllerContextTransitioning.h>
#include <iOS.UIKit.UIModalPresentationStyle.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.UIKit.UIViewController.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.String.h>
#include <iOS.CoreGraphics.CGAffineTransform.h>
#include <iOS.CoreGraphics.CGRect.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerContextTransitioning :8666
// {
static void IUIViewControllerContextTransitioning_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUIViewControllerContextTransitioning_type, interface0),
        ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof(), offsetof(IUIViewControllerContextTransitioning_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(14,
        new uFunction("cancelInteractiveTransition", NULL, (void*)IUIViewControllerContextTransitioning__cancelInteractiveTransition_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("completeTransition", NULL, (void*)IUIViewControllerContextTransitioning__completeTransition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("containerView", NULL, (void*)IUIViewControllerContextTransitioning__containerView_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("finalFrameForViewController", NULL, (void*)IUIViewControllerContextTransitioning__finalFrameForViewController_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 1, ::g::iOS::UIKit::UIViewController_typeof()),
        new uFunction("finishInteractiveTransition", NULL, (void*)IUIViewControllerContextTransitioning__finishInteractiveTransition_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("initialFrameForViewController", NULL, (void*)IUIViewControllerContextTransitioning__initialFrameForViewController_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 1, ::g::iOS::UIKit::UIViewController_typeof()),
        new uFunction("isAnimated", NULL, (void*)IUIViewControllerContextTransitioning__isAnimated_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isInteractive", NULL, (void*)IUIViewControllerContextTransitioning__isInteractive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("presentationStyle", NULL, (void*)IUIViewControllerContextTransitioning__presentationStyle_fn, 0, false, ::g::iOS::UIKit::UIModalPresentationStyle_typeof(), 0),
        new uFunction("targetTransform", NULL, (void*)IUIViewControllerContextTransitioning__targetTransform_fn, 0, false, ::g::iOS::CoreGraphics::CGAffineTransform_typeof(), 0),
        new uFunction("transitionWasCancelled", NULL, (void*)IUIViewControllerContextTransitioning__transitionWasCancelled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("updateInteractiveTransition", NULL, (void*)IUIViewControllerContextTransitioning__updateInteractiveTransition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("viewControllerForKey", NULL, (void*)IUIViewControllerContextTransitioning__viewControllerForKey_fn, 0, false, ::g::iOS::UIKit::UIViewController_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("viewForKey", NULL, (void*)IUIViewControllerContextTransitioning__viewForKey_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 1, ::g::Uno::String_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

IUIViewControllerContextTransitioning_type* IUIViewControllerContextTransitioning_typeof()
{
    static uSStrong<IUIViewControllerContextTransitioning_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUIViewControllerContextTransitioning);
    options.TypeSize = sizeof(IUIViewControllerContextTransitioning_type);
    type = (IUIViewControllerContextTransitioning_type*)uClassType::New("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IUIViewControllerContextTransitioning_build;
    type->interface1.fp_containerView = (void(*)(uObject*, ::g::iOS::UIKit::UIView**))IUIViewControllerContextTransitioning__containerView_fn;
    type->interface1.fp_isAnimated = (void(*)(uObject*, bool*))IUIViewControllerContextTransitioning__isAnimated_fn;
    type->interface1.fp_isInteractive = (void(*)(uObject*, bool*))IUIViewControllerContextTransitioning__isInteractive_fn;
    type->interface1.fp_transitionWasCancelled = (void(*)(uObject*, bool*))IUIViewControllerContextTransitioning__transitionWasCancelled_fn;
    type->interface1.fp_presentationStyle = (void(*)(uObject*, int*))IUIViewControllerContextTransitioning__presentationStyle_fn;
    type->interface1.fp_updateInteractiveTransition = (void(*)(uObject*, double*))IUIViewControllerContextTransitioning__updateInteractiveTransition_fn;
    type->interface1.fp_finishInteractiveTransition = (void(*)(uObject*))IUIViewControllerContextTransitioning__finishInteractiveTransition_fn;
    type->interface1.fp_cancelInteractiveTransition = (void(*)(uObject*))IUIViewControllerContextTransitioning__cancelInteractiveTransition_fn;
    type->interface1.fp_completeTransition = (void(*)(uObject*, bool*))IUIViewControllerContextTransitioning__completeTransition_fn;
    type->interface1.fp_viewControllerForKey = (void(*)(uObject*, uString*, ::g::iOS::UIKit::UIViewController**))IUIViewControllerContextTransitioning__viewControllerForKey_fn;
    type->interface1.fp_viewForKey = (void(*)(uObject*, uString*, ::g::iOS::UIKit::UIView**))IUIViewControllerContextTransitioning__viewForKey_fn;
    type->interface1.fp_targetTransform = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGAffineTransform*))IUIViewControllerContextTransitioning__targetTransform_fn;
    type->interface1.fp_initialFrameForViewController = (void(*)(uObject*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::CoreGraphics::CGRect*))IUIViewControllerContextTransitioning__initialFrameForViewController_fn;
    type->interface1.fp_finalFrameForViewController = (void(*)(uObject*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::CoreGraphics::CGRect*))IUIViewControllerContextTransitioning__finalFrameForViewController_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern void cancelInteractiveTransition() :8696
void IUIViewControllerContextTransitioning__cancelInteractiveTransition_fn(IUIViewControllerContextTransitioning* __this)
{
    __this->cancelInteractiveTransition();
}

// public extern void completeTransition(bool didComplete) :8699
void IUIViewControllerContextTransitioning__completeTransition_fn(IUIViewControllerContextTransitioning* __this, bool* didComplete_)
{
    __this->completeTransition(*didComplete_);
}

// public extern iOS.UIKit.UIView containerView() :8675
void IUIViewControllerContextTransitioning__containerView_fn(IUIViewControllerContextTransitioning* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->containerView();
}

// public extern iOS.CoreGraphics.CGRect finalFrameForViewController(iOS.UIKit.UIViewController vc) :8714
void IUIViewControllerContextTransitioning__finalFrameForViewController_fn(IUIViewControllerContextTransitioning* __this, ::g::iOS::UIKit::UIViewController* vc_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->finalFrameForViewController(vc_);
}

// public extern void finishInteractiveTransition() :8693
void IUIViewControllerContextTransitioning__finishInteractiveTransition_fn(IUIViewControllerContextTransitioning* __this)
{
    __this->finishInteractiveTransition();
}

// public extern iOS.CoreGraphics.CGRect initialFrameForViewController(iOS.UIKit.UIViewController vc) :8711
void IUIViewControllerContextTransitioning__initialFrameForViewController_fn(IUIViewControllerContextTransitioning* __this, ::g::iOS::UIKit::UIViewController* vc_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->initialFrameForViewController(vc_);
}

// public extern bool isAnimated() :8678
void IUIViewControllerContextTransitioning__isAnimated_fn(IUIViewControllerContextTransitioning* __this, bool* __retval)
{
    *__retval = __this->isAnimated();
}

// public extern bool isInteractive() :8681
void IUIViewControllerContextTransitioning__isInteractive_fn(IUIViewControllerContextTransitioning* __this, bool* __retval)
{
    *__retval = __this->isInteractive();
}

// public extern iOS.UIKit.UIModalPresentationStyle presentationStyle() :8687
void IUIViewControllerContextTransitioning__presentationStyle_fn(IUIViewControllerContextTransitioning* __this, int* __retval)
{
    *__retval = __this->presentationStyle();
}

// public extern iOS.CoreGraphics.CGAffineTransform targetTransform() :8708
void IUIViewControllerContextTransitioning__targetTransform_fn(IUIViewControllerContextTransitioning* __this, ::g::iOS::CoreGraphics::CGAffineTransform* __retval)
{
    *__retval = __this->targetTransform();
}

// public extern bool transitionWasCancelled() :8684
void IUIViewControllerContextTransitioning__transitionWasCancelled_fn(IUIViewControllerContextTransitioning* __this, bool* __retval)
{
    *__retval = __this->transitionWasCancelled();
}

// public extern void updateInteractiveTransition(double percentComplete) :8690
void IUIViewControllerContextTransitioning__updateInteractiveTransition_fn(IUIViewControllerContextTransitioning* __this, double* percentComplete_)
{
    __this->updateInteractiveTransition(*percentComplete_);
}

// public extern iOS.UIKit.UIViewController viewControllerForKey(string key) :8702
void IUIViewControllerContextTransitioning__viewControllerForKey_fn(IUIViewControllerContextTransitioning* __this, uString* key_, ::g::iOS::UIKit::UIViewController** __retval)
{
    *__retval = __this->viewControllerForKey(key_);
}

// public extern iOS.UIKit.UIView viewForKey(string key) :8705
void IUIViewControllerContextTransitioning__viewForKey_fn(IUIViewControllerContextTransitioning* __this, uString* key_, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->viewForKey(key_);
}

// public extern void cancelInteractiveTransition() [instance] :8696
void IUIViewControllerContextTransitioning::cancelInteractiveTransition()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "cancelInteractiveTransition()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(cancelInteractiveTransition));
}

// public extern void completeTransition(bool didComplete) [instance] :8699
void IUIViewControllerContextTransitioning::completeTransition(bool didComplete_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "completeTransition(bool)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(completeTransition:),
        (BOOL)didComplete_);
}

// public extern iOS.UIKit.UIView containerView() [instance] :8675
::g::iOS::UIKit::UIView* IUIViewControllerContextTransitioning::containerView()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "containerView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(containerView));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}

// public extern iOS.CoreGraphics.CGRect finalFrameForViewController(iOS.UIKit.UIViewController vc) [instance] :8714
::g::iOS::CoreGraphics::CGRect IUIViewControllerContextTransitioning::finalFrameForViewController(::g::iOS::UIKit::UIViewController* vc_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "finalFrameForViewController(iOS.UIKit.UIViewController)");
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(finalFrameForViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)vc_));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern void finishInteractiveTransition() [instance] :8693
void IUIViewControllerContextTransitioning::finishInteractiveTransition()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "finishInteractiveTransition()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(finishInteractiveTransition));
}

// public extern iOS.CoreGraphics.CGRect initialFrameForViewController(iOS.UIKit.UIViewController vc) [instance] :8711
::g::iOS::CoreGraphics::CGRect IUIViewControllerContextTransitioning::initialFrameForViewController(::g::iOS::UIKit::UIViewController* vc_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "initialFrameForViewController(iOS.UIKit.UIViewController)");
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(initialFrameForViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)vc_));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern bool isAnimated() [instance] :8678
bool IUIViewControllerContextTransitioning::isAnimated()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "isAnimated()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isAnimated));
    return (bool)__return;
}

// public extern bool isInteractive() [instance] :8681
bool IUIViewControllerContextTransitioning::isInteractive()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "isInteractive()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isInteractive));
    return (bool)__return;
}

// public extern iOS.UIKit.UIModalPresentationStyle presentationStyle() [instance] :8687
int IUIViewControllerContextTransitioning::presentationStyle()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "presentationStyle()");
    ::UIModalPresentationStyle __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIModalPresentationStyle, @selector(presentationStyle));
    return int(__return);
}

// public extern iOS.CoreGraphics.CGAffineTransform targetTransform() [instance] :8708
::g::iOS::CoreGraphics::CGAffineTransform IUIViewControllerContextTransitioning::targetTransform()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "targetTransform()");
    ::CGAffineTransform __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGAffineTransform, @selector(targetTransform));
    return uObjC::Struct::ToUno_CGAffineTransform(__return, ::g::iOS::CoreGraphics::CGAffineTransform());
}

// public extern bool transitionWasCancelled() [instance] :8684
bool IUIViewControllerContextTransitioning::transitionWasCancelled()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "transitionWasCancelled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(transitionWasCancelled));
    return (bool)__return;
}

// public extern void updateInteractiveTransition(double percentComplete) [instance] :8690
void IUIViewControllerContextTransitioning::updateInteractiveTransition(double percentComplete_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "updateInteractiveTransition(double)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(updateInteractiveTransition:),
        (CGFloat)percentComplete_);
}

// public extern iOS.UIKit.UIViewController viewControllerForKey(string key) [instance] :8702
::g::iOS::UIKit::UIViewController* IUIViewControllerContextTransitioning::viewControllerForKey(uString* key_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "viewControllerForKey(string)");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(viewControllerForKey:),
        uObjC::NativeString(key_));
    return (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIViewController_typeof());
}

// public extern iOS.UIKit.UIView viewForKey(string key) [instance] :8705
::g::iOS::UIKit::UIView* IUIViewControllerContextTransitioning::viewForKey(uString* key_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerContextTransitioning", "viewForKey(string)");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(viewForKey:),
        uObjC::NativeString(key_));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}
// }

}}}} // ::g::iOS::UIKit::Interop
