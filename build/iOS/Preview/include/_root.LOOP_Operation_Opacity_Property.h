// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LOOP_Operation_Opacity_Property;}
namespace g{struct Operation;}

namespace g{

// internal sealed class LOOP_Operation_Opacity_Property :181
// {
::g::Uno::UX::Property1_type* LOOP_Operation_Opacity_Property_typeof();
void LOOP_Operation_Opacity_Property__ctor_2_fn(LOOP_Operation_Opacity_Property* __this, ::g::Operation* obj, ::g::Uno::UX::Selector* name);
void LOOP_Operation_Opacity_Property__Get_fn(LOOP_Operation_Opacity_Property* __this, float* __retval);
void LOOP_Operation_Opacity_Property__New1_fn(::g::Operation* obj, ::g::Uno::UX::Selector* name, LOOP_Operation_Opacity_Property** __retval);
void LOOP_Operation_Opacity_Property__get_Object_fn(LOOP_Operation_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LOOP_Operation_Opacity_Property__Set_fn(LOOP_Operation_Opacity_Property* __this, float* v, uObject* origin);
void LOOP_Operation_Opacity_Property__get_SupportsOriginSetter_fn(LOOP_Operation_Opacity_Property* __this, bool* __retval);

struct LOOP_Operation_Opacity_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Operation*> _obj;

    void ctor_2(::g::Operation* obj, ::g::Uno::UX::Selector name);
    static LOOP_Operation_Opacity_Property* New1(::g::Operation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
