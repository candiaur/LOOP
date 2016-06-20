// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNative_bundle.h>
#include <Fuse.iOS.Bindings.NativeViews.ContentControl.h>
#include <Fuse.iOS.Bindings.NativeViews.GenericNativeView.h>
#include <Fuse.iOS.Bindings.NativeViews.LeafNativeView.h>
#include <Fuse.iOS.Bindings.NativeViews.NativeView.h>
#include <Fuse.iOS.Bindings.NativeViews.NativeViewBlitter.h>
#include <Fuse.iOS.Bindings.NativeViews.ParentControl.h>
#include <Fuse.iOS.Bindings.NativeViews.ParentNativeView-1.h>
#include <Fuse.iOS.Bindings.NativeViews.ScrollView.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Visual.h>
#include <iOS.UIKit.UIView.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Float.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace NativeViews{

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class ContentControl :18
// {
static void ContentControl_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface3));
    type->SetFields(13);
}

::g::Fuse::iOS::Bindings::NativeViews::NativeView_type* ContentControl_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ContentControl);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type);
    type = (::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*)uClassType::New("Fuse.iOS.Bindings.NativeViews.ContentControl", options);
    type->SetBase(::g::Fuse::iOS::Bindings::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ContentControl_typeof()));
    type->fp_build_ = ContentControl_build;
    type->fp_ctor_ = (void*)ContentControl__New2_fn;
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

// public generated ContentControl() :18
void ContentControl__ctor_5_fn(ContentControl* __this)
{
    __this->ctor_5();
}

// public generated ContentControl New() :18
void ContentControl__New2_fn(ContentControl** __retval)
{
    *__retval = ContentControl::New2();
}

// public generated ContentControl() [instance] :18
void ContentControl::ctor_5()
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.ContentControl", ".ctor()");
    ctor_4();
}

// public generated ContentControl New() [static] :18
ContentControl* ContentControl::New2()
{
    ContentControl* obj1 = (ContentControl*)uNew(ContentControl_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class GenericNativeView :46
// {
static void GenericNativeView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface3));
    type->SetFields(13);
}

::g::Fuse::iOS::Bindings::NativeViews::NativeView_type* GenericNativeView_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(GenericNativeView);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type);
    type = (::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*)uClassType::New("Fuse.iOS.Bindings.NativeViews.GenericNativeView", options);
    type->SetBase(::g::Fuse::iOS::Bindings::NativeViews::NativeView_typeof());
    type->fp_build_ = GenericNativeView_build;
    type->fp_ctor_ = (void*)GenericNativeView__New2_fn;
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

// public generated GenericNativeView() :46
void GenericNativeView__ctor_4_fn(GenericNativeView* __this)
{
    __this->ctor_4();
}

// public generated GenericNativeView New() :46
void GenericNativeView__New2_fn(GenericNativeView** __retval)
{
    *__retval = GenericNativeView::New2();
}

// public generated GenericNativeView() [instance] :46
void GenericNativeView::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.GenericNativeView", ".ctor()");
    ctor_3();
}

// public generated GenericNativeView New() [static] :46
GenericNativeView* GenericNativeView::New2()
{
    GenericNativeView* obj1 = (GenericNativeView*)uNew(GenericNativeView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class LeafNativeView :226
// {
static void LeafNativeView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface3));
    type->SetFields(13);
}

::g::Fuse::iOS::Bindings::NativeViews::NativeView_type* LeafNativeView_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(LeafNativeView);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type);
    type = (::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*)uClassType::New("Fuse.iOS.Bindings.NativeViews.LeafNativeView", options);
    type->SetBase(::g::Fuse::iOS::Bindings::NativeViews::NativeView_typeof());
    type->fp_build_ = LeafNativeView_build;
    type->fp_ctor_ = (void*)LeafNativeView__New2_fn;
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

// public generated LeafNativeView() :226
void LeafNativeView__ctor_4_fn(LeafNativeView* __this)
{
    __this->ctor_4();
}

// public generated LeafNativeView New() :226
void LeafNativeView__New2_fn(LeafNativeView** __retval)
{
    *__retval = LeafNativeView::New2();
}

// public generated LeafNativeView() [instance] :226
void LeafNativeView::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.LeafNativeView", ".ctor()");
    ctor_3();
}

// public generated LeafNativeView New() [static] :226
LeafNativeView* LeafNativeView::New2()
{
    LeafNativeView* obj1 = (LeafNativeView*)uNew(LeafNativeView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno
// -------------------------------------------------------------------------

// public abstract extern class NativeView :262
// {
// static NativeView() :262
static void NativeView__cctor_1_fn(uType* __type)
{
    NativeView::_viewHandle_ = ::g::Fuse::Properties::CreateHandle();
    NativeView::_viewMap_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<iOS.UIKit.UIView, Fuse.Visual>*/]));
}

