// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace NativeViews{struct NativeView;}}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct InputDispatch;}}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class InputDispatch :17
// {
uClassType* InputDispatch_typeof();
void InputDispatch__AddListener_fn(::g::Fuse::iOS::Bindings::NativeViews::NativeView* nativeView);
void InputDispatch__RemoveListener_fn(::g::Fuse::iOS::Bindings::NativeViews::NativeView* nativeView);

struct InputDispatch : uObject
{
    static void AddListener(::g::Fuse::iOS::Bindings::NativeViews::NativeView* nativeView);
    static void RemoveListener(::g::Fuse::iOS::Bindings::NativeViews::NativeView* nativeView);
};
// }

}}}} // ::g::Fuse::iOS::Bindings
