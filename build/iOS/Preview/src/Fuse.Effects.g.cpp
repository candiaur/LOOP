// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseEffects_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Effects.Desaturate.h>
#include <Fuse.Effects.DropShadow.Blitter.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Effects.EffectHelpers.h>
#include <Fuse.Effects.EffectType.h>
#include <Fuse.Effects.Halftone.h>
#include <Fuse.Effects.Mask.h>
#include <Fuse.Effects.Mask.MaskMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualBounds.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.UShort.h>
#include <Uno.UX.FileSource.h>
static uType* TYPES[9];

namespace g{
namespace Fuse{
namespace Effects{

// /usr/local/share/uno/Packages/Fuse.Effects/0.29.22/$.uno
// --------------------------------------------------------

// public abstract class BasicEffect :10
// {
static void BasicEffect_build(uType* type)
{
    type->SetFields(6);
}

BasicEffect_type* BasicEffect_typeof()
{
    static uSStrong<BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(BasicEffect);
    options.TypeSize = sizeof(BasicEffect_type);
    type = (BasicEffect_type*)uClassType::New("Fuse.Effects.BasicEffect", options);
    type->SetBase(::g::Fuse::Effects::Effect_typeof());
    type->fp_build_ = BasicEffect_build;
    type->fp_Render = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::DrawContext*))BasicEffect__Render_fn;
    return type;
}

// protected BasicEffect(Fuse.Effects.EffectType effectType) :12
void BasicEffect__ctor_2_fn(BasicEffect* __this, int* effectType)
{
    __this->ctor_2(*effectType);
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) :25
void BasicEffect__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = BasicEffect::ConservativelySnapToCoveringIntegers(*r);
}

// protected Uno.Rect GetLocalElementRect() :37
void BasicEffect__GetLocalElementRect_fn(BasicEffect* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetLocalElementRect();
}

// public override sealed void Render(Fuse.DrawContext dc) :17
void BasicEffect__Render_fn(BasicEffect* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Effects.BasicEffect", "Render(Fuse.DrawContext)");
    ::g::Uno::Rect rect = __this->GetLocalElementRect();
    __this->OnRender(dc, rect);
}

// protected BasicEffect(Fuse.Effects.EffectType effectType) [instance] :12
void BasicEffect::ctor_2(int effectType)
{
    uStackFrame __("Fuse.Effects.BasicEffect", ".ctor(Fuse.Effects.EffectType)");
    ctor_1(effectType);
}

// protected Uno.Rect GetLocalElementRect() [instance] :37
::g::Uno::Rect BasicEffect::GetLocalElementRect()
{
    uStackFrame __("Fuse.Effects.BasicEffect", "GetLocalElementRect()");
    ::g::Uno::Recti ir = BasicEffect::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(uPtr(uPtr(Element())->RenderBoundsWithoutEffects())->FlatRect(), uPtr(Element())->AbsoluteZoom()));
    return ::g::Uno::Rect__New1((float)ir.Minimum().X / uPtr(Element())->AbsoluteZoom(), (float)ir.Minimum().Y / uPtr(Element())->AbsoluteZoom(), (float)ir.Maximum().X / uPtr(Element())->AbsoluteZoom(), (float)ir.Maximum().Y / uPtr(Element())->AbsoluteZoom());
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static] :25
::g::Uno::Recti BasicEffect::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    uStackFrame __("Fuse.Effects.BasicEffect", "ConservativelySnapToCoveringIntegers(Uno.Rect)");
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(r.LeftTop()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Subtraction2(r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.29.22/$.uno
// --------------------------------------------------------

// private sealed class DropShadow.Blitter :347
// {
static void DropShadow__Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IViewport_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::DropShadow__Blitter, _draw_438ac8c), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Effects::DropShadow__Blitter, Blit_LocalTransform_438ac8c_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Effects::DropShadow__Blitter, Blit_LocalTransform_438ac8c_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::DropShadow__Blitter, Blit_VertexData_438ac8c_7_2_1), 0,
        DropShadow__Blitter_typeof(), (uintptr_t)&::g::Fuse::Effects::DropShadow__Blitter::_instance_, uFieldFlagsStatic);
}

uType* DropShadow__Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DropShadow__Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Effects.DropShadow.Blitter", options);
    type->fp_build_ = DropShadow__Blitter_build;
    type->fp_ctor_ = (void*)DropShadow__Blitter__New1_fn;
    return type;
}

// public generated Blitter() :347
void DropShadow__Blitter__ctor__fn(DropShadow__Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Element element, Uno.Rect elementRect, float padding, int2 tempSize, texture2D blurTexture, float spreadScale, float2 offset, float4 color) :355
void DropShadow__Blitter__Blit_fn(DropShadow__Blitter* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Rect* elementRect, float* padding, ::g::Uno::Int2* tempSize, ::g::Uno::Graphics::Texture2D* blurTexture, float* spreadScale, ::g::Uno::Float2* offset, ::g::Uno::Float4* color)
{
    __this->Blit(dc, element, *elementRect, *padding, *tempSize, blurTexture, *spreadScale, *offset, *color);
}

// private generated void init_DrawCalls() :347
void DropShadow__Blitter__init_DrawCalls_fn(DropShadow__Blitter* __this)
{
    __this->init_DrawCalls();
}

// public static Fuse.Effects.DropShadow.Blitter get_Instance() :352
void DropShadow__Blitter__get_Instance_fn(DropShadow__Blitter** __retval)
{
    *__retval = DropShadow__Blitter::Instance();
}

// public generated Blitter New() :347
void DropShadow__Blitter__New1_fn(DropShadow__Blitter** __retval)
{
    *__retval = DropShadow__Blitter::New1();
}

uSStrong<DropShadow__Blitter*> DropShadow__Blitter::_instance_;

// public generated Blitter() [instance] :347
void DropShadow__Blitter::ctor_()
{
    uStackFrame __("Fuse.Effects.DropShadow.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Element element, Uno.Rect elementRect, float padding, int2 tempSize, texture2D blurTexture, float spreadScale, float2 offset, float4 color) [instance] :355
void DropShadow__Blitter::Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Rect elementRect, float padding, ::g::Uno::Int2 tempSize, ::g::Uno::Graphics::Texture2D* blurTexture, float spreadScale, ::g::Uno::Float2 offset, ::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.Effects.DropShadow.Blitter", "Blit(Fuse.DrawContext,Fuse.Elements.Element,Uno.Rect,float,int2,texture2D,float,float2,float4)");
    ::g::Uno::Float4x4 LocalTransform_438ac8c_4_9_4 = ::g::Uno::Matrix::Mul10(Blit_LocalTransform_438ac8c_4_9_2, ::g::Uno::Matrix::Scaling1(::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tempSize.X, (float)tempSize.Y), uPtr(element)->AbsoluteZoom()).X, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tempSize.X, (float)tempSize.Y), uPtr(element)->AbsoluteZoom()).Y, 1.0f), Blit_LocalTransform_438ac8c_4_9_3, ::g::Uno::Matrix::Translation(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Addition2(elementRect.Minimum(), offset), padding).X, ::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Addition2(elementRect.Minimum(), offset), padding).Y, 0.0f));
    _draw_438ac8c.BlendEnabled(true);
    _draw_438ac8c.DepthTestEnabled(false);
    _draw_438ac8c.CullFace(uPtr(dc)->CullFace());
    _draw_438ac8c.BlendSrcRgb(2);
    _draw_438ac8c.BlendDstRgb(3);
    _draw_438ac8c.BlendDstAlpha(3);
    _draw_438ac8c.Use();
    _draw_438ac8c.Attrib1(0, 2, Blit_VertexData_438ac8c_7_2_1, 8, 0);
    _draw_438ac8c.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IViewport*/])));
    _draw_438ac8c.Uniform(2, spreadScale);
    _draw_438ac8c.Uniform(3, color.W);
    _draw_438ac8c.Uniform6(4, ::g::Uno::Float3__New2(color.X, color.Y, color.Z));
    _draw_438ac8c.Uniform12(5, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_438ac8c_4_9_4, uPtr(element)->WorldTransform()) : LocalTransform_438ac8c_4_9_4);
    _draw_438ac8c.Sampler2(6, blurTexture);
    _draw_438ac8c.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance] :347
void DropShadow__Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Effects.DropShadow.Blitter", "init_DrawCalls()");
    Blit_VertexData_438ac8c_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Blit_LocalTransform_438ac8c_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Blit_LocalTransform_438ac8c_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_438ac8c = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::Blitter1ef54105());
}