static void NativeView_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::UIKit::UIView_typeof(), ::g::Fuse::Visual_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(NativeView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(NativeView_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(NativeView_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(NativeView_type, interface3));
    type->SetFields(13,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::NativeViews::NativeView::_viewHandle_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::UIKit::UIView_typeof(), ::g::Fuse::Visual_typeof()), (uintptr_t)&::g::Fuse::iOS::Bindings::NativeViews::NativeView::_viewMap_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetFrom", NULL, (void*)NativeView__GetFrom_fn, 0, true, NativeView_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetFrom", NULL, (void*)NativeView__GetFrom1_fn, 0, true, ::g::Fuse::Visual_typeof(), 1, ::g::iOS::UIKit::UIView_typeof()),
        new uFunction("get_Parent", NULL, NULL, offsetof(NativeView_type, fp_get_Parent1), false, NativeView_typeof(), 0));
}

NativeView_type* NativeView_typeof()
{
    static uSStrong<NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(NativeView);
    options.TypeSize = sizeof(NativeView_type);
    type = (NativeView_type*)uClassType::New("Fuse.iOS.Bindings.NativeViews.NativeView", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = NativeView_build;
    type->fp_cctor_ = NativeView__cctor_1_fn;
    type->fp_get_Parent1 = NativeView__get_Parent1_fn;
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

// protected generated NativeView() :262
void NativeView__ctor_3_fn(NativeView* __this)
{
    __this->ctor_3();
}

// public static Fuse.iOS.Bindings.NativeViews.NativeView GetFrom(Fuse.Visual n) :265
void NativeView__GetFrom_fn(::g::Fuse::Visual* n, NativeView** __retval)
{
    *__retval = NativeView::GetFrom(n);
}

// public static Fuse.Visual GetFrom(iOS.UIKit.UIView view) :277
void NativeView__GetFrom1_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::Visual** __retval)
{
    *__retval = NativeView::GetFrom1(view);
}

// public virtual Fuse.iOS.Bindings.NativeViews.NativeView get_Parent() :331
void NativeView__get_Parent1_fn(NativeView* __this, NativeView** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.NativeView", "get_Parent()");
    return *__retval = NULL, void();
}

uSStrong< ::g::Fuse::PropertyHandle*> NativeView::_viewHandle_;
uSStrong< ::g::Uno::Collections::Dictionary*> NativeView::_viewMap_;

// protected generated NativeView() [instance] :262
void NativeView::ctor_3()
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.NativeView", ".ctor()");
    ctor_2();
}

// public static Fuse.iOS.Bindings.NativeViews.NativeView GetFrom(Fuse.Visual n) [static] :265
NativeView* NativeView::GetFrom(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.NativeView", "GetFrom(Fuse.Visual)");
    NativeView_typeof()->Init();
    return (n != NULL) ? uAs<NativeView*>(uPtr(uPtr(n)->Properties())->Get(NativeView::_viewHandle()), NativeView_typeof()) : NULL;
}

// public static Fuse.Visual GetFrom(iOS.UIKit.UIView view) [static] :277
::g::Fuse::Visual* NativeView::GetFrom1(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.NativeView", "GetFrom(iOS.UIKit.UIView)");
    NativeView_typeof()->Init();
    bool ret1;
    ::g::Fuse::Visual* o;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NativeView::_viewMap()), view, (void**)(&o), &ret1), ret1))
        return o;

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno
// -------------------------------------------------------------------------

// internal sealed class NativeViewBlitter :780
// {
// static NativeViewBlitter() :780
static void NativeViewBlitter__cctor__fn(uType* __type)
{
    NativeViewBlitter::Singleton_ = NativeViewBlitter::New1();
}

static void NativeViewBlitter_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeViewBlitter, _draw_c80b8766), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeViewBlitter, Blit_v_c80b8766_3_3_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeViewBlitter, Blit_verts_c80b8766_3_2_5), 0,
        NativeViewBlitter_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::NativeViews::NativeViewBlitter::Singleton_, uFieldFlagsStatic);
}

uType* NativeViewBlitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NativeViewBlitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.Bindings.NativeViews.NativeViewBlitter", options);
    type->fp_build_ = NativeViewBlitter_build;
    type->fp_ctor_ = (void*)NativeViewBlitter__New1_fn;
    type->fp_cctor_ = NativeViewBlitter__cctor__fn;
    return type;
}

