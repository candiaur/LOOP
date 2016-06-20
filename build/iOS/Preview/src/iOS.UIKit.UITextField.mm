// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UITextField
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UITextField*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UITextField_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSComparisonResult.h>
#include <iOS.Foundation.NSDictionary.h>
#include <iOS.UIKit.IUITextInputDelegate.h>
#include <iOS.UIKit.IUITextInputTokenizer.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIFont.h>
#include <iOS.UIKit.UIKeyboardAppearance.h>
#include <iOS.UIKit.UIKeyboardType.h>
#include <iOS.UIKit.UIReturnKeyType.h>
#include <iOS.UIKit.UITextAutocapitalizationType.h>
#include <iOS.UIKit.UITextAutocorrectionType.h>
#include <iOS.UIKit.UITextField.h>
#include <iOS.UIKit.UITextLayoutDirection.h>
#include <iOS.UIKit.UITextPosition.h>
#include <iOS.UIKit.UITextRange.h>
#include <iOS.UIKit.UITextSpellCheckingType.h>
#include <iOS.UIKit.UITextStorageDirection.h>
#include <iOS.UIKit.UITextWritingDirection.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.ID.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.Foundation._NSRange.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UITextField :84596
// {
static void UITextField_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UITextField_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(UITextField_type, interface1),
        ::g::iOS::UIKit::IUITextInput_typeof(), offsetof(UITextField_type, interface2),
        ::g::iOS::UIKit::IUIKeyInput_typeof(), offsetof(UITextField_type, interface3),
        ::g::iOS::UIKit::IUITextInputTraits_typeof(), offsetof(UITextField_type, interface4));
    type->SetFields(1);
    type->Reflection.SetFunctions(81,
        new uFunction("autocapitalizationType", NULL, (void*)UITextField__autocapitalizationType_fn, 0, false, ::g::iOS::UIKit::UITextAutocapitalizationType_typeof(), 0),
        new uFunction("autocorrectionType", NULL, (void*)UITextField__autocorrectionType_fn, 0, false, ::g::iOS::UIKit::UITextAutocorrectionType_typeof(), 0),
        new uFunction("baseWritingDirectionForPositionInDirection", NULL, (void*)UITextField__baseWritingDirectionForPositionInDirection_fn, 0, false, ::g::iOS::UIKit::UITextWritingDirection_typeof(), 2, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextStorageDirection_typeof()),
        new uFunction("beginningOfDocument", NULL, (void*)UITextField__beginningOfDocument_fn, 0, false, ::g::iOS::UIKit::UITextPosition_typeof(), 0),
        new uFunction("caretRectForPosition", NULL, (void*)UITextField__caretRectForPosition_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 1, ::g::iOS::UIKit::UITextPosition_typeof()),
        new uFunction("characterOffsetOfPositionWithinRange", NULL, (void*)UITextField__characterOffsetOfPositionWithinRange_fn, 0, false, ::g::Uno::Int_typeof(), 2, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextRange_typeof()),
        new uFunction("characterRangeAtPoint", NULL, (void*)UITextField__characterRangeAtPoint_fn, 0, false, ::g::iOS::UIKit::UITextRange_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("characterRangeByExtendingPositionInDirection", NULL, (void*)UITextField__characterRangeByExtendingPositionInDirection_fn, 0, false, ::g::iOS::UIKit::UITextRange_typeof(), 2, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextLayoutDirection_typeof()),
        new uFunction("closestPositionToPoint", NULL, (void*)UITextField__closestPositionToPoint_fn, 0, false, ::g::iOS::UIKit::UITextPosition_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("closestPositionToPointWithinRange", NULL, (void*)UITextField__closestPositionToPointWithinRange_fn, 0, false, ::g::iOS::UIKit::UITextPosition_typeof(), 2, ::g::iOS::CoreGraphics::CGPoint_typeof(), ::g::iOS::UIKit::UITextRange_typeof()),
        new uFunction("comparePositionToPosition", NULL, (void*)UITextField__comparePositionToPosition_fn, 0, false, ::g::iOS::Foundation::NSComparisonResult_typeof(), 2, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextPosition_typeof()),
        new uFunction("deleteBackward", NULL, (void*)UITextField__deleteBackward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("dictationRecognitionFailed", NULL, (void*)UITextField__dictationRecognitionFailed_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("dictationRecordingDidEnd", NULL, (void*)UITextField__dictationRecordingDidEnd_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("enablesReturnKeyAutomatically", NULL, (void*)UITextField__enablesReturnKeyAutomatically_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("endOfDocument", NULL, (void*)UITextField__endOfDocument_fn, 0, false, ::g::iOS::UIKit::UITextPosition_typeof(), 0),
        new uFunction("firstRectForRange", NULL, (void*)UITextField__firstRectForRange_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 1, ::g::iOS::UIKit::UITextRange_typeof()),
        new uFunction("font", NULL, (void*)UITextField__font_fn, 0, false, ::g::iOS::UIKit::UIFont_typeof(), 0),
        new uFunction("get_Font", NULL, (void*)UITextField__get_Font_fn, 0, false, ::g::iOS::UIKit::UIFont_typeof(), 0),
        new uFunction("set_Font", NULL, (void*)UITextField__set_Font_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIFont_typeof()),
        new uFunction("frameForDictationResultPlaceholder", NULL, (void*)UITextField__frameForDictationResultPlaceholder_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 1, ::g::ObjC::ID_typeof()),
        new uFunction("hasText", NULL, (void*)UITextField__hasText_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("inputDelegate", NULL, (void*)UITextField__inputDelegate_fn, 0, false, ::g::iOS::UIKit::IUITextInputDelegate_typeof(), 0),
        new uFunction("insertDictationResult", NULL, (void*)UITextField__insertDictationResult_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("insertDictationResultPlaceholder", NULL, (void*)UITextField__insertDictationResultPlaceholder_fn, 0, false, ::g::ObjC::ID_typeof(), 0),
        new uFunction("insertText", NULL, (void*)UITextField__insertText_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("isSecureTextEntry", NULL, (void*)UITextField__isSecureTextEntry_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("keyboardAppearance", NULL, (void*)UITextField__keyboardAppearance_fn, 0, false, ::g::iOS::UIKit::UIKeyboardAppearance_typeof(), 0),
        new uFunction("keyboardType", NULL, (void*)UITextField__keyboardType_fn, 0, false, ::g::iOS::UIKit::UIKeyboardType_typeof(), 0),
        new uFunction("markedTextRange", NULL, (void*)UITextField__markedTextRange_fn, 0, false, ::g::iOS::UIKit::UITextRange_typeof(), 0),
        new uFunction("markedTextStyle", NULL, (void*)UITextField__markedTextStyle_fn, 0, false, ::g::iOS::Foundation::NSDictionary_typeof(), 0),
        new uFunction("offsetFromPositionToPosition", NULL, (void*)UITextField__offsetFromPositionToPosition_fn, 0, false, ::g::Uno::Int_typeof(), 2, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextPosition_typeof()),
        new uFunction("placeholder", NULL, (void*)UITextField__placeholder_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Placeholder", NULL, (void*)UITextField__get_Placeholder_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Placeholder", NULL, (void*)UITextField__set_Placeholder_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("positionFromPositionInDirectionOffset", NULL, (void*)UITextField__positionFromPositionInDirectionOffset_fn, 0, false, ::g::iOS::UIKit::UITextPosition_typeof(), 3, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextLayoutDirection_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("positionFromPositionOffset", NULL, (void*)UITextField__positionFromPositionOffset_fn, 0, false, ::g::iOS::UIKit::UITextPosition_typeof(), 2, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("positionWithinRangeAtCharacterOffset", NULL, (void*)UITextField__positionWithinRangeAtCharacterOffset_fn, 0, false, ::g::iOS::UIKit::UITextPosition_typeof(), 2, ::g::iOS::UIKit::UITextRange_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("positionWithinRangeFarthestInDirection", NULL, (void*)UITextField__positionWithinRangeFarthestInDirection_fn, 0, false, ::g::iOS::UIKit::UITextPosition_typeof(), 2, ::g::iOS::UIKit::UITextRange_typeof(), ::g::iOS::UIKit::UITextLayoutDirection_typeof()),
        new uFunction("removeDictationResultPlaceholderWillInsertResult", NULL, (void*)UITextField__removeDictationResultPlaceholderWillInsertResult_fn, 0, false, uVoid_typeof(), 2, ::g::ObjC::ID_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("replaceRangeWithText", NULL, (void*)UITextField__replaceRangeWithText_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UITextRange_typeof(), ::g::Uno::String_typeof()),
        new uFunction("returnKeyType", NULL, (void*)UITextField__returnKeyType_fn, 0, false, ::g::iOS::UIKit::UIReturnKeyType_typeof(), 0),
        new uFunction("selectedTextRange", NULL, (void*)UITextField__selectedTextRange_fn, 0, false, ::g::iOS::UIKit::UITextRange_typeof(), 0),
        new uFunction("selectionAffinity", NULL, (void*)UITextField__selectionAffinity_fn, 0, false, ::g::iOS::UIKit::UITextStorageDirection_typeof(), 0),
        new uFunction("selectionRectsForRange", NULL, (void*)UITextField__selectionRectsForRange_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 1, ::g::iOS::UIKit::UITextRange_typeof()),
        new uFunction("setAutocapitalizationType", NULL, (void*)UITextField__setAutocapitalizationType_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UITextAutocapitalizationType_typeof()),
        new uFunction("setAutocorrectionType", NULL, (void*)UITextField__setAutocorrectionType_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UITextAutocorrectionType_typeof()),
        new uFunction("setBaseWritingDirectionForRange", NULL, (void*)UITextField__setBaseWritingDirectionForRange_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UITextWritingDirection_typeof(), ::g::iOS::UIKit::UITextRange_typeof()),
        new uFunction("setEnablesReturnKeyAutomatically", NULL, (void*)UITextField__setEnablesReturnKeyAutomatically_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setFont", NULL, (void*)UITextField__setFont_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIFont_typeof()),
        new uFunction("setInputDelegate", NULL, (void*)UITextField__setInputDelegate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUITextInputDelegate_typeof()),
        new uFunction("setKeyboardAppearance", NULL, (void*)UITextField__setKeyboardAppearance_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIKeyboardAppearance_typeof()),
        new uFunction("setKeyboardType", NULL, (void*)UITextField__setKeyboardType_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIKeyboardType_typeof()),
        new uFunction("setMarkedTextSelectedRange", NULL, (void*)UITextField__setMarkedTextSelectedRange_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::iOS::Foundation::_NSRange_typeof()),
        new uFunction("setMarkedTextStyle", NULL, (void*)UITextField__setMarkedTextStyle_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSDictionary_typeof()),
        new uFunction("setPlaceholder", NULL, (void*)UITextField__setPlaceholder_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("setReturnKeyType", NULL, (void*)UITextField__setReturnKeyType_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIReturnKeyType_typeof()),
        new uFunction("setSecureTextEntry", NULL, (void*)UITextField__setSecureTextEntry_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setSelectedTextRange", NULL, (void*)UITextField__setSelectedTextRange_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UITextRange_typeof()),
        new uFunction("setSelectionAffinity", NULL, (void*)UITextField__setSelectionAffinity_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UITextStorageDirection_typeof()),
        new uFunction("setSpellCheckingType", NULL, (void*)UITextField__setSpellCheckingType_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UITextSpellCheckingType_typeof()),
        new uFunction("setText", NULL, (void*)UITextField__setText_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("setTextAlignment", NULL, (void*)UITextField__setTextAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::NSTextAlignment_typeof()),
        new uFunction("setTextColor", NULL, (void*)UITextField__setTextColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIColor_typeof()),
        new uFunction("shouldChangeTextInRangeReplacementText", NULL, (void*)UITextField__shouldChangeTextInRangeReplacementText_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::iOS::UIKit::UITextRange_typeof(), ::g::Uno::String_typeof()),
        new uFunction("spellCheckingType", NULL, (void*)UITextField__spellCheckingType_fn, 0, false, ::g::iOS::UIKit::UITextSpellCheckingType_typeof(), 0),
        new uFunction("text", NULL, (void*)UITextField__text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Text", NULL, (void*)UITextField__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)UITextField__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("textAlignment", NULL, (void*)UITextField__textAlignment_fn, 0, false, ::g::iOS::UIKit::NSTextAlignment_typeof(), 0),
        new uFunction("get_TextAlignment", NULL, (void*)UITextField__get_TextAlignment_fn, 0, false, ::g::iOS::UIKit::NSTextAlignment_typeof(), 0),
        new uFunction("set_TextAlignment", NULL, (void*)UITextField__set_TextAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::NSTextAlignment_typeof()),
        new uFunction("textColor", NULL, (void*)UITextField__textColor_fn, 0, false, ::g::iOS::UIKit::UIColor_typeof(), 0),
        new uFunction("get_TextColor", NULL, (void*)UITextField__get_TextColor_fn, 0, false, ::g::iOS::UIKit::UIColor_typeof(), 0),
        new uFunction("set_TextColor", NULL, (void*)UITextField__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIColor_typeof()),
        new uFunction("textInputView", NULL, (void*)UITextField__textInputView_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("textInRange", NULL, (void*)UITextField__textInRange_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::iOS::UIKit::UITextRange_typeof()),
        new uFunction("textRangeFromPositionToPosition", NULL, (void*)UITextField__textRangeFromPositionToPosition_fn, 0, false, ::g::iOS::UIKit::UITextRange_typeof(), 2, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextPosition_typeof()),
        new uFunction("textStylingAtPositionInDirection", NULL, (void*)UITextField__textStylingAtPositionInDirection_fn, 0, false, ::g::iOS::Foundation::NSDictionary_typeof(), 2, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextStorageDirection_typeof()),
        new uFunction("tokenizer", NULL, (void*)UITextField__tokenizer_fn, 0, false, ::g::iOS::UIKit::IUITextInputTokenizer_typeof(), 0),
        new uFunction("unmarkText", NULL, (void*)UITextField__unmarkText_fn, 0, false, uVoid_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

UITextField_type* UITextField_typeof()
{
    static uSStrong<UITextField_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(UITextField);
    options.TypeSize = sizeof(UITextField_type);
    type = (UITextField_type*)uClassType::New("iOS.UIKit.UITextField", options);
    type->SetBase(::g::iOS::UIKit::UIControl_typeof());
    type->fp_build_ = UITextField_build;
    type->fp_inputAccessoryView = (void(*)(::g::iOS::UIKit::UIResponder*, ::g::iOS::UIKit::UIView**))UITextField__inputAccessoryView_fn;
    type->fp_inputView = (void(*)(::g::iOS::UIKit::UIResponder*, ::g::iOS::UIKit::UIView**))UITextField__inputView_fn;
    type->interface2.fp_textInRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextRange*, uString**))UITextField__iOSUIKitIUITextInputtextInRange_fn;
    type->interface2.fp_replaceRangeWithText = (void(*)(uObject*, ::g::iOS::UIKit::UITextRange*, uString*))UITextField__iOSUIKitIUITextInputreplaceRangeWithText_fn;
    type->interface2.fp_setMarkedTextSelectedRange = (void(*)(uObject*, uString*, ::g::iOS::Foundation::_NSRange*))UITextField__iOSUIKitIUITextInputsetMarkedTextSelectedRange_fn;
    type->interface2.fp_unmarkText = (void(*)(uObject*))UITextField__iOSUIKitIUITextInputunmarkText_fn;
    type->interface2.fp_textRangeFromPositionToPosition = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, ::g::iOS::UIKit::UITextPosition*, ::g::iOS::UIKit::UITextRange**))UITextField__iOSUIKitIUITextInputtextRangeFromPositionToPosition_fn;
    type->interface2.fp_positionFromPositionOffset = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, int*, ::g::iOS::UIKit::UITextPosition**))UITextField__iOSUIKitIUITextInputpositionFromPositionOffset_fn;
    type->interface2.fp_positionFromPositionInDirectionOffset = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, int*, int*, ::g::iOS::UIKit::UITextPosition**))UITextField__iOSUIKitIUITextInputpositionFromPositionInDirectionOffset_fn;
    type->interface2.fp_comparePositionToPosition = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, ::g::iOS::UIKit::UITextPosition*, int*))UITextField__iOSUIKitIUITextInputcomparePositionToPosition_fn;
    type->interface2.fp_offsetFromPositionToPosition = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, ::g::iOS::UIKit::UITextPosition*, int*))UITextField__iOSUIKitIUITextInputoffsetFromPositionToPosition_fn;
    type->interface2.fp_positionWithinRangeFarthestInDirection = (void(*)(uObject*, ::g::iOS::UIKit::UITextRange*, int*, ::g::iOS::UIKit::UITextPosition**))UITextField__iOSUIKitIUITextInputpositionWithinRangeFarthestInDirection_fn;
    type->interface2.fp_characterRangeByExtendingPositionInDirection = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, int*, ::g::iOS::UIKit::UITextRange**))UITextField__iOSUIKitIUITextInputcharacterRangeByExtendingPositionInDirection_fn;
    type->interface2.fp_baseWritingDirectionForPositionInDirection = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, int*, int*))UITextField__iOSUIKitIUITextInputbaseWritingDirectionForPositionInDirection_fn;
    type->interface2.fp_setBaseWritingDirectionForRange = (void(*)(uObject*, int*, ::g::iOS::UIKit::UITextRange*))UITextField__iOSUIKitIUITextInputsetBaseWritingDirectionForRange_fn;
    type->interface2.fp_firstRectForRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextRange*, ::g::iOS::CoreGraphics::CGRect*))UITextField__iOSUIKitIUITextInputfirstRectForRange_fn;
    type->interface2.fp_caretRectForPosition = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, ::g::iOS::CoreGraphics::CGRect*))UITextField__iOSUIKitIUITextInputcaretRectForPosition_fn;
    type->interface2.fp_selectionRectsForRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextRange*, ::g::iOS::Foundation::NSArray**))UITextField__iOSUIKitIUITextInputselectionRectsForRange_fn;
    type->interface2.fp_closestPositionToPoint = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, ::g::iOS::UIKit::UITextPosition**))UITextField__iOSUIKitIUITextInputclosestPositionToPoint_fn;
    type->interface2.fp_closestPositionToPointWithinRange = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, ::g::iOS::UIKit::UITextRange*, ::g::iOS::UIKit::UITextPosition**))UITextField__iOSUIKitIUITextInputclosestPositionToPointWithinRange_fn;
    type->interface2.fp_characterRangeAtPoint = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, ::g::iOS::UIKit::UITextRange**))UITextField__iOSUIKitIUITextInputcharacterRangeAtPoint_fn;
    type->interface2.fp_shouldChangeTextInRangeReplacementText = (void(*)(uObject*, ::g::iOS::UIKit::UITextRange*, uString*, bool*))UITextField__iOSUIKitIUITextInputshouldChangeTextInRangeReplacementText_fn;
    type->interface2.fp_textStylingAtPositionInDirection = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, int*, ::g::iOS::Foundation::NSDictionary**))UITextField__iOSUIKitIUITextInputtextStylingAtPositionInDirection_fn;
    type->interface2.fp_positionWithinRangeAtCharacterOffset = (void(*)(uObject*, ::g::iOS::UIKit::UITextRange*, int*, ::g::iOS::UIKit::UITextPosition**))UITextField__iOSUIKitIUITextInputpositionWithinRangeAtCharacterOffset_fn;
    type->interface2.fp_characterOffsetOfPositionWithinRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, ::g::iOS::UIKit::UITextRange*, int*))UITextField__iOSUIKitIUITextInputcharacterOffsetOfPositionWithinRange_fn;
    type->interface2.fp_insertDictationResult = (void(*)(uObject*, ::g::iOS::Foundation::NSArray*))UITextField__iOSUIKitIUITextInputinsertDictationResult_fn;
    type->interface2.fp_dictationRecordingDidEnd = (void(*)(uObject*))UITextField__iOSUIKitIUITextInputdictationRecordingDidEnd_fn;
    type->interface2.fp_dictationRecognitionFailed = (void(*)(uObject*))UITextField__iOSUIKitIUITextInputdictationRecognitionFailed_fn;
    type->interface2.fp_insertDictationResultPlaceholder = (void(*)(uObject*, ::id*))UITextField__iOSUIKitIUITextInputinsertDictationResultPlaceholder_fn;
    type->interface2.fp_frameForDictationResultPlaceholder = (void(*)(uObject*, ::id*, ::g::iOS::CoreGraphics::CGRect*))UITextField__iOSUIKitIUITextInputframeForDictationResultPlaceholder_fn;
    type->interface2.fp_removeDictationResultPlaceholderWillInsertResult = (void(*)(uObject*, ::id*, bool*))UITextField__iOSUIKitIUITextInputremoveDictationResultPlaceholderWillInsertResult_fn;
    type->interface3.fp_hasText = (void(*)(uObject*, bool*))UITextField__iOSUIKitIUIKeyInputhasText_fn;
    type->interface3.fp_insertText = (void(*)(uObject*, uString*))UITextField__iOSUIKitIUIKeyInputinsertText_fn;
    type->interface3.fp_deleteBackward = (void(*)(uObject*))UITextField__iOSUIKitIUIKeyInputdeleteBackward_fn;
    type->interface2.fp_selectedTextRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextRange**))UITextField__selectedTextRange_fn;
    type->interface2.fp_setSelectedTextRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextRange*))UITextField__setSelectedTextRange_fn;
    type->interface2.fp_markedTextRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextRange**))UITextField__markedTextRange_fn;
    type->interface2.fp_markedTextStyle = (void(*)(uObject*, ::g::iOS::Foundation::NSDictionary**))UITextField__markedTextStyle_fn;
    type->interface2.fp_setMarkedTextStyle = (void(*)(uObject*, ::g::iOS::Foundation::NSDictionary*))UITextField__setMarkedTextStyle_fn;
    type->interface2.fp_beginningOfDocument = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition**))UITextField__beginningOfDocument_fn;
    type->interface2.fp_endOfDocument = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition**))UITextField__endOfDocument_fn;
    type->interface2.fp_inputDelegate = (void(*)(uObject*, uObject**))UITextField__inputDelegate_fn;
    type->interface2.fp_setInputDelegate = (void(*)(uObject*, uObject*))UITextField__setInputDelegate_fn;
    type->interface2.fp_tokenizer = (void(*)(uObject*, uObject**))UITextField__tokenizer_fn;
    type->interface2.fp_textInputView = (void(*)(uObject*, ::g::iOS::UIKit::UIView**))UITextField__textInputView_fn;
    type->interface2.fp_selectionAffinity = (void(*)(uObject*, int*))UITextField__selectionAffinity_fn;
    type->interface2.fp_setSelectionAffinity = (void(*)(uObject*, int*))UITextField__setSelectionAffinity_fn;
    type->interface2.fp_hasText = (void(*)(uObject*, bool*))UITextField__hasText_fn;
    type->interface2.fp_insertText = (void(*)(uObject*, uString*))UITextField__insertText_fn;
    type->interface2.fp_deleteBackward = (void(*)(uObject*))UITextField__deleteBackward_fn;
    type->interface2.fp_autocapitalizationType = (void(*)(uObject*, int*))UITextField__autocapitalizationType_fn;
    type->interface2.fp_setAutocapitalizationType = (void(*)(uObject*, int*))UITextField__setAutocapitalizationType_fn;
    type->interface2.fp_autocorrectionType = (void(*)(uObject*, int*))UITextField__autocorrectionType_fn;
    type->interface2.fp_setAutocorrectionType = (void(*)(uObject*, int*))UITextField__setAutocorrectionType_fn;
    type->interface2.fp_spellCheckingType = (void(*)(uObject*, int*))UITextField__spellCheckingType_fn;
    type->interface2.fp_setSpellCheckingType = (void(*)(uObject*, int*))UITextField__setSpellCheckingType_fn;
    type->interface2.fp_keyboardType = (void(*)(uObject*, int*))UITextField__keyboardType_fn;
    type->interface2.fp_setKeyboardType = (void(*)(uObject*, int*))UITextField__setKeyboardType_fn;
    type->interface2.fp_keyboardAppearance = (void(*)(uObject*, int*))UITextField__keyboardAppearance_fn;
    type->interface2.fp_setKeyboardAppearance = (void(*)(uObject*, int*))UITextField__setKeyboardAppearance_fn;
    type->interface2.fp_returnKeyType = (void(*)(uObject*, int*))UITextField__returnKeyType_fn;
    type->interface2.fp_setReturnKeyType = (void(*)(uObject*, int*))UITextField__setReturnKeyType_fn;
    type->interface2.fp_enablesReturnKeyAutomatically = (void(*)(uObject*, bool*))UITextField__enablesReturnKeyAutomatically_fn;
    type->interface2.fp_setEnablesReturnKeyAutomatically = (void(*)(uObject*, bool*))UITextField__setEnablesReturnKeyAutomatically_fn;
    type->interface2.fp_isSecureTextEntry = (void(*)(uObject*, bool*))UITextField__isSecureTextEntry_fn;
    type->interface2.fp_setSecureTextEntry = (void(*)(uObject*, bool*))UITextField__setSecureTextEntry_fn;
    type->interface3.fp_autocapitalizationType = (void(*)(uObject*, int*))UITextField__autocapitalizationType_fn;
    type->interface3.fp_setAutocapitalizationType = (void(*)(uObject*, int*))UITextField__setAutocapitalizationType_fn;
    type->interface3.fp_autocorrectionType = (void(*)(uObject*, int*))UITextField__autocorrectionType_fn;
    type->interface3.fp_setAutocorrectionType = (void(*)(uObject*, int*))UITextField__setAutocorrectionType_fn;
    type->interface3.fp_spellCheckingType = (void(*)(uObject*, int*))UITextField__spellCheckingType_fn;
    type->interface3.fp_setSpellCheckingType = (void(*)(uObject*, int*))UITextField__setSpellCheckingType_fn;
    type->interface3.fp_keyboardType = (void(*)(uObject*, int*))UITextField__keyboardType_fn;
    type->interface3.fp_setKeyboardType = (void(*)(uObject*, int*))UITextField__setKeyboardType_fn;
    type->interface3.fp_keyboardAppearance = (void(*)(uObject*, int*))UITextField__keyboardAppearance_fn;
    type->interface3.fp_setKeyboardAppearance = (void(*)(uObject*, int*))UITextField__setKeyboardAppearance_fn;
    type->interface3.fp_returnKeyType = (void(*)(uObject*, int*))UITextField__returnKeyType_fn;
    type->interface3.fp_setReturnKeyType = (void(*)(uObject*, int*))UITextField__setReturnKeyType_fn;
    type->interface3.fp_enablesReturnKeyAutomatically = (void(*)(uObject*, bool*))UITextField__enablesReturnKeyAutomatically_fn;
    type->interface3.fp_setEnablesReturnKeyAutomatically = (void(*)(uObject*, bool*))UITextField__setEnablesReturnKeyAutomatically_fn;
    type->interface3.fp_isSecureTextEntry = (void(*)(uObject*, bool*))UITextField__isSecureTextEntry_fn;
    type->interface3.fp_setSecureTextEntry = (void(*)(uObject*, bool*))UITextField__setSecureTextEntry_fn;
    type->interface4.fp_autocapitalizationType = (void(*)(uObject*, int*))UITextField__autocapitalizationType_fn;
    type->interface4.fp_setAutocapitalizationType = (void(*)(uObject*, int*))UITextField__setAutocapitalizationType_fn;
    type->interface4.fp_autocorrectionType = (void(*)(uObject*, int*))UITextField__autocorrectionType_fn;
    type->interface4.fp_setAutocorrectionType = (void(*)(uObject*, int*))UITextField__setAutocorrectionType_fn;
    type->interface4.fp_spellCheckingType = (void(*)(uObject*, int*))UITextField__spellCheckingType_fn;
    type->interface4.fp_setSpellCheckingType = (void(*)(uObject*, int*))UITextField__setSpellCheckingType_fn;
    type->interface4.fp_keyboardType = (void(*)(uObject*, int*))UITextField__keyboardType_fn;
    type->interface4.fp_setKeyboardType = (void(*)(uObject*, int*))UITextField__setKeyboardType_fn;
    type->interface4.fp_keyboardAppearance = (void(*)(uObject*, int*))UITextField__keyboardAppearance_fn;
    type->interface4.fp_setKeyboardAppearance = (void(*)(uObject*, int*))UITextField__setKeyboardAppearance_fn;
    type->interface4.fp_returnKeyType = (void(*)(uObject*, int*))UITextField__returnKeyType_fn;
    type->interface4.fp_setReturnKeyType = (void(*)(uObject*, int*))UITextField__setReturnKeyType_fn;
    type->interface4.fp_enablesReturnKeyAutomatically = (void(*)(uObject*, bool*))UITextField__enablesReturnKeyAutomatically_fn;
    type->interface4.fp_setEnablesReturnKeyAutomatically = (void(*)(uObject*, bool*))UITextField__setEnablesReturnKeyAutomatically_fn;
    type->interface4.fp_isSecureTextEntry = (void(*)(uObject*, bool*))UITextField__isSecureTextEntry_fn;
    type->interface4.fp_setSecureTextEntry = (void(*)(uObject*, bool*))UITextField__setSecureTextEntry_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.UIKit.UITextAutocapitalizationType autocapitalizationType() :85162
