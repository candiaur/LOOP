// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseiOSBindings_bundle.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Font.h>
#include <Fuse.iOS.Bindings.Blitter.h>
#include <Fuse.iOS.Bindings.ControlEvent.h>
#include <Fuse.iOS.Bindings.FontCache.h>
#include <Fuse.iOS.Bindings.InputDispatch.h>
#include <Fuse.iOS.Bindings.iOSBindingView.h>
#include <Fuse.iOS.Bindings.iOSDeviceInterop.h>
#include <Fuse.iOS.Bindings.iOSExtensions.h>
#include <Fuse.iOS.Bindings.iOSInterop.h>
#include <Fuse.iOS.Bindings.NativeViews.NativeView.h>
#include <Fuse.iOS.Bindings.NSAttributedStringConstants.h>
#include <Fuse.iOS.Bindings.RootView.h>
#include <Fuse.iOS.Bindings.StatusBarConfig.h>
#include <Fuse.iOS.Bindings.TextLayout.h>
#include <Fuse.iOS.Bindings.Transform.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Visual.h>
#include <iOS.CoreGraphics.CGColorRef.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
#include <iOS.CoreGraphics.Functions.h>
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSAttributedString.h>
#include <iOS.Foundation.NSDictionary.h>
#include <iOS.Foundation.NSMutableArray.h>
#include <iOS.Foundation.NSMutableDictionary.h>
#include <iOS.Foundation.NSNumber.h>
#include <iOS.Foundation.NSObject.h>
#include <iOS.Foundation.NSString.h>
#include <iOS.QuartzCore.CAGradientLayer.h>
#include <iOS.QuartzCore.CALayer.h>
#include <iOS.QuartzCore.CATransform3D.h>
#include <iOS.UIKit.NSLayoutManager.h>
#include <iOS.UIKit.NSLineBreakMode.h>
#include <iOS.UIKit.NSMutableParagraphStyle.h>
#include <iOS.UIKit.NSParagraphStyle.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <iOS.UIKit.NSTextContainer.h>
#include <iOS.UIKit.NSTextStorage.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIControl.h>
#include <iOS.UIKit.UIControlEvents.h>
#include <iOS.UIKit.UIFont.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <ObjC.Selector.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.StatusBar.h>
#include <Uno.Platform.iOS.StatusBarAnimation.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UX.FileSource.h>
static uString* STRINGS[4];
static uType* TYPES[18];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno
// -------------------------------------------------------------

// internal sealed class Blitter :987
// {
// static Blitter() :987
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IViewport_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, _draw_83b8f5a6), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, Blit_LocalTransform_83b8f5a6_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, Blit_LocalTransform_83b8f5a6_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, Blit_VertexData_83b8f5a6_7_2_1), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.Bindings.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :987
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Visual where, texture2D vt, float2 pos, float2 size) :991
void Blitter__Blit_fn(Blitter* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size)
{
    __this->Blit(dc, where, vt, *pos, *size);
}

// private generated void init_DrawCalls() :987
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :987
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :987
void Blitter::ctor_()
{
    uStackFrame __("Fuse.iOS.Bindings.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Visual where, texture2D vt, float2 pos, float2 size) [instance] :991
void Blitter::Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.iOS.Bindings.Blitter", "Blit(Fuse.DrawContext,Fuse.Visual,texture2D,float2,float2)");
    ::g::Uno::Float4x4 LocalTransform_83b8f5a6_4_9_4 = ::g::Uno::Matrix::Mul10(Blit_LocalTransform_83b8f5a6_4_9_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Blit_LocalTransform_83b8f5a6_4_9_3, ::g::Uno::Matrix::Translation(pos.X, pos.Y, 0.0f));
    _draw_83b8f5a6.BlendEnabled(true);
    _draw_83b8f5a6.DepthTestEnabled(false);
    _draw_83b8f5a6.CullFace(uPtr(dc)->CullFace());
    _draw_83b8f5a6.BlendSrcAlpha(7);
    _draw_83b8f5a6.BlendDstRgb(3);
    _draw_83b8f5a6.Use();
    _draw_83b8f5a6.Attrib1(0, 2, Blit_VertexData_83b8f5a6_7_2_1, 8, 0);
    _draw_83b8f5a6.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IViewport*/])));
    _draw_83b8f5a6.Uniform12(2, (where != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_83b8f5a6_4_9_4, uPtr(where)->WorldTransform()) : LocalTransform_83b8f5a6_4_9_4);
    _draw_83b8f5a6.Sampler2(3, vt);
    _draw_83b8f5a6.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance] :987
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.iOS.Bindings.Blitter", "init_DrawCalls()");
    Blit_VertexData_83b8f5a6_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Blit_LocalTransform_83b8f5a6_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Blit_LocalTransform_83b8f5a6_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_83b8f5a6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseiOSBindings_bundle::Blitter8e9d1e2b());
}

// public generated Blitter New() [static] :987
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/UIControlEvents/$.uno
// -----------------------------------------------------------------------------

// internal sealed extern class ControlEvent :12
// {
static void ControlEvent_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Delegate_typeof();
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(ControlEvent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ControlEvent_type, interface1));
    type->SetFields(1,
        ::g::iOS::UIKit::UIControl_typeof(), offsetof(::g::Fuse::iOS::Bindings::ControlEvent, _control), 0,
        ::g::iOS::UIKit::UIControlEvents_typeof(), offsetof(::g::Fuse::iOS::Bindings::ControlEvent, _events), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::iOS::Foundation::NSObject_typeof(), ::g::iOS::Foundation::NSObject_typeof()), offsetof(::g::Fuse::iOS::Bindings::ControlEvent, _handler), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Bindings::ControlEvent, _isDisposed), 0);
}

ControlEvent_type* ControlEvent_typeof()
{
    static uSStrong<ControlEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ControlEvent);
    options.TypeSize = sizeof(ControlEvent_type);
    type = (ControlEvent_type*)uClassType::New("Fuse.iOS.Bindings.ControlEvent", options);
    type->SetBase(::g::Fuse::iOS::Bindings::UIControlCallback_typeof());
    type->fp_build_ = ControlEvent_build;
    type->fp_callbackForEvent = (void(*)(::g::Fuse::iOS::Bindings::UIControlCallback*, ::g::iOS::Foundation::NSObject*, ::g::iOS::Foundation::NSObject*))ControlEvent__callbackForEvent_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ControlEvent__Dispose_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// private ControlEvent(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) :35
