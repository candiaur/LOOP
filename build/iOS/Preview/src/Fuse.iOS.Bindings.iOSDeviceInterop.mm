// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Bindings.iOSDeviceInterop.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.UIKit.UIApplication.h>
#include <iOS.UIKit.UIInterfaceOrientation.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <objc/runtime.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Platform2.Application.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class iOSDeviceInterop :522
// {
static void iOSDeviceInterop_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[1] = ::g::ObjC::Bindings::Object_typeof();
}

uClassType* iOSDeviceInterop_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.iOSDeviceInterop", options);
    type->fp_build_ = iOSDeviceInterop_build;
    return type;
}

// public static bool IsOrientationLandscape() :530
void iOSDeviceInterop__IsOrientationLandscape_fn(bool* __retval)
{
    *__retval = iOSDeviceInterop::IsOrientationLandscape();
}

// public static bool IsRootView(iOS.UIKit.UIView view) :524
void iOSDeviceInterop__IsRootView_fn(::g::iOS::UIKit::UIView* view, bool* __retval)
{
    *__retval = iOSDeviceInterop::IsRootView(view);
}

// public static iOS.CoreGraphics.CGRect Pre_iOS8_HandleDeviceOrientation(iOS.CoreGraphics.CGRect rect, iOS.UIKit.UIView view) :545
void iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation_fn(::g::iOS::CoreGraphics::CGRect* rect, ::g::iOS::UIKit::UIView* view, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation(*rect, view);
}

// public static iOS.CoreGraphics.CGSize Pre_iOS8_HandleDeviceOrientation(iOS.CoreGraphics.CGSize size, iOS.UIKit.UIView view) :537
void iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation1_fn(::g::iOS::CoreGraphics::CGSize* size, ::g::iOS::UIKit::UIView* view, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(*size, view);
}

// public static bool get_PreV8() :558
void iOSDeviceInterop__get_PreV8_fn(bool* __retval)
{
    *__retval = iOSDeviceInterop::PreV8();
}

// public static bool IsOrientationLandscape() [static] :530
bool iOSDeviceInterop::IsOrientationLandscape()
{
    uStackFrame __("Fuse.iOS.Bindings.iOSDeviceInterop", "IsOrientationLandscape()");
    int o = uPtr(::g::iOS::UIKit::UIApplication::_sharedApplication())->StatusBarOrientation();
    return (o == 4) || (o == 3);
}

// public static bool IsRootView(iOS.UIKit.UIView view) [static] :524
bool iOSDeviceInterop::IsRootView(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSDeviceInterop", "IsRootView(iOS.UIKit.UIView)");
    return (((uPlatform2::ViewNativeHandle)uPtr(view)->Handle())==::g::Uno::Platform2::Application::GetRootView());
}

// public static iOS.CoreGraphics.CGRect Pre_iOS8_HandleDeviceOrientation(iOS.CoreGraphics.CGRect rect, iOS.UIKit.UIView view) [static] :545
::g::iOS::CoreGraphics::CGRect iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation(::g::iOS::CoreGraphics::CGRect rect, ::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSDeviceInterop", "Pre_iOS8_HandleDeviceOrientation(iOS.CoreGraphics.CGRect,iOS.UIKit.UIView)");

    if ((iOSDeviceInterop::PreV8() && iOSDeviceInterop::IsOrientationLandscape()) && (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(view), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) || iOSDeviceInterop::IsRootView(view)))
    {
        ::g::iOS::CoreGraphics::CGPoint pos = rect.Origin;
        ::g::iOS::CoreGraphics::CGSize size = rect.Size;
        return ::g::iOS::CoreGraphics::CGRect__New1(::g::iOS::CoreGraphics::CGPoint__New1(pos.Y, pos.X), ::g::iOS::CoreGraphics::CGSize__New1(size.Height, size.Width));
    }

    return rect;
}

// public static iOS.CoreGraphics.CGSize Pre_iOS8_HandleDeviceOrientation(iOS.CoreGraphics.CGSize size, iOS.UIKit.UIView view) [static] :537
::g::iOS::CoreGraphics::CGSize iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(::g::iOS::CoreGraphics::CGSize size, ::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSDeviceInterop", "Pre_iOS8_HandleDeviceOrientation(iOS.CoreGraphics.CGSize,iOS.UIKit.UIView)");

    if ((iOSDeviceInterop::PreV8() && iOSDeviceInterop::IsOrientationLandscape()) && (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(view), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) || iOSDeviceInterop::IsRootView(view)))
        return ::g::iOS::CoreGraphics::CGSize__New1(size.Height, size.Width);

    return size;
}

// public static bool get_PreV8() [static] :558
bool iOSDeviceInterop::PreV8()
{
    uStackFrame __("Fuse.iOS.Bindings.iOSDeviceInterop", "get_PreV8()");
    return (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1);
}
// }

}}}} // ::g::Fuse::iOS::Bindings
