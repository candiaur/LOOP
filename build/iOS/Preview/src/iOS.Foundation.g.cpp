// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.Foundation._NSRange.h>
#include <iOS.Foundation.NSComparisonResult.h>
#include <iOS.Foundation.NSKeyValueChange.h>
#include <iOS.Foundation.NSKeyValueObservingOptions.h>
#include <iOS.Foundation.NSKeyValueSetMutationKind.h>
#include <Uno.ULong.h>

namespace g{
namespace iOS{
namespace Foundation{

// /usr/local/share/uno/Packages/Experimental.iOS/0.29.0/struct/$.uno
// ------------------------------------------------------------------

// public extern struct _NSRange :4311
// {
static void _NSRange_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::ULong_typeof(), offsetof(::g::iOS::Foundation::_NSRange, Location), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::iOS::Foundation::_NSRange, Length), 0);
    type->Reflection.SetFields(2,
        new uField("Length", 1),
        new uField("Location", 0));
}

uStructType* _NSRange_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(_NSRange);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.Foundation._NSRange", options);
    type->fp_build_ = _NSRange_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Experimental.iOS/0.29.0/enum/$.uno
// ----------------------------------------------------------------

// public enum NSComparisonResult :6088
uEnumType* NSComparisonResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.Foundation.NSComparisonResult", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "NSOrderedAscending", -1LL,
        "NSOrderedSame", 0LL,
        "NSOrderedDescending", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Experimental.iOS/0.29.0/enum/$.uno
// ----------------------------------------------------------------

// public enum NSKeyValueChange :6679
uEnumType* NSKeyValueChange_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.Foundation.NSKeyValueChange", ::g::Uno::UInt_typeof(), 4);
    type->SetLiterals(
        "NSKeyValueChangeSetting", 1LL,
        "NSKeyValueChangeInsertion", 2LL,
        "NSKeyValueChangeRemoval", 3LL,
        "NSKeyValueChangeReplacement", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Experimental.iOS/0.29.0/enum/$.uno
// ----------------------------------------------------------------

// public enum NSKeyValueObservingOptions :6696
uEnumType* NSKeyValueObservingOptions_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.Foundation.NSKeyValueObservingOptions", ::g::Uno::UInt_typeof(), 4);
    type->SetLiterals(
        "NSKeyValueObservingOptionNew", 1LL,
        "NSKeyValueObservingOptionOld", 2LL,
        "NSKeyValueObservingOptionInitial", 4LL,
        "NSKeyValueObservingOptionPrior", 8LL);
    return type;
}

// /usr/local/share/uno/Packages/Experimental.iOS/0.29.0/enum/$.uno
// ----------------------------------------------------------------

// public enum NSKeyValueSetMutationKind :6713
uEnumType* NSKeyValueSetMutationKind_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.Foundation.NSKeyValueSetMutationKind", ::g::Uno::UInt_typeof(), 4);
    type->SetLiterals(
        "NSKeyValueUnionSetMutation", 1LL,
        "NSKeyValueMinusSetMutation", 2LL,
        "NSKeyValueIntersectSetMutation", 3LL,
        "NSKeyValueSetSetMutation", 4LL);
    return type;
}

}}} // ::g::iOS::Foundation
