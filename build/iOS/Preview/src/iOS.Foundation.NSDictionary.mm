// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSDictionary
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSDictionary*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSDictionary_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSDictionary.h>
#include <ObjC.ID.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSDictionary :39202
// {
static void NSDictionary_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSDictionary_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSDictionary_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

NSDictionary_type* NSDictionary_typeof()
{
    static uSStrong<NSDictionary_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSDictionary);
    options.TypeSize = sizeof(NSDictionary_type);
    type = (NSDictionary_type*)uClassType::New("iOS.Foundation.NSDictionary", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSDictionary_build;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSDictionary__init_fn;
    type->fp_valueForKey = (void(*)(::g::iOS::Foundation::NSObject*, uString*, ::id*))NSDictionary__valueForKey_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public NSDictionary(ObjC.ID __id) :39207
void NSDictionary__ctor_5_fn(NSDictionary* __this, ::id* __id1)
{
    __this->ctor_5(*__id1);
}

// public override extern void init() :39244
void NSDictionary__init_fn(NSDictionary* __this)
{
    uStackFrame __("iOS.Foundation.NSDictionary", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}

// public override sealed extern ObjC.ID valueForKey(string key) :39253
void NSDictionary__valueForKey_fn(NSDictionary* __this, uString* key_, ::id* __retval)
{
    uStackFrame __("iOS.Foundation.NSDictionary", "valueForKey(string)");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::id, @selector(valueForKey:),
        uObjC::NativeString(key_));
    return *__retval = (::id)__return, void();
}

// public NSDictionary(ObjC.ID __id) [instance] :39207
void NSDictionary::ctor_5(::id __id1)
{
    uStackFrame __("iOS.Foundation.NSDictionary", ".ctor(ObjC.ID)");
    ctor_3(__id1);
}
// }

}}} // ::g::iOS::Foundation