// public generated Blitter New() [static] :347
DropShadow__Blitter* DropShadow__Blitter::New1()
{
    DropShadow__Blitter* obj2 = (DropShadow__Blitter*)uNew(DropShadow__Blitter_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Fuse.Effects.DropShadow.Blitter get_Instance() [static] :352
DropShadow__Blitter* DropShadow__Blitter::Instance()
{
    uStackFrame __("Fuse.Effects.DropShadow.Blitter", "get_Instance()");
    DropShadow__Blitter* ind1 = DropShadow__Blitter::_instance_;
    return (ind1 != NULL) ? ind1 : (DropShadow__Blitter*)(DropShadow__Blitter::_instance_ = DropShadow__Blitter::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.29.22/$.uno
// --------------------------------------------------------

// public sealed class Blur :61
// {
static void Blur_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[0] = ::g::Fuse::IViewport_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(6,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::Blur, _draw_bc1142c0), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::Blur, _radius), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Effects::Blur, OnRender_LocalTransform_bc1142c0_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Effects::Blur, OnRender_LocalTransform_bc1142c0_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::Blur, OnRender_VertexData_bc1142c0_7_2_1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Blur__New2_fn, 0, true, Blur_typeof(), 0),
        new uFunction("get_Radius", NULL, (void*)Blur__get_Radius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Radius", NULL, (void*)Blur__set_Radius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Effects::BasicEffect_type* Blur_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(Blur);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Blur", options);
    type->SetBase(::g::Fuse::Effects::BasicEffect_typeof());
    type->fp_build_ = Blur_build;
    type->fp_ctor_ = (void*)Blur__New2_fn;
    type->fp_ModifyRenderBounds = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**))Blur__ModifyRenderBounds_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Blur__OnRender_fn;
    return type;
}

// public Blur() :63
void Blur__ctor_3_fn(Blur* __this)
{
    __this->ctor_3();
}

// private generated void init_DrawCalls() :61
void Blur__init_DrawCalls_fn(Blur* __this)
{
    __this->init_DrawCalls();
}

// public override sealed Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds) :86
void Blur__ModifyRenderBounds_fn(Blur* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Effects.Blur", "ModifyRenderBounds(Fuse.VisualBounds)");
    return *__retval = uPtr(inBounds)->InflateXY(__this->Padding()), void();
}

// public Blur New() :63
void Blur__New2_fn(Blur** __retval)
{
    *__retval = Blur::New2();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :94
void Blur__OnRender_fn(Blur* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    uStackFrame __("Fuse.Effects.Blur", "OnRender(Fuse.DrawContext,Uno.Rect)");
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Rect paddedRect = ::g::Uno::Rect__Inflate(elementRect_, __this->Padding());
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, paddedRect, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == NULL)
        return;

    ::g::Uno::Graphics::Framebuffer* blur = uPtr(::g::Fuse::Effects::EffectHelpers::Instance())->Blur(uPtr(original)->ColorBuffer(), dc, __this->Sigma() * uPtr(__this->Element())->AbsoluteZoom());
    ::g::Fuse::FramebufferPool::Release(original);
    ::g::Uno::Float4x4 LocalTransform_bc1142c0_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_bc1142c0_4_9_2, ::g::Uno::Matrix::Scaling1(paddedRect.Size().X, paddedRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_bc1142c0_4_9_3, ::g::Uno::Matrix::Translation(::g::Uno::Float2__op_Subtraction1(elementRect_.Minimum(), __this->Padding()).X, ::g::Uno::Float2__op_Subtraction1(elementRect_.Minimum(), __this->Padding()).Y, 0.0f));
    __this->_draw_bc1142c0.BlendEnabled(true);
    __this->_draw_bc1142c0.DepthTestEnabled(false);
    __this->_draw_bc1142c0.CullFace(uPtr(dc)->CullFace());
    __this->_draw_bc1142c0.BlendSrcRgb(2);
    __this->_draw_bc1142c0.BlendDstRgb(3);
    __this->_draw_bc1142c0.BlendDstAlpha(3);
    __this->_draw_bc1142c0.Use();
    __this->_draw_bc1142c0.Attrib1(0, 2, __this->OnRender_VertexData_bc1142c0_7_2_1, 8, 0);
    __this->_draw_bc1142c0.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IViewport*/])));
    __this->_draw_bc1142c0.Uniform12(2, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_bc1142c0_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_bc1142c0_4_9_4);
    __this->_draw_bc1142c0.Sampler2(3, uPtr(blur)->ColorBuffer());
    __this->_draw_bc1142c0.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(blur);
}

// internal float get_Padding() :92
void Blur__get_Padding_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Padding();
}

// public float get_Radius() :73
void Blur__get_Radius_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value) :74
void Blur__set_Radius_fn(Blur* __this, float* value)
{
    __this->Radius(*value);
}

// internal float get_Sigma() :91
void Blur__get_Sigma_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Sigma();
}

// public Blur() [instance] :63
void Blur::ctor_3()
{
    uStackFrame __("Fuse.Effects.Blur", ".ctor()");
    ctor_2(1);
    Radius(3.0f);
    init_DrawCalls();
}

// private generated void init_DrawCalls() [instance] :61
void Blur::init_DrawCalls()
{
    uStackFrame __("Fuse.Effects.Blur", "init_DrawCalls()");
    OnRender_VertexData_bc1142c0_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    OnRender_LocalTransform_bc1142c0_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    OnRender_LocalTransform_bc1142c0_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_bc1142c0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::Blurec489e30());
}

// internal float get_Padding() [instance] :92
float Blur::Padding()
{
    uStackFrame __("Fuse.Effects.Blur", "get_Padding()");
    return ::g::Uno::Math::Ceil1((Sigma() * 3.0f) * uPtr(Element())->AbsoluteZoom()) / uPtr(Element())->AbsoluteZoom();
}

// public float get_Radius() [instance] :73
float Blur::Radius()
{
    uStackFrame __("Fuse.Effects.Blur", "get_Radius()");
    return _radius;
}

// public void set_Radius(float value) [instance] :74
void Blur::Radius(float value)
{
    uStackFrame __("Fuse.Effects.Blur", "set_Radius(float)");

    if (_radius != value)
    {
        _radius = value;
        OnRenderingChanged();
        OnRenderBoundsChanged();
    }
}

// internal float get_Sigma() [instance] :91
float Blur::Sigma()
{
    uStackFrame __("Fuse.Effects.Blur", "get_Sigma()");
    return ::g::Uno::Math::Max1(Radius(), 1e-05f);
}

// public Blur New() [static] :63
Blur* Blur::New2()
{
    Blur* obj1 = (Blur*)uNew(Blur_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.29.22/$.uno
// --------------------------------------------------------

// public sealed class Desaturate :137
// {
static void Desaturate_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[0] = ::g::Fuse::IViewport_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(6,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::Desaturate, _amount), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::Desaturate, _draw_16161609), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Effects::Desaturate, OnRender_LocalTransform_16161609_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Effects::Desaturate, OnRender_LocalTransform_16161609_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::Desaturate, OnRender_VertexData_16161609_7_2_1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Amount", NULL, (void*)Desaturate__get_Amount_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Amount", NULL, (void*)Desaturate__set_Amount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Desaturate__New2_fn, 0, true, Desaturate_typeof(), 0));
}

::g::Fuse::Effects::BasicEffect_type* Desaturate_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(Desaturate);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Desaturate", options);
    type->SetBase(::g::Fuse::Effects::BasicEffect_typeof());
    type->fp_build_ = Desaturate_build;
    type->fp_ctor_ = (void*)Desaturate__New2_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Desaturate__OnRender_fn;
    return type;
}

// public Desaturate() :139
void Desaturate__ctor_3_fn(Desaturate* __this)
{
    __this->ctor_3();
}

// public float get_Amount() :146
void Desaturate__get_Amount_fn(Desaturate* __this, float* __retval)
{
    *__retval = __this->Amount();
}

// public void set_Amount(float value) :147
void Desaturate__set_Amount_fn(Desaturate* __this, float* value)
{
    __this->Amount(*value);
}

// private generated void init_DrawCalls() :137
void Desaturate__init_DrawCalls_fn(Desaturate* __this)
{
    __this->init_DrawCalls();
}

// public Desaturate New() :139
void Desaturate__New2_fn(Desaturate** __retval)
{
    *__retval = Desaturate::New2();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :157
void Desaturate__OnRender_fn(Desaturate* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    uStackFrame __("Fuse.Effects.Desaturate", "OnRender(Fuse.DrawContext,Uno.Rect)");
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == NULL)
        return;

    ::g::Uno::Float4x4 LocalTransform_16161609_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_16161609_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_16161609_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
    __this->_draw_16161609.BlendEnabled(true);
    __this->_draw_16161609.DepthTestEnabled(false);
    __this->_draw_16161609.CullFace(uPtr(dc)->CullFace());
    __this->_draw_16161609.BlendSrcRgb(2);
    __this->_draw_16161609.BlendDstRgb(3);
    __this->_draw_16161609.BlendDstAlpha(3);
    __this->_draw_16161609.Use();
    __this->_draw_16161609.Attrib1(0, 2, __this->OnRender_VertexData_16161609_7_2_1, 8, 0);
    __this->_draw_16161609.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IViewport*/])));
    __this->_draw_16161609.Uniform(2, __this->Amount());
    __this->_draw_16161609.Uniform12(3, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_16161609_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_16161609_4_9_4);
    __this->_draw_16161609.Sampler2(4, uPtr(original)->ColorBuffer());
    __this->_draw_16161609.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(original);
}

