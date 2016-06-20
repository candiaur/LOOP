// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IViewGroup :113
// {
uInterfaceType* IViewGroup_typeof();

struct IViewGroup
{
    void(*fp_Add)(uObject*, uObject*);
    void(*fp_Remove)(uObject*, uObject*);
    static void Add(const uInterface& __this, uObject* child) { __this.VTable<IViewGroup>()->fp_Add(__this, child); }
    static void Remove(const uInterface& __this, uObject* child) { __this.VTable<IViewGroup>()->fp_Remove(__this, child); }
};
// }

}}}} // ::g::Fuse::Controls::Native
