// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Indicador.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Indicador;}
namespace g{struct Indicador__Template2;}

namespace g{

// public partial sealed class Indicador.Template2 :149
// {
::g::Uno::UX::Template_type* Indicador__Template2_typeof();
void Indicador__Template2__ctor_1_fn(Indicador__Template2* __this, ::g::Indicador* parent);
void Indicador__Template2__New1_fn(Indicador__Template2* __this, uObject** __retval);
void Indicador__Template2__New2_fn(::g::Indicador* parent, Indicador__Template2** __retval);

struct Indicador__Template2 : ::g::Uno::UX::Template
{
    uStrong< ::g::Indicador*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Indicador__Template2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Indicador__Template2_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;

    void ctor_1(::g::Indicador* parent);
    static Indicador__Template2* New2(::g::Indicador* parent);
};
// }

} // ::g
