// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IObserver :1174
// {
uInterfaceType* IObserver_typeof();

struct IObserver
{
    void(*fp_OnAdd)(uObject*, uObject*);
    void(*fp_OnFailed)(uObject*, uString*);
    void(*fp_OnInsertAt)(uObject*, int*, uObject*);
    void(*fp_OnNewAll)(uObject*, ::g::Fuse::Scripting::Array*);
    void(*fp_OnNewAt)(uObject*, int*, uObject*);
    void(*fp_OnRemove)(uObject*, uObject*, int*);
    void(*fp_OnSet)(uObject*, uObject*);
    static void OnAdd(const uInterface& __this, uObject* addedValue) { __this.VTable<IObserver>()->fp_OnAdd(__this, addedValue); }
    static void OnFailed(const uInterface& __this, uString* message) { __this.VTable<IObserver>()->fp_OnFailed(__this, message); }
    static void OnInsertAt(const uInterface& __this, int index, uObject* value) { __this.VTable<IObserver>()->fp_OnInsertAt(__this, &index, value); }
    static void OnNewAll(const uInterface& __this, ::g::Fuse::Scripting::Array* values) { __this.VTable<IObserver>()->fp_OnNewAll(__this, values); }
    static void OnNewAt(const uInterface& __this, int index, uObject* newValue) { __this.VTable<IObserver>()->fp_OnNewAt(__this, &index, newValue); }
    static void OnRemove(const uInterface& __this, uObject* value, int index) { __this.VTable<IObserver>()->fp_OnRemove(__this, value, &index); }
    static void OnSet(const uInterface& __this, uObject* newValue) { __this.VTable<IObserver>()->fp_OnSet(__this, newValue); }
};
// }

}}} // ::g::Fuse::Reactive
