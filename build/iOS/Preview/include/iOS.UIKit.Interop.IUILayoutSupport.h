// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUILayoutSupport.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUILayoutSupport;}}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUILayoutSupport :6609
// {
struct IUILayoutSupport_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUILayoutSupport interface1;
};

IUILayoutSupport_type* IUILayoutSupport_typeof();
void IUILayoutSupport__length_fn(IUILayoutSupport* __this, double* __retval);

struct IUILayoutSupport : ::g::ObjC::Bindings::Object
{
    double length();
};
// }

}}}} // ::g::iOS::UIKit::Interop
