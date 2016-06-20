// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerTransitionCoordinator
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator.h>
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

// public sealed extern class IUIViewControllerTransitionCoordinator :8783
// {
static void IUIViewControllerTransitionCoordinator_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUIViewControllerTransitionCoordinator_type, interface0),
        ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof(), offsetof(IUIViewControllerTransitionCoordinator_type, interface1),
        ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext_typeof(), offsetof(IUIViewControllerTransitionCoordinator_type, interface2));
    type->SetFields(1);
    type->Reflection.SetFunctions(13,
        new uFunction("completionCurve", NULL, (void*)IUIViewControllerTransitionCoordinator__completionCurve_fn, 0, false, ::g::iOS::UIKit::UIViewAnimationCurve_typeof(), 0),
        new uFunction("completionVelocity", NULL, (void*)IUIViewControllerTransitionCoordinator__completionVelocity_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("containerView", NULL, (void*)IUIViewControllerTransitionCoordinator__containerView_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("initiallyInteractive", NULL, (void*)IUIViewControllerTransitionCoordinator__initiallyInteractive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isAnimated", NULL, (void*)IUIViewControllerTransitionCoordinator__isAnimated_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isCancelled", NULL, (void*)IUIViewControllerTransitionCoordinator__isCancelled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isInteractive", NULL, (void*)IUIViewControllerTransitionCoordinator__isInteractive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("percentComplete", NULL, (void*)IUIViewControllerTransitionCoordinator__percentComplete_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("presentationStyle", NULL, (void*)IUIViewControllerTransitionCoordinator__presentationStyle_fn, 0, false, ::g::iOS::UIKit::UIModalPresentationStyle_typeof(), 0),
        new uFunction("targetTransform", NULL, (void*)IUIViewControllerTransitionCoordinator__targetTransform_fn, 0, false, ::g::iOS::CoreGraphics::CGAffineTransform_typeof(), 0),
        new uFunction("transitionDuration", NULL, (void*)IUIViewControllerTransitionCoordinator__transitionDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("viewControllerForKey", NULL, (void*)IUIViewControllerTransitionCoordinator__viewControllerForKey_fn, 0, false, ::g::iOS::UIKit::UIViewController_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("viewForKey", NULL, (void*)IUIViewControllerTransitionCoordinator__viewForKey_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 1, ::g::Uno::String_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

IUIViewControllerTransitionCoordinator_type* IUIViewControllerTransitionCoordinator_typeof()
{
    static uSStrong<IUIViewControllerTransitionCoordinator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(IUIViewControllerTransitionCoordinator);
    options.TypeSize = sizeof(IUIViewControllerTransitionCoordinator_type);
    type = (IUIViewControllerTransitionCoordinator_type*)uClassType::New("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IUIViewControllerTransitionCoordinator_build;
    type->interface1.fp_isAnimated = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinator__isAnimated_fn;
    type->interface1.fp_presentationStyle = (void(*)(uObject*, int*))IUIViewControllerTransitionCoordinator__presentationStyle_fn;
    type->interface1.fp_initiallyInteractive = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinator__initiallyInteractive_fn;
    type->interface1.fp_isInteractive = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinator__isInteractive_fn;
    type->interface1.fp_isCancelled = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinator__isCancelled_fn;
    type->interface1.fp_transitionDuration = (void(*)(uObject*, double*))IUIViewControllerTransitionCoordinator__transitionDuration_fn;
    type->interface1.fp_percentComplete = (void(*)(uObject*, double*))IUIViewControllerTransitionCoordinator__percentComplete_fn;
    type->interface1.fp_completionVelocity = (void(*)(uObject*, double*))IUIViewControllerTransitionCoordinator__completionVelocity_fn;
    type->interface1.fp_completionCurve = (void(*)(uObject*, int*))IUIViewControllerTransitionCoordinator__completionCurve_fn;
    type->interface1.fp_viewControllerForKey = (void(*)(uObject*, uString*, ::g::iOS::UIKit::UIViewController**))IUIViewControllerTransitionCoordinator__viewControllerForKey_fn;
    type->interface1.fp_viewForKey = (void(*)(uObject*, uString*, ::g::iOS::UIKit::UIView**))IUIViewControllerTransitionCoordinator__viewForKey_fn;
    type->interface1.fp_containerView = (void(*)(uObject*, ::g::iOS::UIKit::UIView**))IUIViewControllerTransitionCoordinator__containerView_fn;
    type->interface1.fp_targetTransform = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGAffineTransform*))IUIViewControllerTransitionCoordinator__targetTransform_fn;
    type->interface2.fp_isAnimated = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinator__isAnimated_fn;
    type->interface2.fp_presentationStyle = (void(*)(uObject*, int*))IUIViewControllerTransitionCoordinator__presentationStyle_fn;
    type->interface2.fp_initiallyInteractive = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinator__initiallyInteractive_fn;
    type->interface2.fp_isInteractive = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinator__isInteractive_fn;
    type->interface2.fp_isCancelled = (void(*)(uObject*, bool*))IUIViewControllerTransitionCoordinator__isCancelled_fn;
    type->interface2.fp_transitionDuration = (void(*)(uObject*, double*))IUIViewControllerTransitionCoordinator__transitionDuration_fn;
    type->interface2.fp_percentComplete = (void(*)(uObject*, double*))IUIViewControllerTransitionCoordinator__percentComplete_fn;
    type->interface2.fp_completionVelocity = (void(*)(uObject*, double*))IUIViewControllerTransitionCoordinator__completionVelocity_fn;
    type->interface2.fp_completionCurve = (void(*)(uObject*, int*))IUIViewControllerTransitionCoordinator__completionCurve_fn;
    type->interface2.fp_viewControllerForKey = (void(*)(uObject*, uString*, ::g::iOS::UIKit::UIViewController**))IUIViewControllerTransitionCoordinator__viewControllerForKey_fn;
    type->interface2.fp_viewForKey = (void(*)(uObject*, uString*, ::g::iOS::UIKit::UIView**))IUIViewControllerTransitionCoordinator__viewForKey_fn;
    type->interface2.fp_containerView = (void(*)(uObject*, ::g::iOS::UIKit::UIView**))IUIViewControllerTransitionCoordinator__containerView_fn;
    type->interface2.fp_targetTransform = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGAffineTransform*))IUIViewControllerTransitionCoordinator__targetTransform_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.UIKit.UIViewAnimationCurve completionCurve() :8816
void IUIViewControllerTransitionCoordinator__completionCurve_fn(IUIViewControllerTransitionCoordinator* __this, int* __retval)
{
    *__retval = __this->completionCurve();
}

// public extern double completionVelocity() :8813
void IUIViewControllerTransitionCoordinator__completionVelocity_fn(IUIViewControllerTransitionCoordinator* __this, double* __retval)
{
    *__retval = __this->completionVelocity();
}

// public extern iOS.UIKit.UIView containerView() :8825
void IUIViewControllerTransitionCoordinator__containerView_fn(IUIViewControllerTransitionCoordinator* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->containerView();
}

// public extern bool initiallyInteractive() :8798
void IUIViewControllerTransitionCoordinator__initiallyInteractive_fn(IUIViewControllerTransitionCoordinator* __this, bool* __retval)
{
    *__retval = __this->initiallyInteractive();
}

// public extern bool isAnimated() :8792
void IUIViewControllerTransitionCoordinator__isAnimated_fn(IUIViewControllerTransitionCoordinator* __this, bool* __retval)
{
    *__retval = __this->isAnimated();
}

// public extern bool isCancelled() :8804
void IUIViewControllerTransitionCoordinator__isCancelled_fn(IUIViewControllerTransitionCoordinator* __this, bool* __retval)
{
    *__retval = __this->isCancelled();
}

// public extern bool isInteractive() :8801
void IUIViewControllerTransitionCoordinator__isInteractive_fn(IUIViewControllerTransitionCoordinator* __this, bool* __retval)
{
    *__retval = __this->isInteractive();
}

// public extern double percentComplete() :8810
void IUIViewControllerTransitionCoordinator__percentComplete_fn(IUIViewControllerTransitionCoordinator* __this, double* __retval)
{
    *__retval = __this->percentComplete();
}

// public extern iOS.UIKit.UIModalPresentationStyle presentationStyle() :8795
void IUIViewControllerTransitionCoordinator__presentationStyle_fn(IUIViewControllerTransitionCoordinator* __this, int* __retval)
{
    *__retval = __this->presentationStyle();
}

// public extern iOS.CoreGraphics.CGAffineTransform targetTransform() :8828
void IUIViewControllerTransitionCoordinator__targetTransform_fn(IUIViewControllerTransitionCoordinator* __this, ::g::iOS::CoreGraphics::CGAffineTransform* __retval)
{
    *__retval = __this->targetTransform();
}

// public extern double transitionDuration() :8807
void IUIViewControllerTransitionCoordinator__transitionDuration_fn(IUIViewControllerTransitionCoordinator* __this, double* __retval)
{
    *__retval = __this->transitionDuration();
}

// public extern iOS.UIKit.UIViewController viewControllerForKey(string key) :8819
void IUIViewControllerTransitionCoordinator__viewControllerForKey_fn(IUIViewControllerTransitionCoordinator* __this, uString* key_, ::g::iOS::UIKit::UIViewController** __retval)
{
    *__retval = __this->viewControllerForKey(key_);
}

// public extern iOS.UIKit.UIView viewForKey(string key) :8822
void IUIViewControllerTransitionCoordinator__viewForKey_fn(IUIViewControllerTransitionCoordinator* __this, uString* key_, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->viewForKey(key_);
}

// public extern iOS.UIKit.UIViewAnimationCurve completionCurve() [instance] :8816
int IUIViewControllerTransitionCoordinator::completionCurve()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "completionCurve()");
    ::UIViewAnimationCurve __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewAnimationCurve, @selector(completionCurve));
    return int(__return);
}

// public extern double completionVelocity() [instance] :8813
double IUIViewControllerTransitionCoordinator::completionVelocity()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "completionVelocity()");
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(completionVelocity));
    return (double)__return;
}

