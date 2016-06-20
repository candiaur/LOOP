// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.iOS.ViewParent.h>
#include <ObjC.Object.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Matrix.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public abstract extern class View :2437
// {
static void View_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface1));
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _handle), 0,
        ::g::Fuse::Controls::Native::iOS::ViewParent_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _parent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _size), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("Dispose", NULL, NULL, offsetof(View_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("get_Handle", NULL, (void*)View__get_Handle_fn, 0, false, ::g::ObjC::Object_typeof(), 0),
        new uFunction("Hide", NULL, (void*)View__Hide_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)View__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_Opacity", NULL, (void*)View__set_Opacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_Position", NULL, (void*)View__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Show", NULL, (void*)View__Show_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)View__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("set_Transform", NULL, (void*)View__set_Transform_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()));
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.iOS.View", options);
    type->fp_build_ = View_build;
    type->fp_Dispose = View__Dispose_fn;
    type->interface0.fp_Show = (void(*)(uObject*))View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))View__set_IsEnabled_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))View__Dispose_fn;
    return type;
}

// protected View(ObjC.Object handle) :2455
void View__ctor__fn(View* __this, uObject* handle)
{
    __this->ctor_(handle);
}

// public virtual void Dispose() :2564
void View__Dispose_fn(View* __this)
{
}

// public ObjC.Object get_Handle() :2439
void View__get_Handle_fn(View* __this, uObject** __retval)
{
    *__retval = __this->Handle();
}

// public void Hide() :2495
void View__Hide_fn(View* __this)
{
    __this->Hide();
}

// private static void Hide(ObjC.Object handle) :2510
void View__Hide1_fn(uObject* handle)
{
    View::Hide1(handle);
}

// public void set_IsEnabled(bool value) :2523
void View__set_IsEnabled_fn(View* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public void set_Opacity(float value) :2518
void View__set_Opacity_fn(View* __this, float* value)
{
    __this->Opacity(*value);
}

// internal Fuse.Controls.Native.iOS.ViewParent get_Parent() :2444
void View__get_Parent_fn(View* __this, ::g::Fuse::Controls::Native::iOS::ViewParent** __retval)
{
    *__retval = __this->Parent();
}

// internal void set_Parent(Fuse.Controls.Native.iOS.ViewParent value) :2445
void View__set_Parent_fn(View* __this, ::g::Fuse::Controls::Native::iOS::ViewParent* value)
{
    __this->Parent(value);
}

// public void set_Position(float2 value) :2475
void View__set_Position_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// private static void SetAlpha(ObjC.Object handle, float a) :2534
void View__SetAlpha_fn(uObject* handle, float* a)
{
    View::SetAlpha(handle, *a);
}

// private static void SetSize(ObjC.Object handle, float w, float h) :2541
void View__SetSize_fn(uObject* handle, float* w, float* h)
{
    View::SetSize(handle, *w, *h);
}

// private static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :2548
void View__SetTransform_fn(uObject* handle, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    View::SetTransform(handle, *m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// private static void SetUserInteractionEnabled(ObjC.Object handle, bool enabled) :2527
void View__SetUserInteractionEnabled_fn(uObject* handle, bool* enabled)
{
    View::SetUserInteractionEnabled(handle, *enabled);
}

// public void Show() :2490
void View__Show_fn(View* __this)
{
    __this->Show();
}

// private static void Show(ObjC.Object handle) :2502
void View__Show1_fn(uObject* handle)
{
    View::Show1(handle);
}

// public void set_Size(float2 value) :2481
void View__set_Size_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public void set_Transform(float4x4 value) :2462
void View__set_Transform_fn(View* __this, ::g::Uno::Float4x4* value)
{
    __this->Transform(*value);
}

// protected View(ObjC.Object handle) [instance] :2455
void View::ctor_(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", ".ctor(ObjC.Object)");
    _handle = handle;
}

// public ObjC.Object get_Handle() [instance] :2439
uObject* View::Handle()
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "get_Handle()");
    return _handle;
}

// public void Hide() [instance] :2495
void View::Hide()
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "Hide()");
    View::Hide1(Handle());
}

