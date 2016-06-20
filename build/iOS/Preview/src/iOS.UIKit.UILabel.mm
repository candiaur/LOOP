// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UILabel
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UILabel*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UILabel_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSCoder.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIFont.h>
#include <iOS.UIKit.UILabel.h>
#include <Uno.Bool.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UILabel :76375
// {
static void UILabel_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(16,
        new uFunction("font", NULL, (void*)UILabel__font_fn, 0, false, ::g::iOS::UIKit::UIFont_typeof(), 0),
        new uFunction("get_Font", NULL, (void*)UILabel__get_Font_fn, 0, false, ::g::iOS::UIKit::UIFont_typeof(), 0),
        new uFunction("set_Font", NULL, (void*)UILabel__set_Font_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIFont_typeof()),
        new uFunction("setFont", NULL, (void*)UILabel__setFont_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIFont_typeof()),
        new uFunction("setText", NULL, (void*)UILabel__setText_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("setTextAlignment", NULL, (void*)UILabel__setTextAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::NSTextAlignment_typeof()),
        new uFunction("setTextColor", NULL, (void*)UILabel__setTextColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIColor_typeof()),
        new uFunction("text", NULL, (void*)UILabel__text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Text", NULL, (void*)UILabel__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)UILabel__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("textAlignment", NULL, (void*)UILabel__textAlignment_fn, 0, false, ::g::iOS::UIKit::NSTextAlignment_typeof(), 0),
        new uFunction("get_TextAlignment", NULL, (void*)UILabel__get_TextAlignment_fn, 0, false, ::g::iOS::UIKit::NSTextAlignment_typeof(), 0),
        new uFunction("set_TextAlignment", NULL, (void*)UILabel__set_TextAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::NSTextAlignment_typeof()),
        new uFunction("textColor", NULL, (void*)UILabel__textColor_fn, 0, false, ::g::iOS::UIKit::UIColor_typeof(), 0),
        new uFunction("get_TextColor", NULL, (void*)UILabel__get_TextColor_fn, 0, false, ::g::iOS::UIKit::UIColor_typeof(), 0),
        new uFunction("set_TextColor", NULL, (void*)UILabel__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIColor_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::UIKit::UIView_type* UILabel_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UILabel);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.UIKit.UILabel", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_build_ = UILabel_build;
    type->fp_encodeWithCoder = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::Foundation::NSCoder*))UILabel__encodeWithCoder_fn;
    type->fp_initWithCoder = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::Foundation::NSCoder*))UILabel__initWithCoder_fn;
    type->fp_isUserInteractionEnabled = (void(*)(::g::iOS::UIKit::UIView*, bool*))UILabel__isUserInteractionEnabled_fn;
    type->fp_setUserInteractionEnabled = (void(*)(::g::iOS::UIKit::UIView*, bool*))UILabel__setUserInteractionEnabled_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public override sealed extern void encodeWithCoder(iOS.Foundation.NSCoder aCoder) :76614
