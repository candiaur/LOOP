// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNative_bundle.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.PerformResignFirstResponder.h>
#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.iOSBlitter.h>
#include <Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation.h>
#include <Fuse.Controls.Native.iOS.KeyboardView.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.UITouch.TouchPhase.h>
#include <Fuse.Controls.Native.iOS.ViewParent.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Delegate.h>
#include <Uno.Float.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-3.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.UX.FileSource.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno
// --------------------------------------------------------------------

// internal sealed extern class FontCache :338
// {
static void FontCache_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::Float_typeof(), ::g::ObjC::Object_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::iOS::FontCache::GetFontFromFileHandler_, uFieldFlagsStatic);
}

uType* FontCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FontCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FontCache", options);
    type->fp_build_ = FontCache_build;
    type->fp_ctor_ = (void*)FontCache__New1_fn;
    return type;
}

// public generated FontCache() :338
void FontCache__ctor__fn(FontCache* __this)
{
    __this->ctor_();
}

// public static ObjC.Object GetFontFromFile(Uno.UX.FileSource fileSource, float fontSize) :343
void FontCache__GetFontFromFile_fn(::g::Uno::UX::FileSource* fileSource, float* fontSize, uObject** __retval)
{
    *__retval = FontCache::GetFontFromFile(fileSource, *fontSize);
}

// public generated FontCache New() :338
void FontCache__New1_fn(FontCache** __retval)
{
    *__retval = FontCache::New1();
}

uSStrong<uDelegate*> FontCache::GetFontFromFileHandler_;

// public generated FontCache() [instance] :338
void FontCache::ctor_()
{
}

// public static ObjC.Object GetFontFromFile(Uno.UX.FileSource fileSource, float fontSize) [static] :343
uObject* FontCache::GetFontFromFile(::g::Uno::UX::FileSource* fileSource, float fontSize)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FontCache", "GetFontFromFile(Uno.UX.FileSource,float)");
    return ::g::Uno::Delegate::op_Inequality(FontCache::GetFontFromFileHandler_, NULL) ? (uObject*)uPtr(FontCache::GetFontFromFileHandler_)->Invoke(2, fileSource, uCRef(fontSize)) : NULL;
}

// public generated FontCache New() [static] :338
FontCache* FontCache::New1()
{
    FontCache* obj1 = (FontCache*)uNew(FontCache_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno
// --------------------------------------------------------------------

// internal abstract extern interface INativeFocusListener :196
// {
uInterfaceType* INativeFocusListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.iOS.INativeFocusListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno
// --------------------------------------------------------------------

// internal sealed extern class iOSBlitter :1172
// {
// static iOSBlitter() :1172
static void iOSBlitter__cctor__fn(uType* __type)
{
    iOSBlitter::Singleton_ = iOSBlitter::New1();
}

static void iOSBlitter_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::iOSBlitter, _draw_85179641), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::iOSBlitter, Blit_v_85179641_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::iOS::iOSBlitter, Blit_verts_85179641_1_6_5), 0,
        iOSBlitter_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::iOSBlitter::Singleton_, uFieldFlagsStatic);
}

uType* iOSBlitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(iOSBlitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.iOSBlitter", options);
    type->fp_build_ = iOSBlitter_build;
    type->fp_ctor_ = (void*)iOSBlitter__New1_fn;
    type->fp_cctor_ = iOSBlitter__cctor__fn;
    return type;
}

// public generated iOSBlitter() :1172
void iOSBlitter__ctor__fn(iOSBlitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1176
void iOSBlitter__Blit_fn(iOSBlitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1172
void iOSBlitter__init_DrawCalls_fn(iOSBlitter* __this)
{
    __this->init_DrawCalls();
}

// public generated iOSBlitter New() :1172
void iOSBlitter__New1_fn(iOSBlitter** __retval)
{
    *__retval = iOSBlitter::New1();
}

uSStrong<iOSBlitter*> iOSBlitter::Singleton_;

// public generated iOSBlitter() [instance] :1172
void iOSBlitter::ctor_()
{
    uStackFrame __("Fuse.Controls.Native.iOS.iOSBlitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1176
void iOSBlitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Controls.Native.iOS.iOSBlitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_85179641.BlendEnabled(true);
    _draw_85179641.CullFace(0);
    _draw_85179641.BlendSrcAlpha(7);
    _draw_85179641.BlendDstRgb(3);
    _draw_85179641.Use();
    _draw_85179641.Attrib1(0, 2, Blit_v_85179641_1_7_1, 8, 0);
    _draw_85179641.Uniform2(1, size);
    _draw_85179641.Uniform2(2, pos);
    _draw_85179641.Uniform12(3, localToClipTransform);
    _draw_85179641.Sampler2(4, vt);
    _draw_85179641.DrawArrays(uPtr(Blit_verts_85179641_1_6_5)->Length());
}

// private generated void init_DrawCalls() [instance] :1172
void iOSBlitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Controls.Native.iOS.iOSBlitter", "init_DrawCalls()");
    uArray* verts_85179641_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_85179641_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_85179641_1_6_0), 0);
    Blit_verts_85179641_1_6_5 = verts_85179641_1_6_0;
    _draw_85179641 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsNative_bundle::iOSBlitter389256a7());
}

