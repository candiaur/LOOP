// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerAnimatedTransitioning
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUIViewControllerAnimatedTransitioning.h>
#include <iOS.UIKit.IUIViewControllerContextTransitioning.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerAnimatedTransitioning :8636
// {
static void IUIViewControllerAnimatedTransitioning_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUIViewControllerAnimatedTransitioning_type, interface0),
        ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof(), offsetof(IUIViewControllerAnimatedTransitioning_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(3,
        new uFunction("animateTransition", NULL, (void*)IUIViewControllerAnimatedTransitioning__animateTransition_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()),
        new uFunction("animationEnded", NULL, (void*)IUIViewControllerAnimatedTransitioning__animationEnded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("transitionDuration", NULL, (void*)IUIViewControllerAnimatedTransitioning__transitionDuration_fn, 0, false, ::g::Uno::Double_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

IUIViewControllerAnimatedTransitioning_type* IUIViewControllerAnimatedTransitioning_typeof()
{
    static uSStrong<IUIViewControllerAnimatedTransitioning_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUIViewControllerAnimatedTransitioning);
    options.TypeSize = sizeof(IUIViewControllerAnimatedTransitioning_type);
    type = (IUIViewControllerAnimatedTransitioning_type*)uClassType::New("iOS.UIKit.Interop.IUIViewControllerAnimatedTransitioning", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IUIViewControllerAnimatedTransitioning_build;
    type->interface1.fp_transitionDuration = (void(*)(uObject*, uObject*, double*))IUIViewControllerAnimatedTransitioning__transitionDuration_fn;
    type->interface1.fp_animateTransition = (void(*)(uObject*, uObject*))IUIViewControllerAnimatedTransitioning__animateTransition_fn;
    type->interface1.fp_animationEnded = (void(*)(uObject*, bool*))IUIViewControllerAnimatedTransitioning__animationEnded_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern void animateTransition(iOS.UIKit.IUIViewControllerContextTransitioning transitionContext) :8648
void IUIViewControllerAnimatedTransitioning__animateTransition_fn(IUIViewControllerAnimatedTransitioning* __this, uObject* transitionContext_)
{
    __this->animateTransition(transitionContext_);
}

// public extern void animationEnded(bool transitionCompleted) :8651
void IUIViewControllerAnimatedTransitioning__animationEnded_fn(IUIViewControllerAnimatedTransitioning* __this, bool* transitionCompleted_)
{
    __this->animationEnded(*transitionCompleted_);
}

// public extern double transitionDuration(iOS.UIKit.IUIViewControllerContextTransitioning transitionContext) :8645
void IUIViewControllerAnimatedTransitioning__transitionDuration_fn(IUIViewControllerAnimatedTransitioning* __this, uObject* transitionContext_, double* __retval)
{
    *__retval = __this->transitionDuration(transitionContext_);
}

// public extern void animateTransition(iOS.UIKit.IUIViewControllerContextTransitioning transitionContext) [instance] :8648
void IUIViewControllerAnimatedTransitioning::animateTransition(uObject* transitionContext_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerAnimatedTransitioning", "animateTransition(iOS.UIKit.IUIViewControllerContextTransitioning)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(animateTransition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)transitionContext_, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
}

// public extern void animationEnded(bool transitionCompleted) [instance] :8651
void IUIViewControllerAnimatedTransitioning::animationEnded(bool transitionCompleted_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerAnimatedTransitioning", "animationEnded(bool)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(animationEnded:),
        (BOOL)transitionCompleted_);
}

// public extern double transitionDuration(iOS.UIKit.IUIViewControllerContextTransitioning transitionContext) [instance] :8645
double IUIViewControllerAnimatedTransitioning::transitionDuration(uObject* transitionContext_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerAnimatedTransitioning", "transitionDuration(iOS.UIKit.IUIViewControllerContextTransitioning)");
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, double, @selector(transitionDuration:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)transitionContext_, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
    return __return;
}
// }

}}}} // ::g::iOS::UIKit::Interop
