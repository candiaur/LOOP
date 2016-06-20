// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.DataContextChangedHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.AnyChangeObserver.h>
#include <Fuse.Reactive.BindAttempt.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Closure.h>
#include <Fuse.Reactive.ClosureArgs.h>
#include <Fuse.Reactive.ClosureHandler.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.ContextBinding.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.Dispatcher.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.CallClosure.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.LazyObservableProperty.h>
#include <Fuse.Reactive.Match.h>
#include <Fuse.Reactive.Observable.h>
#include <Fuse.Reactive.ObservableSubscription.h>
#include <Fuse.Reactive.PathObserver.h>
#include <Fuse.Reactive.SegmentObserver.h>
#include <Fuse.Reactive.Select.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Reactive.ThreadWorker.MethodClosure.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Reactive.WhileEmpty.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.JavaScriptCore.Context.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Func-3.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[68];
static uType* TYPES[93];

namespace g{
namespace Fuse{
namespace Reactive{

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/Subscription/$.uno
// ----------------------------------------------------------------------

// internal sealed class AnyChangeObserver :11
// {
static void AnyChangeObserver_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(AnyChangeObserver_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::AnyChangeObserver, _anyChange), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::AnyChangeObserver, _hasInitialValue), 0);
}

AnyChangeObserver_type* AnyChangeObserver_typeof()
{
    static uSStrong<AnyChangeObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AnyChangeObserver);
    options.TypeSize = sizeof(AnyChangeObserver_type);
    type = (AnyChangeObserver_type*)uClassType::New("Fuse.Reactive.AnyChangeObserver", options);
    type->fp_build_ = AnyChangeObserver_build;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))AnyChangeObserver__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))AnyChangeObserver__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))AnyChangeObserver__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))AnyChangeObserver__OnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))AnyChangeObserver__OnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))AnyChangeObserver__OnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))AnyChangeObserver__OnFailed_fn;
    return type;
}

// public AnyChangeObserver(Uno.Action anyChange) :16
void AnyChangeObserver__ctor__fn(AnyChangeObserver* __this, uDelegate* anyChange)
{
    __this->ctor_(anyChange);
}

// public AnyChangeObserver New(Uno.Action anyChange) :16
void AnyChangeObserver__New1_fn(uDelegate* anyChange, AnyChangeObserver** __retval)
{
    *__retval = AnyChangeObserver::New1(anyChange);
}

// public void OnAdd(object addedValue) :44
void AnyChangeObserver__OnAdd_fn(AnyChangeObserver* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnFailed(string message) :33
void AnyChangeObserver__OnFailed_fn(AnyChangeObserver* __this, uString* message)
{
    __this->OnFailed(message);
}

// public void OnInsertAt(int index, object value) :56
void AnyChangeObserver__OnInsertAt_fn(AnyChangeObserver* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Scripting.Array values) :21
void AnyChangeObserver__OnNewAll_fn(AnyChangeObserver* __this, ::g::Fuse::Scripting::Array* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :27
void AnyChangeObserver__OnNewAt_fn(AnyChangeObserver* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemove(object value, int index) :50
void AnyChangeObserver__OnRemove_fn(AnyChangeObserver* __this, uObject* value, int* index)
{
    __this->OnRemove(value, *index);
}

// public void OnSet(object value) :38
void AnyChangeObserver__OnSet_fn(AnyChangeObserver* __this, uObject* value)
{
    __this->OnSet(value);
}

// public AnyChangeObserver(Uno.Action anyChange) [instance] :16
void AnyChangeObserver::ctor_(uDelegate* anyChange)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", ".ctor(Uno.Action)");
    _anyChange = anyChange;
}

// public void OnAdd(object addedValue) [instance] :44
void AnyChangeObserver::OnAdd(uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnAdd(object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnFailed(string message) [instance] :33
void AnyChangeObserver::OnFailed(uString* message)
{
}

// public void OnInsertAt(int index, object value) [instance] :56
void AnyChangeObserver::OnInsertAt(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnInsertAt(int,object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnNewAll(Fuse.Scripting.Array values) [instance] :21
void AnyChangeObserver::OnNewAll(::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnNewAll(Fuse.Scripting.Array)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnNewAt(int index, object newValue) [instance] :27
void AnyChangeObserver::OnNewAt(int index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnNewAt(int,object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnRemove(object value, int index) [instance] :50
void AnyChangeObserver::OnRemove(uObject* value, int index)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnRemove(object,int)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnSet(object value) [instance] :38
void AnyChangeObserver::OnSet(uObject* value)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnSet(object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public AnyChangeObserver New(Uno.Action anyChange) [static] :16
AnyChangeObserver* AnyChangeObserver::New1(uDelegate* anyChange)
{
    AnyChangeObserver* obj1 = (AnyChangeObserver*)uNew(AnyChangeObserver_typeof());
    obj1->ctor_(anyChange);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/Subscription/$.uno
// ----------------------------------------------------------------------

// internal sealed class BindAttempt :119
// {
static void BindAttempt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::SegmentObserver_typeof());
    ::TYPES[2] = ::g::Fuse::DataContextChangedHandler_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _cur), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _isDisposed), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Reactive::BindAttempt, _observedNodes), 0,
        ::g::Fuse::Reactive::PathObserver_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _po), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::SegmentObserver_typeof()), offsetof(::g::Fuse::Reactive::BindAttempt, _segmentObservers), 0);
}

uType* BindAttempt_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(BindAttempt);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.BindAttempt", options);
    type->fp_build_ = BindAttempt_build;
    return type;
}

// public BindAttempt(Fuse.Reactive.PathObserver po) :126
void BindAttempt__ctor__fn(BindAttempt* __this, ::g::Fuse::Reactive::PathObserver* po)
{
    __this->ctor_(po);
}

// public void Dispose() :177
void BindAttempt__Dispose_fn(BindAttempt* __this)
{
    __this->Dispose();
}

// internal void Fail() :147
void BindAttempt__Fail_fn(BindAttempt* __this)
{
    __this->Fail();
}

// public BindAttempt New(Fuse.Reactive.PathObserver po) :126
void BindAttempt__New1_fn(::g::Fuse::Reactive::PathObserver* po, BindAttempt** __retval)
{
    *__retval = BindAttempt::New1(po);
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) :170
void BindAttempt__OnDataContextChanged_fn(BindAttempt* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataContextChanged(sender, args);
}

// internal void Restart() :164
void BindAttempt__Restart_fn(BindAttempt* __this)
{
    __this->Restart();
}

// private void TryBind() :133
void BindAttempt__TryBind_fn(BindAttempt* __this)
{
    __this->TryBind();
}

// public BindAttempt(Fuse.Reactive.PathObserver po) [instance] :126
void BindAttempt::ctor_(::g::Fuse::Reactive::PathObserver* po)
{
    uStackFrame __("Fuse.Reactive.BindAttempt", ".ctor(Fuse.Reactive.PathObserver)");
    _observedNodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Node>*/]));
    _segmentObservers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Reactive.SegmentObserver>*/]));
    _po = po;
    _cur = uPtr(po)->Node;
    TryBind();
}

// public void Dispose() [instance] :177
void BindAttempt::Dispose()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "Dispose()");
    ::g::Fuse::Reactive::SegmentObserver* ret2;
    ::g::Fuse::Node* ret3;

    if (_isDisposed)
        return;

    _isDisposed = true;

    for (int i = 0; i < uPtr(_segmentObservers)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_segmentObservers), uCRef<int>(i), &ret2), ret2))->Dispose();

    uPtr(_segmentObservers)->Clear();
    _segmentObservers = NULL;

    for (int i1 = 0; i1 < uPtr(_observedNodes)->Count(); i1++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observedNodes), uCRef<int>(i1), &ret3), ret3))->remove_DataContextChanged(uDelegate::New(::TYPES[2/*Fuse.DataContextChangedHandler*/], (void*)BindAttempt__OnDataContextChanged_fn, this));

    uPtr(_observedNodes)->Clear();
    _observedNodes = NULL;
}

// internal void Fail() [instance] :147
void BindAttempt::Fail()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "Fail()");

    if (_isDisposed)
        return;

    uObject* curdc = uPtr(_cur)->DataContext();

    while (_cur != NULL)
    {
        uObject* dc = uPtr(_cur)->DataContext();

        if ((dc != NULL) && (dc != curdc))
        {
            TryBind();
            return;
        }

        _cur = uPtr(_cur)->Parent();
    }
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) [instance] :170
void BindAttempt::OnDataContextChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "OnDataContextChanged(object,Uno.EventArgs)");
    Restart();
}

// internal void Restart() [instance] :164
void BindAttempt::Restart()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "Restart()");

    if (_isDisposed)
        return;

    uPtr(::g::Fuse::Reactive::Dispatcher::UIThread())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Reactive::PathObserver__RestartBinding_fn, uPtr(_po)));
}

// private void TryBind() [instance] :133
void BindAttempt::TryBind()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "TryBind()");
    uObject* dc = uPtr(_cur)->DataContext();
    ::g::Uno::Collections::List__Add_fn(uPtr(_observedNodes), _cur);
    uPtr(_cur)->add_DataContextChanged(uDelegate::New(::TYPES[2/*Fuse.DataContextChangedHandler*/], (void*)BindAttempt__OnDataContextChanged_fn, this));

    if (dc != NULL)
    {
        ::g::Fuse::Reactive::SegmentObserver* so = ::g::Fuse::Reactive::SegmentObserver::New1(uPtr(_po)->Binding, this);
        so->Init(uPtr(_cur)->DataContext(), uPtr(_po)->Path);
        ::g::Uno::Collections::List__Add_fn(uPtr(_segmentObservers), so);
    }
}

// public BindAttempt New(Fuse.Reactive.PathObserver po) [static] :126
BindAttempt* BindAttempt::New1(::g::Fuse::Reactive::PathObserver* po)
{
    BindAttempt* obj1 = (BindAttempt*)uNew(BindAttempt_typeof());
    obj1->ctor_(po);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// private sealed class EventBinding.CallClosure :1084
// {
static void EventBinding__CallClosure_build(uType* type)
{
    ::STRINGS[0] = uString::Const("node");
    ::STRINGS[1] = uString::Const("data");
    ::STRINGS[2] = uString::Const("sender");
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[9] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[10] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[11] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(EventBinding__CallClosure_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _args), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _data), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _node), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _sender), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, Function), 0);
}

EventBinding__CallClosure_type* EventBinding__CallClosure_typeof()
{
    static uSStrong<EventBinding__CallClosure_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EventBinding__CallClosure);
    options.TypeSize = sizeof(EventBinding__CallClosure_type);
    type = (EventBinding__CallClosure_type*)uClassType::New("Fuse.Reactive.EventBinding.CallClosure", options);
    type->fp_build_ = EventBinding__CallClosure_build;
    type->interface0.fp_AddString = (void(*)(uObject*, uString*, uString*))EventBinding__CallClosure__AddString_fn;
    type->interface0.fp_AddInt = (void(*)(uObject*, uString*, int*))EventBinding__CallClosure__AddInt_fn;
    type->interface0.fp_AddDouble = (void(*)(uObject*, uString*, double*))EventBinding__CallClosure__AddDouble_fn;
    type->interface0.fp_AddBool = (void(*)(uObject*, uString*, bool*))EventBinding__CallClosure__AddBool_fn;
    type->interface0.fp_AddObject = (void(*)(uObject*, uString*, uObject*))EventBinding__CallClosure__AddObject_fn;
    return type;
}

// public CallClosure(Fuse.Scripting.IScriptEvent args, object sender) :1093
void EventBinding__CallClosure__ctor__fn(EventBinding__CallClosure* __this, uObject* args, uObject* sender)
{
    __this->ctor_(args, sender);
}

// public void AddBool(string key, bool value) :1142
void EventBinding__CallClosure__AddBool_fn(EventBinding__CallClosure* __this, uString* key, bool* value)
{
    __this->AddBool(key, *value);
}

// public void AddDouble(string key, double value) :1137
void EventBinding__CallClosure__AddDouble_fn(EventBinding__CallClosure* __this, uString* key, double* value)
{
    __this->AddDouble(key, *value);
}

// public void AddInt(string key, int value) :1132
void EventBinding__CallClosure__AddInt_fn(EventBinding__CallClosure* __this, uString* key, int* value)
{
    __this->AddInt(key, *value);
}

// public void AddObject(string key, object value) :1121
void EventBinding__CallClosure__AddObject_fn(EventBinding__CallClosure* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public void AddString(string key, string value) :1127
void EventBinding__CallClosure__AddString_fn(EventBinding__CallClosure* __this, uString* key, uString* value)
{
    __this->AddString(key, value);
}

// public void Call() :1108
void EventBinding__CallClosure__Call_fn(EventBinding__CallClosure* __this)
{
    __this->Call();
}

// public CallClosure New(Fuse.Scripting.IScriptEvent args, object sender) :1093
void EventBinding__CallClosure__New1_fn(uObject* args, uObject* sender, EventBinding__CallClosure** __retval)
{
    *__retval = EventBinding__CallClosure::New1(args, sender);
}

// public CallClosure(Fuse.Scripting.IScriptEvent args, object sender) [instance] :1093
void EventBinding__CallClosure::ctor_(uObject* args, uObject* sender)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", ".ctor(Fuse.Scripting.IScriptEvent,object)");
    _node = uAs< ::g::Fuse::Node*>(sender, ::TYPES[3/*Fuse.Node*/]);

    if (_node != NULL)
    {
        _data = uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(uPtr(_node)->DataContext());

        if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(_node)->Name()), NULL))
            _sender = uPtr(_node)->Name();
    }

    if (args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args), ::TYPES[5/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);
}

// public void AddBool(string key, bool value) [instance] :1142
void EventBinding__CallClosure::AddBool(uString* key, bool value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddBool(string,bool)");
    AddObject(key, uBox(::TYPES[12/*bool*/], value));
}

// public void AddDouble(string key, double value) [instance] :1137
void EventBinding__CallClosure::AddDouble(uString* key, double value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddDouble(string,double)");
    AddObject(key, uBox(::TYPES[16/*double*/], value));
}

// public void AddInt(string key, int value) [instance] :1132
void EventBinding__CallClosure::AddInt(uString* key, int value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddInt(string,int)");
    AddObject(key, uBox(::TYPES[16/*double*/], (double)value));
}

// public void AddObject(string key, object value) [instance] :1121
void EventBinding__CallClosure::AddObject(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddObject(string,object)");

    if (_args == NULL)
        _args = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_args), key, value);
}

// public void AddString(string key, string value) [instance] :1127
void EventBinding__CallClosure::AddString(uString* key, uString* value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddString(string,string)");
    AddObject(key, value);
}

// public void Call() [instance] :1108
void EventBinding__CallClosure::Call()
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "Call()");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret3;
    ::g::Fuse::Scripting::Object* obj = uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->NewObject();

    if (_node != NULL)
        uPtr(obj)->Item(::STRINGS[0/*"node"*/], uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(_node));

    if (_data != NULL)
        obj->Item(::STRINGS[1/*"data"*/], _data);

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(_sender), NULL))
        obj->Item(::STRINGS[2/*"sender"*/], uBox(::TYPES[34/*Uno.UX.Selector*/], _sender));

    if (_args != NULL)

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_args), &ret3), ret3); enum1.MoveNext(::TYPES[9/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > arg = enum1.Current(::TYPES[9/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            uPtr(obj)->Item(arg.Key(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]), arg.Value(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]));
        }

    uPtr(Function)->Call(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, obj));
}

// public CallClosure New(Fuse.Scripting.IScriptEvent args, object sender) [static] :1093
EventBinding__CallClosure* EventBinding__CallClosure::New1(uObject* args, uObject* sender)
{
    EventBinding__CallClosure* obj2 = (EventBinding__CallClosure*)uNew(EventBinding__CallClosure_typeof());
    obj2->ctor_(args, sender);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Case :1604
// {
static void Case_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[13] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[14] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[16] = ::g::Uno::Double_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), offsetof(::g::Fuse::Reactive::Case, _factories), 0,
        ::g::Fuse::Reactive::Match_typeof(), offsetof(::g::Fuse::Reactive::Case, _match), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Case, _value), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Case, _IsDefault), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Case__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Case__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Factories", NULL, (void*)Case__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), 0),
        new uFunction("get_IsDefault", NULL, (void*)Case__get_IsDefault_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsDefault", NULL, (void*)Case__set_IsDefault_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Case__New1_fn, 0, true, Case_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Case__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Case__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Case__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Case__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Case__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Case__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

uType* Case_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Case);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Case", options);
    type->fp_build_ = Case_build;
    type->fp_ctor_ = (void*)Case__New1_fn;
    return type;
}

// public generated Case() :1604
void Case__ctor__fn(Case* __this)
{
    __this->ctor_();
}

// public bool get_Bool() :1637
void Case__get_Bool_fn(Case* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1638
void Case__set_Bool_fn(Case* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Factories() :1653
void Case__get_Factories_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Invalidate() :1664
void Case__Invalidate_fn(Case* __this)
{
    __this->Invalidate();
}

// public generated bool get_IsDefault() :1643
void Case__get_IsDefault_fn(Case* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public generated void set_IsDefault(bool value) :1644
void Case__set_IsDefault_fn(Case* __this, bool* value)
{
    __this->IsDefault(*value);
}

// public generated Case New() :1604
void Case__New1_fn(Case** __retval)
{
    *__retval = Case::New1();
}

// public double get_Number() :1631
void Case__get_Number_fn(Case* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1632
void Case__set_Number_fn(Case* __this, double* value)
{
    __this->Number(*value);
}

// private void OnFactoriesChanged(Uno.UX.Template f) :1659
void Case__OnFactoriesChanged_fn(Case* __this, ::g::Uno::UX::Template* f)
{
    __this->OnFactoriesChanged(f);
}

// public string get_String() :1625
void Case__get_String_fn(Case* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1626
void Case__set_String_fn(Case* __this, uString* value)
{
    __this->String(value);
}

// public object get_Value() :1612
void Case__get_Value_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1613
void Case__set_Value_fn(Case* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Case() [instance] :1604
void Case::ctor_()
{
}

// public bool get_Bool() [instance] :1637
bool Case::Bool()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Bool()");
    return uIs((uObject*)_value, ::TYPES[12/*bool*/]) ? uUnbox<bool>(::TYPES[12/*bool*/], _value) : false;
}

// public void set_Bool(bool value) [instance] :1638
void Case::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Bool(bool)");
    Value(uBox(::TYPES[12/*bool*/], value));
}

// public Uno.Collections.IList<Uno.UX.Template> get_Factories() [instance] :1653
uObject* Case::Factories()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Factories()");
    uObject* ind1 = _factories;
    return (ind1 != NULL) ? ind1 : (uObject*)(_factories = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[14/*Uno.Collections.ObservableList<Uno.UX.Template>*/], uDelegate::New(::TYPES[15/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[15/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this))));
}

// private void Invalidate() [instance] :1664
void Case::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Case", "Invalidate()");

    if (_match != NULL)
        uPtr(_match)->Invalidate();
}

// public generated bool get_IsDefault() [instance] :1643
bool Case::IsDefault()
{
    uStackFrame __("Fuse.Reactive.Case", "get_IsDefault()");
    return _IsDefault;
}

// public generated void set_IsDefault(bool value) [instance] :1644
void Case::IsDefault(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_IsDefault(bool)");
    _IsDefault = value;
}

// public double get_Number() [instance] :1631
double Case::Number()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Number()");
    return uIs((uObject*)_value, ::TYPES[16/*double*/]) ? uUnbox<double>(::TYPES[16/*double*/], _value) : 0.0;
}

// public void set_Number(double value) [instance] :1632
void Case::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Number(double)");
    Value(uBox(::TYPES[16/*double*/], value));
}

// private void OnFactoriesChanged(Uno.UX.Template f) [instance] :1659
void Case::OnFactoriesChanged(::g::Uno::UX::Template* f)
{
    uStackFrame __("Fuse.Reactive.Case", "OnFactoriesChanged(Uno.UX.Template)");
    Invalidate();
}

// public string get_String() [instance] :1625
uString* Case::String()
{
    uStackFrame __("Fuse.Reactive.Case", "get_String()");
    return uAs<uString*>(_value, ::TYPES[17/*string*/]);
}

// public void set_String(string value) [instance] :1626
void Case::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_String(string)");
    Value(value);
}

// public object get_Value() [instance] :1612
uObject* Case::Value()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1613
void Case::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Value(object)");

    if (_value != value)
    {
        _value = value;
        Invalidate();
    }
}

