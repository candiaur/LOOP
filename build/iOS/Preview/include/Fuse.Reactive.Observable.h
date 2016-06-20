// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObservableSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class Observable :1739
// {
uType* Observable_typeof();
void Observable__ctor__fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker);
void Observable__ctor_1_fn(Observable* __this, ::g::Fuse::Scripting::Object* obj);
void Observable__Equals_fn(Observable* __this, uObject* obj, bool* __retval);
void Observable__GetHashCode_fn(Observable* __this, int* __retval);
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, Observable** __retval);
void Observable__New2_fn(::g::Fuse::Scripting::Object* obj, Observable** __retval);
void Observable__Subscribe_fn(Observable* __this, uObject* observer, ::g::Fuse::Reactive::ObservableSubscription** __retval);
void Observable__get_Values_fn(Observable* __this, ::g::Fuse::Scripting::Array** __retval);

struct Observable : uObject
{
    uStrong< ::g::Fuse::Scripting::Object*> Object;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker);
    void ctor_1(::g::Fuse::Scripting::Object* obj);
    ::g::Fuse::Reactive::ObservableSubscription* Subscribe(uObject* observer);
    ::g::Fuse::Scripting::Array* Values();
    static Observable* New1(::g::Fuse::Reactive::ThreadWorker* worker);
    static Observable* New2(::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Reactive
