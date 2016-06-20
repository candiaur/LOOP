// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.29.22/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Basic{struct BackButton;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_BasicBackButton_Text_Property;}

namespace g{

// internal sealed class FuseBasicTheme_BasicBackButton_Text_Property :733
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_BasicBackButton_Text_Property_typeof();
void FuseBasicTheme_BasicBackButton_Text_Property__ctor_2_fn(FuseBasicTheme_BasicBackButton_Text_Property* __this, ::g::Basic::BackButton* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_BasicBackButton_Text_Property__Get_fn(FuseBasicTheme_BasicBackButton_Text_Property* __this, uString** __retval);
void FuseBasicTheme_BasicBackButton_Text_Property__New1_fn(::g::Basic::BackButton* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_BasicBackButton_Text_Property** __retval);
void FuseBasicTheme_BasicBackButton_Text_Property__get_Object_fn(FuseBasicTheme_BasicBackButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_BasicBackButton_Text_Property__Set_fn(FuseBasicTheme_BasicBackButton_Text_Property* __this, uString* v, uObject* origin);
void FuseBasicTheme_BasicBackButton_Text_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_BasicBackButton_Text_Property* __this, bool* __retval);

struct FuseBasicTheme_BasicBackButton_Text_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Basic::BackButton*> _obj;

    void ctor_2(::g::Basic::BackButton* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_BasicBackButton_Text_Property* New1(::g::Basic::BackButton* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
