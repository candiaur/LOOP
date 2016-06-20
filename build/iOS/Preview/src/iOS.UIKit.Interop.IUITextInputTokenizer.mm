// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInputTokenizer
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUITextInputTokenizer_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUITextInputTokenizer.h>
#include <iOS.UIKit.UITextGranularity.h>
#include <iOS.UIKit.UITextPosition.h>
#include <iOS.UIKit.UITextRange.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUITextInputTokenizer :8316
// {
static void IUITextInputTokenizer_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUITextInputTokenizer_type, interface0),
        ::g::iOS::UIKit::IUITextInputTokenizer_typeof(), offsetof(IUITextInputTokenizer_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(4,
        new uFunction("isPositionAtBoundaryInDirection", NULL, (void*)IUITextInputTokenizer__isPositionAtBoundaryInDirection_fn, 0, false, ::g::Uno::Bool_typeof(), 3, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextGranularity_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("isPositionWithinTextUnitInDirection", NULL, (void*)IUITextInputTokenizer__isPositionWithinTextUnitInDirection_fn, 0, false, ::g::Uno::Bool_typeof(), 3, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextGranularity_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("positionFromPositionToBoundaryInDirection", NULL, (void*)IUITextInputTokenizer__positionFromPositionToBoundaryInDirection_fn, 0, false, ::g::iOS::UIKit::UITextPosition_typeof(), 3, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextGranularity_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("rangeEnclosingPositionWithGranularityInDirection", NULL, (void*)IUITextInputTokenizer__rangeEnclosingPositionWithGranularityInDirection_fn, 0, false, ::g::iOS::UIKit::UITextRange_typeof(), 3, ::g::iOS::UIKit::UITextPosition_typeof(), ::g::iOS::UIKit::UITextGranularity_typeof(), ::g::Uno::Int_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

IUITextInputTokenizer_type* IUITextInputTokenizer_typeof()
{
    static uSStrong<IUITextInputTokenizer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUITextInputTokenizer);
    options.TypeSize = sizeof(IUITextInputTokenizer_type);
    type = (IUITextInputTokenizer_type*)uClassType::New("iOS.UIKit.Interop.IUITextInputTokenizer", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IUITextInputTokenizer_build;
    type->interface1.fp_rangeEnclosingPositionWithGranularityInDirection = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, int*, int*, ::g::iOS::UIKit::UITextRange**))IUITextInputTokenizer__rangeEnclosingPositionWithGranularityInDirection_fn;
    type->interface1.fp_isPositionAtBoundaryInDirection = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, int*, int*, bool*))IUITextInputTokenizer__isPositionAtBoundaryInDirection_fn;
    type->interface1.fp_positionFromPositionToBoundaryInDirection = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, int*, int*, ::g::iOS::UIKit::UITextPosition**))IUITextInputTokenizer__positionFromPositionToBoundaryInDirection_fn;
    type->interface1.fp_isPositionWithinTextUnitInDirection = (void(*)(uObject*, ::g::iOS::UIKit::UITextPosition*, int*, int*, bool*))IUITextInputTokenizer__isPositionWithinTextUnitInDirection_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern bool isPositionAtBoundaryInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextGranularity granularity, int direction) :8328
void IUITextInputTokenizer__isPositionAtBoundaryInDirection_fn(IUITextInputTokenizer* __this, ::g::iOS::UIKit::UITextPosition* position_, int* granularity_, int* direction_, bool* __retval)
{
    *__retval = __this->isPositionAtBoundaryInDirection(position_, *granularity_, *direction_);
}

// public extern bool isPositionWithinTextUnitInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextGranularity granularity, int direction) :8334
void IUITextInputTokenizer__isPositionWithinTextUnitInDirection_fn(IUITextInputTokenizer* __this, ::g::iOS::UIKit::UITextPosition* position_, int* granularity_, int* direction_, bool* __retval)
{
    *__retval = __this->isPositionWithinTextUnitInDirection(position_, *granularity_, *direction_);
}

// public extern iOS.UIKit.UITextPosition positionFromPositionToBoundaryInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextGranularity granularity, int direction) :8331
void IUITextInputTokenizer__positionFromPositionToBoundaryInDirection_fn(IUITextInputTokenizer* __this, ::g::iOS::UIKit::UITextPosition* position_, int* granularity_, int* direction_, ::g::iOS::UIKit::UITextPosition** __retval)
{
    *__retval = __this->positionFromPositionToBoundaryInDirection(position_, *granularity_, *direction_);
}

// public extern iOS.UIKit.UITextRange rangeEnclosingPositionWithGranularityInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextGranularity granularity, int direction) :8325
void IUITextInputTokenizer__rangeEnclosingPositionWithGranularityInDirection_fn(IUITextInputTokenizer* __this, ::g::iOS::UIKit::UITextPosition* position_, int* granularity_, int* direction_, ::g::iOS::UIKit::UITextRange** __retval)
{
    *__retval = __this->rangeEnclosingPositionWithGranularityInDirection(position_, *granularity_, *direction_);
}

// public extern bool isPositionAtBoundaryInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextGranularity granularity, int direction) [instance] :8328
bool IUITextInputTokenizer::isPositionAtBoundaryInDirection(::g::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_)
{
    uStackFrame __("iOS.UIKit.Interop.IUITextInputTokenizer", "isPositionAtBoundaryInDirection(iOS.UIKit.UITextPosition,iOS.UIKit.UITextGranularity,int)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isPosition:atBoundary:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextGranularity(granularity_),
        (long)direction_);
    return (bool)__return;
}

// public extern bool isPositionWithinTextUnitInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextGranularity granularity, int direction) [instance] :8334
bool IUITextInputTokenizer::isPositionWithinTextUnitInDirection(::g::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_)
{
    uStackFrame __("iOS.UIKit.Interop.IUITextInputTokenizer", "isPositionWithinTextUnitInDirection(iOS.UIKit.UITextPosition,iOS.UIKit.UITextGranularity,int)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isPosition:withinTextUnit:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextGranularity(granularity_),
        (long)direction_);
    return (bool)__return;
}

// public extern iOS.UIKit.UITextPosition positionFromPositionToBoundaryInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextGranularity granularity, int direction) [instance] :8331
::g::iOS::UIKit::UITextPosition* IUITextInputTokenizer::positionFromPositionToBoundaryInDirection(::g::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_)
{
    uStackFrame __("iOS.UIKit.Interop.IUITextInputTokenizer", "positionFromPositionToBoundaryInDirection(iOS.UIKit.UITextPosition,iOS.UIKit.UITextGranularity,int)");
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextPosition*, @selector(positionFromPosition:toBoundary:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextGranularity(granularity_),
        (long)direction_);
    return (::g::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextPosition_typeof());
}

// public extern iOS.UIKit.UITextRange rangeEnclosingPositionWithGranularityInDirection(iOS.UIKit.UITextPosition position, iOS.UIKit.UITextGranularity granularity, int direction) [instance] :8325
::g::iOS::UIKit::UITextRange* IUITextInputTokenizer::rangeEnclosingPositionWithGranularityInDirection(::g::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_)
{
    uStackFrame __("iOS.UIKit.Interop.IUITextInputTokenizer", "rangeEnclosingPositionWithGranularityInDirection(iOS.UIKit.UITextPosition,iOS.UIKit.UITextGranularity,int)");
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextRange*, @selector(rangeEnclosingPosition:withGranularity:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextGranularity(granularity_),
        (long)direction_);
    return (::g::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextRange_typeof());
}
// }

}}}} // ::g::iOS::UIKit::Interop
