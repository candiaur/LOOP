// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileInactive;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileInactive :3294
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof();
void WhileInactive__ctor_6_fn(WhileInactive* __this);
void WhileInactive__ForceUpdate_fn(WhileInactive* __this);
void WhileInactive__New2_fn(WhileInactive** __retval);
void WhileInactive__OnNavigationStateChanged_fn(WhileInactive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileInactive : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_6();
    static WhileInactive* New2();
};
// }

}}} // ::g::Fuse::Navigation
