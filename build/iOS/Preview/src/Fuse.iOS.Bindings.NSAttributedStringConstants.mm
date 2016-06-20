// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Bindings.NSAttributedStringConstants.h>
#include <iOS.Foundation.NSString.h>
#include <ObjC.ID.h>
#include <UIKit/NSAttributedString.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class NSAttributedStringConstants :431
// {
// static NSAttributedStringConstants() :431
static void NSAttributedStringConstants__cctor__fn(uType* __type)
{
    NSAttributedStringConstants::NSFontAttributeName_ = ::g::iOS::Foundation::NSString::New6(::NSFontAttributeName);
    NSAttributedStringConstants::NSForegroundColorAttributeName_ = ::g::iOS::Foundation::NSString::New6(::NSForegroundColorAttributeName);
    NSAttributedStringConstants::NSParagraphStyleAttributeName_ = ::g::iOS::Foundation::NSString::New6(::NSParagraphStyleAttributeName);
}

static void NSAttributedStringConstants_build(uType* type)
{
    type->SetFields(0,
        ::g::iOS::Foundation::NSString_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::NSAttributedStringConstants::NSFontAttributeName_, uFieldFlagsStatic,
        ::g::iOS::Foundation::NSString_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::NSAttributedStringConstants::NSForegroundColorAttributeName_, uFieldFlagsStatic,
        ::g::iOS::Foundation::NSString_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::NSAttributedStringConstants::NSParagraphStyleAttributeName_, uFieldFlagsStatic);
}

uClassType* NSAttributedStringConstants_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.NSAttributedStringConstants", options);
    type->fp_build_ = NSAttributedStringConstants_build;
    type->fp_cctor_ = NSAttributedStringConstants__cctor__fn;
    return type;
}

uSStrong< ::g::iOS::Foundation::NSString*> NSAttributedStringConstants::NSFontAttributeName_;
uSStrong< ::g::iOS::Foundation::NSString*> NSAttributedStringConstants::NSForegroundColorAttributeName_;
uSStrong< ::g::iOS::Foundation::NSString*> NSAttributedStringConstants::NSParagraphStyleAttributeName_;
// }

}}}} // ::g::Fuse::iOS::Bindings
