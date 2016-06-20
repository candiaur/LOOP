// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.IGraphicsView.h>
#include <Fuse.Controls.Native.ILabelView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Fuse.Controls.Native.IOffscreenRenderer.h>
#include <Fuse.Controls.Native.IRangeView.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IScrollView.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IToggleView.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Font.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface IGraphicsView :44
// {
uInterfaceType* IGraphicsView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IGraphicsView", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("BeginDraw", NULL, NULL, offsetof(IGraphicsView, fp_BeginDraw), false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("EndDraw", NULL, NULL, offsetof(IGraphicsView, fp_EndDraw), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface ILabelView :50
// {
uInterfaceType* ILabelView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ILabelView", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("set_Text", NULL, NULL, offsetof(ILabelView, fp_set_Text), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface ILeafView :39
// {
uInterfaceType* ILeafView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ILeafView", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Measure", NULL, NULL, offsetof(ILeafView, fp_Measure), false, ::g::Uno::Float2_typeof(), 2, ::g::Fuse::LayoutParams_typeof(), ::g::Uno::Float_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface INativeViewRenderer :131
// {
uInterfaceType* INativeViewRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.INativeViewRenderer", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Draw", NULL, NULL, offsetof(INativeViewRenderer, fp_Draw), false, uVoid_typeof(), 4, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Invalidate", NULL, NULL, offsetof(INativeViewRenderer, fp_Invalidate), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface IOffscreenRenderer :137
// {
uInterfaceType* IOffscreenRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IOffscreenRenderer", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("DisableOffscreen", NULL, NULL, offsetof(IOffscreenRenderer, fp_DisableOffscreen), false, uVoid_typeof(), 0),
        new uFunction("EnableOffscreen", NULL, NULL, offsetof(IOffscreenRenderer, fp_EnableOffscreen), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface IRangeView :86
// {
uInterfaceType* IRangeView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRangeView", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("set_Progress", NULL, NULL, offsetof(IRangeView, fp_set_Progress), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface IRangeViewHost :91
// {
uInterfaceType* IRangeViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRangeViewHost", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnProgressChanged", NULL, NULL, offsetof(IRangeViewHost, fp_OnProgressChanged), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface IScrollView :119
// {
uInterfaceType* IScrollView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollView", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("set_AllowedScrollDirections", NULL, NULL, offsetof(IScrollView, fp_set_AllowedScrollDirections), false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction("set_ScrollPosition", NULL, NULL, offsetof(IScrollView, fp_set_ScrollPosition), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface IScrollViewHost :125
// {
uInterfaceType* IScrollViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollViewHost", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("OnScrollPositionChanged", NULL, NULL, offsetof(IScrollViewHost, fp_OnScrollPositionChanged), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_PixelsPerPoint", NULL, NULL, offsetof(IScrollViewHost, fp_get_PixelsPerPoint), false, ::g::Uno::Float_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface ITextEdit :96
// {
uInterfaceType* ITextEdit_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextEdit", 0, 0);
    type->Reflection.SetFunctions(13,
        new uFunction("set_ActionStyle", NULL, NULL, offsetof(ITextEdit, fp_set_ActionStyle), false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionStyle_typeof()),
        new uFunction("set_AutoCapitalizationHint", NULL, NULL, offsetof(ITextEdit, fp_set_AutoCapitalizationHint), false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCapitalizationHint_typeof()),
        new uFunction("set_AutoCorrectHint", NULL, NULL, offsetof(ITextEdit, fp_set_AutoCorrectHint), false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCorrectHint_typeof()),
        new uFunction("set_CaretColor", NULL, NULL, offsetof(ITextEdit, fp_set_CaretColor), false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("FocusGained", NULL, NULL, offsetof(ITextEdit, fp_FocusGained), false, uVoid_typeof(), 0),
        new uFunction("FocusLost", NULL, NULL, offsetof(ITextEdit, fp_FocusLost), false, uVoid_typeof(), 0),
        new uFunction("set_InputHint", NULL, NULL, offsetof(ITextEdit, fp_set_InputHint), false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputHint_typeof()),
        new uFunction("set_IsMultiline", NULL, NULL, offsetof(ITextEdit, fp_set_IsMultiline), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsPassword", NULL, NULL, offsetof(ITextEdit, fp_set_IsPassword), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsReadOnly", NULL, NULL, offsetof(ITextEdit, fp_set_IsReadOnly), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_PlaceholderColor", NULL, NULL, offsetof(ITextEdit, fp_set_PlaceholderColor), false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_PlaceholderText", NULL, NULL, offsetof(ITextEdit, fp_set_PlaceholderText), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("set_SelectionColor", NULL, NULL, offsetof(ITextEdit, fp_set_SelectionColor), false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface ITextEditHost :68
// {
uInterfaceType* ITextEditHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextEditHost", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("OnFocusGained", NULL, NULL, offsetof(ITextEditHost, fp_OnFocusGained), false, uVoid_typeof(), 0),
        new uFunction("OnFocusLost", NULL, NULL, offsetof(ITextEditHost, fp_OnFocusLost), false, uVoid_typeof(), 0),
        new uFunction("OnInputAction", NULL, NULL, offsetof(ITextEditHost, fp_OnInputAction), false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Controls::TextInputActionType_typeof()),
        new uFunction("OnValueChanged", NULL, NULL, offsetof(ITextEditHost, fp_OnValueChanged), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface ITextView :55
// {
uInterfaceType* ITextView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextView", 0, 0);
    type->Reflection.SetFunctions(9,
        new uFunction("set_Font", NULL, NULL, offsetof(ITextView, fp_set_Font), false, uVoid_typeof(), 1, ::g::Fuse::Font_typeof()),
        new uFunction("set_FontSize", NULL, NULL, offsetof(ITextView, fp_set_FontSize), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_LineSpacing", NULL, NULL, offsetof(ITextView, fp_set_LineSpacing), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_MaxLength", NULL, NULL, offsetof(ITextView, fp_set_MaxLength), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_TextAlignment", NULL, NULL, offsetof(ITextView, fp_set_TextAlignment), false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextAlignment_typeof()),
        new uFunction("set_TextColor", NULL, NULL, offsetof(ITextView, fp_set_TextColor), false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_TextTruncation", NULL, NULL, offsetof(ITextView, fp_set_TextTruncation), false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextTruncation_typeof()),
        new uFunction("set_TextWrapping", NULL, NULL, offsetof(ITextView, fp_set_TextWrapping), false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextWrapping_typeof()),
        new uFunction("set_Value", NULL, NULL, offsetof(ITextView, fp_set_Value), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface IToggleView :76
// {
uInterfaceType* IToggleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleView", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("set_Value", NULL, NULL, offsetof(IToggleView, fp_set_Value), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface IToggleViewHost :81
// {
uInterfaceType* IToggleViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleViewHost", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnValueChanged", NULL, NULL, offsetof(IToggleViewHost, fp_OnValueChanged), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface IView :28
// {
uInterfaceType* IView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IView", 0, 0);
    type->Reflection.SetFunctions(7,
        new uFunction("Hide", NULL, NULL, offsetof(IView, fp_Hide), false, uVoid_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, NULL, offsetof(IView, fp_set_IsEnabled), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_Opacity", NULL, NULL, offsetof(IView, fp_set_Opacity), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_Position", NULL, NULL, offsetof(IView, fp_set_Position), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Show", NULL, NULL, offsetof(IView, fp_Show), false, uVoid_typeof(), 0),
        new uFunction("set_Size", NULL, NULL, offsetof(IView, fp_set_Size), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("set_Transform", NULL, NULL, offsetof(IView, fp_set_Transform), false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno
// ----------------------------------------------------------------

// public abstract interface IViewGroup :113
// {
uInterfaceType* IViewGroup_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IViewGroup", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Add", NULL, NULL, offsetof(IViewGroup, fp_Add), false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::IView_typeof()),
        new uFunction("Remove", NULL, NULL, offsetof(IViewGroup, fp_Remove), false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::IView_typeof()));
    return type;
}
// }

}}}} // ::g::Fuse::Controls::Native
