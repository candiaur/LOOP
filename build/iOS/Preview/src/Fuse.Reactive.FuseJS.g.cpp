// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseReactive_bundle.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.FuseJS.FunctionClosure.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerManager.h>
#include <Fuse.Reactive.FuseJS.TimerManager.Timer.h>
#include <Fuse.Reactive.FuseJS.TimerModule.CallbackClosure.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Value.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[32];
static uType* TYPES[31];

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// public sealed class Builtins :9
// {
static void Builtins_build(uType* type)
{
    ::STRINGS[0] = uString::Const("es6-promise");
    ::STRINGS[1] = uString::Const("FuseJS/SubscriberProxy");
    ::STRINGS[2] = uString::Const("FuseJS/Observable");
    ::STRINGS[3] = uString::Const("FuseJS/Timer");
    ::STRINGS[4] = uString::Const("Polyfills/Window");
    ::TYPES[0] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[1] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[2] = ::g::Fuse::Reactive::FuseJS::TimerModule_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::Module_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::NativeModule_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Builtins, Observable), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Builtins, SubscriberProxy), 0,
        ::g::Fuse::Reactive::FuseJS::TimerModule_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Builtins::_timer_, uFieldFlagsStatic);
}

uType* Builtins_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Builtins);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Builtins", options);
    type->fp_build_ = Builtins_build;
    return type;
}

// internal Builtins(Fuse.Scripting.Context context) :16
void Builtins__ctor__fn(Builtins* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private static bool IsModule(object module) :37
void Builtins__IsModule_fn(uObject* module, bool* __retval)
{
    *__retval = Builtins::IsModule(module);
}

// internal Builtins New(Fuse.Scripting.Context context) :16
void Builtins__New1_fn(::g::Fuse::Scripting::Context* context, Builtins** __retval)
{
    *__retval = Builtins::New1(context);
}

// internal void UpdateModules(Fuse.Scripting.Context context) :42
void Builtins__UpdateModules_fn(Builtins* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->UpdateModules(context);
}

uSStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*> Builtins::_timer_;

// internal Builtins(Fuse.Scripting.Context context) [instance] :16
void Builtins::ctor_(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Builtins", ".ctor(Fuse.Scripting.Context)");
    ::g::Fuse::Reactive::DebugLog::Init(context);
    ::g::Fuse::Reactive::Console::Init(context);
    uPtr(context)->Evaluate(::STRINGS[0/*"es6-promise"*/], uPtr(::g::FuseReactive_bundle::es6promise8ca9f621())->ReadAllText());
    SubscriberProxy = uCast< ::g::Fuse::Scripting::Function*>(::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::SubscriberProxy2fa1c3a8()))->EvaluateExports(context, ::STRINGS[1/*"FuseJS/Subs...*/]), ::TYPES[0/*Fuse.Scripting.Function*/]);
    Observable = uCast< ::g::Fuse::Scripting::Function*>(::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::Observable5d5a1275()))->EvaluateExports(context, ::STRINGS[2/*"FuseJS/Obse...*/]), ::TYPES[0/*Fuse.Scripting.Function*/]);
    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(::STRINGS[3/*"FuseJS/Timer"*/], uDelegate::New(::TYPES[1/*Uno.Predicate<object>*/], (void*)Builtins__IsModule_fn), &res))
        Builtins::_timer_ = uCast< ::g::Fuse::Reactive::FuseJS::TimerModule*>(res, ::TYPES[2/*Fuse.Reactive.FuseJS.TimerModule*/]);

    res = NULL;

    if (::g::Uno::UX::Resource::TryFindGlobal(::STRINGS[4/*"Polyfills/W...*/], uDelegate::New(::TYPES[1/*Uno.Predicate<object>*/], (void*)Builtins__IsModule_fn), &res))
        uPtr(uCast< ::g::Fuse::Scripting::Module*>(res, ::TYPES[3/*Fuse.Scripting.Module*/]))->Evaluate1(context, ::STRINGS[4/*"Polyfills/W...*/]);
}

// internal void UpdateModules(Fuse.Scripting.Context context) [instance] :42
void Builtins::UpdateModules(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Builtins", "UpdateModules(Fuse.Scripting.Context)");

    if (Builtins::_timer_ != NULL)
        uPtr(Builtins::_timer_)->UpdateModule();
}

