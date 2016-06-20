// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSString
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSString*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSString_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSString.h>
#include <ObjC.ID.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSString :50735
// {
static void NSString_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSString_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSString_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NSString__New6_fn, 0, true, NSString_typeof(), 1, ::g::ObjC::ID_typeof()),
        new uFunction("stringByAppendingString", NULL, (void*)NSString__stringByAppendingString_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

NSString_type* NSString_typeof()
{
    static uSStrong<NSString_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSString);
    options.TypeSize = sizeof(NSString_type);
    type = (NSString_type*)uClassType::New("iOS.Foundation.NSString", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSString_build;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSString__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public NSString(ObjC.ID __id) :50740
void NSString__ctor_5_fn(NSString* __this, ::id* __id1)
{
    __this->ctor_5(*__id1);
}

// public override sealed extern void init() :50894
void NSString__init_fn(NSString* __this)
{
    uStackFrame __("iOS.Foundation.NSString", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}

// public NSString New(ObjC.ID __id) :50740
void NSString__New6_fn(::id* __id1, NSString** __retval)
{
    *__retval = NSString::New6(*__id1);
}

// public extern string stringByAppendingString(string aString) :51065
void NSString__stringByAppendingString_fn(NSString* __this, uString* aString_, uString** __retval)
{
    *__retval = __this->stringByAppendingString(aString_);
}

// public NSString(ObjC.ID __id) [instance] :50740
void NSString::ctor_5(::id __id1)
{
    uStackFrame __("iOS.Foundation.NSString", ".ctor(ObjC.ID)");
    ctor_3(__id1);
}

// public extern string stringByAppendingString(string aString) [instance] :51065
uString* NSString::stringByAppendingString(uString* aString_)
{
    uStackFrame __("iOS.Foundation.NSString", "stringByAppendingString(string)");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(stringByAppendingString:),
        uObjC::NativeString(aString_));
    return uObjC::UnoString(__return);
}

// public NSString New(ObjC.ID __id) [static] :50740
NSString* NSString::New6(::id __id1)
{
    NSString* obj2 = (NSString*)uNew(NSString_typeof());
    obj2->ctor_5(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::Foundation
