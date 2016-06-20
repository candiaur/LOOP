// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Device.h>
#include <UIKit/UIKit.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{

// internal static extern class Device :136
// {
static void Device_build(uType* type)
{
}

uClassType* Device_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Device", options);
    type->fp_build_ = Device_build;
    return type;
}

// private static int GetCurrentOrientation() :149
void Device__GetCurrentOrientation_fn(int* __retval)
{
    *__retval = Device::GetCurrentOrientation();
}

// private static int GetStatusBarOrientation() :155
void Device__GetStatusBarOrientation_fn(int* __retval)
{
    *__retval = Device::GetStatusBarOrientation();
}

// public static int get_Orientation() :140
void Device__get_Orientation_fn(int* __retval)
{
    *__retval = Device::Orientation();
}

// public static int get_StatusBarOrientation() :145
void Device__get_StatusBarOrientation_fn(int* __retval)
{
    *__retval = Device::StatusBarOrientation();
}

// private static int GetCurrentOrientation() [static] :149
int Device::GetCurrentOrientation()
{
    uStackFrame __("Fuse.Device", "GetCurrentOrientation()");
    @autoreleasepool
    {
        return (int)[[UIDevice currentDevice] orientation];
    }
    
}

// private static int GetStatusBarOrientation() [static] :155
int Device::GetStatusBarOrientation()
{
    uStackFrame __("Fuse.Device", "GetStatusBarOrientation()");
    @autoreleasepool
    {
        return (int)[[UIApplication sharedApplication] statusBarOrientation];
    }
    
}

// public static int get_Orientation() [static] :140
int Device::Orientation()
{
    uStackFrame __("Fuse.Device", "get_Orientation()");
    return Device::GetCurrentOrientation();
}

// public static int get_StatusBarOrientation() [static] :145
int Device::StatusBarOrientation()
{
    uStackFrame __("Fuse.Device", "get_StatusBarOrientation()");
    return Device::GetStatusBarOrientation();
}
// }

}} // ::g::Fuse
