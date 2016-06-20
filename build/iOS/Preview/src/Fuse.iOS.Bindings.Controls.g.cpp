// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.iOS.Bindings.ControlEvent.h>
#include <Fuse.iOS.Bindings.Controls.Button.h>
#include <Fuse.iOS.Bindings.Controls.Circle.h>
#include <Fuse.iOS.Bindings.Controls.Control-1.h>
#include <Fuse.iOS.Bindings.Controls.Element.h>
#include <Fuse.iOS.Bindings.Controls.Image.h>
#include <Fuse.iOS.Bindings.Controls.ImageCache.h>
#include <Fuse.iOS.Bindings.Controls.ITextInputImpl.h>
#include <Fuse.iOS.Bindings.Controls.MultilineTextInput.h>
#include <Fuse.iOS.Bindings.Controls.Rectangle.h>
#include <Fuse.iOS.Bindings.Controls.Shape-1.h>
#include <Fuse.iOS.Bindings.Controls.SingleLineTextInput.h>
#include <Fuse.iOS.Bindings.Controls.Slider.h>
#include <Fuse.iOS.Bindings.Controls.Switch.h>
#include <Fuse.iOS.Bindings.Controls.TextBlock.h>
#include <Fuse.iOS.Bindings.Controls.TextInput.h>
#include <Fuse.iOS.Bindings.Controls.ViewContainer.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
#include <iOS.UIKit.IUITextInput.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIEdgeInsets.h>
#include <iOS.UIKit.UIFont.h>
#include <iOS.UIKit.UIImage.h>
#include <iOS.UIKit.UILabel.h>
#include <iOS.UIKit.UIScrollView.h>
#include <iOS.UIKit.UISlider.h>
#include <iOS.UIKit.UISwitch.h>
#include <iOS.UIKit.UITextField.h>
#include <iOS.UIKit.UITextView.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[3];
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{
namespace Controls{

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public sealed extern class Button :59
// {
// ~Button() :138
static void Button__Finalize_fn(Button* __this)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Button", "Finalize()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_clickedEvent), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        uPtr(__this->_clickedEvent)->Dispose();
}

static void Button_build(uType* type)
{
    ::TYPES[0] = ::g::ObjC::Bindings::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface4));
    type->SetFields(13,
        ::g::Fuse::iOS::Bindings::ControlEvent_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Button, _clickedEvent), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Button__New2_fn, 0, true, Button_typeof(), 0));
}

::g::Fuse::iOS::Bindings::Controls::Element_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::Controls::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::Controls::Element_type);
    type = (::g::Fuse::iOS::Bindings::Controls::Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.Button", options);
    type->SetBase(::g::Fuse::iOS::Bindings::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Button_typeof()));
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New2_fn;
    type->fp_Finalize = (void(*)(uObject*))Button__Finalize_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::iOS::Bindings::Controls::Element__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Button() :59
void Button__ctor_4_fn(Button* __this)
{
    __this->ctor_4();
}

// public generated Button New() :59
void Button__New2_fn(Button** __retval)
{
    *__retval = Button::New2();
}

// public generated Button() [instance] :59
void Button::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Button", ".ctor()");
    ctor_3();
}

// public generated Button New() [static] :59
Button* Button::New2()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public sealed extern class Circle :198
// {
static void Circle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface4));
    type->SetFields(13);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Circle__New2_fn, 0, true, Circle_typeof(), 0));
}

::g::Fuse::iOS::Bindings::Controls::Element_type* Circle_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::Controls::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::Controls::Element_type);
    type = (::g::Fuse::iOS::Bindings::Controls::Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.Circle", options);
    type->SetBase(::g::Fuse::iOS::Bindings::Controls::Shape_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof()));
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New2_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::iOS::Bindings::Controls::Element__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Circle() :198
void Circle__ctor_5_fn(Circle* __this)
{
    __this->ctor_5();
}

// public generated Circle New() :198
void Circle__New2_fn(Circle** __retval)
{
    *__retval = Circle::New2();
}

// public generated Circle() [instance] :198
void Circle::ctor_5()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Circle", ".ctor()");
    ctor_4();
}

// public generated Circle New() [static] :198
Circle* Circle::New2()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public abstract extern class Control<T> :244
// {
static void Control_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface4));
    type->SetFields(13);
}

::g::Fuse::iOS::Bindings::Controls::Element_type* Control_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::Controls::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Control);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::Controls::Element_type);
    type = (::g::Fuse::iOS::Bindings::Controls::Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.Control`1", options);
    type->SetBase(::g::Fuse::iOS::Bindings::Controls::Element_typeof());
    type->fp_build_ = Control_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Control__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Control__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::iOS::Bindings::Controls::Element__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated Control() :244
void Control__ctor_3_fn(Control* __this)
{
    __this->ctor_3();
}

// protected override sealed void OnRooted() :260
void Control__OnRooted_fn(Control* __this)
{
}

// protected override sealed void OnUnrooted() :265
void Control__OnUnrooted_fn(Control* __this)
{
}

// protected generated Control() [instance] :244
void Control::ctor_3()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Control`1", ".ctor()");
    ctor_2();
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public abstract extern class Element :315
// {
static void Element_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Element_type, interface4));
    type->SetFields(13);
    type->Reflection.SetFunctions(1,
        new uFunction("OnPropertyChanged", NULL, NULL, offsetof(Element_type, fp_OnPropertyChanged2), false, uVoid_typeof(), 2, ::g::Uno::UX::PropertyObject_typeof(), ::g::Uno::UX::Selector_typeof()));
}