void UILabel__encodeWithCoder_fn(UILabel* __this, ::g::iOS::Foundation::NSCoder* aCoder_)
{
    uStackFrame __("iOS.UIKit.UILabel", "encodeWithCoder(iOS.Foundation.NSCoder)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(encodeWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aCoder_));
}

// public extern iOS.UIKit.UIFont font() :76506
void UILabel__font_fn(UILabel* __this, ::g::iOS::UIKit::UIFont** __retval)
{
    *__retval = __this->font();
}

// public iOS.UIKit.UIFont get_Font() :76393
void UILabel__get_Font_fn(UILabel* __this, ::g::iOS::UIKit::UIFont** __retval)
{
    *__retval = __this->Font();
}

// public void set_Font(iOS.UIKit.UIFont value) :76394
void UILabel__set_Font_fn(UILabel* __this, ::g::iOS::UIKit::UIFont* value)
{
    __this->Font(value);
}

// public override sealed extern void initWithCoder(iOS.Foundation.NSCoder aDecoder) :76617
void UILabel__initWithCoder_fn(UILabel* __this, ::g::iOS::Foundation::NSCoder* aDecoder_)
{
    uStackFrame __("iOS.UIKit.UILabel", "initWithCoder(iOS.Foundation.NSCoder)");
    uObjC_DO_INIT(__this, @selector(initWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aDecoder_));
}

// public override sealed extern bool isUserInteractionEnabled() :76560
void UILabel__isUserInteractionEnabled_fn(UILabel* __this, bool* __retval)
{
    uStackFrame __("iOS.UIKit.UILabel", "isUserInteractionEnabled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, BOOL, @selector(isUserInteractionEnabled));
    return *__retval = (bool)__return, void();
}

// public extern void setFont(iOS.UIKit.UIFont font) :76509
void UILabel__setFont_fn(UILabel* __this, ::g::iOS::UIKit::UIFont* font_)
{
    __this->setFont(font_);
}

// public extern void setText(string text) :76503
void UILabel__setText_fn(UILabel* __this, uString* text_)
{
    __this->setText(text_);
}

// public extern void setTextAlignment(iOS.UIKit.NSTextAlignment textAlignment) :76533
void UILabel__setTextAlignment_fn(UILabel* __this, int* textAlignment_)
{
    __this->setTextAlignment(*textAlignment_);
}

// public extern void setTextColor(iOS.UIKit.UIColor textColor) :76515
void UILabel__setTextColor_fn(UILabel* __this, ::g::iOS::UIKit::UIColor* textColor_)
{
    __this->setTextColor(textColor_);
}

// public override sealed extern void setUserInteractionEnabled(bool userInteractionEnabled) :76563
void UILabel__setUserInteractionEnabled_fn(UILabel* __this, bool* userInteractionEnabled_)
{
    uStackFrame __("iOS.UIKit.UILabel", "setUserInteractionEnabled(bool)");
    bool userInteractionEnabled__ = *userInteractionEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setUserInteractionEnabled:),
        (BOOL)userInteractionEnabled__);
}

// public extern string text() :76500
void UILabel__text_fn(UILabel* __this, uString** __retval)
{
    *__retval = __this->text();
}

// public string get_Text() :76387
void UILabel__get_Text_fn(UILabel* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :76388
void UILabel__set_Text_fn(UILabel* __this, uString* value)
{
    __this->Text(value);
}

// public extern iOS.UIKit.NSTextAlignment textAlignment() :76530
void UILabel__textAlignment_fn(UILabel* __this, int* __retval)
{
    *__retval = __this->textAlignment();
}

// public iOS.UIKit.NSTextAlignment get_TextAlignment() :76417
void UILabel__get_TextAlignment_fn(UILabel* __this, int* __retval)
{
    *__retval = __this->TextAlignment();
}

// public void set_TextAlignment(iOS.UIKit.NSTextAlignment value) :76418
void UILabel__set_TextAlignment_fn(UILabel* __this, int* value)
{
    __this->TextAlignment(*value);
}

// public extern iOS.UIKit.UIColor textColor() :76512
void UILabel__textColor_fn(UILabel* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = __this->textColor();
}

// public iOS.UIKit.UIColor get_TextColor() :76399
void UILabel__get_TextColor_fn(UILabel* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(iOS.UIKit.UIColor value) :76400
void UILabel__set_TextColor_fn(UILabel* __this, ::g::iOS::UIKit::UIColor* value)
{
    __this->TextColor(value);
}

// public extern iOS.UIKit.UIFont font() [instance] :76506
::g::iOS::UIKit::UIFont* UILabel::font()
{
    uStackFrame __("iOS.UIKit.UILabel", "font()");
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIFont*, @selector(font));
    return (::g::iOS::UIKit::UIFont*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIFont_typeof());
}

// public iOS.UIKit.UIFont get_Font() [instance] :76393
::g::iOS::UIKit::UIFont* UILabel::Font()
{
    uStackFrame __("iOS.UIKit.UILabel", "get_Font()");
    return font();
}

// public void set_Font(iOS.UIKit.UIFont value) [instance] :76394
void UILabel::Font(::g::iOS::UIKit::UIFont* value)
{
    uStackFrame __("iOS.UIKit.UILabel", "set_Font(iOS.UIKit.UIFont)");
    setFont(value);
}

// public extern void setFont(iOS.UIKit.UIFont font) [instance] :76509
void UILabel::setFont(::g::iOS::UIKit::UIFont* font_)
{
    uStackFrame __("iOS.UIKit.UILabel", "setFont(iOS.UIKit.UIFont)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setFont:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)font_));
}

// public extern void setText(string text) [instance] :76503
void UILabel::setText(uString* text_)
{
    uStackFrame __("iOS.UIKit.UILabel", "setText(string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setText:),
        uObjC::NativeString(text_));
}

// public extern void setTextAlignment(iOS.UIKit.NSTextAlignment textAlignment) [instance] :76533
void UILabel::setTextAlignment(int textAlignment_)
{
    uStackFrame __("iOS.UIKit.UILabel", "setTextAlignment(iOS.UIKit.NSTextAlignment)");
    int textAlignment__ = textAlignment_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTextAlignment:),
        ::NSTextAlignment(textAlignment__));
}

