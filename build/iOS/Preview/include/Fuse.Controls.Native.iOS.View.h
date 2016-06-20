// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct View;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ViewParent;}}}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public abstract extern class View :2437
// {
struct View_type : uType
{
    ::g::Fuse::Controls::Native::IView interface0;
    ::g::Uno::IDisposable interface1;
    void(*fp_Dispose)(::g::Fuse::Controls::Native::iOS::View*);
};

View_type* View_typeof();
void View__ctor__fn(View* __this, uObject* handle);
void View__Dispose_fn(View* __this);
void View__get_Handle_fn(View* __this, uObject** __retval);
void View__Hide_fn(View* __this);
void View__Hide1_fn(uObject* handle);
void View__set_IsEnabled_fn(View* __this, bool* value);
void View__set_Opacity_fn(View* __this, float* value);
void View__get_Parent_fn(View* __this, ::g::Fuse::Controls::Native::iOS::ViewParent** __retval);
void View__set_Parent_fn(View* __this, ::g::Fuse::Controls::Native::iOS::ViewParent* value);
void View__set_Position_fn(View* __this, ::g::Uno::Float2* value);
void View__SetAlpha_fn(uObject* handle, float* a);
void View__SetSize_fn(uObject* handle, float* w, float* h);
void View__SetTransform_fn(uObject* handle, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44);
void View__SetUserInteractionEnabled_fn(uObject* handle, bool* enabled);
void View__Show_fn(View* __this);
void View__Show1_fn(uObject* handle);
void View__set_Size_fn(View* __this, ::g::Uno::Float2* value);
void View__set_Transform_fn(View* __this, ::g::Uno::Float4x4* value);

struct View : uObject
{
    uStrong<uObject*> _handle;
    uStrong< ::g::Fuse::Controls::Native::iOS::ViewParent*> _parent;
    ::g::Uno::Float2 _size;

    void ctor_(uObject* handle);
    void Dispose() { (((View_type*)__type)->fp_Dispose)(this); }
    uObject* Handle();
    void Hide();
    void IsEnabled(bool value);
    void Opacity(float value);
    ::g::Fuse::Controls::Native::iOS::ViewParent* Parent();
    void Parent(::g::Fuse::Controls::Native::iOS::ViewParent* value);
    void Position(::g::Uno::Float2 value);
    void Show();
    void Size(::g::Uno::Float2 value);
    void Transform(::g::Uno::Float4x4 value);
    static void Dispose(View* __this) { View__Dispose_fn(__this); }
    static void Hide1(uObject* handle);
    static void SetAlpha(uObject* handle, float a);
    static void SetSize(uObject* handle, float w, float h);
    static void SetTransform(uObject* handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
    static void SetUserInteractionEnabled(uObject* handle, bool enabled);
    static void Show1(uObject* handle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
