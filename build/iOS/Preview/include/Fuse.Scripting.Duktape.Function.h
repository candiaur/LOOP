// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Function.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Function;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// internal sealed extern class Function :392
// {
::g::Fuse::Scripting::Function_type* Function_typeof();
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle);
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval);
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval);
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* a, bool* __retval);
void Function__GetHashCode_fn(Function* __this, int* __retval);
void Function__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, Function** __retval);

struct Function : ::g::Fuse::Scripting::Function
{
    uStrong< ::g::Fuse::Scripting::Duktape::Context*> _ctx;
    void* _handle;
    int _stashKey;

    void ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle);
    static Function* New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