// public generated Case New() [static] :1604
Case* Case::New1()
{
    Case* obj2 = (Case*)uNew(Case_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Closure :88
// {
static void Closure_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::Delegate_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[19] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::UX::NameTable_typeof(), uObject_typeof());
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[20] = ::g::Fuse::Reactive::ClosureHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::Closure, _nameTable), 0,
        ::g::Fuse::Reactive::ClosureHandler_typeof(), offsetof(::g::Fuse::Reactive::Closure, _ready), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Closure__New2_fn, 0, true, Closure_typeof(), 1, ::g::Uno::UX::NameTable_typeof()),
        new uFunction("add_Ready", NULL, (void*)Closure__add_Ready_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::ClosureHandler_typeof()),
        new uFunction("remove_Ready", NULL, (void*)Closure__remove_Ready_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::ClosureHandler_typeof()));
}

::g::Fuse::Node_type* Closure_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Closure);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Reactive.Closure", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_build_ = Closure_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Closure__OnRooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Closure(Uno.UX.NameTable nameTable) :93
void Closure__ctor_2_fn(Closure* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_2(nameTable);
}

// private void CallReady() :149
void Closure__CallReady_fn(Closure* __this)
{
    __this->CallReady();
}

// public Closure New(Uno.UX.NameTable nameTable) :93
void Closure__New2_fn(::g::Uno::UX::NameTable* nameTable, Closure** __retval)
{
    *__retval = Closure::New2(nameTable);
}

// protected override sealed void OnRooted() :138
void Closure__OnRooted_fn(Closure* __this)
{
    uStackFrame __("Fuse.Reactive.Closure", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->ScheduleReady();
}

// public void add_Ready(Fuse.Reactive.ClosureHandler value) :125
void Closure__add_Ready_fn(Closure* __this, uDelegate* value)
{
    __this->add_Ready(value);
}

// public void remove_Ready(Fuse.Reactive.ClosureHandler value) :132
void Closure__remove_Ready_fn(Closure* __this, uDelegate* value)
{
    __this->remove_Ready(value);
}

// private void ScheduleReady() :144
void Closure__ScheduleReady_fn(Closure* __this)
{
    __this->ScheduleReady();
}

// public Closure(Uno.UX.NameTable nameTable) [instance] :93
void Closure::ctor_2(::g::Uno::UX::NameTable* nameTable)
{
    uStackFrame __("Fuse.Reactive.Closure", ".ctor(Uno.UX.NameTable)");
    ctor_1();
    _nameTable = nameTable;
}

// private void CallReady() [instance] :149
void Closure::CallReady()
{
    uStackFrame __("Fuse.Reactive.Closure", "CallReady()");

    if (IsRootingCompleted() && ::g::Uno::Delegate::op_Inequality(_ready, NULL))
        uPtr(_ready)->Invoke(2, this, (::g::Fuse::Reactive::ClosureArgs*)::g::Fuse::Reactive::ClosureArgs::New2(_nameTable, uDelegate::New(::TYPES[19/*Uno.Func<object, Uno.UX.NameTable, object>*/], (void*)::g::Fuse::Reactive::JavaScript__Unwrap_fn)));
}

// public void add_Ready(Fuse.Reactive.ClosureHandler value) [instance] :125
void Closure::add_Ready(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Closure", "add_Ready(Fuse.Reactive.ClosureHandler)");

    if (IsRootingCompleted())
        ScheduleReady();

    _ready = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_ready, value), ::TYPES[20/*Fuse.Reactive.ClosureHandler*/]);
}

// public void remove_Ready(Fuse.Reactive.ClosureHandler value) [instance] :132
void Closure::remove_Ready(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Closure", "remove_Ready(Fuse.Reactive.ClosureHandler)");
    _ready = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_ready, value), ::TYPES[20/*Fuse.Reactive.ClosureHandler*/]);
}

// private void ScheduleReady() [instance] :144
void Closure::ScheduleReady()
{
    uStackFrame __("Fuse.Reactive.Closure", "ScheduleReady()");
    uPtr(::g::Fuse::Reactive::Dispatcher::UIThread())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Closure__CallReady_fn, this));
}

// public Closure New(Uno.UX.NameTable nameTable) [static] :93
Closure* Closure::New2(::g::Uno::UX::NameTable* nameTable)
{
    Closure* obj1 = (Closure*)uNew(Closure_typeof());
    obj1->ctor_2(nameTable);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class ClosureArgs :49
// {
static void ClosureArgs_build(uType* type)
{
    ::STRINGS[3] = uString::Const("_this");
    ::TYPES[21] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    ::TYPES[22] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof());
    ::TYPES[6] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ClosureArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::ClosureArgs, _names), 0,
        ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::UX::NameTable_typeof(), uObject_typeof()), offsetof(::g::Fuse::Reactive::ClosureArgs, _unwrapper), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Serialize", NULL, (void*)ClosureArgs__Serialize_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Scripting::IEventSerializer_typeof()));
}

ClosureArgs_type* ClosureArgs_typeof()
{
    static uSStrong<ClosureArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClosureArgs);
    options.TypeSize = sizeof(ClosureArgs_type);
    type = (ClosureArgs_type*)uClassType::New("Fuse.Reactive.ClosureArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_build_ = ClosureArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ClosureArgs__Serialize_fn;
    return type;
}

// internal ClosureArgs(Uno.UX.NameTable names, [Uno.Func<object, Uno.UX.NameTable, object> unwrapper]) :54
void ClosureArgs__ctor_1_fn(ClosureArgs* __this, ::g::Uno::UX::NameTable* names, uDelegate* unwrapper)
{
    __this->ctor_1(names, unwrapper);
}

// internal ClosureArgs New(Uno.UX.NameTable names, [Uno.Func<object, Uno.UX.NameTable, object> unwrapper]) :54
void ClosureArgs__New2_fn(::g::Uno::UX::NameTable* names, uDelegate* unwrapper, ClosureArgs** __retval)
{
    *__retval = ClosureArgs::New2(names, unwrapper);
}

// public void Serialize(Fuse.Scripting.IEventSerializer s) :60
void ClosureArgs__Serialize_fn(ClosureArgs* __this, uObject* s)
{
    __this->Serialize(s);
}

// internal ClosureArgs(Uno.UX.NameTable names, [Uno.Func<object, Uno.UX.NameTable, object> unwrapper]) [instance] :54
void ClosureArgs::ctor_1(::g::Uno::UX::NameTable* names, uDelegate* unwrapper)
{
    uStackFrame __("Fuse.Reactive.ClosureArgs", ".ctor(Uno.UX.NameTable,[Uno.Func<object, Uno.UX.NameTable, object>])");
    ctor_();
    _names = names;
    _unwrapper = unwrapper;
}

// public void Serialize(Fuse.Scripting.IEventSerializer s) [instance] :60
void ClosureArgs::Serialize(uObject* s)
{
    uStackFrame __("Fuse.Reactive.ClosureArgs", "Serialize(Fuse.Scripting.IEventSerializer)");
    uObject* ret2;
    ::g::Uno::UX::NameTable* rootTable = NULL;
    ::g::Uno::UX::NameTable* nt = _names;
    int o = (nt != NULL) ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[21/*Uno.Collections.ICollection<object>*/])) - 1 : 0;

    while (nt != NULL)
    {
        if ((rootTable == NULL) && (uPtr(nt)->This() != NULL))
            rootTable = nt;

        for (int e = uPtr(uPtr(nt)->Entries)->Length(); (e--) > 0; )
        {
            uString* name = uPtr(uPtr(nt)->Entries)->Strong<uString*>(e);
            uObject* obj = uPtr(_unwrapper)->Invoke(2, (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_names)->Objects()), ::TYPES[22/*Uno.Collections.IList<object>*/]), uCRef<int>(o--), &ret2), ret2), NULL);
            ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::TYPES[6/*Fuse.Scripting.IEventSerializer*/]), name, obj);
        }

        nt = uPtr(nt)->ParentTable;
    }

    if (rootTable != NULL)
        ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::TYPES[6/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[3/*"_this"*/], uPtr(_unwrapper)->Invoke(2, (uObject*)uPtr(rootTable)->This(), rootTable));
}

// internal ClosureArgs New(Uno.UX.NameTable names, [Uno.Func<object, Uno.UX.NameTable, object> unwrapper]) [static] :54
ClosureArgs* ClosureArgs::New2(::g::Uno::UX::NameTable* names, uDelegate* unwrapper)
{
    ClosureArgs* obj1 = (ClosureArgs*)uNew(ClosureArgs_typeof());
    obj1->ctor_1(names, unwrapper);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public delegate void ClosureHandler(object sender, Fuse.Reactive.ClosureArgs args) :83
uDelegateType* ClosureHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Reactive.ClosureHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Reactive::ClosureArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// internal static class Console :76
// {
static void Console_build(uType* type)
{
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno");
    ::STRINGS[5] = uString::Const("null");
    ::STRINGS[6] = uString::Const("\"");
    ::STRINGS[7] = uString::Const("function");
    ::STRINGS[8] = uString::Const("Object");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[10] = uString::Const(": ");
    ::STRINGS[11] = uString::Const("Array[");
    ::STRINGS[12] = uString::Const("]");
    ::STRINGS[13] = uString::Const("  ");
    ::STRINGS[14] = uString::Const("log");
    ::STRINGS[15] = uString::Const("dir");
    ::STRINGS[16] = uString::Const("console");
    ::TYPES[23] = ::g::Uno::Int_typeof();
    ::TYPES[24] = ::g::Uno::Float_typeof();
    ::TYPES[16] = ::g::Uno::Double_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    type->fp_build_ = Console_build;
    return type;
}

// private static object Dir(object[] args) :97
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) :109
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* maxDepth, int* indent)
{
    Console::Dir1(builder, obj, *maxDepth, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :178
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :78
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :87
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :97
uObject* Console::Dir(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(object[])");
    int maxDepth = 1;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 1, 0);

    ::g::Uno::Diagnostics::Debug::Log5(builder->ToString(), 1, ::STRINGS[4/*"/usr/local/...*/], 105);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) [static] :109
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int maxDepth, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(Uno.Text.StringBuilder,object,[int],[int])");
    uArray* array1;
    int index2;
    int length3;
    indent++;

    if (obj == NULL)
    {
        uPtr(builder)->AppendLine(::STRINGS[5/*"null"*/]);
        return;
    }

    if ((uIs(obj, ::TYPES[23/*int*/]) || uIs(obj, ::TYPES[24/*float*/])) || uIs(obj, ::TYPES[16/*double*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[12/*bool*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(obj)))));
        return;
    }

    if (uIs(obj, ::TYPES[17/*string*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[6/*"\""*/], ::g::Uno::Object::ToString(uPtr(obj))), ::STRINGS[6/*"\""*/]));
        return;
    }

    if (uIs(obj, ::TYPES[25/*Fuse.Scripting.Function*/]))
    {
        uPtr(builder)->AppendLine(::STRINGS[7/*"function"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[26/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[26/*Fuse.Scripting.Object*/]);
        uPtr(builder)->AppendLine(::STRINGS[8/*"Object"*/]);

        if (indent <= maxDepth)

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*""*/], k), ::STRINGS[10/*": "*/]));
                Console::Dir1(builder, uPtr(o)->Item(k), maxDepth, indent);
            }

        return;
    }

    if (uIs(obj, ::TYPES[27/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[27/*Fuse.Scripting.Array*/]);
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[11/*"Array["*/], uBox<int>(::TYPES[23/*int*/], uPtr(a)->Length())), ::STRINGS[12/*"]"*/]));

        if (indent <= maxDepth)

            for (int i = 0; i < uPtr(a)->Length(); i++)
            {
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[9/*""*/], uBox<int>(::TYPES[23/*int*/], i)), ::STRINGS[10/*": "*/]));
                Console::Dir1(builder, uPtr(a)->Item(i), maxDepth, indent);
            }

        return;
    }

    uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :178
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Indent(Uno.Text.StringBuilder,int)");

    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append2(::STRINGS[13/*"  "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :78
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.Console", "Init(Fuse.Scripting.Context)");
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[14/*"log"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[15/*"dir"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[16/*"console"*/], console);
}

// private static object Log(object[] args) [static] :87
uObject* Console::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[5/*"null"*/], 1, ::STRINGS[4/*"/usr/local/...*/], 91);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract class ContextBinding :8
// {
static void ContextBinding_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    type->SetFields(1,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ContextBinding, _pathSubscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ContextBinding, _Key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Key", NULL, (void*)ContextBinding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

ContextBinding_type* ContextBinding_typeof()
{
    static uSStrong<ContextBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ContextBinding);
    options.TypeSize = sizeof(ContextBinding_type);
    type = (ContextBinding_type*)uClassType::New("Fuse.Reactive.ContextBinding", options);
    type->SetBase(::g::Fuse::Binding_typeof());
    type->fp_build_ = ContextBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ContextBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ContextBinding__OnUnrooted_fn;
    return type;
}

// protected ContextBinding(string key) :13
void ContextBinding__ctor_1_fn(ContextBinding* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :11
void ContextBinding__get_Key_fn(ContextBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :11
void ContextBinding__set_Key_fn(ContextBinding* __this, uString* value)
{
    __this->Key(value);
}

// protected override void OnRooted() :20
void ContextBinding__OnRooted_fn(ContextBinding* __this)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "OnRooted()");
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_pathSubscription = (uObject*)::g::Fuse::Reactive::PathObserver::New1(__this, __this->Parent(), __this->Key());
}

// protected override void OnUnrooted() :26
void ContextBinding__OnUnrooted_fn(ContextBinding* __this)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "OnUnrooted()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_pathSubscription), ::TYPES[29/*Uno.IDisposable*/]));
    __this->_pathSubscription = NULL;
    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// protected ContextBinding(string key) [instance] :13
void ContextBinding::ctor_1(uString* key)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", ".ctor(string)");
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :11
uString* ContextBinding::Key()
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "get_Key()");
    return _Key;
}

// private generated void set_Key(string value) [instance] :11
void ContextBinding::Key(uString* value)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "set_Key(string)");
    _Key = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public class DataBinding<T> :188
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Not handled: OnAdd");
    ::STRINGS[18] = uString::Const("Not handled: OnFailed");
    ::STRINGS[19] = uString::Const("Not handled: OnInsertAt");
    ::STRINGS[20] = uString::Const("Not handled: OnNewAll");
    ::STRINGS[21] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[22] = uString::Const("Not handled: OnRemoveAt");
    ::STRINGS[23] = uString::Const("Warning: Data binding failed. The string '");
    ::STRINGS[24] = uString::Const("' is not a valid ");
    ::STRINGS[25] = uString::Const(" value");
    ::STRINGS[26] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno");
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[31] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[32] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[33] = ::g::Fuse::INameListener_typeof();
    ::TYPES[34] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[35] = ::g::Fuse::Scripting::Marshal_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[36] = ::g::Uno::Type_typeof();
    ::TYPES[37] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetPrecalc(
        ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DataBinding_type, interface2));
    type->SetFields(3,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _currentValue), 0,
        ::g::Fuse::Reactive::ObservableSubscription_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)DataBinding__New1_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)DataBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), 0));
}

DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding`1", options);
    type->SetBase(::g::Fuse::Reactive::ContextBinding_typeof());
    type->fp_build_ = DataBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ContextBinding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnUnrooted_fn;
    type->fp_PushValue = DataBinding__PushValue_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))DataBinding__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public DataBinding(Uno.UX.Property<T> target, string key) :194
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_2(target, key);
}

// private static bool Acceptor(object obj) :356
void DataBinding__Acceptor_fn(uType* __type, uObject* obj, bool* __retval)
{
    *__retval = DataBinding::Acceptor(__type, obj);
}

// private void Fuse.INameListener.OnNameChanged(Fuse.Node obj, Uno.UX.Selector name) :255
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.INameListener.OnNameChanged(Fuse.Node,Uno.UX.Selector)");
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :204
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[17/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :214
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnFailed(string)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :230
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array values) :219
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, ::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array)");

    if (uPtr(values)->Length() > 0)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[20/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :209
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[21/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :225
void DataBinding__FuseReactiveIObserverOnRemove_fn(DataBinding* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[22/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :199
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->PushValue(newValue);
}

// public DataBinding New(Uno.UX.Property<T> target, string key) :194
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataBinding** __retval)
{
    *__retval = DataBinding::New1(__type, target, key);
}

// internal override sealed void NewValue(object value) :270
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "NewValue(object)");

    if (uIs(value, __types[0]))
        __this->PushValue(value);
    else if (uIs(value, ::TYPES[30/*Fuse.Reactive.Observable*/]))
    {
        if (__this->_subscription != NULL)
        {
            uPtr(__this->_subscription)->Dispose();
            __this->_subscription = NULL;
        }

        ::g::Fuse::Reactive::Observable* obs = uCast< ::g::Fuse::Reactive::Observable*>(value, ::TYPES[30/*Fuse.Reactive.Observable*/]);
        __this->_subscription = uPtr(obs)->Subscribe((uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :235
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnRooted()");
    ::g::Fuse::Reactive::ContextBinding__OnRooted_fn(__this);

    if (uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :241
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnUnrooted()");
    ::g::Fuse::NameRegistry::RemoveListener((uObject*)__this);

    if (uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    ::g::Fuse::Reactive::ContextBinding__OnUnrooted_fn(__this);
}

// protected virtual void PushValue(object newValue) :299
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "PushValue(object)");

    if (__this->Parent() == NULL)
        return;

    __this->_currentValue = newValue;

    if (__this->TryPushAsValue(newValue))
        return;
    else if (__this->TryPushAsName(newValue))
        return;
    else
        __this->TryPushAsMarshalledValue(newValue);
}

// public generated Uno.UX.Property<T> get_Target() :191
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :191
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private static Uno.UX.Selector ToSelector(object newValue) :349
void DataBinding__ToSelector_fn(uType* __type, uObject* newValue, ::g::Uno::UX::Selector* __retval)
{
    *__retval = DataBinding::ToSelector(__type, newValue);
}

// private void TryPushAsMarshalledValue(object newValue) :361
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->TryPushAsMarshalledValue(newValue);
}

// private bool TryPushAsName(object newValue) :322
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsName(newValue);
}

// private bool TryPushAsValue(object newValue) :310
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsValue(newValue);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :260
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((__this->_subscription != NULL) && ::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
        uPtr(__this->_subscription)->SetExclusive(uBoxPtr(__types[0], (uPtr(__this->Target())->Get_ex(&ret3), ret3)));
}

// public DataBinding(Uno.UX.Property<T> target, string key) [instance] :194
void DataBinding::ctor_2(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_1(key);
    Target(target);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :191
::g::Uno::UX::Property1* DataBinding::Target()
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :191
void DataBinding::Target(::g::Uno::UX::Property1* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// private void TryPushAsMarshalledValue(object newValue) [instance] :361
void DataBinding::TryPushAsMarshalledValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
        __type->GetBase(DataBinding_typeof())->Precalced(0/*Fuse.Scripting.Marshal.TryConvertTo<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "TryPushAsMarshalledValue(object)");
    uT value(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret2;

    if ((::g::Fuse::Scripting::Marshal__TryConvertTo1_fn(__types[1], newValue, &value, &ret2), ret2))
        uPtr(Target())->Set_ex(value, (uObject*)this);
    else
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[23/*"Warning: Da...*/], newValue), ::STRINGS[24/*"' is not a ...*/]), __types[0]), ::STRINGS[25/*" value"*/]), 1, ::STRINGS[26/*"/usr/local/...*/], 370);
}

// private bool TryPushAsName(object newValue) [instance] :322
bool DataBinding::TryPushAsName(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "TryPushAsName(object)");
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(__type, newValue);

    if (!name.IsNull())
    {
        ::g::Fuse::NameRegistry::AddListener(name, (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[37/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, NULL, __type));

        if (k != NULL)
        {
            uPtr(Target())->Set_ex(uUnboxAny(__types[0], k), (uObject*)this);
            return true;
        }

        if (::g::Uno::Type::IsClass(uPtr(__types[0])) && !::g::Fuse::Scripting::Marshal::CanConvertClass(__types[0]))
            return true;
    }

    return false;
}

// private bool TryPushAsValue(object newValue) [instance] :310
bool DataBinding::TryPushAsValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "TryPushAsValue(object)");

    if (uIs(newValue, __types[0]))
    {
        ::g::Fuse::NameRegistry::RemoveListener((uObject*)this);
        uPtr(Target())->Set_ex(uUnboxAny(__types[0], newValue), (uObject*)this);
        return true;
    }

    return false;
}

// private static bool Acceptor(object obj) [static] :356
bool DataBinding::Acceptor(uType* __type, uObject* obj)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Acceptor(object)");
    return uIs(obj, __types[0]);
}

// public DataBinding New(Uno.UX.Property<T> target, string key) [static] :194
DataBinding* DataBinding::New1(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    DataBinding* obj1 = (DataBinding*)uNew(__type);
    obj1->ctor_2(target, key);
    return obj1;
}

// private static Uno.UX.Selector ToSelector(object newValue) [static] :349
::g::Uno::UX::Selector DataBinding::ToSelector(uType* __type, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "ToSelector(object)");
    return uIs(newValue, ::TYPES[34/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[34/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[17/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[17/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class DataToResourceBinding<T> :377
// {
static void DataToResourceBinding_build(uType* type)
{
    ::TYPES[38] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[32] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(6,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::DataToResourceBinding, _key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)DataToResourceBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DataToResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.DataToResourceBinding`1", options);
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0)));
    type->fp_build_ = DataToResourceBinding_build;
    type->fp_PushValue = (void(*)(::g::Fuse::Reactive::DataBinding*, uObject*))DataToResourceBinding__PushValue_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) :380