// public Desaturate() [instance] :139
void Desaturate::ctor_3()
{
    uStackFrame __("Fuse.Effects.Desaturate", ".ctor()");
    _amount = 1.0f;
    ctor_2(1);
    init_DrawCalls();
}

// public float get_Amount() [instance] :146
float Desaturate::Amount()
{
    uStackFrame __("Fuse.Effects.Desaturate", "get_Amount()");
    return _amount;
}

// public void set_Amount(float value) [instance] :147
void Desaturate::Amount(float value)
{
    uStackFrame __("Fuse.Effects.Desaturate", "set_Amount(float)");

    if (_amount != value)
    {
        _amount = value;
        OnRenderingChanged();
    }
}

// private generated void init_DrawCalls() [instance] :137
void Desaturate::init_DrawCalls()
{
    uStackFrame __("Fuse.Effects.Desaturate", "init_DrawCalls()");
    OnRender_VertexData_16161609_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    OnRender_LocalTransform_16161609_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    OnRender_LocalTransform_16161609_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_16161609 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::Desaturatec68ecebc());
}

// public Desaturate New() [static] :139
Desaturate* Desaturate::New2()
{
    Desaturate* obj1 = (Desaturate*)uNew(Desaturate_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.29.22/$.uno
// --------------------------------------------------------

// public sealed class DropShadow :192
// {
static void DropShadow_build(uType* type)
{
    type->SetFields(6,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::DropShadow, _angle), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Effects::DropShadow, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::DropShadow, _distance), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::DropShadow, _size), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::DropShadow, _spread), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Angle", NULL, (void*)DropShadow__get_Angle_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Angle", NULL, (void*)DropShadow__set_Angle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Color", NULL, (void*)DropShadow__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)DropShadow__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Distance", NULL, (void*)DropShadow__get_Distance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Distance", NULL, (void*)DropShadow__set_Distance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)DropShadow__New2_fn, 0, true, DropShadow_typeof(), 0),
        new uFunction("get_Size", NULL, (void*)DropShadow__get_Size_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)DropShadow__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Spread", NULL, (void*)DropShadow__get_Spread_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Spread", NULL, (void*)DropShadow__set_Spread_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Effects::BasicEffect_type* DropShadow_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(DropShadow);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.DropShadow", options);
    type->SetBase(::g::Fuse::Effects::BasicEffect_typeof());
    type->fp_build_ = DropShadow_build;
    type->fp_ctor_ = (void*)DropShadow__New2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Effects::Effect*, bool*))DropShadow__get_Active_fn;
    type->fp_ModifyRenderBounds = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**))DropShadow__ModifyRenderBounds_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))DropShadow__OnRender_fn;
    return type;
}

// public DropShadow() :339
void DropShadow__ctor_3_fn(DropShadow* __this)
{
    __this->ctor_3();
}

// public override sealed bool get_Active() :317
void DropShadow__get_Active_fn(DropShadow* __this, bool* __retval)
{
    uStackFrame __("Fuse.Effects.DropShadow", "get_Active()");
    return *__retval = __this->Color().W > 0.0f, void();
}

// public float get_Angle() :219
void DropShadow__get_Angle_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Angle();
}

// public void set_Angle(float value) :220
void DropShadow__set_Angle_fn(DropShadow* __this, float* value)
{
    __this->Angle(*value);
}

// public float4 get_Color() :288
void DropShadow__get_Color_fn(DropShadow* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :292
void DropShadow__set_Color_fn(DropShadow* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float get_Distance() :238
void DropShadow__get_Distance_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public void set_Distance(float value) :239
void DropShadow__set_Distance_fn(DropShadow* __this, float* value)
{
    __this->Distance(*value);
}

// public override sealed Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds) :309
void DropShadow__ModifyRenderBounds_fn(DropShadow* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Effects.DropShadow", "ModifyRenderBounds(Fuse.VisualBounds)");
    ::g::Fuse::VisualBounds* r = uPtr(uPtr(inBounds)->InflateXY(__this->Padding()))->Translate(::g::Uno::Float3__New4(__this->Offset(), 0.0f));
    return *__retval = inBounds->Merge(r, NULL), void();
}

// public DropShadow New() :339
void DropShadow__New2_fn(DropShadow** __retval)
{
    *__retval = DropShadow::New2();
}

// private float2 get_Offset() :256
void DropShadow__get_Offset_fn(DropShadow* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Offset();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :323
void DropShadow__OnRender_fn(DropShadow* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    uStackFrame __("Fuse.Effects.DropShadow", "OnRender(Fuse.DrawContext,Uno.Rect)");
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* temp = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__New1(__this->Padding()));

    if (temp == NULL)
        return;

    ::g::Uno::Graphics::Framebuffer* blur = uPtr(::g::Fuse::Effects::EffectHelpers::Instance())->Blur(uPtr(temp)->ColorBuffer(), dc, __this->Sigma() * uPtr(__this->Element())->AbsoluteZoom());
    float spreadScale = ::g::Uno::Math::Pow1(1.0f / ::g::Uno::Math::Max1(1.0f - __this->Spread(), 1e-10f), 2.0f);
    uPtr(DropShadow__Blitter::Instance())->Blit(dc, __this->Element(), elementRect_, __this->Padding(), temp->Size(), uPtr(blur)->ColorBuffer(), spreadScale, __this->Offset(), __this->Color());
    ::g::Fuse::FramebufferPool::Release(blur);
    ::g::Fuse::FramebufferPool::Release(temp);
}

// internal float get_Padding() :307
void DropShadow__get_Padding_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Padding();
}

// private float get_Radius() :214
void DropShadow__get_Radius_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// internal float get_Sigma() :306
void DropShadow__get_Sigma_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Sigma();
}

// public float get_Size() :198
void DropShadow__get_Size_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float value) :199
void DropShadow__set_Size_fn(DropShadow* __this, float* value)
{
    __this->Size(*value);
}

// public float get_Spread() :267
void DropShadow__get_Spread_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Spread();
}

// public void set_Spread(float value) :268
void DropShadow__set_Spread_fn(DropShadow* __this, float* value)
{
    __this->Spread(*value);
}

// public DropShadow() [instance] :339
void DropShadow::ctor_3()
{
    uStackFrame __("Fuse.Effects.DropShadow", ".ctor()");
    ctor_2(0);
    Size(5.0f);
    Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.35f));
    Angle(90.0f);
    Distance(3.0f);
}

// public float get_Angle() [instance] :219
float DropShadow::Angle()
{
    uStackFrame __("Fuse.Effects.DropShadow", "get_Angle()");
    return _angle;
}

// public void set_Angle(float value) [instance] :220
void DropShadow::Angle(float value)
{
    uStackFrame __("Fuse.Effects.DropShadow", "set_Angle(float)");

    if (_angle != value)
    {
        _angle = value;

        if (Active())
        {
            OnRenderingChanged();
            OnRenderBoundsChanged();
        }
    }
}

// public float4 get_Color() [instance] :288
::g::Uno::Float4 DropShadow::Color()
{
    uStackFrame __("Fuse.Effects.DropShadow", "get_Color()");
    return _color;
}

// public void set_Color(float4 value) [instance] :292
void DropShadow::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Effects.DropShadow", "set_Color(float4)");

    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        bool wasActive = Active();
        _color = value;

        if (wasActive || Active())
            OnRenderingChanged();
    }
}

// public float get_Distance() [instance] :238
float DropShadow::Distance()
{
    uStackFrame __("Fuse.Effects.DropShadow", "get_Distance()");
    return _distance;
}

// public void set_Distance(float value) [instance] :239
void DropShadow::Distance(float value)
{
    uStackFrame __("Fuse.Effects.DropShadow", "set_Distance(float)");

    if (_distance != value)
    {
        _distance = value;

        if (Active())
        {
            OnRenderingChanged();
            OnRenderBoundsChanged();
        }
    }
}

// private float2 get_Offset() [instance] :256
::g::Uno::Float2 DropShadow::Offset()
{
    uStackFrame __("Fuse.Effects.DropShadow", "get_Offset()");
    float th = Angle() * 0.0174532924f;
    return ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__New2(-::g::Uno::Math::Cos1(th), ::g::Uno::Math::Sin1(th)), Distance());
}

// internal float get_Padding() [instance] :307
float DropShadow::Padding()
{
    uStackFrame __("Fuse.Effects.DropShadow", "get_Padding()");
    return ::g::Uno::Math::Ceil1((Sigma() * 3.0f) * uPtr(Element())->AbsoluteZoom()) / uPtr(Element())->AbsoluteZoom();
}

// private float get_Radius() [instance] :214
float DropShadow::Radius()
{
    uStackFrame __("Fuse.Effects.DropShadow", "get_Radius()");
    return Size() / 2.0f;
}

