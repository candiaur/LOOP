// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIApplication
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIApplication*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIApplication_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIApplication.h>
#include <iOS.UIKit.UIInterfaceOrientation.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIApplication :71021
// {
static void UIApplication_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIResponder_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(5,
        new uFunction("_sharedApplication", NULL, (void*)UIApplication___sharedApplication_fn, 0, true, UIApplication_typeof(), 0),
        new uFunction("setStatusBarOrientation", NULL, (void*)UIApplication__setStatusBarOrientation_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIInterfaceOrientation_typeof()),
        new uFunction("statusBarOrientation", NULL, (void*)UIApplication__statusBarOrientation_fn, 0, false, ::g::iOS::UIKit::UIInterfaceOrientation_typeof(), 0),
        new uFunction("get_StatusBarOrientation", NULL, (void*)UIApplication__get_StatusBarOrientation_fn, 0, false, ::g::iOS::UIKit::UIInterfaceOrientation_typeof(), 0),
        new uFunction("set_StatusBarOrientation", NULL, (void*)UIApplication__set_StatusBarOrientation_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIInterfaceOrientation_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::UIKit::UIResponder_type* UIApplication_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIResponder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIApplication);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIResponder_type);
    type = (::g::iOS::UIKit::UIResponder_type*)uClassType::New("iOS.UIKit.UIApplication", options);
    type->SetBase(::g::iOS::UIKit::UIResponder_typeof());
    type->fp_build_ = UIApplication_build;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public static extern iOS.UIKit.UIApplication _sharedApplication() :71142
void UIApplication___sharedApplication_fn(UIApplication** __retval)
{
    *__retval = UIApplication::_sharedApplication();
}

// public extern void setStatusBarOrientation(iOS.UIKit.UIInterfaceOrientation statusBarOrientation) :71226
void UIApplication__setStatusBarOrientation_fn(UIApplication* __this, int* statusBarOrientation_)
{
    __this->setStatusBarOrientation(*statusBarOrientation_);
}

// public extern iOS.UIKit.UIInterfaceOrientation statusBarOrientation() :71223
void UIApplication__statusBarOrientation_fn(UIApplication* __this, int* __retval)
{
    *__retval = __this->statusBarOrientation();
}

// public iOS.UIKit.UIInterfaceOrientation get_StatusBarOrientation() :71073
void UIApplication__get_StatusBarOrientation_fn(UIApplication* __this, int* __retval)
{
    *__retval = __this->StatusBarOrientation();
}

// public void set_StatusBarOrientation(iOS.UIKit.UIInterfaceOrientation value) :71074
void UIApplication__set_StatusBarOrientation_fn(UIApplication* __this, int* value)
{
    __this->StatusBarOrientation(*value);
}

// public extern void setStatusBarOrientation(iOS.UIKit.UIInterfaceOrientation statusBarOrientation) [instance] :71226
void UIApplication::setStatusBarOrientation(int statusBarOrientation_)
{
    uStackFrame __("iOS.UIKit.UIApplication", "setStatusBarOrientation(iOS.UIKit.UIInterfaceOrientation)");
    int statusBarOrientation__ = statusBarOrientation_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setStatusBarOrientation:),
        ::UIInterfaceOrientation(statusBarOrientation__));
}

// public extern iOS.UIKit.UIInterfaceOrientation statusBarOrientation() [instance] :71223
int UIApplication::statusBarOrientation()
{
    uStackFrame __("iOS.UIKit.UIApplication", "statusBarOrientation()");
    ::UIInterfaceOrientation __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIInterfaceOrientation, @selector(statusBarOrientation));
    return int(__return);
}

// public iOS.UIKit.UIInterfaceOrientation get_StatusBarOrientation() [instance] :71073
int UIApplication::StatusBarOrientation()
{
    uStackFrame __("iOS.UIKit.UIApplication", "get_StatusBarOrientation()");
    return statusBarOrientation();
}

// public void set_StatusBarOrientation(iOS.UIKit.UIInterfaceOrientation value) [instance] :71074
void UIApplication::StatusBarOrientation(int value)
{
    uStackFrame __("iOS.UIKit.UIApplication", "set_StatusBarOrientation(iOS.UIKit.UIInterfaceOrientation)");
    setStatusBarOrientation(value);
}

// public static extern iOS.UIKit.UIApplication _sharedApplication() [static] :71142
UIApplication* UIApplication::_sharedApplication()
{
    uStackFrame __("iOS.UIKit.UIApplication", "_sharedApplication()");
    ::UIApplication* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIApplication*, @selector(sharedApplication));
    return (UIApplication*)uObjC::Lifetime::GetUnoObject(__return, UIApplication_typeof());
}
// }

}}} // ::g::iOS::UIKit