Element_type* Element_typeof()
{
    static uSStrong<Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Element);
    options.TypeSize = sizeof(Element_type);
    type = (Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.Element", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_build_ = Element_build;
    type->fp_OnPropertyChanged2 = Element__OnPropertyChanged2_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Element__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Element() :317
void Element__ctor_2_fn(Element* __this)
{
    __this->ctor_2();
}

// public virtual void OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :322
void Element__OnPropertyChanged2_fn(Element* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
}

// public Element() [instance] :317
void Element::ctor_2()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Element", ".ctor()");
    ctor_1();
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public sealed extern class Image :421
// {
static void Image_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface4));
    type->SetFields(13,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Image, _sizing), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Image__New2_fn, 0, true, Image_typeof(), 0));
}

::g::Fuse::iOS::Bindings::Controls::Element_type* Image_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::Controls::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Image);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::Controls::Element_type);
    type = (::g::Fuse::iOS::Bindings::Controls::Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.Image", options);
    type->SetBase(::g::Fuse::iOS::Bindings::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Image_typeof()));
    type->fp_build_ = Image_build;
    type->fp_ctor_ = (void*)Image__New2_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::iOS::Bindings::Controls::Element__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Image() :421
void Image__ctor_4_fn(Image* __this)
{
    __this->ctor_4();
}

// public generated Image New() :421
void Image__New2_fn(Image** __retval)
{
    *__retval = Image::New2();
}

// public generated Image() [instance] :421
void Image::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Image", ".ctor()");
    _sizing = ::g::Fuse::Internal::SizingContainer::New1();
    ctor_3();
}

// public generated Image New() [static] :421
Image* Image::New2()
{
    Image* obj1 = (Image*)uNew(Image_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// internal static extern class ImageCache :400
// {
// static ImageCache() :400
static void ImageCache__cctor__fn(uType* __type)
{
    ImageCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<Uno.UX.FileSource, iOS.UIKit.UIImage>*/]));
}

static void ImageCache_build(uType* type)
{
    ::STRINGS[0] = uString::Const("/tempImage");
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::iOS::UIKit::UIImage_typeof());
    ::TYPES[2] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::iOS::UIKit::UIImage_typeof()), (uintptr_t)&::g::Fuse::iOS::Bindings::Controls::ImageCache::_cache_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::Controls::ImageCache::_tempCount_, uFieldFlagsStatic);
}

uClassType* ImageCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.Controls.ImageCache", options);
    type->fp_build_ = ImageCache_build;
    type->fp_cctor_ = ImageCache__cctor__fn;
    return type;
}

// public static iOS.UIKit.UIImage GetImage(Uno.UX.FileSource fileSource) :406
void ImageCache__GetImage_fn(::g::Uno::UX::FileSource* fileSource, ::g::iOS::UIKit::UIImage** __retval)
{
    *__retval = ImageCache::GetImage(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ImageCache::_cache_;
int ImageCache::_tempCount_;

// public static iOS.UIKit.UIImage GetImage(Uno.UX.FileSource fileSource) [static] :406
::g::iOS::UIKit::UIImage* ImageCache::GetImage(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.ImageCache", "GetImage(Uno.UX.FileSource)");
    ImageCache_typeof()->Init();
    bool ret1;
    ::g::iOS::UIKit::UIImage* ret2;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageCache::_cache()), fileSource, &ret1), ret1))
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[0/*"/tempImage"*/]), uBox<int>(::g::Uno::Int_typeof(), ImageCache::_tempCount()++));
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageCache::_cache()), fileSource, ::g::iOS::UIKit::UIImage::_imageWithContentsOfFile(path));
    }

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ImageCache::_cache()), fileSource, &ret2), ret2);
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// internal abstract extern interface ITextInputImpl :1340
// {
uInterfaceType* ITextInputImpl_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.iOS.Bindings.Controls.ITextInputImpl", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class MultilineTextInput :1476
// {
static void MultilineTextInput_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::TYPES[3] = ::g::iOS::UIKit::IUITextInput_typeof();
    ::TYPES[4] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Delegate_typeof();
    type->SetInterfaces(
        ::g::Fuse::iOS::Bindings::Controls::ITextInputImpl_typeof(), offsetof(MultilineTextInput_type, interface0));
    type->SetFields(0,
        ::g::iOS::UIKit::UILabel_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::MultilineTextInput, _placeholderLabel), 0,
        ::g::iOS::UIKit::UITextView_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::MultilineTextInput, _textView), 0,
        ::g::Fuse::Controls::TextEdit_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::MultilineTextInput, _SemanticControl), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::MultilineTextInput, TextChanged1), 0);
}

