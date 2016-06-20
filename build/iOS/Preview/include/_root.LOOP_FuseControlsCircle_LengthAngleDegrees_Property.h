// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LOOP_FuseControlsCircle_LengthAngleDegrees_Property;}

namespace g{

// internal sealed class LOOP_FuseControlsCircle_LengthAngleDegrees_Property :154
// {
::g::Uno::UX::Property1_type* LOOP_FuseControlsCircle_LengthAngleDegrees_Property_typeof();
void LOOP_FuseControlsCircle_LengthAngleDegrees_Property__ctor_2_fn(LOOP_FuseControlsCircle_LengthAngleDegrees_Property* __this, ::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name);
void LOOP_FuseControlsCircle_LengthAngleDegrees_Property__Get_fn(LOOP_FuseControlsCircle_LengthAngleDegrees_Property* __this, float* __retval);
void LOOP_FuseControlsCircle_LengthAngleDegrees_Property__New1_fn(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsCircle_LengthAngleDegrees_Property** __retval);
void LOOP_FuseControlsCircle_LengthAngleDegrees_Property__get_Object_fn(LOOP_FuseControlsCircle_LengthAngleDegrees_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LOOP_FuseControlsCircle_LengthAngleDegrees_Property__Set_fn(LOOP_FuseControlsCircle_LengthAngleDegrees_Property* __this, float* v, uObject* origin);
void LOOP_FuseControlsCircle_LengthAngleDegrees_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsCircle_LengthAngleDegrees_Property* __this, bool* __retval);

struct LOOP_FuseControlsCircle_LengthAngleDegrees_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::Circle*> _obj;

    void ctor_2(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name);
    static LOOP_FuseControlsCircle_LengthAngleDegrees_Property* New1(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
