// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSMutableOrderedSet
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSMutableOrderedSet*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSMutableOrderedSet_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSMutableOrderedSet.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSMutableOrderedSet :45639
// {
static void NSMutableOrderedSet_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSMutableOrderedSet_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSMutableOrderedSet_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

NSMutableOrderedSet_type* NSMutableOrderedSet_typeof()
{
    static uSStrong<NSMutableOrderedSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSMutableOrderedSet);
    options.TypeSize = sizeof(NSMutableOrderedSet_type);
    type = (NSMutableOrderedSet_type*)uClassType::New("iOS.Foundation.NSMutableOrderedSet", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSMutableOrderedSet_build;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSMutableOrderedSet__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public override sealed extern void init() :45662
void NSMutableOrderedSet__init_fn(NSMutableOrderedSet* __this)
{
    uStackFrame __("iOS.Foundation.NSMutableOrderedSet", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}
// }

}}} // ::g::iOS::Foundation
