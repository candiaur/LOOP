// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.ViewParent.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct View;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ViewGroup;}}}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class ViewGroup :2589
// {
struct ViewGroup_type : ::g::Fuse::Controls::Native::iOS::ViewParent_type
{
    ::g::Fuse::Controls::Native::IViewGroup interface2;
};

ViewGroup_type* ViewGroup_typeof();
void ViewGroup__ctor_2_fn(ViewGroup* __this, ::g::Fuse::Visual* visual);
void ViewGroup__Add_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child);
void ViewGroup__Add1_fn(uObject* parentHandle, uObject* childHandle);
void ViewGroup__Create_fn(uObject** __retval);
void ViewGroup__Dispose_fn(ViewGroup* __this);
void ViewGroup__FuseControlsNativeIViewGroupAdd_fn(ViewGroup* __this, uObject* child);
void ViewGroup__FuseControlsNativeIViewGroupRemove_fn(ViewGroup* __this, uObject* child);
void ViewGroup__New1_fn(::g::Fuse::Visual* visual, ViewGroup** __retval);
void ViewGroup__NotifyChildNewSize_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size);
void ViewGroup__Remove_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child);
void ViewGroup__Remove1_fn(uObject* childHandle);

struct ViewGroup : ::g::Fuse::Controls::Native::iOS::ViewParent
{
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_2(::g::Fuse::Visual* visual);
    void Add(::g::Fuse::Controls::Native::iOS::View* child);
    void Remove(::g::Fuse::Controls::Native::iOS::View* child);
    static void Add1(uObject* parentHandle, uObject* childHandle);
    static uObject* Create();
    static ViewGroup* New1(::g::Fuse::Visual* visual);
    static void Remove1(uObject* childHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