// private static bool IsModule(object module) [static] :37
bool Builtins::IsModule(uObject* module)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Builtins", "IsModule(object)");
    return uIs(module, ::TYPES[4/*Fuse.Scripting.NativeModule*/]);
}

// internal Builtins New(Fuse.Scripting.Context context) [static] :16
Builtins* Builtins::New1(::g::Fuse::Scripting::Context* context)
{
    Builtins* obj1 = (Builtins*)uNew(Builtins_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// private sealed class TimerModule.CallbackClosure :261
// {
static void TimerModule__CallbackClosure_build(uType* type)
{
    ::STRINGS[5] = uString::Const("func");
    ::STRINGS[6] = uString::Const("args");
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _args), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _context), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _func), 0);
}

uType* TimerModule__CallbackClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TimerModule__CallbackClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", options);
    type->fp_build_ = TimerModule__CallbackClosure_build;
    return type;
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :267
void TimerModule__CallbackClosure__ctor__fn(TimerModule__CallbackClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    __this->ctor_(context, func, args);
}

// public void Callback() :277
void TimerModule__CallbackClosure__Callback_fn(TimerModule__CallbackClosure* __this)
{
    __this->Callback();
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :267
void TimerModule__CallbackClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args, TimerModule__CallbackClosure** __retval)
{
    *__retval = TimerModule__CallbackClosure::New1(context, func, args);
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [instance] :267
void TimerModule__CallbackClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", ".ctor(Fuse.Scripting.Context,Fuse.Scripting.Function,object[])");

    if (func == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"func"*/]));

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[6/*"args"*/]));

    _context = context;
    _func = func;
    _args = args;
}

// public void Callback() [instance] :277
void TimerModule__CallbackClosure::Callback()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", "Callback()");
    uPtr(_func)->Call(_args);
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [static] :267
TimerModule__CallbackClosure* TimerModule__CallbackClosure::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    TimerModule__CallbackClosure* obj1 = (TimerModule__CallbackClosure*)uNew(TimerModule__CallbackClosure_typeof());
    obj1->ctor_(context, func, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// internal sealed class FunctionClosure :582
// {
static void FunctionClosure_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::FunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::FunctionClosure, _context), 0);
}

