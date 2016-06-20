// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Indicador.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Indicador.h>
#include <_root.Indicador.Template1.h>
#include <_root.LOOP_FuseControlsDockPanel_IsEnabled_Property.h>
#include <_root.LOOP_FuseControlsImage_Source_Property.h>
#include <_root.LOOP_FuseControlsPageControl_Active_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Resources.ImageSource.h>
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
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[9];
static uType* TYPES[17];

namespace g{

// public partial sealed class Indicador.Template1 :80
// {
// static Template1() :92
static void Indicador__Template1__cctor__fn(uType* __type)
{
    Indicador__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Indicador__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Source"*/]);
    Indicador__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Active"*/]);
    Indicador__Template1::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"IsEnabled"*/]);
}

static void Indicador__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Source");
    ::STRINGS[2] = uString::Const("Active");
    ::STRINGS[3] = uString::Const("IsEnabled");
    ::STRINGS[4] = uString::Const("fecha");
    ::STRINGS[5] = uString::Const("asistencia");
    ::STRINGS[6] = uString::Const("selectFechaCalificacion");
    ::STRINGS[7] = uString::Const("valido");
    ::STRINGS[8] = uString::Const("8*,2*");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[4] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Fuse::Reactive::DataToResourceBinding_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[6] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[7] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[11] = ::g::Fuse::Binding_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[13] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[14] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Visual_typeof();
    ::TYPES[16] = uObject_typeof();
    type->SetFields(2,
        ::g::Indicador_typeof(), offsetof(::g::Indicador__Template1, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Indicador__Template1, alumPage_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Indicador__Template1, self_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof()), offsetof(::g::Indicador__Template1, temp1_Source_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template1::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template1::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Indicador__Template1__New2_fn, 0, true, Indicador__Template1_typeof(), 1, ::g::Indicador_typeof()));
}

::g::Uno::UX::Template_type* Indicador__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(Indicador__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Indicador.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Indicador__Template1_build;
    type->fp_cctor_ = Indicador__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Indicador__Template1__New1_fn;
    return type;
}

// public Template1(Indicador parent) :83
void Indicador__Template1__ctor_1_fn(Indicador__Template1* __this, ::g::Indicador* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :95
void Indicador__Template1__New1_fn(Indicador__Template1* __this, uObject** __retval)
{
    uStackFrame __("Indicador.Template1", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Indicador__Template1::__selector0());
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    __this->temp1_Source_inst = ::g::LOOP_FuseControlsImage_Source_Property::New1(temp1, Indicador__Template1::__selector1());
    __this->alumPage_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(uPtr(__this->__parent1)->alumPage, Indicador__Template1::__selector2());
    __this->self_IsEnabled_inst = ::g::LOOP_FuseControlsDockPanel_IsEnabled_Property::New1(self, Indicador__Template1::__selector3());
    ::g::Fuse::Controls::Grid* temp2 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp3 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[4/*"fecha"*/]);
    ::g::Fuse::Controls::Panel* temp5 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataToResourceBinding* temp6 = (::g::Fuse::Reactive::DataToResourceBinding*)::g::Fuse::Reactive::DataToResourceBinding::New2(::TYPES[5/*Fuse.Reactive.DataToResourceBinding<Fuse.Resources.ImageSource>*/], __this->temp1_Source_inst, ::STRINGS[5/*"asistencia"*/]);
    ::g::Fuse::Gestures::Clicked* temp7 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp8 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp9 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], __this->alumPage_Active_inst);
    ::g::Fuse::Reactive::EventBinding* temp_eb391 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[6/*"selectFecha...*/]);
    ::g::Fuse::Reactive::DataBinding* temp10 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<bool>*/], __this->self_IsEnabled_inst, ::STRINGS[7/*"valido"*/]);
    temp2->Columns(::STRINGS[8/*"8*,2*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp3->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Padding(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->FontSize(14.0f);
    temp->Alignment(9);
    temp->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    temp5->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp5->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp5->Padding(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp1->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp1->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Actions()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Actions()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb391);
    temp8->add_Handler(uDelegate::New(::TYPES[14/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb391));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp9, uPtr(__this->__parent1)->pagProgreso);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    return *__retval = self, void();
}

// public Template1 New(Indicador parent) :83
void Indicador__Template1__New2_fn(::g::Indicador* parent, Indicador__Template1** __retval)
{
    *__retval = Indicador__Template1::New2(parent);
}

::g::Uno::UX::Selector Indicador__Template1::__selector0_;
::g::Uno::UX::Selector Indicador__Template1::__selector1_;
::g::Uno::UX::Selector Indicador__Template1::__selector2_;
::g::Uno::UX::Selector Indicador__Template1::__selector3_;

// public Template1(Indicador parent) [instance] :83
void Indicador__Template1::ctor_1(::g::Indicador* parent)
{
    uStackFrame __("Indicador.Template1", ".ctor(Indicador)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template1 New(Indicador parent) [static] :83
Indicador__Template1* Indicador__Template1::New2(::g::Indicador* parent)
{
    Indicador__Template1* obj1 = (Indicador__Template1*)uNew(Indicador__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
