// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIViewControllerTransitionCoordinator.h>
#include <iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGAffineTransform;}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerTransitionCoordinator;}}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController;}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerTransitionCoordinator :8783
// {
struct IUIViewControllerTransitionCoordinator_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator interface1;
    ::g::iOS::UIKit::IUIViewControllerTransitionCoordinatorContext interface2;
};

IUIViewControllerTransitionCoordinator_type* IUIViewControllerTransitionCoordinator_typeof();
void IUIViewControllerTransitionCoordinator__completionCurve_fn(IUIViewControllerTransitionCoordinator* __this, int* __retval);
void IUIViewControllerTransitionCoordinator__completionVelocity_fn(IUIViewControllerTransitionCoordinator* __this, double* __retval);
void IUIViewControllerTransitionCoordinator__containerView_fn(IUIViewControllerTransitionCoordinator* __this, ::g::iOS::UIKit::UIView** __retval);
void IUIViewControllerTransitionCoordinator__initiallyInteractive_fn(IUIViewControllerTransitionCoordinator* __this, bool* __retval);
void IUIViewControllerTransitionCoordinator__isAnimated_fn(IUIViewControllerTransitionCoordinator* __this, bool* __retval);
void IUIViewControllerTransitionCoordinator__isCancelled_fn(IUIViewControllerTransitionCoordinator* __this, bool* __retval);
void IUIViewControllerTransitionCoordinator__isInteractive_fn(IUIViewControllerTransitionCoordinator* __this, bool* __retval);
void IUIViewControllerTransitionCoordinator__percentComplete_fn(IUIViewControllerTransitionCoordinator* __this, double* __retval);
void IUIViewControllerTransitionCoordinator__presentationStyle_fn(IUIViewControllerTransitionCoordinator* __this, int* __retval);
void IUIViewControllerTransitionCoordinator__targetTransform_fn(IUIViewControllerTransitionCoordinator* __this, ::g::iOS::CoreGraphics::CGAffineTransform* __retval);
void IUIViewControllerTransitionCoordinator__transitionDuration_fn(IUIViewControllerTransitionCoordinator* __this, double* __retval);
void IUIViewControllerTransitionCoordinator__viewControllerForKey_fn(IUIViewControllerTransitionCoordinator* __this, uString* key_, ::g::iOS::UIKit::UIViewController** __retval);
void IUIViewControllerTransitionCoordinator__viewForKey_fn(IUIViewControllerTransitionCoordinator* __this, uString* key_, ::g::iOS::UIKit::UIView** __retval);

struct IUIViewControllerTransitionCoordinator : ::g::ObjC::Bindings::Object
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
