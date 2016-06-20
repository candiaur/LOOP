// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace Controls{struct Element;}}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace Controls{

// public abstract extern class Element :315
// {
struct Element_type : ::g::Fuse::Node_type
{
    ::g::Uno::UX::IPropertyListener interface4;
    void(*fp_OnPropertyChanged2)(::g::Fuse::iOS::Bindings::Controls::Element*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*);
};

Element_type* Element_typeof();
void Element__ctor_2_fn(Element* __this);
void Element__OnPropertyChanged2_fn(Element* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct Element : ::g::Fuse::Node
{
    void ctor_2();
    void OnPropertyChanged2(::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector prop);
    static void OnPropertyChanged2(Element* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector prop);
};

}}}}} // ::g::Fuse::iOS::Bindings::Controls

#include <Uno.UX.Selector.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace Controls{

inline void Element::OnPropertyChanged2(::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector prop) { (((Element_type*)__type)->fp_OnPropertyChanged2)(this, obj, &prop); }
inline void Element::OnPropertyChanged2(Element* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector prop) { Element__OnPropertyChanged2_fn(__this, obj, &prop); }
// }

}}}}} // ::g::Fuse::iOS::Bindings::Controls
