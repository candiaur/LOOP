// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIViewControllerTransitionCoordinatorContext.h>
#include <Uno.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGAffineTransform;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIViewControllerTransitionCoordinator :6411
// {
uInterfaceType* IUIViewControllerTransitionCoordinator_typeof();

struct IUIViewControllerTransitionCoordinator
{
    void(*fp_completionCurve)(uObject*, int*);
    void(*fp_completionVelocity)(uObject*, double*);
    void(*fp_containerView)(uObject*, ::g::iOS::UIKit::UIView**);
    void(*fp_initiallyInteractive)(uObject*, bool*);
    void(*fp_isAnimated)(uObject*, bool*);
    void(*fp_isCancelled)(uObject*, bool*);
    void(*fp_isInteractive)(uObject*, bool*);
    void(*fp_percentComplete)(uObject*, double*);
    void(*fp_presentationStyle)(uObject*, int*);
    void(*fp_targetTransform)(uObject*, ::g::iOS::CoreGraphics::CGAffineTransform*);
    void(*fp_transitionDuration)(uObject*, double*);
    void(*fp_viewControllerForKey)(uObject*, uString*, ::g::iOS::UIKit::UIViewController**);
    void(*fp_viewForKey)(uObject*, uString*, ::g::iOS::UIKit::UIView**);
    static int completionCurve(const uInterface& __this) { int __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_completionCurve(__this, &__retval), __retval; }
    static double completionVelocity(const uInterface& __this) { double __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_completionVelocity(__this, &__retval), __retval; }
    static ::g::iOS::UIKit::UIView* containerView(const uInterface& __this) { ::g::iOS::UIKit::UIView* __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_containerView(__this, &__retval), __retval; }
    static bool initiallyInteractive(const uInterface& __this) { bool __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_initiallyInteractive(__this, &__retval), __retval; }
    static bool isAnimated(const uInterface& __this) { bool __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_isAnimated(__this, &__retval), __retval; }
    static bool isCancelled(const uInterface& __this) { bool __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_isCancelled(__this, &__retval), __retval; }
    static bool isInteractive(const uInterface& __this) { bool __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_isInteractive(__this, &__retval), __retval; }
    static double percentComplete(const uInterface& __this) { double __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_percentComplete(__this, &__retval), __retval; }
    static int presentationStyle(const uInterface& __this) { int __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_presentationStyle(__this, &__retval), __retval; }
    static ::g::iOS::CoreGraphics::CGAffineTransform targetTransform(const uInterface& __this);
    static double transitionDuration(const uInterface& __this) { double __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_transitionDuration(__this, &__retval), __retval; }
    static ::g::iOS::UIKit::UIViewController* viewControllerForKey(const uInterface& __this, uString* key) { ::g::iOS::UIKit::UIViewController* __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_viewControllerForKey(__this, key, &__retval), __retval; }
    static ::g::iOS::UIKit::UIView* viewForKey(const uInterface& __this, uString* key) { ::g::iOS::UIKit::UIView* __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_viewForKey(__this, key, &__retval), __retval; }
};

}}} // ::g::iOS::UIKit

#include <iOS.CoreGraphics.CGAffineTransform.h>

namespace g{
namespace iOS{
namespace UIKit{

inline ::g::iOS::CoreGraphics::CGAffineTransform IUIViewControllerTransitionCoordinator::targetTransform(const uInterface& __this) { ::g::iOS::CoreGraphics::CGAffineTransform __retval; return __this.VTable<IUIViewControllerTransitionCoordinator>()->fp_targetTransform(__this, &__retval), __retval; }
// }

}}} // ::g::iOS::UIKit
