// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIViewControllerContextTransitioning.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGAffineTransform;}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerContextTransitioning;}}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController;}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIViewControllerContextTransitioning :8666
// {
struct IUIViewControllerContextTransitioning_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUIViewControllerContextTransitioning interface1;
};

IUIViewControllerContextTransitioning_type* IUIViewControllerContextTransitioning_typeof();
void IUIViewControllerContextTransitioning__cancelInteractiveTransition_fn(IUIViewControllerContextTransitioning* __this);
void IUIViewControllerContextTransitioning__completeTransition_fn(IUIViewControllerContextTransitioning* __this, bool* didComplete_);
void IUIViewControllerContextTransitioning__containerView_fn(IUIViewControllerContextTransitioning* __this, ::g::iOS::UIKit::UIView** __retval);
void IUIViewControllerContextTransitioning__finalFrameForViewController_fn(IUIViewControllerContextTransitioning* __this, ::g::iOS::UIKit::UIViewController* vc_, ::g::iOS::CoreGraphics::CGRect* __retval);
void IUIViewControllerContextTransitioning__finishInteractiveTransition_fn(IUIViewControllerContextTransitioning* __this);
void IUIViewControllerContextTransitioning__initialFrameForViewController_fn(IUIViewControllerContextTransitioning* __this, ::g::iOS::UIKit::UIViewController* vc_, ::g::iOS::CoreGraphics::CGRect* __retval);
void IUIViewControllerContextTransitioning__isAnimated_fn(IUIViewControllerContextTransitioning* __this, bool* __retval);
void IUIViewControllerContextTransitioning__isInteractive_fn(IUIViewControllerContextTransitioning* __this, bool* __retval);
void IUIViewControllerContextTransitioning__presentationStyle_fn(IUIViewControllerContextTransitioning* __this, int* __retval);
void IUIViewControllerContextTransitioning__targetTransform_fn(IUIViewControllerContextTransitioning* __this, ::g::iOS::CoreGraphics::CGAffineTransform* __retval);
void IUIViewControllerContextTransitioning__transitionWasCancelled_fn(IUIViewControllerContextTransitioning* __this, bool* __retval);
void IUIViewControllerContextTransitioning__updateInteractiveTransition_fn(IUIViewControllerContextTransitioning* __this, double* percentComplete_);
void IUIViewControllerContextTransitioning__viewControllerForKey_fn(IUIViewControllerContextTransitioning* __this, uString* key_, ::g::iOS::UIKit::UIViewController** __retval);
void IUIViewControllerContextTransitioning__viewForKey_fn(IUIViewControllerContextTransitioning* __this, uString* key_, ::g::iOS::UIKit::UIView** __retval);

struct IUIViewControllerContextTransitioning : ::g::ObjC::Bindings::Object
{
    void cancelInteractiveTransition();
    void completeTransition(bool didComplete_);
    ::g::iOS::UIKit::UIView* containerView();
    ::g::iOS::CoreGraphics::CGRect finalFrameForViewController(::g::iOS::UIKit::UIViewController* vc_);
    void finishInteractiveTransition();
    ::g::iOS::CoreGraphics::CGRect initialFrameForViewController(::g::iOS::UIKit::UIViewController* vc_);
    bool isAnimated();
    bool isInteractive();
    int presentationStyle();
    ::g::iOS::CoreGraphics::CGAffineTransform targetTransform();
    bool transitionWasCancelled();
    void updateInteractiveTransition(double percentComplete_);
    ::g::iOS::UIKit::UIViewController* viewControllerForKey(uString* key_);
    ::g::iOS::UIKit::UIView* viewForKey(uString* key_);
};
// }

}}}} // ::g::iOS::UIKit::Interop