// internal float get_Sigma() [instance] :306
float DropShadow::Sigma()
{
    uStackFrame __("Fuse.Effects.DropShadow", "get_Sigma()");
    return ::g::Uno::Math::Max1(Radius(), 1e-05f);
}

// public float get_Size() [instance] :198
float DropShadow::Size()
{
    uStackFrame __("Fuse.Effects.DropShadow", "get_Size()");
    return _size;
}

// public void set_Size(float value) [instance] :199
void DropShadow::Size(float value)
{
    uStackFrame __("Fuse.Effects.DropShadow", "set_Size(float)");

    if (_size != value)
    {
        _size = value;

        if (Active())
        {
            OnRenderingChanged();
            OnRenderBoundsChanged();
        }
    }
}

// public float get_Spread() [instance] :267
float DropShadow::Spread()
{
    uStackFrame __("Fuse.Effects.DropShadow", "get_Spread()");
    return _spread;
}

// public void set_Spread(float value) [instance] :268
void DropShadow::Spread(float value)
{
    uStackFrame __("Fuse.Effects.DropShadow", "set_Spread(float)");
    value = ::g::Uno::Math::Clamp1(value, 0.0f, 1.0f);

    if (_spread != value)
    {
        bool wasActive = Active();
        _spread = value;

        if (wasActive || Active())
            OnRenderingChanged();
    }
}

// public DropShadow New() [static] :339
DropShadow* DropShadow::New2()
{
    DropShadow* obj1 = (DropShadow*)uNew(DropShadow_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Effects/$.uno
// -----------------------------------------------------------------

// public abstract class Effect :18
// {
static void Effect_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(Effect_typeof());
    type->SetFields(1,
        ::g::Fuse::Effects::EffectType_typeof(), offsetof(::g::Fuse::Effects::Effect, _effectType), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Effects::Effect, _isRooted), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Effects::Effect, _Element), 0,
        ::g::Uno::Action1_typeof()->MakeType(Effect_typeof()), offsetof(::g::Fuse::Effects::Effect, RenderBoundsChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(Effect_typeof()), offsetof(::g::Fuse::Effects::Effect, RenderingChanged1), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Active", NULL, NULL, offsetof(Effect_type, fp_get_Active), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Element", NULL, (void*)Effect__get_Element_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("ModifyRenderBounds", NULL, NULL, offsetof(Effect_type, fp_ModifyRenderBounds), false, ::g::Fuse::VisualBounds_typeof(), 1, ::g::Fuse::VisualBounds_typeof()),
        new uFunction("OnRooted", NULL, (void*)Effect__OnRooted_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("OnUnrooted", NULL, (void*)Effect__OnUnrooted_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Render", NULL, NULL, offsetof(Effect_type, fp_Render), false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()),
        new uFunction("add_RenderBoundsChanged", NULL, (void*)Effect__add_RenderBoundsChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(Effect_typeof())),
        new uFunction("remove_RenderBoundsChanged", NULL, (void*)Effect__remove_RenderBoundsChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(Effect_typeof())),
        new uFunction("add_RenderingChanged", NULL, (void*)Effect__add_RenderingChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(Effect_typeof())),
        new uFunction("remove_RenderingChanged", NULL, (void*)Effect__remove_RenderingChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(Effect_typeof())),
        new uFunction("get_Type", NULL, (void*)Effect__get_Type_fn, 0, false, ::g::Fuse::Effects::EffectType_typeof(), 0));
}

Effect_type* Effect_typeof()
{
    static uSStrong<Effect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Effect);
    options.TypeSize = sizeof(Effect_type);
    type = (Effect_type*)uClassType::New("Fuse.Effects.Effect", options);
    type->SetBase(::g::Uno::UX::PropertyObject_typeof());
    type->fp_build_ = Effect_build;
    type->fp_get_Active = Effect__get_Active_fn;
    type->fp_ModifyRenderBounds = Effect__ModifyRenderBounds_fn;
    return type;
}

// protected Effect(Fuse.Effects.EffectType effectType) :23
void Effect__ctor_1_fn(Effect* __this, int* effectType)
{
    __this->ctor_1(*effectType);
}

// public virtual bool get_Active() :86
void Effect__get_Active_fn(Effect* __this, bool* __retval)
{
    uStackFrame __("Fuse.Effects.Effect", "get_Active()");
    return *__retval = true, void();
}

// internal void Added(Fuse.Elements.Element elm) :52
void Effect__Added_fn(Effect* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->Added(elm);
}

// public generated Fuse.Elements.Element get_Element() :66
void Effect__get_Element_fn(Effect* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Element();
}

// private generated void set_Element(Fuse.Elements.Element value) :66
void Effect__set_Element_fn(Effect* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Element(value);
}

// public virtual Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds) :89
void Effect__ModifyRenderBounds_fn(Effect* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Effects.Effect", "ModifyRenderBounds(Fuse.VisualBounds)");
    return *__retval = inBounds, void();
}

// protected void OnRenderBoundsChanged() :79
void Effect__OnRenderBoundsChanged_fn(Effect* __this)
{
    __this->OnRenderBoundsChanged();
}

// protected void OnRenderingChanged() :71
void Effect__OnRenderingChanged_fn(Effect* __this)
{
    __this->OnRenderingChanged();
}

// public void OnRooted() :28
void Effect__OnRooted_fn(Effect* __this)
{
    __this->OnRooted();
}

// public void OnUnrooted() :29
void Effect__OnUnrooted_fn(Effect* __this)
{
    __this->OnUnrooted();
}

// internal void Removed(Fuse.Elements.Element elm) :59
void Effect__Removed_fn(Effect* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->Removed(elm);
}

// public generated void add_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value) :77
void Effect__add_RenderBoundsChanged_fn(Effect* __this, uDelegate* value)
{
    __this->add_RenderBoundsChanged(value);
}

// public generated void remove_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value) :77
void Effect__remove_RenderBoundsChanged_fn(Effect* __this, uDelegate* value)
{
    __this->remove_RenderBoundsChanged(value);
}

// public generated void add_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value) :69
void Effect__add_RenderingChanged_fn(Effect* __this, uDelegate* value)
{
    __this->add_RenderingChanged(value);
}

// public generated void remove_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value) :69
void Effect__remove_RenderingChanged_fn(Effect* __this, uDelegate* value)
{
    __this->remove_RenderingChanged(value);
}

// internal void Rooted() :32
void Effect__Rooted_fn(Effect* __this)
{
    __this->Rooted();
}

// public Fuse.Effects.EffectType get_Type() :21
void Effect__get_Type_fn(Effect* __this, int* __retval)
{
    *__retval = __this->Type();
}

// internal void Unrooted() :42
void Effect__Unrooted_fn(Effect* __this)
{
    __this->Unrooted();
}

// protected Effect(Fuse.Effects.EffectType effectType) [instance] :23
void Effect::ctor_1(int effectType)
{
    uStackFrame __("Fuse.Effects.Effect", ".ctor(Fuse.Effects.EffectType)");
    ctor_();
    _effectType = effectType;
}

// internal void Added(Fuse.Elements.Element elm) [instance] :52
void Effect::Added(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Effects.Effect", "Added(Fuse.Elements.Element)");
    Element(elm);

    if (uPtr(elm)->IsRootingCompleted())
        Rooted();
}

// public generated Fuse.Elements.Element get_Element() [instance] :66
::g::Fuse::Elements::Element* Effect::Element()
{
    uStackFrame __("Fuse.Effects.Effect", "get_Element()");
    return _Element;
}

// private generated void set_Element(Fuse.Elements.Element value) [instance] :66
void Effect::Element(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Effects.Effect", "set_Element(Fuse.Elements.Element)");
    _Element = value;
}

// protected void OnRenderBoundsChanged() [instance] :79
void Effect::OnRenderBoundsChanged()
{
    uStackFrame __("Fuse.Effects.Effect", "OnRenderBoundsChanged()");

    if (::g::Uno::Delegate::op_Inequality(RenderBoundsChanged1, NULL))
        uPtr(RenderBoundsChanged1)->InvokeVoid(this);
}

// protected void OnRenderingChanged() [instance] :71
void Effect::OnRenderingChanged()
{
    uStackFrame __("Fuse.Effects.Effect", "OnRenderingChanged()");

    if (::g::Uno::Delegate::op_Inequality(RenderingChanged1, NULL))
        uPtr(RenderingChanged1)->InvokeVoid(this);
}

// public void OnRooted() [instance] :28
void Effect::OnRooted()
{
}

// public void OnUnrooted() [instance] :29
void Effect::OnUnrooted()
{
}

// internal void Removed(Fuse.Elements.Element elm) [instance] :59
void Effect::Removed(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Effects.Effect", "Removed(Fuse.Elements.Element)");

    if (uPtr(elm)->IsRootingCompleted())
        Unrooted();

    Element(NULL);
}

// public generated void add_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value) [instance] :77
void Effect::add_RenderBoundsChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Effects.Effect", "add_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect>)");
    RenderBoundsChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RenderBoundsChanged1, value), ::TYPES[4/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public generated void remove_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value) [instance] :77
