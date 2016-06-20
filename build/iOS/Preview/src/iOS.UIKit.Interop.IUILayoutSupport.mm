// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UILayoutSupport
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUILayoutSupport_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUILayoutSupport.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUILayoutSupport :6609
// {
static void IUILayoutSupport_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUILayoutSupport_type, interface0),
        ::g::iOS::UIKit::IUILayoutSupport_typeof(), offsetof(IUILayoutSupport_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction("length", NULL, (void*)IUILayoutSupport__length_fn, 0, false, ::g::Uno::Double_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

IUILayoutSupport_type* IUILayoutSupport_typeof()
{
    static uSStrong<IUILayoutSupport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUILayoutSupport);
    options.TypeSize = sizeof(IUILayoutSupport_type);
    type = (IUILayoutSupport_type*)uClassType::New("iOS.UIKit.Interop.IUILayoutSupport", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IUILayoutSupport_build;
    type->interface1.fp_length = (void(*)(uObject*, double*))IUILayoutSupport__length_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern double length() :6623
void IUILayoutSupport__length_fn(IUILayoutSupport* __this, double* __retval)
{
    *__retval = __this->length();
}

// public extern double length() [instance] :6623
double IUILayoutSupport::length()
{
    uStackFrame __("iOS.UIKit.Interop.IUILayoutSupport", "length()");
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(length));
    return (double)__return;
}
// }

}}}} // ::g::iOS::UIKit::Interop
