// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUILayoutSupport :4735
// {
uInterfaceType* IUILayoutSupport_typeof();

struct IUILayoutSupport
{
    void(*fp_length)(uObject*, double*);
    static double length(const uInterface& __this) { double __retval; return __this.VTable<IUILayoutSupport>()->fp_length(__this, &__retval), __retval; }
};
// }

}}} // ::g::iOS::UIKit