void Effect::remove_RenderBoundsChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Effects.Effect", "remove_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect>)");
    RenderBoundsChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RenderBoundsChanged1, value), ::TYPES[4/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public generated void add_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value) [instance] :69
void Effect::add_RenderingChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Effects.Effect", "add_RenderingChanged(Uno.Action<Fuse.Effects.Effect>)");
    RenderingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RenderingChanged1, value), ::TYPES[4/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public generated void remove_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value) [instance] :69
void Effect::remove_RenderingChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Effects.Effect", "remove_RenderingChanged(Uno.Action<Fuse.Effects.Effect>)");
    RenderingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RenderingChanged1, value), ::TYPES[4/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// internal void Rooted() [instance] :32
void Effect::Rooted()
{
    uStackFrame __("Fuse.Effects.Effect", "Rooted()");

    if (_isRooted)
        return;

    _isRooted = true;
    OnRooted();
    uPtr(Element())->AddDrawCost(3.0);
}

// public Fuse.Effects.EffectType get_Type() [instance] :21
int Effect::Type()
{
    uStackFrame __("Fuse.Effects.Effect", "get_Type()");
    return _effectType;
}

// internal void Unrooted() [instance] :42
void Effect::Unrooted()
{
    uStackFrame __("Fuse.Effects.Effect", "Unrooted()");
    uPtr(Element())->RemoveDrawCost(3.0);

    if (!_isRooted)
        return;

    _isRooted = false;
    OnUnrooted();
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.29.22/$.uno
// --------------------------------------------------------

// internal partial sealed class EffectHelpers :385
// {
static void EffectHelpers_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[6] = ::g::Uno::UShort_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, _draw_3ba56f48), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, _draw_65bcd644), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, _draw_7fdf2489), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, _draw_d6145401), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, GaussianBlurSeparable_VertexData_7fdf2489_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, GaussianBlurSeparable_VertexData_7fdf2489_2_5_3), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, ResampleBilinear_VertexData_d6145401_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, ResampleBilinear_VertexData_d6145401_2_5_3), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, ResampleGaussian5tap_VertexData_65bcd644_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, ResampleGaussian5tap_VertexData_65bcd644_2_5_3), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, ResampleGaussian9tap_VertexData_3ba56f48_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::EffectHelpers, ResampleGaussian9tap_VertexData_3ba56f48_2_5_3), 0,
        EffectHelpers_typeof(), (uintptr_t)&::g::Fuse::Effects::EffectHelpers::_instance_, uFieldFlagsStatic);
}

uType* EffectHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(EffectHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Effects.EffectHelpers", options);
    type->fp_build_ = EffectHelpers_build;
    type->fp_ctor_ = (void*)EffectHelpers__New1_fn;
    return type;
}

// public generated EffectHelpers() :385
void EffectHelpers__ctor__fn(EffectHelpers* __this)
{
    __this->ctor_();
}

// public framebuffer Blur(texture2D original, Fuse.DrawContext dc, float sigma) :393
void EffectHelpers__Blur_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float* sigma, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Blur(original, dc, *sigma);
}

// private framebuffer BlurHorizontal(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples) :532
void EffectHelpers__BlurHorizontal_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int* samples, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->BlurHorizontal(dc, *size, tex, *sigma, *samples);
}

// private framebuffer BlurVertical(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples) :544
void EffectHelpers__BlurVertical_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int* samples, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->BlurVertical(dc, *size, tex, *sigma, *samples);
}

// private void GaussianBlurSeparable(texture2D tex, float2 dir, float sigma, int samples) :556
void EffectHelpers__GaussianBlurSeparable_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2* dir, float* sigma, int* samples)
{
    __this->GaussianBlurSeparable(tex, *dir, *sigma, *samples);
}

// private generated void init_DrawCalls() :385
void EffectHelpers__init_DrawCalls_fn(EffectHelpers* __this)
{
    __this->init_DrawCalls();
}

// public static Fuse.Effects.EffectHelpers get_Instance() :390
void EffectHelpers__get_Instance_fn(EffectHelpers** __retval)
{
    *__retval = EffectHelpers::Instance();
}

// public generated EffectHelpers New() :385
void EffectHelpers__New1_fn(EffectHelpers** __retval)
{
    *__retval = EffectHelpers::New1();
}

// private framebuffer ResampleGaussian5tap(Fuse.DrawContext dc, texture2D tex, int2 size) :443
void EffectHelpers__ResampleGaussian5tap_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2* size, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->ResampleGaussian5tap(dc, tex, *size);
}

uSStrong<EffectHelpers*> EffectHelpers::_instance_;

// public generated EffectHelpers() [instance] :385
void EffectHelpers::ctor_()
{
    uStackFrame __("Fuse.Effects.EffectHelpers", ".ctor()");
    init_DrawCalls();
}

// public framebuffer Blur(texture2D original, Fuse.DrawContext dc, float sigma) [instance] :393
::g::Uno::Graphics::Framebuffer* EffectHelpers::Blur(::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float sigma)
{
    uStackFrame __("Fuse.Effects.EffectHelpers", "Blur(texture2D,Fuse.DrawContext,float)");
    int maxSamples = 3;
    ::g::Uno::Graphics::Texture2D* src = original;
    ::g::Uno::Graphics::Framebuffer* fb = NULL;
    ::g::Uno::Float2 sigmas = ::g::Uno::Float2__New1(sigma);

    while (((3.0f * sigmas.X) > (float)maxSamples) && ((3.0f * sigmas.Y) > (float)maxSamples))
    {
        ::g::Uno::Int2 newSize = ::g::Uno::Int2__New2(::g::Uno::Math::Max8(uPtr(src)->Size().X / 2, 1), ::g::Uno::Math::Max8(uPtr(src)->Size().Y / 2, 1));
        ::g::Uno::Graphics::Framebuffer* newFb = ResampleGaussian5tap(dc, src, newSize);

        if (fb != NULL)
            ::g::Fuse::FramebufferPool::Release(fb);

        sigmas = ::g::Uno::Math::Sqrt2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply2(sigmas, sigmas), 1.0f));
        sigmas = ::g::Uno::Float2__op_Multiply2(sigmas, ::g::Uno::Float2__op_Division2(::g::Uno::Float2__New2((float)newSize.X, (float)newSize.Y), ::g::Uno::Float2__op_Implicit1(src->Size())));
        fb = newFb;
        src = uPtr(newFb)->ColorBuffer();
        maxSamples = maxSamples * 2;
    }

    ::g::Uno::Int2 samples = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Max2(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply(3.0f, sigmas)), 1.0f));
    ::g::Uno::Graphics::Framebuffer* tmp = BlurHorizontal(dc, uPtr(src)->Size(), src, sigmas.X, samples.X);

    if (fb != NULL)
        ::g::Fuse::FramebufferPool::Release(fb);

    ::g::Uno::Graphics::Framebuffer* blur = BlurVertical(dc, uPtr(uPtr(tmp)->ColorBuffer())->Size(), uPtr(tmp)->ColorBuffer(), sigmas.Y, samples.Y);
    ::g::Fuse::FramebufferPool::Release(tmp);
    return blur;
}

// private framebuffer BlurHorizontal(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples) [instance] :532
::g::Uno::Graphics::Framebuffer* EffectHelpers::BlurHorizontal(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int samples)
{
    uStackFrame __("Fuse.Effects.EffectHelpers", "BlurHorizontal(Fuse.DrawContext,int2,texture2D,float,int)");
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
    uPtr(dc)->PushRenderTarget(fb);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    GaussianBlurSeparable(tex, ::g::Uno::Float2__New2(1.0f, 0.0f), sigma, samples);
    dc->PopRenderTarget();
    return fb;
}

// private framebuffer BlurVertical(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples) [instance] :544
::g::Uno::Graphics::Framebuffer* EffectHelpers::BlurVertical(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int samples)
{
    uStackFrame __("Fuse.Effects.EffectHelpers", "BlurVertical(Fuse.DrawContext,int2,texture2D,float,int)");
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
    uPtr(dc)->PushRenderTarget(fb);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    GaussianBlurSeparable(tex, ::g::Uno::Float2__New2(0.0f, 1.0f), sigma, samples);
    dc->PopRenderTarget();
    return fb;
}

