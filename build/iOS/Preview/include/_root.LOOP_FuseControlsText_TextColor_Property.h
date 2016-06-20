// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LOOP_FuseControlsText_TextColor_Property;}

namespace g{

// internal sealed class LOOP_FuseControlsText_TextColor_Property :1
// {
::g::Uno::UX::Property1_type* LOOP_FuseControlsText_TextColor_Property_typeof();
void LOOP_FuseControlsText_TextColor_Property__ctor_2_fn(LOOP_FuseControlsText_TextColor_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name);
void LOOP_FuseControlsText_TextColor_Property__Get_fn(LOOP_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* __retval);
void LOOP_FuseControlsText_TextColor_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsText_TextColor_Property** __retval);
void LOOP_FuseControlsText_TextColor_Property__get_Object_fn(LOOP_FuseControlsText_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LOOP_FuseControlsText_TextColor_Property__Set_fn(LOOP_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void LOOP_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsText_TextColor_Property* __this, bool* __retval);

struct LOOP_FuseControlsText_TextColor_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::Text*> _obj;

    void ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
    static LOOP_FuseControlsText_TextColor_Property* New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