MultilineTextInput_type* MultilineTextInput_typeof()
{
    static uSStrong<MultilineTextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MultilineTextInput);
    options.TypeSize = sizeof(MultilineTextInput_type);
    type = (MultilineTextInput_type*)uClassType::New("Fuse.iOS.Bindings.Controls.MultilineTextInput", options);
    type->fp_build_ = MultilineTextInput_build;
    type->fp_ctor_ = (void*)MultilineTextInput__New1_fn;
    type->interface0.fp_get_LineCount = (void(*)(uObject*, int*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_LineCount_fn;
    type->interface0.fp_get_Frame = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_Frame_fn;
    type->interface0.fp_set_Frame = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_Frame_fn;
    type->interface0.fp_get_View = (void(*)(uObject*, ::g::iOS::UIKit::UIView**))MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_View_fn;
    type->interface0.fp_get_SemanticControl = (void(*)(uObject*, ::g::Fuse::Controls::TextEdit**))MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_SemanticControl_fn;
    type->interface0.fp_set_SemanticControl = (void(*)(uObject*, ::g::Fuse::Controls::TextEdit*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_SemanticControl_fn;
    type->interface0.fp_get_IUITextInput = (void(*)(uObject*, uObject**))MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_IUITextInput_fn;
    type->interface0.fp_set_TextColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_TextColor_fn;
    type->interface0.fp_set_CaretColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_CaretColor_fn;
    type->interface0.fp_set_TextAlignment = (void(*)(uObject*, int*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_TextAlignment_fn;
    type->interface0.fp_get_Font = (void(*)(uObject*, ::g::iOS::UIKit::UIFont**))MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_Font_fn;
    type->interface0.fp_set_Font = (void(*)(uObject*, ::g::iOS::UIKit::UIFont*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_Font_fn;
    type->interface0.fp_get_Text = (void(*)(uObject*, uString**))MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_Text_fn;
    type->interface0.fp_set_Text = (void(*)(uObject*, uString*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_Text_fn;
    type->interface0.fp_set_PlaceholderText = (void(*)(uObject*, uString*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderText_fn;
    type->interface0.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderColor_fn;
    type->interface0.fp_add_TextChanged = (void(*)(uObject*, uDelegate*))MultilineTextInput__add_TextChanged_fn;
    type->interface0.fp_remove_TextChanged = (void(*)(uObject*, uDelegate*))MultilineTextInput__remove_TextChanged_fn;
    return type;
}

// public generated MultilineTextInput() :1476
void MultilineTextInput__ctor__fn(MultilineTextInput* __this)
{
    __this->ctor_();
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_CaretColor(iOS.UIKit.UIColor value) :1570
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_CaretColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_CaretColor(iOS.UIKit.UIColor)");
    uPtr(__this->TextView())->TintColor(value);
}

// private iOS.UIKit.UIFont Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Font() :1584
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_Font_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIFont** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Font()");
    return *__retval = uPtr(__this->TextView())->Font(), void();
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Font(iOS.UIKit.UIFont value) :1585
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_Font_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIFont* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Font(iOS.UIKit.UIFont)");
    uPtr(__this->TextView())->Font(value);
    uPtr(__this->_placeholderLabel)->Font(value);
}

// private iOS.CoreGraphics.CGRect Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Frame() :1536
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_Frame_fn(MultilineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Frame()");
    return *__retval = uPtr(__this->TextView())->Frame(), void();
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Frame(iOS.CoreGraphics.CGRect value) :1537
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_Frame_fn(MultilineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Frame(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect value_ = *value;
    int lineCount = __this->LineCount();

    if (lineCount == 1)
        uPtr(__this->TextView())->ScrollEnabled(false);

    uPtr(__this->TextView())->Frame(value_);

    if (lineCount == 1)
        uPtr(__this->TextView())->ScrollEnabled(true);
}

// private iOS.UIKit.IUITextInput Fuse.iOS.Bindings.Controls.ITextInputImpl.get_IUITextInput() :1560
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_IUITextInput_fn(MultilineTextInput* __this, uObject** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_IUITextInput()");
    return *__retval = (uObject*)__this->TextView(), void();
}

// private int Fuse.iOS.Bindings.Controls.ITextInputImpl.get_LineCount() :1522
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_LineCount_fn(MultilineTextInput* __this, int* __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_LineCount()");
    return *__retval = __this->LineCount(), void();
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_PlaceholderColor(iOS.UIKit.UIColor value) :1614
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_PlaceholderColor(iOS.UIKit.UIColor)");
    uPtr(__this->_placeholderLabel)->TextColor(value);
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_PlaceholderText(string value) :1605
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderText_fn(MultilineTextInput* __this, uString* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_PlaceholderText(string)");
    uPtr(__this->_placeholderLabel)->Text((value != NULL) ? value : ::STRINGS[1/*""*/]);
    __this->UpdatePlaceholder();
}

// private generated Fuse.Controls.TextEdit Fuse.iOS.Bindings.Controls.ITextInputImpl.get_SemanticControl() :1556
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_SemanticControl_fn(MultilineTextInput* __this, ::g::Fuse::Controls::TextEdit** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_SemanticControl()");
    return *__retval = __this->_SemanticControl, void();
}

// private generated void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_SemanticControl(Fuse.Controls.TextEdit value) :1556
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_SemanticControl_fn(MultilineTextInput* __this, ::g::Fuse::Controls::TextEdit* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_SemanticControl(Fuse.Controls.TextEdit)");
    __this->_SemanticControl = value;
}

// private string Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Text() :1594
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_Text_fn(MultilineTextInput* __this, uString** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Text()");
    uString* ind1 = uPtr(__this->TextView())->Text();
    return *__retval = (ind1 != NULL) ? ind1 : ::STRINGS[1/*""*/], void();
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Text(string value) :1595
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_Text_fn(MultilineTextInput* __this, uString* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Text(string)");
    uPtr(__this->TextView())->ScrollEnabled(false);
    uPtr(__this->TextView())->Text((value != NULL) ? value : ::STRINGS[1/*""*/]);
    uPtr(__this->TextView())->ScrollEnabled(true);
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_TextAlignment(iOS.UIKit.NSTextAlignment value) :1575
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_TextAlignment_fn(MultilineTextInput* __this, int* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_TextAlignment(iOS.UIKit.NSTextAlignment)");
    int value_ = *value;
    uPtr(__this->TextView())->TextAlignment(value_);
    uPtr(__this->_placeholderLabel)->TextAlignment(value_);
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_TextColor(iOS.UIKit.UIColor value) :1565
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplset_TextColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_TextColor(iOS.UIKit.UIColor)");
    uPtr(__this->TextView())->TextColor(value);
}

// private iOS.UIKit.UIView Fuse.iOS.Bindings.Controls.ITextInputImpl.get_View() :1553
void MultilineTextInput__FuseiOSBindingsControlsITextInputImplget_View_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_View()");
    return *__retval = __this->TextView(), void();
}

// private int get_LineCount() :1510
void MultilineTextInput__get_LineCount_fn(MultilineTextInput* __this, int* __retval)
{
    *__retval = __this->LineCount();
}

// public generated MultilineTextInput New() :1476
void MultilineTextInput__New1_fn(MultilineTextInput** __retval)
{
    *__retval = MultilineTextInput::New1();
}

// public generated void add_TextChanged(Uno.EventHandler value) :1620
void MultilineTextInput__add_TextChanged_fn(MultilineTextInput* __this, uDelegate* value)
{
    __this->add_TextChanged(value);
}

// public generated void remove_TextChanged(Uno.EventHandler value) :1620
void MultilineTextInput__remove_TextChanged_fn(MultilineTextInput* __this, uDelegate* value)
{
    __this->remove_TextChanged(value);
}

// private iOS.UIKit.UITextView get_TextView() :1483
void MultilineTextInput__get_TextView_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView** __retval)
{
    *__retval = __this->TextView();
}

// private void UpdatePlaceholder() :1622
void MultilineTextInput__UpdatePlaceholder_fn(MultilineTextInput* __this)
{
    __this->UpdatePlaceholder();
}

// public generated MultilineTextInput() [instance] :1476
void MultilineTextInput::ctor_()
{
}

// private int get_LineCount() [instance] :1510
int MultilineTextInput::LineCount()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "get_LineCount()");
    double height = (uPtr(TextView())->ContentSize().Height - uPtr(TextView())->TextContainerInset().Top) - uPtr(TextView())->TextContainerInset().Bottom;
    int lineCount = (int)(height / uPtr(uPtr(TextView())->Font())->LineHeight());
    return (lineCount > 0) ? lineCount : 1;
}

// public generated void add_TextChanged(Uno.EventHandler value) [instance] :1620
void MultilineTextInput::add_TextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "add_TextChanged(Uno.EventHandler)");
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextChanged1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_TextChanged(Uno.EventHandler value) [instance] :1620
void MultilineTextInput::remove_TextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "remove_TextChanged(Uno.EventHandler)");
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextChanged1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// private iOS.UIKit.UITextView get_TextView() [instance] :1483
::g::iOS::UIKit::UITextView* MultilineTextInput::TextView()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "get_TextView()");
    return _textView;
}

// private void UpdatePlaceholder() [instance] :1622
void MultilineTextInput::UpdatePlaceholder()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.MultilineTextInput", "UpdatePlaceholder()");

    if (::g::Uno::String::IsNullOrEmpty(uPtr(TextView())->Text()) && !::g::Uno::String::IsNullOrEmpty(uPtr(_placeholderLabel)->Text()))
    {
        uPtr(_placeholderLabel)->sizeToFit();
        uPtr(_placeholderLabel)->Alpha(1.0);
    }
    else
        uPtr(_placeholderLabel)->Alpha(0.0);
}

// public generated MultilineTextInput New() [static] :1476
MultilineTextInput* MultilineTextInput::New1()
{
    MultilineTextInput* obj2 = (MultilineTextInput*)uNew(MultilineTextInput_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public sealed extern class Rectangle :610
// {
static void Rectangle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface4));
    type->SetFields(13);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Rectangle__New2_fn, 0, true, Rectangle_typeof(), 0));
}

::g::Fuse::iOS::Bindings::Controls::Element_type* Rectangle_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::Controls::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::Controls::Element_type);
    type = (::g::Fuse::iOS::Bindings::Controls::Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.Rectangle", options);
    type->SetBase(::g::Fuse::iOS::Bindings::Controls::Shape_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof()));
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New2_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::iOS::Bindings::Controls::Element__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Rectangle() :610
void Rectangle__ctor_5_fn(Rectangle* __this)
{
    __this->ctor_5();
}

// public generated Rectangle New() :610
void Rectangle__New2_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New2();
}

// public generated Rectangle() [instance] :610
void Rectangle::ctor_5()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Rectangle", ".ctor()");
    ctor_4();
}

