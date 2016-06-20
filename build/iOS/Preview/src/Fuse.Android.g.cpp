// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroid_bundle.h>
#include <Fuse.Android.Blitter.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte4.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Android/0.29.22/$.uno
// --------------------------------------------------------

// internal sealed class Blitter :508
// {
// static Blitter() :508
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Android::Blitter, _draw_3ffdfb2d), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Android::Blitter, Blit_v_3ffdfb2d_3_3_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Android::Blitter, Blit_verts_3ffdfb2d_3_2_5), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Android::Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :508
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :512
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :508
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :508
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :508
void Blitter::ctor_()
{
    uStackFrame __("Fuse.Android.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :512
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Android.Blitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_3ffdfb2d.BlendEnabled(true);
    _draw_3ffdfb2d.DepthTestEnabled(false);
    _draw_3ffdfb2d.CullFace(0);
    _draw_3ffdfb2d.BlendSrcAlpha(7);
    _draw_3ffdfb2d.BlendDstRgb(3);
    _draw_3ffdfb2d.Use();
    _draw_3ffdfb2d.Attrib1(0, 2, Blit_v_3ffdfb2d_3_3_1, 8, 0);
    _draw_3ffdfb2d.Uniform2(1, size);
    _draw_3ffdfb2d.Uniform2(2, pos);
    _draw_3ffdfb2d.Uniform12(3, localToClipTransform);
    _draw_3ffdfb2d.Sampler2(4, vt);
    _draw_3ffdfb2d.DrawArrays(uPtr(Blit_verts_3ffdfb2d_3_2_5)->Length());
}

// private generated void init_DrawCalls() [instance] :508
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Android.Blitter", "init_DrawCalls()");
    uArray* verts_3ffdfb2d_3_2_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_3ffdfb2d_3_3_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_3ffdfb2d_3_2_0), 0);
    Blit_verts_3ffdfb2d_3_2_5 = verts_3ffdfb2d_3_2_0;
    _draw_3ffdfb2d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseAndroid_bundle::Blitter4fbe5e04());
}

// public generated Blitter New() [static] :508
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.29.22/$.uno
// --------------------------------------------------------

// internal static class Helpers :6
// {
static void Helpers_build(uType* type)
{
}

uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Helpers", options);
    type->fp_build_ = Helpers_build;
    return type;
}

// public static float4 DecodeColor(int color) :18
void Helpers__DecodeColor_fn(int* color, ::g::Uno::Float4* __retval)
{
    *__retval = Helpers::DecodeColor(*color);
}

// public static int EncodeColor(float4 c) :8
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static float4 DecodeColor(int color) [static] :18
::g::Uno::Float4 Helpers::DecodeColor(int color)
{
    uStackFrame __("Fuse.Android.Helpers", "DecodeColor(int)");
    int a = color >> 24;
    int r = (color >> 16) & 255;
    int g = (color >> 8) & 255;
    int b = color & 255;
    return ::g::Uno::Float4__New2((float)r / 255.0f, (float)g / 255.0f, (float)b / 255.0f, (float)a / 255.0f);
}

// public static int EncodeColor(float4 c) [static] :8
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    uStackFrame __("Fuse.Android.Helpers", "EncodeColor(float4)");
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.29.22/$.uno
// --------------------------------------------------------

// public sealed class StatusBarConfig :40
// {
static void StatusBarConfig_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _color), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _isVisible), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Color", NULL, (void*)StatusBarConfig__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)StatusBarConfig__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBarConfig__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBarConfig__set_IsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StatusBarConfig__New2_fn, 0, true, StatusBarConfig_typeof(), 0));
}

::g::Fuse::Node_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Android.StatusBarConfig", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = StatusBarConfig_build;
    type->fp_ctor_ = (void*)StatusBarConfig__New2_fn;
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

// public generated StatusBarConfig() :40
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this)
{
    __this->ctor_3();
}

// public float4 get_Color() :46
void StatusBarConfig__get_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :47
void StatusBarConfig__set_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public bool get_IsVisible() :57
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :58
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :40
void StatusBarConfig__New2_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New2();
}

// internal static void SetStatusBarColor(float4 color) :79
void StatusBarConfig__SetStatusBarColor_fn(::g::Uno::Float4* color)
{
    StatusBarConfig::SetStatusBarColor(*color);
}

// private static extern void SetStatusBarColor(int color) :97
void StatusBarConfig__SetStatusBarColor1_fn(int* color)
{
    StatusBarConfig::SetStatusBarColor1(*color);
}

// public generated StatusBarConfig() [instance] :40
void StatusBarConfig::ctor_3()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", ".ctor()");
    ctor_2();
}

// public float4 get_Color() [instance] :46
::g::Uno::Float4 StatusBarConfig::Color()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_Color()");
    return _color;
}

// public void set_Color(float4 value) [instance] :47
void StatusBarConfig::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_Color(float4)");
    _color = value;
    StatusBarConfig::SetStatusBarColor(_color);
}

// public bool get_IsVisible() [instance] :57
bool StatusBarConfig::IsVisible()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_IsVisible()");
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :58
void StatusBarConfig::IsVisible(bool value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_IsVisible(bool)");
    _isVisible = value;
    ::g::Uno::Platform::SystemUI::IsTopFrameVisible(value);
}

// public generated StatusBarConfig New() [static] :40
StatusBarConfig* StatusBarConfig::New2()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_3();
    return obj1;
}

// internal static void SetStatusBarColor(float4 color) [static] :79
void StatusBarConfig::SetStatusBarColor(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "SetStatusBarColor(float4)");
    ::g::Uno::Byte4 c = ::g::Uno::Byte4__New2((uint8_t)::g::Uno::Math::Clamp1(color.X * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.Y * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.Z * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.W * 255.0f, 0.0f, 255.0f));
    int androidColor = 0;
    androidColor = androidColor | (c.W << 24);
    androidColor = androidColor | (c.X << 16);
    androidColor = androidColor | (c.Y << 8);
    androidColor = androidColor | (int)c.Z;
    StatusBarConfig::SetStatusBarColor1(androidColor);
}

// private static extern void SetStatusBarColor(int color) [static] :97
void StatusBarConfig::SetStatusBarColor1(int color)
{
}
// }

}}} // ::g::Fuse::Android