void UITextField__autocapitalizationType_fn(UITextField* __this, int* __retval)
{
    *__retval = __this->autocapitalizationType();
}

// public extern iOS.UIKit.UITextAutocorrectionType autocorrectionType() :85168
void UITextField__autocorrectionType_fn(UITextField* __this, int* __retval)
{
    *__retval = __this->autocorrectionType();
}

// public extern iOS.UIKit.UITextWritingDirection baseWritingDirectionForPositionInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextStorageDirection direction) :85060
void UITextField__baseWritingDirectionForPositionInDirection_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position_, int* direction_, int* __retval)
{
    *__retval = __this->baseWritingDirectionForPositionInDirection(position_, *direction_);
}

// public extern iOS.UIKit.UITextPosition beginningOfDocument() :85129
void UITextField__beginningOfDocument_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition** __retval)
{
    *__retval = __this->beginningOfDocument();
}

// public extern iOS.CoreGraphics.CGRect caretRectForPosition(iOS.UIKit.UITextPosition position) :85069
void UITextField__caretRectForPosition_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->caretRectForPosition(position_);
}

// public extern int characterOffsetOfPositionWithinRange(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextRange range) :85093
void UITextField__characterOffsetOfPositionWithinRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position_, ::g::iOS::UIKit::UITextRange* range_, int* __retval)
{
    *__retval = __this->characterOffsetOfPositionWithinRange(position_, range_);
}