uType* FunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.FunctionClosure", options);
    type->fp_build_ = FunctionClosure_build;
    return type;
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :587
void FunctionClosure__ctor__fn(FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.Callback get_Callback() :600
void FunctionClosure__get_Callback_fn(FunctionClosure* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// private object function(object[] args) :593
void FunctionClosure__function_fn(FunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->function(args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :587
void FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, FunctionClosure** __retval)
{
    *__retval = FunctionClosure::New1(context, callback);
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [instance] :587
void FunctionClosure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    uStackFrame __("Fuse.Reactive.FuseJS.FunctionClosure", ".ctor(Fuse.Scripting.Context,Uno.Func<Fuse.Scripting.Context, object[], object>)");
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.Callback get_Callback() [instance] :600
uDelegate* FunctionClosure::Callback()
{
    uStackFrame __("Fuse.Reactive.FuseJS.FunctionClosure", "get_Callback()");
    return uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)FunctionClosure__function_fn, this);
}

// private object function(object[] args) [instance] :593
uObject* FunctionClosure::function(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.FunctionClosure", "function(object[])");
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [static] :587
FunctionClosure* FunctionClosure::New1(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    FunctionClosure* obj1 = (FunctionClosure*)uNew(FunctionClosure_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// private sealed class Http.FuseJSHttpClient :440
// {
static void Http__FuseJSHttpClient_build(uType* type)
{
    ::STRINGS[7] = uString::Const("createRequest");
    ::TYPES[6] = uObject_typeof();
    ::TYPES[5] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[7] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _client), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _Obj), 0);
}

uType* Http__FuseJSHttpClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Http__FuseJSHttpClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", options);
    type->fp_build_ = Http__FuseJSHttpClient_build;
    return type;
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) :447
void Http__FuseJSHttpClient__ctor__fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateRequest(object[] args) :456
void Http__FuseJSHttpClient__CreateRequest_fn(Http__FuseJSHttpClient* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateRequest(args);
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) :447
void Http__FuseJSHttpClient__New1_fn(::g::Fuse::Scripting::Context* context, Http__FuseJSHttpClient** __retval)
{
    *__retval = Http__FuseJSHttpClient::New1(context);
}

// public generated Fuse.Scripting.Object get_Obj() :442
void Http__FuseJSHttpClient__get_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :442
void Http__FuseJSHttpClient__set_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) [instance] :447
void Http__FuseJSHttpClient::ctor_(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", ".ctor(Fuse.Scripting.Context)");
    _context = context;
    _client = ::g::Uno::Net::Http::HttpMessageHandler::New1();
    Obj(uPtr(context)->NewObject());
    uPtr(Obj())->Item(::STRINGS[7/*"createRequest"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpClient__CreateRequest_fn, this));
}

// private object CreateRequest(object[] args) [instance] :456
uObject* Http__FuseJSHttpClient::CreateRequest(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", "CreateRequest(object[])");
    uString* method = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[7/*string*/]);
    uString* url = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[7/*string*/]);
    return ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest::New1(_context, uPtr(_client)->CreateRequest1(method, url, uPtr(_context)->Dispatcher))->Obj();
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :442
::g::Fuse::Scripting::Object* Http__FuseJSHttpClient::Obj()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", "get_Obj()");
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :442
void Http__FuseJSHttpClient::Obj(::g::Fuse::Scripting::Object* value)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", "set_Obj(Fuse.Scripting.Object)");
    _Obj = value;
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) [static] :447
Http__FuseJSHttpClient* Http__FuseJSHttpClient::New1(::g::Fuse::Scripting::Context* context)
{
    Http__FuseJSHttpClient* obj1 = (Http__FuseJSHttpClient*)uNew(Http__FuseJSHttpClient_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// private sealed class Http.FuseJSHttpRequest :465
// {
static void Http__FuseJSHttpRequest_build(uType* type)
{
    ::STRINGS[8] = uString::Const("enableCache");
    ::STRINGS[9] = uString::Const("setTimeout");
    ::STRINGS[10] = uString::Const("sendAsync");
    ::STRINGS[11] = uString::Const("abort");
    ::STRINGS[12] = uString::Const("setHeader");
    ::STRINGS[13] = uString::Const("getResponseHeader");
    ::STRINGS[14] = uString::Const("getResponseHeaders");
    ::STRINGS[15] = uString::Const("getState");
    ::STRINGS[16] = uString::Const("getResponseStatus");
    ::STRINGS[17] = uString::Const("getResponseReasonPhrase");
    ::STRINGS[18] = uString::Const("getResponseContentString");
    ::STRINGS[19] = uString::Const("onabort");
    ::STRINGS[20] = uString::Const("ondone");
    ::STRINGS[21] = uString::Const("onerror");
    ::STRINGS[22] = uString::Const("onprogress");
    ::STRINGS[23] = uString::Const("onstatechanged");
    ::STRINGS[24] = uString::Const("ontimeout");
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    ::TYPES[9] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof());
    ::TYPES[10] = ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[6] = uObject_typeof();
    ::TYPES[5] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[15] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[16] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[17] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[18] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[19] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[20] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[21] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[23] = uObject_typeof()->Array();
    ::TYPES[7] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _req), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _Obj), 0);
}

uType* Http__FuseJSHttpRequest_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Http__FuseJSHttpRequest);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", options);
    type->fp_build_ = Http__FuseJSHttpRequest_build;
    return type;
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :471
void Http__FuseJSHttpRequest__ctor__fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    __this->ctor_(context, req);
}

// private object EnableCache(object[] args) :558
void Http__FuseJSHttpRequest__EnableCache_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->EnableCache(args);
}

// private object GetResponseReasonPhrase(object[] args) :575
void Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseReasonPhrase(args);
}

// private object GetState(object[] args) :570
void Http__FuseJSHttpRequest__GetState_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetState(args);
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :471
void Http__FuseJSHttpRequest__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req, Http__FuseJSHttpRequest** __retval)
{
    *__retval = Http__FuseJSHttpRequest::New1(context, req);
}

