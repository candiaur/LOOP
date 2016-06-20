// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIContentContainer.h>
#include <iOS.UIKit.IUITextInputDelegate.h>
#include <iOS.UIKit.UIViewController.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{struct UIInputViewController;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIInputViewController :76182
// {
struct UIInputViewController_type : ::g::iOS::UIKit::UIViewController_type
{
    ::g::iOS::UIKit::IUITextInputDelegate interface2;
};

UIInputViewController_type* UIInputViewController_typeof();
void UIInputViewController__iOSUIKitIUITextInputDelegateselectionDidChange_fn(UIInputViewController* __this, uObject* textInput);
void UIInputViewController__iOSUIKitIUITextInputDelegateselectionWillChange_fn(UIInputViewController* __this, uObject* textInput);
void UIInputViewController__iOSUIKitIUITextInputDelegatetextDidChange_fn(UIInputViewController* __this, uObject* textInput);
void UIInputViewController__iOSUIKitIUITextInputDelegatetextWillChange_fn(UIInputViewController* __this, uObject* textInput);
void UIInputViewController__selectionDidChange_fn(UIInputViewController* __this, uObject* textInput_);
void UIInputViewController__selectionWillChange_fn(UIInputViewController* __this, uObject* textInput_);
void UIInputViewController__textDidChange_fn(UIInputViewController* __this, uObject* textInput_);
void UIInputViewController__textWillChange_fn(UIInputViewController* __this, uObject* textInput_);

struct UIInputViewController : ::g::iOS::UIKit::UIViewController
{
    void selectionDidChange(uObject* textInput_);
    void selectionWillChange(uObject* textInput_);
    void textDidChange(uObject* textInput_);
    void textWillChange(uObject* textInput_);
};
// }

}}} // ::g::iOS::UIKit