// public generated iOSBlitter New() [static] :1172
iOSBlitter* iOSBlitter::New1()
{
    iOSBlitter* obj1 = (iOSBlitter*)uNew(iOSBlitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno
// --------------------------------------------------------------------

// internal static extern class NativeFocus :202
// {
// static NativeFocus() :202
static void NativeFocus__cctor__fn(uType* __type)
{
    NativeFocus::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[2/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/]));
}

static void NativeFocus_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof());
    ::TYPES[3] = ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::iOS::NativeFocus::_listeners_, uFieldFlagsStatic);
}

uClassType* NativeFocus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NativeFocus", options);
    type->fp_build_ = NativeFocus_build;
    type->fp_cctor_ = NativeFocus__cctor__fn;
    return type;
}

// public static void AddListener(ObjC.Object handle, Fuse.Controls.Native.iOS.INativeFocusListener listener) :208
void NativeFocus__AddListener_fn(uObject* handle, uObject* listener)
{
    NativeFocus::AddListener(handle, listener);
}

// public static void RaiseFocusGained(ObjC.Object handle) :218
void NativeFocus__RaiseFocusGained_fn(uObject* handle)
{
    NativeFocus::RaiseFocusGained(handle);
}

// public static void RaiseFocusLost(ObjC.Object handle) :226
void NativeFocus__RaiseFocusLost_fn(uObject* handle)
{
    NativeFocus::RaiseFocusLost(handle);
}

// public static void RemoveListener(ObjC.Object handle) :213
void NativeFocus__RemoveListener_fn(uObject* handle)
{
    NativeFocus::RemoveListener(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NativeFocus::_listeners_;

// public static void AddListener(ObjC.Object handle, Fuse.Controls.Native.iOS.INativeFocusListener listener) [static] :208
void NativeFocus::AddListener(uObject* handle, uObject* listener)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "AddListener(ObjC.Object,Fuse.Controls.Native.iOS.INativeFocusListener)");
    NativeFocus_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NativeFocus::_listeners()), handle, listener);
}

// public static void RaiseFocusGained(ObjC.Object handle) [static] :218
void NativeFocus::RaiseFocusGained(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RaiseFocusGained(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret1;
    uObject* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret1), ret1))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusGained(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret2), ret2)), ::TYPES[3/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RaiseFocusLost(ObjC.Object handle) [static] :226
void NativeFocus::RaiseFocusLost(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RaiseFocusLost(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret3;
    uObject* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret3), ret3))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusLost(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret4), ret4)), ::TYPES[3/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RemoveListener(ObjC.Object handle) [static] :213
void NativeFocus::RemoveListener(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RemoveListener(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret5;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NativeFocus::_listeners()), handle, &ret5);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno
// --------------------------------------------------------------------

// private sealed class FocusHelpers.PerformBecomeFirstResponder :312
// {
static void FocusHelpers__PerformBecomeFirstResponder_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::FocusHelpers__PerformBecomeFirstResponder, _target), 0);
}

uType* FocusHelpers__PerformBecomeFirstResponder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FocusHelpers__PerformBecomeFirstResponder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder", options);
    type->fp_build_ = FocusHelpers__PerformBecomeFirstResponder_build;
    return type;
}

// public PerformBecomeFirstResponder(ObjC.Object target) :316
void FocusHelpers__PerformBecomeFirstResponder__ctor__fn(FocusHelpers__PerformBecomeFirstResponder* __this, uObject* target)
{
    __this->ctor_(target);
}

// public void BecomeFirstResponder() :321
void FocusHelpers__PerformBecomeFirstResponder__BecomeFirstResponder_fn(FocusHelpers__PerformBecomeFirstResponder* __this)
{
    __this->BecomeFirstResponder();
}

// public PerformBecomeFirstResponder New(ObjC.Object target) :316
void FocusHelpers__PerformBecomeFirstResponder__New1_fn(uObject* target, FocusHelpers__PerformBecomeFirstResponder** __retval)
{
    *__retval = FocusHelpers__PerformBecomeFirstResponder::New1(target);
}

// public PerformBecomeFirstResponder(ObjC.Object target) [instance] :316
void FocusHelpers__PerformBecomeFirstResponder::ctor_(uObject* target)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder", ".ctor(ObjC.Object)");
    _target = target;
}

