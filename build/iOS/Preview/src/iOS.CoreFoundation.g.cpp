// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.CoreFoundation.CFStringRef.h>

namespace g{
namespace iOS{
namespace CoreFoundation{

// /usr/local/share/uno/Packages/Experimental.iOS/0.29.0/opaque/$.uno
// ------------------------------------------------------------------

// public extern struct CFStringRef :1065
// {
static void CFStringRef_build(uType* type)
{
}

uStructType* CFStringRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(app::CFStringRef*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreFoundation.CFStringRef", options);
    type->fp_build_ = CFStringRef_build;
    return type;
}
// }

}}} // ::g::iOS::CoreFoundation
