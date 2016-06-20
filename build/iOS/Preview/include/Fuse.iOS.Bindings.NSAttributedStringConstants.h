// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct NSAttributedStringConstants;}}}}
namespace g{namespace iOS{namespace Foundation{struct NSString;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class NSAttributedStringConstants :431
// {
uClassType* NSAttributedStringConstants_typeof();

struct NSAttributedStringConstants : uObject
{
    static uSStrong< ::g::iOS::Foundation::NSString*> NSFontAttributeName_;
    static uSStrong< ::g::iOS::Foundation::NSString*>& NSFontAttributeName() { return NSAttributedStringConstants_typeof()->Init(), NSFontAttributeName_; }
    static uSStrong< ::g::iOS::Foundation::NSString*> NSForegroundColorAttributeName_;
    static uSStrong< ::g::iOS::Foundation::NSString*>& NSForegroundColorAttributeName() { return NSAttributedStringConstants_typeof()->Init(), NSForegroundColorAttributeName_; }
    static uSStrong< ::g::iOS::Foundation::NSString*> NSParagraphStyleAttributeName_;
    static uSStrong< ::g::iOS::Foundation::NSString*>& NSParagraphStyleAttributeName() { return NSAttributedStringConstants_typeof()->Init(), NSParagraphStyleAttributeName_; }
};
// }

}}}} // ::g::Fuse::iOS::Bindings
