// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.29.22/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseTranslation_X_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseTranslation_X_Property :778
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseTranslation_X_Property_typeof();
void FuseBasicTheme_FuseTranslation_X_Property__ctor_2_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseTranslation_X_Property__Get_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, float* __retval);
void FuseBasicTheme_FuseTranslation_X_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseTranslation_X_Property** __retval);
void FuseBasicTheme_FuseTranslation_X_Property__get_Object_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseTranslation_X_Property__Set_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, float* v, uObject* origin);
void FuseBasicTheme_FuseTranslation_X_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, bool* __retval);

struct FuseBasicTheme_FuseTranslation_X_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Translation*> _obj;

    void ctor_2(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseTranslation_X_Property* New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
