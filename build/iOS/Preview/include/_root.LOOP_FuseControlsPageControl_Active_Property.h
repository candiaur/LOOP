// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Visual.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LOOP_FuseControlsPageControl_Active_Property;}

namespace g{

// internal sealed class LOOP_FuseControlsPageControl_Active_Property :163
// {
::g::Uno::UX::Property1_type* LOOP_FuseControlsPageControl_Active_Property_typeof();
void LOOP_FuseControlsPageControl_Active_Property__ctor_2_fn(LOOP_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name);
void LOOP_FuseControlsPageControl_Active_Property__Get_fn(LOOP_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual** __retval);
void LOOP_FuseControlsPageControl_Active_Property__New1_fn(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsPageControl_Active_Property** __retval);
void LOOP_FuseControlsPageControl_Active_Property__get_Object_fn(LOOP_FuseControlsPageControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LOOP_FuseControlsPageControl_Active_Property__Set_fn(LOOP_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual* v, uObject* origin);
void LOOP_FuseControlsPageControl_Active_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsPageControl_Active_Property* __this, bool* __retval);

struct LOOP_FuseControlsPageControl_Active_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::PageControl*> _obj;

    void ctor_2(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name);
    static LOOP_FuseControlsPageControl_Active_Property* New1(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