void ControlEvent__ctor_6_fn(ControlEvent* __this, ::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t* events)
{
    __this->ctor_6(control, handler, *events);
}

// public static Fuse.iOS.Bindings.ControlEvent AddHandler(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) :15
void ControlEvent__AddHandler_fn(::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t* events, ControlEvent** __retval)
{
    *__retval = ControlEvent::AddHandler(control, handler, *events);
}

// public override sealed void callbackForEvent(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) :42
void ControlEvent__callbackForEvent_fn(ControlEvent* __this, ::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
    uStackFrame __("Fuse.iOS.Bindings.ControlEvent", "callbackForEvent(iOS.Foundation.NSObject,iOS.Foundation.NSObject)");

    if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
        uPtr(__this->_handler)->Invoke(2, sender, theEvent);
}

// public void Dispose() :49
void ControlEvent__Dispose_fn(ControlEvent* __this)
{
    __this->Dispose();
}

// private ControlEvent New(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) :35
void ControlEvent__New7_fn(::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t* events, ControlEvent** __retval)
{
    *__retval = ControlEvent::New7(control, handler, *events);
}

// private ControlEvent(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) [instance] :35
void ControlEvent::ctor_6(::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t events)
{
    uStackFrame __("Fuse.iOS.Bindings.ControlEvent", ".ctor(iOS.UIKit.UIControl,Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject>,iOS.UIKit.UIControlEvents)");
    ctor_4();
    _control = control;
    _handler = handler;
    _events = events;
}

// public void Dispose() [instance] :49
void ControlEvent::Dispose()
{
    uStackFrame __("Fuse.iOS.Bindings.ControlEvent", "Dispose()");

    if (!_isDisposed)
    {
        uPtr(_control)->removeTargetActionForControlEvents(Handle(), CallbackSelector(), _events);
        _isDisposed = true;
    }
}

// public static Fuse.iOS.Bindings.ControlEvent AddHandler(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) [static] :15
ControlEvent* ControlEvent::AddHandler(::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t events)
{
    uStackFrame __("Fuse.iOS.Bindings.ControlEvent", "AddHandler(iOS.UIKit.UIControl,Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject>,iOS.UIKit.UIControlEvents)");
    ControlEvent* controlEvent = ControlEvent::New7(control, handler, events);
    controlEvent->init();
    uPtr(control)->addTargetActionForControlEvents(controlEvent->Handle(), controlEvent->CallbackSelector(), events);
    return controlEvent;
}

