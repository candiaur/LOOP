// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSBundle
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSBundle*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSBundle_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSBundle.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSBundle :36145
// {
static void NSBundle_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(2,
        new uFunction("_mainBundle", NULL, (void*)NSBundle___mainBundle_fn, 0, true, NSBundle_typeof(), 0),
        new uFunction("pathForResourceOfType", NULL, (void*)NSBundle__pathForResourceOfType_fn, 0, false, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::Foundation::NSObject_type* NSBundle_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NSBundle);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.Foundation.NSBundle", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSBundle_build;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public static extern iOS.Foundation.NSBundle _mainBundle() :36276
void NSBundle___mainBundle_fn(NSBundle** __retval)
{
    *__retval = NSBundle::_mainBundle();
}

// public extern string pathForResourceOfType(string name, string ext) :36348
void NSBundle__pathForResourceOfType_fn(NSBundle* __this, uString* name_, uString* ext_, uString** __retval)
{
    *__retval = __this->pathForResourceOfType(name_, ext_);
}

// public extern string pathForResourceOfType(string name, string ext) [instance] :36348
uString* NSBundle::pathForResourceOfType(uString* name_, uString* ext_)
{
    uStackFrame __("iOS.Foundation.NSBundle", "pathForResourceOfType(string,string)");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(pathForResource:ofType:),
        uObjC::NativeString(name_),
        uObjC::NativeString(ext_));
    return uObjC::UnoString(__return);
}

// public static extern iOS.Foundation.NSBundle _mainBundle() [static] :36276
NSBundle* NSBundle::_mainBundle()
{
    uStackFrame __("iOS.Foundation.NSBundle", "_mainBundle()");
    ::NSBundle* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::NSBundle*, @selector(mainBundle));
    return (NSBundle*)uObjC::Lifetime::GetUnoObject(__return, NSBundle_typeof());
}
// }

}}} // ::g::iOS::Foundation
