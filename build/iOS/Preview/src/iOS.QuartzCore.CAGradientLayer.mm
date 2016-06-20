// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CAGradientLayer
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::QuartzCore::CAGradientLayer*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::QuartzCore::CAGradientLayer_typeof()

#include <QuartzCore/QuartzCore.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.QuartzCore.CAGradientLayer.h>
#include <iOS.CoreGraphics.CGPoint.h>

namespace g{
namespace iOS{
namespace QuartzCore{

// public sealed extern class CAGradientLayer :13246
// {
static void CAGradientLayer_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(11,
        new uFunction("endPoint", NULL, (void*)CAGradientLayer__endPoint_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("get_EndPoint", NULL, (void*)CAGradientLayer__get_EndPoint_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("set_EndPoint", NULL, (void*)CAGradientLayer__set_EndPoint_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction(".ctor", NULL, (void*)CAGradientLayer__New7_fn, 0, true, CAGradientLayer_typeof(), 0),
        new uFunction("setColors", NULL, (void*)CAGradientLayer__setColors_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("setEndPoint", NULL, (void*)CAGradientLayer__setEndPoint_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("setLocations", NULL, (void*)CAGradientLayer__setLocations_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("setStartPoint", NULL, (void*)CAGradientLayer__setStartPoint_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("startPoint", NULL, (void*)CAGradientLayer__startPoint_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("get_StartPoint", NULL, (void*)CAGradientLayer__get_StartPoint_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("set_StartPoint", NULL, (void*)CAGradientLayer__set_StartPoint_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::Foundation::NSObject_type* CAGradientLayer_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CAGradientLayer);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.QuartzCore.CAGradientLayer", options);
    type->SetBase(::g::iOS::QuartzCore::CALayer_typeof());
    type->fp_build_ = CAGradientLayer_build;
    type->fp_ctor_ = (void*)CAGradientLayer__New7_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public CAGradientLayer() :13249
void CAGradientLayer__ctor_6_fn(CAGradientLayer* __this)
{
    __this->ctor_6();
}

// public extern iOS.CoreGraphics.CGPoint endPoint() :13305
void CAGradientLayer__endPoint_fn(CAGradientLayer* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->endPoint();
}

// public iOS.CoreGraphics.CGPoint get_EndPoint() :13276
void CAGradientLayer__get_EndPoint_fn(CAGradientLayer* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->EndPoint();
}

// public void set_EndPoint(iOS.CoreGraphics.CGPoint value) :13277
void CAGradientLayer__set_EndPoint_fn(CAGradientLayer* __this, ::g::iOS::CoreGraphics::CGPoint* value)
{
    __this->EndPoint(*value);
}

// public CAGradientLayer New() :13249
void CAGradientLayer__New7_fn(CAGradientLayer** __retval)
{
    *__retval = CAGradientLayer::New7();
}

// public extern void setColors(iOS.Foundation.NSArray colors) :13290
void CAGradientLayer__setColors_fn(CAGradientLayer* __this, ::g::iOS::Foundation::NSArray* colors_)
{
    __this->setColors(colors_);
}

// public extern void setEndPoint(iOS.CoreGraphics.CGPoint endPoint) :13308
void CAGradientLayer__setEndPoint_fn(CAGradientLayer* __this, ::g::iOS::CoreGraphics::CGPoint* endPoint_)
{
    __this->setEndPoint(*endPoint_);
}

// public extern void setLocations(iOS.Foundation.NSArray locations) :13296
void CAGradientLayer__setLocations_fn(CAGradientLayer* __this, ::g::iOS::Foundation::NSArray* locations_)
{
    __this->setLocations(locations_);
}

// public extern void setStartPoint(iOS.CoreGraphics.CGPoint startPoint) :13302
void CAGradientLayer__setStartPoint_fn(CAGradientLayer* __this, ::g::iOS::CoreGraphics::CGPoint* startPoint_)
{
    __this->setStartPoint(*startPoint_);
}

// public extern iOS.CoreGraphics.CGPoint startPoint() :13299
void CAGradientLayer__startPoint_fn(CAGradientLayer* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->startPoint();
}

// public iOS.CoreGraphics.CGPoint get_StartPoint() :13270
void CAGradientLayer__get_StartPoint_fn(CAGradientLayer* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->StartPoint();
}

// public void set_StartPoint(iOS.CoreGraphics.CGPoint value) :13271
void CAGradientLayer__set_StartPoint_fn(CAGradientLayer* __this, ::g::iOS::CoreGraphics::CGPoint* value)
{
    __this->StartPoint(*value);
}

// public CAGradientLayer() [instance] :13249
void CAGradientLayer::ctor_6()
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", ".ctor()");
    ctor_4();
}

// public extern iOS.CoreGraphics.CGPoint endPoint() [instance] :13305
::g::iOS::CoreGraphics::CGPoint CAGradientLayer::endPoint()
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", "endPoint()");
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(endPoint));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public iOS.CoreGraphics.CGPoint get_EndPoint() [instance] :13276
::g::iOS::CoreGraphics::CGPoint CAGradientLayer::EndPoint()
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", "get_EndPoint()");
    return endPoint();
}

// public void set_EndPoint(iOS.CoreGraphics.CGPoint value) [instance] :13277
void CAGradientLayer::EndPoint(::g::iOS::CoreGraphics::CGPoint value)
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", "set_EndPoint(iOS.CoreGraphics.CGPoint)");
    setEndPoint(value);
}

// public extern void setColors(iOS.Foundation.NSArray colors) [instance] :13290
void CAGradientLayer::setColors(::g::iOS::Foundation::NSArray* colors_)
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", "setColors(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setColors:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)colors_));
}

// public extern void setEndPoint(iOS.CoreGraphics.CGPoint endPoint) [instance] :13308
void CAGradientLayer::setEndPoint(::g::iOS::CoreGraphics::CGPoint endPoint_)
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", "setEndPoint(iOS.CoreGraphics.CGPoint)");
    ::g::iOS::CoreGraphics::CGPoint endPoint__ = endPoint_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setEndPoint:),
        uObjC::Struct::FromUno_CGPoint(endPoint__, ::CGPoint()));
}

// public extern void setLocations(iOS.Foundation.NSArray locations) [instance] :13296
void CAGradientLayer::setLocations(::g::iOS::Foundation::NSArray* locations_)
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", "setLocations(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setLocations:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)locations_));
}