void DataToResourceBinding__ctor_3_fn(DataToResourceBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_3(target, key);
}

// private bool AcceptFunction(object obj) :412
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->AcceptFunction(obj);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) :380
void DataToResourceBinding__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataToResourceBinding** __retval)
{
    *__retval = DataToResourceBinding::New2(__type, target, key);
}

// private void OnChanged() :401
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this)
{
    __this->OnChanged();
}

// protected override sealed void PushValue(object value) :387
void DataToResourceBinding__PushValue_fn(DataToResourceBinding* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "PushValue(object)");
    uString* key = uAs<uString*>(value, ::TYPES[17/*string*/]);

    if (::g::Uno::String::op_Equality(key, NULL))
        return;

    if (::g::Uno::String::op_Inequality(__this->_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));

    __this->_key = key;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) [instance] :380
void DataToResourceBinding::ctor_3(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_2(target, key);
}

// private bool AcceptFunction(object obj) [instance] :412
bool DataToResourceBinding::AcceptFunction(uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "AcceptFunction(object)");
    return uIs(obj, __types[0]);
}

// private void OnChanged() [instance] :401
void DataToResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "OnChanged()");

    if (::g::Uno::String::op_Equality(_key, NULL))
        return;

    if (Parent() == NULL)
        return;

    uObject* v;

    if (uPtr(Parent())->TryGetResource(_key, uDelegate::New(::TYPES[38/*Uno.Predicate<object>*/], (void*)DataToResourceBinding__AcceptFunction_fn, this), &v))
        uPtr((::g::Uno::UX::Property1*)Target())->Set_ex(uUnboxAny(__types[0], v), (uObject*)this);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) [static] :380
DataToResourceBinding* DataToResourceBinding::New2(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    DataToResourceBinding* obj1 = (DataToResourceBinding*)uNew(__type);
    obj1->ctor_3(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno
// ----------------------------------------------------------------

// internal static class DebugLog :58
// {
static void DebugLog_build(uType* type)
{
    ::STRINGS[27] = uString::Const("debug_log");
    ::STRINGS[5] = uString::Const("null");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/FuseJS/$.uno");
    ::TYPES[7] = uObject_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :60
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :65
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :60
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Init(Fuse.Scripting.Context)");
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[27/*"debug_log"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :65
uObject* DebugLog::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[5/*"null"*/], 1, ::STRINGS[4/*"/usr/local/...*/], 69);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Dispatcher :429
// {
static void Dispatcher_build(uType* type)
{
    ::STRINGS[28] = uString::Const("Attempting to dispatch without a JavaScript Worker. You need at least one <JavaScript> section.");
    ::STRINGS[26] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno");
    ::STRINGS[29] = uString::Const("Run");
    ::STRINGS[30] = uString::Const("JavaScript dispatching error");
    ::STRINGS[31] = uString::Const("FrameCallback error");
    ::TYPES[39] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[40] = ::g::Fuse::Scripting::ScriptException_typeof();
    ::TYPES[41] = ::g::Uno::Exception_typeof();
    ::TYPES[18] = ::g::Uno::Delegate_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(Dispatcher_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::Dispatcher, _actions), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher, _dispatcherThread), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher, _eachFrameCallback), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher, _hasPauseLock), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher, _isUpdating), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher, _isUpdatingMutex), 0,
        Dispatcher_typeof(), (uintptr_t)&::g::Fuse::Reactive::Dispatcher::_uiThread_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Invoke", NULL, (void*)Dispatcher__Invoke_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction(".ctor", NULL, (void*)Dispatcher__New1_fn, 0, true, Dispatcher_typeof(), 0),
        new uFunction("get_UIThread", NULL, (void*)Dispatcher__get_UIThread_fn, 0, true, Dispatcher_typeof(), 0));
}

Dispatcher_type* Dispatcher_typeof()
{
    static uSStrong<Dispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Dispatcher);
    options.TypeSize = sizeof(Dispatcher_type);
    type = (Dispatcher_type*)uClassType::New("Fuse.Reactive.Dispatcher", options);
    type->fp_build_ = Dispatcher_build;
    type->fp_ctor_ = (void*)Dispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))Dispatcher__Invoke_fn;
    return type;
}

// public Dispatcher() :440
void Dispatcher__ctor__fn(Dispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :534
void Dispatcher__Invoke_fn(Dispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// private bool get_IsUpdating() :449
void Dispatcher__get_IsUpdating_fn(Dispatcher* __this, bool* __retval)
{
    *__retval = __this->IsUpdating();
}

// private void set_IsUpdating(bool value) :456
void Dispatcher__set_IsUpdating_fn(Dispatcher* __this, bool* value)
{
    __this->IsUpdating(*value);
}

// public Dispatcher New() :440
void Dispatcher__New1_fn(Dispatcher** __retval)
{
    *__retval = Dispatcher::New1();
}

// private void Run() :466
void Dispatcher__Run_fn(Dispatcher* __this)
{
    __this->Run();
}

// public static Fuse.Reactive.Dispatcher get_UIThread() :542
void Dispatcher__get_UIThread_fn(Dispatcher** __retval)
{
    *__retval = Dispatcher::UIThread();
}

uSStrong<Dispatcher*> Dispatcher::_uiThread_;

// public Dispatcher() [instance] :440
void Dispatcher::ctor_()
{
    uStackFrame __("Fuse.Reactive.Dispatcher", ".ctor()");
    _actions = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[39/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _isUpdatingMutex = ::g::Uno::Threading::Mutex::Create();
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Dispatcher__Run_fn, this), 0);
}

// public void Invoke(Uno.Action action) [instance] :534
void Dispatcher::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "Invoke(Uno.Action)");
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_actions), action);
}

// private bool get_IsUpdating() [instance] :449
bool Dispatcher::IsUpdating()
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "get_IsUpdating()");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_isUpdatingMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[29/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return _isUpdating;
    }
}

// private void set_IsUpdating(bool value) [instance] :456
void Dispatcher::IsUpdating(bool value)
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "set_IsUpdating(bool)");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_isUpdatingMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[29/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        _isUpdating = value;
    }
}

// private void Run() [instance] :466
void Dispatcher::Run()
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "Run()");
    bool ret3;
    bool ret4;

    if (_dispatcherThread == NULL)
        _dispatcherThread = ::g::Uno::Threading::Thread::CurrentThread();

    if (uPtr(_actions)->Count() == 0)
        return;

    if (::g::Fuse::Reactive::JavaScript::Worker() == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[28/*"Attempting ...*/], this, ::STRINGS[26/*"/usr/local/...*/], 476, ::STRINGS[29/*"Run"*/]);
        uDelegate* a;

        while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_actions), (void**)(&a), &ret3), ret3))
            ;

        return;
    }

    if (uPtr(::g::Fuse::Reactive::JavaScript::Worker())->IsJavaScriptVMReady() && uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->CanExecuteJavaScript)->TryLock())
    {
        {
            const auto __finally_fun = [&]()
            {
                IsUpdating(false);
                uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->CanExecuteJavaScript)->Unlock();

                if (_hasPauseLock)
                {
                    uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Pause)->Unlock();
                    _hasPauseLock = false;
                }
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            IsUpdating(true);
            uDelegate* a1;

            while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_actions), (void**)(&a1), &ret4), ret4))

                try
                {
                    uPtr(a1)->InvokeVoid();
                }
                catch (const uThrowable& __t)
                {
                    if (uIs(__t.Exception, ::TYPES[40/*Fuse.Scripting.ScriptException*/]))
                    {
                        ::g::Fuse::Scripting::ScriptException* e = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
                        ::g::Fuse::Diagnostics::UnknownException(::STRINGS[30/*"JavaScript ...*/], e, this, ::STRINGS[26/*"/usr/local/...*/], 497, ::STRINGS[29/*"Run"*/]);
                    }
                    else throw __t;
                }

            if (::g::Uno::Delegate::op_Inequality(_eachFrameCallback, NULL))
            {
                try
                {
                    uPtr(_eachFrameCallback)->InvokeVoid();
                }
                catch (const uThrowable& __t)
                {
                    if (uIs(__t.Exception, ::TYPES[40/*Fuse.Scripting.ScriptException*/]))
                    {
                        ::g::Fuse::Scripting::ScriptException* e1 = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
                        ::g::Fuse::Diagnostics::UnknownException(::STRINGS[31/*"FrameCallba...*/], e1, this, ::STRINGS[26/*"/usr/local/...*/], 509, ::STRINGS[29/*"Run"*/]);
                        _eachFrameCallback = NULL;
                    }
                    else throw __t;
                }
            }
        }
    }
    else if (!_hasPauseLock)
    {
        uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Pause)->Lock();
        _hasPauseLock = true;
    }
}

// public Dispatcher New() [static] :440
Dispatcher* Dispatcher::New1()
{
    Dispatcher* obj2 = (Dispatcher*)uNew(Dispatcher_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Fuse.Reactive.Dispatcher get_UIThread() [static] :542
Dispatcher* Dispatcher::UIThread()
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "get_UIThread()");
    Dispatcher* ind1 = Dispatcher::_uiThread_;
    return (ind1 != NULL) ? ind1 : (Dispatcher*)(Dispatcher::_uiThread_ = Dispatcher::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Each :561
// {
// static Each() :561
static void Each__cctor_1_fn(uType* __type)
{
    Each::_eachHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Each_build(uType* type)
{
    ::TYPES[42] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()));
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[43] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[7] = uObject_typeof();
    ::TYPES[44] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[46] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[47] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[48] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[49] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[50] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[31] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[51] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()));
    ::TYPES[11] = uObject_typeof()->Array();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[13] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[14] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Each_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Each_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Each_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Each_type, interface3),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Each_type, interface4),
        ::g::Fuse::ITemplateObserver_typeof(), offsetof(Each_type, interface5));
    type->SetFields(13,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Each, _count), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Each, _items), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Each, _matchKey), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof())), offsetof(::g::Fuse::Reactive::Each, _nodes), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::Each, _subscription), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), offsetof(::g::Fuse::Reactive::Each, _templates), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Each, _TemplateKey), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Reactive::Each, _TemplateSource), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Reactive::Each::_eachHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Count", NULL, (void*)Each__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Count", NULL, (void*)Each__set_Count_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetItems", NULL, (void*)Each__GetItems_fn, 0, true, uObject_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetMatchKey", NULL, (void*)Each__GetMatchKey_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Items", NULL, (void*)Each__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)Each__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_MatchKey", NULL, (void*)Each__get_MatchKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_MatchKey", NULL, (void*)Each__set_MatchKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Each__New2_fn, 0, true, Each_typeof(), 0),
        new uFunction("SetItems", NULL, (void*)Each__SetItems_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), uObject_typeof()),
        new uFunction("SetMatchKey", NULL, (void*)Each__SetMatchKey_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_TemplateKey", NULL, (void*)Each__get_TemplateKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_TemplateKey", NULL, (void*)Each__set_TemplateKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Templates", NULL, (void*)Each__get_Templates_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), 0),
        new uFunction("get_TemplateSource", NULL, (void*)Each__get_TemplateSource_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_TemplateSource", NULL, (void*)Each__set_TemplateSource_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

Each_type* Each_typeof()
{
    static uSStrong<Each_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(Each_type);
    type = (Each_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = Each_build;
    type->fp_ctor_ = (void*)Each__New2_fn;
    type->fp_cctor_ = Each__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Each__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Each__OnUnrooted_fn;
    type->interface5.fp_OnTemplatesChangedWileRooted = (void(*)(uObject*))Each__FuseITemplateObserverOnTemplatesChangedWileRooted_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))Each__FuseReactiveIObserverOnSet_fn;
    type->interface4.fp_OnFailed = (void(*)(uObject*, uString*))Each__FuseReactiveIObserverOnFailed_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))Each__FuseReactiveIObserverOnAdd_fn;
    type->interface4.fp_OnRemove = (void(*)(uObject*, uObject*, int*))Each__FuseReactiveIObserverOnRemove_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Each__FuseReactiveIObserverOnInsertAt_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Each__FuseReactiveIObserverOnNewAt_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))Each__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Each() :618
void Each__ctor_3_fn(Each* __this)
{
    __this->ctor_3();
}

// private Each(Uno.Collections.IList<Uno.UX.Template> templates) :613
void Each__ctor_4_fn(Each* __this, uObject* templates)
{
    __this->ctor_4(templates);
}

// private void AddNew(object dataContext) :939
void Each__AddNew_fn(Each* __this, uObject* dataContext)
{
    __this->AddNew(dataContext);
}

// private void AddTemplate(Uno.UX.Template f, object dataContext, Uno.Collections.List<Fuse.Node> newElements) :1000
void Each__AddTemplate_fn(Each* __this, ::g::Uno::UX::Template* f, uObject* dataContext, ::g::Uno::Collections::List* newElements)
{
    __this->AddTemplate(f, dataContext, newElements);
}

// public int get_Count() :732
void Each__get_Count_fn(Each* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void set_Count(int value) :736
void Each__set_Count_fn(Each* __this, int* value)
{
    __this->Count(*value);
}

// private void Fuse.ITemplateObserver.OnTemplatesChangedWileRooted() :683
void Each__FuseITemplateObserverOnTemplatesChangedWileRooted_fn(Each* __this)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.ITemplateObserver.OnTemplatesChangedWileRooted()");
    __this->Repopulate();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :821
void Each__FuseReactiveIObserverOnAdd_fn(Each* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnAdd(object)");

    if (!__this->IsRootingCompleted())
        return;

    __this->AddNew(addedValue);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :814
void Each__FuseReactiveIObserverOnFailed_fn(Each* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnFailed(string)");

    if (!__this->IsRootingCompleted())
        return;

    __this->RemoveAll();
    __this->SetFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :839
void Each__FuseReactiveIObserverOnInsertAt_fn(Each* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (!__this->IsRootingCompleted())
        return;

    __this->InsertNew(index_, value);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array values) :858
void Each__FuseReactiveIObserverOnNewAll_fn(Each* __this, ::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array)");

    if (!__this->IsRootingCompleted())
        return;

    __this->RemoveAll();

    for (int i = 0; i < uPtr(values)->Length(); i++)
        __this->AddNew(::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(values)->Item(i)));

    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :847
void Each__FuseReactiveIObserverOnNewAt_fn(Each* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret13;
    ::g::Uno::Collections::List* ret14;
    int index_ = *index;

    if (!__this->IsRootingCompleted())
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_nodes), uCRef<int>(index_), &ret14), ret14)), &ret13), ret13); enum2.MoveNext(::TYPES[43/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* e = enum2.Current(::TYPES[43/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        uPtr(e)->DataContext(value);
    }

    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :828
void Each__FuseReactiveIObserverOnRemove_fn(Each* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret15;
    ::g::Uno::Collections::List* ret16;
    int index_ = *index;

    if (!__this->IsRootingCompleted())
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_nodes), uCRef<int>(index_), &ret16), ret16)), &ret15), ret15); enum1.MoveNext(::TYPES[43/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* c = enum1.Current(::TYPES[43/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        uPtr(__this->Parent())->BeginRemoveChild(c, NULL);
    }

    uPtr(__this->_nodes)->RemoveAt(index_);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :805
void Each__FuseReactiveIObserverOnSet_fn(Each* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnSet(object)");

    if (!__this->IsRootingCompleted())
        return;

    __this->RemoveAll();
    __this->AddNew(newValue);
    __this->SetValid();
}

// private static Fuse.Reactive.Each GetEach(Fuse.Visual container) :565
void Each__GetEach_fn(::g::Fuse::Visual* container, Each** __retval)
{
    *__retval = Each::GetEach(container);
}

// public static object GetItems(Fuse.Visual container) :593
void Each__GetItems_fn(::g::Fuse::Visual* container, uObject** __retval)
{
    *__retval = Each::GetItems(container);
}

// public static string GetMatchKey(Fuse.Visual container) :608
void Each__GetMatchKey_fn(::g::Fuse::Visual* container, uString** __retval)
{
    *__retval = Each::GetMatchKey(container);
}

// private string GetMatchKey(object dataContext) :926
void Each__GetMatchKey1_fn(Each* __this, uObject* dataContext, uString** __retval)
{
    *__retval = __this->GetMatchKey1(dataContext);
}

// private void InsertNew(int index, object dataContext) :944
void Each__InsertNew_fn(Each* __this, int* index, uObject* dataContext)
{
    __this->InsertNew(*index, dataContext);
}

// private bool IsUnchanged(object[] newDcs) :891
void Each__IsUnchanged_fn(Each* __this, uArray* newDcs, bool* __retval)
{
    *__retval = __this->IsUnchanged(newDcs);
}

// public object get_Items() :718
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :719
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public string get_MatchKey() :915
void Each__get_MatchKey_fn(Each* __this, uString** __retval)
{
    *__retval = __this->MatchKey();
}

// public void set_MatchKey(string value) :916
void Each__set_MatchKey_fn(Each* __this, uString* value)
{
    __this->MatchKey(value);
}

// public Each New() :618
void Each__New2_fn(Each** __retval)
{
    *__retval = Each::New2();
}

// private Each New(Uno.Collections.IList<Uno.UX.Template> templates) :613
void Each__New3_fn(uObject* templates, Each** __retval)
{
    *__retval = Each::New3(templates);
}

// private void OnItemsChanged() :746
void Each__OnItemsChanged_fn(Each* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :694
void Each__OnRooted_fn(Each* __this)
{
    uStackFrame __("Fuse.Reactive.Each", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnItemsChanged();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) :688
void Each__OnTemplatesChanged_fn(Each* __this, ::g::Uno::UX::Template* factory)
{
    __this->OnTemplatesChanged(factory);
}

// protected override sealed void OnUnrooted() :700
void Each__OnUnrooted_fn(Each* __this)
{
    uStackFrame __("Fuse.Reactive.Each", "OnUnrooted()");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->RemoveAll();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveAll() :882
void Each__RemoveAll_fn(Each* __this)
{
    __this->RemoveAll();
}

// private void ReplaceAll(object[] dcs) :872
void Each__ReplaceAll_fn(Each* __this, uArray* dcs)
{
    __this->ReplaceAll(dcs);
}

// private void Repopulate() :764
void Each__Repopulate_fn(Each* __this)
{
    __this->Repopulate();
}

// private void SetFailed(string message) :797
void Each__SetFailed_fn(Each* __this, uString* message)
{
    __this->SetFailed(message);
}

// public static void SetItems(Fuse.Visual container, object items) :587
void Each__SetItems_fn(::g::Fuse::Visual* container, uObject* items)
{
    Each::SetItems(container, items);
}

// public static void SetMatchKey(Fuse.Visual container, string key) :602
void Each__SetMatchKey_fn(::g::Fuse::Visual* container, uString* key)
{
    Each::SetMatchKey(container, key);
}

// private void SetValid() :791
void Each__SetValid_fn(Each* __this)
{
    __this->SetValid();
}

// public generated string get_TemplateKey() :680
void Each__get_TemplateKey_fn(Each* __this, uString** __retval)
{
    *__retval = __this->TemplateKey();
}

// public generated void set_TemplateKey(string value) :680
void Each__set_TemplateKey_fn(Each* __this, uString* value)
{
    __this->TemplateKey(value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :625
void Each__get_Templates_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public generated Fuse.Visual get_TemplateSource() :669
void Each__get_TemplateSource_fn(Each* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->TemplateSource();
}

// public generated void set_TemplateSource(Fuse.Visual value) :669
void Each__set_TemplateSource_fn(Each* __this, ::g::Fuse::Visual* value)
{
    __this->TemplateSource(value);
}

uSStrong< ::g::Fuse::PropertyHandle*> Each::_eachHandle_;

// public Each() [instance] :618
void Each::ctor_3()
{
    uStackFrame __("Fuse.Reactive.Each", ".ctor()");
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[42/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));
    ctor_2();
}

// private Each(Uno.Collections.IList<Uno.UX.Template> templates) [instance] :613
void Each::ctor_4(uObject* templates)
{
    uStackFrame __("Fuse.Reactive.Each", ".ctor(Uno.Collections.IList<Uno.UX.Template>)");
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[42/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));
    ctor_2();
    _templates = templates;
}

// private void AddNew(object dataContext) [instance] :939
void Each::AddNew(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "AddNew(object)");
    InsertNew(uPtr(_nodes)->Count(), dataContext);
}

// private void AddTemplate(Uno.UX.Template f, object dataContext, Uno.Collections.List<Fuse.Node> newElements) [instance] :1000
void Each::AddTemplate(::g::Uno::UX::Template* f, uObject* dataContext, ::g::Uno::Collections::List* newElements)
{
    uStackFrame __("Fuse.Reactive.Each", "AddTemplate(Uno.UX.Template,object,Uno.Collections.List<Fuse.Node>)");
    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[3/*Fuse.Node*/]);

    if (elm != NULL)
    {
        if (dataContext != NULL)
            uPtr(elm)->DataContext(dataContext);

        ::g::Uno::Collections::List__Add_fn(uPtr(newElements), elm);
    }
}

// public int get_Count() [instance] :732
int Each::Count()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Count()");
    return _count;
}

// public void set_Count(int value) [instance] :736
void Each::Count(int value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Count(int)");

    if (_count != value)
    {
        _count = value;
        OnItemsChanged();
    }
}

// private string GetMatchKey(object dataContext) [instance] :926
uString* Each::GetMatchKey1(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "GetMatchKey(object)");
    ::g::Fuse::Scripting::Object* so = uAs< ::g::Fuse::Scripting::Object*>(dataContext, ::TYPES[26/*Fuse.Scripting.Object*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(_matchKey, NULL))
    {
        if (uPtr(so)->ContainsKey(_matchKey))
            return uAs<uString*>(uPtr(so)->Item(_matchKey), ::TYPES[17/*string*/]);
    }

    return NULL;
}

// private void InsertNew(int index, object dataContext) [instance] :944
void Each::InsertNew(int index, uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "InsertNew(int,object)");
    ::g::Uno::UX::Template* ret17;
    int ret18;
    ::g::Uno::Collections::List* ret19;
    ::g::Fuse::Node* ret20;
    ::g::Uno::Collections::List* newElements = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Node>*/]);
    bool anyMatched = false;
    ::g::Uno::UX::Template* defaultTemplate = NULL;
    uString* key = GetMatchKey1(dataContext);

    if ((TemplateSource() != NULL) && ::g::Uno::String::op_Inequality(TemplateKey(), NULL))
    {
        ::g::Uno::UX::Template* t = uPtr(TemplateSource())->FindTemplate(TemplateKey());

        if (t != NULL)
        {
            anyMatched = true;
            AddTemplate(t, dataContext, newElements);
        }
    }

    if (!anyMatched)

        for (uObject* enum9 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Templates()), ::TYPES[45/*Uno.Collections.IEnumerable<Uno.UX.Template>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum9), ::TYPES[46/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum9), ::TYPES[47/*Uno.Collections.IEnumerator<Uno.UX.Template>*/]), &ret17), ret17);

            if (uPtr(f)->IsDefault())
                defaultTemplate = f;

            if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Inequality(uPtr(f)->Key(), key))
                continue;

            anyMatched = true;
            AddTemplate(f, dataContext, newElements);
        }

    if (!anyMatched && (defaultTemplate != NULL))
        AddTemplate(defaultTemplate, dataContext, newElements);

    int childIndex = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[48/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), this, &ret18), ret18) + 1;

    for (int i = 0; i < index; i++)
        childIndex = childIndex + uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(i), &ret19), ret19))->Count();

    for (int i1 = 0; i1 < newElements->Count(); ++i1)
        ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[50/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(childIndex + i1), (::g::Uno::Collections::List__get_Item_fn(newElements, uCRef<int>(i1), &ret20), ret20));

    ::g::Uno::Collections::List__Insert_fn(uPtr(_nodes), uCRef<int>(index), newElements);
}

