// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface IPlayerFeedback :3834
// {
uInterfaceType* IPlayerFeedback_typeof();

struct IPlayerFeedback
{
    void(*fp_OnPlaybackDone)(uObject*, uObject*);
    void(*fp_OnProgressUpdated)(uObject*, uObject*);
    static void OnPlaybackDone(const uInterface& __this, uObject* s) { __this.VTable<IPlayerFeedback>()->fp_OnPlaybackDone(__this, s); }
    static void OnProgressUpdated(const uInterface& __this, uObject* s) { __this.VTable<IPlayerFeedback>()->fp_OnProgressUpdated(__this, s); }
};
// }

}}} // ::g::Fuse::Animations
