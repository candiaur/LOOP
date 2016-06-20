// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IGraphicsView :44
// {
uInterfaceType* IGraphicsView_typeof();

struct IGraphicsView
{
    void(*fp_BeginDraw)(uObject*, ::g::Uno::Int2*);
    void(*fp_EndDraw)(uObject*);
    static void BeginDraw(const uInterface& __this, ::g::Uno::Int2 size);
    static void EndDraw(const uInterface& __this) { __this.VTable<IGraphicsView>()->fp_EndDraw(__this); }
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Int2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void IGraphicsView::BeginDraw(const uInterface& __this, ::g::Uno::Int2 size) { __this.VTable<IGraphicsView>()->fp_BeginDraw(__this, &size); }
// }

}}}} // ::g::Fuse::Controls::Native