// public extern void setTextColor(iOS.UIKit.UIColor textColor) [instance] :76515
void UILabel::setTextColor(::g::iOS::UIKit::UIColor* textColor_)
{
    uStackFrame __("iOS.UIKit.UILabel", "setTextColor(iOS.UIKit.UIColor)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTextColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textColor_));
}

// public extern string text() [instance] :76500
uString* UILabel::text()
{
    uStackFrame __("iOS.UIKit.UILabel", "text()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(text));
    return uObjC::UnoString(__return);
}

// public string get_Text() [instance] :76387
uString* UILabel::Text()
{
    uStackFrame __("iOS.UIKit.UILabel", "get_Text()");
    return text();
}

// public void set_Text(string value) [instance] :76388
void UILabel::Text(uString* value)
{
    uStackFrame __("iOS.UIKit.UILabel", "set_Text(string)");
    setText(value);
}

// public extern iOS.UIKit.NSTextAlignment textAlignment() [instance] :76530
int UILabel::textAlignment()
{
    uStackFrame __("iOS.UIKit.UILabel", "textAlignment()");
    ::NSTextAlignment __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSTextAlignment, @selector(textAlignment));
    return int(__return);
}

// public iOS.UIKit.NSTextAlignment get_TextAlignment() [instance] :76417
int UILabel::TextAlignment()
{
    uStackFrame __("iOS.UIKit.UILabel", "get_TextAlignment()");
    return textAlignment();
}

// public void set_TextAlignment(iOS.UIKit.NSTextAlignment value) [instance] :76418
void UILabel::TextAlignment(int value)
{
    uStackFrame __("iOS.UIKit.UILabel", "set_TextAlignment(iOS.UIKit.NSTextAlignment)");
    setTextAlignment(value);
}

// public extern iOS.UIKit.UIColor textColor() [instance] :76512
::g::iOS::UIKit::UIColor* UILabel::textColor()
{
    uStackFrame __("iOS.UIKit.UILabel", "textColor()");
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIColor*, @selector(textColor));
    return (::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIColor_typeof());
}

// public iOS.UIKit.UIColor get_TextColor() [instance] :76399
::g::iOS::UIKit::UIColor* UILabel::TextColor()
{
    uStackFrame __("iOS.UIKit.UILabel", "get_TextColor()");
    return textColor();
}

// public void set_TextColor(iOS.UIKit.UIColor value) [instance] :76400
void UILabel::TextColor(::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("iOS.UIKit.UILabel", "set_TextColor(iOS.UIKit.UIColor)");
    setTextColor(value);
}
// }

}}} // ::g::iOS::UIKit