// private bool IsUnchanged(object[] newDcs) [instance] :891
bool Each::IsUnchanged(uArray* newDcs)
{
    uStackFrame __("Fuse.Reactive.Each", "IsUnchanged(object[])");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret21;
    ::g::Uno::Collections::List* ret22;

    if (newDcs == NULL)
    {
        if (uPtr(_nodes)->Count() == 0)
            return true;
        else
            return false;
    }

    if (uPtr(newDcs)->Length() != uPtr(_nodes)->Count())
        return false;

    for (int i = 0; i < uPtr(newDcs)->Length(); i++)

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(i), &ret22), ret22)), &ret21), ret21); enum8.MoveNext(::TYPES[43/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
        {
            ::g::Fuse::Node* e = enum8.Current(::TYPES[43/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

            if (!::g::Uno::Object::Equals(uPtr(uPtr(newDcs)->Strong<uObject*>(i)), uPtr(e)->DataContext()))
                return false;
        }

    return true;
}

// public object get_Items() [instance] :718
uObject* Each::Items()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :719
void Each::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public string get_MatchKey() [instance] :915
uString* Each::MatchKey()
{
    uStackFrame __("Fuse.Reactive.Each", "get_MatchKey()");
    return _matchKey;
}

// public void set_MatchKey(string value) [instance] :916
void Each::MatchKey(uString* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_MatchKey(string)");

    if (::g::Uno::String::op_Inequality(_matchKey, value))
    {
        _matchKey = value;
        OnItemsChanged();
    }
}

// private void OnItemsChanged() [instance] :746
void Each::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.Each", "OnItemsChanged()");

    if (!IsRootingStarted())
        return;

    ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[30/*Fuse.Reactive.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[29/*Uno.IDisposable*/]));

        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else
        Repopulate();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) [instance] :688
void Each::OnTemplatesChanged(::g::Uno::UX::Template* factory)
{
    uStackFrame __("Fuse.Reactive.Each", "OnTemplatesChanged(Uno.UX.Template)");

    if (!IsRootingCompleted())
        return;

    Repopulate();
}

// private void RemoveAll() [instance] :882
void Each::RemoveAll()
{
    uStackFrame __("Fuse.Reactive.Each", "RemoveAll()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret23;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret24;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_nodes), &ret23), ret23); enum6.MoveNext(::TYPES[51/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* es = enum6.Current(::TYPES[51/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>.Enumerator*/]);

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(es), &ret24), ret24); enum7.MoveNext(::TYPES[43/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
        {
            ::g::Fuse::Node* e = enum7.Current(::TYPES[43/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
            uPtr(Parent())->BeginRemoveChild(e, NULL);
        }
    }

    uPtr(_nodes)->Clear();
}

// private void ReplaceAll(object[] dcs) [instance] :872
void Each::ReplaceAll(uArray* dcs)
{
    uStackFrame __("Fuse.Reactive.Each", "ReplaceAll(object[])");
    uArray* array3;
    int index4;
    int length5;

    if (IsUnchanged(dcs))
        return;

    RemoveAll();

    if (dcs != NULL)

        for (array3 = dcs, index4 = 0, length5 = uPtr(array3)->Length(); index4 < length5; ++index4)
        {
            uObject* d = uPtr(array3)->Strong<uObject*>(index4);
            AddNew(d);
        }
}

// private void Repopulate() [instance] :764
void Each::Repopulate()
{
    uStackFrame __("Fuse.Reactive.Each", "Repopulate()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[11/*object[]*/]);
    ::g::Fuse::Scripting::Array* a = uAs< ::g::Fuse::Scripting::Array*>(_items, ::TYPES[27/*Fuse.Scripting.Array*/]);

    if (e != NULL)
    {
        ReplaceAll(e);
        return;
    }
    else if (a != NULL)
    {
        RemoveAll();

        for (int i = 0; i < uPtr(a)->Length(); i++)
            AddNew(::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(a)->Item(i)));
    }
    else
    {
        RemoveAll();

        for (int i1 = 0; i1 < Count(); i1++)
            AddNew(NULL);
    }
}

// private void SetFailed(string message) [instance] :797
void Each::SetFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.Each", "SetFailed(string)");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(Parent(), true, message);
}

// private void SetValid() [instance] :791
void Each::SetValid()
{
    uStackFrame __("Fuse.Reactive.Each", "SetValid()");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(Parent(), false, NULL);
}

// public generated string get_TemplateKey() [instance] :680
uString* Each::TemplateKey()
{
    uStackFrame __("Fuse.Reactive.Each", "get_TemplateKey()");
    return _TemplateKey;
}

// public generated void set_TemplateKey(string value) [instance] :680
void Each::TemplateKey(uString* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_TemplateKey(string)");
    _TemplateKey = value;
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :625
uObject* Each::Templates()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Templates()");
    uObject* ind10 = _templates;
    return (ind10 != NULL) ? ind10 : (uObject*)(_templates = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[14/*Uno.Collections.ObservableList<Uno.UX.Template>*/], uDelegate::New(::TYPES[15/*Uno.Action<Uno.UX.Template>*/], (void*)Each__OnTemplatesChanged_fn, this), uDelegate::New(::TYPES[15/*Uno.Action<Uno.UX.Template>*/], (void*)Each__OnTemplatesChanged_fn, this))));
}

// public generated Fuse.Visual get_TemplateSource() [instance] :669
::g::Fuse::Visual* Each::TemplateSource()
{
    uStackFrame __("Fuse.Reactive.Each", "get_TemplateSource()");
    return _TemplateSource;
}

// public generated void set_TemplateSource(Fuse.Visual value) [instance] :669
void Each::TemplateSource(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_TemplateSource(Fuse.Visual)");
    _TemplateSource = value;
}

// private static Fuse.Reactive.Each GetEach(Fuse.Visual container) [static] :565
Each* Each::GetEach(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetEach(Fuse.Visual)");
    Each_typeof()->Init();
    Each* each = uAs<Each*>(uPtr(uPtr(container)->Properties())->Get(Each::_eachHandle()), Each_typeof());

    if (each == NULL)
    {
        each = Each::New3(uPtr(container)->Templates());
        uPtr(container->Properties())->Set(Each::_eachHandle(), each);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(container->Children()), ::TYPES[44/*Uno.Collections.ICollection<Fuse.Node>*/]), each);
    }

    return each;
}

// public static object GetItems(Fuse.Visual container) [static] :593
uObject* Each::GetItems(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetItems(Fuse.Visual)");
    Each_typeof()->Init();
    return uPtr(Each::GetEach(container))->Items();
}

// public static string GetMatchKey(Fuse.Visual container) [static] :608
uString* Each::GetMatchKey(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetMatchKey(Fuse.Visual)");
    Each_typeof()->Init();
    return uPtr(Each::GetEach(container))->MatchKey();
}

// public Each New() [static] :618
Each* Each::New2()
{
    Each* obj12 = (Each*)uNew(Each_typeof());
    obj12->ctor_3();
    return obj12;
}

// private Each New(Uno.Collections.IList<Uno.UX.Template> templates) [static] :613
Each* Each::New3(uObject* templates)
{
    Each* obj11 = (Each*)uNew(Each_typeof());
    obj11->ctor_4(templates);
    return obj11;
}

// public static void SetItems(Fuse.Visual container, object items) [static] :587
void Each::SetItems(::g::Fuse::Visual* container, uObject* items)
{
    uStackFrame __("Fuse.Reactive.Each", "SetItems(Fuse.Visual,object)");
    Each_typeof()->Init();
    uPtr(Each::GetEach(container))->Items(items);
}

// public static void SetMatchKey(Fuse.Visual container, string key) [static] :602
void Each::SetMatchKey(::g::Fuse::Visual* container, uString* key)
{
    uStackFrame __("Fuse.Reactive.Each", "SetMatchKey(Fuse.Visual,string)");
    Each_typeof()->Init();
    uPtr(Each::GetEach(container))->MatchKey(key);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class EventBinding :1045
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[5] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[52] = ::g::Uno::Collections::List_typeof()->MakeType(EventBinding__CallClosure_typeof());
    type->SetFields(3,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::EventBinding, _function), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(EventBinding__CallClosure_typeof()), offsetof(::g::Fuse::Reactive::EventBinding, _queuedEvents), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)EventBinding__New1_fn, 0, true, EventBinding_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnEvent", NULL, (void*)EventBinding__OnEvent_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::EventArgs_typeof()));
}

::g::Fuse::Reactive::ContextBinding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ContextBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ContextBinding_type);
    type = (::g::Fuse::Reactive::ContextBinding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->SetBase(::g::Fuse::Reactive::ContextBinding_typeof());
    type->fp_build_ = EventBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ContextBinding*, uObject*))EventBinding__NewValue_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))EventBinding__OnUnrooted_fn;
    return type;
}

// public EventBinding(string key) :1048
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key)
{
    __this->ctor_2(key);
}

// public EventBinding New(string key) :1048
void EventBinding__New1_fn(uString* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :1072
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "NewValue(object)");
    __this->_function = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[25/*Fuse.Scripting.Function*/]);
    __this->ProcessQueuedEvents();
}

// public void OnEvent(object sender, Uno.EventArgs args) :1148
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// protected override sealed void OnUnrooted() :1078
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnUnrooted()");
    ::g::Fuse::Reactive::ContextBinding__OnUnrooted_fn(__this);
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :1057
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// public EventBinding(string key) [instance] :1048
void EventBinding::ctor_2(uString* key)
{
    uStackFrame __("Fuse.Reactive.EventBinding", ".ctor(string)");
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :1148
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnEvent(object,Uno.EventArgs)");

    if (Parent() == NULL)
        return;

    EventBinding__CallClosure* callClosure = EventBinding__CallClosure::New1(uAs<uObject*>(args, ::TYPES[5/*Fuse.Scripting.IScriptEvent*/]), uAs< ::g::Fuse::Node*>(sender, ::TYPES[3/*Fuse.Node*/]));

    if (_function != NULL)
    {
        uPtr(callClosure)->Function = _function;
        uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EventBinding__CallClosure__Call_fn, callClosure));
    }
    else
    {
        if (_queuedEvents == NULL)
            _queuedEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[52/*Uno.Collections.List<Fuse.Reactive.EventBinding.CallClosure>*/]));

        ::g::Uno::Collections::List__Add_fn(uPtr(_queuedEvents), callClosure);
    }
}

// private void ProcessQueuedEvents() [instance] :1057
void EventBinding::ProcessQueuedEvents()
{
    uStackFrame __("Fuse.Reactive.EventBinding", "ProcessQueuedEvents()");
    EventBinding__CallClosure* ret2;
    EventBinding__CallClosure* ret3;

    if ((_function != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int i = 0; i < uPtr(events)->Count(); i++)
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int>(i), &ret2), ret2))->Function = _function;
            uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EventBinding__CallClosure__Call_fn, uPtr((::g::Uno::Collections::List__get_Item_fn(events, uCRef<int>(i), &ret3), ret3))));
        }
    }
}

// public EventBinding New(string key) [static] :1048
EventBinding* EventBinding::New1(uString* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract interface IObserver :1174
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObserver", 0, 0);
    type->Reflection.SetFunctions(7,
        new uFunction("OnAdd", NULL, NULL, offsetof(IObserver, fp_OnAdd), false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("OnFailed", NULL, NULL, offsetof(IObserver, fp_OnFailed), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnInsertAt", NULL, NULL, offsetof(IObserver, fp_OnInsertAt), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("OnNewAll", NULL, NULL, offsetof(IObserver, fp_OnNewAll), false, uVoid_typeof(), 1, ::g::Fuse::Scripting::Array_typeof()),
        new uFunction("OnNewAt", NULL, NULL, offsetof(IObserver, fp_OnNewAt), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("OnRemove", NULL, NULL, offsetof(IObserver, fp_OnRemove), false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("OnSet", NULL, NULL, offsetof(IObserver, fp_OnSet), false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class JavaScript :1205
// {
// static JavaScript() :1205
static void JavaScript__cctor_1_fn(uType* __type)
{
    JavaScript::_resetHookMutex_ = ::g::Uno::Threading::Mutex::Create();
}

static void JavaScript_build(uType* type)
{
    ::STRINGS[32] = uString::Const("exports");
    ::STRINGS[33] = uString::Const("JavaScript error in ");
    ::STRINGS[34] = uString::Const(" fixed!");
    ::STRINGS[26] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno");
    ::STRINGS[35] = uString::Const("EvaluateModule");
    ::STRINGS[36] = uString::Const(" line ");
    ::STRINGS[37] = uString::Const(". ");
    ::STRINGS[38] = uString::Const("Cannot require() a rooted module");
    ::TYPES[19] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::UX::NameTable_typeof(), uObject_typeof());
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[53] = ::g::Fuse::Scripting::Module_typeof();
    ::TYPES[54] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof());
    ::TYPES[55] = ::g::Uno::UX::Resource_typeof()->MakeMethod(1, ::g::Fuse::Scripting::NativeModule_typeof());
    ::TYPES[46] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[56] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof());
    ::TYPES[57] = ::g::Fuse::Scripting::IScriptObject_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[58] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof());
    ::TYPES[59] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(JavaScript_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface3),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface4));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _evaluatingDataContext), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _moduleResult), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _scriptModule), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_javaScriptCounter_, uFieldFlagsStatic,
        ::g::Uno::Threading::Mutex_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_resetHookMutex_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_worker_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::previousErrorFile_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Code", NULL, (void*)JavaScript__get_Code_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Code", NULL, (void*)JavaScript__set_Code_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_File", NULL, (void*)JavaScript__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)JavaScript__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_FileName", NULL, (void*)JavaScript__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_FileName", NULL, (void*)JavaScript__set_FileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_LineNumber", NULL, (void*)JavaScript__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LineNumber", NULL, (void*)JavaScript__set_LineNumber_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)JavaScript__New2_fn, 0, true, JavaScript_typeof(), 1, ::g::Uno::UX::NameTable_typeof()));
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = JavaScript_build;
    type->fp_cctor_ = JavaScript__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface4.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public JavaScript(Uno.UX.NameTable nameTable) :1214
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_3(nameTable);
}

// public string get_Code() :1364
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :1365
void JavaScript__set_Code_fn(JavaScript* __this, uString* value)
{
    __this->Code(value);
}

// private void DispatchEvaluate() :1284
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private void EvaluateDataContext() :1296
void JavaScript__EvaluateDataContext_fn(JavaScript* __this)
{
    __this->EvaluateDataContext();
}

// private object EvaluateExports() :1305
void JavaScript__EvaluateExports_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->EvaluateExports();
}

// private void EvaluateModule() :1317
void JavaScript__EvaluateModule_fn(JavaScript* __this)
{
    __this->EvaluateModule();
}

// public Uno.UX.FileSource get_File() :1383
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :1384
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :1390
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :1391
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :1272
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Scripting.IModuleProvider.GetModule()");

    if (__this->IsRootingCompleted())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[38/*"Cannot requ...*/]));

    return *__retval = __this->_scriptModule, void();
}

// public int get_LineNumber() :1377
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :1378
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :1214
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New2(nameTable);
}

// protected override sealed void OnRooted() :1246
void JavaScript__OnRooted_fn(JavaScript* __this)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnRooted()");
    JavaScript::_javaScriptCounter()++;
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->DispatchEvaluate();
}

// protected override sealed void OnUnrooted() :1253
void JavaScript__OnUnrooted_fn(JavaScript* __this)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnUnrooted()");
    ::g::Fuse::Scripting::NativeModule* ret5;
    uPtr(__this->Parent())->DataContext(NULL);

    if (__this->_moduleResult != NULL)
    {
        uPtr(__this->_moduleResult)->Dispose();
        __this->_moduleResult = NULL;
    }

    if ((--JavaScript::_javaScriptCounter()) <= 0)

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::UX::Resource::GetGlobalsOfType(::TYPES[55/*Uno.UX.Resource.GetGlobalsOfType<Fuse.Scripting.NativeModule>*/])), ::TYPES[54/*Uno.Collections.IEnumerable<Fuse.Scripting.NativeModule>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[46/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Scripting::NativeModule* nm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[56/*Uno.Collections.IEnumerator<Fuse.Scripting.NativeModule>*/]), &ret5), ret5);
            uPtr(nm)->InternalReset();
        }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal static object Unwrap(object obj, Uno.UX.NameTable rootTable) :1222
void JavaScript__Unwrap_fn(uObject* obj, ::g::Uno::UX::NameTable* rootTable, uObject** __retval)
{
    *__retval = JavaScript::Unwrap(obj, rootTable);
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() :1209
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval)
{
    *__retval = JavaScript::Worker();
}

int JavaScript::_javaScriptCounter_;
uSStrong< ::g::Uno::Threading::Mutex*> JavaScript::_resetHookMutex_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;
uSStrong<uString*> JavaScript::previousErrorFile_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :1214
void JavaScript::ctor_3(::g::Uno::UX::NameTable* nameTable)
{
    uStackFrame __("Fuse.Reactive.JavaScript", ".ctor(Uno.UX.NameTable)");
    ctor_2();

    if (JavaScript::_worker() == NULL)
        JavaScript::_worker() = ::g::Fuse::Reactive::ThreadWorker::New1();

    _scriptModule = ::g::Fuse::Scripting::ScriptModule::New1(nameTable, uDelegate::New(::TYPES[19/*Uno.Func<object, Uno.UX.NameTable, object>*/], (void*)JavaScript__Unwrap_fn));
}

