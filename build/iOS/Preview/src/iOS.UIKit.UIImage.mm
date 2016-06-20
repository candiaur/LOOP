// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIImage
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIImage*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIImage_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIImage.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIImage :75521
// {
static void UIImage_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction("_imageWithContentsOfFile", NULL, (void*)UIImage___imageWithContentsOfFile_fn, 0, true, UIImage_typeof(), 1, ::g::Uno::String_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::Foundation::NSObject_type* UIImage_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIImage);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.UIKit.UIImage", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = UIImage_build;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public static extern iOS.UIKit.UIImage _imageWithContentsOfFile(string path) :75613
void UIImage___imageWithContentsOfFile_fn(uString* path_, UIImage** __retval)
{
    *__retval = UIImage::_imageWithContentsOfFile(path_);
}

// public static extern iOS.UIKit.UIImage _imageWithContentsOfFile(string path) [static] :75613
UIImage* UIImage::_imageWithContentsOfFile(uString* path_)
{
    uStackFrame __("iOS.UIKit.UIImage", "_imageWithContentsOfFile(string)");
    ::UIImage* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIImage*, @selector(imageWithContentsOfFile:),
        uObjC::NativeString(path_));
    return (UIImage*)uObjC::Lifetime::GetUnoObject(__return, UIImage_typeof());
}
// }

}}} // ::g::iOS::UIKit
