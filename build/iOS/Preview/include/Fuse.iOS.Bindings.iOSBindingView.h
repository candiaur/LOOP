// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
#include <Uno/Platform2.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct iOSBindingView;}}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class iOSBindingView :179
// {
uClassType* iOSBindingView_typeof();
void iOSBindingView__GetContentSize_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void iOSBindingView__GetNativeViewHandle_fn(::g::iOS::UIKit::UIView* view, uPlatform2::ViewNativeHandle* __retval);
void iOSBindingView__SetFrame_fn(::g::iOS::UIKit::UIView* view, ::g::Uno::Rect* frame);

struct iOSBindingView : uObject
{
    static ::g::Uno::Float2 GetContentSize(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams lp);
    static uPlatform2::ViewNativeHandle GetNativeViewHandle(::g::iOS::UIKit::UIView* view);
    static void SetFrame(::g::iOS::UIKit::UIView* view, ::g::Uno::Rect frame);
};
// }

}}}} // ::g::Fuse::iOS::Bindings
