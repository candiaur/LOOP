// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct DataContextChangedArgs;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Fuse{

// public interfacemodifiers class Node :3171
// {
struct Node_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Fuse::Scripting::IScriptObject interface1;
    ::g::Uno::Collections::ICollection interface2;
    ::g::Uno::Collections::IEnumerable interface3;
    void(*fp_OnDataContextChanged)(::g::Fuse::Node*, ::g::Fuse::DataContextChangedArgs*);
    void(*fp_OnPreserveRootFrame)(::g::Fuse::Node*);
    void(*fp_OnRooted)(::g::Fuse::Node*);
    void(*fp_OnUnrooted)(::g::Fuse::Node*);
    void(*fp_SoftDispose)(::g::Fuse::Node*);
    void(*fp_SubtreeToString1)(::g::Fuse::Node*, ::g::Uno::Text::StringBuilder*, int*);
    void(*fp_TryGetResource)(::g::Fuse::Node*, uString*, uDelegate*, uObject**, bool*);
    void(*fp_VisitSubtree)(::g::Fuse::Node*, uDelegate*);
};

Node_type* Node_typeof();
void Node__ctor_1_fn(Node* __this);
void Node__Add_fn(Node* __this, ::g::Fuse::Binding* item);
void Node__get_Binding_fn(Node* __this, ::g::Fuse::Binding** __retval);
void Node__get_BindingList_fn(Node* __this, ::g::Uno::Collections::List** __retval);
void Node__get_Bindings_fn(Node* __this, uObject** __retval);
void Node__get_ContextParent_fn(Node* __this, ::g::Fuse::Visual** __retval);
void Node__get_DataContext_fn(Node* __this, uObject** __retval);
void Node__set_DataContext_fn(Node* __this, uObject* value);
void Node__add_DataContextChanged_fn(Node* __this, uDelegate* value);
void Node__remove_DataContextChanged_fn(Node* __this, uDelegate* value);
void Node__DistanceTo_fn(Node* __this, Node* obj, int* reference, int* __retval);
void Node__FindNodeByName_fn(Node* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, Node** __retval);
void Node__FuseScriptingIScriptObjectget_ScriptContext_fn(Node* __this, ::g::Fuse::Scripting::Context** __retval);
void Node__FuseScriptingIScriptObjectget_ScriptObject_fn(Node* __this, uObject** __retval);
void Node__FuseScriptingIScriptObjectSetScriptObject_fn(Node* __this, uObject* obj, ::g::Fuse::Scripting::Context* context);
void Node__HasInSubtree_fn(Node* __this, Node* c, bool* __retval);
void Node__Insert_fn(Node* __this, int* index, ::g::Fuse::Binding* item);
void Node__get_IsPreservedRootFrame_fn(Node* __this, bool* __retval);
void Node__get_IsRootingCompleted_fn(Node* __this, bool* __retval);
void Node__get_IsRootingStarted_fn(Node* __this, bool* __retval);
void Node__IterPreserveRootFrame_fn(Node* __this, Node* n);
void Node__MakeBindingList_fn(Node* __this, ::g::Fuse::Binding* newItem);
void Node__get_Name_fn(Node* __this, ::g::Uno::UX::Selector* __retval);
void Node__set_Name_fn(Node* __this, ::g::Uno::UX::Selector* value);
void Node__OnDataContextChanged_fn(Node* __this, ::g::Fuse::DataContextChangedArgs* args);
void Node__OnPreserveRootFrame_fn(Node* __this);
void Node__OnRooted_fn(Node* __this);
void Node__OnUnrooted_fn(Node* __this);
void Node__get_Parent_fn(Node* __this, ::g::Fuse::Visual** __retval);
void Node__PreserveRootFrame_fn(Node* __this);
void Node__Relate_fn(::g::Fuse::Visual* parent, Node* child);
void Node__Remove_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval);
void Node__Root_fn(Node* __this, ::g::Fuse::Binding* b);
void Node__RootBindings_fn(Node* __this);
void Node__add_RootingCompleted_fn(Node* __this, uDelegate* value);
void Node__remove_RootingCompleted_fn(Node* __this, uDelegate* value);
void Node__RootInternal_fn(Node* __this, ::g::Fuse::Visual* parent);
void Node__SoftDispose_fn(Node* __this);
void Node__SubtreeToString_fn(Node* __this, uString** __retval);
void Node__SubtreeToString1_fn(Node* __this, ::g::Uno::Text::StringBuilder* sb, int* indent);
void Node__TryGetResource_fn(Node* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval);
void Node__UnoCollectionsICollectionFuseBindingClear_fn(Node* __this);
void Node__UnoCollectionsICollectionFuseBindingContains_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval);
void Node__UnoCollectionsICollectionFuseBindingget_Count_fn(Node* __this, int* __retval);
void Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn(Node* __this, uObject** __retval);
void Node__UnoCollectionsIListFuseBindingget_Item_fn(Node* __this, int* index, ::g::Fuse::Binding** __retval);
void Node__UnoCollectionsIListFuseBindingRemoveAt_fn(Node* __this, int* index);
void Node__Unrelate_fn(::g::Fuse::Visual* parent, Node* child);
void Node__Unroot_fn(Node* __this, ::g::Fuse::Binding* b);
void Node__UnrootBindings_fn(Node* __this);
void Node__UnrootInternal_fn(Node* __this);
void Node__VisitSubtree_fn(Node* __this, uDelegate* action);

