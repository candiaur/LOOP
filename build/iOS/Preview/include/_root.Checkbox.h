// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Checkbox.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Checkbox;}

namespace g{

// public partial sealed class Checkbox :2
// {
::g::Fuse::Controls::ToggleControl_type* Checkbox_typeof();
void Checkbox__ctor_8_fn(Checkbox* __this);
void Checkbox__InitializeUX_fn(Checkbox* __this);
void Checkbox__New5_fn(Checkbox** __retval);
void Checkbox__SetTextColor_fn(Checkbox* __this, ::g::Uno::Float4* value, uObject* origin);
void Checkbox__get_TextColor_fn(Checkbox* __this, ::g::Uno::Float4* __retval);
void Checkbox__set_TextColor_fn(Checkbox* __this, ::g::Uno::Float4* value);

struct Checkbox : ::g::Fuse::Controls::ToggleControl
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Checkbox_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Checkbox_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Checkbox_typeof()->Init(), __selector2_; }
    ::g::Uno::Float4 _field_TextColor;
    uStrong< ::g::Fuse::Controls::Text*> checkbox;
    uStrong< ::g::Uno::UX::Property1*> checkbox_TextColor_inst;
    uStrong< ::g::Uno::UX::Property1*> checkbox_Value_inst;
    static uSStrong< ::g::Fuse::Font*> fa_icons_;
    static uSStrong< ::g::Fuse::Font*>& fa_icons() { return Checkbox_typeof()->Init(), fa_icons_; }
    uStrong< ::g::Uno::UX::Property1*> this_TextColor_inst;

    void ctor_8();
    void InitializeUX();
    void SetTextColor(::g::Uno::Float4 value, uObject* origin);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    static Checkbox* New5();
};
// }

} // ::g
