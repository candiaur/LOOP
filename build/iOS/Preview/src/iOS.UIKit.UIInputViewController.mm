// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIInputViewController
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIInputViewController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIInputViewController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.IUITextInput.h>
#include <iOS.UIKit.UIInputViewController.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIInputViewController :76182
// {
static void UIInputViewController_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIInputViewController_type, interface0),
        ::g::iOS::UIKit::IUIContentContainer_typeof(), offsetof(UIInputViewController_type, interface1),
        ::g::iOS::UIKit::IUITextInputDelegate_typeof(), offsetof(UIInputViewController_type, interface2));
    type->SetFields(1);
    type->Reflection.SetFunctions(4,
        new uFunction("selectionDidChange", NULL, (void*)UIInputViewController__selectionDidChange_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUITextInput_typeof()),
        new uFunction("selectionWillChange", NULL, (void*)UIInputViewController__selectionWillChange_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUITextInput_typeof()),
        new uFunction("textDidChange", NULL, (void*)UIInputViewController__textDidChange_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUITextInput_typeof()),
        new uFunction("textWillChange", NULL, (void*)UIInputViewController__textWillChange_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUITextInput_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

UIInputViewController_type* UIInputViewController_typeof()
{
    static uSStrong<UIInputViewController_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(UIInputViewController);
    options.TypeSize = sizeof(UIInputViewController_type);
    type = (UIInputViewController_type*)uClassType::New("iOS.UIKit.UIInputViewController", options);
    type->SetBase(::g::iOS::UIKit::UIViewController_typeof());
    type->fp_build_ = UIInputViewController_build;
    type->interface2.fp_selectionWillChange = (void(*)(uObject*, uObject*))UIInputViewController__iOSUIKitIUITextInputDelegateselectionWillChange_fn;
    type->interface2.fp_selectionDidChange = (void(*)(uObject*, uObject*))UIInputViewController__iOSUIKitIUITextInputDelegateselectionDidChange_fn;
    type->interface2.fp_textWillChange = (void(*)(uObject*, uObject*))UIInputViewController__iOSUIKitIUITextInputDelegatetextWillChange_fn;
    type->interface2.fp_textDidChange = (void(*)(uObject*, uObject*))UIInputViewController__iOSUIKitIUITextInputDelegatetextDidChange_fn;
    type->interface1.fp_preferredContentSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_systemLayoutFittingSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_sizeForChildContentContainerWithParentContainerSize = (void(*)(uObject*, uObject*, ::g::iOS::CoreGraphics::CGSize*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn;
    type->interface1.fp_viewWillTransitionToSizeWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn;
    type->interface1.fp_willTransitionToTraitCollectionWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::UIKit::UITraitCollection*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn;
    type->interface1.fp_preferredContentSize = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIViewController__preferredContentSize_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public void iOS.UIKit.IUITextInputDelegate.selectionDidChange(iOS.UIKit.IUITextInput textInput) :76236
void UIInputViewController__iOSUIKitIUITextInputDelegateselectionDidChange_fn(UIInputViewController* __this, uObject* textInput)
{
    uStackFrame __("iOS.UIKit.UIInputViewController", "iOS.UIKit.IUITextInputDelegate.selectionDidChange(iOS.UIKit.IUITextInput)");
    __this->selectionDidChange(textInput);
}

// public void iOS.UIKit.IUITextInputDelegate.selectionWillChange(iOS.UIKit.IUITextInput textInput) :76234
void UIInputViewController__iOSUIKitIUITextInputDelegateselectionWillChange_fn(UIInputViewController* __this, uObject* textInput)
{
    uStackFrame __("iOS.UIKit.UIInputViewController", "iOS.UIKit.IUITextInputDelegate.selectionWillChange(iOS.UIKit.IUITextInput)");
    __this->selectionWillChange(textInput);
}

// public void iOS.UIKit.IUITextInputDelegate.textDidChange(iOS.UIKit.IUITextInput textInput) :76240
void UIInputViewController__iOSUIKitIUITextInputDelegatetextDidChange_fn(UIInputViewController* __this, uObject* textInput)
{
    uStackFrame __("iOS.UIKit.UIInputViewController", "iOS.UIKit.IUITextInputDelegate.textDidChange(iOS.UIKit.IUITextInput)");
    __this->textDidChange(textInput);
}

// public void iOS.UIKit.IUITextInputDelegate.textWillChange(iOS.UIKit.IUITextInput textInput) :76238
void UIInputViewController__iOSUIKitIUITextInputDelegatetextWillChange_fn(UIInputViewController* __this, uObject* textInput)
{
    uStackFrame __("iOS.UIKit.UIInputViewController", "iOS.UIKit.IUITextInputDelegate.textWillChange(iOS.UIKit.IUITextInput)");
    __this->textWillChange(textInput);
}

// public extern void selectionDidChange(iOS.UIKit.IUITextInput textInput) :76226
void UIInputViewController__selectionDidChange_fn(UIInputViewController* __this, uObject* textInput_)
{
    __this->selectionDidChange(textInput_);
}

// public extern void selectionWillChange(iOS.UIKit.IUITextInput textInput) :76223
void UIInputViewController__selectionWillChange_fn(UIInputViewController* __this, uObject* textInput_)
{
    __this->selectionWillChange(textInput_);
}

// public extern void textDidChange(iOS.UIKit.IUITextInput textInput) :76232
void UIInputViewController__textDidChange_fn(UIInputViewController* __this, uObject* textInput_)
{
    __this->textDidChange(textInput_);
}

// public extern void textWillChange(iOS.UIKit.IUITextInput textInput) :76229
void UIInputViewController__textWillChange_fn(UIInputViewController* __this, uObject* textInput_)
{
    __this->textWillChange(textInput_);
}

// public extern void selectionDidChange(iOS.UIKit.IUITextInput textInput) [instance] :76226
void UIInputViewController::selectionDidChange(uObject* textInput_)
{
    uStackFrame __("iOS.UIKit.UIInputViewController", "selectionDidChange(iOS.UIKit.IUITextInput)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(selectionDidChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textInput_, ::g::iOS::UIKit::IUITextInput_typeof()));
}

// public extern void selectionWillChange(iOS.UIKit.IUITextInput textInput) [instance] :76223
void UIInputViewController::selectionWillChange(uObject* textInput_)
{
    uStackFrame __("iOS.UIKit.UIInputViewController", "selectionWillChange(iOS.UIKit.IUITextInput)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(selectionWillChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textInput_, ::g::iOS::UIKit::IUITextInput_typeof()));
}

// public extern void textDidChange(iOS.UIKit.IUITextInput textInput) [instance] :76232
void UIInputViewController::textDidChange(uObject* textInput_)
{
    uStackFrame __("iOS.UIKit.UIInputViewController", "textDidChange(iOS.UIKit.IUITextInput)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(textDidChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textInput_, ::g::iOS::UIKit::IUITextInput_typeof()));
}

// public extern void textWillChange(iOS.UIKit.IUITextInput textInput) [instance] :76229
void UIInputViewController::textWillChange(uObject* textInput_)
{
    uStackFrame __("iOS.UIKit.UIInputViewController", "textWillChange(iOS.UIKit.IUITextInput)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(textWillChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textInput_, ::g::iOS::UIKit::IUITextInput_typeof()));
}
// }

}}} // ::g::iOS::UIKit
