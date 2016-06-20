// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Bindings.NativeViews.NativeView.h>
#include <Fuse.iOS.Bindings.NativeViews.NativeViewHost.h>
#include <OpenGL.GLTextureHandle.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace NativeViews{

// internal sealed extern class NativeViewHost :590
// {
static void NativeViewHost_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface3));
    type->SetFields(13,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeViewHost, _textureHandle), 0);
}

::g::Fuse::iOS::Bindings::NativeViews::NativeView_type* NativeViewHost_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(NativeViewHost);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type);
    type = (::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*)uClassType::New("Fuse.iOS.Bindings.NativeViews.NativeViewHost", options);
    type->SetBase(::g::Fuse::iOS::Bindings::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::NativeViewHost_typeof()));
    type->fp_build_ = NativeViewHost_build;
    type->fp_ctor_ = (void*)NativeViewHost__New2_fn;
    type->fp_get_Parent1 = (void(*)(::g::Fuse::iOS::Bindings::NativeViews::NativeView*, ::g::Fuse::iOS::Bindings::NativeViews::NativeView**))NativeViewHost__get_Parent1_fn;
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

// public generated NativeViewHost() :590
void NativeViewHost__ctor_5_fn(NativeViewHost* __this)
{
    __this->ctor_5();
}

// public generated NativeViewHost New() :590
void NativeViewHost__New2_fn(NativeViewHost** __retval)
{
    *__retval = NativeViewHost::New2();
}

// public override sealed Fuse.iOS.Bindings.NativeViews.NativeView get_Parent() :630
void NativeViewHost__get_Parent1_fn(NativeViewHost* __this, ::g::Fuse::iOS::Bindings::NativeViews::NativeView** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.NativeViewHost", "get_Parent()");
    return *__retval = NULL, void();
}

// public generated NativeViewHost() [instance] :590
void NativeViewHost::ctor_5()
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.NativeViewHost", ".ctor()");
    _textureHandle = ::g::OpenGL::GLTextureHandle::Zero_;
    ctor_4();
}

// public generated NativeViewHost New() [static] :590
NativeViewHost* NativeViewHost::New2()
{
    NativeViewHost* obj1 = (NativeViewHost*)uNew(NativeViewHost_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}}}} // ::g::Fuse::iOS::Bindings::NativeViews
