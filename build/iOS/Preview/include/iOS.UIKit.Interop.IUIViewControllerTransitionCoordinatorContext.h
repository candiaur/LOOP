// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGAffineTransform;}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerTransitionCoordinatorContext;}}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController;}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerTransitionCoordinatorContext :8843
// {
struct IUIViewControllerTransitionCoordinatorContext_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext interface1;
};

IUIViewControllerTransitionCoordinatorContext_type* IUIViewControllerTransitionCoordinatorContext_typeof();
void IUIViewControllerTransitionCoordinatorContext__completionCurve_fn(IUIViewControllerTransitionCoordinatorContext* __this, int* __retval);
void IUIViewControllerTransitionCoordinatorContext__completionVelocity_fn(IUIViewControllerTransitionCoordinatorContext* __this, double* __retval);
void IUIViewControllerTransitionCoordinatorContext__containerView_fn(IUIViewControllerTransitionCoordinatorContext* __this, ::g::iOS::UIKit::UIView** __retval);
void IUIViewControllerTransitionCoordinatorContext__initiallyInteractive_fn(IUIViewControllerTransitionCoordinatorContext* __this, bool* __retval);
void IUIViewControllerTransitionCoordinatorContext__isAnimated_fn(IUIViewControllerTransitionCoordinatorContext* __this, bool* __retval);
void IUIViewControllerTransitionCoordinatorContext__isCancelled_fn(IUIViewControllerTransitionCoordinatorContext* __this, bool* __retval);
void IUIViewControllerTransitionCoordinatorContext__isInteractive_fn(IUIViewControllerTransitionCoordinatorContext* __this, bool* __retval);
void IUIViewControllerTransitionCoordinatorContext__percentComplete_fn(IUIViewControllerTransitionCoordinatorContext* __this, double* __retval);
void IUIViewControllerTransitionCoordinatorContext__presentationStyle_fn(IUIViewControllerTransitionCoordinatorContext* __this, int* __retval);
void IUIViewControllerTransitionCoordinatorContext__targetTransform_fn(IUIViewControllerTransitionCoordinatorContext* __this, ::g::iOS::CoreGraphics::CGAffineTransform* __retval);
void IUIViewControllerTransitionCoordinatorContext__transitionDuration_fn(IUIViewControllerTransitionCoordinatorContext* __this, double* __retval);
void IUIViewControllerTransitionCoordinatorContext__viewControllerForKey_fn(IUIViewControllerTransitionCoordinatorContext* __this, uString* key_, ::g::iOS::UIKit::UIViewController** __retval);
void IUIViewControllerTransitionCoordinatorContext__viewForKey_fn(IUIViewControllerTransitionCoordinatorContext* __this, uString* key_, ::g::iOS::UIKit::UIView** __retval);

struct IUIViewControllerTransitionCoordinatorContext : ::g::ObjC::Bindings::Object
{
    int completionCurve();
    double completionVelocity();
    ::g::iOS::UIKit::UIView* containerView();
    bool initiallyInteractive();
    bool isAnimated();
    bool isCancelled();
    bool isInteractive();
    double percentComplete();
    int presentationStyle();
    ::g::iOS::CoreGraphics::CGAffineTransform targetTransform();
    double transitionDuration();
    ::g::iOS::UIKit::UIViewController* viewControllerForKey(uString* key_);
    ::g::iOS::UIKit::UIView* viewForKey(uString* key_);
};
// }

}}}} // ::g::iOS::UIKit::Interop