// private ControlEvent New(iOS.UIKit.UIControl control, Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject> handler, iOS.UIKit.UIControlEvents events) [static] :35
ControlEvent* ControlEvent::New7(::g::iOS::UIKit::UIControl* control, uDelegate* handler, uint32_t events)
{
    ControlEvent* obj1 = (ControlEvent*)uNew(ControlEvent_typeof());
    obj1->ctor_6(control, handler, events);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno
// -------------------------------------------------------------

// internal static extern class InputDispatch :17
// {
static void InputDispatch_build(uType* type)
{
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    return type;
}

// public static void AddListener(Fuse.iOS.Bindings.NativeViews.NativeView nativeView) :20
void InputDispatch__AddListener_fn(::g::Fuse::iOS::Bindings::NativeViews::NativeView* nativeView)
{
    InputDispatch::AddListener(nativeView);
}

// public static void RemoveListener(Fuse.iOS.Bindings.NativeViews.NativeView nativeView) :25
void InputDispatch__RemoveListener_fn(::g::Fuse::iOS::Bindings::NativeViews::NativeView* nativeView)
{
    InputDispatch::RemoveListener(nativeView);
}

// public static void AddListener(Fuse.iOS.Bindings.NativeViews.NativeView nativeView) [static] :20
void InputDispatch::AddListener(::g::Fuse::iOS::Bindings::NativeViews::NativeView* nativeView)
{
}

// public static void RemoveListener(Fuse.iOS.Bindings.NativeViews.NativeView nativeView) [static] :25
void InputDispatch::RemoveListener(::g::Fuse::iOS::Bindings::NativeViews::NativeView* nativeView)
{
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno
// -------------------------------------------------------------

// internal static extern class iOSExtensions :305
// {
static void iOSExtensions_build(uType* type)
{
    ::STRINGS[0] = uString::Const("unsupported CALayer brush");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno");
    ::STRINGS[2] = uString::Const("ToCALayer");
    ::TYPES[3] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[7] = ::g::iOS::Foundation::NSArray_typeof();
    ::TYPES[8] = ::g::iOS::QuartzCore::CALayer_typeof();
}

uClassType* iOSExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.iOSExtensions", options);
    type->fp_build_ = iOSExtensions_build;
    return type;
}

// public static iOS.QuartzCore.CALayer ToCALayer(float4 color) :360
void iOSExtensions__ToCALayer_fn(::g::Uno::Float4* color, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer(*color);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.Brush brush) :416
void iOSExtensions__ToCALayer1_fn(::g::Fuse::Drawing::Brush* brush, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer1(brush);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.LinearGradient linearGradient) :378
void iOSExtensions__ToCALayer2_fn(::g::Fuse::Drawing::LinearGradient* linearGradient, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer2(linearGradient);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.SolidColor solidColor) :368
void iOSExtensions__ToCALayer3_fn(::g::Fuse::Drawing::SolidColor* solidColor, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer3(solidColor);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.StaticSolidColor staticSolidColor) :373
void iOSExtensions__ToCALayer4_fn(::g::Fuse::Drawing::StaticSolidColor* staticSolidColor, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer4(staticSolidColor);
}

// public static iOS.CoreGraphics.CGPoint ToCGPoint(float2 f) :336
void iOSExtensions__ToCGPoint_fn(::g::Uno::Float2* f, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = iOSExtensions::ToCGPoint(*f);
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect rect) :329
void iOSExtensions__ToCGRect_fn(::g::Uno::Rect* rect, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = iOSExtensions::ToCGRect(*rect);
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 f) :341
void iOSExtensions__ToCGSize_fn(::g::Uno::Float2* f, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = iOSExtensions::ToCGSize(*f);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGPoint point) :324
void iOSExtensions__ToFloat2_fn(::g::iOS::CoreGraphics::CGPoint* point, ::g::Uno::Float2* __retval)
{
    *__retval = iOSExtensions::ToFloat2(*point);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size) :319
void iOSExtensions__ToFloat21_fn(::g::iOS::CoreGraphics::CGSize* size, ::g::Uno::Float2* __retval)
{
    *__retval = iOSExtensions::ToFloat21(*size);
}

// public static iOS.Foundation.NSNumber ToNSNumber(double d) :353
void iOSExtensions__ToNSNumber_fn(double* d, ::g::iOS::Foundation::NSNumber** __retval)
{
    *__retval = iOSExtensions::ToNSNumber(*d);
}

// public static iOS.Foundation.NSNumber ToNSNumber(float f) :346
void iOSExtensions__ToNSNumber1_fn(float* f, ::g::iOS::Foundation::NSNumber** __retval)
{
    *__retval = iOSExtensions::ToNSNumber1(*f);
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect rect) :314
void iOSExtensions__ToRect_fn(::g::iOS::CoreGraphics::CGRect* rect, ::g::Uno::Rect* __retval)
{
    *__retval = iOSExtensions::ToRect(*rect);
}

// public static iOS.UIKit.UIColor ToUIColor(float4 color) :307
void iOSExtensions__ToUIColor_fn(::g::Uno::Float4* color, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = iOSExtensions::ToUIColor(*color);
}

// public static iOS.QuartzCore.CALayer ToCALayer(float4 color) [static] :360
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCALayer(float4)");
    ::g::iOS::QuartzCore::CALayer* layer = ::g::iOS::QuartzCore::CALayer::New5();
    layer->init();
    layer->BackgroundColor(uPtr(iOSExtensions::ToUIColor(color))->CGColor());
    return layer;
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.Brush brush) [static] :416
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer1(::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCALayer(Fuse.Drawing.Brush)");

    if (uIs(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))
        return iOSExtensions::ToCALayer3(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]));

    if (uIs(brush, ::TYPES[4/*Fuse.Drawing.StaticSolidColor*/]))
        return iOSExtensions::ToCALayer4(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[4/*Fuse.Drawing.StaticSolidColor*/]));

    if (uIs(brush, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))
        return iOSExtensions::ToCALayer2(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]));

    ::g::Fuse::Diagnostics::Unsupported(::STRINGS[0/*"unsupported...*/], brush, ::STRINGS[1/*"/usr/local/...*/], 425, ::STRINGS[2/*"ToCALayer"*/]);
    return NULL;
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.LinearGradient linearGradient) [static] :378
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer2(::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCALayer(Fuse.Drawing.LinearGradient)");
    ::g::iOS::QuartzCore::CAGradientLayer* layer = ::g::iOS::QuartzCore::CAGradientLayer::New7();
    layer->init();
    layer->StartPoint(iOSExtensions::ToCGPoint(uPtr(linearGradient)->StartPoint()));
    layer->EndPoint(iOSExtensions::ToCGPoint(linearGradient->EndPoint()));
    ::g::iOS::Foundation::NSMutableArray* colors = ::g::iOS::Foundation::NSMutableArray::New7();
    colors->initWithCapacity((uint64_t)(uint32_t)uPtr(linearGradient->SortedStops())->Length());
    ::g::iOS::Foundation::NSMutableArray* offsets = ::g::iOS::Foundation::NSMutableArray::New7();
    offsets->initWithCapacity((uint64_t)(uint32_t)uPtr(linearGradient->SortedStops())->Length());

    for (int i = 0; i < uPtr(linearGradient->SortedStops())->Length(); i++)
    {
        ::g::Fuse::Drawing::GradientStop* gradientStop = uPtr(uPtr(linearGradient)->SortedStops())->Strong< ::g::Fuse::Drawing::GradientStop*>(i);
        ::g::iOS::Foundation::NSNumber* offset = iOSExtensions::ToNSNumber1(uPtr(gradientStop)->Offset());
        uPtr(offsets)->addObject(uPtr(offset)->Handle());
    }

    layer->setColors(colors);
    layer->setLocations(offsets);
    return layer;
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.SolidColor solidColor) [static] :368
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer3(::g::Fuse::Drawing::SolidColor* solidColor)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCALayer(Fuse.Drawing.SolidColor)");
    return iOSExtensions::ToCALayer(uPtr(solidColor)->Color());
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.StaticSolidColor staticSolidColor) [static] :373
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer4(::g::Fuse::Drawing::StaticSolidColor* staticSolidColor)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCALayer(Fuse.Drawing.StaticSolidColor)");
    return iOSExtensions::ToCALayer(uPtr(staticSolidColor)->Color());
}

// public static iOS.CoreGraphics.CGPoint ToCGPoint(float2 f) [static] :336
::g::iOS::CoreGraphics::CGPoint iOSExtensions::ToCGPoint(::g::Uno::Float2 f)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCGPoint(float2)");
    return ::g::iOS::CoreGraphics::CGPoint__New1((double)f.X, (double)f.Y);
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect rect) [static] :329
::g::iOS::CoreGraphics::CGRect iOSExtensions::ToCGRect(::g::Uno::Rect rect)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCGRect(Uno.Rect)");
    return ::g::iOS::CoreGraphics::CGRect__New1(iOSExtensions::ToCGPoint(rect.Position()), iOSExtensions::ToCGSize(rect.Size()));
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 f) [static] :341
::g::iOS::CoreGraphics::CGSize iOSExtensions::ToCGSize(::g::Uno::Float2 f)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCGSize(float2)");
    return ::g::iOS::CoreGraphics::CGSize__New1((double)f.X, (double)f.Y);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGPoint point) [static] :324
::g::Uno::Float2 iOSExtensions::ToFloat2(::g::iOS::CoreGraphics::CGPoint point)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToFloat2(iOS.CoreGraphics.CGPoint)");
    return ::g::Uno::Float2__New2((float)point.X, (float)point.Y);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size) [static] :319
::g::Uno::Float2 iOSExtensions::ToFloat21(::g::iOS::CoreGraphics::CGSize size)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToFloat2(iOS.CoreGraphics.CGSize)");
    return ::g::Fuse::iOS::Bindings::iOSInterop::ToFloat2(size, 1.0f);
}

// public static iOS.Foundation.NSNumber ToNSNumber(double d) [static] :353
::g::iOS::Foundation::NSNumber* iOSExtensions::ToNSNumber(double d)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToNSNumber(double)");
    ::g::iOS::Foundation::NSNumber* num = ::g::iOS::Foundation::NSNumber::New7();
    num->initWithDouble(d);
    return num;
}