// public generated Fuse.Scripting.Object get_Obj() :467
void Http__FuseJSHttpRequest__get_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :467
void Http__FuseJSHttpRequest__set_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// private void OnAbort(Uno.Net.Http.HttpMessageHandlerRequest res) :499
void Http__FuseJSHttpRequest__OnAbort_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnAbort(res);
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) :527
void Http__FuseJSHttpRequest__OnDone_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnDone(res);
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) :506
void Http__FuseJSHttpRequest__OnError_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    __this->OnError(res, error);
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) :534
void Http__FuseJSHttpRequest__OnProgress_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int* current, int* total, bool* hastotal)
{
    __this->OnProgress(res, *current, *total, *hastotal);
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) :520
void Http__FuseJSHttpRequest__OnStateChanged_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnStateChanged(res);
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) :513
void Http__FuseJSHttpRequest__OnTimeout_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnTimeout(res);
}

// private object SendAsync(object[] args) :541
void Http__FuseJSHttpRequest__SendAsync_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SendAsync(args);
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [instance] :471
void Http__FuseJSHttpRequest::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", ".ctor(Fuse.Scripting.Context,Uno.Net.Http.HttpMessageHandlerRequest)");
    _req = req;
    Obj(uPtr(context)->NewObject());
    uPtr(_req)->add_Aborted(uDelegate::New(::TYPES[8/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnAbort_fn, this));
    uPtr(_req)->add_Error(uDelegate::New(::TYPES[9/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Http__FuseJSHttpRequest__OnError_fn, this));
    uPtr(_req)->add_Timeout(uDelegate::New(::TYPES[8/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnTimeout_fn, this));
    uPtr(_req)->add_Done(uDelegate::New(::TYPES[8/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnDone_fn, this));
    uPtr(_req)->add_StateChanged(uDelegate::New(::TYPES[8/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnStateChanged_fn, this));
    uPtr(_req)->add_Progress(uDelegate::New(::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/], (void*)Http__FuseJSHttpRequest__OnProgress_fn, this));
    uPtr(Obj())->Item(::STRINGS[8/*"enableCache"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__EnableCache_fn, this));
    uPtr(Obj())->Item(::STRINGS[9/*"setTimeout"*/], ::g::Fuse::Scripting::JSCallback::FromAction1(::TYPES[11/*Fuse.Scripting.JSCallback.FromAction<int>*/], uDelegate::New(::TYPES[12/*Uno.Action<int>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__SetTimeout_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[10/*"sendAsync"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__SendAsync_fn, this));
    uPtr(Obj())->Item(::STRINGS[11/*"abort"*/], ::g::Fuse::Scripting::JSCallback::FromAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__Abort_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[12/*"setHeader"*/], ::g::Fuse::Scripting::JSCallback::FromAction2(::TYPES[14/*Fuse.Scripting.JSCallback.FromAction<string, string>*/], uDelegate::New(::TYPES[15/*Uno.Action<string, string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__SetHeader_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[13/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc1(::TYPES[16/*Fuse.Scripting.JSCallback.FromFunc<string, string>*/], uDelegate::New(::TYPES[17/*Uno.Func<string, string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseHeader_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[14/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[18/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[19/*Uno.Func<string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseHeaders_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[15/*"getState"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetState_fn, this));
    uPtr(Obj())->Item(::STRINGS[16/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[20/*Fuse.Scripting.JSCallback.FromFunc<int>*/], uDelegate::New(::TYPES[21/*Uno.Func<int>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseStatus_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[17/*"getResponse...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn, this));
    uPtr(Obj())->Item(::STRINGS[18/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[18/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[19/*Uno.Func<string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseContentString_fn, uPtr(_req))));
}

// private object EnableCache(object[] args) [instance] :558
uObject* Http__FuseJSHttpRequest::EnableCache(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "EnableCache(object[])");

    if (uPtr(args)->Length() > 0)
        ;

    return NULL;
}

// private object GetResponseReasonPhrase(object[] args) [instance] :575
uObject* Http__FuseJSHttpRequest::GetResponseReasonPhrase(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "GetResponseReasonPhrase(object[])");
    return ::g::Uno::Net::Http::HttpStatusReasonPhrase::GetFromStatusCode(uPtr(_req)->GetResponseStatus());
}

// private object GetState(object[] args) [instance] :570
uObject* Http__FuseJSHttpRequest::GetState(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "GetState(object[])");
    return uBox<int>(::TYPES[22/*int*/], uPtr(_req)->State());
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :467
::g::Fuse::Scripting::Object* Http__FuseJSHttpRequest::Obj()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "get_Obj()");
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :467
void Http__FuseJSHttpRequest::Obj(::g::Fuse::Scripting::Object* value)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "set_Obj(Fuse.Scripting.Object)");
    _Obj = value;
}

// private void OnAbort(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :499
void Http__FuseJSHttpRequest::OnAbort(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnAbort(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[19/*"onabort"*/]), ::TYPES[0/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[23/*object[]*/], 0));
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :527
void Http__FuseJSHttpRequest::OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnDone(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[20/*"ondone"*/]), ::TYPES[0/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[23/*object[]*/], 0));
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) [instance] :506
void Http__FuseJSHttpRequest::OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnError(Uno.Net.Http.HttpMessageHandlerRequest,string)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[21/*"onerror"*/]), ::TYPES[0/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[23/*object[]*/], 1, error));
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) [instance] :534
void Http__FuseJSHttpRequest::OnProgress(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int current, int total, bool hastotal)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnProgress(Uno.Net.Http.HttpMessageHandlerRequest,int,int,bool)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[22/*"onprogress"*/]), ::TYPES[0/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[23/*object[]*/], 3, uBox<int>(::TYPES[22/*int*/], current), uBox<int>(::TYPES[22/*int*/], total), uBox(::TYPES[30/*bool*/], hastotal)));
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :520
void Http__FuseJSHttpRequest::OnStateChanged(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[23/*"onstatechan...*/]), ::TYPES[0/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[23/*object[]*/], 1, uBox<int>(::TYPES[22/*int*/], uPtr(_req)->State())));
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :513
void Http__FuseJSHttpRequest::OnTimeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[24/*"ontimeout"*/]), ::TYPES[0/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[23/*object[]*/], 0));
}

