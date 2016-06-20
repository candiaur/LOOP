// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Cursos;}
namespace g{struct Cursos__Template2;}

namespace g{

// public partial sealed class Cursos.Template2 :174
// {
::g::Uno::UX::Template_type* Cursos__Template2_typeof();
void Cursos__Template2__ctor_1_fn(Cursos__Template2* __this, ::g::Cursos* parent);
void Cursos__Template2__New1_fn(Cursos__Template2* __this, uObject** __retval);
void Cursos__Template2__New2_fn(::g::Cursos* parent, Cursos__Template2** __retval);

struct Cursos__Template2 : ::g::Uno::UX::Template
{
    uStrong< ::g::Cursos*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Cursos__Template2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Cursos__Template2_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Cursos__Template2_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Cursos__Template2_typeof()->Init(), __selector3_; }
    uStrong< ::g::Uno::UX::Property1*> actPage_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;

    void ctor_1(::g::Cursos* parent);
    static Cursos__Template2* New2(::g::Cursos* parent);
};
// }

} // ::g
