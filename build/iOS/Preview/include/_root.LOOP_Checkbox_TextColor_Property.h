// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Checkbox;}
namespace g{struct LOOP_Checkbox_TextColor_Property;}

namespace g{

// internal sealed class LOOP_Checkbox_TextColor_Property :172
// {
::g::Uno::UX::Property1_type* LOOP_Checkbox_TextColor_Property_typeof();
void LOOP_Checkbox_TextColor_Property__ctor_2_fn(LOOP_Checkbox_TextColor_Property* __this, ::g::Checkbox* obj, ::g::Uno::UX::Selector* name);
void LOOP_Checkbox_TextColor_Property__Get_fn(LOOP_Checkbox_TextColor_Property* __this, ::g::Uno::Float4* __retval);
void LOOP_Checkbox_TextColor_Property__New1_fn(::g::Checkbox* obj, ::g::Uno::UX::Selector* name, LOOP_Checkbox_TextColor_Property** __retval);
void LOOP_Checkbox_TextColor_Property__get_Object_fn(LOOP_Checkbox_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LOOP_Checkbox_TextColor_Property__Set_fn(LOOP_Checkbox_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void LOOP_Checkbox_TextColor_Property__get_SupportsOriginSetter_fn(LOOP_Checkbox_TextColor_Property* __this, bool* __retval);

struct LOOP_Checkbox_TextColor_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Checkbox*> _obj;

    void ctor_2(::g::Checkbox* obj, ::g::Uno::UX::Selector name);
    static LOOP_Checkbox_TextColor_Property* New1(::g::Checkbox* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
