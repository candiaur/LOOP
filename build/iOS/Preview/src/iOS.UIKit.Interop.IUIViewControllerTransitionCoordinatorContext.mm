// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerTransitionCoordinatorContext
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext.h>
#include <iOS.UIKit.UIModalPresentationStyle.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.UIKit.UIViewAnimationCurve.h>
#include <iOS.UIKit.UIViewController.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.String.h>
#include <iOS.CoreGraphics.CGAffineTransform.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerTransitionCoordinatorContext :8843
// {
static void IUIViewControllerTransitionCoordinatorContext_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUIViewControllerTransitionCoordinatorContext_type, interface0),
        ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof(), offsetof(IUIViewControllerTransitionCoordinatorContext_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(13,
        new uFunction("completionCurve", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__completionCurve_fn, 0, false, ::g::iOS::UIKit::UIViewAnimationCurve_typeof(), 0),
        new uFunction("completionVelocity", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__completionVelocity_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("containerView", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__containerView_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("initiallyInteractive", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__initiallyInteractive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isAnimated", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__isAnimated_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isCancelled", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__isCancelled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isInteractive", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__isInteractive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("percentComplete", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__percentComplete_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("presentationStyle", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__presentationStyle_fn, 0, false, ::g::iOS::UIKit::UIModalPresentationStyle_typeof(), 0),
        new uFunction("targetTransform", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__targetTransform_fn, 0, false, ::g::iOS::CoreGraphics::CGAffineTransform_typeof(), 0),
        new uFunction("transitionDuration", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__transitionDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("viewControllerForKey", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__viewControllerForKey_fn, 0, false, ::g::iOS::UIKit::UIViewController_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("viewForKey", NULL, (void*)IUIViewControllerTransitionCoordinatorContext__viewForKey_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 1, ::g::Uno::String_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

IUIViewControllerTransitionCoordinatorContext_type* IUIViewControllerTransitionCoordinatorContext_typeof()
{
    static uSStrong<IUIViewControllerTransitionCoordinatorContext_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUIViewControllerTransitionCoordinatorContext);
    options.TypeSize = sizeof(IUIViewControllerTransitionCoordinatorContext_type);
    type = (IUIViewControllerTransitionCoordinatorContext_type*)uClassType::New("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IUIViewControllerTransitionCoordinatorContext_build;
    type->interface1.fp_isAnimated = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinatorContext__isAnimated_fn;
    type->interface1.fp_presentationStyle = (void(*)(uObject*, int*))IUIViewControllerTransitionCoordinatorContext__presentationStyle_fn;
    type->interface1.fp_initiallyInteractive = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinatorContext__initiallyInteractive_fn;
    type->interface1.fp_isInteractive = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinatorContext__isInteractive_fn;
    type->interface1.fp_isCancelled = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinatorContext__isCancelled_fn;
    type->interface1.fp_transitionDuration = (void(*)(uObject*, double*))IUIViewControllerTransitionCoordinatorContext__transitionDuration_fn;
    type->interface1.fp_percentComplete = (void(*)(uObject*, double*))IUIViewControllerTransitionCoordinatorContext__percentComplete_fn;
    type->interface1.fp_completionVelocity = (void(*)(uObject*, double*))IUIViewControllerTransitionCoordinatorContext__completionVelocity_fn;
    type->interface1.fp_completionCurve = (void(*)(uObject*, int*))IUIViewControllerTransitionCoordinatorContext__completionCurve_fn;
    type->interface1.fp_viewControllerForKey = (void(*)(uObject*, uString*, ::g::iOS::UIKit::UIViewController**))IUIViewControllerTransitionCoordinatorContext__viewControllerForKey_fn;
    type->interface1.fp_viewForKey = (void(*)(uObject*, uString*, ::g::iOS::UIKit::UIView**))IUIViewControllerTransitionCoordinatorContext__viewForKey_fn;
    type->interface1.fp_containerView = (void(*)(uObject*, ::g::iOS::UIKit::UIView**))IUIViewControllerTransitionCoordinatorContext__containerView_fn;
    type->interface1.fp_targetTransform = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGAffineTransform*))IUIViewControllerTransitionCoordinatorContext__targetTransform_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.UIKit.UIViewAnimationCurve completionCurve() :8876
void IUIViewControllerTransitionCoordinatorContext__completionCurve_fn(IUIViewControllerTransitionCoordinatorContext* __this, int* __retval)
{
    *__retval = __this->completionCurve();
}

// public extern double completionVelocity() :8873
void IUIViewControllerTransitionCoordinatorContext__completionVelocity_fn(IUIViewControllerTransitionCoordinatorContext* __this, double* __retval)
{
    *__retval = __this->completionVelocity();
}

// public extern iOS.UIKit.UIView containerView() :8885
void IUIViewControllerTransitionCoordinatorContext__containerView_fn(IUIViewControllerTransitionCoordinatorContext* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->containerView();
}

// public extern bool initiallyInteractive() :8858
void IUIViewControllerTransitionCoordinatorContext__initiallyInteractive_fn(IUIViewControllerTransitionCoordinatorContext* __this, bool* __retval)
{
    *__retval = __this->initiallyInteractive();
}

// public extern bool isAnimated() :8852
void IUIViewControllerTransitionCoordinatorContext__isAnimated_fn(IUIViewControllerTransitionCoordinatorContext* __this, bool* __retval)
{
    *__retval = __this->isAnimated();
}

// public extern bool isCancelled() :8864
void IUIViewControllerTransitionCoordinatorContext__isCancelled_fn(IUIViewControllerTransitionCoordinatorContext* __this, bool* __retval)
{
    *__retval = __this->isCancelled();
}

// public extern bool isInteractive() :8861
void IUIViewControllerTransitionCoordinatorContext__isInteractive_fn(IUIViewControllerTransitionCoordinatorContext* __this, bool* __retval)
{
    *__retval = __this->isInteractive();
}

// public extern double percentComplete() :8870
void IUIViewControllerTransitionCoordinatorContext__percentComplete_fn(IUIViewControllerTransitionCoordinatorContext* __this, double* __retval)
{
    *__retval = __this->percentComplete();
}

// public extern iOS.UIKit.UIModalPresentationStyle presentationStyle() :8855
void IUIViewControllerTransitionCoordinatorContext__presentationStyle_fn(IUIViewControllerTransitionCoordinatorContext* __this, int* __retval)
{
    *__retval = __this->presentationStyle();
}

// public extern iOS.CoreGraphics.CGAffineTransform targetTransform() :8888
void IUIViewControllerTransitionCoordinatorContext__targetTransform_fn(IUIViewControllerTransitionCoordinatorContext* __this, ::g::iOS::CoreGraphics::CGAffineTransform* __retval)
{
    *__retval = __this->targetTransform();
}

// public extern double transitionDuration() :8867
void IUIViewControllerTransitionCoordinatorContext__transitionDuration_fn(IUIViewControllerTransitionCoordinatorContext* __this, double* __retval)
{
    *__retval = __this->transitionDuration();
}

// public extern iOS.UIKit.UIViewController viewControllerForKey(string key) :8879
void IUIViewControllerTransitionCoordinatorContext__viewControllerForKey_fn(IUIViewControllerTransitionCoordinatorContext* __this, uString* key_, ::g::iOS::UIKit::UIViewController** __retval)
{
    *__retval = __this->viewControllerForKey(key_);
}

// public extern iOS.UIKit.UIView viewForKey(string key) :8882
void IUIViewControllerTransitionCoordinatorContext__viewForKey_fn(IUIViewControllerTransitionCoordinatorContext* __this, uString* key_, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->viewForKey(key_);
}

// public extern iOS.UIKit.UIViewAnimationCurve completionCurve() [instance] :8876
int IUIViewControllerTransitionCoordinatorContext::completionCurve()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "completionCurve()");
    ::UIViewAnimationCurve __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewAnimationCurve, @selector(completionCurve));
    return int(__return);
}

// public extern double completionVelocity() [instance] :8873
double IUIViewControllerTransitionCoordinatorContext::completionVelocity()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "completionVelocity()");
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(completionVelocity));
    return (double)__return;
}

// public extern iOS.UIKit.UIView containerView() [instance] :8885
::g::iOS::UIKit::UIView* IUIViewControllerTransitionCoordinatorContext::containerView()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "containerView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(containerView));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}

// public extern bool initiallyInteractive() [instance] :8858
bool IUIViewControllerTransitionCoordinatorContext::initiallyInteractive()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "initiallyInteractive()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(initiallyInteractive));
    return (bool)__return;
}

