// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Builtins;}}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Int3;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal partial sealed class ThreadWorker :1969
// {
struct ThreadWorker_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Uno::Threading::IDispatcher interface1;
};

ThreadWorker_type* ThreadWorker_typeof();
void ThreadWorker__ctor__fn(ThreadWorker* __this);
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this);
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__CreateContext_fn(uObject* ownerThread, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__Dispose_fn(ThreadWorker* __this);
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval);
void ThreadWorker__GetClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval);
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action);
void ThreadWorker__get_IsJavaScriptVMReady_fn(ThreadWorker* __this, bool* __retval);
void ThreadWorker__set_IsJavaScriptVMReady_fn(ThreadWorker* __this, bool* value);
void ThreadWorker__New1_fn(ThreadWorker** __retval);
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args);
void ThreadWorker__RegisterClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval);
void ThreadWorker__Run_fn(ThreadWorker* __this);
void ThreadWorker__ToArray_fn(::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray1_fn(::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray2_fn(::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray3_fn(::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray4_fn(::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray5_fn(::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__Unwrap_fn(ThreadWorker* __this, uObject* dc, uObject** __retval);
void ThreadWorker__Wrap_fn(uObject* obj, uObject** __retval);
void ThreadWorker__WrapScriptClass_fn(ThreadWorker* __this, uObject* obj, uObject** __retval);

struct ThreadWorker : uObject
{
    static uSStrong< ::g::Fuse::Scripting::Context*> _context_;
    static uSStrong< ::g::Fuse::Scripting::Context*>& _context() { return _context_; }
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _exceptionQueue;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> _fuseJS_;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*>& _fuseJS() { return _fuseJS_; }
    bool _isReady;
    uStrong< ::g::Uno::Threading::Mutex*> _isReadyMutex;
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _queue;
    uStrong< ::g::Uno::Collections::Dictionary*> _registeredClasses;
    uStrong< ::g::Fuse::Scripting::Function*> _setSuperclass;
    bool _subscribedForClosing;
    bool _terminate;
    uStrong< ::g::Uno::Threading::Mutex*> CanExecuteJavaScript;
    uStrong< ::g::Uno::Threading::Mutex*> Pause;

    void ctor_();
    void CheckAndThrow();
    ::g::Fuse::Scripting::Context* Context();
    void Dispose();
    ::g::Fuse::Reactive::FuseJS::Builtins* FuseJS();
    ::g::Fuse::Scripting::Function* GetClass(::g::Fuse::Scripting::ScriptClass* sc);
    void Invoke(uDelegate* action);
    bool IsJavaScriptVMReady();
    void IsJavaScriptVMReady(bool value);
    void OnClosing(uObject* sender, ::g::Uno::EventArgs* args);
    ::g::Fuse::Scripting::Function* RegisterClass(::g::Fuse::Scripting::ScriptClass* sc);
    void Run();
    uObject* Unwrap(uObject* dc);
    uObject* WrapScriptClass(uObject* obj);
    static ::g::Fuse::Scripting::Context* CreateContext(uObject* ownerThread);
    static ThreadWorker* New1();
    static ::g::Fuse::Scripting::Array* ToArray(::g::Uno::Float2 v);
    static ::g::Fuse::Scripting::Array* ToArray1(::g::Uno::Float3 v);
    static ::g::Fuse::Scripting::Array* ToArray2(::g::Uno::Float4 v);
    static ::g::Fuse::Scripting::Array* ToArray3(::g::Uno::Int2 v);
    static ::g::Fuse::Scripting::Array* ToArray4(::g::Uno::Int3 v);
    static ::g::Fuse::Scripting::Array* ToArray5(::g::Uno::Int4 v);
    static uObject* Wrap(uObject* obj);
};
// }

}}} // ::g::Fuse::Reactive