// public extern iOS.UIKit.UIView containerView() [instance] :8825
::g::iOS::UIKit::UIView* IUIViewControllerTransitionCoordinator::containerView()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "containerView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(containerView));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}

// public extern bool initiallyInteractive() [instance] :8798
bool IUIViewControllerTransitionCoordinator::initiallyInteractive()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "initiallyInteractive()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(initiallyInteractive));
    return (bool)__return;
}

// public extern bool isAnimated() [instance] :8792
bool IUIViewControllerTransitionCoordinator::isAnimated()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "isAnimated()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isAnimated));
    return (bool)__return;
}

// public extern bool isCancelled() [instance] :8804
bool IUIViewControllerTransitionCoordinator::isCancelled()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "isCancelled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isCancelled));
    return (bool)__return;
}

// public extern bool isInteractive() [instance] :8801
bool IUIViewControllerTransitionCoordinator::isInteractive()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "isInteractive()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isInteractive));
    return (bool)__return;
}

// public extern double percentComplete() [instance] :8810
double IUIViewControllerTransitionCoordinator::percentComplete()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "percentComplete()");
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(percentComplete));
    return (double)__return;
}

// public extern iOS.UIKit.UIModalPresentationStyle presentationStyle() [instance] :8795
int IUIViewControllerTransitionCoordinator::presentationStyle()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "presentationStyle()");
    ::UIModalPresentationStyle __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIModalPresentationStyle, @selector(presentationStyle));
    return int(__return);
}

