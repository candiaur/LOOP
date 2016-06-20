// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace Foundation{struct NSURL;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSURL :52344
// {
struct NSURL_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

NSURL_type* NSURL_typeof();
void NSURL__ctor_4_fn(NSURL* __this);
void NSURL__absoluteString_fn(NSURL* __this, uString** __retval);
void NSURL__get_AbsoluteString_fn(NSURL* __this, uString** __retval);
void NSURL__initWithString_fn(NSURL* __this, uString* URLString_);
void NSURL__New5_fn(NSURL** __retval);

struct NSURL : ::g::iOS::Foundation::NSObject
{
    void ctor_4();
    uString* absoluteString();
    uString* AbsoluteString();
    void initWithString(uString* URLString_);
    static NSURL* New5();
};
// }

}}} // ::g::iOS::Foundation
