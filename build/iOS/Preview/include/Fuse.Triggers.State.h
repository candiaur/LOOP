// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class State :756
// {
::g::Fuse::Triggers::Trigger_type* State_typeof();
void State__ctor_4_fn(State* __this);
void State__Goto_fn(State* __this);
void State__goto__fn(State* n, uArray* args);
void State__get_Name1_fn(State* __this, ::g::Uno::UX::Selector* __retval);
void State__set_Name1_fn(State* __this, ::g::Uno::UX::Selector* value);
void State__New2_fn(State** __retval);
void State__get_On_fn(State* __this, bool* __retval);
void State__set_On_fn(State* __this, bool* value);
void State__OnRooted_fn(State* __this);
void State__OnUnrooted_fn(State* __this);
void State__get_Progress1_fn(State* __this, double* __retval);
void State__RootStateGroup_fn(State* __this, ::g::Fuse::Triggers::StateGroup* stateGroup);

struct State : ::g::Fuse::Triggers::Trigger
{
    ::g::Uno::UX::Selector _name1;
    bool _on;
    uStrong< ::g::Fuse::Triggers::StateGroup*> _stateGroup;

    void ctor_4();
    void Goto();
    ::g::Uno::UX::Selector Name1();
    void Name1(::g::Uno::UX::Selector value);
    bool On();
    void On(bool value);
    double Progress1();
    void RootStateGroup(::g::Fuse::Triggers::StateGroup* stateGroup);
    static void goto_(State* n, uArray* args);
    static State* New2();
};
// }

}}} // ::g::Fuse::Triggers
