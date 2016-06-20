// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIDevice
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIDevice*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIDevice_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSUUID.h>
#include <iOS.UIKit.UIDevice.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIDevice :74023
// {
static void UIDevice_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(5,
        new uFunction("_currentDevice", NULL, (void*)UIDevice___currentDevice_fn, 0, true, UIDevice_typeof(), 0),
        new uFunction("identifierForVendor", NULL, (void*)UIDevice__identifierForVendor_fn, 0, false, ::g::iOS::Foundation::NSUUID_typeof(), 0),
        new uFunction("get_IdentifierForVendor", NULL, (void*)UIDevice__get_IdentifierForVendor_fn, 0, false, ::g::iOS::Foundation::NSUUID_typeof(), 0),
        new uFunction("name", NULL, (void*)UIDevice__name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)UIDevice__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::Foundation::NSObject_type* UIDevice_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIDevice);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.UIKit.UIDevice", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = UIDevice_build;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public static extern iOS.UIKit.UIDevice _currentDevice() :74111
void UIDevice___currentDevice_fn(UIDevice** __retval)
{
    *__retval = UIDevice::_currentDevice();
}

// public extern iOS.Foundation.NSUUID identifierForVendor() :74141
void UIDevice__identifierForVendor_fn(UIDevice* __this, ::g::iOS::Foundation::NSUUID** __retval)
{
    *__retval = __this->identifierForVendor();
}

// public iOS.Foundation.NSUUID get_IdentifierForVendor() :74065
void UIDevice__get_IdentifierForVendor_fn(UIDevice* __this, ::g::iOS::Foundation::NSUUID** __retval)
{
    *__retval = __this->IdentifierForVendor();
}

// public extern string name() :74123
void UIDevice__name_fn(UIDevice* __this, uString** __retval)
{
    *__retval = __this->name();
}

// public string get_Name() :74035
void UIDevice__get_Name_fn(UIDevice* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public extern iOS.Foundation.NSUUID identifierForVendor() [instance] :74141
::g::iOS::Foundation::NSUUID* UIDevice::identifierForVendor()
{
    uStackFrame __("iOS.UIKit.UIDevice", "identifierForVendor()");
    ::NSUUID* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSUUID*, @selector(identifierForVendor));
    return (::g::iOS::Foundation::NSUUID*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSUUID_typeof());
}

// public iOS.Foundation.NSUUID get_IdentifierForVendor() [instance] :74065
::g::iOS::Foundation::NSUUID* UIDevice::IdentifierForVendor()
{
    uStackFrame __("iOS.UIKit.UIDevice", "get_IdentifierForVendor()");
    return identifierForVendor();
}

// public extern string name() [instance] :74123
uString* UIDevice::name()
{
    uStackFrame __("iOS.UIKit.UIDevice", "name()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(name));
    return uObjC::UnoString(__return);
}

// public string get_Name() [instance] :74035
uString* UIDevice::Name()
{
    uStackFrame __("iOS.UIKit.UIDevice", "get_Name()");
    return name();
}

// public static extern iOS.UIKit.UIDevice _currentDevice() [static] :74111
UIDevice* UIDevice::_currentDevice()
{
    uStackFrame __("iOS.UIKit.UIDevice", "_currentDevice()");
    ::UIDevice* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIDevice*, @selector(currentDevice));
    return (UIDevice*)uObjC::Lifetime::GetUnoObject(__return, UIDevice_typeof());
}
// }

}}} // ::g::iOS::UIKit