// public generated NativeViewBlitter() :780
void NativeViewBlitter__ctor__fn(NativeViewBlitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :784
void NativeViewBlitter__Blit_fn(NativeViewBlitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :780
void NativeViewBlitter__init_DrawCalls_fn(NativeViewBlitter* __this)
{
    __this->init_DrawCalls();
}

// public generated NativeViewBlitter New() :780
void NativeViewBlitter__New1_fn(NativeViewBlitter** __retval)
{
    *__retval = NativeViewBlitter::New1();
}

uSStrong<NativeViewBlitter*> NativeViewBlitter::Singleton_;

// public generated NativeViewBlitter() [instance] :780
void NativeViewBlitter::ctor_()
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.NativeViewBlitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :784
void NativeViewBlitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.NativeViewBlitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_c80b8766.BlendEnabled(true);
    _draw_c80b8766.DepthTestEnabled(false);
    _draw_c80b8766.CullFace(0);
    _draw_c80b8766.BlendSrcAlpha(7);
    _draw_c80b8766.BlendDstRgb(3);
    _draw_c80b8766.Use();
    _draw_c80b8766.Attrib1(0, 2, Blit_v_c80b8766_3_3_1, 8, 0);
    _draw_c80b8766.Uniform2(1, size);
    _draw_c80b8766.Uniform2(2, pos);
    _draw_c80b8766.Uniform12(3, localToClipTransform);
    _draw_c80b8766.Sampler2(4, vt);
    _draw_c80b8766.DrawArrays(uPtr(Blit_verts_c80b8766_3_2_5)->Length());
}

// private generated void init_DrawCalls() [instance] :780
void NativeViewBlitter::init_DrawCalls()
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.NativeViewBlitter", "init_DrawCalls()");
    uArray* verts_c80b8766_3_2_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_c80b8766_3_3_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_c80b8766_3_2_0), 0);
    Blit_verts_c80b8766_3_2_5 = verts_c80b8766_3_2_0;
    _draw_c80b8766 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsNative_bundle::iOSBlitter389256a7());
}

// public generated NativeViewBlitter New() [static] :780
NativeViewBlitter* NativeViewBlitter::New1()
{
    NativeViewBlitter* obj1 = (NativeViewBlitter*)uNew(NativeViewBlitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class ParentControl :831
// {
static void ParentControl_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface3));
    type->SetFields(13);
}

::g::Fuse::iOS::Bindings::NativeViews::NativeView_type* ParentControl_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ParentControl);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type);
    type = (::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*)uClassType::New("Fuse.iOS.Bindings.NativeViews.ParentControl", options);
    type->SetBase(::g::Fuse::iOS::Bindings::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::LayoutControl_typeof()));
    type->fp_build_ = ParentControl_build;
    type->fp_ctor_ = (void*)ParentControl__New2_fn;
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

// public generated ParentControl() :831
void ParentControl__ctor_5_fn(ParentControl* __this)
{
    __this->ctor_5();
}

// public generated ParentControl New() :831
void ParentControl__New2_fn(ParentControl** __retval)
{
    *__retval = ParentControl::New2();
}

// public generated ParentControl() [instance] :831
void ParentControl::ctor_5()
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.ParentControl", ".ctor()");
    ctor_4();
}

// public generated ParentControl New() [static] :831
ParentControl* ParentControl::New2()
{
    ParentControl* obj1 = (ParentControl*)uNew(ParentControl_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno
// -------------------------------------------------------------------------

// internal abstract extern class ParentNativeView<T> :891
// {
static void ParentNativeView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface3));
    type->SetFields(13);
}

::g::Fuse::iOS::Bindings::NativeViews::NativeView_type* ParentNativeView_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.GenericCount = 1;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ParentNativeView);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type);
    type = (::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*)uClassType::New("Fuse.iOS.Bindings.NativeViews.ParentNativeView`1", options);
    type->SetBase(::g::Fuse::iOS::Bindings::NativeViews::NativeView_typeof());
    type->fp_build_ = ParentNativeView_build;
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

// protected generated ParentNativeView() :891
void ParentNativeView__ctor_4_fn(ParentNativeView* __this)
{
    __this->ctor_4();
}

// protected generated ParentNativeView() [instance] :891
void ParentNativeView::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.ParentNativeView`1", ".ctor()");
    ctor_3();
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno
// -------------------------------------------------------------------------

// public sealed extern class ScrollView :933
// {
static void ScrollView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type, interface3));
    type->SetFields(13);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollView__New2_fn, 0, true, ScrollView_typeof(), 0));
}

::g::Fuse::iOS::Bindings::NativeViews::NativeView_type* ScrollView_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::NativeViews::NativeView_type);
    type = (::g::Fuse::iOS::Bindings::NativeViews::NativeView_type*)uClassType::New("Fuse.iOS.Bindings.NativeViews.ScrollView", options);
    type->SetBase(::g::Fuse::iOS::Bindings::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof()));
    type->fp_build_ = ScrollView_build;
    type->fp_ctor_ = (void*)ScrollView__New2_fn;
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

// public generated ScrollView() :933
void ScrollView__ctor_5_fn(ScrollView* __this)
{
    __this->ctor_5();
}

// public generated ScrollView New() :933
void ScrollView__New2_fn(ScrollView** __retval)
{
    *__retval = ScrollView::New2();
}

// public generated ScrollView() [instance] :933
void ScrollView::ctor_5()
{
    uStackFrame __("Fuse.iOS.Bindings.NativeViews.ScrollView", ".ctor()");
    ctor_4();
}

// public generated ScrollView New() [static] :933
ScrollView* ScrollView::New2()
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}}}} // ::g::Fuse::iOS::Bindings::NativeViews
