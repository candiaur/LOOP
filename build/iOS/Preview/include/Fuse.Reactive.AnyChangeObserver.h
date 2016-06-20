// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/Subscription/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct AnyChangeObserver;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class AnyChangeObserver :11
// {
struct AnyChangeObserver_type : uType
{
    ::g::Fuse::Reactive::IObserver interface0;
};

AnyChangeObserver_type* AnyChangeObserver_typeof();
void AnyChangeObserver__ctor__fn(AnyChangeObserver* __this, uDelegate* anyChange);
void AnyChangeObserver__New1_fn(uDelegate* anyChange, AnyChangeObserver** __retval);
void AnyChangeObserver__OnAdd_fn(AnyChangeObserver* __this, uObject* addedValue);
void AnyChangeObserver__OnFailed_fn(AnyChangeObserver* __this, uString* message);
void AnyChangeObserver__OnInsertAt_fn(AnyChangeObserver* __this, int* index, uObject* value);
void AnyChangeObserver__OnNewAll_fn(AnyChangeObserver* __this, ::g::Fuse::Scripting::Array* values);
void AnyChangeObserver__OnNewAt_fn(AnyChangeObserver* __this, int* index, uObject* newValue);
void AnyChangeObserver__OnRemove_fn(AnyChangeObserver* __this, uObject* value, int* index);
void AnyChangeObserver__OnSet_fn(AnyChangeObserver* __this, uObject* value);

struct AnyChangeObserver : uObject
{
    uStrong<uDelegate*> _anyChange;
    bool _hasInitialValue;

    void ctor_(uDelegate* anyChange);
    void OnAdd(uObject* addedValue);
    void OnFailed(uString* message);
    void OnInsertAt(int index, uObject* value);
    void OnNewAll(::g::Fuse::Scripting::Array* values);
    void OnNewAt(int index, uObject* newValue);
    void OnRemove(uObject* value, int index);
    void OnSet(uObject* value);
    static AnyChangeObserver* New1(uDelegate* anyChange);
};
// }

}}} // ::g::Fuse::Reactive