// private object SendAsync(object[] args) [instance] :541
uObject* Http__FuseJSHttpRequest::SendAsync(uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", "SendAsync(object[])");
    uPtr(_req)->SetResponseType(0);

    if (uPtr(args)->Length() > 0)
    {
        uString* data = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[7/*string*/]);

        if (::g::Uno::String::op_Inequality(data, NULL))
        {
            uPtr(_req)->SendAsync2(data);
            return NULL;
        }
    }

    uPtr(_req)->SendAsync();
    return NULL;
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [static] :471
Http__FuseJSHttpRequest* Http__FuseJSHttpRequest::New1(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    Http__FuseJSHttpRequest* obj1 = (Http__FuseJSHttpRequest*)uNew(Http__FuseJSHttpRequest_typeof());
    obj1->ctor_(context, req);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// public sealed class Http :421
// {
static void Http_build(uType* type)
{
    ::STRINGS[25] = uString::Const("FuseJS/Http");
    ::STRINGS[26] = uString::Const("exports");
    ::TYPES[6] = uObject_typeof();
    ::TYPES[24] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        Http_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Http::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Http__New2_fn, 0, true, Http_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* Http_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Http);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Http", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_build_ = Http_build;
    type->fp_ctor_ = (void*)Http__New2_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))Http__Evaluate_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Http() :424
void Http__ctor_2_fn(Http* __this)
{
    __this->ctor_2();
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) :435
void Http__CreateClient_fn(Http* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateClient(context, args);
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :430
void Http__Evaluate_fn(Http* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http", "Evaluate(Fuse.Scripting.Context,Fuse.Scripting.ModuleResult)");
    uPtr(uPtr(result)->Object)->Item(::STRINGS[26/*"exports"*/], ::g::Fuse::Reactive::FuseJS::FunctionClosure::New1(c, uDelegate::New(::TYPES[24/*Uno.Func<Fuse.Scripting.Context, object[], object>*/], (void*)Http__CreateClient_fn, __this))->Callback());
}

// public Http New() :424
void Http__New2_fn(Http** __retval)
{
    *__retval = Http::New2();
}

uSStrong<Http*> Http::_instance_;

// public Http() [instance] :424
void Http::ctor_2()
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http", ".ctor()");
    ctor_1();

    if (Http::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Http::_instance_ = this, ::STRINGS[25/*"FuseJS/Http"*/]);
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) [instance] :435
uObject* Http::CreateClient(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.Http", "CreateClient(Fuse.Scripting.Context,object[])");
    return Http__FuseJSHttpClient::New1(context)->Obj();
}

