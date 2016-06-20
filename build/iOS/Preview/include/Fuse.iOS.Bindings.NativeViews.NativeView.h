// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{namespace NativeViews{struct NativeView;}}}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace NativeViews{

// public abstract extern class NativeView :262
// {
struct NativeView_type : ::g::Fuse::Node_type
{
    void(*fp_get_Parent1)(::g::Fuse::iOS::Bindings::NativeViews::NativeView*, ::g::Fuse::iOS::Bindings::NativeViews::NativeView**);
};

NativeView_type* NativeView_typeof();
void NativeView__ctor_3_fn(NativeView* __this);
void NativeView__GetFrom_fn(::g::Fuse::Visual* n, NativeView** __retval);
void NativeView__GetFrom1_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::Visual** __retval);
void NativeView__get_Parent1_fn(NativeView* __this, NativeView** __retval);

struct NativeView : ::g::Fuse::Behavior
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _viewHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _viewHandle() { return NativeView_typeof()->Init(), _viewHandle_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _viewMap_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _viewMap() { return NativeView_typeof()->Init(), _viewMap_; }

    void ctor_3();
    NativeView* Parent1() { NativeView* __retval; return (((NativeView_type*)__type)->fp_get_Parent1)(this, &__retval), __retval; }
    static NativeView* GetFrom(::g::Fuse::Visual* n);
    static ::g::Fuse::Visual* GetFrom1(::g::iOS::UIKit::UIView* view);
    static NativeView* Parent1(NativeView* __this) { NativeView* __retval; return NativeView__get_Parent1_fn(__this, &__retval), __retval; }
};
// }

}}}}} // ::g::Fuse::iOS::Bindings::NativeViews
