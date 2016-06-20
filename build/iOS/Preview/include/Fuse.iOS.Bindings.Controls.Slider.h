// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.iOS.Bindings.Controls.Control-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace Controls{struct Slider;}}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace Controls{struct ViewContainer;}}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct ControlEvent;}}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace UIKit{struct UISlider;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace Controls{

// public sealed extern class Slider :837
// {
::g::Fuse::iOS::Bindings::Controls::Element_type* Slider_typeof();
void Slider__ctor_4_fn(Slider* __this);
void Slider__New2_fn(Slider** __retval);
void Slider__OnFrameChanged_fn(Slider* __this, uObject* sender, ::g::iOS::CoreGraphics::CGRect* frame);

struct Slider : ::g::Fuse::iOS::Bindings::Controls::Control
{
    uStrong< ::g::iOS::UIKit::UISlider*> _slider;
    uStrong< ::g::Fuse::iOS::Bindings::Controls::ViewContainer*> _sliderContainer;
    uStrong< ::g::Fuse::iOS::Bindings::ControlEvent*> _valueChangedEvent;

    void ctor_4();
    void OnFrameChanged(uObject* sender, ::g::iOS::CoreGraphics::CGRect frame);
    static Slider* New2();
};
// }

}}}}} // ::g::Fuse::iOS::Bindings::Controls
