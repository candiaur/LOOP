// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.Native.iOS.MultiLineTextEdit.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Font.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class MultiLineTextEdit :1875
// {
static void MultiLineTextEdit_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::ObjC::Object_typeof());
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(MultiLineTextEdit_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(MultiLineTextEdit_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(MultiLineTextEdit_type, interface2),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(MultiLineTextEdit_type, interface3),
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), offsetof(MultiLineTextEdit_type, interface4),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(MultiLineTextEdit_type, interface5));
    type->SetFields(3,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::MultiLineTextEdit, _delegate), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::MultiLineTextEdit, _fontSize), 0,
        ::g::Fuse::Controls::Native::ITextEditHost_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::MultiLineTextEdit, _host), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MultiLineTextEdit__New1_fn, 0, true, MultiLineTextEdit_typeof(), 1, ::g::Fuse::Controls::Native::ITextEditHost_typeof()));
}

MultiLineTextEdit_type* MultiLineTextEdit_typeof()
{
    static uSStrong<MultiLineTextEdit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(MultiLineTextEdit);
    options.TypeSize = sizeof(MultiLineTextEdit_type);
    type = (MultiLineTextEdit_type*)uClassType::New("Fuse.Controls.Native.iOS.MultiLineTextEdit", options);
    type->SetBase(::g::Fuse::Controls::Native::iOS::LeafView_typeof());
    type->fp_build_ = MultiLineTextEdit_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))MultiLineTextEdit__Dispose_fn;
    type->interface3.fp_FocusGained = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeITextEditFocusGained_fn;
    type->interface3.fp_FocusLost = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_FocusGained = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn;
    type->interface5.fp_set_Value = (void(*)(uObject*, uString*))MultiLineTextEdit__FuseControlsNativeITextViewset_Value_fn;
    type->interface5.fp_set_MaxLength = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn;
    type->interface5.fp_set_TextWrapping = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn;
    type->interface5.fp_set_LineSpacing = (void(*)(uObject*, float*))MultiLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn;
    type->interface5.fp_set_FontSize = (void(*)(uObject*, float*))MultiLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn;
    type->interface5.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))MultiLineTextEdit__FuseControlsNativeITextViewset_Font_fn;
    type->interface5.fp_set_TextAlignment = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn;
    type->interface5.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn;
    type->interface5.fp_set_TextTruncation = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn;
    type->interface3.fp_set_IsMultiline = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn;
    type->interface3.fp_set_IsPassword = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn;
    type->interface3.fp_set_IsReadOnly = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn;
    type->interface3.fp_set_InputHint = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn;
    type->interface3.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn;
    type->interface3.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn;
    type->interface3.fp_set_ActionStyle = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn;
    type->interface3.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn;
    type->interface3.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn;
    type->interface3.fp_set_PlaceholderText = (void(*)(uObject*, uString*))MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn;
    type->interface3.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))MultiLineTextEdit__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public MultiLineTextEdit(Fuse.Controls.Native.ITextEditHost host) :1881
void MultiLineTextEdit__ctor_2_fn(MultiLineTextEdit* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private static ObjC.Object Create() :1897
void MultiLineTextEdit__Create_fn(uObject** __retval)
{
    *__retval = MultiLineTextEdit::Create();
}

// private static ObjC.Object CreateDelegate(ObjC.Object handle, Uno.Action<ObjC.Object> callback) :1903
void MultiLineTextEdit__CreateDelegate_fn(uObject* handle, uDelegate* callback, uObject** __retval)
{
    *__retval = MultiLineTextEdit::CreateDelegate(handle, callback);
}

// public override sealed void Dispose() :1888
void MultiLineTextEdit__Dispose_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Dispose()");
    ::g::Fuse::Controls::Native::iOS::NativeFocus::RemoveListener(__this->Handle());
    __this->_host = NULL;
    __this->_delegate = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained() :1923
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(__this->_host), ::TYPES[2/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost() :1928
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(__this->_host), ::TYPES[2/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.ITextEdit.set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :2052
void MultiLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn(MultiLineTextEdit* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.set_ActionStyle(Fuse.Controls.TextInputActionStyle)");
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyDefault);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyDone);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyNext);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyGo);
            break;
        }
        case 4:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeySearch);
            break;
        }
        case 5:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeySend);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) :2081
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn(MultiLineTextEdit* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint)");
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeNone);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeAllCharacters);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeWords);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeSentences);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) :2068
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn(MultiLineTextEdit* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint)");
    int value_ = *value;

    switch (value_)
    {
        case 1:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeNo);
            break;
        }
        case 0:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeDefault);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeYes);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_CaretColor(float4 value) :2042
void MultiLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained() :1913
void MultiLineTextEdit__FuseControlsNativeITextEditFocusGained_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.FocusGained()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleBecomeFirstResponder(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost() :1918
void MultiLineTextEdit__FuseControlsNativeITextEditFocusLost_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.FocusLost()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleResignFirstResponder(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.set_InputHint(Fuse.Controls.TextInputHint value) :2026
void MultiLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn(MultiLineTextEdit* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.set_InputHint(Fuse.Controls.TextInputHint)");
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDefault);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeEmailAddress);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeURL);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypePhonePad);
            break;
        }
        case 4:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeNumberPad);
            break;
        }
        case 5:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDecimalPad);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_IsMultiline(bool value) :2011
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn(MultiLineTextEdit* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.set_IsMultiline(bool)");
    bool value_ = *value;
    MultiLineTextEdit::SetIsMultiline(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_IsPassword(bool value) :2016
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn(MultiLineTextEdit* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.set_IsPassword(bool)");
    bool value_ = *value;
    MultiLineTextEdit::SetIsPassword(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_IsReadOnly(bool value) :2021
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn(MultiLineTextEdit* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.set_IsReadOnly(bool)");
    bool value_ = *value;
    MultiLineTextEdit::SetIsReadOnly(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderColor(float4 value) :2100
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderText(string value) :2095
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn(MultiLineTextEdit* __this, uString* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_SelectionColor(float4 value) :2047
void MultiLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_Font(Fuse.Font value) :1974
void MultiLineTextEdit__FuseControlsNativeITextViewset_Font_fn(MultiLineTextEdit* __this, ::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_Font(Fuse.Font)");
    ::g::Uno::UX::FileSource* file = uPtr(value)->File();

    if (file != NULL)
    {
        uObject* font = ::g::Fuse::Controls::Native::iOS::FontCache::GetFontFromFile(file, __this->_fontSize);

        if (font != NULL)
            MultiLineTextEdit::SetFont(__this->Handle(), font);
    }
}

// private void Fuse.Controls.Native.ITextView.set_FontSize(float value) :1969
void MultiLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn(MultiLineTextEdit* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_FontSize(float)");
    float value_ = *value;
    MultiLineTextEdit::SetFontSize(__this->Handle(), __this->_fontSize = value_);
}

// private void Fuse.Controls.Native.ITextView.set_LineSpacing(float value) :1963
void MultiLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn(MultiLineTextEdit* __this, float* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_MaxLength(int value) :1946
void MultiLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn(MultiLineTextEdit* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_MaxLength(int)");
    int value_ = *value;
    MultiLineTextEdit::SetMaxLength(__this->_delegate, (value_ == 0) ? 2147483647 : value_);
}

// private void Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment value) :1988
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn(MultiLineTextEdit* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment)");
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetTextAlignment(__this->Handle(), NSTextAlignmentLeft);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetTextAlignment(__this->Handle(), NSTextAlignmentCenter);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetTextAlignment(__this->Handle(), NSTextAlignmentRight);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextView.set_TextColor(float4 value) :2001
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_TextColor(float4)");
    ::g::Uno::Float4 value_ = *value;
    MultiLineTextEdit::SetTextColor(__this->Handle(), value_.X, value_.Y, value_.Z, value_.W);
}

// private void Fuse.Controls.Native.ITextView.set_TextTruncation(Fuse.Controls.TextTruncation value) :2006
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn(MultiLineTextEdit* __this, int* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping value) :1958
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn(MultiLineTextEdit* __this, int* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_Value(string value) :1940
void MultiLineTextEdit__FuseControlsNativeITextViewset_Value_fn(MultiLineTextEdit* __this, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_Value(string)");
    MultiLineTextEdit::SetValue(__this->Handle(), value);
}

// private static string GetValue(ObjC.Object handle) :2118
void MultiLineTextEdit__GetValue_fn(uObject* handle, uString** __retval)
{
    *__retval = MultiLineTextEdit::GetValue(handle);
}

// public MultiLineTextEdit New(Fuse.Controls.Native.ITextEditHost host) :1881
void MultiLineTextEdit__New1_fn(uObject* host, MultiLineTextEdit** __retval)
{
    *__retval = MultiLineTextEdit::New1(host);
}

// private void OnTextChanged(ObjC.Object uitextView) :1933
void MultiLineTextEdit__OnTextChanged_fn(MultiLineTextEdit* __this, uObject* uitextView)
{
    __this->OnTextChanged(uitextView);
}

// private static void SetActionStyle(ObjC.Object handle, int style) :2176
void MultiLineTextEdit__SetActionStyle_fn(uObject* handle, int* style)
{
    MultiLineTextEdit::SetActionStyle(handle, *style);
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint) :2190
void MultiLineTextEdit__SetAutoCapitalizationHint_fn(uObject* handle, int* hint)
{
    MultiLineTextEdit::SetAutoCapitalizationHint(handle, *hint);
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint) :2183
void MultiLineTextEdit__SetAutoCorrectHint_fn(uObject* handle, int* hint)
{
    MultiLineTextEdit::SetAutoCorrectHint(handle, *hint);
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) :2197
void MultiLineTextEdit__SetFont_fn(uObject* handle, uObject* fontHandle)
{
    MultiLineTextEdit::SetFont(handle, fontHandle);
}

// private static void SetFontSize(ObjC.Object handle, float fontSize) :2160
void MultiLineTextEdit__SetFontSize_fn(uObject* handle, float* fontSize)
{
    MultiLineTextEdit::SetFontSize(handle, *fontSize);
}

// private static void SetInputHint(ObjC.Object handle, int hint) :2169
void MultiLineTextEdit__SetInputHint_fn(uObject* handle, int* hint)
{
    MultiLineTextEdit::SetInputHint(handle, *hint);
}

// private static void SetIsMultiline(ObjC.Object handle, bool isMultiline) :2153
void MultiLineTextEdit__SetIsMultiline_fn(uObject* handle, bool* isMultiline)
{
    MultiLineTextEdit::SetIsMultiline(handle, *isMultiline);
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword) :2146
void MultiLineTextEdit__SetIsPassword_fn(uObject* handle, bool* isPassword)
{
    MultiLineTextEdit::SetIsPassword(handle, *isPassword);
}

// private static void SetIsReadOnly(ObjC.Object handle, bool isReadOnly) :2139
void MultiLineTextEdit__SetIsReadOnly_fn(uObject* handle, bool* isReadOnly)
{
    MultiLineTextEdit::SetIsReadOnly(handle, *isReadOnly);
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength) :1950
void MultiLineTextEdit__SetMaxLength_fn(uObject* delegateHandle, int* maxLength)
{
    MultiLineTextEdit::SetMaxLength(delegateHandle, *maxLength);
}

// private static void SetTextAlignment(ObjC.Object handle, int alignmnet) :2132
void MultiLineTextEdit__SetTextAlignment_fn(uObject* handle, int* alignmnet)
{
    MultiLineTextEdit::SetTextAlignment(handle, *alignmnet);
}

// private static void SetTextColor(ObjC.Object handle, float r, float g, float b, float a) :2125
void MultiLineTextEdit__SetTextColor_fn(uObject* handle, float* r, float* g, float* b, float* a)
{
    MultiLineTextEdit::SetTextColor(handle, *r, *g, *b, *a);
}

// private static void SetValue(ObjC.Object handle, string value) :2111
void MultiLineTextEdit__SetValue_fn(uObject* handle, uString* value)
{
    MultiLineTextEdit::SetValue(handle, value);
}

// public MultiLineTextEdit(Fuse.Controls.Native.ITextEditHost host) [instance] :1881
void MultiLineTextEdit::ctor_2(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", ".ctor(Fuse.Controls.Native.ITextEditHost)");
    _fontSize = 12.0f;
    ctor_1(MultiLineTextEdit::Create());
    _host = host;
    _delegate = MultiLineTextEdit::CreateDelegate(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object>*/], (void*)MultiLineTextEdit__OnTextChanged_fn, this));
    ::g::Fuse::Controls::Native::iOS::NativeFocus::AddListener(Handle(), (uObject*)this);
}

// private void OnTextChanged(ObjC.Object uitextView) [instance] :1933
void MultiLineTextEdit::OnTextChanged(uObject* uitextView)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "OnTextChanged(ObjC.Object)");
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[2/*Fuse.Controls.Native.ITextEditHost*/]), MultiLineTextEdit::GetValue(Handle()));
}

// private static ObjC.Object Create() [static] :1897
uObject* MultiLineTextEdit::Create()
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Create()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[::UITextView alloc] init];
        } ());
        
    }
    
}

