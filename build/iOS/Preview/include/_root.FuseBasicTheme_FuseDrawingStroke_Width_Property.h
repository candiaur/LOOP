// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.29.22/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseDrawingStroke_Width_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseDrawingStroke_Width_Property :796
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseDrawingStroke_Width_Property_typeof();
void FuseBasicTheme_FuseDrawingStroke_Width_Property__ctor_2_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Get_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, float* __retval);
void FuseBasicTheme_FuseDrawingStroke_Width_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseDrawingStroke_Width_Property** __retval);
void FuseBasicTheme_FuseDrawingStroke_Width_Property__get_Object_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Set_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, float* v, uObject* origin);
void FuseBasicTheme_FuseDrawingStroke_Width_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, bool* __retval);

struct FuseBasicTheme_FuseDrawingStroke_Width_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Drawing::Stroke*> _obj;

    void ctor_2(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseDrawingStroke_Width_Property* New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
