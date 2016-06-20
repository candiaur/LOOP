// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIScrollView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIScrollView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIScrollView_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSCoder.h>
#include <iOS.UIKit.UIScrollView.h>
#include <Uno.Bool.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIScrollView :80634
// {
static void UIScrollView_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(8,
        new uFunction("contentSize", NULL, (void*)UIScrollView__contentSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("get_ContentSize", NULL, (void*)UIScrollView__get_ContentSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("set_ContentSize", NULL, (void*)UIScrollView__set_ContentSize_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("isScrollEnabled", NULL, (void*)UIScrollView__isScrollEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ScrollEnabled", NULL, (void*)UIScrollView__get_ScrollEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ScrollEnabled", NULL, (void*)UIScrollView__set_ScrollEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setContentSize", NULL, (void*)UIScrollView__setContentSize_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("setScrollEnabled", NULL, (void*)UIScrollView__setScrollEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::UIKit::UIView_type* UIScrollView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIScrollView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.UIKit.UIScrollView", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_build_ = UIScrollView_build;
    type->fp_encodeWithCoder = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::Foundation::NSCoder*))UIScrollView__encodeWithCoder_fn;
    type->fp_initWithCoder = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::Foundation::NSCoder*))UIScrollView__initWithCoder_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.CoreGraphics.CGSize contentSize() :80845
void UIScrollView__contentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->contentSize();
}

// public iOS.CoreGraphics.CGSize get_ContentSize() :80652
void UIScrollView__get_ContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->ContentSize();
}

// public void set_ContentSize(iOS.CoreGraphics.CGSize value) :80653
void UIScrollView__set_ContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* value)
{
    __this->ContentSize(*value);
}

// public override sealed extern void encodeWithCoder(iOS.Foundation.NSCoder aCoder) :80998
void UIScrollView__encodeWithCoder_fn(UIScrollView* __this, ::g::iOS::Foundation::NSCoder* aCoder_)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "encodeWithCoder(iOS.Foundation.NSCoder)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(encodeWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aCoder_));
}

// public override sealed extern void initWithCoder(iOS.Foundation.NSCoder aDecoder) :81001
void UIScrollView__initWithCoder_fn(UIScrollView* __this, ::g::iOS::Foundation::NSCoder* aDecoder_)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "initWithCoder(iOS.Foundation.NSCoder)");
    uObjC_DO_INIT(__this, @selector(initWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aDecoder_));
}

// public extern bool isScrollEnabled() :80893
void UIScrollView__isScrollEnabled_fn(UIScrollView* __this, bool* __retval)
{
    *__retval = __this->isScrollEnabled();
}

// public bool get_ScrollEnabled() :80700
void UIScrollView__get_ScrollEnabled_fn(UIScrollView* __this, bool* __retval)
{
    *__retval = __this->ScrollEnabled();
}

// public void set_ScrollEnabled(bool value) :80701
void UIScrollView__set_ScrollEnabled_fn(UIScrollView* __this, bool* value)
{
    __this->ScrollEnabled(*value);
}

// public extern void setContentSize(iOS.CoreGraphics.CGSize contentSize) :80848
void UIScrollView__setContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* contentSize_)
{
    __this->setContentSize(*contentSize_);
}

// public extern void setScrollEnabled(bool scrollEnabled) :80896
void UIScrollView__setScrollEnabled_fn(UIScrollView* __this, bool* scrollEnabled_)
{
    __this->setScrollEnabled(*scrollEnabled_);
}

// public extern iOS.CoreGraphics.CGSize contentSize() [instance] :80845
::g::iOS::CoreGraphics::CGSize UIScrollView::contentSize()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "contentSize()");
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(contentSize));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public iOS.CoreGraphics.CGSize get_ContentSize() [instance] :80652
::g::iOS::CoreGraphics::CGSize UIScrollView::ContentSize()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "get_ContentSize()");
    return contentSize();
}

// public void set_ContentSize(iOS.CoreGraphics.CGSize value) [instance] :80653
void UIScrollView::ContentSize(::g::iOS::CoreGraphics::CGSize value)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "set_ContentSize(iOS.CoreGraphics.CGSize)");
    setContentSize(value);
}

// public extern bool isScrollEnabled() [instance] :80893
bool UIScrollView::isScrollEnabled()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "isScrollEnabled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isScrollEnabled));
    return (bool)__return;
}

// public bool get_ScrollEnabled() [instance] :80700
bool UIScrollView::ScrollEnabled()
{
    uStackFrame __("iOS.UIKit.UIScrollView", "get_ScrollEnabled()");
    return isScrollEnabled();
}

// public void set_ScrollEnabled(bool value) [instance] :80701
void UIScrollView::ScrollEnabled(bool value)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "set_ScrollEnabled(bool)");
    setScrollEnabled(value);
}

// public extern void setContentSize(iOS.CoreGraphics.CGSize contentSize) [instance] :80848
void UIScrollView::setContentSize(::g::iOS::CoreGraphics::CGSize contentSize_)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "setContentSize(iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize contentSize__ = contentSize_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentSize:),
        uObjC::Struct::FromUno_CGSize(contentSize__, ::CGSize()));
}

// public extern void setScrollEnabled(bool scrollEnabled) [instance] :80896
void UIScrollView::setScrollEnabled(bool scrollEnabled_)
{
    uStackFrame __("iOS.UIKit.UIScrollView", "setScrollEnabled(bool)");
    bool scrollEnabled__ = scrollEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setScrollEnabled:),
        (BOOL)scrollEnabled__);
}
// }

}}} // ::g::iOS::UIKit
