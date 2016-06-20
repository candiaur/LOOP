// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace iOS{namespace UIKit{struct UIPresentationController;}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIViewControllerTransitioningDelegate :6490
// {
uInterfaceType* IUIViewControllerTransitioningDelegate_typeof();

struct IUIViewControllerTransitioningDelegate
{
    void(*fp_animationControllerForDismissedController)(uObject*, ::g::iOS::UIKit::UIViewController*, uObject**);
    void(*fp_animationControllerForPresentedControllerPresentingControllerSourceController)(uObject*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, uObject**);
    void(*fp_interactionControllerForDismissal)(uObject*, uObject*, uObject**);
    void(*fp_interactionControllerForPresentation)(uObject*, uObject*, uObject**);
    void(*fp_presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController)(uObject*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIPresentationController**);
    static uObject* animationControllerForDismissedController(const uInterface& __this, ::g::iOS::UIKit::UIViewController* dismissed) { uObject* __retval; return __this.VTable<IUIViewControllerTransitioningDelegate>()->fp_animationControllerForDismissedController(__this, dismissed, &__retval), __retval; }
    static uObject* animationControllerForPresentedControllerPresentingControllerSourceController(const uInterface& __this, ::g::iOS::UIKit::UIViewController* presented, ::g::iOS::UIKit::UIViewController* presenting, ::g::iOS::UIKit::UIViewController* source) { uObject* __retval; return __this.VTable<IUIViewControllerTransitioningDelegate>()->fp_animationControllerForPresentedControllerPresentingControllerSourceController(__this, presented, presenting, source, &__retval), __retval; }
    static uObject* interactionControllerForDismissal(const uInterface& __this, uObject* animator) { uObject* __retval; return __this.VTable<IUIViewControllerTransitioningDelegate>()->fp_interactionControllerForDismissal(__this, animator, &__retval), __retval; }
    static uObject* interactionControllerForPresentation(const uInterface& __this, uObject* animator) { uObject* __retval; return __this.VTable<IUIViewControllerTransitioningDelegate>()->fp_interactionControllerForPresentation(__this, animator, &__retval), __retval; }
    static ::g::iOS::UIKit::UIPresentationController* presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController(const uInterface& __this, ::g::iOS::UIKit::UIViewController* presented, ::g::iOS::UIKit::UIViewController* presenting, ::g::iOS::UIKit::UIViewController* source) { ::g::iOS::UIKit::UIPresentationController* __retval; return __this.VTable<IUIViewControllerTransitioningDelegate>()->fp_presentationControllerForPresentedViewControllerPresentingViewControllerSourceViewController(__this, presented, presenting, source, &__retval), __retval; }
};
// }

}}} // ::g::iOS::UIKit
