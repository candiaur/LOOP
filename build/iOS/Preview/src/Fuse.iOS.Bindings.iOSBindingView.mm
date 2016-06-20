// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Bindings.iOSBindingView.h>
#include <Fuse.iOS.Bindings.iOSDeviceInterop.h>
#include <Fuse.iOS.Bindings.iOSInterop.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <objc/runtime.h>
#include <Uno.Float.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>
#include <Uno.Rect.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class iOSBindingView :179
// {
static void iOSBindingView_build(uType* type)
{
}

uClassType* iOSBindingView_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.iOSBindingView", options);
    type->fp_build_ = iOSBindingView_build;
    return type;
}

// public static float2 GetContentSize(iOS.UIKit.UIView view, Fuse.LayoutParams lp) :186
void iOSBindingView__GetContentSize_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = iOSBindingView::GetContentSize(view, *lp);
}

// public static Uno.Platform.ViewNativeHandle GetNativeViewHandle(iOS.UIKit.UIView view) :191
void iOSBindingView__GetNativeViewHandle_fn(::g::iOS::UIKit::UIView* view, uPlatform2::ViewNativeHandle* __retval)
{
    *__retval = iOSBindingView::GetNativeViewHandle(view);
}

// public static void SetFrame(iOS.UIKit.UIView view, Uno.Rect frame) :181
void iOSBindingView__SetFrame_fn(::g::iOS::UIKit::UIView* view, ::g::Uno::Rect* frame)
{
    iOSBindingView::SetFrame(view, *frame);
}

// public static float2 GetContentSize(iOS.UIKit.UIView view, Fuse.LayoutParams lp) [static] :186
::g::Uno::Float2 iOSBindingView::GetContentSize(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSBindingView", "GetContentSize(iOS.UIKit.UIView,Fuse.LayoutParams)");
    return ::g::Fuse::iOS::Bindings::iOSInterop::GetContentSize(view, lp, 1.0f);
}

// public static Uno.Platform.ViewNativeHandle GetNativeViewHandle(iOS.UIKit.UIView view) [static] :191
uPlatform2::ViewNativeHandle iOSBindingView::GetNativeViewHandle(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSBindingView", "GetNativeViewHandle(iOS.UIKit.UIView)");
    return (uPlatform2::ViewNativeHandle)uPtr(view)->Handle();
}

// public static void SetFrame(iOS.UIKit.UIView view, Uno.Rect frame) [static] :181
void iOSBindingView::SetFrame(::g::iOS::UIKit::UIView* view, ::g::Uno::Rect frame)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSBindingView", "SetFrame(iOS.UIKit.UIView,Uno.Rect)");
    uPtr(view)->Frame(::g::Fuse::iOS::Bindings::iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation(::g::Fuse::iOS::Bindings::iOSInterop::ToCGRect(frame, ::g::Fuse::iOS::Bindings::iOSInterop::Scale()), view));
}
// }

}}}} // ::g::Fuse::iOS::Bindings
