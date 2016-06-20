// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Cursos;}
namespace g{struct Cursos__Template9;}

namespace g{

// public partial sealed class Cursos.Template9 :1027
// {
::g::Uno::UX::Template_type* Cursos__Template9_typeof();
void Cursos__Template9__ctor_1_fn(Cursos__Template9* __this, ::g::Cursos* parent);
void Cursos__Template9__New1_fn(Cursos__Template9* __this, uObject** __retval);
void Cursos__Template9__New2_fn(::g::Cursos* parent, Cursos__Template9** __retval);

struct Cursos__Template9 : ::g::Uno::UX::Template
{
    uStrong< ::g::Cursos*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Cursos__Template9_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Cursos__Template9_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Source_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;

    void ctor_1(::g::Cursos* parent);
    static Cursos__Template9* New2(::g::Cursos* parent);
};
// }

} // ::g
