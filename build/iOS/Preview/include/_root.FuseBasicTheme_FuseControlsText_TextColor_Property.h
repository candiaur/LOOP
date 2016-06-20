// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.29.22/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseControlsText_TextColor_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseControlsText_TextColor_Property :697
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsText_TextColor_Property_typeof();
void FuseBasicTheme_FuseControlsText_TextColor_Property__ctor_2_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseControlsText_TextColor_Property__Get_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* __retval);
void FuseBasicTheme_FuseControlsText_TextColor_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseControlsText_TextColor_Property** __retval);
void FuseBasicTheme_FuseControlsText_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseControlsText_TextColor_Property__Set_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void FuseBasicTheme_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, bool* __retval);

struct FuseBasicTheme_FuseControlsText_TextColor_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::Text*> _obj;

    void ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseControlsText_TextColor_Property* New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