// private void GaussianBlurSeparable(texture2D tex, float2 dir, float sigma, int samples) [instance] :556
void EffectHelpers::GaussianBlurSeparable(::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2 dir, float sigma, int samples)
{
    uStackFrame __("Fuse.Effects.EffectHelpers", "GaussianBlurSeparable(texture2D,float2,float,int)");
    float sigmaSquared = sigma * sigma;
    float scale = 1.0f / (float)::g::Uno::Math::Sqrt(6.2831853071795862 * (double)sigmaSquared);
    uArray* weights = uArray::New(::TYPES[5/*float[]*/], 1 + samples);
    uArray* offsets = uArray::New(::TYPES[2/*float2[]*/], samples);
    float total = weights->Item<float>(0) = scale;

    for (int i = 0; i < samples; ++i)
    {
        int offset1 = (i * 2) + 1;
        int offset2 = (i * 2) + 2;
        float weight1 = scale * ::g::Uno::Math::Exp1((float)(-offset1 * offset1) / (2.0f * sigmaSquared));
        float weight2 = scale * ::g::Uno::Math::Exp1((float)(-offset2 * offset2) / (2.0f * sigmaSquared));
        float weight = weight1 + weight2;
        float offset = (((float)offset1 * weight1) + ((float)offset2 * weight2)) / weight;
        uPtr(weights)->Item<float>(i + 1) = weight;
        uPtr(offsets)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__op_Multiply2(dir, ::g::Uno::Float2__New2(offset / (float)uPtr(tex)->Size().X, offset / (float)uPtr(tex)->Size().Y));
        total = total + (2.0f * weight);
    }

    for (int i1 = 0; i1 < (samples + 1); ++i1)
        weights->Item<float>(i1) = weights->Item<float>(i1) / total;

    _draw_7fdf2489.DepthTestEnabled(false);
    _draw_7fdf2489.Const1(0, uPtr(weights)->Length());
    _draw_7fdf2489.Const1(1, samples);
    _draw_7fdf2489.Const1(2, uPtr(offsets)->Length());
    _draw_7fdf2489.Use();
    _draw_7fdf2489.Attrib1(3, 2, GaussianBlurSeparable_VertexData_7fdf2489_2_5_3, 8, 0);
    _draw_7fdf2489.Uniform1(4, weights);
    _draw_7fdf2489.Uniform3(5, offsets);
    _draw_7fdf2489.Sampler3(6, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_7fdf2489.Draw(6, 2, GaussianBlurSeparable_VertexData_7fdf2489_2_5_2);
}

// private generated void init_DrawCalls() [instance] :385
void EffectHelpers::init_DrawCalls()
{
    uStackFrame __("Fuse.Effects.EffectHelpers", "init_DrawCalls()");
    uArray* Vertices_d6145401_2_2_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    uArray* Indices_d6145401_2_3_1 = uArray::Init<int>(::TYPES[6/*ushort[]*/], 6, 0, 1, 2, 2, 3, 0);
    ResampleBilinear_VertexData_d6145401_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(Indices_d6145401_2_3_1), 0);
    ResampleBilinear_VertexData_d6145401_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_d6145401_2_2_0), 0);
    ResampleGaussian5tap_VertexData_65bcd644_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(Indices_d6145401_2_3_1), 0);
    ResampleGaussian5tap_VertexData_65bcd644_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_d6145401_2_2_0), 0);
    ResampleGaussian9tap_VertexData_3ba56f48_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(Indices_d6145401_2_3_1), 0);
    ResampleGaussian9tap_VertexData_3ba56f48_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_d6145401_2_2_0), 0);
    GaussianBlurSeparable_VertexData_7fdf2489_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(Indices_d6145401_2_3_1), 0);
    GaussianBlurSeparable_VertexData_7fdf2489_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_d6145401_2_2_0), 0);
    _draw_d6145401 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers19f0dc38());
    _draw_65bcd644 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers36c238d5());
    _draw_3ba56f48 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers4273de51());
    _draw_7fdf2489 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpersde6318b0());
}

// private framebuffer ResampleGaussian5tap(Fuse.DrawContext dc, texture2D tex, int2 size) [instance] :443
::g::Uno::Graphics::Framebuffer* EffectHelpers::ResampleGaussian5tap(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2 size)
{
    uStackFrame __("Fuse.Effects.EffectHelpers", "ResampleGaussian5tap(Fuse.DrawContext,texture2D,int2)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
    uPtr(dc)->PushRenderTarget(fb);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    ::g::Uno::Float2 diagonalOffsets = ::g::Uno::Float2__New2(0.384289622f, 1.20486164f);
    ::g::Uno::Int2 texSize = uPtr(tex)->Size();
    float centerWeight = 0.162102818f;
    float diagonalWeight = 0.20850347f;
    _draw_65bcd644.DepthTestEnabled(false);
    _draw_65bcd644.Use();
    _draw_65bcd644.Attrib1(0, 2, ResampleGaussian5tap_VertexData_65bcd644_2_5_3, 8, 0);
    _draw_65bcd644.Uniform(1, centerWeight);
    _draw_65bcd644.Uniform2(2, ::g::Uno::Float2__op_Division2((ind1 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_65bcd644.Uniform(3, diagonalWeight);
    _draw_65bcd644.Uniform2(4, ::g::Uno::Float2__op_Division2((ind2 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind2.W, ind2.X)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_65bcd644.Uniform2(5, ::g::Uno::Float2__op_Division2((ind3 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind3.Z, ind3.W)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_65bcd644.Uniform2(6, ::g::Uno::Float2__op_Division2((ind4 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind4.Y, ind4.Z)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_65bcd644.Sampler3(7, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_65bcd644.Draw(6, 2, ResampleGaussian5tap_VertexData_65bcd644_2_5_2);
    dc->PopRenderTarget();
    return fb;
}

// public generated EffectHelpers New() [static] :385
EffectHelpers* EffectHelpers::New1()
{
    EffectHelpers* obj12 = (EffectHelpers*)uNew(EffectHelpers_typeof());
    obj12->ctor_();
    return obj12;
}

// public static Fuse.Effects.EffectHelpers get_Instance() [static] :390
EffectHelpers* EffectHelpers::Instance()
{
    uStackFrame __("Fuse.Effects.EffectHelpers", "get_Instance()");
    EffectHelpers* ind11 = EffectHelpers::_instance_;
    return (ind11 != NULL) ? ind11 : (EffectHelpers*)(EffectHelpers::_instance_ = EffectHelpers::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Effects/$.uno
// -----------------------------------------------------------------

// public enum EffectType :11
uEnumType* EffectType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Effects.EffectType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Underlay", 0LL,
        "Composition", 1LL,
        "Overlay", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Effects/0.29.22/$.uno
// --------------------------------------------------------

// public sealed class Halftone :616
// {
static void Halftone_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[0] = ::g::Fuse::IViewport_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(6,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::Halftone, _dotTint), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::Halftone, _draw_57b2c97e), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::Halftone, _intensity), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::Halftone, _paperTint), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::Halftone, _smoothness), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Effects::Halftone, _spacing), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Effects::Halftone, OnRender_LocalTransform_57b2c97e_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Effects::Halftone, OnRender_LocalTransform_57b2c97e_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::Halftone, OnRender_VertexData_57b2c97e_7_2_1), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_DotTint", NULL, (void*)Halftone__get_DotTint_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DotTint", NULL, (void*)Halftone__set_DotTint_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Intensity", NULL, (void*)Halftone__get_Intensity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Intensity", NULL, (void*)Halftone__set_Intensity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Halftone__New2_fn, 0, true, Halftone_typeof(), 0),
        new uFunction("get_PaperTint", NULL, (void*)Halftone__get_PaperTint_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_PaperTint", NULL, (void*)Halftone__set_PaperTint_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Smoothness", NULL, (void*)Halftone__get_Smoothness_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Smoothness", NULL, (void*)Halftone__set_Smoothness_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Spacing", NULL, (void*)Halftone__get_Spacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Spacing", NULL, (void*)Halftone__set_Spacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Effects::BasicEffect_type* Halftone_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(Halftone);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Halftone", options);
    type->SetBase(::g::Fuse::Effects::BasicEffect_typeof());
    type->fp_build_ = Halftone_build;
    type->fp_ctor_ = (void*)Halftone__New2_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Halftone__OnRender_fn;
    return type;
}

// public Halftone() :618
void Halftone__ctor_3_fn(Halftone* __this)
{
    __this->ctor_3();
}

// public float get_DotTint() :667
void Halftone__get_DotTint_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->DotTint();
}

// public void set_DotTint(float value) :668
void Halftone__set_DotTint_fn(Halftone* __this, float* value)
{
    __this->DotTint(*value);
}

// private generated void init_DrawCalls() :616
void Halftone__init_DrawCalls_fn(Halftone* __this)
{
    __this->init_DrawCalls();
}

// public float get_Intensity() :639
void Halftone__get_Intensity_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->Intensity();
}

// public void set_Intensity(float value) :640
void Halftone__set_Intensity_fn(Halftone* __this, float* value)
{
    __this->Intensity(*value);
}

// public Halftone New() :618
void Halftone__New2_fn(Halftone** __retval)
{
    *__retval = Halftone::New2();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :692
void Halftone__OnRender_fn(Halftone* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    uStackFrame __("Fuse.Effects.Halftone", "OnRender(Fuse.DrawContext,Uno.Rect)");
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == NULL)
        return;

    float tSpacing = __this->Spacing();
    float angle = 0.7853982f;
    ::g::Uno::Float2x2 rot = ::g::Uno::Float2x2__New1(::g::Uno::Math::Cos1(angle), ::g::Uno::Math::Sin1(angle), -::g::Uno::Math::Sin1(angle), ::g::Uno::Math::Cos1(angle));
    ::g::Uno::Float2x2 rotI = ::g::Uno::Float2x2__New1(::g::Uno::Math::Cos1(-angle), ::g::Uno::Math::Sin1(-angle), -::g::Uno::Math::Sin1(-angle), ::g::Uno::Math::Cos1(-angle));
    ::g::Uno::Float4x4 LocalTransform_57b2c97e_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_57b2c97e_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_57b2c97e_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
    __this->_draw_57b2c97e.BlendEnabled(true);
    __this->_draw_57b2c97e.DepthTestEnabled(false);
    __this->_draw_57b2c97e.CullFace(uPtr(dc)->CullFace());
    __this->_draw_57b2c97e.BlendSrcRgb(2);
    __this->_draw_57b2c97e.BlendDstRgb(3);
    __this->_draw_57b2c97e.BlendDstAlpha(3);
    __this->_draw_57b2c97e.Use();
    __this->_draw_57b2c97e.Attrib1(0, 2, __this->OnRender_VertexData_57b2c97e_7_2_1, 8, 0);
    __this->_draw_57b2c97e.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IViewport*/])));
    __this->_draw_57b2c97e.Uniform(2, __this->PaperTint());
    __this->_draw_57b2c97e.Uniform(3, __this->DotTint());
    __this->_draw_57b2c97e.Uniform(4, tSpacing);
    __this->_draw_57b2c97e.Uniform(5, __this->Intensity());
    __this->_draw_57b2c97e.Uniform2(6, elementRect_.Size());
    __this->_draw_57b2c97e.Uniform2(7, elementRect_.Minimum());
    __this->_draw_57b2c97e.Uniform4(8, rot);
    __this->_draw_57b2c97e.Uniform4(9, rotI);
    __this->_draw_57b2c97e.Uniform(10, dc->ViewportPixelsPerPoint());
    __this->_draw_57b2c97e.Uniform(11, 1.0f / __this->Smoothness());
    __this->_draw_57b2c97e.Uniform12(12, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_57b2c97e_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_57b2c97e_4_9_4);
    __this->_draw_57b2c97e.Sampler2(13, uPtr(original)->ColorBuffer());
    __this->_draw_57b2c97e.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(original);
}