// public Http New() [static] :424
Http* Http::New2()
{
    Http* obj1 = (Http*)uNew(Http_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// private sealed class TimerManager.Timer :342
// {
static void TimerManager__Timer_build(uType* type)
{
    ::TYPES[25] = ::g::Uno::Delegate_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _callback), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _isRunning), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _repeat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _startTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _timeout), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, ID), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, OnStop), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::TimerManager__Timer::_id_, uFieldFlagsStatic);
}

uType* TimerManager__Timer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TimerManager__Timer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager.Timer", options);
    type->fp_build_ = TimerManager__Timer_build;
    return type;
}

// public Timer(double ms, Uno.Action callback, bool repeat) :356
void TimerManager__Timer__ctor__fn(TimerManager__Timer* __this, double* ms, uDelegate* callback, bool* repeat)
{
    __this->ctor_(*ms, callback, *repeat);
}

// private double GetMilliseconds() :401
void TimerManager__Timer__GetMilliseconds_fn(TimerManager__Timer* __this, double* __retval)
{
    *__retval = __this->GetMilliseconds();
}

// public Timer New(double ms, Uno.Action callback, bool repeat) :356
void TimerManager__Timer__New1_fn(double* ms, uDelegate* callback, bool* repeat, TimerManager__Timer** __retval)
{
    *__retval = TimerManager__Timer::New1(*ms, callback, *repeat);
}

// private void Start() :365
void TimerManager__Timer__Start_fn(TimerManager__Timer* __this)
{
    __this->Start();
}

// public void Stop() :371
void TimerManager__Timer__Stop_fn(TimerManager__Timer* __this)
{
    __this->Stop();
}

// internal void Update() :378
void TimerManager__Timer__Update_fn(TimerManager__Timer* __this)
{
    __this->Update();
}

int TimerManager__Timer::_id_;

// public Timer(double ms, Uno.Action callback, bool repeat) [instance] :356
void TimerManager__Timer::ctor_(double ms, uDelegate* callback, bool repeat)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", ".ctor(double,Uno.Action,bool)");
    ID = (TimerManager__Timer::_id_++);
    _timeout = ms;
    _callback = callback;
    _repeat = repeat;
    Start();
}

// private double GetMilliseconds() [instance] :401
double TimerManager__Timer::GetMilliseconds()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "GetMilliseconds()");
    return (double)(::g::Uno::Diagnostics::Clock::GetTicks() / 10000LL);
}

// private void Start() [instance] :365
void TimerManager__Timer::Start()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "Start()");
    _startTime = GetMilliseconds();
    _isRunning = true;
}

// public void Stop() [instance] :371
void TimerManager__Timer::Stop()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "Stop()");
    _isRunning = false;

    if (::g::Uno::Delegate::op_Inequality(OnStop, NULL))
        uPtr(OnStop)->InvokeVoid(uCRef<int>(ID));
}

// internal void Update() [instance] :378
void TimerManager__Timer::Update()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager.Timer", "Update()");

    if (!_isRunning)
        return;

    double now = GetMilliseconds();
    double elapsed = now - _startTime;

    if (_timeout < elapsed)
    {
        {
            const auto __finally_fun = [&]()
            {
                if (_repeat)
                    _startTime = now;
                else
                    Stop();
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (::g::Uno::Delegate::op_Inequality(_callback, NULL))
                uPtr(_callback)->InvokeVoid();
        }
    }
}

// public Timer New(double ms, Uno.Action callback, bool repeat) [static] :356
TimerManager__Timer* TimerManager__Timer::New1(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* obj1 = (TimerManager__Timer*)uNew(TimerManager__Timer_typeof());
    obj1->ctor_(ms, callback, repeat);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// internal sealed class TimerManager :284
// {
static void TimerManager_build(uType* type)
{
    ::TYPES[26] = ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof());
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager, _timers), 0);
}

