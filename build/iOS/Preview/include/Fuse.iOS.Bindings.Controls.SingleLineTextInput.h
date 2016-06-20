// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.iOS.Bindings.Controls.ITextInputImpl.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace Controls{struct SingleLineTextInput;}}}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace UIKit{struct UIColor;}}}
namespace g{namespace iOS{namespace UIKit{struct UIFont;}}}
namespace g{namespace iOS{namespace UIKit{struct UITextField;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace Controls{

// internal sealed extern class SingleLineTextInput :1357
// {
struct SingleLineTextInput_type : uType
{
    ::g::Fuse::iOS::Bindings::Controls::ITextInputImpl interface0;
};

SingleLineTextInput_type* SingleLineTextInput_typeof();
void SingleLineTextInput__ctor__fn(SingleLineTextInput* __this);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_CaretColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_Font_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIFont** __retval);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_Font_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIFont* value);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_Frame_fn(SingleLineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_Frame_fn(SingleLineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* value);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_IUITextInput_fn(SingleLineTextInput* __this, uObject** __retval);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_LineCount_fn(SingleLineTextInput* __this, int* __retval);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderText_fn(SingleLineTextInput* __this, uString* value);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_SemanticControl_fn(SingleLineTextInput* __this, ::g::Fuse::Controls::TextEdit** __retval);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_SemanticControl_fn(SingleLineTextInput* __this, ::g::Fuse::Controls::TextEdit* value);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_Text_fn(SingleLineTextInput* __this, uString** __retval);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_Text_fn(SingleLineTextInput* __this, uString* value);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_TextAlignment_fn(SingleLineTextInput* __this, int* value);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_TextColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_View_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIView** __retval);
void SingleLineTextInput__New1_fn(SingleLineTextInput** __retval);
void SingleLineTextInput__add_TextChanged_fn(SingleLineTextInput* __this, uDelegate* value);
void SingleLineTextInput__remove_TextChanged_fn(SingleLineTextInput* __this, uDelegate* value);
void SingleLineTextInput__get_TextField_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField** __retval);

struct SingleLineTextInput : uObject
{
    uStrong< ::g::iOS::UIKit::UITextField*> _textField;
    uStrong< ::g::Fuse::Controls::TextEdit*> _SemanticControl;
    uStrong<uDelegate*> TextChanged1;

    void ctor_();
    void add_TextChanged(uDelegate* value);
    void remove_TextChanged(uDelegate* value);
    ::g::iOS::UIKit::UITextField* TextField();
    static SingleLineTextInput* New1();
};
// }

}}}}} // ::g::Fuse::iOS::Bindings::Controls
