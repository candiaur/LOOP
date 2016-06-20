// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct FocusHelpers__PerformResignFirstResponder;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// private sealed class FocusHelpers.PerformResignFirstResponder :297
// {
uType* FocusHelpers__PerformResignFirstResponder_typeof();
void FocusHelpers__PerformResignFirstResponder__ctor__fn(FocusHelpers__PerformResignFirstResponder* __this, uObject* target);
void FocusHelpers__PerformResignFirstResponder__New1_fn(uObject* target, FocusHelpers__PerformResignFirstResponder** __retval);
void FocusHelpers__PerformResignFirstResponder__ResignFirstResponder_fn(FocusHelpers__PerformResignFirstResponder* __this);

struct FocusHelpers__PerformResignFirstResponder : uObject
{
    uStrong<uObject*> _target;

    void ctor_(uObject* target);
    void ResignFirstResponder();
    static FocusHelpers__PerformResignFirstResponder* New1(uObject* target);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