// public static iOS.Foundation.NSNumber ToNSNumber(float f) [static] :346
::g::iOS::Foundation::NSNumber* iOSExtensions::ToNSNumber1(float f)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToNSNumber(float)");
    ::g::iOS::Foundation::NSNumber* num = ::g::iOS::Foundation::NSNumber::New7();
    num->initWithFloat(f);
    return num;
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect rect) [static] :314
::g::Uno::Rect iOSExtensions::ToRect(::g::iOS::CoreGraphics::CGRect rect)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToRect(iOS.CoreGraphics.CGRect)");
    return ::g::Fuse::iOS::Bindings::iOSInterop::ToRect(rect, 1.0f);
}

// public static iOS.UIKit.UIColor ToUIColor(float4 color) [static] :307
::g::iOS::UIKit::UIColor* iOSExtensions::ToUIColor(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToUIColor(float4)");
    ::g::iOS::UIKit::UIColor* uiColor = ::g::iOS::UIKit::UIColor::New5();
    uiColor->initWithRedGreenBlueAlpha((double)color.X, (double)color.Y, (double)color.Z, (double)color.W);
    return uiColor;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno
// -------------------------------------------------------------

// internal static extern class iOSInterop :438
// {
static void iOSInterop_build(uType* type)
{
    ::STRINGS[3] = uString::Const("textAlignment");
    ::TYPES[9] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
    ::TYPES[10] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
    ::TYPES[11] = ::g::iOS::Foundation::NSDictionary_typeof();
}

uClassType* iOSInterop_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.iOSInterop", options);
    type->fp_build_ = iOSInterop_build;
    return type;
}

// public static float2 GetContentSize(iOS.UIKit.UIView view, Fuse.LayoutParams lp, float scale) :441
void iOSInterop__GetContentSize_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams* lp, float* scale, ::g::Uno::Float2* __retval)
{
    *__retval = iOSInterop::GetContentSize(view, *lp, *scale);
}

// public static float get_Scale() :457
void iOSInterop__get_Scale_fn(float* __retval)
{
    *__retval = iOSInterop::Scale();
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect unoRect, float scale) :460
void iOSInterop__ToCGRect_fn(::g::Uno::Rect* unoRect, float* scale, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = iOSInterop::ToCGRect(*unoRect, *scale);
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 unoSize, float scale) :490
void iOSInterop__ToCGSize_fn(::g::Uno::Float2* unoSize, float* scale, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = iOSInterop::ToCGSize(*unoSize, *scale);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size, float scale) :485
void iOSInterop__ToFloat2_fn(::g::iOS::CoreGraphics::CGSize* size, float* scale, ::g::Uno::Float2* __retval)
{
    *__retval = iOSInterop::ToFloat2(*size, *scale);
}

// internal static iOS.Foundation.NSDictionary ToNSDictionary(Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID> dict) :512
void iOSInterop__ToNSDictionary_fn(::g::Uno::Collections::Dictionary* dict, ::g::iOS::Foundation::NSDictionary** __retval)
{
    *__retval = iOSInterop::ToNSDictionary(dict);
}

// public static iOS.UIKit.NSTextAlignment ToNSTextAlignment(Fuse.Controls.TextAlignment textAlignment) :495
void iOSInterop__ToNSTextAlignment_fn(int* textAlignment, int* __retval)
{
    *__retval = iOSInterop::ToNSTextAlignment(*textAlignment);
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect cgRect, float scale) :470
void iOSInterop__ToRect_fn(::g::iOS::CoreGraphics::CGRect* cgRect, float* scale, ::g::Uno::Rect* __retval)
{
    *__retval = iOSInterop::ToRect(*cgRect, *scale);
}

// public static float2 GetContentSize(iOS.UIKit.UIView view, Fuse.LayoutParams lp, float scale) [static] :441
::g::Uno::Float2 iOSInterop::GetContentSize(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams lp, float scale)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "GetContentSize(iOS.UIKit.UIView,Fuse.LayoutParams,float)");
    ::g::Uno::Float2 fillSize = lp.Size();

    if (!lp.HasX())
        fillSize.X = 1000000.0f;

    if (!lp.HasY())
        fillSize.Y = 1000000.0f;

    ::g::iOS::CoreGraphics::CGSize maxSize = ::g::Fuse::iOS::Bindings::iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(iOSInterop::ToCGSize(fillSize, scale), view);
    ::g::iOS::CoreGraphics::CGSize result = uPtr(view)->sizeThatFits(maxSize);
    return iOSInterop::ToFloat2(::g::Fuse::iOS::Bindings::iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(result, view), scale);
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect unoRect, float scale) [static] :460
::g::iOS::CoreGraphics::CGRect iOSInterop::ToCGRect(::g::Uno::Rect unoRect, float scale)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToCGRect(Uno.Rect,float)");
    ::g::iOS::CoreGraphics::CGRect rect;
    rect.Origin.X = (double)(unoRect.Position().X / scale);
    rect.Origin.Y = (double)(unoRect.Position().Y / scale);
    rect.Size.Width = (double)(unoRect.Size().X / scale);
    rect.Size.Height = (double)(unoRect.Size().Y / scale);
    return rect;
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 unoSize, float scale) [static] :490
::g::iOS::CoreGraphics::CGSize iOSInterop::ToCGSize(::g::Uno::Float2 unoSize, float scale)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToCGSize(float2,float)");
    return ::g::iOS::CoreGraphics::CGSize__New1((double)(unoSize.X / scale), (double)(unoSize.Y / scale));
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size, float scale) [static] :485
::g::Uno::Float2 iOSInterop::ToFloat2(::g::iOS::CoreGraphics::CGSize size, float scale)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToFloat2(iOS.CoreGraphics.CGSize,float)");
    return ::g::Uno::Float2__New2((float)size.Width * scale, (float)size.Height * scale);
}

