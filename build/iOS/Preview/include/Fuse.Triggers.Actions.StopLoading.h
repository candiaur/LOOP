// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.WebView/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct StopLoading;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class StopLoading :550
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof();
void StopLoading__ctor_3_fn(StopLoading* __this);
void StopLoading__Execute_fn(StopLoading* __this, uObject* webview);
void StopLoading__New2_fn(StopLoading** __retval);

struct StopLoading : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    void ctor_3();
    static StopLoading* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
