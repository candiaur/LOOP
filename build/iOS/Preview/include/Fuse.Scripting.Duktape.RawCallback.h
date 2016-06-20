// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct RawCallback;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// internal sealed extern class RawCallback :81
// {
uType* RawCallback_typeof();
void RawCallback__ctor__fn(RawCallback* __this, ::g::Fuse::Scripting::Duktape::Context* context, uDelegate* callback);
void RawCallback__Call_fn(RawCallback* __this, void** argsPtr);
void RawCallback__New1_fn(::g::Fuse::Scripting::Duktape::Context* context, uDelegate* callback, RawCallback** __retval);

struct RawCallback : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Scripting::Duktape::Context*> _context;

    void ctor_(::g::Fuse::Scripting::Duktape::Context* context, uDelegate* callback);
    void Call(void* argsPtr);
    static RawCallback* New1(::g::Fuse::Scripting::Duktape::Context* context, uDelegate* callback);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