// public string get_Code() [instance] :1364
uString* JavaScript::Code()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Code()");
    return uPtr(_scriptModule)->Code();
}

// public void set_Code(string value) [instance] :1365
void JavaScript::Code(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_Code(string)");

    if (::g::Uno::String::op_Inequality(uPtr(_scriptModule)->Code(), value))
        uPtr(_scriptModule)->Code(value);
}

// private void DispatchEvaluate() [instance] :1284
void JavaScript::DispatchEvaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DispatchEvaluate()");

    if (!IsRootingStarted())
        return;

    if (!_evaluatingDataContext)
    {
        _evaluatingDataContext = true;
        uPtr(::g::Fuse::Reactive::Dispatcher::UIThread())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext_fn, this));
    }
}

// private void EvaluateDataContext() [instance] :1296
void JavaScript::EvaluateDataContext()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateDataContext()");
    _evaluatingDataContext = false;
    uObject* dc = ::g::Fuse::Reactive::ThreadWorker::Wrap(EvaluateExports());

    if (Parent() != NULL)
        uPtr(Parent())->DataContext(dc);
}

// private object EvaluateExports() [instance] :1305
uObject* JavaScript::EvaluateExports()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateExports()");
    EvaluateModule();

    if (_moduleResult != NULL)
        return uPtr(uPtr(_moduleResult)->Object)->Item(::STRINGS[32/*"exports"*/]);

    return NULL;
}

// private void EvaluateModule() [instance] :1317
void JavaScript::EvaluateModule()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateModule()");
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);

    {
        const auto __finally_fun = [&]()
        {
            uPtr(JavaScript::_resetHookMutex())->Unlock();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(JavaScript::_resetHookMutex())->Lock();
        ::g::Fuse::Scripting::ModuleResult* newModuleResult = uPtr(_scriptModule)->Evaluate1(uPtr(JavaScript::_worker())->Context(), globalId);
        uPtr(newModuleResult)->AddDependency(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__DispatchEvaluate_fn, this));

        if (newModuleResult->Error() == NULL)
        {
            _moduleResult = newModuleResult;

            if (::g::Uno::String::op_Equality(JavaScript::previousErrorFile(), ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[23/*int*/], LineNumber()))))
            {
                ::g::Fuse::Diagnostics::UserSuccess(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[33/*"JavaScript ...*/], FileName()), ::STRINGS[34/*" fixed!"*/]), this, ::STRINGS[26/*"/usr/local/...*/], 1333, ::STRINGS[35/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = NULL;
            }
        }
        else
        {
            ::g::Fuse::Scripting::ScriptException* se = uPtr(newModuleResult)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(se)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage()))
            {
                ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[33/*"JavaScript ...*/], uPtr(se)->FileName()), ::STRINGS[36/*" line "*/]), uBox<int>(::TYPES[23/*int*/], uPtr(se)->LineNumber())), ::STRINGS[37/*". "*/]), uPtr(se)->ErrorMessage()), this, ::STRINGS[26/*"/usr/local/...*/], 1344, ::STRINGS[35/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[23/*int*/], LineNumber()));
            }
        }
    }
}

// public Uno.UX.FileSource get_File() [instance] :1383
::g::Uno::UX::FileSource* JavaScript::File()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_File()");
    return uPtr(_scriptModule)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :1384
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_File(Uno.UX.FileSource)");
    uPtr(_scriptModule)->File(value);
}

// public string get_FileName() [instance] :1390
uString* JavaScript::FileName()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_FileName()");
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :1391
void JavaScript::FileName(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_FileName(string)");
    uPtr(_scriptModule)->FileName(value);
}

// public int get_LineNumber() [instance] :1377
int JavaScript::LineNumber()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_LineNumber()");
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :1378
void JavaScript::LineNumber(int value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_LineNumber(int)");
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :1214
JavaScript* JavaScript::New2(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj4 = (JavaScript*)uNew(JavaScript_typeof());
    obj4->ctor_3(nameTable);
    return obj4;
}

// internal static object Unwrap(object obj, Uno.UX.NameTable rootTable) [static] :1222
uObject* JavaScript::Unwrap(uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Unwrap(object,Uno.UX.NameTable)");
    JavaScript_typeof()->Init();
    ::g::Uno::UX::Property* ret6;
    uObject* so = uAs<uObject*>(obj, ::TYPES[57/*Fuse.Scripting.IScriptObject*/]);
    ::g::Fuse::Scripting::Object* ind3 = (so != NULL) ? uAs< ::g::Fuse::Scripting::Object*>(::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[57/*Fuse.Scripting.IScriptObject*/])), ::TYPES[26/*Fuse.Scripting.Object*/]) : NULL;
    ::g::Fuse::Scripting::Object* ind2 = (ind3 != NULL) ? ind3 : uAs< ::g::Fuse::Scripting::Object*>(uPtr(JavaScript::Worker())->Unwrap(obj), ::TYPES[26/*Fuse.Scripting.Object*/]);
    ::g::Fuse::Scripting::Object* self = (ind2 != NULL) ? ind2 : (::g::Fuse::Scripting::Object*)uPtr(uPtr(JavaScript::Worker())->Context())->NewObject();

    if (rootTable != NULL)

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(rootTable)->Properties()), ::TYPES[58/*Uno.Collections.ICollection<Uno.UX.Property>*/])); i++)
        {
            ::g::Uno::UX::Property* p = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(rootTable)->Properties()), ::TYPES[59/*Uno.Collections.IList<Uno.UX.Property>*/]), uCRef<int>(i), &ret6), ret6);

            if (!uPtr(self)->ContainsKey(::g::Uno::UX::Selector__op_Implicit1(uPtr(p)->Name())))
                ::g::Fuse::Reactive::LazyObservableProperty::New1(JavaScript::Worker(), self, p);
        }

    if ((so != NULL) && (::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(so, ::TYPES[57/*Fuse.Scripting.IScriptObject*/])) == NULL))
        ::g::Fuse::Scripting::IScriptObject::SetScriptObject(uInterface(so, ::TYPES[57/*Fuse.Scripting.IScriptObject*/]), self, uPtr(JavaScript::Worker())->Context());

    return self;
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() [static] :1209
::g::Fuse::Reactive::ThreadWorker* JavaScript::Worker()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Worker()");
    JavaScript_typeof()->Init();
    return JavaScript::_worker();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// internal sealed class LazyObservableProperty :1871
// {
static void LazyObservableProperty_build(uType* type)
{
    ::TYPES[34] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[32] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[31] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(LazyObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(LazyObservableProperty_type, interface1),
        ::g::Uno::IDisposable_typeof(), offsetof(LazyObservableProperty_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(::g::Fuse::Reactive::LazyObservableProperty, _observable), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::LazyObservableProperty, _property), 0,
        ::g::Fuse::Reactive::ObservableSubscription_typeof(), offsetof(::g::Fuse::Reactive::LazyObservableProperty, _subscription), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::LazyObservableProperty, _worker), 0);
}

LazyObservableProperty_type* LazyObservableProperty_typeof()
{
    static uSStrong<LazyObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LazyObservableProperty);
    options.TypeSize = sizeof(LazyObservableProperty_type);
    type = (LazyObservableProperty_type*)uClassType::New("Fuse.Reactive.LazyObservableProperty", options);
    type->fp_build_ = LazyObservableProperty_build;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))LazyObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))LazyObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))LazyObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))LazyObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))LazyObservableProperty__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))LazyObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))LazyObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))LazyObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface2.fp_Dispose = (void(*)(uObject*))LazyObservableProperty__Dispose_fn;
    return type;
}

// public LazyObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :1876
void LazyObservableProperty__ctor__fn(LazyObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_(w, obj, p);
}

// public void Dispose() :1904
void LazyObservableProperty__Dispose_fn(LazyObservableProperty* __this)
{
    __this->Dispose();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1925
void LazyObservableProperty__FuseReactiveIObserverOnAdd_fn(LazyObservableProperty* __this, uObject* addedValue)
{
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1937
void LazyObservableProperty__FuseReactiveIObserverOnFailed_fn(LazyObservableProperty* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1933
void LazyObservableProperty__FuseReactiveIObserverOnInsertAt_fn(LazyObservableProperty* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (index_ == 0)
        __this->Set(value);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array values) :1913
void LazyObservableProperty__FuseReactiveIObserverOnNewAll_fn(LazyObservableProperty* __this, ::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array)");

    if (uPtr(values)->Length() == 1)
        __this->Set(uPtr(values)->Item(0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :1917
void LazyObservableProperty__FuseReactiveIObserverOnNewAt_fn(LazyObservableProperty* __this, int* index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    int index_ = *index;

    if (index_ == 0)
        __this->Set(newValue);
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :1929
void LazyObservableProperty__FuseReactiveIObserverOnRemove_fn(LazyObservableProperty* __this, uObject* value, int* index)
{
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1921
void LazyObservableProperty__FuseReactiveIObserverOnSet_fn(LazyObservableProperty* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->Set(newValue);
}

// private object Get(object[] args) :1885
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Get(args);
}

// public LazyObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :1876
void LazyObservableProperty__New1_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval)
{
    *__retval = LazyObservableProperty::New1(w, obj, p);
}

// private void Set(object value) :1942
void LazyObservableProperty__Set_fn(LazyObservableProperty* __this, uObject* value)
{
    __this->Set(value);
}

// private void Subscribe() :1897
void LazyObservableProperty__Subscribe_fn(LazyObservableProperty* __this)
{
    __this->Subscribe();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :1947
void LazyObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(LazyObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Inequality(prop_, uPtr(__this->_property)->Name()))
        return;

    if (obj != uPtr(__this->_property)->Object())
        return;

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_subscription)->SetExclusive(uPtr(__this->_worker)->Unwrap(uPtr(__this->_property)->GetAsObject()));
}

// public LazyObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :1876
void LazyObservableProperty::ctor_(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,Uno.UX.Property)");
    _worker = w;
    _property = p;
    uPtr(uPtr(_worker)->Context())->ObjectDefineProperty(obj, uPtr(p)->Name().ToString(::TYPES[34/*Uno.UX.Selector*/]), uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)LazyObservableProperty__Get_fn, this), NULL, false, false);
}

// public void Dispose() [instance] :1904
void LazyObservableProperty::Dispose()
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Dispose()");
    uPtr(_property)->RemoveListener((uObject*)this);

    if (_subscription != NULL)
        uPtr(_subscription)->Dispose();

    _observable = NULL;
    _worker = NULL;
    _property = NULL;
}

// private object Get(object[] args) [instance] :1885
uObject* LazyObservableProperty::Get(uArray* args)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Get(object[])");

    if (_observable == NULL)
    {
        _observable = ::g::Fuse::Reactive::Observable::New1(_worker);
        uPtr(::g::Fuse::Reactive::Dispatcher::UIThread())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)LazyObservableProperty__Subscribe_fn, this));
    }

    return uPtr(_worker)->Unwrap(_observable);
}

// private void Set(object value) [instance] :1942
void LazyObservableProperty::Set(uObject* value)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Set(object)");
    uPtr(_property)->SetAsObject(::g::Fuse::Scripting::Marshal::TryConvertTo(uPtr(_property)->PropertyType(), value), (uObject*)this);
}

// private void Subscribe() [instance] :1897
void LazyObservableProperty::Subscribe()
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Subscribe()");
    _subscription = uPtr(_observable)->Subscribe((uObject*)this);
    uPtr(_subscription)->SetExclusiveIfNoValue(uPtr(_property)->GetAsObject());
    uPtr(_property)->AddListener((uObject*)this);
}

// public LazyObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :1876
LazyObservableProperty* LazyObservableProperty::New1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    LazyObservableProperty* obj1 = (LazyObservableProperty*)uNew(LazyObservableProperty_typeof());
    obj1->ctor_(w, obj, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Match :1405
// {
static void Match_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Not handled: OnAdd");
    ::STRINGS[39] = uString::Const("Not handled: InsertAt");
    ::STRINGS[40] = uString::Const("<Match> can not be used on lists (received OnNewAll)");
    ::STRINGS[21] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[41] = uString::Const("Case already has a Match");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[46] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[47] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[44] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[43] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[60] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[61] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[62] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[63] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[64] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[23] = ::g::Uno::Int_typeof();
    ::TYPES[16] = ::g::Uno::Double_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[31] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Match_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Match_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Match_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Match_type, interface3),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Match_type, interface4));
    type->SetFields(13,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), offsetof(::g::Fuse::Reactive::Match, _cases), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Reactive::Match, _elements), 0,
        ::g::Fuse::Reactive::Case_typeof(), offsetof(::g::Fuse::Reactive::Match, _oldCase), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _realValue), 0,
        ::g::Fuse::Reactive::ObservableSubscription_typeof(), offsetof(::g::Fuse::Reactive::Match, _subscription), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _value), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Match__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Match__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Cases", NULL, (void*)Match__get_Cases_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), 0),
        new uFunction("get_Integer", NULL, (void*)Match__get_Integer_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Integer", NULL, (void*)Match__set_Integer_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Match__New2_fn, 0, true, Match_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Match__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Match__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Match__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Match__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Match__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Match__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

Match_type* Match_typeof()
{
    static uSStrong<Match_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Match);
    options.TypeSize = sizeof(Match_type);
    type = (Match_type*)uClassType::New("Fuse.Reactive.Match", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = Match_build;
    type->fp_ctor_ = (void*)Match__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Match__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Match__OnUnrooted_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnSet_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnAdd_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnNewAt_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnInsertAt_fn;
    type->interface4.fp_OnFailed = (void(*)(uObject*, uString*))Match__FuseReactiveIObserverOnFailed_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))Match__FuseReactiveIObserverOnNewAll_fn;
    type->interface4.fp_OnRemove = (void(*)(uObject*, uObject*, int*))Match__FuseReactiveIObserverOnRemove_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Match() :1405
void Match__ctor_3_fn(Match* __this)
{
    __this->ctor_3();
}

// private void AddElements(Fuse.Reactive.Case c) :1583
void Match__AddElements_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->AddElements(c);
}

// public bool get_Bool() :1529
void Match__get_Bool_fn(Match* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1530
void Match__set_Bool_fn(Match* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() :1412
void Match__get_Cases_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Cases();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1437
void Match__FuseReactiveIObserverOnAdd_fn(Match* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[17/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1452
void Match__FuseReactiveIObserverOnFailed_fn(Match* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1447
void Match__FuseReactiveIObserverOnInsertAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[39/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array values) :1457
void Match__FuseReactiveIObserverOnNewAll_fn(Match* __this, ::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array)");

    if (uPtr(values)->Length() == 0)
    {
        __this->_realValue = NULL;
        __this->Invalidate();
        return;
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[40/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :1442
void Match__FuseReactiveIObserverOnNewAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[21/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :1469
void Match__FuseReactiveIObserverOnRemove_fn(Match* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[40/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1431
void Match__FuseReactiveIObserverOnSet_fn(Match* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->_realValue = newValue;
    __this->Invalidate();
}

// public int get_Integer() :1523
void Match__get_Integer_fn(Match* __this, int* __retval)
{
    *__retval = __this->Integer();
}

// public void set_Integer(int value) :1524
void Match__set_Integer_fn(Match* __this, int* value)
{
    __this->Integer(*value);
}

// internal void Invalidate() :1549
void Match__Invalidate_fn(Match* __this)
{
    __this->Invalidate();
}

// public generated Match New() :1405
void Match__New2_fn(Match** __retval)
{
    *__retval = Match::New2();
}

// public double get_Number() :1517
void Match__get_Number_fn(Match* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1518
void Match__set_Number_fn(Match* __this, double* value)
{
    __this->Number(*value);
}

// private void OnCaseAdded(Fuse.Reactive.Case c) :1418
void Match__OnCaseAdded_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseAdded(c);
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) :1425
void Match__OnCaseRemoved_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseRemoved(c);
}

// protected override sealed void OnRooted() :1533
void Match__OnRooted_fn(Match* __this)
{
    uStackFrame __("Fuse.Reactive.Match", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->Invalidate();
}

// protected override sealed void OnUnrooted() :1539
void Match__OnUnrooted_fn(Match* __this)
{
    uStackFrame __("Fuse.Reactive.Match", "OnUnrooted()");
    __this->RemoveElements();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveElements() :1574
void Match__RemoveElements_fn(Match* __this)
{
    __this->RemoveElements();
}

// private Fuse.Reactive.Case SelectCase() :1563
void Match__SelectCase_fn(Match* __this, ::g::Fuse::Reactive::Case** __retval)
{
    *__retval = __this->SelectCase();
}

// public string get_String() :1511
void Match__get_String_fn(Match* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1512
void Match__set_String_fn(Match* __this, uString* value)
{
    __this->String(value);
}

// public object get_Value() :1480
void Match__get_Value_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1481
void Match__set_Value_fn(Match* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Match() [instance] :1405
void Match::ctor_3()
{
    uStackFrame __("Fuse.Reactive.Match", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Node>*/]));
    ctor_2();
}

// private void AddElements(Fuse.Reactive.Case c) [instance] :1583
void Match::AddElements(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "AddElements(Fuse.Reactive.Case)");
    ::g::Uno::UX::Template* ret6;

    if (c != NULL)

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(c)->Factories()), ::TYPES[45/*Uno.Collections.IEnumerable<Uno.UX.Template>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[46/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[47/*Uno.Collections.IEnumerator<Uno.UX.Template>*/]), &ret6), ret6);
            ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[3/*Fuse.Node*/]);

            if (elm != NULL)
            {
                uPtr(elm)->DataContext(DataContext());
                ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[44/*Uno.Collections.ICollection<Fuse.Node>*/]), elm);
                ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
            }
        }

    _oldCase = c;
}

// public bool get_Bool() [instance] :1529
bool Match::Bool()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Bool()");
    return uIs((uObject*)Value(), ::TYPES[12/*bool*/]) ? uUnbox<bool>(::TYPES[12/*bool*/], Value()) : false;
}

// public void set_Bool(bool value) [instance] :1530
void Match::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Bool(bool)");
    Value(uBox(::TYPES[12/*bool*/], value));
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() [instance] :1412
uObject* Match::Cases()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Cases()");
    uObject* ind4 = _cases;
    return (ind4 != NULL) ? ind4 : (uObject*)(_cases = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[63/*Uno.Collections.ObservableList<Fuse.Reactive.Case>*/], uDelegate::New(::TYPES[64/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseAdded_fn, this), uDelegate::New(::TYPES[64/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseRemoved_fn, this))));
}

// public int get_Integer() [instance] :1523
int Match::Integer()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Integer()");
    return uIs((uObject*)Value(), ::TYPES[23/*int*/]) ? uUnbox<int>(::TYPES[23/*int*/], Value()) : 0;
}

// public void set_Integer(int value) [instance] :1524
void Match::Integer(int value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Integer(int)");
    Value(uBox<int>(::TYPES[23/*int*/], value));
}

// internal void Invalidate() [instance] :1549
void Match::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Match", "Invalidate()");

    if (!IsRootingCompleted())
        return;

    ::g::Fuse::Reactive::Case* newCase = SelectCase();

    if (newCase != _oldCase)
    {
        RemoveElements();

        if (newCase != NULL)
            AddElements(newCase);
    }
}

// public double get_Number() [instance] :1517
double Match::Number()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Number()");
    return uIs((uObject*)Value(), ::TYPES[16/*double*/]) ? uUnbox<double>(::TYPES[16/*double*/], Value()) : 0.0;
}

// public void set_Number(double value) [instance] :1518
void Match::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Number(double)");
    Value(uBox(::TYPES[16/*double*/], value));
}

// private void OnCaseAdded(Fuse.Reactive.Case c) [instance] :1418
void Match::OnCaseAdded(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseAdded(Fuse.Reactive.Case)");

    if (uPtr(c)->_match != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[41/*"Case alread...*/]));

    uPtr(c)->_match = this;
    Invalidate();
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) [instance] :1425
void Match::OnCaseRemoved(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseRemoved(Fuse.Reactive.Case)");
    uPtr(c)->_match = NULL;
    Invalidate();
}