// public float get_PaperTint() :681
void Halftone__get_PaperTint_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->PaperTint();
}

// public void set_PaperTint(float value) :682
void Halftone__set_PaperTint_fn(Halftone* __this, float* value)
{
    __this->PaperTint(*value);
}

// public float get_Smoothness() :653
void Halftone__get_Smoothness_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->Smoothness();
}

// public void set_Smoothness(float value) :654
void Halftone__set_Smoothness_fn(Halftone* __this, float* value)
{
    __this->Smoothness(*value);
}

// public float get_Spacing() :625
void Halftone__get_Spacing_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->Spacing();
}

// public void set_Spacing(float value) :626
void Halftone__set_Spacing_fn(Halftone* __this, float* value)
{
    __this->Spacing(*value);
}

// public Halftone() [instance] :618
void Halftone::ctor_3()
{
    uStackFrame __("Fuse.Effects.Halftone", ".ctor()");
    _spacing = 5.0f;
    _intensity = 1.0f;
    _smoothness = 2.0f;
    _dotTint = 0.5f;
    _paperTint = 0.2f;
    ctor_2(1);
    init_DrawCalls();
}

// public float get_DotTint() [instance] :667
float Halftone::DotTint()
{
    uStackFrame __("Fuse.Effects.Halftone", "get_DotTint()");
    return _dotTint;
}

// public void set_DotTint(float value) [instance] :668
void Halftone::DotTint(float value)
{
    uStackFrame __("Fuse.Effects.Halftone", "set_DotTint(float)");

    if (_dotTint != value)
    {
        _dotTint = value;
        OnRenderingChanged();
    }
}

// private generated void init_DrawCalls() [instance] :616
void Halftone::init_DrawCalls()
{
    uStackFrame __("Fuse.Effects.Halftone", "init_DrawCalls()");
    OnRender_VertexData_57b2c97e_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    OnRender_LocalTransform_57b2c97e_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    OnRender_LocalTransform_57b2c97e_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_57b2c97e = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::Halftoneb6f474d8());
}

// public float get_Intensity() [instance] :639
float Halftone::Intensity()
{
    uStackFrame __("Fuse.Effects.Halftone", "get_Intensity()");
    return _intensity;
}

// public void set_Intensity(float value) [instance] :640
void Halftone::Intensity(float value)
{
    uStackFrame __("Fuse.Effects.Halftone", "set_Intensity(float)");

    if (_intensity != value)
    {
        _intensity = value;
        OnRenderingChanged();
    }
}

// public float get_PaperTint() [instance] :681
float Halftone::PaperTint()
{
    uStackFrame __("Fuse.Effects.Halftone", "get_PaperTint()");
    return _paperTint;
}

// public void set_PaperTint(float value) [instance] :682
void Halftone::PaperTint(float value)
{
    uStackFrame __("Fuse.Effects.Halftone", "set_PaperTint(float)");

    if (_paperTint != value)
    {
        _paperTint = value;
        OnRenderingChanged();
    }
}

// public float get_Smoothness() [instance] :653
float Halftone::Smoothness()
{
    uStackFrame __("Fuse.Effects.Halftone", "get_Smoothness()");
    return _smoothness;
}

// public void set_Smoothness(float value) [instance] :654
void Halftone::Smoothness(float value)
{
    uStackFrame __("Fuse.Effects.Halftone", "set_Smoothness(float)");

    if (_smoothness != value)
    {
        _smoothness = value;
        OnRenderingChanged();
    }
}

// public float get_Spacing() [instance] :625
float Halftone::Spacing()
{
    uStackFrame __("Fuse.Effects.Halftone", "get_Spacing()");
    return _spacing;
}

// public void set_Spacing(float value) [instance] :626
void Halftone::Spacing(float value)
{
    uStackFrame __("Fuse.Effects.Halftone", "set_Spacing(float)");

    if (_spacing != value)
    {
        _spacing = value;
        OnRenderingChanged();
    }
}

// public Halftone New() [static] :618
Halftone* Halftone::New2()
{
    Halftone* obj1 = (Halftone*)uNew(Halftone_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.29.22/$.uno
// --------------------------------------------------------

// public sealed class Mask :754
// {
static void Mask_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Internal::IImageContainerOwner_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[0] = ::g::Fuse::IViewport_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Fuse::Internal::IImageContainerOwner_typeof(), offsetof(Mask_type, interface0));
    type->SetFields(6,
        ::g::Fuse::Internal::ImageContainer_typeof(), offsetof(::g::Fuse::Effects::Mask, _container), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::Mask, _draw_79857885), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::Mask, _draw_7985ece4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Effects::Mask, _draw_79866143), 0,
        Mask__MaskMode_typeof(), offsetof(::g::Fuse::Effects::Mask, _mode), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Effects::Mask, OnRender_LocalTransform_79857885_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Effects::Mask, OnRender_LocalTransform_79857885_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::Mask, OnRender_VertexData_79857885_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::Mask, OnRender_VertexData_7985ece4_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Effects::Mask, OnRender_VertexData_79866143_7_2_1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_File", NULL, (void*)Mask__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)Mask__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_Mode", NULL, (void*)Mask__get_Mode_fn, 0, false, Mask__MaskMode_typeof(), 0),
        new uFunction("set_Mode", NULL, (void*)Mask__set_Mode_fn, 0, false, uVoid_typeof(), 1, Mask__MaskMode_typeof()),
        new uFunction(".ctor", NULL, (void*)Mask__New2_fn, 0, true, Mask_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)Mask__get_Source_fn, 0, false, ::g::Fuse::Resources::ImageSource_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)Mask__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::ImageSource_typeof()));
}

Mask_type* Mask_typeof()
{
    static uSStrong<Mask_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mask);
    options.TypeSize = sizeof(Mask_type);
    type = (Mask_type*)uClassType::New("Fuse.Effects.Mask", options);
    type->SetBase(::g::Fuse::Effects::BasicEffect_typeof());
    type->fp_build_ = Mask_build;
    type->fp_ctor_ = (void*)Mask__New2_fn;
    type->fp_ModifyRenderBounds = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**))Mask__ModifyRenderBounds_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Mask__OnRender_fn;
    type->interface0.fp_OnSourceChanged = (void(*)(uObject*))Mask__FuseInternalIImageContainerOwnerOnSourceChanged_fn;
    type->interface0.fp_OnParamChanged = (void(*)(uObject*))Mask__FuseInternalIImageContainerOwnerOnParamChanged_fn;
    type->interface0.fp_OnSizingChanged = (void(*)(uObject*))Mask__FuseInternalIImageContainerOwnerOnSizingChanged_fn;
    return type;
}

