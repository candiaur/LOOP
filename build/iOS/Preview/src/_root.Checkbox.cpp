// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Checkbox.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Checkbox.h>
#include <_root.LOOP_bundle.h>
#include <_root.LOOP_Checkbox_TextColor_Property.h>
#include <_root.LOOP_FuseControlsText_TextColor_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.PropertyBinding-1.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.Toggle.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Rotation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Float.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[5];
static uType* TYPES[17];

namespace g{

// public partial sealed class Checkbox :2
// {
// static Checkbox() :24
static void Checkbox__cctor_5_fn(uType* __type)
{
    Checkbox::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"TextColor"*/]);
    Checkbox::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    Checkbox::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"checkbox"*/]);
    Checkbox::fa_icons_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::fontawesomewebfontee4d5a08()));
    ::g::Uno::UX::Resource::SetGlobalKey(Checkbox::fa_icons_, ::STRINGS[3/*"fa_icons"*/]);
}

static void Checkbox_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TextColor");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("checkbox");
    ::STRINGS[3] = uString::Const("fa_icons");
    ::STRINGS[4] = uString::Const("\357\200\214");
    ::TYPES[0] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Fuse::Controls::PropertyBinding_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[5] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[8] = ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[9] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[14] = ::g::Fuse::Binding_typeof();
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[16] = ::g::Fuse::Animations::Animator_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::ToggleControl_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::ToggleControl_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::ToggleControl_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::ToggleControl_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::ToggleControl_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::ToggleControl_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface12),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::ToggleControl_type, interface13),
        ::g::Fuse::Controls::Native::IToggleViewHost_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface14));
    type->SetFields(95,
        ::g::Uno::Float4_typeof(), offsetof(::g::Checkbox, _field_TextColor), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::Checkbox, checkbox), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Checkbox, checkbox_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Checkbox, checkbox_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Checkbox, this_TextColor_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Checkbox::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Checkbox::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Checkbox::__selector2_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::Checkbox::fa_icons_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("fa_icons", 103));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)Checkbox__New5_fn, 0, true, Checkbox_typeof(), 0),
        new uFunction("SetTextColor", NULL, (void*)Checkbox__SetTextColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_TextColor", NULL, (void*)Checkbox__get_TextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TextColor", NULL, (void*)Checkbox__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

::g::Fuse::Controls::ToggleControl_type* Checkbox_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ToggleControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 104;
    options.InterfaceCount = 15;
    options.ObjectSize = sizeof(Checkbox);
    options.TypeSize = sizeof(::g::Fuse::Controls::ToggleControl_type);
    type = (::g::Fuse::Controls::ToggleControl_type*)uClassType::New("Checkbox", options);
    type->SetBase(::g::Fuse::Controls::ToggleControl_typeof());
    type->fp_build_ = Checkbox_build;
    type->fp_ctor_ = (void*)Checkbox__New5_fn;
    type->fp_cctor_ = Checkbox__cctor_5_fn;
    type->interface14.fp_OnValueChanged = (void(*)(uObject*, bool*))::g::Fuse::Controls::ToggleControl__FuseControlsNativeIToggleViewHostOnValueChanged_fn;
    type->interface13.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::ToggleControl__get_Value_fn;
    type->interface13.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::ToggleControl__set_Value_fn;
    type->interface13.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ToggleControl__add_ValueChanged_fn;
    type->interface13.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ToggleControl__remove_ValueChanged_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// public Checkbox() :30
void Checkbox__ctor_8_fn(Checkbox* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :34
void Checkbox__InitializeUX_fn(Checkbox* __this)
{
    __this->InitializeUX();
}

// public Checkbox New() :30
void Checkbox__New5_fn(Checkbox** __retval)
{
    *__retval = Checkbox::New5();
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) :11
void Checkbox__SetTextColor_fn(Checkbox* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetTextColor(*value, origin);
}

// public float4 get_TextColor() :8
void Checkbox__get_TextColor_fn(Checkbox* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value) :9
void Checkbox__set_TextColor_fn(Checkbox* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

::g::Uno::UX::Selector Checkbox::__selector0_;
::g::Uno::UX::Selector Checkbox::__selector1_;
::g::Uno::UX::Selector Checkbox::__selector2_;
uSStrong< ::g::Fuse::Font*> Checkbox::fa_icons_;

// public Checkbox() [instance] :30
void Checkbox::ctor_8()
{
    uStackFrame __("Checkbox", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :34
void Checkbox::InitializeUX()
{
    uStackFrame __("Checkbox", "InitializeUX()");
    checkbox = ::g::Fuse::Controls::Text::New3();
    checkbox_TextColor_inst = ::g::LOOP_FuseControlsText_TextColor_Property::New1(checkbox, Checkbox::__selector0());
    this_TextColor_inst = ::g::LOOP_Checkbox_TextColor_Property::New1(this, Checkbox::__selector0());
    checkbox_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(checkbox, Checkbox::__selector1());
    ::g::Fuse::Gestures::Clicked* temp = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Controls::Toggle* temp1 = ::g::Fuse::Controls::Toggle::New2();
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp3 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Rotation* temp4 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Controls::PropertyBinding* temp5 = (::g::Fuse::Controls::PropertyBinding*)::g::Fuse::Controls::PropertyBinding::New1(::TYPES[4/*Fuse.Controls.PropertyBinding<float4>*/], checkbox_TextColor_inst, this_TextColor_inst);
    ::g::Fuse::Triggers::WhileTrue* temp6 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp7 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<string>*/], checkbox_Value_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp8 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    HitTestMode(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
    temp1->Target((uObject*)this);
    temp2->Width(::g::Uno::UX::Size__New1(18.0f, 1));
    temp2->Height(::g::Uno::UX::Size__New1(18.0f, 1));
    temp2->Fill(temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Strokes()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), checkbox);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp3->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp3->Width(1.0f);
    uPtr(checkbox)->FontSize(18.0f);
    uPtr(checkbox)->Name(Checkbox::__selector2());
    uPtr(checkbox)->Font(Checkbox::fa_icons());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(checkbox)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(checkbox)->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    temp4->Degrees(-10.0f);
    temp6->Source((uObject*)this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Fuse::Animations::Change__set_Value_fn(temp7, ::STRINGS[4/*"\uF00C"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :11
void Checkbox::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("Checkbox", "SetTextColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_TextColor))
    {
        _field_TextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"TextColor"*/]), origin);
    }
}

// public float4 get_TextColor() [instance] :8
::g::Uno::Float4 Checkbox::TextColor()
{
    uStackFrame __("Checkbox", "get_TextColor()");
    return _field_TextColor;
}

// public void set_TextColor(float4 value) [instance] :9
void Checkbox::TextColor(::g::Uno::Float4 value)
{
    uStackFrame __("Checkbox", "set_TextColor(float4)");
    SetTextColor(value, NULL);
}

// public Checkbox New() [static] :30
Checkbox* Checkbox::New5()
{
    Checkbox* obj1 = (Checkbox*)uNew(Checkbox_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
