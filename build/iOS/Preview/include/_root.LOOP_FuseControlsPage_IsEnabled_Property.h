// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LOOP_FuseControlsPage_IsEnabled_Property;}

namespace g{

// internal sealed class LOOP_FuseControlsPage_IsEnabled_Property :199
// {
::g::Uno::UX::Property1_type* LOOP_FuseControlsPage_IsEnabled_Property_typeof();
void LOOP_FuseControlsPage_IsEnabled_Property__ctor_2_fn(LOOP_FuseControlsPage_IsEnabled_Property* __this, ::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector* name);
void LOOP_FuseControlsPage_IsEnabled_Property__Get_fn(LOOP_FuseControlsPage_IsEnabled_Property* __this, bool* __retval);
void LOOP_FuseControlsPage_IsEnabled_Property__New1_fn(::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsPage_IsEnabled_Property** __retval);
void LOOP_FuseControlsPage_IsEnabled_Property__get_Object_fn(LOOP_FuseControlsPage_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LOOP_FuseControlsPage_IsEnabled_Property__Set_fn(LOOP_FuseControlsPage_IsEnabled_Property* __this, bool* v, uObject* origin);
void LOOP_FuseControlsPage_IsEnabled_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsPage_IsEnabled_Property* __this, bool* __retval);

struct LOOP_FuseControlsPage_IsEnabled_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::Page*> _obj;

    void ctor_2(::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector name);
    static LOOP_FuseControlsPage_IsEnabled_Property* New1(::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
