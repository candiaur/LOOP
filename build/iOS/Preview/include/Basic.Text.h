// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.29.22/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Basic{struct Text;}}

namespace g{
namespace Basic{

// public partial sealed class Text :576
// {
::g::Fuse::Controls::TextControl_type* Text_typeof();
void Text__ctor_8_fn(Text* __this);
void Text__InitializeUX_fn(Text* __this);
void Text__New4_fn(Text** __retval);

struct Text : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX();
    static Text* New4();
};
// }

}} // ::g::Basic
