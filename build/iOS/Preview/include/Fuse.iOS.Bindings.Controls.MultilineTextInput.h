// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.iOS.Bindings.Controls.ITextInputImpl.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace Controls{struct MultilineTextInput;}}}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace UIKit{struct UIColor;}}}
namespace g{namespace iOS{namespace UIKit{struct UIFont;}}}
namespace g{namespace iOS{namespace UIKit{struct UILabel;}}}
namespace g{namespace iOS{namespace UIKit{struct UITextView;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace Controls{

// internal sealed extern class MultilineTextInput :1476
// {
struct MultilineTextInput_type : uType
{
    ::g::Fuse::iOS::Bindings::Controls::ITextInputImpl interface0;
};

MultilineTextInput_type* MultilineTextInput_typeof();
void MultilineTextInput__ctor__fn(MultilineTextInput* __this);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_CaretColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_Font_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIFont** __retval);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_Font_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIFont* value);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_Frame_fn(MultilineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_Frame_fn(MultilineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* value);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_IUITextInput_fn(MultilineTextInput* __this, uObject** __retval);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_LineCount_fn(MultilineTextInput* __this, int* __retval);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderText_fn(MultilineTextInput* __this, uString* value);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_SemanticControl_fn(MultilineTextInput* __this, ::g::Fuse::Controls::TextEdit** __retval);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_SemanticControl_fn(MultilineTextInput* __this, ::g::Fuse::Controls::TextEdit* value);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_Text_fn(MultilineTextInput* __this, uString** __retval);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_Text_fn(MultilineTextInput* __this, uString* value);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_TextAlignment_fn(MultilineTextInput* __this, int* value);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_TextColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_View_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIView** __retval);
void MultilineTextInput__get_LineCount_fn(MultilineTextInput* __this, int* __retval);
void MultilineTextInput__New1_fn(MultilineTextInput** __retval);
void MultilineTextInput__add_TextChanged_fn(MultilineTextInput* __this, uDelegate* value);
void MultilineTextInput__remove_TextChanged_fn(MultilineTextInput* __this, uDelegate* value);
void MultilineTextInput__get_TextView_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView** __retval);
void MultilineTextInput__UpdatePlaceholder_fn(MultilineTextInput* __this);

struct MultilineTextInput : uObject
{
    uStrong< ::g::iOS::UIKit::UILabel*> _placeholderLabel;
    uStrong< ::g::iOS::UIKit::UITextView*> _textView;
    uStrong< ::g::Fuse::Controls::TextEdit*> _SemanticControl;
    uStrong<uDelegate*> TextChanged1;

    void ctor_();
    int LineCount();
    void add_TextChanged(uDelegate* value);
    void remove_TextChanged(uDelegate* value);
    ::g::iOS::UIKit::UITextView* TextView();
    void UpdatePlaceholder();
    static MultilineTextInput* New1();
};
// }

}}}}} // ::g::Fuse::iOS::Bindings::Controls
