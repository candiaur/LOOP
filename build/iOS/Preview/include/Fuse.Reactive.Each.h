// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.ITemplateObserver.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Each :561
// {
struct Each_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Reactive::IObserver interface4;
    ::g::Fuse::ITemplateObserver interface5;
};

Each_type* Each_typeof();
void Each__ctor_3_fn(Each* __this);
void Each__ctor_4_fn(Each* __this, uObject* templates);
void Each__AddNew_fn(Each* __this, uObject* dataContext);
void Each__AddTemplate_fn(Each* __this, ::g::Uno::UX::Template* f, uObject* dataContext, ::g::Uno::Collections::List* newElements);
void Each__get_Count_fn(Each* __this, int* __retval);
void Each__set_Count_fn(Each* __this, int* value);
void Each__FuseITemplateObserverOnTemplatesChangedWileRooted_fn(Each* __this);
void Each__FuseReactiveIObserverOnAdd_fn(Each* __this, uObject* addedValue);
void Each__FuseReactiveIObserverOnFailed_fn(Each* __this, uString* message);
void Each__FuseReactiveIObserverOnInsertAt_fn(Each* __this, int* index, uObject* value);
void Each__FuseReactiveIObserverOnNewAll_fn(Each* __this, ::g::Fuse::Scripting::Array* values);
void Each__FuseReactiveIObserverOnNewAt_fn(Each* __this, int* index, uObject* value);
void Each__FuseReactiveIObserverOnRemove_fn(Each* __this, uObject* value, int* index);
void Each__FuseReactiveIObserverOnSet_fn(Each* __this, uObject* newValue);
void Each__GetEach_fn(::g::Fuse::Visual* container, Each** __retval);
void Each__GetItems_fn(::g::Fuse::Visual* container, uObject** __retval);
void Each__GetMatchKey_fn(::g::Fuse::Visual* container, uString** __retval);
void Each__GetMatchKey1_fn(Each* __this, uObject* dataContext, uString** __retval);
void Each__InsertNew_fn(Each* __this, int* index, uObject* dataContext);
void Each__IsUnchanged_fn(Each* __this, uArray* newDcs, bool* __retval);
void Each__get_Items_fn(Each* __this, uObject** __retval);
void Each__set_Items_fn(Each* __this, uObject* value);
void Each__get_MatchKey_fn(Each* __this, uString** __retval);
void Each__set_MatchKey_fn(Each* __this, uString* value);
void Each__New2_fn(Each** __retval);
void Each__New3_fn(uObject* templates, Each** __retval);
void Each__OnItemsChanged_fn(Each* __this);
void Each__OnRooted_fn(Each* __this);
void Each__OnTemplatesChanged_fn(Each* __this, ::g::Uno::UX::Template* factory);
void Each__OnUnrooted_fn(Each* __this);
void Each__RemoveAll_fn(Each* __this);
void Each__ReplaceAll_fn(Each* __this, uArray* dcs);
void Each__Repopulate_fn(Each* __this);
void Each__SetFailed_fn(Each* __this, uString* message);
void Each__SetItems_fn(::g::Fuse::Visual* container, uObject* items);
void Each__SetMatchKey_fn(::g::Fuse::Visual* container, uString* key);
void Each__SetValid_fn(Each* __this);
void Each__get_TemplateKey_fn(Each* __this, uString** __retval);
void Each__set_TemplateKey_fn(Each* __this, uString* value);
void Each__get_Templates_fn(Each* __this, uObject** __retval);
void Each__get_TemplateSource_fn(Each* __this, ::g::Fuse::Visual** __retval);
void Each__set_TemplateSource_fn(Each* __this, ::g::Fuse::Visual* value);

struct Each : ::g::Fuse::Behavior
{
    int _count;
    static uSStrong< ::g::Fuse::PropertyHandle*> _eachHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _eachHandle() { return Each_typeof()->Init(), _eachHandle_; }
    uStrong<uObject*> _items;
    uStrong<uString*> _matchKey;
    uStrong< ::g::Uno::Collections::List*> _nodes;
    uStrong<uObject*> _subscription;
    uStrong<uObject*> _templates;
    uStrong<uString*> _TemplateKey;
    uStrong< ::g::Fuse::Visual*> _TemplateSource;

    void ctor_3();
    void ctor_4(uObject* templates);
    void AddNew(uObject* dataContext);
    void AddTemplate(::g::Uno::UX::Template* f, uObject* dataContext, ::g::Uno::Collections::List* newElements);
    int Count();
    void Count(int value);
    uString* GetMatchKey1(uObject* dataContext);
    void InsertNew(int index, uObject* dataContext);
    bool IsUnchanged(uArray* newDcs);
    uObject* Items();
    void Items(uObject* value);
    uString* MatchKey();
    void MatchKey(uString* value);
    void OnItemsChanged();
    void OnTemplatesChanged(::g::Uno::UX::Template* factory);
    void RemoveAll();
    void ReplaceAll(uArray* dcs);
    void Repopulate();
    void SetFailed(uString* message);
    void SetValid();
    uString* TemplateKey();
    void TemplateKey(uString* value);
    uObject* Templates();
    ::g::Fuse::Visual* TemplateSource();
    void TemplateSource(::g::Fuse::Visual* value);
    static Each* GetEach(::g::Fuse::Visual* container);
    static uObject* GetItems(::g::Fuse::Visual* container);
    static uString* GetMatchKey(::g::Fuse::Visual* container);
    static Each* New2();
    static Each* New3(uObject* templates);
    static void SetItems(::g::Fuse::Visual* container, uObject* items);
    static void SetMatchKey(::g::Fuse::Visual* container, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
