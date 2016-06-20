// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Cursos;}

namespace g{

// public partial sealed class Cursos :2
// {
::g::Fuse::Controls::Control_type* Cursos_typeof();
void Cursos__ctor_7_fn(Cursos* __this);
void Cursos__InitializeUX_fn(Cursos* __this);
void Cursos__New4_fn(Cursos** __retval);

struct Cursos : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Cursos_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Cursos_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Cursos_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return Cursos_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return Cursos_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return Cursos_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return Cursos_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return Cursos_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return Cursos_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return Cursos_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return Cursos_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return Cursos_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return Cursos_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Cursos_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return Cursos_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return Cursos_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Cursos_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Cursos_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Cursos_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return Cursos_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return Cursos_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return Cursos_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return Cursos_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::PageControl*> actPage;
    uStrong< ::g::Uno::UX::Property1*> actPage_Active_inst;
    uStrong< ::g::Fuse::Controls::Page*> addActividad;
    uStrong< ::g::Fuse::Controls::Page*> addAlumnos;
    uStrong< ::g::Fuse::Controls::Page*> addCurso;
    uStrong< ::g::Fuse::Controls::Page*> calificaAlumno;
    uStrong< ::g::Fuse::Controls::Page*> crearAlumno;
    uStrong< ::g::Fuse::Controls::Page*> pagActividad;
    uStrong< ::g::Fuse::Controls::Page*> pagAlumnos;
    uStrong< ::g::Fuse::Controls::Page*> pagCalendario;
    uStrong< ::g::Fuse::Controls::Page*> pagCursos;
    uStrong< ::g::Fuse::Controls::Page*> pagInstructores;
    uStrong< ::g::Fuse::Controls::Page*> pagRamas;
    uStrong< ::g::Fuse::Controls::DockPanel*> showActividad;
    uStrong< ::g::Uno::UX::Property1*> showActividad_Visibility_inst;
    uStrong< ::g::Fuse::Controls::DockPanel*> showaddCurso;
    uStrong< ::g::Uno::UX::Property1*> showaddCurso_Visibility_inst;
    uStrong< ::g::Fuse::Controls::StackPanel*> showCalendario;
    uStrong< ::g::Uno::UX::Property1*> showCalendario_Visibility_inst;
    uStrong< ::g::Fuse::Controls::DockPanel*> showCreaAlumno;
    uStrong< ::g::Uno::UX::Property1*> showCreaAlumno_Visibility_inst;
    uStrong< ::g::Fuse::Controls::StackPanel*> showInstructores;
    uStrong< ::g::Uno::UX::Property1*> showInstructores_Visibility_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb10;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb11;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb13;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb14;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb15;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb20;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb21;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb25;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb26;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb27;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb28;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb29;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb33;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb35;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb5;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb6;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb7;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb9;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp11_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp12_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp13_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp14_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp15_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp16_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp17_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp18_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp19_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp20_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp21_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp22_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp23_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp24_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp25_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp26_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp27_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp28_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp29_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp30_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp31_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp32_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp33_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp34_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp35_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp36_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp37_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp38_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;

    void ctor_7();
    void InitializeUX();
    static Cursos* New4();
};
// }

} // ::g
