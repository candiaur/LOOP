// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.TextControl.h>
#include <Fuse.DrawContext.h>
#include <Fuse.iOS.Bindings.Blitter.h>
#include <Fuse.iOS.Bindings.TextLayout.h>
#include <Fuse.iOS.Bindings.TextRenderer.h>
#include <Fuse.IViewport.h>
#include <Fuse.Visual.h>
#include <iOS.CoreGraphics.CGBitmapInfo.h>
#include <iOS.CoreGraphics.CGColorSpaceRef.h>
#include <iOS.CoreGraphics.CGContextRef.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.Functions.h>
#include <iOS.Foundation._NSRange.h>
#include <iOS.UIKit.Functions.h>
#include <iOS.UIKit.NSLayoutManager.h>
#include <iOS.UIKit.NSTextContainer.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLPixelFormat.h>
#include <OpenGL.GLPixelType.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <UIKit/NSAttributedString.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.ULong.h>
#include <Fuse.LayoutParams.h>
#include <Uno.Rect.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// public sealed extern class TextRenderer :862
// {
// static TextRenderer() :862
static void TextRenderer__cctor__fn(uType* __type)
{
    TextRenderer::_colorSpace_ = ::g::iOS::CoreGraphics::Functions::CGColorSpaceCreateDeviceRGB();
}

static void TextRenderer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Failed to create CGBitmapContext");
    ::TYPES[0] = ::g::Fuse::Controls::ITextRenderer_typeof();
    ::TYPES[1] = ::g::Fuse::IViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextRenderer, _arrangePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextRenderer, _arrangeSize), 0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextRenderer, _control), 0,
        ::g::Fuse::iOS::Bindings::TextLayout_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextRenderer, _measureLayout), 0,
        ::g::Fuse::iOS::Bindings::TextLayout_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextRenderer, _textLayout), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextRenderer, _texture), 0,
        ::g::iOS::CoreGraphics::CGColorSpaceRef_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::TextRenderer::_colorSpace_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("Arrange", NULL, (void*)TextRenderer__Arrange_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Create", NULL, (void*)TextRenderer__Create_fn, 0, true, ::g::Fuse::Controls::ITextRenderer_typeof(), 1, ::g::Fuse::Controls::TextControl_typeof()),
        new uFunction("Draw", NULL, (void*)TextRenderer__Draw_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof()),
        new uFunction("GetContentSize", NULL, (void*)TextRenderer__GetContentSize_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::LayoutParams_typeof()),
        new uFunction("GetRenderBounds", NULL, (void*)TextRenderer__GetRenderBounds_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("Invalidate", NULL, (void*)TextRenderer__Invalidate_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TextRenderer__New1_fn, 0, true, TextRenderer_typeof(), 1, ::g::Fuse::Controls::TextControl_typeof()),
        new uFunction("SoftDispose", NULL, (void*)TextRenderer__SoftDispose_fn, 0, false, uVoid_typeof(), 0));
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.iOS.Bindings.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    type->fp_cctor_ = TextRenderer__cctor__fn;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Visual*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    return type;
}

// public TextRenderer(Fuse.Controls.TextControl control) :875
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* control)
{
    __this->ctor_(control);
}

// public void Arrange(float2 position, float2 size) :946
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// public static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) :866
void TextRenderer__Create_fn(::g::Fuse::Controls::TextControl* control, uObject** __retval)
{
    *__retval = TextRenderer::Create(control);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) :896
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    __this->Draw(dc, where);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :880
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds() :976
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// public void Invalidate() :954
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// private void InvalidateTexture() :967
void TextRenderer__InvalidateTexture_fn(TextRenderer* __this)
{
    __this->InvalidateTexture();
}

// public TextRenderer New(Fuse.Controls.TextControl control) :875
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* control, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(control);
}

// public void SoftDispose() :962
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

app::CGColorSpaceRef* TextRenderer::_colorSpace_;

// public TextRenderer(Fuse.Controls.TextControl control) [instance] :875
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* control)
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", ".ctor(Fuse.Controls.TextControl)");
    _textLayout = ::g::Fuse::iOS::Bindings::TextLayout::New1();
    _control = control;
}

