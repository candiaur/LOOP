// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Navigation/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.IRouterOutlet.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__PageData;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Motion{struct MotionConfig;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageState;}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct SwipeNavigate;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PageControl :925
// {
struct PageControl_type : ::g::Fuse::Controls::NavigationControl_type
{
    ::g::Fuse::Navigation::INavigation interface13;
    ::g::Fuse::Navigation::IRouterOutlet interface14;
    ::g::Fuse::Navigation::IBaseNavigation interface15;
};

PageControl_type* PageControl_typeof();
void PageControl__ctor_8_fn(PageControl* __this);
void PageControl__get_AllowedSwipeDirections_fn(PageControl* __this, int* __retval);
void PageControl__set_AllowedSwipeDirections_fn(PageControl* __this, int* value);
void PageControl__get_CanGoBack_fn(PageControl* __this, bool* __retval);
void PageControl__get_CanGoForward_fn(PageControl* __this, bool* __retval);
void PageControl__get_CollapseInactive_fn(PageControl* __this, bool* __retval);
void PageControl__CreateTriggers_fn(PageControl* __this, ::g::Fuse::Elements::Element* c, ::g::Fuse::Controls::NavigationControl__PageData* pd);
void PageControl__get_DisableInactive_fn(PageControl* __this, bool* __retval);
void PageControl__FuseNavigationINavigationget_ActivePage_fn(PageControl* __this, ::g::Fuse::Visual** __retval);
void PageControl__FuseNavigationINavigationGetPage_fn(PageControl* __this, int* index, ::g::Fuse::Visual** __retval);
void PageControl__FuseNavigationINavigationGetPageState_fn(PageControl* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval);
void PageControl__FuseNavigationINavigationget_PageCount_fn(PageControl* __this, int* __retval);
void PageControl__FuseNavigationINavigationget_PageProgress_fn(PageControl* __this, double* __retval);
void PageControl__FuseNavigationIRouterOutletGetCurrent_fn(PageControl* __this, uString** path, uString** parameter, ::g::Fuse::Visual** active);
void PageControl__FuseNavigationIRouterOutletGoto_fn(PageControl* __this, uString* path, uString* parameter, int* gotoMode, int* direction, int* __retval);
void PageControl__FuseNavigationIRouterOutletget_Type_fn(PageControl* __this, int* __retval);
void PageControl__GoBack_fn(PageControl* __this);
void PageControl__GoForward_fn(PageControl* __this);
void PageControl__Goto_fn(PageControl* __this, ::g::Fuse::Visual* node, int* mode);
void PageControl__gotoPage_fn(PageControl* pc, uArray* args);
void PageControl__add_HistoryChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__remove_HistoryChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__get_InactiveState_fn(PageControl* __this, int* __retval);
void PageControl__set_InactiveState_fn(PageControl* __this, int* value);
void PageControl__get_Interaction_fn(PageControl* __this, int* __retval);
void PageControl__set_Interaction_fn(PageControl* __this, int* value);
void PageControl__get_IsHorizontal_fn(PageControl* __this, bool* __retval);
void PageControl__get_Motion_fn(PageControl* __this, ::g::Fuse::Motion::MotionConfig** __retval);
void PageControl__set_Motion_fn(PageControl* __this, ::g::Fuse::Motion::MotionConfig* value);
void PageControl__add_Navigated_fn(PageControl* __this, uDelegate* value);
void PageControl__remove_Navigated_fn(PageControl* __this, uDelegate* value);
void PageControl__get_Navigation1_fn(PageControl* __this, ::g::Fuse::Navigation::StructuredNavigation** __retval);
void PageControl__New4_fn(PageControl** __retval);
void PageControl__get_Orientation_fn(PageControl* __this, int* __retval);
void PageControl__set_Orientation_fn(PageControl* __this, int* value);
void PageControl__add_PageCountChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__remove_PageCountChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__add_PageProgressChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__remove_PageProgressChanged_fn(PageControl* __this, uDelegate* value);
void PageControl__Toggle_fn(PageControl* __this, ::g::Fuse::Visual* node);
void PageControl__get_TransitionDuration_fn(PageControl* __this, double* __retval);
void PageControl__set_TransitionDuration_fn(PageControl* __this, double* value);
void PageControl__get_TransitionEasing_fn(PageControl* __this, int* __retval);
void PageControl__set_TransitionEasing_fn(PageControl* __this, int* value);
void PageControl__UpdateInteraction_fn(PageControl* __this);
void PageControl__UpdateProgress_fn(PageControl* __this, ::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState* state, ::g::Fuse::Controls::NavigationControl__PageData* pd);

struct PageControl : ::g::Fuse::Controls::NavigationControl
{
    int _inactive;
    int _interaction;
    int _orient;
    uStrong< ::g::Fuse::Navigation::SwipeNavigate*> _swipe;
    int _swipeAllow;

    void ctor_8();
    int AllowedSwipeDirections();
    void AllowedSwipeDirections(int value);
    bool CanGoBack();
    bool CanGoForward();
    bool CollapseInactive();
    bool DisableInactive();
    void GoBack();
    void GoForward();
    void Goto(::g::Fuse::Visual* node, int mode);
    void add_HistoryChanged(uDelegate* value);
    void remove_HistoryChanged(uDelegate* value);
    int InactiveState();
    void InactiveState(int value);
    int Interaction();
    void Interaction(int value);
    bool IsHorizontal();
    ::g::Fuse::Motion::MotionConfig* Motion();
    void Motion(::g::Fuse::Motion::MotionConfig* value);
    void add_Navigated(uDelegate* value);
    void remove_Navigated(uDelegate* value);
    ::g::Fuse::Navigation::StructuredNavigation* Navigation1();
    int Orientation();
    void Orientation(int value);
    void add_PageCountChanged(uDelegate* value);
    void remove_PageCountChanged(uDelegate* value);
    void add_PageProgressChanged(uDelegate* value);
    void remove_PageProgressChanged(uDelegate* value);
    void Toggle(::g::Fuse::Visual* node);
    double TransitionDuration();
    void TransitionDuration(double value);
    int TransitionEasing();
    void TransitionEasing(int value);
    static void gotoPage(PageControl* pc, uArray* args);
    static PageControl* New4();
};
// }

}}} // ::g::Fuse::Controls
