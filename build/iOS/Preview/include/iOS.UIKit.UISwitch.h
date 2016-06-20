// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUICoordinateSpace.h>
#include <iOS.UIKit.UIControl.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace UIKit{struct UIColor;}}}
namespace g{namespace iOS{namespace UIKit{struct UISwitch;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UISwitch :82602
// {
::g::iOS::UIKit::UIView_type* UISwitch_typeof();
void UISwitch__initWithFrame_fn(UISwitch* __this, ::g::iOS::CoreGraphics::CGRect* frame_);
void UISwitch__setTintColor_fn(UISwitch* __this, ::g::iOS::UIKit::UIColor* tintColor_);
void UISwitch__tintColor_fn(UISwitch* __this, ::g::iOS::UIKit::UIColor** __retval);

struct UISwitch : ::g::iOS::UIKit::UIControl
{
};
// }

}}} // ::g::iOS::UIKit