uType* TimerManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TimerManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager", options);
    type->fp_build_ = TimerManager_build;
    type->fp_ctor_ = (void*)TimerManager__New1_fn;
    return type;
}

// public generated TimerManager() :284
void TimerManager__ctor__fn(TimerManager* __this)
{
    __this->ctor_();
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) :288
void TimerManager__AddTimer_fn(TimerManager* __this, double* ms, uDelegate* callback, bool* repeat, int* __retval)
{
    *__retval = __this->AddTimer(*ms, callback, *repeat);
}

// public void DeleteAllTimers() :296
void TimerManager__DeleteAllTimers_fn(TimerManager* __this)
{
    __this->DeleteAllTimers();
}

// public bool DeleteTimer(int id) :304
void TimerManager__DeleteTimer_fn(TimerManager* __this, int* id, bool* __retval)
{
    *__retval = __this->DeleteTimer(*id);
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) :324
void TimerManager__GetTimer_fn(TimerManager* __this, int* id, TimerManager__Timer** __retval)
{
    *__retval = __this->GetTimer(*id);
}

// public generated TimerManager New() :284
void TimerManager__New1_fn(TimerManager** __retval)
{
    *__retval = TimerManager::New1();
}

// private void RemoveTimer(int id) :315
void TimerManager__RemoveTimer_fn(TimerManager* __this, int* id)
{
    __this->RemoveTimer(*id);
}

// public void Tick() :334
void TimerManager__Tick_fn(TimerManager* __this)
{
    __this->Tick();
}

// public generated TimerManager() [instance] :284
void TimerManager::ctor_()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", ".ctor()");
    _timers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[26/*Uno.Collections.List<Fuse.Reactive.FuseJS.TimerManager.Timer>*/]));
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) [instance] :288
int TimerManager::AddTimer(double ms, uDelegate* callback, bool repeat)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "AddTimer(double,Uno.Action,[bool])");
    TimerManager__Timer* t = TimerManager__Timer::New1(ms, callback, repeat);
    t->OnStop = uDelegate::New(::TYPES[12/*Uno.Action<int>*/], (void*)TimerManager__RemoveTimer_fn, this);
    ::g::Uno::Collections::List__Add_fn(uPtr(_timers), t);
    return t->ID;
}

// public void DeleteAllTimers() [instance] :296
void TimerManager::DeleteAllTimers()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "DeleteAllTimers()");
    TimerManager__Timer* ret2;

    for (int i = uPtr(_timers)->Count() - 1; i >= 0; i--)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret2), ret2))->Stop();
}

// public bool DeleteTimer(int id) [instance] :304
bool TimerManager::DeleteTimer(int id)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "DeleteTimer(int)");
    TimerManager__Timer* timer = GetTimer(id);

    if (timer != NULL)
    {
        uPtr(timer)->Stop();
        return true;
    }

    return false;
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) [instance] :324
TimerManager__Timer* TimerManager::GetTimer(int id)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "GetTimer(int)");
    TimerManager__Timer* ret3;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
    {
        TimerManager__Timer* timer = (::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret3), ret3);

        if (uPtr(timer)->ID == id)
            return timer;
    }

    return NULL;
}

// private void RemoveTimer(int id) [instance] :315
void TimerManager::RemoveTimer(int id)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "RemoveTimer(int)");
    TimerManager__Timer* ret4;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret4), ret4))->ID == id)
            uPtr(_timers)->RemoveAt(i);
}

// public void Tick() [instance] :334
void TimerManager::Tick()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerManager", "Tick()");
    TimerManager__Timer* ret5;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret5), ret5))->Update();
}