// internal static iOS.Foundation.NSDictionary ToNSDictionary(Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID> dict) [static] :512
::g::iOS::Foundation::NSDictionary* iOSInterop::ToNSDictionary(::g::Uno::Collections::Dictionary* dict)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToNSDictionary(Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>)");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, ::id> ret2;
    ::g::iOS::Foundation::NSMutableDictionary* ret = ::g::iOS::Foundation::NSMutableDictionary::New8(::g::iOS::Foundation::NSMutableDictionary::_dictionaryWithCapacity((uint64_t)(uint32_t)uPtr(dict)->Count()));

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, ::id> enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(dict, &ret2), ret2); enum1.MoveNext(::TYPES[9/*Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, ::id> e = enum1.Current(::TYPES[9/*Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>.Enumerator*/]);
        uPtr(ret)->setObjectForKey(e.Value(::TYPES[10/*Uno.Collections.KeyValuePair<iOS.Foundation.INSCopying, ObjC.ID>*/]), e.Key(::TYPES[10/*Uno.Collections.KeyValuePair<iOS.Foundation.INSCopying, ObjC.ID>*/]));
    }

    return ret;
}

// public static iOS.UIKit.NSTextAlignment ToNSTextAlignment(Fuse.Controls.TextAlignment textAlignment) [static] :495
int iOSInterop::ToNSTextAlignment(int textAlignment)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToNSTextAlignment(Fuse.Controls.TextAlignment)");

    switch (textAlignment)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[3/*"textAlignment"*/]));
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect cgRect, float scale) [static] :470
::g::Uno::Rect iOSInterop::ToRect(::g::iOS::CoreGraphics::CGRect cgRect, float scale)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToRect(iOS.CoreGraphics.CGRect,float)");
    ::g::Uno::Rect rect = ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);
    rect.Position(::g::Uno::Float2__New2((float)cgRect.Origin.X * scale, (float)cgRect.Origin.Y * scale));
    rect.Size(::g::Uno::Float2__New2((float)cgRect.Size.Width * scale, (float)cgRect.Size.Height * scale));
    return rect;
}

// public static float get_Scale() [static] :457
float iOSInterop::Scale()
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "get_Scale()");
    return uPtr(::g::Uno::Platform2::Display::MainDisplay())->Density();
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno
// -------------------------------------------------------------

// internal static extern class RootView :582
// {
// static RootView() :593
static void RootView__cctor__fn(uType* __type)
{
    RootView::_rootContainer_ = ::g::iOS::UIKit::UIControl::New9();
    uPtr(RootView::_rootContainer_)->init();
    uPtr(RootView::_rootContainer_)->BackgroundColor(::g::Fuse::iOS::Bindings::iOSExtensions::ToUIColor(::g::Uno::Float4__New2(0.95f, 0.95f, 0.95f, 1.0f)));
    uPtr(RootView::_rootContainer_)->UserInteractionEnabled(true);
    uPtr(RootView::_rootContainer_)->MultipleTouchEnabled(true);
    ::g::Uno::Platform2::Application::RootView(::g::Fuse::iOS::Bindings::iOSBindingView::GetNativeViewHandle(RootView::_rootContainer_));
    uPtr(RootView::_rootContainer_)->sizeToFit();
}

static void RootView_build(uType* type)
{
    ::TYPES[12] = ::g::iOS::UIKit::UIView_typeof();
    type->SetFields(0,
        ::g::iOS::UIKit::UIControl_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::RootView::_rootContainer_, uFieldFlagsStatic);
}

uClassType* RootView_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.RootView", options);
    type->fp_build_ = RootView_build;
    type->fp_cctor_ = RootView__cctor__fn;
    return type;
}

// public static void ClearRoot(iOS.UIKit.UIView view) :613
void RootView__ClearRoot_fn(::g::iOS::UIKit::UIView* view)
{
    RootView::ClearRoot(view);
}

// public static iOS.UIKit.UIView get_Current() :587
void RootView__get_Current_fn(::g::iOS::UIKit::UIView** __retval)
{
    *__retval = RootView::Current();
}

// public static void SetRoot(iOS.UIKit.UIView view) :604
void RootView__SetRoot_fn(::g::iOS::UIKit::UIView* view)
{
    RootView::SetRoot(view);
}

uSStrong< ::g::iOS::UIKit::UIControl*> RootView::_rootContainer_;

// public static void ClearRoot(iOS.UIKit.UIView view) [static] :613
void RootView::ClearRoot(::g::iOS::UIKit::UIView* view)
{
    RootView_typeof()->Init();
}

// public static void SetRoot(iOS.UIKit.UIView view) [static] :604
void RootView::SetRoot(::g::iOS::UIKit::UIView* view)
{
    RootView_typeof()->Init();
}

// public static iOS.UIKit.UIView get_Current() [static] :587
::g::iOS::UIKit::UIView* RootView::Current()
{
    uStackFrame __("Fuse.iOS.Bindings.RootView", "get_Current()");
    RootView_typeof()->Init();
    return RootView::_rootContainer();
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno
// -------------------------------------------------------------

// public sealed class StatusBarConfig :632
// {
// static StatusBarConfig() :632
static void StatusBarConfig__cctor_1_fn(uType* __type)
{
    StatusBarConfig::_stack_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<Fuse.iOS.Bindings.StatusBarConfig>*/]));
}

static void StatusBarConfig_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Collections::List_typeof()->MakeType(StatusBarConfig_typeof());
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Platform::iOS::StatusBarAnimation_typeof(), offsetof(::g::Fuse::iOS::Bindings::StatusBarConfig, _animation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Bindings::StatusBarConfig, _hasAnimation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Bindings::StatusBarConfig, _hasIsVisible), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Bindings::StatusBarConfig, _hasStyle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Bindings::StatusBarConfig, _isVisible), 0,
        ::g::Uno::Platform::iOS::StatusBarStyle_typeof(), offsetof(::g::Fuse::iOS::Bindings::StatusBarConfig, _style), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(StatusBarConfig_typeof()), (uintptr_t)&::g::Fuse::iOS::Bindings::StatusBarConfig::_stack_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Animation", NULL, (void*)StatusBarConfig__get_Animation_fn, 0, false, ::g::Uno::Platform::iOS::StatusBarAnimation_typeof(), 0),
        new uFunction("set_Animation", NULL, (void*)StatusBarConfig__set_Animation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::iOS::StatusBarAnimation_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBarConfig__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBarConfig__set_IsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StatusBarConfig__New2_fn, 0, true, StatusBarConfig_typeof(), 0),
        new uFunction("get_Style", NULL, (void*)StatusBarConfig__get_Style_fn, 0, false, ::g::Uno::Platform::iOS::StatusBarStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)StatusBarConfig__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::iOS::StatusBarStyle_typeof()));
}