// public generated Rectangle New() [static] :610
Rectangle* Rectangle::New2()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public abstract extern class Shape<T> :673
// {
static void Shape_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface4));
    type->SetFields(13);
}

::g::Fuse::iOS::Bindings::Controls::Element_type* Shape_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::Controls::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::Controls::Element_type);
    type = (::g::Fuse::iOS::Bindings::Controls::Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.Shape`1", options);
    type->SetBase(::g::Fuse::iOS::Bindings::Controls::Control_typeof()->MakeType(type->T(0)));
    type->fp_build_ = Shape_build;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::iOS::Bindings::Controls::Element__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated Shape() :673
void Shape__ctor_4_fn(Shape* __this)
{
    __this->ctor_4();
}

// protected generated Shape() [instance] :673
void Shape::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Shape`1", ".ctor()");
    ctor_3();
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class SingleLineTextInput :1357
// {
static void SingleLineTextInput_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::TYPES[3] = ::g::iOS::UIKit::IUITextInput_typeof();
    ::TYPES[4] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Delegate_typeof();
    type->SetInterfaces(
        ::g::Fuse::iOS::Bindings::Controls::ITextInputImpl_typeof(), offsetof(SingleLineTextInput_type, interface0));
    type->SetFields(0,
        ::g::iOS::UIKit::UITextField_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::SingleLineTextInput, _textField), 0,
        ::g::Fuse::Controls::TextEdit_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::SingleLineTextInput, _SemanticControl), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::SingleLineTextInput, TextChanged1), 0);
}