// public void set_IsEnabled(bool value) [instance] :2523
void View::IsEnabled(bool value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "set_IsEnabled(bool)");
    View::SetUserInteractionEnabled(Handle(), value);
}

// public void set_Opacity(float value) [instance] :2518
void View::Opacity(float value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "set_Opacity(float)");
    View::SetAlpha(Handle(), value);
}

// internal Fuse.Controls.Native.iOS.ViewParent get_Parent() [instance] :2444
::g::Fuse::Controls::Native::iOS::ViewParent* View::Parent()
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "get_Parent()");
    return _parent;
}

// internal void set_Parent(Fuse.Controls.Native.iOS.ViewParent value) [instance] :2445
void View::Parent(::g::Fuse::Controls::Native::iOS::ViewParent* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "set_Parent(Fuse.Controls.Native.iOS.ViewParent)");
    _parent = value;

    if (_parent != NULL)
        uPtr(_parent)->NotifyChildNewSize(this, _size);
}

// public void set_Position(float2 value) [instance] :2475
void View::Position(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "set_Position(float2)");
    Transform(::g::Uno::Matrix::Translation1(::g::Uno::Float3__New4(value, 0.0f)));
}

// public void Show() [instance] :2490
void View::Show()
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "Show()");
    View::Show1(Handle());
}

// public void set_Size(float2 value) [instance] :2481
void View::Size(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "set_Size(float2)");
    _size = value;
    View::SetSize(Handle(), value.X, value.Y);

    if (Parent() != NULL)
        uPtr(Parent())->NotifyChildNewSize(this, value);
}

// public void set_Transform(float4x4 value) [instance] :2462
void View::Transform(::g::Uno::Float4x4 value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "set_Transform(float4x4)");
    ::g::Uno::Float4x4 t = value;
    View::SetTransform(Handle(), t.M11, t.M12, t.M13, t.M14, t.M21, t.M22, t.M23, t.M24, t.M31, t.M32, t.M33, t.M34, t.M41, t.M42, t.M43, t.M44);
}

// private static void Hide(ObjC.Object handle) [static] :2510
void View::Hide1(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "Hide(ObjC.Object)");
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [view setHidden: true];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// private static void SetAlpha(ObjC.Object handle, float a) [static] :2534
void View::SetAlpha(uObject* handle, float a)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "SetAlpha(ObjC.Object,float)");
    @autoreleasepool
    {
        [] (::id handle, float a) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [view setAlpha: (CGFloat)a];
        } (::g::ObjC::Helpers::GetHandle(handle), a);
        
    }
    
}

// private static void SetSize(ObjC.Object handle, float w, float h) [static] :2541
void View::SetSize(uObject* handle, float w, float h)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "SetSize(ObjC.Object,float,float)");
    @autoreleasepool
    {
        [] (::id handle, float w, float h) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [view setFrame: { view.frame.origin, { (CGFloat)w, (CGFloat)h } } ];
        } (::g::ObjC::Helpers::GetHandle(handle), w, h);
        
    }
    
}

// private static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [static] :2548
void View::SetTransform(uObject* handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "SetTransform(ObjC.Object,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float)");
    @autoreleasepool
    {
        [] (::id handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) -> void
        {
            CATransform3D transform = {
            	m11, m12, m13, m14,
            	m21, m22, m23, m24,
            	m31, m32, m33, m34,
            	m41, m42, m43, m44
            };
            ::UIView* view = (::UIView*)handle;
            [[view layer] setTransform:transform];
        } (::g::ObjC::Helpers::GetHandle(handle), m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
        
    }
    
}

// private static void SetUserInteractionEnabled(ObjC.Object handle, bool enabled) [static] :2527
void View::SetUserInteractionEnabled(uObject* handle, bool enabled)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "SetUserInteractionEnabled(ObjC.Object,bool)");
    @autoreleasepool
    {
        [] (::id handle, bool enabled) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [view setUserInteractionEnabled:enabled];
        } (::g::ObjC::Helpers::GetHandle(handle), enabled);
        
    }
    
}

// private static void Show(ObjC.Object handle) [static] :2502
void View::Show1(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "Show(ObjC.Object)");
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [view setHidden: false];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
