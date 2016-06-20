// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Cursos;}
namespace g{struct Cursos__Template7;}

namespace g{

// public partial sealed class Cursos.Template7 :690
// {
::g::Uno::UX::Template_type* Cursos__Template7_typeof();
void Cursos__Template7__ctor_1_fn(Cursos__Template7* __this, ::g::Cursos* parent);
void Cursos__Template7__New1_fn(Cursos__Template7* __this, uObject** __retval);
void Cursos__Template7__New2_fn(::g::Cursos* parent, Cursos__Template7** __retval);

struct Cursos__Template7 : ::g::Uno::UX::Template
{
    uStrong< ::g::Cursos*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Cursos__Template7_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Cursos__Template7_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> self_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;

    void ctor_1(::g::Cursos* parent);
    static Cursos__Template7* New2(::g::Cursos* parent);
};
// }

} // ::g
