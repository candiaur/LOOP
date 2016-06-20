// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct TextLayout;}}}}
namespace g{namespace iOS{namespace Foundation{struct NSDictionary;}}}
namespace g{namespace iOS{namespace UIKit{struct NSLayoutManager;}}}
namespace g{namespace iOS{namespace UIKit{struct NSMutableParagraphStyle;}}}
namespace g{namespace iOS{namespace UIKit{struct NSTextContainer;}}}
namespace g{namespace iOS{namespace UIKit{struct NSTextStorage;}}}
namespace g{namespace iOS{namespace UIKit{struct UIColor;}}}
namespace g{namespace iOS{namespace UIKit{struct UIFont;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// public sealed extern class TextLayout :764
// {
uType* TextLayout_typeof();
void TextLayout__ctor__fn(TextLayout* __this);
void TextLayout__GetTextAttributes_fn(TextLayout* __this, ::g::iOS::Foundation::NSDictionary** __retval);
void TextLayout__Invalidate_fn(TextLayout* __this);
void TextLayout__New1_fn(TextLayout** __retval);
void TextLayout__UpdateLayout_fn(TextLayout* __this, ::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2* size, bool* useMin, bool* __retval);

struct TextLayout : uObject
{
    uStrong< ::g::iOS::UIKit::UIFont*> _font;
    bool _layoutMin;
    ::g::Uno::Float2 _layoutSize;
    bool _layoutValid;
    uStrong< ::g::iOS::UIKit::NSMutableParagraphStyle*> _style;
    uStrong< ::g::iOS::UIKit::UIColor*> _textColor;
    uStrong< ::g::iOS::UIKit::NSTextStorage*> _textStorage;
    uStrong< ::g::iOS::UIKit::NSLayoutManager*> LayoutManager;
    ::g::Uno::Rect PixelBounds;
    uStrong< ::g::iOS::UIKit::NSTextContainer*> TextContainer;

    void ctor_();
    ::g::iOS::Foundation::NSDictionary* GetTextAttributes();
    void Invalidate();
    bool UpdateLayout(::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2 size, bool useMin);
    static TextLayout* New1();
};
// }

}}}} // ::g::Fuse::iOS::Bindings