// public extern iOS.CoreGraphics.CGAffineTransform targetTransform() [instance] :8828
::g::iOS::CoreGraphics::CGAffineTransform IUIViewControllerTransitionCoordinator::targetTransform()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "targetTransform()");
    ::CGAffineTransform __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGAffineTransform, @selector(targetTransform));
    return uObjC::Struct::ToUno_CGAffineTransform(__return, ::g::iOS::CoreGraphics::CGAffineTransform());
}

// public extern double transitionDuration() [instance] :8807
double IUIViewControllerTransitionCoordinator::transitionDuration()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "transitionDuration()");
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, double, @selector(transitionDuration));
    return __return;
}

// public extern iOS.UIKit.UIViewController viewControllerForKey(string key) [instance] :8819
::g::iOS::UIKit::UIViewController* IUIViewControllerTransitionCoordinator::viewControllerForKey(uString* key_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "viewControllerForKey(string)");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(viewControllerForKey:),
        uObjC::NativeString(key_));
    return (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIViewController_typeof());
}

// public extern iOS.UIKit.UIView viewForKey(string key) [instance] :8822
::g::iOS::UIKit::UIView* IUIViewControllerTransitionCoordinator::viewForKey(uString* key_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerTransitionCoordinator", "viewForKey(string)");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(viewForKey:),
        uObjC::NativeString(key_));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}
// }

}}}} // ::g::iOS::UIKit::Interop