// public void BecomeFirstResponder() [instance] :321
void FocusHelpers__PerformBecomeFirstResponder::BecomeFirstResponder()
{
    uStackFrame __("Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder", "BecomeFirstResponder()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::BecomeFirstResponder(_target);
}

// public PerformBecomeFirstResponder New(ObjC.Object target) [static] :316
FocusHelpers__PerformBecomeFirstResponder* FocusHelpers__PerformBecomeFirstResponder::New1(uObject* target)
{
    FocusHelpers__PerformBecomeFirstResponder* obj1 = (FocusHelpers__PerformBecomeFirstResponder*)uNew(FocusHelpers__PerformBecomeFirstResponder_typeof());
    obj1->ctor_(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno
// --------------------------------------------------------------------

// private sealed class FocusHelpers.PerformResignFirstResponder :297
// {
static void FocusHelpers__PerformResignFirstResponder_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::FocusHelpers__PerformResignFirstResponder, _target), 0);
}

uType* FocusHelpers__PerformResignFirstResponder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FocusHelpers__PerformResignFirstResponder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers.PerformResignFirstResponder", options);
    type->fp_build_ = FocusHelpers__PerformResignFirstResponder_build;
    return type;
}

// public PerformResignFirstResponder(ObjC.Object target) :301
void FocusHelpers__PerformResignFirstResponder__ctor__fn(FocusHelpers__PerformResignFirstResponder* __this, uObject* target)
{
    __this->ctor_(target);
}

// public PerformResignFirstResponder New(ObjC.Object target) :301
void FocusHelpers__PerformResignFirstResponder__New1_fn(uObject* target, FocusHelpers__PerformResignFirstResponder** __retval)
{
    *__retval = FocusHelpers__PerformResignFirstResponder::New1(target);
}

// public void ResignFirstResponder() :306
void FocusHelpers__PerformResignFirstResponder__ResignFirstResponder_fn(FocusHelpers__PerformResignFirstResponder* __this)
{
    __this->ResignFirstResponder();
}

// public PerformResignFirstResponder(ObjC.Object target) [instance] :301
void FocusHelpers__PerformResignFirstResponder::ctor_(uObject* target)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FocusHelpers.PerformResignFirstResponder", ".ctor(ObjC.Object)");
    _target = target;
}

// public void ResignFirstResponder() [instance] :306
void FocusHelpers__PerformResignFirstResponder::ResignFirstResponder()
{
    uStackFrame __("Fuse.Controls.Native.iOS.FocusHelpers.PerformResignFirstResponder", "ResignFirstResponder()");
    uPtr(::g::Fuse::Controls::Native::iOS::FocusHelpers::_keyboardView())->HideKeyboard();
}

// public PerformResignFirstResponder New(ObjC.Object target) [static] :301
FocusHelpers__PerformResignFirstResponder* FocusHelpers__PerformResignFirstResponder::New1(uObject* target)
{
    FocusHelpers__PerformResignFirstResponder* obj1 = (FocusHelpers__PerformResignFirstResponder*)uNew(FocusHelpers__PerformResignFirstResponder_typeof());
    obj1->ctor_(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno
// --------------------------------------------------------------------

// public enum iOSDevice.ScreenOrientation :864
uEnumType* iOSDevice__ScreenOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Portrait", 0LL,
        "Landscape", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno
// --------------------------------------------------------------------

// public enum UITouch.TouchPhase :705
uEnumType* UITouch__TouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.UITouch.TouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Began", 0LL,
        "Moved", 1LL,
        "Staionary", 2LL,
        "Ended", 3LL,
        "Cancelled", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno
// --------------------------------------------------------------------

// public abstract extern class ViewParent :2571
// {
static void ViewParent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ViewParent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewParent_type, interface1));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction("NotifyChildNewSize", NULL, NULL, offsetof(ViewParent_type, fp_NotifyChildNewSize), false, uVoid_typeof(), 2, ::g::Fuse::Controls::Native::iOS::View_typeof(), ::g::Uno::Float2_typeof()));
}

ViewParent_type* ViewParent_typeof()
{
    static uSStrong<ViewParent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ViewParent);
    options.TypeSize = sizeof(ViewParent_type);
    type = (ViewParent_type*)uClassType::New("Fuse.Controls.Native.iOS.ViewParent", options);
    type->SetBase(::g::Fuse::Controls::Native::iOS::View_typeof());
    type->fp_build_ = ViewParent_build;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Dispose_fn;
    return type;
}

// protected ViewParent(ObjC.Object handle) :2573
void ViewParent__ctor_1_fn(ViewParent* __this, uObject* handle)
{
    __this->ctor_1(handle);
}

// protected ViewParent(ObjC.Object handle) [instance] :2573
void ViewParent::ctor_1(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewParent", ".ctor(ObjC.Object)");
    ctor_(handle);
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
