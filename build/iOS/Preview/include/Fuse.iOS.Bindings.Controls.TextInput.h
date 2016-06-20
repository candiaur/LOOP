// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.iOS.Bindings.Controls.Control-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace Controls{struct TextInput;}}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace Controls{

// public sealed extern class TextInput :1128
// {
::g::Fuse::iOS::Bindings::Controls::Element_type* TextInput_typeof();
void TextInput__ctor_4_fn(TextInput* __this);
void TextInput__New2_fn(TextInput** __retval);
void TextInput__OnPropertyChanged2_fn(TextInput* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct TextInput : ::g::Fuse::iOS::Bindings::Controls::Control
{
    static ::g::Uno::UX::Selector _valueName_;
    static ::g::Uno::UX::Selector& _valueName() { return TextInput_typeof()->Init(), _valueName_; }

    void ctor_4();
    static TextInput* New2();
};
// }

}}}}} // ::g::Fuse::iOS::Bindings::Controls
