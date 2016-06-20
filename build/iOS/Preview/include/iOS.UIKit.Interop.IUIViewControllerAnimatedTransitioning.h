// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIViewControllerAnimatedTransitioning.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerAnimatedTransitioning;}}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerAnimatedTransitioning :8636
// {
struct IUIViewControllerAnimatedTransitioning_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning interface1;
};

IUIViewControllerAnimatedTransitioning_type* IUIViewControllerAnimatedTransitioning_typeof();
void IUIViewControllerAnimatedTransitioning__animateTransition_fn(IUIViewControllerAnimatedTransitioning* __this, uObject* transitionContext_);
void IUIViewControllerAnimatedTransitioning__animationEnded_fn(IUIViewControllerAnimatedTransitioning* __this, bool* transitionCompleted_);
void IUIViewControllerAnimatedTransitioning__transitionDuration_fn(IUIViewControllerAnimatedTransitioning* __this, uObject* transitionContext_, double* __retval);

struct IUIViewControllerAnimatedTransitioning : ::g::ObjC::Bindings::Object
{
    void animateTransition(uObject* transitionContext_);
    void animationEnded(bool transitionCompleted_);
    double transitionDuration(uObject* transitionContext_);
};
// }

}}}} // ::g::iOS::UIKit::Interop
