// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Cursos;}
namespace g{struct Cursos__Template4;}

namespace g{

// public partial sealed class Cursos.Template4 :394
// {
::g::Uno::UX::Template_type* Cursos__Template4_typeof();
void Cursos__Template4__ctor_1_fn(Cursos__Template4* __this, ::g::Cursos* parent);
void Cursos__Template4__New1_fn(Cursos__Template4* __this, uObject** __retval);
void Cursos__Template4__New2_fn(::g::Cursos* parent, Cursos__Template4** __retval);

struct Cursos__Template4 : ::g::Uno::UX::Template
{
    uStrong< ::g::Cursos*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Cursos__Template4_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Cursos__Template4_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Source_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;

    void ctor_1(::g::Cursos* parent);
    static Cursos__Template4* New2(::g::Cursos* parent);
};
// }

} // ::g