SingleLineTextInput_type* SingleLineTextInput_typeof()
{
    static uSStrong<SingleLineTextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SingleLineTextInput);
    options.TypeSize = sizeof(SingleLineTextInput_type);
    type = (SingleLineTextInput_type*)uClassType::New("Fuse.iOS.Bindings.Controls.SingleLineTextInput", options);
    type->fp_build_ = SingleLineTextInput_build;
    type->fp_ctor_ = (void*)SingleLineTextInput__New1_fn;
    type->interface0.fp_get_Frame = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_Frame_fn;
    type->interface0.fp_set_Frame = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_Frame_fn;
    type->interface0.fp_get_LineCount = (void(*)(uObject*, int*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_LineCount_fn;
    type->interface0.fp_get_View = (void(*)(uObject*, ::g::iOS::UIKit::UIView**))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_View_fn;
    type->interface0.fp_get_SemanticControl = (void(*)(uObject*, ::g::Fuse::Controls::TextEdit**))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_SemanticControl_fn;
    type->interface0.fp_set_SemanticControl = (void(*)(uObject*, ::g::Fuse::Controls::TextEdit*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_SemanticControl_fn;
    type->interface0.fp_get_IUITextInput = (void(*)(uObject*, uObject**))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_IUITextInput_fn;
    type->interface0.fp_set_TextColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_TextColor_fn;
    type->interface0.fp_set_CaretColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_CaretColor_fn;
    type->interface0.fp_set_TextAlignment = (void(*)(uObject*, int*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_TextAlignment_fn;
    type->interface0.fp_get_Font = (void(*)(uObject*, ::g::iOS::UIKit::UIFont**))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_Font_fn;
    type->interface0.fp_set_Font = (void(*)(uObject*, ::g::iOS::UIKit::UIFont*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_Font_fn;
    type->interface0.fp_get_Text = (void(*)(uObject*, uString**))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_Text_fn;
    type->interface0.fp_set_Text = (void(*)(uObject*, uString*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_Text_fn;
    type->interface0.fp_set_PlaceholderText = (void(*)(uObject*, uString*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderText_fn;
    type->interface0.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderColor_fn;
    type->interface0.fp_add_TextChanged = (void(*)(uObject*, uDelegate*))SingleLineTextInput__add_TextChanged_fn;
    type->interface0.fp_remove_TextChanged = (void(*)(uObject*, uDelegate*))SingleLineTextInput__remove_TextChanged_fn;
    return type;
}

// public generated SingleLineTextInput() :1357
void SingleLineTextInput__ctor__fn(SingleLineTextInput* __this)
{
    __this->ctor_();
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_CaretColor(iOS.UIKit.UIColor value) :1417
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_CaretColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_CaretColor(iOS.UIKit.UIColor)");
    uPtr(__this->TextField())->TintColor(value);
}

// private iOS.UIKit.UIFont Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Font() :1427
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_Font_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIFont** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Font()");
    return *__retval = uPtr(__this->TextField())->Font(), void();
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Font(iOS.UIKit.UIFont value) :1428
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_Font_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIFont* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Font(iOS.UIKit.UIFont)");
    uPtr(__this->TextField())->Font(value);
}

// private iOS.CoreGraphics.CGRect Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Frame() :1389
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_Frame_fn(SingleLineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Frame()");
    return *__retval = uPtr(__this->TextField())->Frame(), void();
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Frame(iOS.CoreGraphics.CGRect value) :1390
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_Frame_fn(SingleLineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Frame(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect value_ = *value;
    uPtr(__this->TextField())->Frame(value_);
}

// private iOS.UIKit.IUITextInput Fuse.iOS.Bindings.Controls.ITextInputImpl.get_IUITextInput() :1407
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_IUITextInput_fn(SingleLineTextInput* __this, uObject** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_IUITextInput()");
    return *__retval = (uObject*)__this->TextField(), void();
}

// private int Fuse.iOS.Bindings.Controls.ITextInputImpl.get_LineCount() :1395
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_LineCount_fn(SingleLineTextInput* __this, int* __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_LineCount()");
    return *__retval = 1, void();
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_PlaceholderColor(iOS.UIKit.UIColor value) :1444
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_PlaceholderText(string value) :1439
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_PlaceholderText_fn(SingleLineTextInput* __this, uString* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_PlaceholderText(string)");
    uPtr(__this->TextField())->Placeholder((value != NULL) ? value : ::STRINGS[1/*""*/]);
}

// private generated Fuse.Controls.TextEdit Fuse.iOS.Bindings.Controls.ITextInputImpl.get_SemanticControl() :1403
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_SemanticControl_fn(SingleLineTextInput* __this, ::g::Fuse::Controls::TextEdit** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_SemanticControl()");
    return *__retval = __this->_SemanticControl, void();
}

// private generated void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_SemanticControl(Fuse.Controls.TextEdit value) :1403
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_SemanticControl_fn(SingleLineTextInput* __this, ::g::Fuse::Controls::TextEdit* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_SemanticControl(Fuse.Controls.TextEdit)");
    __this->_SemanticControl = value;
}

// private string Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Text() :1433
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_Text_fn(SingleLineTextInput* __this, uString** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_Text()");
    uString* ind1 = uPtr(__this->TextField())->Text();
    return *__retval = (ind1 != NULL) ? ind1 : ::STRINGS[1/*""*/], void();
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Text(string value) :1434
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_Text_fn(SingleLineTextInput* __this, uString* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_Text(string)");
    uPtr(__this->TextField())->Text((value != NULL) ? value : ::STRINGS[1/*""*/]);
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_TextAlignment(iOS.UIKit.NSTextAlignment value) :1422
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_TextAlignment_fn(SingleLineTextInput* __this, int* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_TextAlignment(iOS.UIKit.NSTextAlignment)");
    int value_ = *value;
    uPtr(__this->TextField())->TextAlignment(value_);
}

// private void Fuse.iOS.Bindings.Controls.ITextInputImpl.set_TextColor(iOS.UIKit.UIColor value) :1412
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplset_TextColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.set_TextColor(iOS.UIKit.UIColor)");
    uPtr(__this->TextField())->TextColor(value);
}

// private iOS.UIKit.UIView Fuse.iOS.Bindings.Controls.ITextInputImpl.get_View() :1400
void SingleLineTextInput__FuseiOSBindingsControlsITextInputImplget_View_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "Fuse.iOS.Bindings.Controls.ITextInputImpl.get_View()");
    return *__retval = __this->TextField(), void();
}

// public generated SingleLineTextInput New() :1357
void SingleLineTextInput__New1_fn(SingleLineTextInput** __retval)
{
    *__retval = SingleLineTextInput::New1();
}

// public generated void add_TextChanged(Uno.EventHandler value) :1458
void SingleLineTextInput__add_TextChanged_fn(SingleLineTextInput* __this, uDelegate* value)
{
    __this->add_TextChanged(value);
}

// public generated void remove_TextChanged(Uno.EventHandler value) :1458
void SingleLineTextInput__remove_TextChanged_fn(SingleLineTextInput* __this, uDelegate* value)
{
    __this->remove_TextChanged(value);
}

// private iOS.UIKit.UITextField get_TextField() :1363
void SingleLineTextInput__get_TextField_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField** __retval)
{
    *__retval = __this->TextField();
}

// public generated SingleLineTextInput() [instance] :1357
void SingleLineTextInput::ctor_()
{
}

// public generated void add_TextChanged(Uno.EventHandler value) [instance] :1458
void SingleLineTextInput::add_TextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "add_TextChanged(Uno.EventHandler)");
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextChanged1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_TextChanged(Uno.EventHandler value) [instance] :1458
void SingleLineTextInput::remove_TextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "remove_TextChanged(Uno.EventHandler)");
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextChanged1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// private iOS.UIKit.UITextField get_TextField() [instance] :1363
::g::iOS::UIKit::UITextField* SingleLineTextInput::TextField()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.SingleLineTextInput", "get_TextField()");
    return _textField;
}

// public generated SingleLineTextInput New() [static] :1357
SingleLineTextInput* SingleLineTextInput::New1()
{
    SingleLineTextInput* obj2 = (SingleLineTextInput*)uNew(SingleLineTextInput_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public sealed extern class Slider :837
// {
// ~Slider() :895
static void Slider__Finalize_fn(Slider* __this)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Slider", "Finalize()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_valueChangedEvent), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        uPtr(__this->_valueChangedEvent)->Dispose();

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_sliderContainer), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        uPtr(__this->_sliderContainer)->remove_FrameChanged(uDelegate::New(::TYPES[7/*Uno.EventHandler<iOS.CoreGraphics.CGRect>*/], (void*)Slider__OnFrameChanged_fn, __this));
}

static void Slider_build(uType* type)
{
    ::TYPES[0] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[7] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::iOS::CoreGraphics::CGRect_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface4));
    type->SetFields(13,
        ::g::iOS::UIKit::UISlider_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Slider, _slider), 0,
        ::g::Fuse::iOS::Bindings::Controls::ViewContainer_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Slider, _sliderContainer), 0,
        ::g::Fuse::iOS::Bindings::ControlEvent_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Slider, _valueChangedEvent), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Slider__New2_fn, 0, true, Slider_typeof(), 0));
}

::g::Fuse::iOS::Bindings::Controls::Element_type* Slider_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::Controls::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::Controls::Element_type);
    type = (::g::Fuse::iOS::Bindings::Controls::Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.Slider", options);
    type->SetBase(::g::Fuse::iOS::Bindings::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Slider_typeof()));
    type->fp_build_ = Slider_build;
    type->fp_ctor_ = (void*)Slider__New2_fn;
    type->fp_Finalize = (void(*)(uObject*))Slider__Finalize_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::iOS::Bindings::Controls::Element__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Slider() :837