// public extern iOS.UIKit.UITextRange characterRangeAtPoint(iOS.CoreGraphics.CGPoint point) :85081
void UITextField__characterRangeAtPoint_fn(UITextField* __this, ::g::iOS::CoreGraphics::CGPoint* point_, ::g::iOS::UIKit::UITextRange** __retval)
{
    *__retval = __this->characterRangeAtPoint(*point_);
}

// public extern iOS.UIKit.UITextRange characterRangeByExtendingPositionInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextLayoutDirection direction) :85057
void UITextField__characterRangeByExtendingPositionInDirection_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position_, int* direction_, ::g::iOS::UIKit::UITextRange** __retval)
{
    *__retval = __this->characterRangeByExtendingPositionInDirection(position_, *direction_);
}

// public extern iOS.UIKit.UITextPosition closestPositionToPoint(iOS.CoreGraphics.CGPoint point) :85075
void UITextField__closestPositionToPoint_fn(UITextField* __this, ::g::iOS::CoreGraphics::CGPoint* point_, ::g::iOS::UIKit::UITextPosition** __retval)
{
    *__retval = __this->closestPositionToPoint(*point_);
}

// public extern iOS.UIKit.UITextPosition closestPositionToPointWithinRange(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UITextRange range) :85078
void UITextField__closestPositionToPointWithinRange_fn(UITextField* __this, ::g::iOS::CoreGraphics::CGPoint* point_, ::g::iOS::UIKit::UITextRange* range_, ::g::iOS::UIKit::UITextPosition** __retval)
{
    *__retval = __this->closestPositionToPointWithinRange(*point_, range_);
}

// public extern iOS.Foundation.NSComparisonResult comparePositionToPosition(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextPosition other) :85048
void UITextField__comparePositionToPosition_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position_, ::g::iOS::UIKit::UITextPosition* other_, int* __retval)
{
    *__retval = __this->comparePositionToPosition(position_, other_);
}

// public extern void deleteBackward() :85159
void UITextField__deleteBackward_fn(UITextField* __this)
{
    __this->deleteBackward();
}

// public extern void dictationRecognitionFailed() :85102
void UITextField__dictationRecognitionFailed_fn(UITextField* __this)
{
    __this->dictationRecognitionFailed();
}

// public extern void dictationRecordingDidEnd() :85099
void UITextField__dictationRecordingDidEnd_fn(UITextField* __this)
{
    __this->dictationRecordingDidEnd();
}

// public extern bool enablesReturnKeyAutomatically() :85198
void UITextField__enablesReturnKeyAutomatically_fn(UITextField* __this, bool* __retval)
{
    *__retval = __this->enablesReturnKeyAutomatically();
}

// public extern iOS.UIKit.UITextPosition endOfDocument() :85132
void UITextField__endOfDocument_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition** __retval)
{
    *__retval = __this->endOfDocument();
}

// public extern iOS.CoreGraphics.CGRect firstRectForRange(iOS.UIKit.UITextRange range) :85066
void UITextField__firstRectForRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->firstRectForRange(range_);
}

// public extern iOS.UIKit.UIFont font() :84892
void UITextField__font_fn(UITextField* __this, ::g::iOS::UIKit::UIFont** __retval)
{
    *__retval = __this->font();
}

// public iOS.UIKit.UIFont get_Font() :84626
void UITextField__get_Font_fn(UITextField* __this, ::g::iOS::UIKit::UIFont** __retval)
{
    *__retval = __this->Font();
}

// public void set_Font(iOS.UIKit.UIFont value) :84627
void UITextField__set_Font_fn(UITextField* __this, ::g::iOS::UIKit::UIFont* value)
{
    __this->Font(value);
}

// public extern iOS.CoreGraphics.CGRect frameForDictationResultPlaceholder(ObjC.ID placeholder) :85108
void UITextField__frameForDictationResultPlaceholder_fn(UITextField* __this, ::id* placeholder_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->frameForDictationResultPlaceholder(*placeholder_);
}

// public extern bool hasText() :85153
void UITextField__hasText_fn(UITextField* __this, bool* __retval)
{
    *__retval = __this->hasText();
}

// public override sealed extern iOS.UIKit.UIView inputAccessoryView() :85015
void UITextField__inputAccessoryView_fn(UITextField* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "inputAccessoryView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::UIView*, @selector(inputAccessoryView));
    return *__retval = (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof()), void();
}

// public extern iOS.UIKit.IUITextInputDelegate inputDelegate() :85135
void UITextField__inputDelegate_fn(UITextField* __this, uObject** __retval)
{
    *__retval = __this->inputDelegate();
}

// public override sealed extern iOS.UIKit.UIView inputView() :85009
void UITextField__inputView_fn(UITextField* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "inputView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::UIView*, @selector(inputView));
    return *__retval = (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof()), void();
}

// public extern void insertDictationResult(iOS.Foundation.NSArray dictationResult) :85096
void UITextField__insertDictationResult_fn(UITextField* __this, ::g::iOS::Foundation::NSArray* dictationResult_)
{
    __this->insertDictationResult(dictationResult_);
}

