// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Array.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Array;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Marshaller;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal sealed extern class Array :7
// {
::g::Fuse::Scripting::Array_type* Array_typeof();
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array);
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval);
void Array__GetHashCode_fn(Array* __this, int* __retval);
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval);
void Array__set_Item_fn(Array* __this, int* index, uObject* value);
void Array__get_Length_fn(Array* __this, int* __retval);
void Array__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array, Array** __retval);

struct Array : ::g::Fuse::Scripting::Array
{
    uStrong< ::g::Fuse::Scripting::JavaScriptCore::Marshaller*> _marshaller;
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array);
    static Array* New1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