::g::Fuse::Node_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Bindings.StatusBarConfig", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = StatusBarConfig_build;
    type->fp_ctor_ = (void*)StatusBarConfig__New2_fn;
    type->fp_cctor_ = StatusBarConfig__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StatusBarConfig__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StatusBarConfig__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated StatusBarConfig() :632
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this)
{
    __this->ctor_3();
}

// public Uno.Platform.iOS.StatusBarAnimation get_Animation() :672
void StatusBarConfig__get_Animation_fn(StatusBarConfig* __this, int* __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Uno.Platform.iOS.StatusBarAnimation value) :673
void StatusBarConfig__set_Animation_fn(StatusBarConfig* __this, int* value)
{
    __this->Animation(*value);
}

// private static void Apply() :731
void StatusBarConfig__Apply_fn()
{
    StatusBarConfig::Apply();
}

// private static Uno.Platform.iOS.StatusBarAnimation GetAnimation() :721
void StatusBarConfig__GetAnimation_fn(int* __retval)
{
    *__retval = StatusBarConfig::GetAnimation();
}

// private static bool GetIsVisible() :701
void StatusBarConfig__GetIsVisible_fn(bool* __retval)
{
    *__retval = StatusBarConfig::GetIsVisible();
}

// private static Uno.Platform.iOS.StatusBarStyle GetStyle() :711
void StatusBarConfig__GetStyle_fn(int* __retval)
{
    *__retval = StatusBarConfig::GetStyle();
}

// public bool get_IsVisible() :639
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :640
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :632
void StatusBarConfig__New2_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New2();
}

// protected override sealed void OnRooted() :685
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this)
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Uno::Collections::List__Add_fn(uPtr(StatusBarConfig::_stack()), __this);
    StatusBarConfig::Apply();
}

// protected override sealed void OnUnrooted() :693
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this)
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "OnUnrooted()");
    bool ret8;
    ::g::Uno::Collections::List__Remove_fn(uPtr(StatusBarConfig::_stack()), __this, &ret8);
    StatusBarConfig::Apply();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Uno.Platform.iOS.StatusBarStyle get_Style() :655
void StatusBarConfig__get_Style_fn(StatusBarConfig* __this, int* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Uno.Platform.iOS.StatusBarStyle value) :656
void StatusBarConfig__set_Style_fn(StatusBarConfig* __this, int* value)
{
    __this->Style(*value);
}

uSStrong< ::g::Uno::Collections::List*> StatusBarConfig::_stack_;

// public generated StatusBarConfig() [instance] :632
void StatusBarConfig::ctor_3()
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", ".ctor()");
    ctor_2();
}

// public Uno.Platform.iOS.StatusBarAnimation get_Animation() [instance] :672
int StatusBarConfig::Animation()
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "get_Animation()");
    return _animation;
}

// public void set_Animation(Uno.Platform.iOS.StatusBarAnimation value) [instance] :673
void StatusBarConfig::Animation(int value)
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "set_Animation(Uno.Platform.iOS.StatusBarAnimation)");

    if (!_hasAnimation || (_animation != value))
    {
        _animation = value;
        _hasAnimation = true;
        StatusBarConfig::Apply();
    }
}

// public bool get_IsVisible() [instance] :639
bool StatusBarConfig::IsVisible()
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "get_IsVisible()");
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :640
void StatusBarConfig::IsVisible(bool value)
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "set_IsVisible(bool)");

    if (!_hasIsVisible || (_isVisible != value))
    {
        _isVisible = value;
        _hasIsVisible = true;
        StatusBarConfig::Apply();
    }
}

// public Uno.Platform.iOS.StatusBarStyle get_Style() [instance] :655
int StatusBarConfig::Style()
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "get_Style()");
    return _style;
}

// public void set_Style(Uno.Platform.iOS.StatusBarStyle value) [instance] :656
void StatusBarConfig::Style(int value)
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "set_Style(Uno.Platform.iOS.StatusBarStyle)");

    if (!_hasStyle || (_style != value))
    {
        _style = value;
        _hasStyle = true;
        StatusBarConfig::Apply();
    }
}

// private static void Apply() [static] :731
void StatusBarConfig::Apply()
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "Apply()");
    StatusBarConfig_typeof()->Init();
    int anim = StatusBarConfig::GetAnimation();
    int style = StatusBarConfig::GetStyle();
    bool visible = StatusBarConfig::GetIsVisible();

    if (::g::Uno::Platform::iOS::StatusBar::Animation() != anim)
        ::g::Uno::Platform::iOS::StatusBar::Animation(anim);

    if (::g::Uno::Platform::iOS::StatusBar::Style() != style)
        ::g::Uno::Platform::iOS::StatusBar::Style(style);

    if (::g::Uno::Platform::iOS::StatusBar::IsVisible() != visible)
        ::g::Uno::Platform::iOS::StatusBar::IsVisible(visible);
}

// private static Uno.Platform.iOS.StatusBarAnimation GetAnimation() [static] :721
int StatusBarConfig::GetAnimation()
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "GetAnimation()");
    StatusBarConfig_typeof()->Init();
    StatusBarConfig* ret2;
    StatusBarConfig* ret3;

    for (int i = uPtr(StatusBarConfig::_stack())->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret2), ret2))->_hasAnimation)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret3), ret3))->Animation();

    return 0;
}

// private static bool GetIsVisible() [static] :701
bool StatusBarConfig::GetIsVisible()
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "GetIsVisible()");
    StatusBarConfig_typeof()->Init();
    StatusBarConfig* ret4;
    StatusBarConfig* ret5;

    for (int i = uPtr(StatusBarConfig::_stack())->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret4), ret4))->_hasIsVisible)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret5), ret5))->IsVisible();

    return true;
}

// private static Uno.Platform.iOS.StatusBarStyle GetStyle() [static] :711
int StatusBarConfig::GetStyle()
{
    uStackFrame __("Fuse.iOS.Bindings.StatusBarConfig", "GetStyle()");
    StatusBarConfig_typeof()->Init();
    StatusBarConfig* ret6;
    StatusBarConfig* ret7;

    for (int i = uPtr(StatusBarConfig::_stack())->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret6), ret6))->_hasStyle)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack()), uCRef<int>(i), &ret7), ret7))->Style();

    return 0;
}

// public generated StatusBarConfig New() [static] :632
StatusBarConfig* StatusBarConfig::New2()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno
// -------------------------------------------------------------

