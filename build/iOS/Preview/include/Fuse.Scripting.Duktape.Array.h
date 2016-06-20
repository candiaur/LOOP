// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Array.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Array;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Context;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// internal sealed extern class Array :9
// {
::g::Fuse::Scripting::Array_type* Array_typeof();
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle);
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval);
void Array__GetHashCode_fn(Array* __this, int* __retval);
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval);
void Array__set_Item_fn(Array* __this, int* index, uObject* value);
void Array__get_Length_fn(Array* __this, int* __retval);
void Array__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, Array** __retval);

struct Array : ::g::Fuse::Scripting::Array
{
    uStrong< ::g::Fuse::Scripting::Duktape::Context*> _ctx;
    void* _handle;
    int _stashKey;

    void ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle);
    static Array* New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
