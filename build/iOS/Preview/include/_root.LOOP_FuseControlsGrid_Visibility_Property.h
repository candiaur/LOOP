// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Visibility.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LOOP_FuseControlsGrid_Visibility_Property;}

namespace g{

// internal sealed class LOOP_FuseControlsGrid_Visibility_Property :145
// {
::g::Uno::UX::Property1_type* LOOP_FuseControlsGrid_Visibility_Property_typeof();
void LOOP_FuseControlsGrid_Visibility_Property__ctor_2_fn(LOOP_FuseControlsGrid_Visibility_Property* __this, ::g::Fuse::Controls::Grid* obj, ::g::Uno::UX::Selector* name);
void LOOP_FuseControlsGrid_Visibility_Property__Get_fn(LOOP_FuseControlsGrid_Visibility_Property* __this, int* __retval);
void LOOP_FuseControlsGrid_Visibility_Property__New1_fn(::g::Fuse::Controls::Grid* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsGrid_Visibility_Property** __retval);
void LOOP_FuseControlsGrid_Visibility_Property__get_Object_fn(LOOP_FuseControlsGrid_Visibility_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LOOP_FuseControlsGrid_Visibility_Property__Set_fn(LOOP_FuseControlsGrid_Visibility_Property* __this, int* v, uObject* origin);
void LOOP_FuseControlsGrid_Visibility_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsGrid_Visibility_Property* __this, bool* __retval);

struct LOOP_FuseControlsGrid_Visibility_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::Grid*> _obj;

    void ctor_2(::g::Fuse::Controls::Grid* obj, ::g::Uno::UX::Selector name);
    static LOOP_FuseControlsGrid_Visibility_Property* New1(::g::Fuse::Controls::Grid* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