// public generated TimerManager New() [static] :284
TimerManager* TimerManager::New1()
{
    TimerManager* obj1 = (TimerManager*)uNew(TimerManager_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// public sealed class TimerModule :200
// {
static void TimerModule_build(uType* type)
{
    ::STRINGS[3] = uString::Const("FuseJS/Timer");
    ::STRINGS[27] = uString::Const("create");
    ::STRINGS[28] = uString::Const("delete");
    ::STRINGS[29] = uString::Const("create(): requires at least three arguments");
    ::STRINGS[30] = uString::Const("create(): first argument must be a function");
    ::STRINGS[31] = uString::Const("delete(): requires one argument");
    ::TYPES[6] = uObject_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[30] = ::g::Uno::Bool_typeof();
    ::TYPES[23] = uObject_typeof()->Array();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::g::Fuse::Reactive::FuseJS::TimerManager_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule, _tm), 0,
        TimerModule_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::TimerModule::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TimerModule__New2_fn, 0, true, TimerModule_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TimerModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.TimerModule", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_build_ = TimerModule_build;
    type->fp_ctor_ = (void*)TimerModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public TimerModule() :206
void TimerModule__ctor_2_fn(TimerModule* __this)
{
    __this->ctor_2();
}

// private object Create(Fuse.Scripting.Context context, object[] args) :225
void TimerModule__Create_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Create(context, args);
}

// private object Delete(Fuse.Scripting.Context context, object[] args) :244
void TimerModule__Delete_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Delete(context, args);
}

// public TimerModule New() :206
void TimerModule__New2_fn(TimerModule** __retval)
{
    *__retval = TimerModule::New2();
}

// private void OnReset(object sender, Uno.EventArgs args) :219
void TimerModule__OnReset_fn(TimerModule* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnReset(sender, args);
}

// internal void UpdateModule() :254
void TimerModule__UpdateModule_fn(TimerModule* __this)
{
    __this->UpdateModule();
}

uSStrong<TimerModule*> TimerModule::_instance_;

// public TimerModule() [instance] :206
void TimerModule::ctor_2()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", ".ctor()");
    ctor_1();

    if (TimerModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(TimerModule::_instance_ = this, ::STRINGS[3/*"FuseJS/Timer"*/]);
    _tm = ::g::Fuse::Reactive::FuseJS::TimerManager::New1();
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[27/*"create"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Create_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[28/*"delete"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Delete_fn, this)));
    add_Reset(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)TimerModule__OnReset_fn, this));
}

// private object Create(Fuse.Scripting.Context context, object[] args) [instance] :225
uObject* TimerModule::Create(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", "Create(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() < 3)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[29/*"create(): r...*/]));

    if (!uIs((uObject*)uPtr(args)->Strong<uObject*>(0), ::TYPES[0/*Fuse.Scripting.Function*/]))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[30/*"create(): f...*/]));

    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[0/*Fuse.Scripting.Function*/]);
    double ms = ::g::Fuse::Scripting::Value::ToNumber(args->Strong<uObject*>(1));
    bool repeat = uUnbox<bool>(::TYPES[30/*bool*/], args->Strong<uObject*>(2));
    uArray* innerArgs = uArray::New(::TYPES[23/*object[]*/], args->Length() - 3);

    for (int i = 0; i < innerArgs->Length(); i++)
        innerArgs->Strong<uObject*>(i) = args->Strong<uObject*>(3 + i);

    return uBox<int>(::TYPES[22/*int*/], uPtr(_tm)->AddTimer(ms, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)TimerModule__CallbackClosure__Callback_fn, TimerModule__CallbackClosure::New1(context, func, innerArgs)), repeat));
}

// private object Delete(Fuse.Scripting.Context context, object[] args) [instance] :244
uObject* TimerModule::Delete(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", "Delete(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[31/*"delete(): r...*/]));

    uPtr(_tm)->DeleteTimer(::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)));
    return NULL;
}

// private void OnReset(object sender, Uno.EventArgs args) [instance] :219
void TimerModule::OnReset(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", "OnReset(object,Uno.EventArgs)");

    if (_tm != NULL)
        uPtr(_tm)->DeleteAllTimers();
}

// internal void UpdateModule() [instance] :254
void TimerModule::UpdateModule()
{
    uStackFrame __("Fuse.Reactive.FuseJS.TimerModule", "UpdateModule()");

    if (_tm != NULL)
        uPtr(_tm)->Tick();
}

// public TimerModule New() [static] :206
TimerModule* TimerModule::New2()
{
    TimerModule* obj1 = (TimerModule*)uNew(TimerModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}}} // ::g::Fuse::Reactive::FuseJS
