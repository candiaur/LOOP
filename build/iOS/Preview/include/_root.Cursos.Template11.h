// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Cursos;}
namespace g{struct Cursos__Template11;}

namespace g{

// public partial sealed class Cursos.Template11 :1226
// {
::g::Uno::UX::Template_type* Cursos__Template11_typeof();
void Cursos__Template11__ctor_1_fn(Cursos__Template11* __this, ::g::Cursos* parent);
void Cursos__Template11__New1_fn(Cursos__Template11* __this, uObject** __retval);
void Cursos__Template11__New2_fn(::g::Cursos* parent, Cursos__Template11** __retval);

struct Cursos__Template11 : ::g::Uno::UX::Template
{
    uStrong< ::g::Cursos*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Cursos__Template11_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;

    void ctor_1(::g::Cursos* parent);
    static Cursos__Template11* New2(::g::Cursos* parent);
};
// }

} // ::g
