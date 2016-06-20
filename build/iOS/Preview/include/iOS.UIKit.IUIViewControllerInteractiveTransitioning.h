// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIViewControllerInteractiveTransitioning :6374
// {
uInterfaceType* IUIViewControllerInteractiveTransitioning_typeof();

struct IUIViewControllerInteractiveTransitioning
{
    void(*fp_completionCurve)(uObject*, int*);
    void(*fp_completionSpeed)(uObject*, double*);
    void(*fp_startInteractiveTransition)(uObject*, uObject*);
    static int completionCurve(const uInterface& __this) { int __retval; return __this.VTable<IUIViewControllerInteractiveTransitioning>()->fp_completionCurve(__this, &__retval), __retval; }
    static double completionSpeed(const uInterface& __this) { double __retval; return __this.VTable<IUIViewControllerInteractiveTransitioning>()->fp_completionSpeed(__this, &__retval), __retval; }
    static void startInteractiveTransition(const uInterface& __this, uObject* transitionContext) { __this.VTable<IUIViewControllerInteractiveTransitioning>()->fp_startInteractiveTransition(__this, transitionContext); }
};
// }

}}} // ::g::iOS::UIKit