// private static ObjC.Object CreateDelegate(ObjC.Object handle, Uno.Action<ObjC.Object> callback) [static] :1903
uObject* MultiLineTextEdit::CreateDelegate(uObject* handle, uDelegate* callback)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "CreateDelegate(ObjC.Object,Uno.Action<ObjC.Object>)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id handle, ::uObjC::Function<void, ::id> callback) -> ::id
        {
            ::UITextView* textView = (::UITextView*)handle;
            ::TextViewDelegate* del = [[::TextViewDelegate alloc] init];
            [del setTextChangedCallback: callback];
            [del setMaxLength: INT_MAX];
            [textView setDelegate:del];
            return del;
        } (::g::ObjC::Helpers::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id>
        {
            return [[^ void (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback])));
        
    }
    
}

// private static string GetValue(ObjC.Object handle) [static] :2118
uString* MultiLineTextEdit::GetValue(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "GetValue(ObjC.Object)");
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            ::UITextView* textView = (::UITextView*)handle;
            return [textView text];
        } (::g::ObjC::Helpers::GetHandle(handle)));
        
    }
    
}

// public MultiLineTextEdit New(Fuse.Controls.Native.ITextEditHost host) [static] :1881
MultiLineTextEdit* MultiLineTextEdit::New1(uObject* host)
{
    MultiLineTextEdit* obj1 = (MultiLineTextEdit*)uNew(MultiLineTextEdit_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetActionStyle(ObjC.Object handle, int style) [static] :2176
void MultiLineTextEdit::SetActionStyle(uObject* handle, int style)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetActionStyle(ObjC.Object,int)");
    @autoreleasepool
    {
        [] (::id handle, int style) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setReturnKeyType: (UIReturnKeyType)style];	
        } (::g::ObjC::Helpers::GetHandle(handle), style);
        
    }
    
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint) [static] :2190
void MultiLineTextEdit::SetAutoCapitalizationHint(uObject* handle, int hint)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetAutoCapitalizationHint(ObjC.Object,int)");
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setAutocapitalizationType: (UITextAutocapitalizationType)hint];
        } (::g::ObjC::Helpers::GetHandle(handle), hint);
        
    }
    
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint) [static] :2183
void MultiLineTextEdit::SetAutoCorrectHint(uObject* handle, int hint)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetAutoCorrectHint(ObjC.Object,int)");
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setAutocorrectionType: (UITextAutocorrectionType)hint];
        } (::g::ObjC::Helpers::GetHandle(handle), hint);
        
    }
    
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) [static] :2197
void MultiLineTextEdit::SetFont(uObject* handle, uObject* fontHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetFont(ObjC.Object,ObjC.Object)");
    @autoreleasepool
    {
        [] (::id handle, ::id fontHandle) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            ::UIFont* font = (::UIFont*)fontHandle;
            [textView setFont: font];
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(fontHandle));
        
    }
    
}