// public extern ObjC.ID insertDictationResultPlaceholder() :85105
void UITextField__insertDictationResultPlaceholder_fn(UITextField* __this, ::id* __retval)
{
    *__retval = __this->insertDictationResultPlaceholder();
}

// public extern void insertText(string text) :85156
void UITextField__insertText_fn(UITextField* __this, uString* text_)
{
    __this->insertText(text_);
}

// public void iOS.UIKit.IUIKeyInput.deleteBackward() :85271
void UITextField__iOSUIKitIUIKeyInputdeleteBackward_fn(UITextField* __this)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUIKeyInput.deleteBackward()");
    __this->deleteBackward();
}

// public bool iOS.UIKit.IUIKeyInput.hasText() :85267
void UITextField__iOSUIKitIUIKeyInputhasText_fn(UITextField* __this, bool* __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUIKeyInput.hasText()");
    return *__retval = __this->hasText(), void();
}

// public void iOS.UIKit.IUIKeyInput.insertText(string text) :85269
void UITextField__iOSUIKitIUIKeyInputinsertText_fn(UITextField* __this, uString* text1)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUIKeyInput.insertText(string)");
    __this->insertText(text1);
}

// public iOS.UIKit.UITextWritingDirection iOS.UIKit.IUITextInput.baseWritingDirectionForPositionInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextStorageDirection direction) :85231
void UITextField__iOSUIKitIUITextInputbaseWritingDirectionForPositionInDirection_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position, int* direction, int* __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.baseWritingDirectionForPositionInDirection(iOS.UIKit.UITextPosition,iOS.UIKit.UITextStorageDirection)");
    int direction_ = *direction;
    return *__retval = __this->baseWritingDirectionForPositionInDirection(position, direction_), void();
}

// public iOS.CoreGraphics.CGRect iOS.UIKit.IUITextInput.caretRectForPosition(iOS.UIKit.UITextPosition position) :85237
void UITextField__iOSUIKitIUITextInputcaretRectForPosition_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.caretRectForPosition(iOS.UIKit.UITextPosition)");
    return *__retval = __this->caretRectForPosition(position), void();
}

// public int iOS.UIKit.IUITextInput.characterOffsetOfPositionWithinRange(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextRange range) :85253
void UITextField__iOSUIKitIUITextInputcharacterOffsetOfPositionWithinRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position, ::g::iOS::UIKit::UITextRange* range, int* __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.characterOffsetOfPositionWithinRange(iOS.UIKit.UITextPosition,iOS.UIKit.UITextRange)");
    return *__retval = __this->characterOffsetOfPositionWithinRange(position, range), void();
}

// public iOS.UIKit.UITextRange iOS.UIKit.IUITextInput.characterRangeAtPoint(iOS.CoreGraphics.CGPoint point) :85245
void UITextField__iOSUIKitIUITextInputcharacterRangeAtPoint_fn(UITextField* __this, ::g::iOS::CoreGraphics::CGPoint* point, ::g::iOS::UIKit::UITextRange** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.characterRangeAtPoint(iOS.CoreGraphics.CGPoint)");
    ::g::iOS::CoreGraphics::CGPoint point_ = *point;
    return *__retval = __this->characterRangeAtPoint(point_), void();
}

// public iOS.UIKit.UITextRange iOS.UIKit.IUITextInput.characterRangeByExtendingPositionInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextLayoutDirection direction) :85229
void UITextField__iOSUIKitIUITextInputcharacterRangeByExtendingPositionInDirection_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position, int* direction, ::g::iOS::UIKit::UITextRange** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.characterRangeByExtendingPositionInDirection(iOS.UIKit.UITextPosition,iOS.UIKit.UITextLayoutDirection)");
    int direction_ = *direction;
    return *__retval = __this->characterRangeByExtendingPositionInDirection(position, direction_), void();
}

// public iOS.UIKit.UITextPosition iOS.UIKit.IUITextInput.closestPositionToPoint(iOS.CoreGraphics.CGPoint point) :85241
void UITextField__iOSUIKitIUITextInputclosestPositionToPoint_fn(UITextField* __this, ::g::iOS::CoreGraphics::CGPoint* point, ::g::iOS::UIKit::UITextPosition** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.closestPositionToPoint(iOS.CoreGraphics.CGPoint)");
    ::g::iOS::CoreGraphics::CGPoint point_ = *point;
    return *__retval = __this->closestPositionToPoint(point_), void();
}

// public iOS.UIKit.UITextPosition iOS.UIKit.IUITextInput.closestPositionToPointWithinRange(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UITextRange range) :85243
void UITextField__iOSUIKitIUITextInputclosestPositionToPointWithinRange_fn(UITextField* __this, ::g::iOS::CoreGraphics::CGPoint* point, ::g::iOS::UIKit::UITextRange* range, ::g::iOS::UIKit::UITextPosition** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.closestPositionToPointWithinRange(iOS.CoreGraphics.CGPoint,iOS.UIKit.UITextRange)");
    ::g::iOS::CoreGraphics::CGPoint point_ = *point;
    return *__retval = __this->closestPositionToPointWithinRange(point_, range), void();
}

// public iOS.Foundation.NSComparisonResult iOS.UIKit.IUITextInput.comparePositionToPosition(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextPosition other) :85223
void UITextField__iOSUIKitIUITextInputcomparePositionToPosition_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position, ::g::iOS::UIKit::UITextPosition* other, int* __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.comparePositionToPosition(iOS.UIKit.UITextPosition,iOS.UIKit.UITextPosition)");
    return *__retval = __this->comparePositionToPosition(position, other), void();
}

// public void iOS.UIKit.IUITextInput.dictationRecognitionFailed() :85259
void UITextField__iOSUIKitIUITextInputdictationRecognitionFailed_fn(UITextField* __this)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.dictationRecognitionFailed()");
    __this->dictationRecognitionFailed();
}

// public void iOS.UIKit.IUITextInput.dictationRecordingDidEnd() :85257
void UITextField__iOSUIKitIUITextInputdictationRecordingDidEnd_fn(UITextField* __this)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.dictationRecordingDidEnd()");
    __this->dictationRecordingDidEnd();
}

// public iOS.CoreGraphics.CGRect iOS.UIKit.IUITextInput.firstRectForRange(iOS.UIKit.UITextRange range) :85235
void UITextField__iOSUIKitIUITextInputfirstRectForRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.firstRectForRange(iOS.UIKit.UITextRange)");
    return *__retval = __this->firstRectForRange(range), void();
}

// public iOS.CoreGraphics.CGRect iOS.UIKit.IUITextInput.frameForDictationResultPlaceholder(ObjC.ID placeholder) :85263
void UITextField__iOSUIKitIUITextInputframeForDictationResultPlaceholder_fn(UITextField* __this, ::id* placeholder1, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.frameForDictationResultPlaceholder(ObjC.ID)");
    ::id placeholder1_ = *placeholder1;
    return *__retval = __this->frameForDictationResultPlaceholder(placeholder1_), void();
}

// public void iOS.UIKit.IUITextInput.insertDictationResult(iOS.Foundation.NSArray dictationResult) :85255
void UITextField__iOSUIKitIUITextInputinsertDictationResult_fn(UITextField* __this, ::g::iOS::Foundation::NSArray* dictationResult)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.insertDictationResult(iOS.Foundation.NSArray)");
    __this->insertDictationResult(dictationResult);
}

// public ObjC.ID iOS.UIKit.IUITextInput.insertDictationResultPlaceholder() :85261
void UITextField__iOSUIKitIUITextInputinsertDictationResultPlaceholder_fn(UITextField* __this, ::id* __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.insertDictationResultPlaceholder()");
    return *__retval = __this->insertDictationResultPlaceholder(), void();
}

// public int iOS.UIKit.IUITextInput.offsetFromPositionToPosition(iOS.UIKit.UITextPosition from, iOS.UIKit.UITextPosition toPosition) :85225
void UITextField__iOSUIKitIUITextInputoffsetFromPositionToPosition_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* from, ::g::iOS::UIKit::UITextPosition* toPosition, int* __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.offsetFromPositionToPosition(iOS.UIKit.UITextPosition,iOS.UIKit.UITextPosition)");
    return *__retval = __this->offsetFromPositionToPosition(from, toPosition), void();
}

// public iOS.UIKit.UITextPosition iOS.UIKit.IUITextInput.positionFromPositionInDirectionOffset(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextLayoutDirection direction, int offset) :85221
void UITextField__iOSUIKitIUITextInputpositionFromPositionInDirectionOffset_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position, int* direction, int* offset, ::g::iOS::UIKit::UITextPosition** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.positionFromPositionInDirectionOffset(iOS.UIKit.UITextPosition,iOS.UIKit.UITextLayoutDirection,int)");
    int direction_ = *direction;
    int offset_ = *offset;
    return *__retval = __this->positionFromPositionInDirectionOffset(position, direction_, offset_), void();
}

// public iOS.UIKit.UITextPosition iOS.UIKit.IUITextInput.positionFromPositionOffset(iOS.UIKit.UITextPosition position, int offset) :85219
void UITextField__iOSUIKitIUITextInputpositionFromPositionOffset_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position, int* offset, ::g::iOS::UIKit::UITextPosition** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.positionFromPositionOffset(iOS.UIKit.UITextPosition,int)");
    int offset_ = *offset;
    return *__retval = __this->positionFromPositionOffset(position, offset_), void();
}

// public iOS.UIKit.UITextPosition iOS.UIKit.IUITextInput.positionWithinRangeAtCharacterOffset(iOS.UIKit.UITextRange range, int offset) :85251
void UITextField__iOSUIKitIUITextInputpositionWithinRangeAtCharacterOffset_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range, int* offset, ::g::iOS::UIKit::UITextPosition** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.positionWithinRangeAtCharacterOffset(iOS.UIKit.UITextRange,int)");
    int offset_ = *offset;
    return *__retval = __this->positionWithinRangeAtCharacterOffset(range, offset_), void();
}

// public iOS.UIKit.UITextPosition iOS.UIKit.IUITextInput.positionWithinRangeFarthestInDirection(iOS.UIKit.UITextRange range, iOS.UIKit.UITextLayoutDirection direction) :85227
void UITextField__iOSUIKitIUITextInputpositionWithinRangeFarthestInDirection_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range, int* direction, ::g::iOS::UIKit::UITextPosition** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.positionWithinRangeFarthestInDirection(iOS.UIKit.UITextRange,iOS.UIKit.UITextLayoutDirection)");
    int direction_ = *direction;
    return *__retval = __this->positionWithinRangeFarthestInDirection(range, direction_), void();
}

// public void iOS.UIKit.IUITextInput.removeDictationResultPlaceholderWillInsertResult(ObjC.ID placeholder, bool willInsertResult) :85265
void UITextField__iOSUIKitIUITextInputremoveDictationResultPlaceholderWillInsertResult_fn(UITextField* __this, ::id* placeholder1, bool* willInsertResult)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.removeDictationResultPlaceholderWillInsertResult(ObjC.ID,bool)");
    ::id placeholder1_ = *placeholder1;
    bool willInsertResult_ = *willInsertResult;
    __this->removeDictationResultPlaceholderWillInsertResult(placeholder1_, willInsertResult_);
}

// public void iOS.UIKit.IUITextInput.replaceRangeWithText(iOS.UIKit.UITextRange range, string text) :85211
void UITextField__iOSUIKitIUITextInputreplaceRangeWithText_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range, uString* text1)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.replaceRangeWithText(iOS.UIKit.UITextRange,string)");
    __this->replaceRangeWithText(range, text1);
}

// public iOS.Foundation.NSArray iOS.UIKit.IUITextInput.selectionRectsForRange(iOS.UIKit.UITextRange range) :85239
void UITextField__iOSUIKitIUITextInputselectionRectsForRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range, ::g::iOS::Foundation::NSArray** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.selectionRectsForRange(iOS.UIKit.UITextRange)");
    return *__retval = __this->selectionRectsForRange(range), void();
}

