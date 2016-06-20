// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.iOS.Bindings.Controls.Control-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace Controls{struct Image;}}}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace Controls{

// public sealed extern class Image :421
// {
::g::Fuse::iOS::Bindings::Controls::Element_type* Image_typeof();
void Image__ctor_4_fn(Image* __this);
void Image__New2_fn(Image** __retval);

struct Image : ::g::Fuse::iOS::Bindings::Controls::Control
{
    uStrong< ::g::Fuse::Internal::SizingContainer*> _sizing;

    void ctor_4();
    static Image* New2();
};
// }

}}}}} // ::g::Fuse::iOS::Bindings::Controls