// private static void SetFontSize(ObjC.Object handle, float fontSize) [static] :2160
void MultiLineTextEdit::SetFontSize(uObject* handle, float fontSize)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetFontSize(ObjC.Object,float)");
    @autoreleasepool
    {
        [] (::id handle, float fontSize) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            ::UIFont* oldFont = [textView font];
            ::UIFont* newFont = [::UIFont fontWithName: [oldFont fontName] size:(CGFloat)fontSize];
            [textView setFont: newFont];
        } (::g::ObjC::Helpers::GetHandle(handle), fontSize);
        
    }
    
}

// private static void SetInputHint(ObjC.Object handle, int hint) [static] :2169
void MultiLineTextEdit::SetInputHint(uObject* handle, int hint)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetInputHint(ObjC.Object,int)");
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setKeyboardType:(UIKeyboardType)hint];
        } (::g::ObjC::Helpers::GetHandle(handle), hint);
        
    }
    
}

// private static void SetIsMultiline(ObjC.Object handle, bool isMultiline) [static] :2153
void MultiLineTextEdit::SetIsMultiline(uObject* handle, bool isMultiline)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetIsMultiline(ObjC.Object,bool)");
    @autoreleasepool
    {
        [] (::id handle, bool isMultiline) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [[textView textContainer] setMaximumNumberOfLines:((isMultiline) ? 0 : 1)];
        } (::g::ObjC::Helpers::GetHandle(handle), isMultiline);
        
    }
    
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword) [static] :2146
void MultiLineTextEdit::SetIsPassword(uObject* handle, bool isPassword)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetIsPassword(ObjC.Object,bool)");
    @autoreleasepool
    {
        [] (::id handle, bool isPassword) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setSecureTextEntry: isPassword];
        } (::g::ObjC::Helpers::GetHandle(handle), isPassword);
        
    }
    
}