void Slider__ctor_4_fn(Slider* __this)
{
    __this->ctor_4();
}

// public generated Slider New() :837
void Slider__New2_fn(Slider** __retval)
{
    *__retval = Slider::New2();
}

// private void OnFrameChanged(object sender, iOS.CoreGraphics.CGRect frame) :871
void Slider__OnFrameChanged_fn(Slider* __this, uObject* sender, ::g::iOS::CoreGraphics::CGRect* frame)
{
    __this->OnFrameChanged(sender, *frame);
}

// public generated Slider() [instance] :837
void Slider::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Slider", ".ctor()");
    ctor_3();
}

// private void OnFrameChanged(object sender, iOS.CoreGraphics.CGRect frame) [instance] :871
void Slider::OnFrameChanged(uObject* sender, ::g::iOS::CoreGraphics::CGRect frame)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Slider", "OnFrameChanged(object,iOS.CoreGraphics.CGRect)");
    uPtr(_slider)->Frame(::g::iOS::CoreGraphics::CGRect__New1(uPtr(_slider)->Frame().Origin, frame.Size));
}

// public generated Slider New() [static] :837
Slider* Slider::New2()
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public sealed extern class Switch :950
// {
// ~Switch() :970
static void Switch__Finalize_fn(Switch* __this)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Switch", "Finalize()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_switch), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        uPtr(__this->_toggled)->Dispose();
}