// public extern void setStartPoint(iOS.CoreGraphics.CGPoint startPoint) [instance] :13302
void CAGradientLayer::setStartPoint(::g::iOS::CoreGraphics::CGPoint startPoint_)
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", "setStartPoint(iOS.CoreGraphics.CGPoint)");
    ::g::iOS::CoreGraphics::CGPoint startPoint__ = startPoint_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setStartPoint:),
        uObjC::Struct::FromUno_CGPoint(startPoint__, ::CGPoint()));
}

// public extern iOS.CoreGraphics.CGPoint startPoint() [instance] :13299
::g::iOS::CoreGraphics::CGPoint CAGradientLayer::startPoint()
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", "startPoint()");
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(startPoint));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public iOS.CoreGraphics.CGPoint get_StartPoint() [instance] :13270
::g::iOS::CoreGraphics::CGPoint CAGradientLayer::StartPoint()
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", "get_StartPoint()");
    return startPoint();
}

// public void set_StartPoint(iOS.CoreGraphics.CGPoint value) [instance] :13271
void CAGradientLayer::StartPoint(::g::iOS::CoreGraphics::CGPoint value)
{
    uStackFrame __("iOS.QuartzCore.CAGradientLayer", "set_StartPoint(iOS.CoreGraphics.CGPoint)");
    setStartPoint(value);
}

// public CAGradientLayer New() [static] :13249
CAGradientLayer* CAGradientLayer::New7()
{
    CAGradientLayer* obj1 = (CAGradientLayer*)uNew(CAGradientLayer_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

}}} // ::g::iOS::QuartzCore
