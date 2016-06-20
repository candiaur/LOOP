// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.JavaScriptCore.JSContext.h>
#include <JavaScriptCore/JavaScriptCore.h>
#include <ObjC.Object.h>
#include <Uno.Action-2.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal static extern class JSContext :292
// {
static void JSContext_build(uType* type)
{
}

uClassType* JSContext_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.JSContext", options);
    type->fp_build_ = JSContext_build;
    return type;
}

// public static ObjC.Object Create() :303
void JSContext__Create_fn(uObject** __retval)
{
    *__retval = JSContext::Create();
}

// public static ObjC.Object EvaluateWithFilePath(ObjC.Object context, string code, string filePath) :315
void JSContext__EvaluateWithFilePath_fn(uObject* context, uString* code, uString* filePath, uObject** __retval)
{
    *__retval = JSContext::EvaluateWithFilePath(context, code, filePath);
}

// public static ObjC.Object GetGlobalObject(ObjC.Object context) :309
void JSContext__GetGlobalObject_fn(uObject* context, uObject** __retval)
{
    *__retval = JSContext::GetGlobalObject(context);
}

// public static void SetException(ObjC.Object context, string message) :329
void JSContext__SetException_fn(uObject* context, uString* message)
{
    JSContext::SetException(context, message);
}

// public static void SetExceptionHandler(ObjC.Object context, Uno.Action<ObjC.Object, ObjC.Object> handler) :295
void JSContext__SetExceptionHandler_fn(uObject* context, uDelegate* handler)
{
    JSContext::SetExceptionHandler(context, handler);
}

// public static ObjC.Object Create() [static] :303
uObject* JSContext::Create()
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSContext", "Create()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[[::JSContext alloc] init] autorelease];
        } ());
        
    }
    
}

// public static ObjC.Object EvaluateWithFilePath(ObjC.Object context, string code, string filePath) [static] :315
uObject* JSContext::EvaluateWithFilePath(uObject* context, uString* code, uString* filePath)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSContext", "EvaluateWithFilePath(ObjC.Object,string,string)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id context, ::NSString* code, ::NSString* filePath) -> ::id
        {
            ::JSContext* jsContext = (::JSContext*)context;
            if ([jsContext respondsToSelector:@selector(evaluateScript:withSourceURL:)])
            {
            	return [jsContext evaluateScript: code withSourceURL: [NSURL URLWithString: filePath]];
            }
            else
            {
            	return [jsContext evaluateScript: code];
            }
        } (::g::ObjC::Helpers::GetHandle(context), ::uObjC::NativeString(code), ::uObjC::NativeString(filePath)));
        
    }
    
}

// public static ObjC.Object GetGlobalObject(ObjC.Object context) [static] :309
uObject* JSContext::GetGlobalObject(uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSContext", "GetGlobalObject(ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id context) -> ::id
        {
            return [(::JSContext*)context globalObject];
        } (::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// public static void SetException(ObjC.Object context, string message) [static] :329
void JSContext::SetException(uObject* context, uString* message)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSContext", "SetException(ObjC.Object,string)");
    @autoreleasepool
    {
        [] (::id context, ::NSString* message) -> void
        {
            ::JSContext* jsContext = (::JSContext*)context;
            [jsContext setException: [::JSValue valueWithNewErrorFromMessage: message inContext: jsContext]];
        } (::g::ObjC::Helpers::GetHandle(context), ::uObjC::NativeString(message));
        
    }
    
}

// public static void SetExceptionHandler(ObjC.Object context, Uno.Action<ObjC.Object, ObjC.Object> handler) [static] :295
void JSContext::SetExceptionHandler(uObject* context, uDelegate* handler)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSContext", "SetExceptionHandler(ObjC.Object,Uno.Action<ObjC.Object, ObjC.Object>)");
    @autoreleasepool
    {
        [] (::id context, ::uObjC::Function<void, ::id, ::id> handler) -> void
        {
            [(::JSContext*)context setExceptionHandler: ^ (::JSContext* context, ::JSValue* value) {
            	handler(context, value);
            }];
        } (::g::ObjC::Helpers::GetHandle(context), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id, ::id>
        {
            return [[^ void (::id arg1, ::id arg2)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(2, ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg1), ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg2));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: handler]));
        
    }
    
}
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