// public void iOS.UIKit.IUITextInput.setBaseWritingDirectionForRange(iOS.UIKit.UITextWritingDirection writingDirection, iOS.UIKit.UITextRange range) :85233
void UITextField__iOSUIKitIUITextInputsetBaseWritingDirectionForRange_fn(UITextField* __this, int* writingDirection, ::g::iOS::UIKit::UITextRange* range)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.setBaseWritingDirectionForRange(iOS.UIKit.UITextWritingDirection,iOS.UIKit.UITextRange)");
    int writingDirection_ = *writingDirection;
    __this->setBaseWritingDirectionForRange(writingDirection_, range);
}

// public void iOS.UIKit.IUITextInput.setMarkedTextSelectedRange(string markedText, iOS.Foundation._NSRange selectedRange) :85213
void UITextField__iOSUIKitIUITextInputsetMarkedTextSelectedRange_fn(UITextField* __this, uString* markedText, ::g::iOS::Foundation::_NSRange* selectedRange)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.setMarkedTextSelectedRange(string,iOS.Foundation._NSRange)");
    ::g::iOS::Foundation::_NSRange selectedRange_ = *selectedRange;
    __this->setMarkedTextSelectedRange(markedText, selectedRange_);
}

// public bool iOS.UIKit.IUITextInput.shouldChangeTextInRangeReplacementText(iOS.UIKit.UITextRange range, string text) :85247
void UITextField__iOSUIKitIUITextInputshouldChangeTextInRangeReplacementText_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range, uString* text1, bool* __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.shouldChangeTextInRangeReplacementText(iOS.UIKit.UITextRange,string)");
    return *__retval = __this->shouldChangeTextInRangeReplacementText(range, text1), void();
}

// public string iOS.UIKit.IUITextInput.textInRange(iOS.UIKit.UITextRange range) :85209
void UITextField__iOSUIKitIUITextInputtextInRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range, uString** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.textInRange(iOS.UIKit.UITextRange)");
    return *__retval = __this->textInRange(range), void();
}

// public iOS.UIKit.UITextRange iOS.UIKit.IUITextInput.textRangeFromPositionToPosition(iOS.UIKit.UITextPosition fromPosition, iOS.UIKit.UITextPosition toPosition) :85217
void UITextField__iOSUIKitIUITextInputtextRangeFromPositionToPosition_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* fromPosition, ::g::iOS::UIKit::UITextPosition* toPosition, ::g::iOS::UIKit::UITextRange** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.textRangeFromPositionToPosition(iOS.UIKit.UITextPosition,iOS.UIKit.UITextPosition)");
    return *__retval = __this->textRangeFromPositionToPosition(fromPosition, toPosition), void();
}

// public iOS.Foundation.NSDictionary iOS.UIKit.IUITextInput.textStylingAtPositionInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextStorageDirection direction) :85249
void UITextField__iOSUIKitIUITextInputtextStylingAtPositionInDirection_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position, int* direction, ::g::iOS::Foundation::NSDictionary** __retval)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.textStylingAtPositionInDirection(iOS.UIKit.UITextPosition,iOS.UIKit.UITextStorageDirection)");
    int direction_ = *direction;
    return *__retval = __this->textStylingAtPositionInDirection(position, direction_), void();
}

// public void iOS.UIKit.IUITextInput.unmarkText() :85215
void UITextField__iOSUIKitIUITextInputunmarkText_fn(UITextField* __this)
{
    uStackFrame __("iOS.UIKit.UITextField", "iOS.UIKit.IUITextInput.unmarkText()");
    __this->unmarkText();
}

// public extern bool isSecureTextEntry() :85204
void UITextField__isSecureTextEntry_fn(UITextField* __this, bool* __retval)
{
    *__retval = __this->isSecureTextEntry();
}

// public extern iOS.UIKit.UIKeyboardAppearance keyboardAppearance() :85186
void UITextField__keyboardAppearance_fn(UITextField* __this, int* __retval)
{
    *__retval = __this->keyboardAppearance();
}

// public extern iOS.UIKit.UIKeyboardType keyboardType() :85180
void UITextField__keyboardType_fn(UITextField* __this, int* __retval)
{
    *__retval = __this->keyboardType();
}

// public extern iOS.UIKit.UITextRange markedTextRange() :85120
void UITextField__markedTextRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange** __retval)
{
    *__retval = __this->markedTextRange();
}

// public extern iOS.Foundation.NSDictionary markedTextStyle() :85123
void UITextField__markedTextStyle_fn(UITextField* __this, ::g::iOS::Foundation::NSDictionary** __retval)
{
    *__retval = __this->markedTextStyle();
}

// public extern int offsetFromPositionToPosition(iOS.UIKit.UITextPosition from, iOS.UIKit.UITextPosition toPosition) :85051
void UITextField__offsetFromPositionToPosition_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* from_, ::g::iOS::UIKit::UITextPosition* toPosition_, int* __retval)
{
    *__retval = __this->offsetFromPositionToPosition(from_, toPosition_);
}

// public extern string placeholder() :84916
void UITextField__placeholder_fn(UITextField* __this, uString** __retval)
{
    *__retval = __this->placeholder();
}

// public string get_Placeholder() :84650
void UITextField__get_Placeholder_fn(UITextField* __this, uString** __retval)
{
    *__retval = __this->Placeholder();
}

// public void set_Placeholder(string value) :84651
void UITextField__set_Placeholder_fn(UITextField* __this, uString* value)
{
    __this->Placeholder(value);
}

// public extern iOS.UIKit.UITextPosition positionFromPositionInDirectionOffset(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextLayoutDirection direction, int offset) :85045
void UITextField__positionFromPositionInDirectionOffset_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position_, int* direction_, int* offset_, ::g::iOS::UIKit::UITextPosition** __retval)
{
    *__retval = __this->positionFromPositionInDirectionOffset(position_, *direction_, *offset_);
}

// public extern iOS.UIKit.UITextPosition positionFromPositionOffset(iOS.UIKit.UITextPosition position, int offset) :85042
void UITextField__positionFromPositionOffset_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position_, int* offset_, ::g::iOS::UIKit::UITextPosition** __retval)
{
    *__retval = __this->positionFromPositionOffset(position_, *offset_);
}

// public extern iOS.UIKit.UITextPosition positionWithinRangeAtCharacterOffset(iOS.UIKit.UITextRange range, int offset) :85090
void UITextField__positionWithinRangeAtCharacterOffset_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range_, int* offset_, ::g::iOS::UIKit::UITextPosition** __retval)
{
    *__retval = __this->positionWithinRangeAtCharacterOffset(range_, *offset_);
}

// public extern iOS.UIKit.UITextPosition positionWithinRangeFarthestInDirection(iOS.UIKit.UITextRange range, iOS.UIKit.UITextLayoutDirection direction) :85054
void UITextField__positionWithinRangeFarthestInDirection_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range_, int* direction_, ::g::iOS::UIKit::UITextPosition** __retval)
{
    *__retval = __this->positionWithinRangeFarthestInDirection(range_, *direction_);
}

// public extern void removeDictationResultPlaceholderWillInsertResult(ObjC.ID placeholder, bool willInsertResult) :85111
void UITextField__removeDictationResultPlaceholderWillInsertResult_fn(UITextField* __this, ::id* placeholder_, bool* willInsertResult_)
{
    __this->removeDictationResultPlaceholderWillInsertResult(*placeholder_, *willInsertResult_);
}

// public extern void replaceRangeWithText(iOS.UIKit.UITextRange range, string text) :85030
void UITextField__replaceRangeWithText_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range_, uString* text_)
{
    __this->replaceRangeWithText(range_, text_);
}

// public extern iOS.UIKit.UIReturnKeyType returnKeyType() :85192
void UITextField__returnKeyType_fn(UITextField* __this, int* __retval)
{
    *__retval = __this->returnKeyType();
}

// public extern iOS.UIKit.UITextRange selectedTextRange() :85114
void UITextField__selectedTextRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange** __retval)
{
    *__retval = __this->selectedTextRange();
}

// public extern iOS.UIKit.UITextStorageDirection selectionAffinity() :85147
void UITextField__selectionAffinity_fn(UITextField* __this, int* __retval)
{
    *__retval = __this->selectionAffinity();
}

// public extern iOS.Foundation.NSArray selectionRectsForRange(iOS.UIKit.UITextRange range) :85072
void UITextField__selectionRectsForRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range_, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->selectionRectsForRange(range_);
}

// public extern void setAutocapitalizationType(iOS.UIKit.UITextAutocapitalizationType autocapitalizationType) :85165
void UITextField__setAutocapitalizationType_fn(UITextField* __this, int* autocapitalizationType_)
{
    __this->setAutocapitalizationType(*autocapitalizationType_);
}

// public extern void setAutocorrectionType(iOS.UIKit.UITextAutocorrectionType autocorrectionType) :85171
void UITextField__setAutocorrectionType_fn(UITextField* __this, int* autocorrectionType_)
{
    __this->setAutocorrectionType(*autocorrectionType_);
}

// public extern void setBaseWritingDirectionForRange(iOS.UIKit.UITextWritingDirection writingDirection, iOS.UIKit.UITextRange range) :85063
void UITextField__setBaseWritingDirectionForRange_fn(UITextField* __this, int* writingDirection_, ::g::iOS::UIKit::UITextRange* range_)
{
    __this->setBaseWritingDirectionForRange(*writingDirection_, range_);
}

// public extern void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically) :85201
void UITextField__setEnablesReturnKeyAutomatically_fn(UITextField* __this, bool* enablesReturnKeyAutomatically_)
{
    __this->setEnablesReturnKeyAutomatically(*enablesReturnKeyAutomatically_);
}

// public extern void setFont(iOS.UIKit.UIFont font) :84895
void UITextField__setFont_fn(UITextField* __this, ::g::iOS::UIKit::UIFont* font_)
{
    __this->setFont(font_);
}

// public extern void setInputDelegate(iOS.UIKit.IUITextInputDelegate inputDelegate) :85138
void UITextField__setInputDelegate_fn(UITextField* __this, uObject* inputDelegate_)
{
    __this->setInputDelegate(inputDelegate_);
}

// public extern void setKeyboardAppearance(iOS.UIKit.UIKeyboardAppearance keyboardAppearance) :85189
void UITextField__setKeyboardAppearance_fn(UITextField* __this, int* keyboardAppearance_)
{
    __this->setKeyboardAppearance(*keyboardAppearance_);
}

// public extern void setKeyboardType(iOS.UIKit.UIKeyboardType keyboardType) :85183
void UITextField__setKeyboardType_fn(UITextField* __this, int* keyboardType_)
{
    __this->setKeyboardType(*keyboardType_);
}

// public extern void setMarkedTextSelectedRange(string markedText, iOS.Foundation._NSRange selectedRange) :85033
void UITextField__setMarkedTextSelectedRange_fn(UITextField* __this, uString* markedText_, ::g::iOS::Foundation::_NSRange* selectedRange_)
{
    __this->setMarkedTextSelectedRange(markedText_, *selectedRange_);
}

// public extern void setMarkedTextStyle(iOS.Foundation.NSDictionary markedTextStyle) :85126
void UITextField__setMarkedTextStyle_fn(UITextField* __this, ::g::iOS::Foundation::NSDictionary* markedTextStyle_)
{
    __this->setMarkedTextStyle(markedTextStyle_);
}

// public extern void setPlaceholder(string placeholder) :84919
void UITextField__setPlaceholder_fn(UITextField* __this, uString* placeholder_)
{
    __this->setPlaceholder(placeholder_);
}

// public extern void setReturnKeyType(iOS.UIKit.UIReturnKeyType returnKeyType) :85195
void UITextField__setReturnKeyType_fn(UITextField* __this, int* returnKeyType_)
{
    __this->setReturnKeyType(*returnKeyType_);
}

// public extern void setSecureTextEntry(bool secureTextEntry) :85207
void UITextField__setSecureTextEntry_fn(UITextField* __this, bool* secureTextEntry_)
{
    __this->setSecureTextEntry(*secureTextEntry_);
}