// public Mask() :758
void Mask__ctor_3_fn(Mask* __this)
{
    __this->ctor_3();
}

// public Uno.UX.FileSource get_File() :883
void Mask__get_File_fn(Mask* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :884
void Mask__set_File_fn(Mask* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// private void Fuse.Internal.IImageContainerOwner.OnParamChanged() :771
void Mask__FuseInternalIImageContainerOwnerOnParamChanged_fn(Mask* __this)
{
    uStackFrame __("Fuse.Effects.Mask", "Fuse.Internal.IImageContainerOwner.OnParamChanged()");
    __this->OnRenderingChanged();
}

// private void Fuse.Internal.IImageContainerOwner.OnSizingChanged() :776
void Mask__FuseInternalIImageContainerOwnerOnSizingChanged_fn(Mask* __this)
{
    uStackFrame __("Fuse.Effects.Mask", "Fuse.Internal.IImageContainerOwner.OnSizingChanged()");
    __this->OnRenderingChanged();
}

// private void Fuse.Internal.IImageContainerOwner.OnSourceChanged() :766
void Mask__FuseInternalIImageContainerOwnerOnSourceChanged_fn(Mask* __this)
{
    uStackFrame __("Fuse.Effects.Mask", "Fuse.Internal.IImageContainerOwner.OnSourceChanged()");
    __this->OnRenderingChanged();
}

// private generated void init_DrawCalls() :754
void Mask__init_DrawCalls_fn(Mask* __this)
{
    __this->init_DrawCalls();
}

// public Fuse.Effects.Mask.MaskMode get_Mode() :791
void Mask__get_Mode_fn(Mask* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Effects.Mask.MaskMode value) :792
void Mask__set_Mode_fn(Mask* __this, int* value)
{
    __this->Mode(*value);
}

// public override sealed Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds) :802
void Mask__ModifyRenderBounds_fn(Mask* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Effects.Mask", "ModifyRenderBounds(Fuse.VisualBounds)");
    return *__retval = ::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), uPtr(__this->Element())->ActualSize()), void();
}

// public Mask New() :758
void Mask__New2_fn(Mask** __retval)
{
    *__retval = Mask::New2();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :808
void Mask__OnRender_fn(Mask* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    uStackFrame __("Fuse.Effects.Mask", "OnRender(Fuse.DrawContext,Uno.Rect)");
    ::g::Uno::Rect elementRect_ = *elementRect;
    elementRect_ = ::g::Uno::Rect__Intersect(::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), uPtr(__this->Element())->ActualSize()), elementRect_);
    ::g::Uno::Graphics::Texture2D* texture = uPtr(__this->_container)->GetTexture();

    if (texture == NULL)
        return;

    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__New1(0.0f));

    if (original == NULL)
        return;

    switch (__this->_mode)
    {
        case 0:
        {
            ::g::Uno::Float4x4 LocalTransform_79857885_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_79857885_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_79857885_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
            __this->_draw_79857885.BlendEnabled(true);
            __this->_draw_79857885.DepthTestEnabled(false);
            __this->_draw_79857885.CullFace(uPtr(dc)->CullFace());
            __this->_draw_79857885.BlendSrcAlpha(7);
            __this->_draw_79857885.BlendDstRgb(3);
            __this->_draw_79857885.Use();
            __this->_draw_79857885.Attrib1(0, 2, __this->OnRender_VertexData_79857885_7_2_1, 8, 0);
            __this->_draw_79857885.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IViewport*/])));
            __this->_draw_79857885.Uniform12(2, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_79857885_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_79857885_4_9_4);
            __this->_draw_79857885.Sampler2(3, uPtr(original)->ColorBuffer());
            __this->_draw_79857885.Sampler3(4, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_79857885.DrawArrays(6);
            break;
        }
        case 1:
        {
            ::g::Uno::Float4x4 LocalTransform_7985ece4_4_9_2 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_79857885_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_79857885_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
            __this->_draw_7985ece4.BlendEnabled(true);
            __this->_draw_7985ece4.DepthTestEnabled(false);
            __this->_draw_7985ece4.CullFace(uPtr(dc)->CullFace());
            __this->_draw_7985ece4.BlendSrcAlpha(7);
            __this->_draw_7985ece4.BlendDstRgb(3);
            __this->_draw_7985ece4.Use();
            __this->_draw_7985ece4.Attrib1(0, 2, __this->OnRender_VertexData_7985ece4_7_2_1, 8, 0);
            __this->_draw_7985ece4.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IViewport*/])));
            __this->_draw_7985ece4.Uniform12(2, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_7985ece4_4_9_2, uPtr(__this->Element())->WorldTransform()) : LocalTransform_7985ece4_4_9_2);
            __this->_draw_7985ece4.Sampler2(3, uPtr(original)->ColorBuffer());
            __this->_draw_7985ece4.Sampler3(4, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_7985ece4.DrawArrays(6);
            break;
        }
        case 2:
        {
            ::g::Uno::Float4x4 LocalTransform_79866143_4_9_2 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_79857885_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_79857885_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
            __this->_draw_79866143.BlendEnabled(true);
            __this->_draw_79866143.DepthTestEnabled(false);
            __this->_draw_79866143.CullFace(uPtr(dc)->CullFace());
            __this->_draw_79866143.BlendSrcAlpha(7);
            __this->_draw_79866143.BlendDstRgb(3);
            __this->_draw_79866143.Use();
            __this->_draw_79866143.Attrib1(0, 2, __this->OnRender_VertexData_79866143_7_2_1, 8, 0);
            __this->_draw_79866143.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IViewport*/])));
            __this->_draw_79866143.Uniform12(2, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_79866143_4_9_2, uPtr(__this->Element())->WorldTransform()) : LocalTransform_79866143_4_9_2);
            __this->_draw_79866143.Sampler2(3, uPtr(original)->ColorBuffer());
            __this->_draw_79866143.Sampler3(4, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_79866143.DrawArrays(6);
            break;
        }
    }

    ::g::Fuse::FramebufferPool::Release(original);
}

// public Fuse.Resources.ImageSource get_Source() :890
void Mask__get_Source_fn(Mask* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :891
void Mask__set_Source_fn(Mask* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public Mask() [instance] :758
void Mask::ctor_3()
{
    uStackFrame __("Fuse.Effects.Mask", ".ctor()");
    _mode = 2;
    ctor_2(1);
    _container = ::g::Fuse::Internal::ImageContainer::New1((uObject*)this);
    uPtr(_container)->StretchMode(3);
    uPtr(_container)->IsRooted(true);
    init_DrawCalls();
}

// public Uno.UX.FileSource get_File() [instance] :883
::g::Uno::UX::FileSource* Mask::File()
{
    uStackFrame __("Fuse.Effects.Mask", "get_File()");
    return uPtr(_container)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :884
void Mask::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Effects.Mask", "set_File(Uno.UX.FileSource)");
    uPtr(_container)->File(value);
}

// private generated void init_DrawCalls() [instance] :754
void Mask::init_DrawCalls()
{
    uStackFrame __("Fuse.Effects.Mask", "init_DrawCalls()");
    uArray* Vertices_79857885_7_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    OnRender_VertexData_79857885_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_79857885_7_1_0), 0);
    OnRender_LocalTransform_79857885_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    OnRender_LocalTransform_79857885_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    OnRender_VertexData_7985ece4_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_79857885_7_1_0), 0);
    OnRender_VertexData_79866143_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_79857885_7_1_0), 0);
    _draw_79857885 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::Mask76ebab4c());
    _draw_7985ece4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::Mask76ebab4d());
    _draw_79866143 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::Mask76ebab4e());
}

// public Fuse.Effects.Mask.MaskMode get_Mode() [instance] :791
int Mask::Mode()
{
    uStackFrame __("Fuse.Effects.Mask", "get_Mode()");
    return _mode;
}

// public void set_Mode(Fuse.Effects.Mask.MaskMode value) [instance] :792
void Mask::Mode(int value)
{
    uStackFrame __("Fuse.Effects.Mask", "set_Mode(Fuse.Effects.Mask.MaskMode)");

    if (_mode != value)
    {
        _mode = value;
        OnRenderingChanged();
    }
}

// public Fuse.Resources.ImageSource get_Source() [instance] :890
::g::Fuse::Resources::ImageSource* Mask::Source()
{
    uStackFrame __("Fuse.Effects.Mask", "get_Source()");
    return uPtr(_container)->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :891
void Mask::Source(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Effects.Mask", "set_Source(Fuse.Resources.ImageSource)");
    uPtr(_container)->Source(value);
}

// public Mask New() [static] :758
Mask* Mask::New2()
{
    Mask* obj1 = (Mask*)uNew(Mask_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.29.22/$.uno
// --------------------------------------------------------

// public enum Mask.MaskMode :781
uEnumType* Mask__MaskMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Effects.Mask.MaskMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Alpha", 0LL,
        "Grayscale", 1LL,
        "RGBA", 2LL);
    return type;
}

}}} // ::g::Fuse::Effects
