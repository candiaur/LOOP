// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Select;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Select :1677
// {
::g::Fuse::Triggers::Trigger_type* Select_typeof();
void Select__ctor_4_fn(Select* __this);
void Select__get_Data_fn(Select* __this, uObject** __retval);
void Select__set_Data_fn(Select* __this, uObject* value);
void Select__get_IsOn_fn(Select* __this, bool* __retval);
void Select__New2_fn(Select** __retval);
void Select__OnChanged_fn(Select* __this);
void Select__OnNodeAdded_fn(Select* __this, ::g::Fuse::Node* n);
void Select__OnRooted_fn(Select* __this);
void Select__UpdateNodes_fn(Select* __this);

struct Select : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _data;

    void ctor_4();
    uObject* Data();
    void Data(uObject* value);
    bool IsOn();
    void OnChanged();
    void UpdateNodes();
    static Select* New2();
};
// }

}}} // ::g::Fuse::Reactive
