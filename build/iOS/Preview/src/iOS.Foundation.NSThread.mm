// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSThread
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSThread*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSThread_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSThread.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSThread :51925
// {
static void NSThread_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::Foundation::NSObject_type* NSThread_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NSThread);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.Foundation.NSThread", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSThread_build;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSThread__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public override sealed extern void init() :52021
void NSThread__init_fn(NSThread* __this)
{
    uStackFrame __("iOS.Foundation.NSThread", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}
// }

}}} // ::g::iOS::Foundation
