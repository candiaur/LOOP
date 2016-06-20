// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.iOS.Bindings.Controls.Control-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace Controls{struct Switch;}}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct ControlEvent;}}}}
namespace g{namespace iOS{namespace UIKit{struct UISwitch;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace Controls{

// public sealed extern class Switch :950
// {
::g::Fuse::iOS::Bindings::Controls::Element_type* Switch_typeof();
void Switch__ctor_4_fn(Switch* __this);
void Switch__New2_fn(Switch** __retval);

struct Switch : ::g::Fuse::iOS::Bindings::Controls::Control
{
    uStrong< ::g::iOS::UIKit::UISwitch*> _switch;
    uStrong< ::g::Fuse::iOS::Bindings::ControlEvent*> _toggled;

    void ctor_4();
    static Switch* New2();
};
// }

}}}}} // ::g::Fuse::iOS::Bindings::Controls