// public sealed extern class TextLayout :764
// {
static void TextLayout_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
    ::TYPES[16] = ::g::iOS::Foundation::INSCopying_typeof();
    ::TYPES[17] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[0] = ::g::Fuse::IViewport_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::iOS::UIKit::UIFont_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _font), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _layoutMin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _layoutSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _layoutValid), 0,
        ::g::iOS::UIKit::NSMutableParagraphStyle_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _style), 0,
        ::g::iOS::UIKit::UIColor_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _textColor), 0,
        ::g::iOS::UIKit::NSTextStorage_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _textStorage), 0,
        ::g::iOS::UIKit::NSLayoutManager_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, LayoutManager), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, PixelBounds), 0,
        ::g::iOS::UIKit::NSTextContainer_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, TextContainer), 0);
    type->Reflection.SetFields(3,
        new uField("LayoutManager", 7),
        new uField("PixelBounds", 8),
        new uField("TextContainer", 9));
    type->Reflection.SetFunctions(3,
        new uFunction("Invalidate", NULL, (void*)TextLayout__Invalidate_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TextLayout__New1_fn, 0, true, TextLayout_typeof(), 0),
        new uFunction("UpdateLayout", NULL, (void*)TextLayout__UpdateLayout_fn, 0, false, ::g::Uno::Bool_typeof(), 3, ::g::Fuse::Controls::TextControl_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof()));
}

uType* TextLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(TextLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.Bindings.TextLayout", options);
    type->fp_build_ = TextLayout_build;
    type->fp_ctor_ = (void*)TextLayout__New1_fn;
    return type;
}

// public TextLayout() :782
void TextLayout__ctor__fn(TextLayout* __this)
{
    __this->ctor_();
}

// private iOS.Foundation.NSDictionary GetTextAttributes() :849
void TextLayout__GetTextAttributes_fn(TextLayout* __this, ::g::iOS::Foundation::NSDictionary** __retval)
{
    *__retval = __this->GetTextAttributes();
}

// public void Invalidate() :777
void TextLayout__Invalidate_fn(TextLayout* __this)
{
    __this->Invalidate();
}

// public TextLayout New() :782
void TextLayout__New1_fn(TextLayout** __retval)
{
    *__retval = TextLayout::New1();
}

// public bool UpdateLayout(Fuse.Controls.TextControl control, float2 size, [bool useMin]) :791
void TextLayout__UpdateLayout_fn(TextLayout* __this, ::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2* size, bool* useMin, bool* __retval)
{
    *__retval = __this->UpdateLayout(control, *size, *useMin);
}

// public TextLayout() [instance] :782
void TextLayout::ctor_()
{
    uStackFrame __("Fuse.iOS.Bindings.TextLayout", ".ctor()");
    LayoutManager = ::g::iOS::UIKit::NSLayoutManager::New5();
    uPtr(LayoutManager)->init();
    TextContainer = ::g::iOS::UIKit::NSTextContainer::New5();
    _style = ::g::iOS::UIKit::NSMutableParagraphStyle::New8(uPtr(::g::iOS::UIKit::NSParagraphStyle::_defaultParagraphStyle())->mutableCopy());
}

// private iOS.Foundation.NSDictionary GetTextAttributes() [instance] :849
::g::iOS::Foundation::NSDictionary* TextLayout::GetTextAttributes()
{
    uStackFrame __("Fuse.iOS.Bindings.TextLayout", "GetTextAttributes()");
    ::g::Uno::Collections::Dictionary* collection1;
    return ::g::Fuse::iOS::Bindings::iOSInterop::ToNSDictionary((collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[15/*Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), (uObject*)::g::Fuse::iOS::Bindings::NSAttributedStringConstants::NSFontAttributeName(), uCRef(::g::ObjC::Bindings::Object::op_Implicit(_font))), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), (uObject*)::g::Fuse::iOS::Bindings::NSAttributedStringConstants::NSForegroundColorAttributeName(), uCRef(::g::ObjC::Bindings::Object::op_Implicit(_textColor))), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), (uObject*)::g::Fuse::iOS::Bindings::NSAttributedStringConstants::NSParagraphStyleAttributeName(), uCRef(::g::ObjC::Bindings::Object::op_Implicit(_style))), collection1));
}

// public void Invalidate() [instance] :777
void TextLayout::Invalidate()
{
    uStackFrame __("Fuse.iOS.Bindings.TextLayout", "Invalidate()");
    _layoutValid = false;
}

// public bool UpdateLayout(Fuse.Controls.TextControl control, float2 size, [bool useMin]) [instance] :791
bool TextLayout::UpdateLayout(::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2 size, bool useMin)
{
    uStackFrame __("Fuse.iOS.Bindings.TextLayout", "UpdateLayout(Fuse.Controls.TextControl,float2,[bool])");
    size = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(size, ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(control)->Viewport()), ::TYPES[0/*Fuse.IViewport*/]))));
    bool valid = (_layoutValid && ::g::Uno::Float2__op_Equality(_layoutSize, size)) && (_layoutMin == useMin);

    if (valid)
        return false;

    _font = ((control->Font() != ::g::Fuse::Font::PlatformDefault()) ? (::g::iOS::UIKit::UIFont*)::g::Fuse::iOS::Bindings::FontCache::GetFontFromFile(uPtr(control->Font())->File(), control->FontSize() * ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[0/*Fuse.IViewport*/]))) : (::g::iOS::UIKit::UIFont*)::g::iOS::UIKit::UIFont::_systemFontOfSize((double)(control->FontSize() * ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[0/*Fuse.IViewport*/])))));
    _textColor = ::g::Fuse::iOS::Bindings::iOSExtensions::ToUIColor(control->TextColor());

    while (uPtr(uPtr(LayoutManager)->textContainers())->count() > 0ULL)
        uPtr(LayoutManager)->removeTextContainerAtIndex(0ULL);

    float width = size.X;

    if ((control->TextTruncation() == 1) && (control->TextWrapping() == 0))
        width = 0.0f;

    uPtr(TextContainer)->initWithSize(::g::iOS::CoreGraphics::Functions::CGSizeMake((double)width, (double)size.Y));
    uPtr(TextContainer)->setLineFragmentPadding(0.0);
    uPtr(LayoutManager)->addTextContainer(TextContainer);
    uPtr(_style)->setAlignment(::g::Fuse::iOS::Bindings::iOSInterop::ToNSTextAlignment(control->TextAlignment()));
    uPtr(_style)->setLineSpacing((double)(control->LineSpacing() * ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[0/*Fuse.IViewport*/]))));

    switch (control->TextWrapping())
    {
        case 0:
        {
            uPtr(_style)->setLineBreakMode(4);
            break;
        }
        case 1:
        {
            uPtr(_style)->setLineBreakMode(0);
            break;
        }
    }

    _textStorage = ::g::iOS::UIKit::NSTextStorage::New9();
    uPtr(_textStorage)->initWithStringAttributes(control->Value(), GetTextAttributes());
    uPtr(LayoutManager)->setTextStorage(_textStorage);
    _layoutSize = size;
    _layoutValid = true;
    _layoutMin = useMin;
    ::g::iOS::CoreGraphics::CGRect cgRect = uPtr(LayoutManager)->usedRectForTextContainer(TextContainer);
    PixelBounds = ::g::Uno::Rect__New2(::g::Uno::Float2__New2((float)cgRect.Origin.X, (float)-cgRect.Origin.Y), ::g::Uno::Float2__New2((float)cgRect.Size.Width, (float)cgRect.Size.Height));
    return true;
}

