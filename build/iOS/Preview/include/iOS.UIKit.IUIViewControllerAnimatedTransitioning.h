// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIViewControllerAnimatedTransitioning :6313
// {
uInterfaceType* IUIViewControllerAnimatedTransitioning_typeof();

struct IUIViewControllerAnimatedTransitioning
{
    void(*fp_animateTransition)(uObject*, uObject*);
    void(*fp_animationEnded)(uObject*, bool*);
    void(*fp_transitionDuration)(uObject*, uObject*, double*);
    static void animateTransition(const uInterface& __this, uObject* transitionContext) { __this.VTable<IUIViewControllerAnimatedTransitioning>()->fp_animateTransition(__this, transitionContext); }
    static void animationEnded(const uInterface& __this, bool transitionCompleted) { __this.VTable<IUIViewControllerAnimatedTransitioning>()->fp_animationEnded(__this, &transitionCompleted); }
    static double transitionDuration(const uInterface& __this, uObject* transitionContext) { double __retval; return __this.VTable<IUIViewControllerAnimatedTransitioning>()->fp_transitionDuration(__this, transitionContext, &__retval), __retval; }
};
// }

}}} // ::g::iOS::UIKit
