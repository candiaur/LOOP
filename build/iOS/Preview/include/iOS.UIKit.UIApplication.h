// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.UIResponder.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{struct UIApplication;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIApplication :71021
// {
::g::iOS::UIKit::UIResponder_type* UIApplication_typeof();
void UIApplication___sharedApplication_fn(UIApplication** __retval);
void UIApplication__setStatusBarOrientation_fn(UIApplication* __this, int* statusBarOrientation_);
void UIApplication__statusBarOrientation_fn(UIApplication* __this, int* __retval);
void UIApplication__get_StatusBarOrientation_fn(UIApplication* __this, int* __retval);
void UIApplication__set_StatusBarOrientation_fn(UIApplication* __this, int* value);

struct UIApplication : ::g::iOS::UIKit::UIResponder
{
    void setStatusBarOrientation(int statusBarOrientation_);
    int statusBarOrientation();
    int StatusBarOrientation();
    void StatusBarOrientation(int value);
    static UIApplication* _sharedApplication();
};
// }

}}} // ::g::iOS::UIKit
