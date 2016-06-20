// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Indicador.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Indicador;}

namespace g{

// public partial sealed class Indicador :2
// {
::g::Fuse::Controls::Control_type* Indicador_typeof();
void Indicador__ctor_7_fn(Indicador* __this);
void Indicador__InitializeUX_fn(Indicador* __this);
void Indicador__New4_fn(Indicador** __retval);

struct Indicador : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Indicador_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Indicador_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Indicador_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Indicador_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Indicador_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Indicador_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Indicador_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return Indicador_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return Indicador_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return Indicador_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return Indicador_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::PageControl*> alumPage;
    uStrong< ::g::Uno::UX::Property1*> alumPage_Active_inst;
    uStrong< ::g::Fuse::Controls::Page*> pagAsistencia;
    uStrong< ::g::Uno::UX::Property1*> pagAsistencia_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> pagAsistencia_Visibility_inst;
    uStrong< ::g::Fuse::Controls::Page*> pagEvolucion;
    uStrong< ::g::Uno::UX::Property1*> pagEvolucion_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> pagEvolucion_Visibility_inst;
    uStrong< ::g::Fuse::Controls::Page*> pagMiActividad;
    uStrong< ::g::Fuse::Controls::Page*> pagProgreso;
    uStrong< ::g::Uno::UX::Property1*> pagProgreso_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> pagProgreso_Visibility_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb36;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb37;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb38;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb40;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb41;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Items_inst;

    void ctor_7();
    void InitializeUX();
    static Indicador* New4();
};
// }

} // ::g
