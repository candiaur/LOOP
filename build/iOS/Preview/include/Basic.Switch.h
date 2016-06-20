// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.29.22/.uno/$.uno'.
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
namespace g{namespace Basic{struct Switch;}}
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Effects{struct DropShadow;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Basic{

// public partial sealed class Switch :454
// {
::g::Fuse::Controls::ToggleControl_type* Switch_typeof();
void Switch__ctor_8_fn(Switch* __this);
void Switch__InitializeUX_fn(Switch* __this);
void Switch__New5_fn(Switch** __retval);

struct Switch : ::g::Fuse::Controls::ToggleControl
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Switch_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Switch_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Switch_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Switch_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Switch_typeof()->Init(), __selector4_; }
    uStrong< ::g::Fuse::Controls::Panel*> _switchBounds;
    uStrong< ::g::Fuse::Drawing::Stroke*> _switchStroke;
    uStrong< ::g::Uno::UX::Property1*> _switchStroke_Width_inst;
    uStrong< ::g::Fuse::Drawing::SolidColor*> _switchStrokeColor;
    uStrong< ::g::Uno::UX::Property1*> _switchStrokeColor_Color_inst;
    uStrong< ::g::Fuse::Controls::Circle*> _switchThumb;
    uStrong< ::g::Fuse::Drawing::SolidColor*> _switchThumbColor;
    uStrong< ::g::Uno::UX::Property1*> _switchThumbColor_Color_inst;
    uStrong< ::g::Fuse::Drawing::Stroke*> _switchThumbStroke;
    uStrong< ::g::Uno::UX::Property1*> _switchThumbStroke_Width_inst;
    uStrong< ::g::Fuse::Effects::DropShadow*> switchShadow;
    uStrong< ::g::Uno::UX::Property1*> switchShadow_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;

    void ctor_8();
    void InitializeUX();
    static Switch* New5();
};
// }

}} // ::g::Basic