// public extern bool isAnimated() [instance] :8852
bool IUIViewControllerTransitionCoordinatorContext::isAnimated()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "isAnimated()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isAnimated));
    return (bool)__return;
}

// public extern bool isCancelled() [instance] :8864
bool IUIViewControllerTransitionCoordinatorContext::isCancelled()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "isCancelled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isCancelled));
    return (bool)__return;
}

// public extern bool isInteractive() [instance] :8861
bool IUIViewControllerTransitionCoordinatorContext::isInteractive()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "isInteractive()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isInteractive));
    return (bool)__return;
}

// public extern double percentComplete() [instance] :8870
double IUIViewControllerTransitionCoordinatorContext::percentComplete()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "percentComplete()");
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(percentComplete));
    return (double)__return;
}

// public extern iOS.UIKit.UIModalPresentationStyle presentationStyle() [instance] :8855
int IUIViewControllerTransitionCoordinatorContext::presentationStyle()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "presentationStyle()");
    ::UIModalPresentationStyle __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIModalPresentationStyle, @selector(presentationStyle));
    return int(__return);
}

// public extern iOS.CoreGraphics.CGAffineTransform targetTransform() [instance] :8888
::g::iOS::CoreGraphics::CGAffineTransform IUIViewControllerTransitionCoordinatorContext::targetTransform()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "targetTransform()");
    ::CGAffineTransform __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGAffineTransform, @selector(targetTransform));
    return uObjC::Struct::ToUno_CGAffineTransform(__return, ::g::iOS::CoreGraphics::CGAffineTransform());
}

// public extern double transitionDuration() [instance] :8867
double IUIViewControllerTransitionCoordinatorContext::transitionDuration()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "transitionDuration()");
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, double, @selector(transitionDuration));
    return __return;
}

// public extern iOS.UIKit.UIViewController viewControllerForKey(string key) [instance] :8879
::g::iOS::UIKit::UIViewController* IUIViewControllerTransitionCoordinatorContext::viewControllerForKey(uString* key_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "viewControllerForKey(string)");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(viewControllerForKey:),
        uObjC::NativeString(key_));
    return (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIViewController_typeof());
}

// public extern iOS.UIKit.UIView viewForKey(string key) [instance] :8882
::g::iOS::UIKit::UIView* IUIViewControllerTransitionCoordinatorContext::viewForKey(uString* key_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinatorContext", "viewForKey(string)");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(viewForKey:),
        uObjC::NativeString(key_));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}
// }

}}}} // ::g::iOS::UIKit::Interop
