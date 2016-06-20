// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.iOS.Bindings.Controls.Control-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace Controls{struct Button;}}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct ControlEvent;}}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace Controls{

// public sealed extern class Button :59
// {
::g::Fuse::iOS::Bindings::Controls::Element_type* Button_typeof();
void Button__ctor_4_fn(Button* __this);
void Button__New2_fn(Button** __retval);

struct Button : ::g::Fuse::iOS::Bindings::Controls::Control
{
    uStrong< ::g::Fuse::iOS::Bindings::ControlEvent*> _clickedEvent;

    void ctor_4();
    static Button* New2();
};
// }

}}}}} // ::g::Fuse::iOS::Bindings::Controls
