// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIMotionEffect
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIMotionEffect*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIMotionEffect_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIMotionEffect.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIMotionEffect :77279
// {
static void UIMotionEffect_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIMotionEffect_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(UIMotionEffect_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

UIMotionEffect_type* UIMotionEffect_typeof()
{
    static uSStrong<UIMotionEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIMotionEffect);
    options.TypeSize = sizeof(UIMotionEffect_type);
    type = (UIMotionEffect_type*)uClassType::New("iOS.UIKit.UIMotionEffect", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = UIMotionEffect_build;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}
// }

}}} // ::g::iOS::UIKit
