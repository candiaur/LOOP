// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Cursos;}
namespace g{struct Cursos__Template5;}

namespace g{

// public partial sealed class Cursos.Template5 :444
// {
::g::Uno::UX::Template_type* Cursos__Template5_typeof();
void Cursos__Template5__ctor_1_fn(Cursos__Template5* __this, ::g::Cursos* parent);
void Cursos__Template5__New1_fn(Cursos__Template5* __this, uObject** __retval);
void Cursos__Template5__New2_fn(::g::Cursos* parent, Cursos__Template5** __retval);

struct Cursos__Template5 : ::g::Uno::UX::Template
{
    uStrong< ::g::Cursos*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Cursos__Template5_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> self_Items_inst;

    void ctor_1(::g::Cursos* parent);
    static Cursos__Template5* New2(::g::Cursos* parent);
};
// }

} // ::g
