// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct JSContext;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal static extern class JSContext :292
// {
uClassType* JSContext_typeof();
void JSContext__Create_fn(uObject** __retval);
void JSContext__EvaluateWithFilePath_fn(uObject* context, uString* code, uString* filePath, uObject** __retval);
void JSContext__GetGlobalObject_fn(uObject* context, uObject** __retval);
void JSContext__SetException_fn(uObject* context, uString* message);
void JSContext__SetExceptionHandler_fn(uObject* context, uDelegate* handler);

struct JSContext : uObject
{
    static uObject* Create();
    static uObject* EvaluateWithFilePath(uObject* context, uString* code, uString* filePath);
    static uObject* GetGlobalObject(uObject* context);
    static void SetException(uObject* context, uString* message);
    static void SetExceptionHandler(uObject* context, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
