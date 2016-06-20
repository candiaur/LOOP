// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSAttributedString
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSAttributedString*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSAttributedString_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSAttributedString.h>
#include <iOS.Foundation.NSDictionary.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSAttributedString :35883
// {
static void NSAttributedString_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSAttributedString_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSAttributedString_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction("initWithStringAttributes", NULL, (void*)NSAttributedString__initWithStringAttributes_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::iOS::Foundation::NSDictionary_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

NSAttributedString_type* NSAttributedString_typeof()
{
    static uSStrong<NSAttributedString_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSAttributedString);
    options.TypeSize = sizeof(NSAttributedString_type);
    type = (NSAttributedString_type*)uClassType::New("iOS.Foundation.NSAttributedString", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSAttributedString_build;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public NSAttributedString() :35886
void NSAttributedString__ctor_4_fn(NSAttributedString* __this)
{
    __this->ctor_4();
}

// public extern void initWithStringAttributes(string str, iOS.Foundation.NSDictionary attrs) :35916
void NSAttributedString__initWithStringAttributes_fn(NSAttributedString* __this, uString* str_, ::g::iOS::Foundation::NSDictionary* attrs_)
{
    __this->initWithStringAttributes(str_, attrs_);
}

// public NSAttributedString() [instance] :35886
void NSAttributedString::ctor_4()
{
    uStackFrame __("iOS.Foundation.NSAttributedString", ".ctor()");
    ctor_2();
}

// public extern void initWithStringAttributes(string str, iOS.Foundation.NSDictionary attrs) [instance] :35916
void NSAttributedString::initWithStringAttributes(uString* str_, ::g::iOS::Foundation::NSDictionary* attrs_)
{
    uStackFrame __("iOS.Foundation.NSAttributedString", "initWithStringAttributes(string,iOS.Foundation.NSDictionary)");
    uObjC_DO_INIT(this, @selector(initWithString:attributes:),
        uObjC::NativeString(str_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)attrs_));
}
// }

}}} // ::g::iOS::Foundation
