// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Indicador.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Indicador;}
namespace g{struct Indicador__Template1;}

namespace g{

// public partial sealed class Indicador.Template1 :80
// {
::g::Uno::UX::Template_type* Indicador__Template1_typeof();
void Indicador__Template1__ctor_1_fn(Indicador__Template1* __this, ::g::Indicador* parent);
void Indicador__Template1__New1_fn(Indicador__Template1* __this, uObject** __retval);
void Indicador__Template1__New2_fn(::g::Indicador* parent, Indicador__Template1** __retval);

struct Indicador__Template1 : ::g::Uno::UX::Template
{
    uStrong< ::g::Indicador*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Indicador__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Indicador__Template1_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Indicador__Template1_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Indicador__Template1_typeof()->Init(), __selector3_; }
    uStrong< ::g::Uno::UX::Property1*> alumPage_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> self_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Source_inst;

    void ctor_1(::g::Indicador* parent);
    static Indicador__Template1* New2(::g::Indicador* parent);
};
// }

} // ::g
