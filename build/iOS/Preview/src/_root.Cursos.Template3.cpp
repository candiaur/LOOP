// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cursos.h>
#include <_root.Cursos.Template3.h>
#include <_root.LOOP_FuseControlsCircle_Color_Property.h>
#include <_root.LOOP_FuseControlsDockPanel_IsEnabled_Property.h>
#include <_root.LOOP_FuseControlsPageControl_Active_Property.h>
#include <_root.LOOP_FuseControlsStackPanel_Visibility_Property.h>
#include <_root.LOOP_FuseControlsText_TextColor_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[12];
static uType* TYPES[19];

namespace g{

// public partial sealed class Cursos.Template3 :312
// {
// static Template3() :327
static void Cursos__Template3__cctor__fn(uType* __type)
{
    Cursos__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Cursos__Template3::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"TextColor"*/]);
    Cursos__Template3::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Color"*/]);
    Cursos__Template3::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Active"*/]);
    Cursos__Template3::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Visibility"*/]);
    Cursos__Template3::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"IsEnabled"*/]);
}

static void Cursos__Template3_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("TextColor");
    ::STRINGS[2] = uString::Const("Color");
    ::STRINGS[3] = uString::Const("Active");
    ::STRINGS[4] = uString::Const("Visibility");
    ::STRINGS[5] = uString::Const("IsEnabled");
    ::STRINGS[6] = uString::Const("dia");
    ::STRINGS[7] = uString::Const("textColor");
    ::STRINGS[8] = uString::Const("color");
    ::STRINGS[9] = uString::Const("setDay");
    ::STRINGS[10] = uString::Const("valido");
    ::STRINGS[11] = uString::Const("punto");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[5] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[8] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[9] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[11] = ::g::Fuse::Node_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[13] = ::g::Fuse::Binding_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[15] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[16] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Visual_typeof();
    ::TYPES[18] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos_typeof(), offsetof(::g::Cursos__Template3, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Cursos__Template3, actPage_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos__Template3, showCalendario_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Cursos__Template3, temp_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template3, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Cursos__Template3, temp1_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template3, temp2_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Cursos__Template3, temp3_Color_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template3::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template3::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template3::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template3::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template3::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template3::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template3__New2_fn, 0, true, Cursos__Template3_typeof(), 1, ::g::Cursos_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(Cursos__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template3", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template3_build;
    type->fp_cctor_ = Cursos__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template3__New1_fn;
    return type;
}

// public Template3(Cursos parent) :315
void Cursos__Template3__ctor_1_fn(Cursos__Template3* __this, ::g::Cursos* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :330
void Cursos__Template3__New1_fn(Cursos__Template3* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template3", "New()");
    ::g::Fuse::Controls::Grid* self = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Cursos__Template3::__selector0());
    __this->temp_TextColor_inst = ::g::LOOP_FuseControlsText_TextColor_Property::New1(temp, Cursos__Template3::__selector1());
    ::g::Fuse::Controls::Circle* temp1 = ::g::Fuse::Controls::Circle::New3();
    __this->temp1_Color_inst = ::g::LOOP_FuseControlsCircle_Color_Property::New1(temp1, Cursos__Template3::__selector2());
    __this->actPage_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(uPtr(__this->__parent1)->actPage, Cursos__Template3::__selector3());
    __this->showCalendario_Visibility_inst = ::g::LOOP_FuseControlsStackPanel_Visibility_Property::New1(uPtr(__this->__parent1)->showCalendario, Cursos__Template3::__selector4());
    ::g::Fuse::Controls::DockPanel* temp2 = ::g::Fuse::Controls::DockPanel::New4();
    __this->temp2_IsEnabled_inst = ::g::LOOP_FuseControlsDockPanel_IsEnabled_Property::New1(temp2, Cursos__Template3::__selector5());
    ::g::Fuse::Controls::Circle* temp3 = ::g::Fuse::Controls::Circle::New3();
    __this->temp3_Color_inst = ::g::LOOP_FuseControlsCircle_Color_Property::New1(temp3, Cursos__Template3::__selector2());
    ::g::Fuse::Controls::StackPanel* temp4 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[6/*"dia"*/]);
    ::g::Fuse::Reactive::DataBinding* temp6 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<float4>*/], __this->temp_TextColor_inst, ::STRINGS[7/*"textColor"*/]);
    ::g::Fuse::Reactive::DataBinding* temp7 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<float4>*/], __this->temp1_Color_inst, ::STRINGS[8/*"color"*/]);
    ::g::Fuse::Gestures::Clicked* temp8 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp9 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp10 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], __this->actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Set* temp11 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->showCalendario_Visibility_inst);
    ::g::Fuse::Reactive::EventBinding* temp_eb81 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[9/*"setDay"*/]);
    ::g::Fuse::Reactive::DataBinding* temp12 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<bool>*/], __this->temp2_IsEnabled_inst, ::STRINGS[10/*"valido"*/]);
    ::g::Fuse::Controls::DockPanel* temp13 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp14 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<float4>*/], __this->temp3_Color_inst, ::STRINGS[11/*"punto"*/]);
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 8.0f));
    temp2->Padding(::g::Uno::Float4__New2(0.0f, 2.0f, 0.0f, 2.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp1->Padding(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp->FontSize(12.0f);
    temp->TextAlignment(1);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 3.0f, 0.0f, 0.0f));
    temp->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb81);
    temp9->add_Handler(uDelegate::New(::TYPES[16/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb81));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp10, uPtr(__this->__parent1)->pagActividad);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp11, uCRef<int>(1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Width(::g::Uno::UX::Size__New1(10.0f, 1));
    temp3->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    return *__retval = self, void();
}

// public Template3 New(Cursos parent) :315
void Cursos__Template3__New2_fn(::g::Cursos* parent, Cursos__Template3** __retval)
{
    *__retval = Cursos__Template3::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template3::__selector0_;
::g::Uno::UX::Selector Cursos__Template3::__selector1_;
::g::Uno::UX::Selector Cursos__Template3::__selector2_;
::g::Uno::UX::Selector Cursos__Template3::__selector3_;
::g::Uno::UX::Selector Cursos__Template3::__selector4_;
::g::Uno::UX::Selector Cursos__Template3::__selector5_;

// public Template3(Cursos parent) [instance] :315
void Cursos__Template3::ctor_1(::g::Cursos* parent)
{
    uStackFrame __("Cursos.Template3", ".ctor(Cursos)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template3 New(Cursos parent) [static] :315
Cursos__Template3* Cursos__Template3::New2(::g::Cursos* parent)
{
    Cursos__Template3* obj1 = (Cursos__Template3*)uNew(Cursos__Template3_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
