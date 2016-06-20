// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSUUID
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSUUID*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSUUID_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSUUID.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSUUID :54382
// {
static void NSUUID_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSUUID_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSUUID_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(2,
        new uFunction("uuidString", NULL, (void*)NSUUID__uuidString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_UUIDString", NULL, (void*)NSUUID__get_UUIDString_fn, 0, false, ::g::Uno::String_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

NSUUID_type* NSUUID_typeof()
{
    static uSStrong<NSUUID_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSUUID);
    options.TypeSize = sizeof(NSUUID_type);
    type = (NSUUID_type*)uClassType::New("iOS.Foundation.NSUUID", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSUUID_build;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSUUID__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public override sealed extern void init() :54401
void NSUUID__init_fn(NSUUID* __this)
{
    uStackFrame __("iOS.Foundation.NSUUID", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}

// public extern string uuidString() :54407
void NSUUID__uuidString_fn(NSUUID* __this, uString** __retval)
{
    *__retval = __this->uuidString();
}

// public string get_UUIDString() :54394
void NSUUID__get_UUIDString_fn(NSUUID* __this, uString** __retval)
{
    *__retval = __this->UUIDString();
}

// public extern string uuidString() [instance] :54407
uString* NSUUID::uuidString()
{
    uStackFrame __("iOS.Foundation.NSUUID", "uuidString()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(UUIDString));
    return uObjC::UnoString(__return);
}

// public string get_UUIDString() [instance] :54394
uString* NSUUID::UUIDString()
{
    uStackFrame __("iOS.Foundation.NSUUID", "get_UUIDString()");
    return uuidString();
}
// }

}}} // ::g::iOS::Foundation