struct Node : ::g::Uno::UX::PropertyObject
{
    uStrong<uObject*> _bindings;
    uStrong<uObject*> _dataContext;
    static uSStrong<uObject*> _emptyBindings_;
    static uSStrong<uObject*>& _emptyBindings() { return Node_typeof()->Init(), _emptyBindings_; }
    ::g::Uno::UX::Selector _name;
    uStrong< ::g::Fuse::Visual*> _parent;
    int _preservedRootFrame;
    bool _rootingCompletedBit;
    bool _rootingStartedBit;
    uStrong< ::g::Fuse::Scripting::Context*> _scriptContext;
    uStrong<uObject*> _scriptObject;
    uStrong< ::g::Fuse::Visual*> OverrideContextParent;
    uStrong<uDelegate*> DataContextChanged1;
    uStrong<uDelegate*> RootingCompleted1;

    void ctor_1();
    void Add(::g::Fuse::Binding* item);
    ::g::Fuse::Binding* Binding();
    ::g::Uno::Collections::List* BindingList();
    uObject* Bindings();
    ::g::Fuse::Visual* ContextParent();
    uObject* DataContext();
    void DataContext(uObject* value);
    void add_DataContextChanged(uDelegate* value);
    void remove_DataContextChanged(uDelegate* value);
    int DistanceTo(Node* obj, int reference);
    Node* FindNodeByName(::g::Uno::UX::Selector name, uDelegate* acceptor);
    bool HasInSubtree(Node* c);
    void Insert(int index, ::g::Fuse::Binding* item);
    bool IsPreservedRootFrame();
    bool IsRootingCompleted();
    bool IsRootingStarted();
    void IterPreserveRootFrame(Node* n);
    void MakeBindingList(::g::Fuse::Binding* newItem);
    ::g::Uno::UX::Selector Name();
    void Name(::g::Uno::UX::Selector value);
    void OnDataContextChanged(::g::Fuse::DataContextChangedArgs* args) { (((Node_type*)__type)->fp_OnDataContextChanged)(this, args); }
    void OnPreserveRootFrame() { (((Node_type*)__type)->fp_OnPreserveRootFrame)(this); }
    void OnRooted() { (((Node_type*)__type)->fp_OnRooted)(this); }
    void OnUnrooted() { (((Node_type*)__type)->fp_OnUnrooted)(this); }
    ::g::Fuse::Visual* Parent();
    void PreserveRootFrame();
    bool Remove(::g::Fuse::Binding* item);
    void Root(::g::Fuse::Binding* b);
    void RootBindings();
    void add_RootingCompleted(uDelegate* value);
    void remove_RootingCompleted(uDelegate* value);
    void RootInternal(::g::Fuse::Visual* parent);
    void SoftDispose() { (((Node_type*)__type)->fp_SoftDispose)(this); }
    uString* SubtreeToString();
    void SubtreeToString1(::g::Uno::Text::StringBuilder* sb, int indent) { (((Node_type*)__type)->fp_SubtreeToString1)(this, sb, &indent); }
    bool TryGetResource(uString* key, uDelegate* acceptor, uObject** resource) { bool __retval; return (((Node_type*)__type)->fp_TryGetResource)(this, key, acceptor, resource, &__retval), __retval; }
    void Unroot(::g::Fuse::Binding* b);
    void UnrootBindings();
    void UnrootInternal();
    void VisitSubtree(uDelegate* action) { (((Node_type*)__type)->fp_VisitSubtree)(this, action); }
    static void OnDataContextChanged(Node* __this, ::g::Fuse::DataContextChangedArgs* args) { Node__OnDataContextChanged_fn(__this, args); }
    static void OnPreserveRootFrame(Node* __this) { Node__OnPreserveRootFrame_fn(__this); }
    static void OnRooted(Node* __this) { Node__OnRooted_fn(__this); }
    static void OnUnrooted(Node* __this) { Node__OnUnrooted_fn(__this); }
    static void Relate(::g::Fuse::Visual* parent, Node* child);
    static void SoftDispose(Node* __this) { Node__SoftDispose_fn(__this); }
    static void SubtreeToString1(Node* __this, ::g::Uno::Text::StringBuilder* sb, int indent) { Node__SubtreeToString1_fn(__this, sb, &indent); }
    static bool TryGetResource(Node* __this, uString* key, uDelegate* acceptor, uObject** resource) { bool __retval; return Node__TryGetResource_fn(__this, key, acceptor, resource, &__retval), __retval; }
    static void Unrelate(::g::Fuse::Visual* parent, Node* child);
    static void VisitSubtree(Node* __this, uDelegate* action) { Node__VisitSubtree_fn(__this, action); }
};
// }

}} // ::g::Fuse
