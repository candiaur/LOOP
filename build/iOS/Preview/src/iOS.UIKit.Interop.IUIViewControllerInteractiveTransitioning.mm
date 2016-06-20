// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerInteractiveTransitioning
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUIViewControllerInteractiveTransitioning.h>
#include <iOS.UIKit.IUIViewControllerContextTransitioning.h>
#include <iOS.UIKit.UIViewAnimationCurve.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerInteractiveTransitioning :8729
// {
static void IUIViewControllerInteractiveTransitioning_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUIViewControllerInteractiveTransitioning_type, interface0),
        ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof(), offsetof(IUIViewControllerInteractiveTransitioning_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(3,
        new uFunction("completionCurve", NULL, (void*)IUIViewControllerInteractiveTransitioning__completionCurve_fn, 0, false, ::g::iOS::UIKit::UIViewAnimationCurve_typeof(), 0),
        new uFunction("completionSpeed", NULL, (void*)IUIViewControllerInteractiveTransitioning__completionSpeed_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("startInteractiveTransition", NULL, (void*)IUIViewControllerInteractiveTransitioning__startInteractiveTransition_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

IUIViewControllerInteractiveTransitioning_type* IUIViewControllerInteractiveTransitioning_typeof()
{
    static uSStrong<IUIViewControllerInteractiveTransitioning_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUIViewControllerInteractiveTransitioning);
    options.TypeSize = sizeof(IUIViewControllerInteractiveTransitioning_type);
    type = (IUIViewControllerInteractiveTransitioning_type*)uClassType::New("iOS.UIKit.Interop.IUIViewControllerInteractiveTransitioning", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IUIViewControllerInteractiveTransitioning_build;
    type->interface1.fp_startInteractiveTransition = (void(*)(uObject*, uObject*))IUIViewControllerInteractiveTransitioning__startInteractiveTransition_fn;
    type->interface1.fp_completionSpeed = (void(*)(uObject*, double*))IUIViewControllerInteractiveTransitioning__completionSpeed_fn;
    type->interface1.fp_completionCurve = (void(*)(uObject*, int*))IUIViewControllerInteractiveTransitioning__completionCurve_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.UIKit.UIViewAnimationCurve completionCurve() :8744
void IUIViewControllerInteractiveTransitioning__completionCurve_fn(IUIViewControllerInteractiveTransitioning* __this, int* __retval)
{
    *__retval = __this->completionCurve();
}

// public extern double completionSpeed() :8741
void IUIViewControllerInteractiveTransitioning__completionSpeed_fn(IUIViewControllerInteractiveTransitioning* __this, double* __retval)
{
    *__retval = __this->completionSpeed();
}

// public extern void startInteractiveTransition(iOS.UIKit.IUIViewControllerContextTransitioning transitionContext) :8738
void IUIViewControllerInteractiveTransitioning__startInteractiveTransition_fn(IUIViewControllerInteractiveTransitioning* __this, uObject* transitionContext_)
{
    __this->startInteractiveTransition(transitionContext_);
}

// public extern iOS.UIKit.UIViewAnimationCurve completionCurve() [instance] :8744
int IUIViewControllerInteractiveTransitioning::completionCurve()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerInteractiveTransitioning", "completionCurve()");
    ::UIViewAnimationCurve __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewAnimationCurve, @selector(completionCurve));
    return int(__return);
}

// public extern double completionSpeed() [instance] :8741
double IUIViewControllerInteractiveTransitioning::completionSpeed()
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerInteractiveTransitioning", "completionSpeed()");
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(completionSpeed));
    return (double)__return;
}

// public extern void startInteractiveTransition(iOS.UIKit.IUIViewControllerContextTransitioning transitionContext) [instance] :8738
void IUIViewControllerInteractiveTransitioning::startInteractiveTransition(uObject* transitionContext_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIViewControllerInteractiveTransitioning", "startInteractiveTransition(iOS.UIKit.IUIViewControllerContextTransitioning)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(startInteractiveTransition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)transitionContext_, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));
}
// }

}}}} // ::g::iOS::UIKit::Interop
