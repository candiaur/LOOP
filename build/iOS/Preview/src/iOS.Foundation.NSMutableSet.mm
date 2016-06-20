// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSMutableSet
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSMutableSet*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSMutableSet_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSMutableSet.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSMutableSet :45857
// {
static void NSMutableSet_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSSet_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(::g::iOS::Foundation::NSSet_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::Foundation::NSSet_type* NSMutableSet_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSMutableSet);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSSet_type);
    type = (::g::iOS::Foundation::NSSet_type*)uClassType::New("iOS.Foundation.NSMutableSet", options);
    type->SetBase(::g::iOS::Foundation::NSSet_typeof());
    type->fp_build_ = NSMutableSet_build;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSMutableSet__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public override sealed extern void init() :45877
void NSMutableSet__init_fn(NSMutableSet* __this)
{
    uStackFrame __("iOS.Foundation.NSMutableSet", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}
// }

}}} // ::g::iOS::Foundation
