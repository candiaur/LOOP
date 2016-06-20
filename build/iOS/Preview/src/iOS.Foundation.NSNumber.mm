// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSNumber
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSNumber*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSNumber_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSNumber.h>
#include <Uno.Double.h>
#include <Uno.Float.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSNumber :46461
// {
static void NSNumber_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSValue_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(::g::iOS::Foundation::NSValue_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(3,
        new uFunction("initWithDouble", NULL, (void*)NSNumber__initWithDouble_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("initWithFloat", NULL, (void*)NSNumber__initWithFloat_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)NSNumber__New7_fn, 0, true, NSNumber_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::Foundation::NSValue_type* NSNumber_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSNumber);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSValue_type);
    type = (::g::iOS::Foundation::NSValue_type*)uClassType::New("iOS.Foundation.NSNumber", options);
    type->SetBase(::g::iOS::Foundation::NSValue_typeof());
    type->fp_build_ = NSNumber_build;
    type->fp_ctor_ = (void*)NSNumber__New7_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public NSNumber() :46464
void NSNumber__ctor_6_fn(NSNumber* __this)
{
    __this->ctor_6();
}

// public extern void initWithDouble(double value) :46580
void NSNumber__initWithDouble_fn(NSNumber* __this, double* value_)
{
    __this->initWithDouble(*value_);
}

// public extern void initWithFloat(float value) :46577
void NSNumber__initWithFloat_fn(NSNumber* __this, float* value_)
{
    __this->initWithFloat(*value_);
}

// public NSNumber New() :46464
void NSNumber__New7_fn(NSNumber** __retval)
{
    *__retval = NSNumber::New7();
}

// public NSNumber() [instance] :46464
void NSNumber::ctor_6()
{
    uStackFrame __("iOS.Foundation.NSNumber", ".ctor()");
    ctor_4();
}

// public extern void initWithDouble(double value) [instance] :46580
void NSNumber::initWithDouble(double value_)
{
    uStackFrame __("iOS.Foundation.NSNumber", "initWithDouble(double)");
    double value__ = value_;
    uObjC_DO_INIT(this, @selector(initWithDouble:),
        value__);
}

// public extern void initWithFloat(float value) [instance] :46577
void NSNumber::initWithFloat(float value_)
{
    uStackFrame __("iOS.Foundation.NSNumber", "initWithFloat(float)");
    float value__ = value_;
    uObjC_DO_INIT(this, @selector(initWithFloat:),
        value__);
}

// public NSNumber New() [static] :46464
NSNumber* NSNumber::New7()
{
    NSNumber* obj1 = (NSNumber*)uNew(NSNumber_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

}}} // ::g::iOS::Foundation
