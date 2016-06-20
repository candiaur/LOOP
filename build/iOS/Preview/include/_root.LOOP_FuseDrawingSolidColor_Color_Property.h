// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LOOP_FuseDrawingSolidColor_Color_Property;}

namespace g{

// internal sealed class LOOP_FuseDrawingSolidColor_Color_Property :190
// {
::g::Uno::UX::Property1_type* LOOP_FuseDrawingSolidColor_Color_Property_typeof();
void LOOP_FuseDrawingSolidColor_Color_Property__ctor_2_fn(LOOP_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name);
void LOOP_FuseDrawingSolidColor_Color_Property__Get_fn(LOOP_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval);
void LOOP_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, LOOP_FuseDrawingSolidColor_Color_Property** __retval);
void LOOP_FuseDrawingSolidColor_Color_Property__get_Object_fn(LOOP_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LOOP_FuseDrawingSolidColor_Color_Property__Set_fn(LOOP_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void LOOP_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(LOOP_FuseDrawingSolidColor_Color_Property* __this, bool* __retval);

struct LOOP_FuseDrawingSolidColor_Color_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Drawing::SolidColor*> _obj;

    void ctor_2(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name);
    static LOOP_FuseDrawingSolidColor_Color_Property* New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
