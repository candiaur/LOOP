// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUICoordinateSpace.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGSize;}}}
namespace g{namespace iOS{namespace Foundation{struct NSCoder;}}}
namespace g{namespace iOS{namespace UIKit{struct UIScrollView;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIScrollView :80634
// {
::g::iOS::UIKit::UIView_type* UIScrollView_typeof();
void UIScrollView__contentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIScrollView__get_ContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIScrollView__set_ContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* value);
void UIScrollView__encodeWithCoder_fn(UIScrollView* __this, ::g::iOS::Foundation::NSCoder* aCoder_);
void UIScrollView__initWithCoder_fn(UIScrollView* __this, ::g::iOS::Foundation::NSCoder* aDecoder_);
void UIScrollView__isScrollEnabled_fn(UIScrollView* __this, bool* __retval);
void UIScrollView__get_ScrollEnabled_fn(UIScrollView* __this, bool* __retval);
void UIScrollView__set_ScrollEnabled_fn(UIScrollView* __this, bool* value);
void UIScrollView__setContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* contentSize_);
void UIScrollView__setScrollEnabled_fn(UIScrollView* __this, bool* scrollEnabled_);

struct UIScrollView : ::g::iOS::UIKit::UIView
{
    ::g::iOS::CoreGraphics::CGSize contentSize();
    ::g::iOS::CoreGraphics::CGSize ContentSize();
    void ContentSize(::g::iOS::CoreGraphics::CGSize value);
    bool isScrollEnabled();
    bool ScrollEnabled();
    void ScrollEnabled(bool value);
    void setContentSize(::g::iOS::CoreGraphics::CGSize contentSize_);
    void setScrollEnabled(bool scrollEnabled_);
};
// }

}}} // ::g::iOS::UIKit
