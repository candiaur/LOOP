// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIViewControllerInteractiveTransitioning.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerInteractiveTransitioning;}}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerInteractiveTransitioning :8729
// {
struct IUIViewControllerInteractiveTransitioning_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning interface1;
};

IUIViewControllerInteractiveTransitioning_type* IUIViewControllerInteractiveTransitioning_typeof();
void IUIViewControllerInteractiveTransitioning__completionCurve_fn(IUIViewControllerInteractiveTransitioning* __this, int* __retval);
void IUIViewControllerInteractiveTransitioning__completionSpeed_fn(IUIViewControllerInteractiveTransitioning* __this, double* __retval);
void IUIViewControllerInteractiveTransitioning__startInteractiveTransition_fn(IUIViewControllerInteractiveTransitioning* __this, uObject* transitionContext_);

struct IUIViewControllerInteractiveTransitioning : ::g::ObjC::Bindings::Object
{
    int completionCurve();
    double completionSpeed();
    void startInteractiveTransition(uObject* transitionContext_);
};
// }

}}}} // ::g::iOS::UIKit::Interop
