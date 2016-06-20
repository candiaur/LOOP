// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Marshal;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{namespace UX{struct Size2;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class Marshal :406
// {
uClassType* Marshal_typeof();
void Marshal__CanConvertClass_fn(uType* t, bool* __retval);
void Marshal__ToBool_fn(uObject* obj, bool* __retval);
void Marshal__ToBrush_fn(uObject* o, ::g::Fuse::Drawing::Brush** __retval);
void Marshal__ToDouble_fn(uObject* o, double* __retval);
void Marshal__ToFileSource_fn(uObject* obj, ::g::Uno::UX::FileSource** __retval);
void Marshal__ToFloat_fn(uObject* o, float* __retval);
void Marshal__ToFloat4_fn(::g::Fuse::Scripting::Array* values, ::g::Uno::Float4* __retval);
void Marshal__ToFloat41_fn(uObject* o, ::g::Uno::Float4* __retval);
void Marshal__ToInt_fn(uObject* o, int* __retval);
void Marshal__ToSelector_fn(uObject* o, ::g::Uno::UX::Selector* __retval);
void Marshal__ToSize_fn(uObject* o, ::g::Uno::UX::Size* __retval);
void Marshal__ToSize2_fn(uObject* o, ::g::Uno::UX::Size2* __retval);
void Marshal__ToType_fn(uType* __type, uObject* o, uTRef __retval);
void Marshal__TryConvertTo_fn(uType* t, uObject* o, uObject** __retval);
void Marshal__TryConvertTo1_fn(uType* __type, uObject* obj, uTRef value, bool* __retval);

struct Marshal : uObject
{
    static uSStrong<uArray*> _convertibleClasses_;
    static uSStrong<uArray*>& _convertibleClasses() { return Marshal_typeof()->Init(), _convertibleClasses_; }

    static bool CanConvertClass(uType* t);
    static bool ToBool(uObject* obj);
    static ::g::Fuse::Drawing::Brush* ToBrush(uObject* o);
    static double ToDouble(uObject* o);
    static ::g::Uno::UX::FileSource* ToFileSource(uObject* obj);
    static float ToFloat(uObject* o);
    static ::g::Uno::Float4 ToFloat4(::g::Fuse::Scripting::Array* values);
    static ::g::Uno::Float4 ToFloat41(uObject* o);
    static int ToInt(uObject* o);
    static ::g::Uno::UX::Selector ToSelector(uObject* o);
    static ::g::Uno::UX::Size ToSize(uObject* o);
    static ::g::Uno::UX::Size2 ToSize2(uObject* o);
    template<class T>
    static T ToType(uType* __type, uObject* o) { T __retval; return Marshal__ToType_fn(__type, o, &__retval), __retval; }
    static uObject* TryConvertTo(uType* t, uObject* o);
    template<class T>
    static bool TryConvertTo1(uType* __type, uObject* obj, T* value) { bool __retval; return Marshal__TryConvertTo1_fn(__type, obj, uConstrain(__type->U(0), value), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
