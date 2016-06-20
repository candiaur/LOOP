// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSURL
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSURL*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSURL_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSURL.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSURL :52344
// {
static void NSURL_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSURL_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSURL_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(4,
        new uFunction("absoluteString", NULL, (void*)NSURL__absoluteString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_AbsoluteString", NULL, (void*)NSURL__get_AbsoluteString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("initWithString", NULL, (void*)NSURL__initWithString_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)NSURL__New5_fn, 0, true, NSURL_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

NSURL_type* NSURL_typeof()
{
    static uSStrong<NSURL_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSURL);
    options.TypeSize = sizeof(NSURL_type);
    type = (NSURL_type*)uClassType::New("iOS.Foundation.NSURL", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSURL_build;
    type->fp_ctor_ = (void*)NSURL__New5_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public NSURL() :52347
void NSURL__ctor_4_fn(NSURL* __this)
{
    __this->ctor_4();
}

// public extern string absoluteString() :52555
void NSURL__absoluteString_fn(NSURL* __this, uString** __retval)
{
    *__retval = __this->absoluteString();
}

// public string get_AbsoluteString() :52356
void NSURL__get_AbsoluteString_fn(NSURL* __this, uString** __retval)
{
    *__retval = __this->AbsoluteString();
}

// public extern void initWithString(string URLString) :52495
void NSURL__initWithString_fn(NSURL* __this, uString* URLString_)
{
    __this->initWithString(URLString_);
}

// public NSURL New() :52347
void NSURL__New5_fn(NSURL** __retval)
{
    *__retval = NSURL::New5();
}

// public NSURL() [instance] :52347
void NSURL::ctor_4()
{
    uStackFrame __("iOS.Foundation.NSURL", ".ctor()");
    ctor_2();
}

// public extern string absoluteString() [instance] :52555
uString* NSURL::absoluteString()
{
    uStackFrame __("iOS.Foundation.NSURL", "absoluteString()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(absoluteString));
    return uObjC::UnoString(__return);
}

// public string get_AbsoluteString() [instance] :52356
uString* NSURL::AbsoluteString()
{
    uStackFrame __("iOS.Foundation.NSURL", "get_AbsoluteString()");
    return absoluteString();
}

// public extern void initWithString(string URLString) [instance] :52495
void NSURL::initWithString(uString* URLString_)
{
    uStackFrame __("iOS.Foundation.NSURL", "initWithString(string)");
    uObjC_DO_INIT(this, @selector(initWithString:),
        uObjC::NativeString(URLString_));
}

// public NSURL New() [static] :52347
NSURL* NSURL::New5()
{
    NSURL* obj1 = (NSURL*)uNew(NSURL_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::iOS::Foundation