// private void RemoveElements() [instance] :1574
void Match::RemoveElements()
{
    uStackFrame __("Fuse.Reactive.Match", "RemoveElements()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret7;
    _oldCase = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret7), ret7); enum2.MoveNext(::TYPES[43/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* e = enum2.Current(::TYPES[43/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        uPtr(Parent())->BeginRemoveChild(e, NULL);
    }

    uPtr(_elements)->Clear();
}

// private Fuse.Reactive.Case SelectCase() [instance] :1563
::g::Fuse::Reactive::Case* Match::SelectCase()
{
    uStackFrame __("Fuse.Reactive.Match", "SelectCase()");
    ::g::Fuse::Reactive::Case* ret8;
    ::g::Fuse::Reactive::Case* def = NULL;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_cases), ::TYPES[60/*Uno.Collections.IEnumerable<Fuse.Reactive.Case>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[46/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Reactive::Case* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[61/*Uno.Collections.IEnumerator<Fuse.Reactive.Case>*/]), &ret8), ret8);

        if ((uPtr(c)->Value() != NULL) && ::g::Uno::Object::Equals(uPtr(uPtr(c)->Value()), _realValue))
            return c;

        if (uPtr(c)->IsDefault())
            def = c;
    }

    return def;
}

// public string get_String() [instance] :1511
uString* Match::String()
{
    uStackFrame __("Fuse.Reactive.Match", "get_String()");
    return uAs<uString*>(Value(), ::TYPES[17/*string*/]);
}

// public void set_String(string value) [instance] :1512
void Match::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_String(string)");
    Value(value);
}

// public object get_Value() [instance] :1480
uObject* Match::Value()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1481
void Match::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Value(object)");

    if (_value != value)
    {
        _value = value;

        if (_subscription != NULL)
        {
            uPtr(_subscription)->Dispose();
            _subscription = NULL;
        }

        if (uIs((uObject*)_value, ::TYPES[30/*Fuse.Reactive.Observable*/]))
        {
            ::g::Fuse::Reactive::Observable* obs = uCast< ::g::Fuse::Reactive::Observable*>(_value, ::TYPES[30/*Fuse.Reactive.Observable*/]);
            _subscription = uPtr(obs)->Subscribe((uObject*)this);
        }
        else
            _realValue = _value;

        Invalidate();
    }
}

// public generated Match New() [static] :1405
Match* Match::New2()
{
    Match* obj5 = (Match*)uNew(Match_typeof());
    obj5->ctor_3();
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// private sealed class ThreadWorker.MethodClosure :2216
// {
// static MethodClosure() :2216
static void ThreadWorker__MethodClosure__cctor__fn(uType* __type)
{
    ThreadWorker__MethodClosure::_emptyArgs_ = uArray::New(::TYPES[11/*object[]*/], 0);
}

static void ThreadWorker__MethodClosure_build(uType* type)
{
    ::TYPES[11] = uObject_typeof()->Array();
    ::TYPES[65] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptMethod_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__MethodClosure, _m), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__MethodClosure, _worker), 0,
        uObject_typeof()->Array(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker__MethodClosure::_emptyArgs_, uFieldFlagsStatic);
}

uType* ThreadWorker__MethodClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ThreadWorker__MethodClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.MethodClosure", options);
    type->fp_build_ = ThreadWorker__MethodClosure_build;
    type->fp_cctor_ = ThreadWorker__MethodClosure__cctor__fn;
    return type;
}

// public MethodClosure(Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) :2220
void ThreadWorker__MethodClosure__ctor__fn(ThreadWorker__MethodClosure* __this, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    __this->ctor_(m, worker);
}

// public object Callback(object[] args) :2228
void ThreadWorker__MethodClosure__Callback_fn(ThreadWorker__MethodClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) :2236
void ThreadWorker__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Array* args, uArray** __retval)
{
    *__retval = ThreadWorker__MethodClosure::CopyArgs(args);
}

// public MethodClosure New(Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) :2220
void ThreadWorker__MethodClosure__New1_fn(::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__MethodClosure** __retval)
{
    *__retval = ThreadWorker__MethodClosure::New1(m, worker);
}

uSStrong<uArray*> ThreadWorker__MethodClosure::_emptyArgs_;

// public MethodClosure(Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) [instance] :2220
void ThreadWorker__MethodClosure::ctor_(::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.MethodClosure", ".ctor(Fuse.Scripting.ScriptMethod,Fuse.Reactive.ThreadWorker)");
    _m = m;
    _worker = worker;
}

// public object Callback(object[] args) [instance] :2228
uObject* ThreadWorker__MethodClosure::Callback(uArray* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.MethodClosure", "Callback(object[])");
    uObject* self = uPtr(uCast< ::g::Fuse::Scripting::External*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[65/*Fuse.Scripting.External*/]))->Object;
    uArray* realArgs = ThreadWorker__MethodClosure::CopyArgs(uCast< ::g::Fuse::Scripting::Array*>(args->Strong<uObject*>(1), ::TYPES[27/*Fuse.Scripting.Array*/]));
    uObject* res = uPtr(_worker)->Unwrap(uPtr(_m)->Call(self, realArgs));
    return res;
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) [static] :2236
uArray* ThreadWorker__MethodClosure::CopyArgs(::g::Fuse::Scripting::Array* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.MethodClosure", "CopyArgs(Fuse.Scripting.Array)");
    ThreadWorker__MethodClosure_typeof()->Init();
    uArray* res = uArray::New(::TYPES[11/*object[]*/], uPtr(args)->Length());

    for (int i = 0; i < res->Length(); i++)
        res->Strong<uObject*>(i) = ::g::Fuse::Reactive::ThreadWorker::Wrap(args->Item(i));

    return res;
}

// public MethodClosure New(Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) [static] :2220
ThreadWorker__MethodClosure* ThreadWorker__MethodClosure::New1(::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    ThreadWorker__MethodClosure* obj1 = (ThreadWorker__MethodClosure*)uNew(ThreadWorker__MethodClosure_typeof());
    obj1->ctor_(m, worker);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// internal sealed class Observable :1739
// {
static void Observable_build(uType* type)
{
    ::STRINGS[42] = uString::Const("_values");
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[11] = uObject_typeof()->Array();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::Observable, Object), 0);
}

uType* Observable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Observable", options);
    type->fp_build_ = Observable_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Observable__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Observable__GetHashCode_fn;
    return type;
}

// public Observable(Fuse.Reactive.ThreadWorker worker) :1748
void Observable__ctor__fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    __this->ctor_(worker);
}

// public Observable(Fuse.Scripting.Object obj) :1743
void Observable__ctor_1_fn(Observable* __this, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_1(obj);
}

// public override sealed bool Equals(object obj) :1760
void Observable__Equals_fn(Observable* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "Equals(object)");
    Observable* obs = uAs<Observable*>(obj, Observable_typeof());

    if (obs == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->Object)->Equals2(uPtr(obs)->Object), void();
}

// public override sealed int GetHashCode() :1767
void Observable__GetHashCode_fn(Observable* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "GetHashCode()");
    return *__retval = uPtr(__this->Object)->GetHashCode(), void();
}

// public Observable New(Fuse.Reactive.ThreadWorker worker) :1748
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, Observable** __retval)
{
    *__retval = Observable::New1(worker);
}

// public Observable New(Fuse.Scripting.Object obj) :1743
void Observable__New2_fn(::g::Fuse::Scripting::Object* obj, Observable** __retval)
{
    *__retval = Observable::New2(obj);
}

// public Fuse.Reactive.ObservableSubscription Subscribe(Fuse.Reactive.IObserver observer) :1755
void Observable__Subscribe_fn(Observable* __this, uObject* observer, ::g::Fuse::Reactive::ObservableSubscription** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// public Fuse.Scripting.Array get_Values() :1753
void Observable__get_Values_fn(Observable* __this, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->Values();
}

// public Observable(Fuse.Reactive.ThreadWorker worker) [instance] :1748
void Observable::ctor_(::g::Fuse::Reactive::ThreadWorker* worker)
{
    uStackFrame __("Fuse.Reactive.Observable", ".ctor(Fuse.Reactive.ThreadWorker)");
    Object = uCast< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(uPtr(worker)->FuseJS())->Observable)->Call(uArray::New(::TYPES[11/*object[]*/], 0)), ::TYPES[26/*Fuse.Scripting.Object*/]);
}

// public Observable(Fuse.Scripting.Object obj) [instance] :1743
void Observable::ctor_1(::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Reactive.Observable", ".ctor(Fuse.Scripting.Object)");
    Object = obj;
}

// public Fuse.Reactive.ObservableSubscription Subscribe(Fuse.Reactive.IObserver observer) [instance] :1755
::g::Fuse::Reactive::ObservableSubscription* Observable::Subscribe(uObject* observer)
{
    uStackFrame __("Fuse.Reactive.Observable", "Subscribe(Fuse.Reactive.IObserver)");
    return ::g::Fuse::Reactive::ObservableSubscription::New1(Object, observer);
}

// public Fuse.Scripting.Array get_Values() [instance] :1753
::g::Fuse::Scripting::Array* Observable::Values()
{
    uStackFrame __("Fuse.Reactive.Observable", "get_Values()");
    return uAs< ::g::Fuse::Scripting::Array*>(uPtr(Object)->Item(::STRINGS[42/*"_values"*/]), ::TYPES[27/*Fuse.Scripting.Array*/]);
}

// public Observable New(Fuse.Reactive.ThreadWorker worker) [static] :1748
Observable* Observable::New1(::g::Fuse::Reactive::ThreadWorker* worker)
{
    Observable* obj2 = (Observable*)uNew(Observable_typeof());
    obj2->ctor_(worker);
    return obj2;
}

// public Observable New(Fuse.Scripting.Object obj) [static] :1743
Observable* Observable::New2(::g::Fuse::Scripting::Object* obj)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// internal sealed class ObservableSubscription :1773
// {
static void ObservableSubscription_build(uType* type)
{
    ::STRINGS[43] = uString::Const("set");
    ::STRINGS[44] = uString::Const("newAt");
    ::STRINGS[45] = uString::Const("newAll");
    ::STRINGS[46] = uString::Const("add");
    ::STRINGS[47] = uString::Const("remove");
    ::STRINGS[48] = uString::Const("insertAt");
    ::STRINGS[49] = uString::Const("failed");
    ::STRINGS[50] = uString::Const("Unhandled observable operation: ");
    ::STRINGS[51] = uString::Const("setExclusive");
    ::STRINGS[52] = uString::Const("setExclusiveIfNoValue");
    ::STRINGS[53] = uString::Const("dispose");
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[66] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[67] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[68] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Object_typeof());
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[69] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, uObject_typeof());
    ::TYPES[70] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[31] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[71] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, ::g::Uno::Int_typeof(), uObject_typeof());
    ::TYPES[72] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Int_typeof(), uObject_typeof());
    ::TYPES[73] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, ::g::Fuse::Scripting::Array_typeof());
    ::TYPES[74] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Array_typeof());
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[75] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, uObject_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[76] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[77] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[78] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[79] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), uObject_typeof()->Array());
    ::TYPES[80] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()->Array());
    ::TYPES[11] = uObject_typeof()->Array();
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ObservableSubscription_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _disposed), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _observable), 0,
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _observer), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _subscriberProxy), 0);
}

ObservableSubscription_type* ObservableSubscription_typeof()
{
    static uSStrong<ObservableSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ObservableSubscription);
    options.TypeSize = sizeof(ObservableSubscription_type);
    type = (ObservableSubscription_type*)uClassType::New("Fuse.Reactive.ObservableSubscription", options);
    type->fp_build_ = ObservableSubscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ObservableSubscription__Dispose_fn;
    return type;
}

// public ObservableSubscription(Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer) :1781
void ObservableSubscription__ctor__fn(ObservableSubscription* __this, ::g::Fuse::Scripting::Object* obj, uObject* observer)
{
    __this->ctor_(obj, observer);
}

// private void CallProxyMethod(string method, object[] args) :1804
void ObservableSubscription__CallProxyMethod_fn(ObservableSubscription* __this, uString* method, uArray* args)
{
    __this->CallProxyMethod(method, args);
}

// public void Dispose() :1840
void ObservableSubscription__Dispose_fn(ObservableSubscription* __this)
{
    __this->Dispose();
}

// public ObservableSubscription New(Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer) :1781
void ObservableSubscription__New1_fn(::g::Fuse::Scripting::Object* obj, uObject* observer, ObservableSubscription** __retval)
{
    *__retval = ObservableSubscription::New1(obj, observer);
}

// private object ObserveChange(object[] args) :1820
void ObservableSubscription__ObserveChange_fn(ObservableSubscription* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(args);
}

// public void SetExclusive(object newValue) :1810
void ObservableSubscription__SetExclusive_fn(ObservableSubscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// public void SetExclusiveIfNoValue(object newValue) :1815
void ObservableSubscription__SetExclusiveIfNoValue_fn(ObservableSubscription* __this, uObject* newValue)
{
    __this->SetExclusiveIfNoValue(newValue);
}

// private void Subscribe() :1788
void ObservableSubscription__Subscribe_fn(ObservableSubscription* __this)
{
    __this->Subscribe();
}

// private void TryInvokeJavascriptDispose(Fuse.Scripting.Object subscriberProxy) :1852
void ObservableSubscription__TryInvokeJavascriptDispose_fn(ObservableSubscription* __this, ::g::Fuse::Scripting::Object* subscriberProxy)
{
    __this->TryInvokeJavascriptDispose(subscriberProxy);
}

// public ObservableSubscription(Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer) [instance] :1781
void ObservableSubscription::ctor_(::g::Fuse::Scripting::Object* obj, uObject* observer)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", ".ctor(Fuse.Scripting.Object,Fuse.Reactive.IObserver)");
    _observable = obj;
    _observer = observer;
    uPtr(::g::Fuse::Reactive::Dispatcher::UIThread())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ObservableSubscription__Subscribe_fn, this));
}

// private void CallProxyMethod(string method, object[] args) [instance] :1804
void ObservableSubscription::CallProxyMethod(uString* method, uArray* args)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "CallProxyMethod(string,object[])");

    if (_disposed)
        return;

    uPtr(_subscriberProxy)->CallMethod(method, args);
}

// public void Dispose() [instance] :1840
void ObservableSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "Dispose()");
    _disposed = true;

    if (_subscriberProxy != NULL)
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[66/*Uno.Threading.IDispatcherExtensions.Invoke1<Fuse.Scripting.Object>*/], (uObject*)::g::Fuse::Reactive::JavaScript::Worker(), uDelegate::New(::TYPES[68/*Uno.Action<Fuse.Scripting.Object>*/], (void*)ObservableSubscription__TryInvokeJavascriptDispose_fn, this), _subscriberProxy);

    _observable = NULL;
    _observer = NULL;
    _subscriberProxy = NULL;
}

// private object ObserveChange(object[] args) [instance] :1820
uObject* ObservableSubscription::ObserveChange(uArray* args)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "ObserveChange(object[])");

    if (_disposed)
        return NULL;

    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[17/*string*/]);
    uObject* arg = ::g::Fuse::Reactive::ThreadWorker::Wrap(args->Strong<uObject*>(2));

    if (::g::Uno::String::op_Equality(op, ::STRINGS[43/*"set"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[69/*Uno.Threading.IDispatcherExtensions.Invoke1<object>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[70/*Uno.Action<object>*/], uInterface(uPtr(_observer), ::TYPES[31/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnSet)), arg);
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[44/*"newAt"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[71/*Uno.Threading.IDispatcherExtensions.Invoke2<int, object>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[72/*Uno.Action<int, object>*/], uInterface(uPtr(_observer), ::TYPES[31/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnNewAt)), uCRef<int>(::g::Fuse::Scripting::Marshal::ToInt(arg)), ::g::Fuse::Reactive::ThreadWorker::Wrap(args->Strong<uObject*>(3)));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[45/*"newAll"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[73/*Uno.Threading.IDispatcherExtensions.Invoke1<Fuse.Scripting.Array>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[74/*Uno.Action<Fuse.Scripting.Array>*/], uInterface(uPtr(_observer), ::TYPES[31/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnNewAll)), uCast< ::g::Fuse::Scripting::Array*>(arg, ::TYPES[27/*Fuse.Scripting.Array*/]));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[46/*"add"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[69/*Uno.Threading.IDispatcherExtensions.Invoke1<object>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[70/*Uno.Action<object>*/], uInterface(uPtr(_observer), ::TYPES[31/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnAdd)), arg);
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[47/*"remove"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[75/*Uno.Threading.IDispatcherExtensions.Invoke2<object, int>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[76/*Uno.Action<object, int>*/], uInterface(uPtr(_observer), ::TYPES[31/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnRemove)), arg, uCRef<int>(::g::Fuse::Scripting::Marshal::ToInt(args->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[48/*"insertAt"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[71/*Uno.Threading.IDispatcherExtensions.Invoke2<int, object>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[72/*Uno.Action<int, object>*/], uInterface(uPtr(_observer), ::TYPES[31/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnInsertAt)), uCRef<int>(::g::Fuse::Scripting::Marshal::ToInt(arg)), ::g::Fuse::Reactive::ThreadWorker::Wrap(args->Strong<uObject*>(3)));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[49/*"failed"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[77/*Uno.Threading.IDispatcherExtensions.Invoke1<string>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[78/*Uno.Action<string>*/], uInterface(uPtr(_observer), ::TYPES[31/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnFailed)), uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[17/*string*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[50/*"Unhandled o...*/], op)));

    return NULL;
}

// public void SetExclusive(object newValue) [instance] :1810
void ObservableSubscription::SetExclusive(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "SetExclusive(object)");
    ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[79/*Uno.Threading.IDispatcherExtensions.Invoke2<string, object[]>*/], (uObject*)::g::Fuse::Reactive::JavaScript::Worker(), uDelegate::New(::TYPES[80/*Uno.Action<string, object[]>*/], (void*)ObservableSubscription__CallProxyMethod_fn, this), ::STRINGS[51/*"setExclusive"*/], uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, (uObject*)uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(newValue)));
}

// public void SetExclusiveIfNoValue(object newValue) [instance] :1815
void ObservableSubscription::SetExclusiveIfNoValue(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "SetExclusiveIfNoValue(object)");
    ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[79/*Uno.Threading.IDispatcherExtensions.Invoke2<string, object[]>*/], (uObject*)::g::Fuse::Reactive::JavaScript::Worker(), uDelegate::New(::TYPES[80/*Uno.Action<string, object[]>*/], (void*)ObservableSubscription__CallProxyMethod_fn, this), ::STRINGS[52/*"setExclusiv...*/], uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, (uObject*)uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(newValue)));
}

// private void Subscribe() [instance] :1788
void ObservableSubscription::Subscribe()
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "Subscribe()");

    if (_disposed)
        return;

    _subscriberProxy = uAs< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->FuseJS())->SubscriberProxy)->Call(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 2, (::g::Fuse::Scripting::Object*)_observable, uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)ObservableSubscription__ObserveChange_fn, this))), ::TYPES[26/*Fuse.Scripting.Object*/]);
}

// private void TryInvokeJavascriptDispose(Fuse.Scripting.Object subscriberProxy) [instance] :1852
void ObservableSubscription::TryInvokeJavascriptDispose(::g::Fuse::Scripting::Object* subscriberProxy)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "TryInvokeJavascriptDispose(Fuse.Scripting.Object)");
    uPtr(subscriberProxy)->CallMethod(::STRINGS[53/*"dispose"*/], uArray::New(::TYPES[11/*object[]*/], 0));
}

// public ObservableSubscription New(Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer) [static] :1781
ObservableSubscription* ObservableSubscription::New1(::g::Fuse::Scripting::Object* obj, uObject* observer)
{
    ObservableSubscription* obj1 = (ObservableSubscription*)uNew(ObservableSubscription_typeof());
    obj1->ctor_(obj, observer);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/Subscription/$.uno
// ----------------------------------------------------------------------

// internal sealed class PathObserver :72
// {
static void PathObserver_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PathObserver_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, _bindAttempt), 0,
        ::g::Fuse::Reactive::ContextBinding_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Binding), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Node), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Path), 0);
}

PathObserver_type* PathObserver_typeof()
{
    static uSStrong<PathObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PathObserver);
    options.TypeSize = sizeof(PathObserver_type);
    type = (PathObserver_type*)uClassType::New("Fuse.Reactive.PathObserver", options);
    type->fp_build_ = PathObserver_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PathObserver__Dispose_fn;
    return type;
}

// public PathObserver(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) :80
void PathObserver__ctor__fn(PathObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    __this->ctor_(b, n, path);
}

// public void Dispose() :100
void PathObserver__Dispose_fn(PathObserver* __this)
{
    __this->Dispose();
}

// public PathObserver New(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) :80
void PathObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path, PathObserver** __retval)
{
    *__retval = PathObserver::New1(b, n, path);
}

// internal void RestartBinding() :89
void PathObserver__RestartBinding_fn(PathObserver* __this)
{
    __this->RestartBinding();
}

