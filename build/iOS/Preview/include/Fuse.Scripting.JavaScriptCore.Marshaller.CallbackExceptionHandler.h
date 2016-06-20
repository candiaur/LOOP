// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Marshaller__CallbackExceptionHandler;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// private sealed extern class Marshaller.CallbackExceptionHandler :151
// {
uType* Marshaller__CallbackExceptionHandler_typeof();
void Marshaller__CallbackExceptionHandler__ctor__fn(Marshaller__CallbackExceptionHandler* __this, uDelegate* callback);
void Marshaller__CallbackExceptionHandler__Call_fn(Marshaller__CallbackExceptionHandler* __this, uObject* context, uArray* args, uObject** __retval);
void Marshaller__CallbackExceptionHandler__New1_fn(uDelegate* callback, Marshaller__CallbackExceptionHandler** __retval);

struct Marshaller__CallbackExceptionHandler : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uDelegate* callback);
    uObject* Call(uObject* context, uArray* args);
    static Marshaller__CallbackExceptionHandler* New1(uDelegate* callback);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