static void Switch_build(uType* type)
{
    ::TYPES[0] = ::g::ObjC::Bindings::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface4));
    type->SetFields(13,
        ::g::iOS::UIKit::UISwitch_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Switch, _switch), 0,
        ::g::Fuse::iOS::Bindings::ControlEvent_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Switch, _toggled), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Switch__New2_fn, 0, true, Switch_typeof(), 0));
}

::g::Fuse::iOS::Bindings::Controls::Element_type* Switch_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::Controls::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::Controls::Element_type);
    type = (::g::Fuse::iOS::Bindings::Controls::Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.Switch", options);
    type->SetBase(::g::Fuse::iOS::Bindings::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Switch_typeof()));
    type->fp_build_ = Switch_build;
    type->fp_ctor_ = (void*)Switch__New2_fn;
    type->fp_Finalize = (void(*)(uObject*))Switch__Finalize_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::iOS::Bindings::Controls::Element__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Switch() :950
void Switch__ctor_4_fn(Switch* __this)
{
    __this->ctor_4();
}

// public generated Switch New() :950
void Switch__New2_fn(Switch** __retval)
{
    *__retval = Switch::New2();
}

// public generated Switch() [instance] :950
void Switch::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.Switch", ".ctor()");
    ctor_3();
}

// public generated Switch New() [static] :950
Switch* Switch::New2()
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public sealed extern class TextBlock :1019
// {
static void TextBlock_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface4));
    type->SetFields(13);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextBlock__New2_fn, 0, true, TextBlock_typeof(), 0));
}

::g::Fuse::iOS::Bindings::Controls::Element_type* TextBlock_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::Controls::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextBlock);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::Controls::Element_type);
    type = (::g::Fuse::iOS::Bindings::Controls::Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.TextBlock", options);
    type->SetBase(::g::Fuse::iOS::Bindings::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof()));
    type->fp_build_ = TextBlock_build;
    type->fp_ctor_ = (void*)TextBlock__New2_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::iOS::Bindings::Controls::Element__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated TextBlock() :1019
void TextBlock__ctor_4_fn(TextBlock* __this)
{
    __this->ctor_4();
}

// public generated TextBlock New() :1019
void TextBlock__New2_fn(TextBlock** __retval)
{
    *__retval = TextBlock::New2();
}

// public generated TextBlock() [instance] :1019
void TextBlock::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.TextBlock", ".ctor()");
    ctor_3();
}