// private static void SetIsReadOnly(ObjC.Object handle, bool isReadOnly) [static] :2139
void MultiLineTextEdit::SetIsReadOnly(uObject* handle, bool isReadOnly)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetIsReadOnly(ObjC.Object,bool)");
    @autoreleasepool
    {
        [] (::id handle, bool isReadOnly) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setEditable: !isReadOnly];	
        } (::g::ObjC::Helpers::GetHandle(handle), isReadOnly);
        
    }
    
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength) [static] :1950
void MultiLineTextEdit::SetMaxLength(uObject* delegateHandle, int maxLength)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetMaxLength(ObjC.Object,int)");
    @autoreleasepool
    {
        [] (::id delegateHandle, int maxLength) -> void
        {
            ::TextViewDelegate* textViewDelegate = (::TextViewDelegate*)delegateHandle;
            [textViewDelegate setMaxLength: maxLength];
        } (::g::ObjC::Helpers::GetHandle(delegateHandle), maxLength);
        
    }
    
}

// private static void SetTextAlignment(ObjC.Object handle, int alignmnet) [static] :2132
void MultiLineTextEdit::SetTextAlignment(uObject* handle, int alignmnet)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetTextAlignment(ObjC.Object,int)");
    @autoreleasepool
    {
        [] (::id handle, int alignmnet) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setTextAlignment: (NSTextAlignment)alignmnet ];
        } (::g::ObjC::Helpers::GetHandle(handle), alignmnet);
        
    }
    
}

// private static void SetTextColor(ObjC.Object handle, float r, float g, float b, float a) [static] :2125
void MultiLineTextEdit::SetTextColor(uObject* handle, float r, float g, float b, float a)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetTextColor(ObjC.Object,float,float,float,float)");
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setTextColor:[::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Helpers::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetValue(ObjC.Object handle, string value) [static] :2111
void MultiLineTextEdit::SetValue(uObject* handle, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "SetValue(ObjC.Object,string)");
    @autoreleasepool
    {
        [] (::id handle, ::NSString* value) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setText:value];
        } (::g::ObjC::Helpers::GetHandle(handle), ::uObjC::NativeString(value));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