// public PathObserver(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) [instance] :80
void PathObserver::ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    uStackFrame __("Fuse.Reactive.PathObserver", ".ctor(Fuse.Reactive.ContextBinding,Fuse.Node,string)");
    Node = n;
    Binding = b;
    Path = path;
    uPtr(::g::Fuse::Reactive::Dispatcher::UIThread())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)PathObserver__RestartBinding_fn, this));
}

// public void Dispose() [instance] :100
void PathObserver::Dispose()
{
    uStackFrame __("Fuse.Reactive.PathObserver", "Dispose()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }
}

// internal void RestartBinding() [instance] :89
void PathObserver::RestartBinding()
{
    uStackFrame __("Fuse.Reactive.PathObserver", "RestartBinding()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }

    _bindAttempt = ::g::Fuse::Reactive::BindAttempt::New1(this);
}

// public PathObserver New(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) [static] :80
PathObserver* PathObserver::New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    PathObserver* obj1 = (PathObserver*)uNew(PathObserver_typeof());
    obj1->ctor_(b, n, path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/Subscription/$.uno
// ----------------------------------------------------------------------

// internal sealed class SegmentObserver :204
// {
static void SegmentObserver_build(uType* type)
{
    ::STRINGS[54] = uString::Const(".");
    ::STRINGS[55] = uString::Const("Cannot access disposed PathSubscription");
    ::STRINGS[56] = uString::Const("Data binding to '");
    ::STRINGS[57] = uString::Const("': expected single value, got array");
    ::STRINGS[58] = uString::Const("': expected single value, got array of length ");
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[31] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(SegmentObserver_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SegmentObserver_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::ContextBinding_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _b), 0,
        ::g::Fuse::Reactive::BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _bindAttempt), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _isDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _isInnerLink), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _key), 0,
        SegmentObserver_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _next), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _subscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _unhandledPath), 0);
}

SegmentObserver_type* SegmentObserver_typeof()
{
    static uSStrong<SegmentObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SegmentObserver);
    options.TypeSize = sizeof(SegmentObserver_type);
    type = (SegmentObserver_type*)uClassType::New("Fuse.Reactive.SegmentObserver", options);
    type->fp_build_ = SegmentObserver_build;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))SegmentObserver__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))SegmentObserver__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))SegmentObserver__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))SegmentObserver__OnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))SegmentObserver__OnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))SegmentObserver__OnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))SegmentObserver__OnFailed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SegmentObserver__Dispose_fn;
    return type;
}

// public SegmentObserver(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) :212
void SegmentObserver__ctor__fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    __this->ctor_(b, bindAttempt);
}

// private SegmentObserver(Fuse.Reactive.ContextBinding b, string path) :226
void SegmentObserver__ctor_1_fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    __this->ctor_1(b, path);
}

// private bool get_CanFail() :259
void SegmentObserver__get_CanFail_fn(SegmentObserver* __this, bool* __retval)
{
    *__retval = __this->CanFail();
}

// private static string CombineKeyAndPath(string key, string path) :318
void SegmentObserver__CombineKeyAndPath_fn(uString* key, uString* path, uString** __retval)
{
    *__retval = SegmentObserver::CombineKeyAndPath(key, path);
}

// public void Dispose() :396
void SegmentObserver__Dispose_fn(SegmentObserver* __this)
{
    __this->Dispose();
}

// private void Fail() :261
void SegmentObserver__Fail_fn(SegmentObserver* __this)
{
    __this->Fail();
}

// private void HandleNewDataContext(object val) :234
void SegmentObserver__HandleNewDataContext_fn(SegmentObserver* __this, uObject* val)
{
    __this->HandleNewDataContext(val);
}

// private void HandleObject(Fuse.Scripting.Object obj) :240
void SegmentObserver__HandleObject_fn(SegmentObserver* __this, ::g::Fuse::Scripting::Object* obj)
{
    __this->HandleObject(obj);
}

// private void HandlePath(object dc, string path) :273
void SegmentObserver__HandlePath_fn(SegmentObserver* __this, uObject* dc, uString* path)
{
    __this->HandlePath(dc, path);
}

// public void Init(object dc, string path) :218
void SegmentObserver__Init_fn(SegmentObserver* __this, uObject* dc, uString* path)
{
    __this->Init(dc, path);
}

// public SegmentObserver New(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) :212
void SegmentObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt, SegmentObserver** __retval)
{
    *__retval = SegmentObserver::New1(b, bindAttempt);
}

// private SegmentObserver New(Fuse.Reactive.ContextBinding b, string path) :226
void SegmentObserver__New2_fn(::g::Fuse::Reactive::ContextBinding* b, uString* path, SegmentObserver** __retval)
{
    *__retval = SegmentObserver::New2(b, path);
}

// public void OnAdd(object addedValue) :351
void SegmentObserver__OnAdd_fn(SegmentObserver* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnFailed(string message) :338
void SegmentObserver__OnFailed_fn(SegmentObserver* __this, uString* message)
{
    __this->OnFailed(message);
}

// public void OnInsertAt(int index, object value) :365
void SegmentObserver__OnInsertAt_fn(SegmentObserver* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Scripting.Array values) :324
void SegmentObserver__OnNewAll_fn(SegmentObserver* __this, ::g::Fuse::Scripting::Array* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :332
void SegmentObserver__OnNewAt_fn(SegmentObserver* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemove(object value, int index) :358
void SegmentObserver__OnRemove_fn(SegmentObserver* __this, uObject* value, int* index)
{
    __this->OnRemove(value, *index);
}

// public void OnSet(object value) :344
void SegmentObserver__OnSet_fn(SegmentObserver* __this, uObject* value)
{
    __this->OnSet(value);
}

// private void SubscribeAndFail(Fuse.Reactive.Observable obs) :267
void SegmentObserver__SubscribeAndFail_fn(SegmentObserver* __this, ::g::Fuse::Reactive::Observable* obs)
{
    __this->SubscribeAndFail(obs);
}

// private static string TakeKeyFromPath(string& path) :373
void SegmentObserver__TakeKeyFromPath_fn(uString** path, uString** __retval)
{
    *__retval = SegmentObserver::TakeKeyFromPath(path);
}

// public SegmentObserver(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) [instance] :212
void SegmentObserver::ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", ".ctor(Fuse.Reactive.ContextBinding,Fuse.Reactive.BindAttempt)");
    _b = b;
    _bindAttempt = bindAttempt;
}

// private SegmentObserver(Fuse.Reactive.ContextBinding b, string path) [instance] :226
void SegmentObserver::ctor_1(::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", ".ctor(Fuse.Reactive.ContextBinding,string)");
    _b = b;
    _key = SegmentObserver::TakeKeyFromPath(&path);
    _unhandledPath = path;
    _isInnerLink = true;
}

// private bool get_CanFail() [instance] :259
bool SegmentObserver::CanFail()
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "get_CanFail()");
    return _bindAttempt != NULL;
}

// public void Dispose() [instance] :396
void SegmentObserver::Dispose()
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "Dispose()");

    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[55/*"Cannot acce...*/]));

    _isDisposed = true;

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[29/*Uno.IDisposable*/]));
        _subscription = NULL;
    }

    if (_next != NULL)
    {
        uPtr(_next)->Dispose();
        _next = NULL;
    }

    _b = NULL;
}

// private void Fail() [instance] :261
void SegmentObserver::Fail()
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "Fail()");
    _failed = true;
    uPtr(_bindAttempt)->Fail();
}

// private void HandleNewDataContext(object val) [instance] :234
void SegmentObserver::HandleNewDataContext(uObject* val)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "HandleNewDataContext(object)");

    if (!_isInnerLink)
        U_THROW(::g::Uno::Exception::New1());

    HandlePath(val, _unhandledPath);
}

// private void HandleObject(Fuse.Scripting.Object obj) [instance] :240
void SegmentObserver::HandleObject(::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "HandleObject(Fuse.Scripting.Object)");

    if (_next == NULL)
        return;

    if (uPtr(obj)->ContainsKey(_key))
    {
        uObject* val = ::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(obj)->Item(_key));
        uPtr(_next)->HandleNewDataContext(val);
        uObject* disp = uAs<uObject*>(val, ::TYPES[29/*Uno.IDisposable*/]);

        if (disp != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disp), ::TYPES[29/*Uno.IDisposable*/]));
    }
    else
    {
        if (CanFail())
            Fail();
    }
}

// private void HandlePath(object dc, string path) [instance] :273
void SegmentObserver::HandlePath(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "HandlePath(object,string)");

    if (::g::Uno::String::op_Equality(_key, NULL))
        uPtr(_b)->NewValue(dc);
    else
    {
        if (_next != NULL)
            uPtr(_next)->Dispose();

        _next = NULL;
        ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(dc, ::TYPES[30/*Fuse.Reactive.Observable*/]);

        if (obs != NULL)
        {
            if (CanFail())
            {
                if (uPtr(uPtr(obs)->Values())->Length() != 1)
                    SubscribeAndFail(obs);
                else
                {
                    ::g::Fuse::Scripting::Object* so = uAs< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(obs)->Values())->Item(0), ::TYPES[26/*Fuse.Scripting.Object*/]);

                    if (so == NULL)
                        SubscribeAndFail(obs);
                    else if (!uPtr(so)->ContainsKey(_key))
                        SubscribeAndFail(obs);
                }
            }

            if (!_failed)
            {
                _next = SegmentObserver::New2(_b, SegmentObserver::CombineKeyAndPath(_key, path));

                if (_subscription != NULL)
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[29/*Uno.IDisposable*/]));

                _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
            }
        }
        else if (uIs(dc, ::TYPES[26/*Fuse.Scripting.Object*/]))
        {
            _next = SegmentObserver::New2(_b, path);
            HandleObject(uCast< ::g::Fuse::Scripting::Object*>(dc, ::TYPES[26/*Fuse.Scripting.Object*/]));
        }
        else
        {
            if (_bindAttempt != NULL)
                uPtr(_bindAttempt)->Fail();

            _next = NULL;
        }
    }
}

// public void Init(object dc, string path) [instance] :218
void SegmentObserver::Init(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "Init(object,string)");
    _key = SegmentObserver::TakeKeyFromPath(&path);
    HandlePath(dc, path);
}

// public void OnAdd(object addedValue) [instance] :351
void SegmentObserver::OnAdd(uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnAdd(object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[56/*"Data bindin...*/], _key), ::STRINGS[57/*"': expected...*/])));
}

// public void OnFailed(string message) [instance] :338
void SegmentObserver::OnFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnFailed(string)");

    if (_isDisposed)
        return;
}

// public void OnInsertAt(int index, object value) [instance] :365
void SegmentObserver::OnInsertAt(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnInsertAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[56/*"Data bindin...*/], _key), ::STRINGS[57/*"': expected...*/])));
}

// public void OnNewAll(Fuse.Scripting.Array values) [instance] :324
void SegmentObserver::OnNewAll(::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnNewAll(Fuse.Scripting.Array)");

    if (_isDisposed)
        return;

    if (uPtr(values)->Length() > 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[56/*"Data bindin...*/], _key), ::STRINGS[58/*"': expected...*/]), uBox<int>(::TYPES[23/*int*/], uPtr(values)->Length()))));
}

// public void OnNewAt(int index, object newValue) [instance] :332
void SegmentObserver::OnNewAt(int index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnNewAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[56/*"Data bindin...*/], _key), ::STRINGS[57/*"': expected...*/])));
}

// public void OnRemove(object value, int index) [instance] :358
void SegmentObserver::OnRemove(uObject* value, int index)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnRemove(object,int)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[56/*"Data bindin...*/], _key), ::STRINGS[57/*"': expected...*/])));
}

// public void OnSet(object value) [instance] :344
void SegmentObserver::OnSet(uObject* value)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnSet(object)");

    if (_isDisposed)
        return;

    uPtr(_next)->HandleNewDataContext(value);
}

// private void SubscribeAndFail(Fuse.Reactive.Observable obs) [instance] :267
void SegmentObserver::SubscribeAndFail(::g::Fuse::Reactive::Observable* obs)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "SubscribeAndFail(Fuse.Reactive.Observable)");
    _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)::g::Fuse::Reactive::AnyChangeObserver::New1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Reactive::BindAttempt__Restart_fn, uPtr(_bindAttempt))));
    Fail();
}

// private static string CombineKeyAndPath(string key, string path) [static] :318
uString* SegmentObserver::CombineKeyAndPath(uString* key, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "CombineKeyAndPath(string,string)");

    if (::g::Uno::String::op_Inequality(path, NULL) && (uPtr(path)->Length() > 0))
        return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(key, ::STRINGS[54/*"."*/]), path);
    else
        return key;
}

// public SegmentObserver New(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) [static] :212
SegmentObserver* SegmentObserver::New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    SegmentObserver* obj1 = (SegmentObserver*)uNew(SegmentObserver_typeof());
    obj1->ctor_(b, bindAttempt);
    return obj1;
}

// private SegmentObserver New(Fuse.Reactive.ContextBinding b, string path) [static] :226
SegmentObserver* SegmentObserver::New2(::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    SegmentObserver* obj2 = (SegmentObserver*)uNew(SegmentObserver_typeof());
    obj2->ctor_1(b, path);
    return obj2;
}

// private static string TakeKeyFromPath(string& path) [static] :373
uString* SegmentObserver::TakeKeyFromPath(uString** path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "TakeKeyFromPath(string&)");

    if (::g::Uno::String::op_Equality(*path, NULL))
        return NULL;

    uString* key = *path;
    int p = ::g::Uno::String::IndexOf(uPtr(key), '.', 0);

    if (p != -1)
    {
        key = ::g::Uno::String::Substring1(uPtr(key), 0, p);
        *path = ::g::Uno::String::Substring1(uPtr(*path), p + 1, (uPtr(*path)->Length() - p) - 1);
    }
    else
        *path = NULL;

    if (::g::Uno::String::op_Equality(key, NULL) || (uPtr(key)->Length() == 0))
        return NULL;
    else
        return key;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Select :1677
// {
static void Select_build(uType* type)
{
    ::TYPES[49] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[46] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[81] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Select, _data), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Data", NULL, (void*)Select__get_Data_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)Select__set_Data_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)Select__New2_fn, 0, true, Select_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* Select_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Select);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Reactive.Select", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = Select_build;
    type->fp_ctor_ = (void*)Select__New2_fn;
    type->fp_OnNodeAdded = (void(*)(::g::Fuse::Triggers::Trigger*, ::g::Fuse::Node*))Select__OnNodeAdded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Select__OnRooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Select() :1677
void Select__ctor_4_fn(Select* __this)
{
    __this->ctor_4();
}

// public object get_Data() :1682
void Select__get_Data_fn(Select* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(object value) :1683
void Select__set_Data_fn(Select* __this, uObject* value)
{
    __this->Data(value);
}

// private bool get_IsOn() :1711
void Select__get_IsOn_fn(Select* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated Select New() :1677
void Select__New2_fn(Select** __retval)
{
    *__retval = Select::New2();
}

// private void OnChanged() :1693
void Select__OnChanged_fn(Select* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnNodeAdded(Fuse.Node n) :1721
void Select__OnNodeAdded_fn(Select* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Select", "OnNodeAdded(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnNodeAdded_fn(__this, n);
    __this->OnChanged();
}

// protected override sealed void OnRooted() :1713
void Select__OnRooted_fn(Select* __this)
{
    uStackFrame __("Fuse.Reactive.Select", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->UpdateNodes();

    if (__this->IsOn())
        __this->Activate(NULL);
}

// private void UpdateNodes() :1705
void Select__UpdateNodes_fn(Select* __this)
{
    __this->UpdateNodes();
}

// public generated Select() [instance] :1677
void Select::ctor_4()
{
    uStackFrame __("Fuse.Reactive.Select", ".ctor()");
    ctor_3();
}

// public object get_Data() [instance] :1682
uObject* Select::Data()
{
    uStackFrame __("Fuse.Reactive.Select", "get_Data()");
    return _data;
}

// public void set_Data(object value) [instance] :1683
void Select::Data(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Select", "set_Data(object)");

    if (_data != value)
    {
        _data = value;
        OnChanged();
    }
}

// private bool get_IsOn() [instance] :1711
bool Select::IsOn()
{
    uStackFrame __("Fuse.Reactive.Select", "get_IsOn()");
    return _data != NULL;
}

// private void OnChanged() [instance] :1693
void Select::OnChanged()
{
    uStackFrame __("Fuse.Reactive.Select", "OnChanged()");
    UpdateNodes();

    if (IsRootingCompleted())
    {
        if (IsOn())
            Activate(NULL);
        else
            Deactivate();
    }
}

// private void UpdateNodes() [instance] :1705
void Select::UpdateNodes()
{
    uStackFrame __("Fuse.Reactive.Select", "UpdateNodes()");
    ::g::Fuse::Node* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Nodes()), ::TYPES[49/*Uno.Collections.IEnumerable<Fuse.Node>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[46/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[81/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret3), ret3);
        uPtr(n)->DataContext(_data);
    }
}

// public generated Select New() [static] :1677
Select* Select::New2()
{
    Select* obj2 = (Select*)uNew(Select_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// internal partial sealed class ThreadWorker :1969
// {
static void ThreadWorker_build(uType* type)
{
    ::STRINGS[59] = uString::Const("(class)");
    ::STRINGS[60] = uString::Const("(function(external_object) { this.external_object = external_object; })");
    ::STRINGS[61] = uString::Const("(set-superclass)");
    ::STRINGS[62] = uString::Const("(function(cl, superclass) { cl.prototype = new superclass(); cl.prototype.constructor = cl; })");
    ::STRINGS[63] = uString::Const("(func)");
    ::STRINGS[64] = uString::Const("(function (cl, callback) { cl.prototype.");
    ::STRINGS[65] = uString::Const(" = function() { callback(this.external_object, Array.prototype.slice.call(arguments)); }})");
    ::STRINGS[66] = uString::Const("Could not create script context");
    ::STRINGS[67] = uString::Const("external_object");
    ::TYPES[39] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[82] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[83] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::g::Fuse::Scripting::Function_typeof());
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[84] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[85] = ::g::Uno::EventHandler_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[11] = uObject_typeof()->Array();
    ::TYPES[7] = uObject_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[67] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[41] = ::g::Uno::Exception_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[86] = ::g::Uno::Float2_typeof();
    ::TYPES[87] = ::g::Uno::Float3_typeof();
    ::TYPES[88] = ::g::Uno::Float4_typeof();
    ::TYPES[89] = ::g::Uno::Int2_typeof();
    ::TYPES[90] = ::g::Uno::Int3_typeof();
    ::TYPES[91] = ::g::Uno::Int4_typeof();
    ::TYPES[65] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[24] = ::g::Uno::Float_typeof();
    ::TYPES[23] = ::g::Uno::Int_typeof();
    ::TYPES[92] = ::g::Uno::UInt_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _exceptionQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _isReady), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _isReadyMutex), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _queue), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::g::Fuse::Scripting::Function_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _registeredClasses), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _setSuperclass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _subscribedForClosing), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, CanExecuteJavaScript), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, Pause), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_fuseJS_, uFieldFlagsStatic);
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_build_ = ThreadWorker_build;
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    return type;
}

// public ThreadWorker() :2013
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :2138
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :2000
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Uno.Threading.IDispatcher ownerThread) :1971
void ThreadWorker__CreateContext_fn(uObject* ownerThread, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(ownerThread);
}

// public void Dispose() :2033
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() :2003
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = __this->FuseJS();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) :2180
void ThreadWorker__GetClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->GetClass(sc);
}

// public void Invoke(Uno.Action action) :2147
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// internal bool get_IsJavaScriptVMReady() :1984
void ThreadWorker__get_IsJavaScriptVMReady_fn(ThreadWorker* __this, bool* __retval)
{
    *__retval = __this->IsJavaScriptVMReady();
}

// private void set_IsJavaScriptVMReady(bool value) :1991
void ThreadWorker__set_IsJavaScriptVMReady_fn(ThreadWorker* __this, bool* value)
{
    __this->IsJavaScriptVMReady(*value);
}

// public ThreadWorker New() :2013
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnClosing(object sender, Uno.EventArgs args) :2028
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnClosing(sender, args);
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) :2191
void ThreadWorker__RegisterClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->RegisterClass(sc);
}

// private void Run() :2041
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private static Fuse.Scripting.Array ToArray(float2 v) :2299
void ThreadWorker__ToArray_fn(::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray(*v);
}

// private static Fuse.Scripting.Array ToArray(float3 v) :2304
void ThreadWorker__ToArray1_fn(::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray1(*v);
}

// private static Fuse.Scripting.Array ToArray(float4 v) :2309
void ThreadWorker__ToArray2_fn(::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray2(*v);
}

// private static Fuse.Scripting.Array ToArray(int2 v) :2314
void ThreadWorker__ToArray3_fn(::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray3(*v);
}

// private static Fuse.Scripting.Array ToArray(int3 v) :2319
void ThreadWorker__ToArray4_fn(::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray4(*v);
}

// private static Fuse.Scripting.Array ToArray(int4 v) :2324
void ThreadWorker__ToArray5_fn(::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray5(*v);
}

// public object Unwrap(object dc) :2281
void ThreadWorker__Unwrap_fn(ThreadWorker* __this, uObject* dc, uObject** __retval)
{
    *__retval = __this->Unwrap(dc);
}

// public static object Wrap(object obj) :2255
void ThreadWorker__Wrap_fn(uObject* obj, uObject** __retval)
{
    *__retval = ThreadWorker::Wrap(obj);
}

// private object WrapScriptClass(object obj) :2165
void ThreadWorker__WrapScriptClass_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->WrapScriptClass(obj);
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :2013
void ThreadWorker::ctor_()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", ".ctor()");
    _isReadyMutex = ::g::Uno::Threading::Mutex::Create();
    CanExecuteJavaScript = ::g::Uno::Threading::Mutex::Create();
    Pause = ::g::Uno::Threading::Mutex::Create();
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[39/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[82/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
    _registeredClasses = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[83/*Uno.Collections.Dictionary<Fuse.Scripting.ScriptClass, Fuse.Scripting.Function>*/]));
    ::g::Uno::Threading::Thread* thread = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ThreadWorker__Run_fn, this));
    uPtr(thread)->Start();
}