// public extern void setSelectedTextRange(iOS.UIKit.UITextRange selectedTextRange) :85117
void UITextField__setSelectedTextRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* selectedTextRange_)
{
    __this->setSelectedTextRange(selectedTextRange_);
}

// public extern void setSelectionAffinity(iOS.UIKit.UITextStorageDirection selectionAffinity) :85150
void UITextField__setSelectionAffinity_fn(UITextField* __this, int* selectionAffinity_)
{
    __this->setSelectionAffinity(*selectionAffinity_);
}

// public extern void setSpellCheckingType(iOS.UIKit.UITextSpellCheckingType spellCheckingType) :85177
void UITextField__setSpellCheckingType_fn(UITextField* __this, int* spellCheckingType_)
{
    __this->setSpellCheckingType(*spellCheckingType_);
}

// public extern void setText(string text) :84877
void UITextField__setText_fn(UITextField* __this, uString* text_)
{
    __this->setText(text_);
}

// public extern void setTextAlignment(iOS.UIKit.NSTextAlignment textAlignment) :84901
void UITextField__setTextAlignment_fn(UITextField* __this, int* textAlignment_)
{
    __this->setTextAlignment(*textAlignment_);
}

// public extern void setTextColor(iOS.UIKit.UIColor textColor) :84889
void UITextField__setTextColor_fn(UITextField* __this, ::g::iOS::UIKit::UIColor* textColor_)
{
    __this->setTextColor(textColor_);
}

// public extern bool shouldChangeTextInRangeReplacementText(iOS.UIKit.UITextRange range, string text) :85084
void UITextField__shouldChangeTextInRangeReplacementText_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range_, uString* text_, bool* __retval)
{
    *__retval = __this->shouldChangeTextInRangeReplacementText(range_, text_);
}

// public extern iOS.UIKit.UITextSpellCheckingType spellCheckingType() :85174
void UITextField__spellCheckingType_fn(UITextField* __this, int* __retval)
{
    *__retval = __this->spellCheckingType();
}

// public extern string text() :84874
void UITextField__text_fn(UITextField* __this, uString** __retval)
{
    *__retval = __this->text();
}

// public string get_Text() :84608
void UITextField__get_Text_fn(UITextField* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :84609
void UITextField__set_Text_fn(UITextField* __this, uString* value)
{
    __this->Text(value);
}

// public extern iOS.UIKit.NSTextAlignment textAlignment() :84898
void UITextField__textAlignment_fn(UITextField* __this, int* __retval)
{
    *__retval = __this->textAlignment();
}

// public iOS.UIKit.NSTextAlignment get_TextAlignment() :84632
void UITextField__get_TextAlignment_fn(UITextField* __this, int* __retval)
{
    *__retval = __this->TextAlignment();
}

// public void set_TextAlignment(iOS.UIKit.NSTextAlignment value) :84633
void UITextField__set_TextAlignment_fn(UITextField* __this, int* value)
{
    __this->TextAlignment(*value);
}

// public extern iOS.UIKit.UIColor textColor() :84886
void UITextField__textColor_fn(UITextField* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = __this->textColor();
}

// public iOS.UIKit.UIColor get_TextColor() :84620
void UITextField__get_TextColor_fn(UITextField* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(iOS.UIKit.UIColor value) :84621
void UITextField__set_TextColor_fn(UITextField* __this, ::g::iOS::UIKit::UIColor* value)
{
    __this->TextColor(value);
}

// public extern iOS.UIKit.UIView textInputView() :85144
void UITextField__textInputView_fn(UITextField* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->textInputView();
}

// public extern string textInRange(iOS.UIKit.UITextRange range) :85027
void UITextField__textInRange_fn(UITextField* __this, ::g::iOS::UIKit::UITextRange* range_, uString** __retval)
{
    *__retval = __this->textInRange(range_);
}

// public extern iOS.UIKit.UITextRange textRangeFromPositionToPosition(iOS.UIKit.UITextPosition fromPosition, iOS.UIKit.UITextPosition toPosition) :85039
void UITextField__textRangeFromPositionToPosition_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* fromPosition_, ::g::iOS::UIKit::UITextPosition* toPosition_, ::g::iOS::UIKit::UITextRange** __retval)
{
    *__retval = __this->textRangeFromPositionToPosition(fromPosition_, toPosition_);
}

// public extern iOS.Foundation.NSDictionary textStylingAtPositionInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextStorageDirection direction) :85087
void UITextField__textStylingAtPositionInDirection_fn(UITextField* __this, ::g::iOS::UIKit::UITextPosition* position_, int* direction_, ::g::iOS::Foundation::NSDictionary** __retval)
{
    *__retval = __this->textStylingAtPositionInDirection(position_, *direction_);
}

// public extern iOS.UIKit.IUITextInputTokenizer tokenizer() :85141
void UITextField__tokenizer_fn(UITextField* __this, uObject** __retval)
{
    *__retval = __this->tokenizer();
}

// public extern void unmarkText() :85036
void UITextField__unmarkText_fn(UITextField* __this)
{
    __this->unmarkText();
}

// public extern iOS.UIKit.UITextAutocapitalizationType autocapitalizationType() [instance] :85162
int UITextField::autocapitalizationType()
{
    uStackFrame __("iOS.UIKit.UITextField", "autocapitalizationType()");
    ::UITextAutocapitalizationType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextAutocapitalizationType, @selector(autocapitalizationType));
    return int(__return);
}

// public extern iOS.UIKit.UITextAutocorrectionType autocorrectionType() [instance] :85168
int UITextField::autocorrectionType()
{
    uStackFrame __("iOS.UIKit.UITextField", "autocorrectionType()");
    ::UITextAutocorrectionType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextAutocorrectionType, @selector(autocorrectionType));
    return int(__return);
}

// public extern iOS.UIKit.UITextWritingDirection baseWritingDirectionForPositionInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextStorageDirection direction) [instance] :85060
int UITextField::baseWritingDirectionForPositionInDirection(::g::iOS::UIKit::UITextPosition* position_, int direction_)
{
    uStackFrame __("iOS.UIKit.UITextField", "baseWritingDirectionForPositionInDirection(iOS.UIKit.UITextPosition,iOS.UIKit.UITextStorageDirection)");
    int direction__ = direction_;
    ::UITextWritingDirection __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextWritingDirection, @selector(baseWritingDirectionForPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextStorageDirection(direction__));
    return int(__return);
}

// public extern iOS.UIKit.UITextPosition beginningOfDocument() [instance] :85129
::g::iOS::UIKit::UITextPosition* UITextField::beginningOfDocument()
{
    uStackFrame __("iOS.UIKit.UITextField", "beginningOfDocument()");
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextPosition*, @selector(beginningOfDocument));
    return (::g::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextPosition_typeof());
}

// public extern iOS.CoreGraphics.CGRect caretRectForPosition(iOS.UIKit.UITextPosition position) [instance] :85069
::g::iOS::CoreGraphics::CGRect UITextField::caretRectForPosition(::g::iOS::UIKit::UITextPosition* position_)
{
    uStackFrame __("iOS.UIKit.UITextField", "caretRectForPosition(iOS.UIKit.UITextPosition)");
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(caretRectForPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern int characterOffsetOfPositionWithinRange(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextRange range) [instance] :85093
int UITextField::characterOffsetOfPositionWithinRange(::g::iOS::UIKit::UITextPosition* position_, ::g::iOS::UIKit::UITextRange* range_)
{
    uStackFrame __("iOS.UIKit.UITextField", "characterOffsetOfPositionWithinRange(iOS.UIKit.UITextPosition,iOS.UIKit.UITextRange)");
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, long, @selector(characterOffsetOfPosition:withinRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (int)__return;
}

// public extern iOS.UIKit.UITextRange characterRangeAtPoint(iOS.CoreGraphics.CGPoint point) [instance] :85081
::g::iOS::UIKit::UITextRange* UITextField::characterRangeAtPoint(::g::iOS::CoreGraphics::CGPoint point_)
{
    uStackFrame __("iOS.UIKit.UITextField", "characterRangeAtPoint(iOS.CoreGraphics.CGPoint)");
    ::g::iOS::CoreGraphics::CGPoint point__ = point_;
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextRange*, @selector(characterRangeAtPoint:),
        uObjC::Struct::FromUno_CGPoint(point__, ::CGPoint()));
    return (::g::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextRange_typeof());
}

// public extern iOS.UIKit.UITextRange characterRangeByExtendingPositionInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextLayoutDirection direction) [instance] :85057
::g::iOS::UIKit::UITextRange* UITextField::characterRangeByExtendingPositionInDirection(::g::iOS::UIKit::UITextPosition* position_, int direction_)
{
    uStackFrame __("iOS.UIKit.UITextField", "characterRangeByExtendingPositionInDirection(iOS.UIKit.UITextPosition,iOS.UIKit.UITextLayoutDirection)");
    int direction__ = direction_;
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextRange*, @selector(characterRangeByExtendingPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextLayoutDirection(direction__));
    return (::g::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextRange_typeof());
}

// public extern iOS.UIKit.UITextPosition closestPositionToPoint(iOS.CoreGraphics.CGPoint point) [instance] :85075
::g::iOS::UIKit::UITextPosition* UITextField::closestPositionToPoint(::g::iOS::CoreGraphics::CGPoint point_)
{
    uStackFrame __("iOS.UIKit.UITextField", "closestPositionToPoint(iOS.CoreGraphics.CGPoint)");
    ::g::iOS::CoreGraphics::CGPoint point__ = point_;
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextPosition*, @selector(closestPositionToPoint:),
        uObjC::Struct::FromUno_CGPoint(point__, ::CGPoint()));
    return (::g::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextPosition_typeof());
}

// public extern iOS.UIKit.UITextPosition closestPositionToPointWithinRange(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UITextRange range) [instance] :85078
::g::iOS::UIKit::UITextPosition* UITextField::closestPositionToPointWithinRange(::g::iOS::CoreGraphics::CGPoint point_, ::g::iOS::UIKit::UITextRange* range_)
{
    uStackFrame __("iOS.UIKit.UITextField", "closestPositionToPointWithinRange(iOS.CoreGraphics.CGPoint,iOS.UIKit.UITextRange)");
    ::g::iOS::CoreGraphics::CGPoint point__ = point_;
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextPosition*, @selector(closestPositionToPoint:withinRange:),
        uObjC::Struct::FromUno_CGPoint(point__, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (::g::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextPosition_typeof());
}

// public extern iOS.Foundation.NSComparisonResult comparePositionToPosition(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextPosition other) [instance] :85048
int UITextField::comparePositionToPosition(::g::iOS::UIKit::UITextPosition* position_, ::g::iOS::UIKit::UITextPosition* other_)
{
    uStackFrame __("iOS.UIKit.UITextField", "comparePositionToPosition(iOS.UIKit.UITextPosition,iOS.UIKit.UITextPosition)");
    ::NSComparisonResult __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSComparisonResult, @selector(comparePosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)other_));
    return int(__return);
}