// public void Arrange(float2 position, float2 size) [instance] :946
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "Arrange(float2,float2)");
    _arrangePosition = position;
    _arrangeSize = size;
    Invalidate();
    uPtr(_textLayout)->UpdateLayout(_control, size, false);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) [instance] :896
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "Draw(Fuse.DrawContext,Fuse.Visual)");

    if (uPtr(_textLayout)->UpdateLayout(_control, _arrangeSize, false))
        InvalidateTexture();

    ::g::Uno::Int2 pixelSize = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(uPtr(_textLayout)->PixelBounds.Size()));

    if ((((pixelSize.X < 1) || (pixelSize.Y < 1)) || (pixelSize.X > ::g::Uno::Graphics::Texture2D::MaxSize())) || (pixelSize.Y > ::g::Uno::Graphics::Texture2D::MaxSize()))
        return;

    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[1/*Fuse.IViewport*/])));

    if (_texture == NULL)
    {
        void* textureBuffer = malloc(pixelSize.X * pixelSize.Y * 4);

        if (::g::Uno::IntPtr::op_Equality(textureBuffer, ::g::Uno::IntPtr::Zero_))
            return;

        uint32_t flags = 8194;
        app::CGContextRef* imageContext = ::g::iOS::CoreGraphics::Functions::CGBitmapContextCreate(textureBuffer, (uint64_t)pixelSize.X, (uint64_t)pixelSize.Y, 8ULL, (uint64_t)(pixelSize.X * 4), TextRenderer::_colorSpace(), flags);

        if (::g::Uno::IntPtr::op_Equality(imageContext, ::g::Uno::IntPtr::Zero_))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Failed to c...*/]));

        ::g::iOS::UIKit::Functions::UIGraphicsPushContext(imageContext);
        ::g::iOS::CoreGraphics::CGRect rect = ::g::iOS::CoreGraphics::Functions::CGRectMake(0.0, 0.0, (double)pixelSize.X, (double)pixelSize.Y);
        ::g::iOS::CoreGraphics::Functions::CGContextClearRect(imageContext, rect);
        ::g::iOS::Foundation::_NSRange glyphRange = uPtr(uPtr(_textLayout)->LayoutManager)->glyphRangeForTextContainer(uPtr(_textLayout)->TextContainer);
        ::g::iOS::CoreGraphics::CGPoint pos = ::g::iOS::CoreGraphics::Functions::CGPointMake((double)-uPtr(_textLayout)->PixelBounds.Position().X, (double)-uPtr(_textLayout)->PixelBounds.Position().Y);
        uPtr(uPtr(_textLayout)->LayoutManager)->drawGlyphsForGlyphRangeAtPoint(glyphRange, pos);
        ::g::iOS::UIKit::Functions::UIGraphicsPopContext();
        ::g::iOS::CoreGraphics::Functions::CGContextRelease(imageContext);
        uint32_t textureHandle = ::g::OpenGL::GL::CreateTexture();
        ::g::OpenGL::GL::BindTexture(3553, textureHandle);
        ::g::OpenGL::GL::TexImage2D1(3553, 0, 6408, pixelSize.X, pixelSize.Y, 0, 32993, 5121, textureBuffer);
        free(textureBuffer);
        textureBuffer = ::g::Uno::IntPtr::Zero_;
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
        _texture = ::g::Uno::Graphics::Texture2D::New2(textureHandle, pixelSize, 1, 3);
    }

    uPtr(::g::Fuse::iOS::Bindings::Blitter::Singleton())->Blit(dc, where, _texture, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Position(), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[1/*Fuse.IViewport*/]))), _arrangePosition), pointSize);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :880
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "GetContentSize(Fuse.LayoutParams)");

    if (_measureLayout == NULL)
        _measureLayout = ::g::Fuse::iOS::Bindings::TextLayout::New1();

    ::g::Uno::Float2 size = ::g::Uno::Float2__New2(lp.HasX() ? lp.X() : FLT_INF, lp.HasY() ? lp.Y() : FLT_INF);

    if (lp.HasMaxX())
        size.X = ::g::Uno::Math::Min1(size.X, lp.MaxX());

    if (lp.HasMaxY())
        size.Y = ::g::Uno::Math::Min1(size.Y, lp.MaxY());

    uPtr(_measureLayout)->UpdateLayout(_control, size, true);
    return ::g::Uno::Float2__op_Division1(uPtr(_measureLayout)->PixelBounds.Size(), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[1/*Fuse.IViewport*/])));
}

// public Uno.Rect GetRenderBounds() [instance] :976
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "GetRenderBounds()");
    uPtr(_textLayout)->UpdateLayout(_control, _arrangeSize, false);
    return ::g::Uno::Rect__Translate(::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Position(), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[1/*Fuse.IViewport*/]))), ::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Size(), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[1/*Fuse.IViewport*/])))), _arrangePosition);
}

// public void Invalidate() [instance] :954
void TextRenderer::Invalidate()
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "Invalidate()");
    uPtr(_textLayout)->Invalidate();

    if (_measureLayout != NULL)
        uPtr(_measureLayout)->Invalidate();

    InvalidateTexture();
}

// private void InvalidateTexture() [instance] :967
void TextRenderer::InvalidateTexture()
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "InvalidateTexture()");

    if (_texture != NULL)
    {
        uPtr(_texture)->Dispose();
        _texture = NULL;
    }
}

// public void SoftDispose() [instance] :962
void TextRenderer::SoftDispose()
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "SoftDispose()");
    InvalidateTexture();
}

// public static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) [static] :866
uObject* TextRenderer::Create(::g::Fuse::Controls::TextControl* control)
{
    uStackFrame __("Fuse.iOS.Bindings.TextRenderer", "Create(Fuse.Controls.TextControl)");
    TextRenderer_typeof()->Init();
    return (uObject*)TextRenderer::New1(control);
}

// public TextRenderer New(Fuse.Controls.TextControl control) [static] :875
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* control)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(control);
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::Bindings
