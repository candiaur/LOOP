// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSIndexSet
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSIndexSet*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSIndexSet_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSIndexSet.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSIndexSet :42331
// {
static void NSIndexSet_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSIndexSet_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSIndexSet_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

NSIndexSet_type* NSIndexSet_typeof()
{
    static uSStrong<NSIndexSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSIndexSet);
    options.TypeSize = sizeof(NSIndexSet_type);
    type = (NSIndexSet_type*)uClassType::New("iOS.Foundation.NSIndexSet", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSIndexSet_build;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}
// }

}}} // ::g::iOS::Foundation