// public extern void deleteBackward() [instance] :85159
void UITextField::deleteBackward()
{
    uStackFrame __("iOS.UIKit.UITextField", "deleteBackward()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(deleteBackward));
}

// public extern void dictationRecognitionFailed() [instance] :85102
void UITextField::dictationRecognitionFailed()
{
    uStackFrame __("iOS.UIKit.UITextField", "dictationRecognitionFailed()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(dictationRecognitionFailed));
}

// public extern void dictationRecordingDidEnd() [instance] :85099
void UITextField::dictationRecordingDidEnd()
{
    uStackFrame __("iOS.UIKit.UITextField", "dictationRecordingDidEnd()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(dictationRecordingDidEnd));
}

// public extern bool enablesReturnKeyAutomatically() [instance] :85198
bool UITextField::enablesReturnKeyAutomatically()
{
    uStackFrame __("iOS.UIKit.UITextField", "enablesReturnKeyAutomatically()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(enablesReturnKeyAutomatically));
    return (bool)__return;
}

// public extern iOS.UIKit.UITextPosition endOfDocument() [instance] :85132
::g::iOS::UIKit::UITextPosition* UITextField::endOfDocument()
{
    uStackFrame __("iOS.UIKit.UITextField", "endOfDocument()");
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextPosition*, @selector(endOfDocument));
    return (::g::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextPosition_typeof());
}

// public extern iOS.CoreGraphics.CGRect firstRectForRange(iOS.UIKit.UITextRange range) [instance] :85066
::g::iOS::CoreGraphics::CGRect UITextField::firstRectForRange(::g::iOS::UIKit::UITextRange* range_)
{
    uStackFrame __("iOS.UIKit.UITextField", "firstRectForRange(iOS.UIKit.UITextRange)");
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(firstRectForRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern iOS.UIKit.UIFont font() [instance] :84892
::g::iOS::UIKit::UIFont* UITextField::font()
{
    uStackFrame __("iOS.UIKit.UITextField", "font()");
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIFont*, @selector(font));
    return (::g::iOS::UIKit::UIFont*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIFont_typeof());
}

// public iOS.UIKit.UIFont get_Font() [instance] :84626
::g::iOS::UIKit::UIFont* UITextField::Font()
{
    uStackFrame __("iOS.UIKit.UITextField", "get_Font()");
    return font();
}

// public void set_Font(iOS.UIKit.UIFont value) [instance] :84627
void UITextField::Font(::g::iOS::UIKit::UIFont* value)
{
    uStackFrame __("iOS.UIKit.UITextField", "set_Font(iOS.UIKit.UIFont)");
    setFont(value);
}

// public extern iOS.CoreGraphics.CGRect frameForDictationResultPlaceholder(ObjC.ID placeholder) [instance] :85108
::g::iOS::CoreGraphics::CGRect UITextField::frameForDictationResultPlaceholder(::id placeholder_)
{
    uStackFrame __("iOS.UIKit.UITextField", "frameForDictationResultPlaceholder(ObjC.ID)");
    ::id placeholder__ = placeholder_;
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(frameForDictationResultPlaceholder:),
        (::id)placeholder__);
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern bool hasText() [instance] :85153
bool UITextField::hasText()
{
    uStackFrame __("iOS.UIKit.UITextField", "hasText()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(hasText));
    return (bool)__return;
}

// public extern iOS.UIKit.IUITextInputDelegate inputDelegate() [instance] :85135
uObject* UITextField::inputDelegate()
{
    uStackFrame __("iOS.UIKit.UITextField", "inputDelegate()");
    id<UITextInputDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UITextInputDelegate>, @selector(inputDelegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUITextInputDelegate_typeof());
}

// public extern void insertDictationResult(iOS.Foundation.NSArray dictationResult) [instance] :85096
void UITextField::insertDictationResult(::g::iOS::Foundation::NSArray* dictationResult_)
{
    uStackFrame __("iOS.UIKit.UITextField", "insertDictationResult(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(insertDictationResult:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)dictationResult_));
}

// public extern ObjC.ID insertDictationResultPlaceholder() [instance] :85105
::id UITextField::insertDictationResultPlaceholder()
{
    uStackFrame __("iOS.UIKit.UITextField", "insertDictationResultPlaceholder()");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(insertDictationResultPlaceholder));
    return (::id)__return;
}

// public extern void insertText(string text) [instance] :85156
void UITextField::insertText(uString* text_)
{
    uStackFrame __("iOS.UIKit.UITextField", "insertText(string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(insertText:),
        uObjC::NativeString(text_));
}

// public extern bool isSecureTextEntry() [instance] :85204
bool UITextField::isSecureTextEntry()
{
    uStackFrame __("iOS.UIKit.UITextField", "isSecureTextEntry()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isSecureTextEntry));
    return (bool)__return;
}

// public extern iOS.UIKit.UIKeyboardAppearance keyboardAppearance() [instance] :85186
int UITextField::keyboardAppearance()
{
    uStackFrame __("iOS.UIKit.UITextField", "keyboardAppearance()");
    ::UIKeyboardAppearance __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIKeyboardAppearance, @selector(keyboardAppearance));
    return int(__return);
}

// public extern iOS.UIKit.UIKeyboardType keyboardType() [instance] :85180
int UITextField::keyboardType()
{
    uStackFrame __("iOS.UIKit.UITextField", "keyboardType()");
    ::UIKeyboardType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIKeyboardType, @selector(keyboardType));
    return int(__return);
}

// public extern iOS.UIKit.UITextRange markedTextRange() [instance] :85120
::g::iOS::UIKit::UITextRange* UITextField::markedTextRange()
{
    uStackFrame __("iOS.UIKit.UITextField", "markedTextRange()");
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextRange*, @selector(markedTextRange));
    return (::g::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextRange_typeof());
}

// public extern iOS.Foundation.NSDictionary markedTextStyle() [instance] :85123
::g::iOS::Foundation::NSDictionary* UITextField::markedTextStyle()
{
    uStackFrame __("iOS.UIKit.UITextField", "markedTextStyle()");
    ::NSDictionary* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSDictionary*, @selector(markedTextStyle));
    return (::g::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSDictionary_typeof());
}

// public extern int offsetFromPositionToPosition(iOS.UIKit.UITextPosition from, iOS.UIKit.UITextPosition toPosition) [instance] :85051
int UITextField::offsetFromPositionToPosition(::g::iOS::UIKit::UITextPosition* from_, ::g::iOS::UIKit::UITextPosition* toPosition_)
{
    uStackFrame __("iOS.UIKit.UITextField", "offsetFromPositionToPosition(iOS.UIKit.UITextPosition,iOS.UIKit.UITextPosition)");
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, long, @selector(offsetFromPosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)from_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toPosition_));
    return (int)__return;
}

// public extern string placeholder() [instance] :84916
uString* UITextField::placeholder()
{
    uStackFrame __("iOS.UIKit.UITextField", "placeholder()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(placeholder));
    return uObjC::UnoString(__return);
}

// public string get_Placeholder() [instance] :84650
uString* UITextField::Placeholder()
{
    uStackFrame __("iOS.UIKit.UITextField", "get_Placeholder()");
    return placeholder();
}

// public void set_Placeholder(string value) [instance] :84651
void UITextField::Placeholder(uString* value)
{
    uStackFrame __("iOS.UIKit.UITextField", "set_Placeholder(string)");
    setPlaceholder(value);
}

// public extern iOS.UIKit.UITextPosition positionFromPositionInDirectionOffset(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextLayoutDirection direction, int offset) [instance] :85045
::g::iOS::UIKit::UITextPosition* UITextField::positionFromPositionInDirectionOffset(::g::iOS::UIKit::UITextPosition* position_, int direction_, int offset_)
{
    uStackFrame __("iOS.UIKit.UITextField", "positionFromPositionInDirectionOffset(iOS.UIKit.UITextPosition,iOS.UIKit.UITextLayoutDirection,int)");
    int direction__ = direction_;
    int offset__ = offset_;
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextPosition*, @selector(positionFromPosition:inDirection:offset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextLayoutDirection(direction__),
        (long)offset__);
    return (::g::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextPosition_typeof());
}

// public extern iOS.UIKit.UITextPosition positionFromPositionOffset(iOS.UIKit.UITextPosition position, int offset) [instance] :85042
::g::iOS::UIKit::UITextPosition* UITextField::positionFromPositionOffset(::g::iOS::UIKit::UITextPosition* position_, int offset_)
{
    uStackFrame __("iOS.UIKit.UITextField", "positionFromPositionOffset(iOS.UIKit.UITextPosition,int)");
    int offset__ = offset_;
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextPosition*, @selector(positionFromPosition:offset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        (long)offset__);
    return (::g::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextPosition_typeof());
}

// public extern iOS.UIKit.UITextPosition positionWithinRangeAtCharacterOffset(iOS.UIKit.UITextRange range, int offset) [instance] :85090
::g::iOS::UIKit::UITextPosition* UITextField::positionWithinRangeAtCharacterOffset(::g::iOS::UIKit::UITextRange* range_, int offset_)
{
    uStackFrame __("iOS.UIKit.UITextField", "positionWithinRangeAtCharacterOffset(iOS.UIKit.UITextRange,int)");
    int offset__ = offset_;
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextPosition*, @selector(positionWithinRange:atCharacterOffset:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        (long)offset__);
    return (::g::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextPosition_typeof());
}

// public extern iOS.UIKit.UITextPosition positionWithinRangeFarthestInDirection(iOS.UIKit.UITextRange range, iOS.UIKit.UITextLayoutDirection direction) [instance] :85054
::g::iOS::UIKit::UITextPosition* UITextField::positionWithinRangeFarthestInDirection(::g::iOS::UIKit::UITextRange* range_, int direction_)
{
    uStackFrame __("iOS.UIKit.UITextField", "positionWithinRangeFarthestInDirection(iOS.UIKit.UITextRange,iOS.UIKit.UITextLayoutDirection)");
    int direction__ = direction_;
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextPosition*, @selector(positionWithinRange:farthestInDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        ::UITextLayoutDirection(direction__));
    return (::g::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextPosition_typeof());
}

// public extern void removeDictationResultPlaceholderWillInsertResult(ObjC.ID placeholder, bool willInsertResult) [instance] :85111
void UITextField::removeDictationResultPlaceholderWillInsertResult(::id placeholder_, bool willInsertResult_)
{
    uStackFrame __("iOS.UIKit.UITextField", "removeDictationResultPlaceholderWillInsertResult(ObjC.ID,bool)");
    ::id placeholder__ = placeholder_;
    bool willInsertResult__ = willInsertResult_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeDictationResultPlaceholder:willInsertResult:),
        (::id)placeholder__,
        (BOOL)willInsertResult__);
}

// public extern void replaceRangeWithText(iOS.UIKit.UITextRange range, string text) [instance] :85030
void UITextField::replaceRangeWithText(::g::iOS::UIKit::UITextRange* range_, uString* text_)
{
    uStackFrame __("iOS.UIKit.UITextField", "replaceRangeWithText(iOS.UIKit.UITextRange,string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(replaceRange:withText:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        uObjC::NativeString(text_));
}

// public extern iOS.UIKit.UIReturnKeyType returnKeyType() [instance] :85192
int UITextField::returnKeyType()
{
    uStackFrame __("iOS.UIKit.UITextField", "returnKeyType()");
    ::UIReturnKeyType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIReturnKeyType, @selector(returnKeyType));
    return int(__return);
}

// public extern iOS.UIKit.UITextRange selectedTextRange() [instance] :85114
::g::iOS::UIKit::UITextRange* UITextField::selectedTextRange()
{
    uStackFrame __("iOS.UIKit.UITextField", "selectedTextRange()");
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextRange*, @selector(selectedTextRange));
    return (::g::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextRange_typeof());
}

// public extern iOS.UIKit.UITextStorageDirection selectionAffinity() [instance] :85147
int UITextField::selectionAffinity()
{
    uStackFrame __("iOS.UIKit.UITextField", "selectionAffinity()");
    ::UITextStorageDirection __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextStorageDirection, @selector(selectionAffinity));
    return int(__return);
}

// public extern iOS.Foundation.NSArray selectionRectsForRange(iOS.UIKit.UITextRange range) [instance] :85072
::g::iOS::Foundation::NSArray* UITextField::selectionRectsForRange(::g::iOS::UIKit::UITextRange* range_)
{
    uStackFrame __("iOS.UIKit.UITextField", "selectionRectsForRange(iOS.UIKit.UITextRange)");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(selectionRectsForRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public extern void setAutocapitalizationType(iOS.UIKit.UITextAutocapitalizationType autocapitalizationType) [instance] :85165
void UITextField::setAutocapitalizationType(int autocapitalizationType_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setAutocapitalizationType(iOS.UIKit.UITextAutocapitalizationType)");
    int autocapitalizationType__ = autocapitalizationType_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAutocapitalizationType:),
        ::UITextAutocapitalizationType(autocapitalizationType__));
}

