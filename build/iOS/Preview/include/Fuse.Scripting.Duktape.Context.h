// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <duktape.h>
#include <Fuse.Scripting.Context.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Function;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Object;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptException;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// public sealed extern class Context :112
// {
::g::Fuse::Scripting::Context_type* Context_typeof();
void Context__ctor_1_fn(Context* __this, uObject* dispatcher);
void Context__CheckError_fn(Context* __this, int* errorCode);
void Context__Dispose_fn(Context* __this);
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval);
void Context__GetArrayBufferData_fn(Context* __this, ::g::Fuse::Scripting::Duktape::Object* o, uArray** __retval);
void Context__GetError_fn(Context* __this, int* index, ::g::Fuse::Scripting::ScriptException** __retval);
void Context__GetExternalObject_fn(Context* __this, ::g::Fuse::Scripting::Duktape::Object* wrapper, uObject** __retval);
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__IndexToObject_fn(Context* __this, int* index, uObject** __retval);
void Context__New1_fn(uObject* dispatcher, Context** __retval);
void Context__Push_fn(Context* __this, uObject* value);
void Context__PushArrayBuffer_fn(Context* __this, uArray* data);
void Context__PushExternal_fn(Context* __this, uObject* o);
void Context__Stash_fn(Context* __this, void** heapPtr, int* __retval);

struct Context : ::g::Fuse::Scripting::Context
{
    uStrong< ::g::Fuse::Scripting::Duktape::Function*> _arrayBufferType;
    uStrong< ::g::Fuse::Scripting::Duktape::Function*> _callbackFactory;
    uStrong< ::g::Fuse::Scripting::Duktape::Function*> _externalType;
    uStrong< ::g::Fuse::Scripting::Duktape::Object*> _globalObject;
    int _stashKey;
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _unstash;
    ::duk_context* DukContext;

    void ctor_1(uObject* dispatcher);
    void CheckError(int errorCode);
    uArray* GetArrayBufferData(::g::Fuse::Scripting::Duktape::Object* o);
    ::g::Fuse::Scripting::ScriptException* GetError(int index);
    uObject* GetExternalObject(::g::Fuse::Scripting::Duktape::Object* wrapper);
    uObject* IndexToObject(int index);
    void Push(uObject* value);
    void PushArrayBuffer(uArray* data);
    void PushExternal(uObject* o);
    int Stash(void* heapPtr);
    static Context* New1(uObject* dispatcher);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