// public generated TextBlock New() [static] :1019
TextBlock* TextBlock::New2()
{
    TextBlock* obj1 = (TextBlock*)uNew(TextBlock_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// public sealed extern class TextInput :1128
// {
// static TextInput() :1128
static void TextInput__cctor_1_fn(uType* __type)
{
    TextInput::_valueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Value"*/]);
}

static void TextInput_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Value");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::iOS::Bindings::Controls::Element_type, interface4));
    type->SetFields(13,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::Controls::TextInput::_valueName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextInput__New2_fn, 0, true, TextInput_typeof(), 0));
}

::g::Fuse::iOS::Bindings::Controls::Element_type* TextInput_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Bindings::Controls::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(::g::Fuse::iOS::Bindings::Controls::Element_type);
    type = (::g::Fuse::iOS::Bindings::Controls::Element_type*)uClassType::New("Fuse.iOS.Bindings.Controls.TextInput", options);
    type->SetBase(::g::Fuse::iOS::Bindings::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof()));
    type->fp_build_ = TextInput_build;
    type->fp_ctor_ = (void*)TextInput__New2_fn;
    type->fp_cctor_ = TextInput__cctor_1_fn;
    type->fp_OnPropertyChanged2 = (void(*)(::g::Fuse::iOS::Bindings::Controls::Element*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))TextInput__OnPropertyChanged2_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))TextInput__OnPropertyChanged2_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated TextInput() :1128
void TextInput__ctor_4_fn(TextInput* __this)
{
    __this->ctor_4();
}

// public generated TextInput New() :1128
void TextInput__New2_fn(TextInput** __retval)
{
    *__retval = TextInput::New2();
}

// public override sealed void OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :1319
void TextInput__OnPropertyChanged2_fn(TextInput* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
}

::g::Uno::UX::Selector TextInput::_valueName_;

// public generated TextInput() [instance] :1128
void TextInput::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.TextInput", ".ctor()");
    ctor_3();
}

// public generated TextInput New() [static] :1128
TextInput* TextInput::New2()
{
    TextInput* obj1 = (TextInput*)uNew(TextInput_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/Controls/$.uno
// ----------------------------------------------------------------------

// internal sealed extern class ViewContainer :825
// {
static void ViewContainer_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Delegate_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[7] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::iOS::CoreGraphics::CGRect_typeof());
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::iOS::CoreGraphics::CGRect_typeof()), offsetof(::g::Fuse::iOS::Bindings::Controls::ViewContainer, FrameChanged1), 0);
}

::g::iOS::UIKit::UIView_type* ViewContainer_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ViewContainer);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("Fuse.iOS.Bindings.Controls.ViewContainer", options);
    type->SetBase(::g::iOS::UIKit::UIControl_typeof());
    type->fp_build_ = ViewContainer_build;
    type->fp_ctor_ = (void*)ViewContainer__New11_fn;
    type->fp_setFrame = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::CoreGraphics::CGRect*))ViewContainer__setFrame_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public generated ViewContainer() :825
void ViewContainer__ctor_10_fn(ViewContainer* __this)
{
    __this->ctor_10();
}

// public generated void add_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect> value) :827
void ViewContainer__add_FrameChanged_fn(ViewContainer* __this, uDelegate* value)
{
    __this->add_FrameChanged(value);
}

// public generated void remove_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect> value) :827
void ViewContainer__remove_FrameChanged_fn(ViewContainer* __this, uDelegate* value)
{
    __this->remove_FrameChanged(value);
}

// public generated ViewContainer New() :825
void ViewContainer__New11_fn(ViewContainer** __retval)
{
    *__retval = ViewContainer::New11();
}

// public override sealed void setFrame(iOS.CoreGraphics.CGRect frame) :829
void ViewContainer__setFrame_fn(ViewContainer* __this, ::g::iOS::CoreGraphics::CGRect* frame1)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.ViewContainer", "setFrame(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect frame1_ = *frame1;
    ::g::iOS::UIKit::UIView__setFrame_fn(__this, uCRef(frame1_));

    if (::g::Uno::Delegate::op_Inequality(__this->FrameChanged1, NULL))
        uPtr(__this->FrameChanged1)->Invoke(2, __this, uCRef(frame1_));
}

// public generated ViewContainer() [instance] :825
void ViewContainer::ctor_10()
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.ViewContainer", ".ctor()");
    ctor_8();
}

// public generated void add_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect> value) [instance] :827
void ViewContainer::add_FrameChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.ViewContainer", "add_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect>)");
    FrameChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameChanged1, value), ::TYPES[7/*Uno.EventHandler<iOS.CoreGraphics.CGRect>*/]);
}

// public generated void remove_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect> value) [instance] :827
void ViewContainer::remove_FrameChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Bindings.Controls.ViewContainer", "remove_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect>)");
    FrameChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameChanged1, value), ::TYPES[7/*Uno.EventHandler<iOS.CoreGraphics.CGRect>*/]);
}

// public generated ViewContainer New() [static] :825
ViewContainer* ViewContainer::New11()
{
    ViewContainer* obj1 = (ViewContainer*)uNew(ViewContainer_typeof());
    obj1->ctor_10();
    return obj1;
}
// }

}}}}} // ::g::Fuse::iOS::Bindings::Controls