// public extern void setAutocorrectionType(iOS.UIKit.UITextAutocorrectionType autocorrectionType) [instance] :85171
void UITextField::setAutocorrectionType(int autocorrectionType_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setAutocorrectionType(iOS.UIKit.UITextAutocorrectionType)");
    int autocorrectionType__ = autocorrectionType_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAutocorrectionType:),
        ::UITextAutocorrectionType(autocorrectionType__));
}

// public extern void setBaseWritingDirectionForRange(iOS.UIKit.UITextWritingDirection writingDirection, iOS.UIKit.UITextRange range) [instance] :85063
void UITextField::setBaseWritingDirectionForRange(int writingDirection_, ::g::iOS::UIKit::UITextRange* range_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setBaseWritingDirectionForRange(iOS.UIKit.UITextWritingDirection,iOS.UIKit.UITextRange)");
    int writingDirection__ = writingDirection_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setBaseWritingDirection:forRange:),
        ::UITextWritingDirection(writingDirection__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
}

// public extern void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically) [instance] :85201
void UITextField::setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setEnablesReturnKeyAutomatically(bool)");
    bool enablesReturnKeyAutomatically__ = enablesReturnKeyAutomatically_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setEnablesReturnKeyAutomatically:),
        (BOOL)enablesReturnKeyAutomatically__);
}

// public extern void setFont(iOS.UIKit.UIFont font) [instance] :84895
void UITextField::setFont(::g::iOS::UIKit::UIFont* font_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setFont(iOS.UIKit.UIFont)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setFont:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)font_));
}

// public extern void setInputDelegate(iOS.UIKit.IUITextInputDelegate inputDelegate) [instance] :85138
void UITextField::setInputDelegate(uObject* inputDelegate_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setInputDelegate(iOS.UIKit.IUITextInputDelegate)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setInputDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)inputDelegate_, ::g::iOS::UIKit::IUITextInputDelegate_typeof()));
}

// public extern void setKeyboardAppearance(iOS.UIKit.UIKeyboardAppearance keyboardAppearance) [instance] :85189
void UITextField::setKeyboardAppearance(int keyboardAppearance_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setKeyboardAppearance(iOS.UIKit.UIKeyboardAppearance)");
    int keyboardAppearance__ = keyboardAppearance_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setKeyboardAppearance:),
        ::UIKeyboardAppearance(keyboardAppearance__));
}

// public extern void setKeyboardType(iOS.UIKit.UIKeyboardType keyboardType) [instance] :85183
void UITextField::setKeyboardType(int keyboardType_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setKeyboardType(iOS.UIKit.UIKeyboardType)");
    int keyboardType__ = keyboardType_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setKeyboardType:),
        ::UIKeyboardType(keyboardType__));
}

// public extern void setMarkedTextSelectedRange(string markedText, iOS.Foundation._NSRange selectedRange) [instance] :85033
void UITextField::setMarkedTextSelectedRange(uString* markedText_, ::g::iOS::Foundation::_NSRange selectedRange_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setMarkedTextSelectedRange(string,iOS.Foundation._NSRange)");
    ::g::iOS::Foundation::_NSRange selectedRange__ = selectedRange_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setMarkedText:selectedRange:),
        uObjC::NativeString(markedText_),
        uObjC::Struct::FromUno__NSRange(selectedRange__, ::_NSRange()));
}

// public extern void setMarkedTextStyle(iOS.Foundation.NSDictionary markedTextStyle) [instance] :85126
void UITextField::setMarkedTextStyle(::g::iOS::Foundation::NSDictionary* markedTextStyle_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setMarkedTextStyle(iOS.Foundation.NSDictionary)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setMarkedTextStyle:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)markedTextStyle_));
}

// public extern void setPlaceholder(string placeholder) [instance] :84919
void UITextField::setPlaceholder(uString* placeholder_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setPlaceholder(string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setPlaceholder:),
        uObjC::NativeString(placeholder_));
}

// public extern void setReturnKeyType(iOS.UIKit.UIReturnKeyType returnKeyType) [instance] :85195
void UITextField::setReturnKeyType(int returnKeyType_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setReturnKeyType(iOS.UIKit.UIReturnKeyType)");
    int returnKeyType__ = returnKeyType_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setReturnKeyType:),
        ::UIReturnKeyType(returnKeyType__));
}

// public extern void setSecureTextEntry(bool secureTextEntry) [instance] :85207
void UITextField::setSecureTextEntry(bool secureTextEntry_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setSecureTextEntry(bool)");
    bool secureTextEntry__ = secureTextEntry_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setSecureTextEntry:),
        (BOOL)secureTextEntry__);
}

// public extern void setSelectedTextRange(iOS.UIKit.UITextRange selectedTextRange) [instance] :85117
void UITextField::setSelectedTextRange(::g::iOS::UIKit::UITextRange* selectedTextRange_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setSelectedTextRange(iOS.UIKit.UITextRange)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setSelectedTextRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)selectedTextRange_));
}

// public extern void setSelectionAffinity(iOS.UIKit.UITextStorageDirection selectionAffinity) [instance] :85150
void UITextField::setSelectionAffinity(int selectionAffinity_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setSelectionAffinity(iOS.UIKit.UITextStorageDirection)");
    int selectionAffinity__ = selectionAffinity_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setSelectionAffinity:),
        ::UITextStorageDirection(selectionAffinity__));
}

// public extern void setSpellCheckingType(iOS.UIKit.UITextSpellCheckingType spellCheckingType) [instance] :85177
void UITextField::setSpellCheckingType(int spellCheckingType_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setSpellCheckingType(iOS.UIKit.UITextSpellCheckingType)");
    int spellCheckingType__ = spellCheckingType_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setSpellCheckingType:),
        ::UITextSpellCheckingType(spellCheckingType__));
}

// public extern void setText(string text) [instance] :84877
void UITextField::setText(uString* text_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setText(string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setText:),
        uObjC::NativeString(text_));
}

// public extern void setTextAlignment(iOS.UIKit.NSTextAlignment textAlignment) [instance] :84901
void UITextField::setTextAlignment(int textAlignment_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setTextAlignment(iOS.UIKit.NSTextAlignment)");
    int textAlignment__ = textAlignment_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTextAlignment:),
        ::NSTextAlignment(textAlignment__));
}

// public extern void setTextColor(iOS.UIKit.UIColor textColor) [instance] :84889
void UITextField::setTextColor(::g::iOS::UIKit::UIColor* textColor_)
{
    uStackFrame __("iOS.UIKit.UITextField", "setTextColor(iOS.UIKit.UIColor)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTextColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textColor_));
}

// public extern bool shouldChangeTextInRangeReplacementText(iOS.UIKit.UITextRange range, string text) [instance] :85084
bool UITextField::shouldChangeTextInRangeReplacementText(::g::iOS::UIKit::UITextRange* range_, uString* text_)
{
    uStackFrame __("iOS.UIKit.UITextField", "shouldChangeTextInRangeReplacementText(iOS.UIKit.UITextRange,string)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(shouldChangeTextInRange:replacementText:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_),
        uObjC::NativeString(text_));
    return (bool)__return;
}

// public extern iOS.UIKit.UITextSpellCheckingType spellCheckingType() [instance] :85174
int UITextField::spellCheckingType()
{
    uStackFrame __("iOS.UIKit.UITextField", "spellCheckingType()");
    ::UITextSpellCheckingType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextSpellCheckingType, @selector(spellCheckingType));
    return int(__return);
}

// public extern string text() [instance] :84874
uString* UITextField::text()
{
    uStackFrame __("iOS.UIKit.UITextField", "text()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(text));
    return uObjC::UnoString(__return);
}

// public string get_Text() [instance] :84608
uString* UITextField::Text()
{
    uStackFrame __("iOS.UIKit.UITextField", "get_Text()");
    return text();
}

// public void set_Text(string value) [instance] :84609
void UITextField::Text(uString* value)
{
    uStackFrame __("iOS.UIKit.UITextField", "set_Text(string)");
    setText(value);
}

// public extern iOS.UIKit.NSTextAlignment textAlignment() [instance] :84898
int UITextField::textAlignment()
{
    uStackFrame __("iOS.UIKit.UITextField", "textAlignment()");
    ::NSTextAlignment __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSTextAlignment, @selector(textAlignment));
    return int(__return);
}

// public iOS.UIKit.NSTextAlignment get_TextAlignment() [instance] :84632
int UITextField::TextAlignment()
{
    uStackFrame __("iOS.UIKit.UITextField", "get_TextAlignment()");
    return textAlignment();
}

// public void set_TextAlignment(iOS.UIKit.NSTextAlignment value) [instance] :84633
void UITextField::TextAlignment(int value)
{
    uStackFrame __("iOS.UIKit.UITextField", "set_TextAlignment(iOS.UIKit.NSTextAlignment)");
    setTextAlignment(value);
}

// public extern iOS.UIKit.UIColor textColor() [instance] :84886
::g::iOS::UIKit::UIColor* UITextField::textColor()
{
    uStackFrame __("iOS.UIKit.UITextField", "textColor()");
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIColor*, @selector(textColor));
    return (::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIColor_typeof());
}

// public iOS.UIKit.UIColor get_TextColor() [instance] :84620
::g::iOS::UIKit::UIColor* UITextField::TextColor()
{
    uStackFrame __("iOS.UIKit.UITextField", "get_TextColor()");
    return textColor();
}

// public void set_TextColor(iOS.UIKit.UIColor value) [instance] :84621
void UITextField::TextColor(::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("iOS.UIKit.UITextField", "set_TextColor(iOS.UIKit.UIColor)");
    setTextColor(value);
}

// public extern iOS.UIKit.UIView textInputView() [instance] :85144
::g::iOS::UIKit::UIView* UITextField::textInputView()
{
    uStackFrame __("iOS.UIKit.UITextField", "textInputView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(textInputView));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}

// public extern string textInRange(iOS.UIKit.UITextRange range) [instance] :85027
uString* UITextField::textInRange(::g::iOS::UIKit::UITextRange* range_)
{
    uStackFrame __("iOS.UIKit.UITextField", "textInRange(iOS.UIKit.UITextRange)");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(textInRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)range_));
    return uObjC::UnoString(__return);
}

// public extern iOS.UIKit.UITextRange textRangeFromPositionToPosition(iOS.UIKit.UITextPosition fromPosition, iOS.UIKit.UITextPosition toPosition) [instance] :85039
::g::iOS::UIKit::UITextRange* UITextField::textRangeFromPositionToPosition(::g::iOS::UIKit::UITextPosition* fromPosition_, ::g::iOS::UIKit::UITextPosition* toPosition_)
{
    uStackFrame __("iOS.UIKit.UITextField", "textRangeFromPositionToPosition(iOS.UIKit.UITextPosition,iOS.UIKit.UITextPosition)");
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextRange*, @selector(textRangeFromPosition:toPosition:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)fromPosition_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toPosition_));
    return (::g::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextRange_typeof());
}

// public extern iOS.Foundation.NSDictionary textStylingAtPositionInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextStorageDirection direction) [instance] :85087
::g::iOS::Foundation::NSDictionary* UITextField::textStylingAtPositionInDirection(::g::iOS::UIKit::UITextPosition* position_, int direction_)
{
    uStackFrame __("iOS.UIKit.UITextField", "textStylingAtPositionInDirection(iOS.UIKit.UITextPosition,iOS.UIKit.UITextStorageDirection)");
    int direction__ = direction_;
    ::NSDictionary* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSDictionary*, @selector(textStylingAtPosition:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextStorageDirection(direction__));
    return (::g::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSDictionary_typeof());
}

// public extern iOS.UIKit.IUITextInputTokenizer tokenizer() [instance] :85141
uObject* UITextField::tokenizer()
{
    uStackFrame __("iOS.UIKit.UITextField", "tokenizer()");
    id<UITextInputTokenizer> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UITextInputTokenizer>, @selector(tokenizer));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUITextInputTokenizer_typeof());
}

// public extern void unmarkText() [instance] :85036
void UITextField::unmarkText()
{
    uStackFrame __("iOS.UIKit.UITextField", "unmarkText()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(unmarkText));
}
// }

}}} // ::g::iOS::UIKit
