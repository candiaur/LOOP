// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSValue.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace Foundation{struct NSNumber;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSNumber :46461
// {
::g::iOS::Foundation::NSValue_type* NSNumber_typeof();
void NSNumber__ctor_6_fn(NSNumber* __this);
void NSNumber__initWithDouble_fn(NSNumber* __this, double* value_);
void NSNumber__initWithFloat_fn(NSNumber* __this, float* value_);
void NSNumber__New7_fn(NSNumber** __retval);

struct NSNumber : ::g::iOS::Foundation::NSValue
{
    void ctor_6();
    void initWithDouble(double value_);
    void initWithFloat(float value_);
    static NSNumber* New7();
};
// }

}}} // ::g::iOS::Foundation
