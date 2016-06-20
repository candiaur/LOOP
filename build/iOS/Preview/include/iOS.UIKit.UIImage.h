// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{struct UIImage;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIImage :75521
// {
::g::iOS::Foundation::NSObject_type* UIImage_typeof();
void UIImage___imageWithContentsOfFile_fn(uString* path_, UIImage** __retval);

struct UIImage : ::g::iOS::Foundation::NSObject
{
    static UIImage* _imageWithContentsOfFile(uString* path_);
};
// }

}}} // ::g::iOS::UIKit
