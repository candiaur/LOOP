// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGAffineTransform;}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIViewControllerContextTransitioning :6333
// {
uInterfaceType* IUIViewControllerContextTransitioning_typeof();

struct IUIViewControllerContextTransitioning
{
    void(*fp_cancelInteractiveTransition)(uObject*);
    void(*fp_completeTransition)(uObject*, bool*);
    void(*fp_containerView)(uObject*, ::g::iOS::UIKit::UIView**);
    void(*fp_finalFrameForViewController)(uObject*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::CoreGraphics::CGRect*);
    void(*fp_finishInteractiveTransition)(uObject*);
    void(*fp_initialFrameForViewController)(uObject*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::CoreGraphics::CGRect*);
    void(*fp_isAnimated)(uObject*, bool*);
    void(*fp_isInteractive)(uObject*, bool*);
    void(*fp_presentationStyle)(uObject*, int*);
    void(*fp_targetTransform)(uObject*, ::g::iOS::CoreGraphics::CGAffineTransform*);
    void(*fp_transitionWasCancelled)(uObject*, bool*);
    void(*fp_updateInteractiveTransition)(uObject*, double*);
    void(*fp_viewControllerForKey)(uObject*, uString*, ::g::iOS::UIKit::UIViewController**);
    void(*fp_viewForKey)(uObject*, uString*, ::g::iOS::UIKit::UIView**);
    static void cancelInteractiveTransition(const uInterface& __this) { __this.VTable<IUIViewControllerContextTransitioning>()->fp_cancelInteractiveTransition(__this); }
    static void completeTransition(const uInterface& __this, bool didComplete) { __this.VTable<IUIViewControllerContextTransitioning>()->fp_completeTransition(__this, &didComplete); }
    static ::g::iOS::UIKit::UIView* containerView(const uInterface& __this) { ::g::iOS::UIKit::UIView* __retval; return __this.VTable<IUIViewControllerContextTransitioning>()->fp_containerView(__this, &__retval), __retval; }
    static ::g::iOS::CoreGraphics::CGRect finalFrameForViewController(const uInterface& __this, ::g::iOS::UIKit::UIViewController* vc);
    static void finishInteractiveTransition(const uInterface& __this) { __this.VTable<IUIViewControllerContextTransitioning>()->fp_finishInteractiveTransition(__this); }
    static ::g::iOS::CoreGraphics::CGRect initialFrameForViewController(const uInterface& __this, ::g::iOS::UIKit::UIViewController* vc);
    static bool isAnimated(const uInterface& __this) { bool __retval; return __this.VTable<IUIViewControllerContextTransitioning>()->fp_isAnimated(__this, &__retval), __retval; }
    static bool isInteractive(const uInterface& __this) { bool __retval; return __this.VTable<IUIViewControllerContextTransitioning>()->fp_isInteractive(__this, &__retval), __retval; }
    static int presentationStyle(const uInterface& __this) { int __retval; return __this.VTable<IUIViewControllerContextTransitioning>()->fp_presentationStyle(__this, &__retval), __retval; }
    static ::g::iOS::CoreGraphics::CGAffineTransform targetTransform(const uInterface& __this);
    static bool transitionWasCancelled(const uInterface& __this) { bool __retval; return __this.VTable<IUIViewControllerContextTransitioning>()->fp_transitionWasCancelled(__this, &__retval), __retval; }
    static void updateInteractiveTransition(const uInterface& __this, double percentComplete) { __this.VTable<IUIViewControllerContextTransitioning>()->fp_updateInteractiveTransition(__this, &percentComplete); }
    static ::g::iOS::UIKit::UIViewController* viewControllerForKey(const uInterface& __this, uString* key) { ::g::iOS::UIKit::UIViewController* __retval; return __this.VTable<IUIViewControllerContextTransitioning>()->fp_viewControllerForKey(__this, key, &__retval), __retval; }
    static ::g::iOS::UIKit::UIView* viewForKey(const uInterface& __this, uString* key) { ::g::iOS::UIKit::UIView* __retval; return __this.VTable<IUIViewControllerContextTransitioning>()->fp_viewForKey(__this, key, &__retval), __retval; }
};

}}} // ::g::iOS::UIKit

#include <iOS.CoreGraphics.CGAffineTransform.h>
#include <iOS.CoreGraphics.CGRect.h>

namespace g{
namespace iOS{
namespace UIKit{

inline ::g::iOS::CoreGraphics::CGRect IUIViewControllerContextTransitioning::finalFrameForViewController(const uInterface& __this, ::g::iOS::UIKit::UIViewController* vc) { ::g::iOS::CoreGraphics::CGRect __retval; return __this.VTable<IUIViewControllerContextTransitioning>()->fp_finalFrameForViewController(__this, vc, &__retval), __retval; }
inline ::g::iOS::CoreGraphics::CGRect IUIViewControllerContextTransitioning::initialFrameForViewController(const uInterface& __this, ::g::iOS::UIKit::UIViewController* vc) { ::g::iOS::CoreGraphics::CGRect __retval; return __this.VTable<IUIViewControllerContextTransitioning>()->fp_initialFrameForViewController(__this, vc, &__retval), __retval; }
inline ::g::iOS::CoreGraphics::CGAffineTransform IUIViewControllerContextTransitioning::targetTransform(const uInterface& __this) { ::g::iOS::CoreGraphics::CGAffineTransform __retval; return __this.VTable<IUIViewControllerContextTransitioning>()->fp_targetTransform(__this, &__retval), __retval; }
// }

}}} // ::g::iOS::UIKit