// public TextLayout New() [static] :782
TextLayout* TextLayout::New1()
{
    TextLayout* obj2 = (TextLayout*)uNew(TextLayout_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno
// -------------------------------------------------------------

// internal static extern class Transform :1027
// {
// static Transform() :1036
static void Transform__cctor__fn(uType* __type)
{
    Transform::_identity_ = Transform::CreateCATransform3D(::g::Uno::Float4x4__Identity());
}

static void Transform_build(uType* type)
{
    type->SetFields(0,
        ::g::iOS::QuartzCore::CATransform3D_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::Transform::_identity_, uFieldFlagsStatic);
}

uClassType* Transform_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.Transform", options);
    type->fp_build_ = Transform_build;
    type->fp_cctor_ = Transform__cctor__fn;
    return type;
}

// public static void Apply(iOS.UIKit.UIView view, float4x4 t) :1051
void Transform__Apply_fn(::g::iOS::UIKit::UIView* view, ::g::Uno::Float4x4* t)
{
    Transform::Apply(view, *t);
}

// public static void ApplyIdentity(iOS.UIKit.UIView view) :1046
void Transform__ApplyIdentity_fn(::g::iOS::UIKit::UIView* view)
{
    Transform::ApplyIdentity(view);
}

// private static iOS.QuartzCore.CATransform3D CreateCATransform3D(float4x4 t) :1061
void Transform__CreateCATransform3D_fn(::g::Uno::Float4x4* t, ::g::iOS::QuartzCore::CATransform3D* __retval)
{
    *__retval = Transform::CreateCATransform3D(*t);
}

// private static iOS.QuartzCore.CATransform3D get_Identity() :1033
void Transform__get_Identity_fn(::g::iOS::QuartzCore::CATransform3D* __retval)
{
    *__retval = Transform::Identity();
}

// public static void SetAnchor(iOS.UIKit.UIView view) :1041
void Transform__SetAnchor_fn(::g::iOS::UIKit::UIView* view)
{
    Transform::SetAnchor(view);
}

// public static void SetSize(iOS.UIKit.UIView view, float2 size) :1056
void Transform__SetSize_fn(::g::iOS::UIKit::UIView* view, ::g::Uno::Float2* size)
{
    Transform::SetSize(view, *size);
}

::g::iOS::QuartzCore::CATransform3D Transform::_identity_;

// public static void Apply(iOS.UIKit.UIView view, float4x4 t) [static] :1051
void Transform::Apply(::g::iOS::UIKit::UIView* view, ::g::Uno::Float4x4 t)
{
    uStackFrame __("Fuse.iOS.Bindings.Transform", "Apply(iOS.UIKit.UIView,float4x4)");
    Transform_typeof()->Init();
    uPtr(uPtr(view)->Layer())->Transform(Transform::CreateCATransform3D(t));
}

// public static void ApplyIdentity(iOS.UIKit.UIView view) [static] :1046
void Transform::ApplyIdentity(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.Bindings.Transform", "ApplyIdentity(iOS.UIKit.UIView)");
    Transform_typeof()->Init();
    uPtr(uPtr(view)->Layer())->Transform(Transform::Identity());
}

// private static iOS.QuartzCore.CATransform3D CreateCATransform3D(float4x4 t) [static] :1061
::g::iOS::QuartzCore::CATransform3D Transform::CreateCATransform3D(::g::Uno::Float4x4 t)
{
    uStackFrame __("Fuse.iOS.Bindings.Transform", "CreateCATransform3D(float4x4)");
    Transform_typeof()->Init();
    return ::g::iOS::QuartzCore::CATransform3D__New1((double)t.M11, (double)t.M12, (double)t.M13, (double)t.M14, (double)t.M21, (double)t.M22, (double)t.M23, (double)t.M24, (double)t.M31, (double)t.M32, (double)t.M33, (double)t.M34, (double)t.M41, (double)t.M42, (double)t.M43, (double)t.M44);
}

// public static void SetAnchor(iOS.UIKit.UIView view) [static] :1041
void Transform::SetAnchor(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.Bindings.Transform", "SetAnchor(iOS.UIKit.UIView)");
    Transform_typeof()->Init();
    uPtr(uPtr(view)->Layer())->AnchorPoint(::g::Fuse::iOS::Bindings::iOSExtensions::ToCGPoint(::g::Uno::Float2__New1(0.0f)));
}

// public static void SetSize(iOS.UIKit.UIView view, float2 size) [static] :1056
void Transform::SetSize(::g::iOS::UIKit::UIView* view, ::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.iOS.Bindings.Transform", "SetSize(iOS.UIKit.UIView,float2)");
    Transform_typeof()->Init();
    uPtr(view)->Frame(::g::iOS::CoreGraphics::CGRect__New1(::g::Fuse::iOS::Bindings::iOSExtensions::ToCGPoint(::g::Uno::Float2__New1(0.0f)), ::g::Fuse::iOS::Bindings::iOSExtensions::ToCGSize(size)));
}

// private static iOS.QuartzCore.CATransform3D get_Identity() [static] :1033
::g::iOS::QuartzCore::CATransform3D Transform::Identity()
{
    uStackFrame __("Fuse.iOS.Bindings.Transform", "get_Identity()");
    Transform_typeof()->Init();
    return Transform::_identity();
}
// }

}}}} // ::g::Fuse::iOS::Bindings