// public void CheckAndThrow() [instance] :2138
void ThreadWorker::CheckAndThrow()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CheckAndThrow()");
    bool ret2;
    ::g::Uno::Exception* e = NULL;

    if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&e), &ret2), ret2))
        U_THROW(e);
}

// public Fuse.Scripting.Context get_Context() [instance] :2000
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_Context()");
    return ThreadWorker::_context_;
}

// public void Dispose() [instance] :2033
void ThreadWorker::Dispose()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Dispose()");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(uDelegate::New(::TYPES[85/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    _terminate = true;
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() [instance] :2003
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_FuseJS()");
    return ThreadWorker::_fuseJS_;
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) [instance] :2180
::g::Fuse::Scripting::Function* ThreadWorker::GetClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "GetClass(Fuse.Scripting.ScriptClass)");
    bool ret3;
    ::g::Fuse::Scripting::Function* cl;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_registeredClasses), sc, (void**)(&cl), &ret3), ret3))
    {
        cl = RegisterClass(sc);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_registeredClasses), sc, cl);
    }

    return cl;
}

// public void Invoke(Uno.Action action) [instance] :2147
void ThreadWorker::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Invoke(Uno.Action)");
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// internal bool get_IsJavaScriptVMReady() [instance] :1984
bool ThreadWorker::IsJavaScriptVMReady()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_IsJavaScriptVMReady()");
    uPtr(_isReadyMutex)->Lock();
    bool ready = _isReady;
    uPtr(_isReadyMutex)->Unlock();
    return ready;
}

// private void set_IsJavaScriptVMReady(bool value) [instance] :1991
void ThreadWorker::IsJavaScriptVMReady(bool value)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "set_IsJavaScriptVMReady(bool)");
    uPtr(_isReadyMutex)->Lock();
    _isReady = value;
    uPtr(_isReadyMutex)->Unlock();
}

// private void OnClosing(object sender, Uno.EventArgs args) [instance] :2028
void ThreadWorker::OnClosing(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "OnClosing(object,Uno.EventArgs)");
    Dispose();
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) [instance] :2191
::g::Fuse::Scripting::Function* ThreadWorker::RegisterClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "RegisterClass(Fuse.Scripting.ScriptClass)");
    ::g::Fuse::Scripting::Function* cl = uCast< ::g::Fuse::Scripting::Function*>(uPtr(ThreadWorker::_context_)->Evaluate(::STRINGS[59/*"(class)"*/], ::STRINGS[60/*"(function(e...*/]), ::TYPES[25/*Fuse.Scripting.Function*/]);

    if (uPtr(sc)->SuperType() != NULL)
    {
        ::g::Fuse::Scripting::Function* super = RegisterClass(uPtr(sc)->SuperType());

        if (_setSuperclass == NULL)
            _setSuperclass = uCast< ::g::Fuse::Scripting::Function*>(uPtr(ThreadWorker::_context_)->Evaluate(::STRINGS[61/*"(set-superc...*/], ::STRINGS[62/*"(function(c...*/]), ::TYPES[25/*Fuse.Scripting.Function*/]);

        uPtr(_setSuperclass)->Call(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 2, cl, super));
    }

    for (int i = 0; i < uPtr(uPtr(sc)->Methods())->Length(); i++)
    {
        uString* methodName = uPtr(uPtr(uPtr(sc)->Methods())->Strong< ::g::Fuse::Scripting::ScriptMethod*>(i))->Name;
        uDelegate* callback = uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__MethodClosure__Callback_fn, ThreadWorker__MethodClosure::New1(uPtr(sc->Methods())->Strong< ::g::Fuse::Scripting::ScriptMethod*>(i), this));
        ::g::Fuse::Scripting::Function* factory = uCast< ::g::Fuse::Scripting::Function*>(uPtr(ThreadWorker::_context_)->Evaluate(::STRINGS[63/*"(func)"*/], ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[64/*"(function (...*/], methodName), ::STRINGS[65/*" = function...*/])), ::TYPES[25/*Fuse.Scripting.Function*/]);
        uPtr(factory)->Call(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 2, cl, callback));
    }

    return cl;
}

// private void Run() [instance] :2041
void ThreadWorker::Run()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Run()");
    bool ret4;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(CanExecuteJavaScript);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[29/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (ThreadWorker::_context_ == NULL)
        {
            ThreadWorker::_context_ = ThreadWorker::CreateContext((uObject*)this);

            if (ThreadWorker::_context_ == NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[66/*"Could not c...*/]));

            ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
            ThreadWorker::_fuseJS_ = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context_);
        }
    }

    IsJavaScriptVMReady(true);
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (!_terminate)
    {
        uAutoReleasePool ____pool;

        if (!_subscribedForClosing)
        {
            if (::g::Uno::Application::Current() != NULL)
            {
                uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[85/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
                _subscribedForClosing = true;
            }
        }

        bool didAnything = false;
        uObject* lg1 = ::g::Uno::Threading::LockGuard::Acquire(CanExecuteJavaScript);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg1), ::TYPES[29/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            uDelegate* action;

            if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret4), ret4))
            {
                try
                {
                    didAnything = true;
                    uPtr(action)->InvokeVoid();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
                }
            }

            try
            {
                uPtr(ThreadWorker::_fuseJS_)->UpdateModules(ThreadWorker::_context_);
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e1 = __t.Exception;
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e1);
            }
        }

        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }

        uObject* lg2 = ::g::Uno::Threading::LockGuard::Acquire(Pause);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg2), ::TYPES[29/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        }
    }
}

// public object Unwrap(object dc) [instance] :2281
uObject* ThreadWorker::Unwrap(uObject* dc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Unwrap(object)");

    if (dc == NULL)
        return NULL;
    else if (uIs(dc, ::TYPES[17/*string*/]))
        return dc;
    else if (uIs(dc, ::TYPES[30/*Fuse.Reactive.Observable*/]))
        return uPtr(uCast< ::g::Fuse::Reactive::Observable*>(dc, ::TYPES[30/*Fuse.Reactive.Observable*/]))->Object;
    else if (uIs(dc, ::TYPES[26/*Fuse.Scripting.Object*/]))
        return dc;
    else if (uIs(dc, ::TYPES[27/*Fuse.Scripting.Array*/]))
        return dc;
    else if (uIs(dc, ::TYPES[25/*Fuse.Scripting.Function*/]))
        return dc;
    else if (uIs(dc, ::TYPES[86/*float2*/]))
        return ThreadWorker::ToArray(uUnbox< ::g::Uno::Float2>(::TYPES[86/*float2*/], dc));
    else if (uIs(dc, ::TYPES[87/*float3*/]))
        return ThreadWorker::ToArray1(uUnbox< ::g::Uno::Float3>(::TYPES[87/*float3*/], dc));
    else if (uIs(dc, ::TYPES[88/*float4*/]))
        return ThreadWorker::ToArray2(uUnbox< ::g::Uno::Float4>(::TYPES[88/*float4*/], dc));
    else if (uIs(dc, ::TYPES[89/*int2*/]))
        return ThreadWorker::ToArray3(uUnbox< ::g::Uno::Int2>(::TYPES[89/*int2*/], dc));
    else if (uIs(dc, ::TYPES[90/*int3*/]))
        return ThreadWorker::ToArray4(uUnbox< ::g::Uno::Int3>(::TYPES[90/*int3*/], dc));
    else if (uIs(dc, ::TYPES[91/*int4*/]))
        return ThreadWorker::ToArray5(uUnbox< ::g::Uno::Int4>(::TYPES[91/*int4*/], dc));
    else if (::g::Uno::Type::IsClass(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return WrapScriptClass(dc);
    else
        return dc;
}

// private object WrapScriptClass(object obj) [instance] :2165
uObject* ThreadWorker::WrapScriptClass(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "WrapScriptClass(object)");
    ::g::Fuse::Scripting::External* ext = ::g::Fuse::Scripting::External::New1(obj);
    ::g::Fuse::Scripting::ScriptClass* sc = ::g::Fuse::Scripting::ScriptClass::Get(::g::Uno::Object::GetType(uPtr(obj)));

    if (sc == NULL)
        return ext;

    ::g::Fuse::Scripting::Function* ctor = GetClass(sc);
    return uPtr(ctor)->Construct(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, ext));
}

// internal static Fuse.Scripting.Context CreateContext(Uno.Threading.IDispatcher ownerThread) [static] :1971
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* ownerThread)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CreateContext(Uno.Threading.IDispatcher)");
    return ::g::Fuse::Scripting::JavaScriptCore::Context::New1(ownerThread);
}

// public ThreadWorker New() [static] :2013
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}

// private static Fuse.Scripting.Array ToArray(float2 v) [static] :2299
::g::Fuse::Scripting::Array* ThreadWorker::ToArray(::g::Uno::Float2 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float2)");
    return uPtr(ThreadWorker::_context_)->NewArray(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 2, uBox(::TYPES[16/*double*/], (double)v.X), uBox(::TYPES[16/*double*/], (double)v.Y)));
}

// private static Fuse.Scripting.Array ToArray(float3 v) [static] :2304
::g::Fuse::Scripting::Array* ThreadWorker::ToArray1(::g::Uno::Float3 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float3)");
    return uPtr(ThreadWorker::_context_)->NewArray(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 3, uBox(::TYPES[16/*double*/], (double)v.X), uBox(::TYPES[16/*double*/], (double)v.Y), uBox(::TYPES[16/*double*/], (double)v.Z)));
}

// private static Fuse.Scripting.Array ToArray(float4 v) [static] :2309
::g::Fuse::Scripting::Array* ThreadWorker::ToArray2(::g::Uno::Float4 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float4)");
    return uPtr(ThreadWorker::_context_)->NewArray(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 4, uBox(::TYPES[16/*double*/], (double)v.X), uBox(::TYPES[16/*double*/], (double)v.Y), uBox(::TYPES[16/*double*/], (double)v.Z), uBox(::TYPES[16/*double*/], (double)v.W)));
}

// private static Fuse.Scripting.Array ToArray(int2 v) [static] :2314
::g::Fuse::Scripting::Array* ThreadWorker::ToArray3(::g::Uno::Int2 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int2)");
    return uPtr(ThreadWorker::_context_)->NewArray(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 2, uBox(::TYPES[16/*double*/], (double)v.X), uBox(::TYPES[16/*double*/], (double)v.Y)));
}

// private static Fuse.Scripting.Array ToArray(int3 v) [static] :2319
::g::Fuse::Scripting::Array* ThreadWorker::ToArray4(::g::Uno::Int3 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int3)");
    return uPtr(ThreadWorker::_context_)->NewArray(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 3, uBox(::TYPES[16/*double*/], (double)v.X), uBox(::TYPES[16/*double*/], (double)v.Y), uBox(::TYPES[16/*double*/], (double)v.Z)));
}

// private static Fuse.Scripting.Array ToArray(int4 v) [static] :2324
::g::Fuse::Scripting::Array* ThreadWorker::ToArray5(::g::Uno::Int4 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int4)");
    return uPtr(ThreadWorker::_context_)->NewArray(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 4, uBox(::TYPES[16/*double*/], (double)v.X), uBox(::TYPES[16/*double*/], (double)v.Y), uBox(::TYPES[16/*double*/], (double)v.Z), uBox(::TYPES[16/*double*/], (double)v.W)));
}

// public static object Wrap(object obj) [static] :2255
uObject* ThreadWorker::Wrap(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Wrap(object)");

    if (uIs(obj, ::TYPES[65/*Fuse.Scripting.External*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[65/*Fuse.Scripting.External*/]))->Object;
    else if (uIs(obj, ::TYPES[26/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* sobj = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[26/*Fuse.Scripting.Object*/]);

        if (uPtr(sobj)->ContainsKey(::STRINGS[67/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[67/*"external_ob...*/]), ::TYPES[65/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }

        if (uPtr(sobj)->InstanceOf(uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->FuseJS())->Observable))
            return ::g::Fuse::Reactive::Observable::New2(sobj);
    }

    if (uIs(obj, ::TYPES[24/*float*/]))
        return uBox(::TYPES[16/*double*/], (double)uUnbox<float>(::TYPES[24/*float*/], obj));

    if (uIs(obj, ::TYPES[23/*int*/]))
        return uBox(::TYPES[16/*double*/], (double)uUnbox<int>(::TYPES[23/*int*/], obj));

    if (uIs(obj, ::TYPES[92/*uint*/]))
        return uBox(::TYPES[16/*double*/], (double)uUnbox<uint32_t>(::TYPES[92/*uint*/], obj));

    return obj;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public class WhileCount :2341
// {
static void WhileCount_build(uType* type)
{
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[31] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[11] = uObject_typeof()->Array();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileCount_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileCount_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileCount_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileCount_type, interface4),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(WhileCount_type, interface5));
    type->SetFields(27,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _isRooting), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanValue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _oldCount), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _subscription), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_EqualTo", NULL, (void*)WhileCount__get_EqualTo_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileCount__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileCount__get_GreaterThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileCount__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Items", NULL, (void*)WhileCount__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)WhileCount__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileCount__get_LessThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileCount__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileCount__New2_fn, 0, true, WhileCount_typeof(), 0));
}

WhileCount_type* WhileCount_typeof()
{
    static uSStrong<WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 37;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileCount);
    options.TypeSize = sizeof(WhileCount_type);
    type = (WhileCount_type*)uClassType::New("Fuse.Reactive.WhileCount", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = WhileCount_build;
    type->fp_ctor_ = (void*)WhileCount__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileCount__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileCount__OnUnrooted_fn;
    type->interface5.fp_OnSet = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface5.fp_OnFailed = (void(*)(uObject*, uString*))WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface5.fp_OnAdd = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface5.fp_OnRemove = (void(*)(uObject*, uObject*, int*))WhileCount__FuseReactiveIObserverOnRemove_fn;
    type->interface5.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface5.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface5.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileCount() :2341
void WhileCount__ctor_4_fn(WhileCount* __this)
{
    __this->ctor_4();
}

// private void Assess(int count) :2415
void WhileCount__Assess_fn(WhileCount* __this, int* count)
{
    __this->Assess(*count);
}

// public int get_EqualTo() :2459
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->EqualTo();
}

// public void set_EqualTo(int value) :2460
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value)
{
    __this->EqualTo(*value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :2477
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :2473
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnFailed(string)");
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :2490
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array values) :2495
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, ::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array)");
    __this->Assess(uPtr(values)->Length());
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :2486
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value)
{
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :2481
void WhileCount__FuseReactiveIObserverOnRemove_fn(WhileCount* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    __this->Assess(__this->_oldCount - 1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :2469
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->Assess(1);
}

// public int get_GreaterThan() :2447
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(int value) :2448
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value)
{
    __this->GreaterThan(*value);
}

// public object get_Items() :2368
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :2369
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value)
{
    __this->Items(value);
}

// public int get_LessThan() :2435
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(int value) :2436
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value)
{
    __this->LessThan(*value);
}

// public generated WhileCount New() :2341
void WhileCount__New2_fn(WhileCount** __retval)
{
    *__retval = WhileCount::New2();
}

// private void OnItemsChanged() :2379
void WhileCount__OnItemsChanged_fn(WhileCount* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :2344
void WhileCount__OnRooted_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_isRooting = true;
    __this->OnItemsChanged();
    __this->_isRooting = false;
}

// protected override sealed void OnUnrooted() :2352
void WhileCount__OnUnrooted_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnUnrooted()");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->Assess(0);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void Reassess() :2393
void WhileCount__Reassess_fn(WhileCount* __this)
{
    __this->Reassess();
}

// public generated WhileCount() [instance] :2341
void WhileCount::ctor_4()
{
    uStackFrame __("Fuse.Reactive.WhileCount", ".ctor()");
    ctor_3();
}

// private void Assess(int count) [instance] :2415
void WhileCount::Assess(int count)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Assess(int)");
    _oldCount = count;

    if (((_equalToMode && (count == _equalToValue)) || (_lessThanMode && (count < _lessThanValue))) || (_greaterThanMode && (count > _greaterThanValue)))
        Activate(NULL);
    else
        Deactivate();
}

// public int get_EqualTo() [instance] :2459
int WhileCount::EqualTo()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_EqualTo()");
    return _equalToValue;
}

// public void set_EqualTo(int value) [instance] :2460
void WhileCount::EqualTo(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_EqualTo(int)");
    _equalToMode = true;
    _equalToValue = value;
}

// public int get_GreaterThan() [instance] :2447
int WhileCount::GreaterThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_GreaterThan()");
    return _greaterThanValue;
}

// public void set_GreaterThan(int value) [instance] :2448
void WhileCount::GreaterThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_GreaterThan(int)");
    _greaterThanMode = true;
    _greaterThanValue = value;
}

// public object get_Items() [instance] :2368
uObject* WhileCount::Items()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :2369
void WhileCount::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public int get_LessThan() [instance] :2435
int WhileCount::LessThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_LessThan()");
    return _lessThanValue;
}

// public void set_LessThan(int value) [instance] :2436
void WhileCount::LessThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_LessThan(int)");
    _lessThanMode = true;
    _lessThanValue = value;
}

// private void OnItemsChanged() [instance] :2379
void WhileCount::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnItemsChanged()");
    ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[30/*Fuse.Reactive.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[29/*Uno.IDisposable*/]));

        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else
        Reassess();
}

// private void Reassess() [instance] :2393
void WhileCount::Reassess()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Reassess()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[11/*object[]*/]);

    if (e != NULL)
        Assess(uPtr(e)->Length());
    else
    {
        ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[30/*Fuse.Reactive.Observable*/]);
        ::g::Fuse::Scripting::Array* a = (obs != NULL) ? (::g::Fuse::Scripting::Array*)uPtr(obs)->Values() : uAs< ::g::Fuse::Scripting::Array*>(_items, ::TYPES[27/*Fuse.Scripting.Array*/]);

        if (a != NULL)
            Assess(uPtr(a)->Length());
    }
}

// public generated WhileCount New() [static] :2341
WhileCount* WhileCount::New2()
{
    WhileCount* obj1 = (WhileCount*)uNew(WhileCount_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileEmpty :2512
// {
static void WhileEmpty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface4),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface5));
    type->SetFields(37);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEmpty__New3_fn, 0, true, WhileEmpty_typeof(), 0));
}

::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 37;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileEmpty", options);
    type->SetBase(::g::Fuse::Reactive::WhileCount_typeof());
    type->fp_build_ = WhileEmpty_build;
    type->fp_ctor_ = (void*)WhileEmpty__New3_fn;
    type->interface5.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface5.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface5.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface5.fp_OnRemove = (void(*)(uObject*, uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemove_fn;
    type->interface5.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface5.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface5.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileEmpty() :2514
void WhileEmpty__ctor_5_fn(WhileEmpty* __this)
{
    __this->ctor_5();
}

// public WhileEmpty New() :2514
void WhileEmpty__New3_fn(WhileEmpty** __retval)
{
    *__retval = WhileEmpty::New3();
}

// public WhileEmpty() [instance] :2514
void WhileEmpty::ctor_5()
{
    uStackFrame __("Fuse.Reactive.WhileEmpty", ".ctor()");
    ctor_4();
    EqualTo(0);
}

// public WhileEmpty New() [static] :2514
WhileEmpty* WhileEmpty::New3()
{
    WhileEmpty* obj1 = (WhileEmpty*)uNew(WhileEmpty_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
