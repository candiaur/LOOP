// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct LazyObservableProperty;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObservableSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class LazyObservableProperty :1871
// {
struct LazyObservableProperty_type : uType
{
    ::g::Fuse::Reactive::IObserver interface0;
    ::g::Uno::UX::IPropertyListener interface1;
    ::g::Uno::IDisposable interface2;
};

LazyObservableProperty_type* LazyObservableProperty_typeof();
void LazyObservableProperty__ctor__fn(LazyObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
void LazyObservableProperty__Dispose_fn(LazyObservableProperty* __this);
void LazyObservableProperty__FuseReactiveIObserverOnAdd_fn(LazyObservableProperty* __this, uObject* addedValue);
void LazyObservableProperty__FuseReactiveIObserverOnFailed_fn(LazyObservableProperty* __this, uString* message);
void LazyObservableProperty__FuseReactiveIObserverOnInsertAt_fn(LazyObservableProperty* __this, int* index, uObject* value);
void LazyObservableProperty__FuseReactiveIObserverOnNewAll_fn(LazyObservableProperty* __this, ::g::Fuse::Scripting::Array* values);
void LazyObservableProperty__FuseReactiveIObserverOnNewAt_fn(LazyObservableProperty* __this, int* index, uObject* newValue);
void LazyObservableProperty__FuseReactiveIObserverOnRemove_fn(LazyObservableProperty* __this, uObject* value, int* index);
void LazyObservableProperty__FuseReactiveIObserverOnSet_fn(LazyObservableProperty* __this, uObject* newValue);
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval);
void LazyObservableProperty__New1_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval);
void LazyObservableProperty__Set_fn(LazyObservableProperty* __this, uObject* value);
void LazyObservableProperty__Subscribe_fn(LazyObservableProperty* __this);
void LazyObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(LazyObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct LazyObservableProperty : uObject
{
    uStrong< ::g::Fuse::Reactive::Observable*> _observable;
    uStrong< ::g::Uno::UX::Property*> _property;
    uStrong< ::g::Fuse::Reactive::ObservableSubscription*> _subscription;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
    void Dispose();
    uObject* Get(uArray* args);
    void Set(uObject* value);
    void Subscribe();
    static LazyObservableProperty* New1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
};
// }

}}} // ::g::Fuse::Reactive
