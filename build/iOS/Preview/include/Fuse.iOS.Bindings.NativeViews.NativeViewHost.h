// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.iOS.Bindings.NativeViews.ParentNativeView-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace NativeViews{struct NativeView;}}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace NativeViews{struct NativeViewHost;}}}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace NativeViews{

// internal sealed extern class NativeViewHost :590
// {
::g::Fuse::iOS::Bindings::NativeViews::NativeView_type* NativeViewHost_typeof();
void NativeViewHost__ctor_5_fn(NativeViewHost* __this);
void NativeViewHost__New2_fn(NativeViewHost** __retval);
void NativeViewHost__get_Parent1_fn(NativeViewHost* __this, ::g::Fuse::iOS::Bindings::NativeViews::NativeView** __retval);

struct NativeViewHost : ::g::Fuse::iOS::Bindings::NativeViews::ParentNativeView
{
    uint32_t _textureHandle;

    void ctor_5();
    static NativeViewHost* New2();
};
// }

}}}}} // ::g::Fuse::iOS::Bindings::NativeViews
