// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
namespace g{namespace iOS{namespace Foundation{struct NSDictionary;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSDictionary :39202
// {
struct NSDictionary_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

NSDictionary_type* NSDictionary_typeof();
void NSDictionary__ctor_5_fn(NSDictionary* __this, ::id* __id1);
void NSDictionary__init_fn(NSDictionary* __this);
void NSDictionary__valueForKey_fn(NSDictionary* __this, uString* key_, ::id* __retval);

struct NSDictionary : ::g::iOS::Foundation::NSObject
{
    void ctor_5(::id __id1);
};
// }

}}} // ::g::iOS::Foundation
