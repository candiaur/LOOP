// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOSDevice.h>
#include <Fuse.iOSDevice.ScreenOrientation.h>
#include <objc/runtime.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Platform2.Application.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
#include <Uno.Rect.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{

// public static extern class iOSDevice :268
// {
static void iOSDevice_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Int_typeof();
    type->Reflection.SetFunctions(4,
        new uFunction("CompensateForOrientation", NULL, (void*)iOSDevice__CompensateForOrientation_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("CompensateForOrientation", NULL, (void*)iOSDevice__CompensateForOrientation1_fn, 0, true, ::g::Uno::Rect_typeof(), 1, ::g::Uno::Rect_typeof()),
        new uFunction("get_IsPreiOS8", NULL, (void*)iOSDevice__get_IsPreiOS8_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Orientation", NULL, (void*)iOSDevice__get_Orientation_fn, 0, true, iOSDevice__ScreenOrientation_typeof(), 0));
}

uClassType* iOSDevice_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOSDevice", options);
    type->fp_build_ = iOSDevice_build;
    return type;
}

// public static float2 CompensateForOrientation(float2 size) :286
void iOSDevice__CompensateForOrientation_fn(::g::Uno::Float2* size, ::g::Uno::Float2* __retval)
{
    *__retval = iOSDevice::CompensateForOrientation(*size);
}

// public static Uno.Rect CompensateForOrientation(Uno.Rect rect) :293
void iOSDevice__CompensateForOrientation1_fn(::g::Uno::Rect* rect, ::g::Uno::Rect* __retval)
{
    *__retval = iOSDevice::CompensateForOrientation1(*rect);
}

// private static bool IsLandscapeOrientation() :302
void iOSDevice__IsLandscapeOrientation_fn(bool* __retval)
{
    *__retval = iOSDevice::IsLandscapeOrientation();
}

// public static bool get_IsPreiOS8() :283
void iOSDevice__get_IsPreiOS8_fn(bool* __retval)
{
    *__retval = iOSDevice::IsPreiOS8();
}

// public static Fuse.iOSDevice.ScreenOrientation get_Orientation() :278
void iOSDevice__get_Orientation_fn(int* __retval)
{
    *__retval = iOSDevice::Orientation();
}

// public static float2 CompensateForOrientation(float2 size) [static] :286
::g::Uno::Float2 iOSDevice::CompensateForOrientation(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.iOSDevice", "CompensateForOrientation(float2)");
    return (iOSDevice::IsPreiOS8() && (iOSDevice::Orientation() == 1)) ? ::g::Uno::Float2__New2(size.Y, size.X) : size;
}

// public static Uno.Rect CompensateForOrientation(Uno.Rect rect) [static] :293
::g::Uno::Rect iOSDevice::CompensateForOrientation1(::g::Uno::Rect rect)
{
    uStackFrame __("Fuse.iOSDevice", "CompensateForOrientation(Uno.Rect)");
    ::g::Uno::Float2 ind1;
    ::g::Uno::Float2 ind2;
    return (iOSDevice::IsPreiOS8() && (iOSDevice::Orientation() == 1)) ? ::g::Uno::Rect__New2((ind1 = rect.Position(), ::g::Uno::Float2__New2(ind1.Y, ind1.X)), (ind2 = rect.Size(), ::g::Uno::Float2__New2(ind2.Y, ind2.X))) : rect;
}

// private static bool IsLandscapeOrientation() [static] :302
bool iOSDevice::IsLandscapeOrientation()
{
    uStackFrame __("Fuse.iOSDevice", "IsLandscapeOrientation()");
    @autoreleasepool
    {
        UIInterfaceOrientation o = [[UIApplication sharedApplication] statusBarOrientation];
        return (o == UIInterfaceOrientationLandscapeLeft || o == UIInterfaceOrientationLandscapeRight);
    }
    
}

// public static bool get_IsPreiOS8() [static] :283
bool iOSDevice::IsPreiOS8()
{
    uStackFrame __("Fuse.iOSDevice", "get_IsPreiOS8()");
    return (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1);
}

// public static Fuse.iOSDevice.ScreenOrientation get_Orientation() [static] :278
int iOSDevice::Orientation()
{
    uStackFrame __("Fuse.iOSDevice", "get_Orientation()");
    return iOSDevice::IsLandscapeOrientation() ? 1 : 0;
}
// }

}} // ::g::Fuse
