// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cursos.h>
#include <_root.Cursos.Template2.h>
#include <_root.LOOP_FuseControlsDockPanel_IsEnabled_Property.h>
#include <_root.LOOP_FuseControlsPageControl_Active_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.LOOP_FuseControlsText_Visibility_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layer.h>
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
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[16];
static uType* TYPES[18];

namespace g{

// public partial sealed class Cursos.Template2 :174
// {
// static Template2() :189
static void Cursos__Template2__cctor__fn(uType* __type)
{
    Cursos__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Cursos__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Visibility"*/]);
    Cursos__Template2::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Active"*/]);
    Cursos__Template2::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"IsEnabled"*/]);
}

static void Cursos__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Visibility");
    ::STRINGS[2] = uString::Const("Active");
    ::STRINGS[3] = uString::Const("IsEnabled");
    ::STRINGS[4] = uString::Const("curso");
    ::STRINGS[5] = uString::Const("rama");
    ::STRINGS[6] = uString::Const("movCurso.flecha");
    ::STRINGS[7] = uString::Const("selectCurso");
    ::STRINGS[8] = uString::Const("movCurso.isEnabled");
    ::STRINGS[9] = uString::Const("alumnos");
    ::STRINGS[10] = uString::Const("habilidadesC");
    ::STRINGS[11] = uString::Const("7*,3*");
    ::STRINGS[12] = uString::Const(">");
    ::STRINGS[13] = uString::Const("auto,auto");
    ::STRINGS[14] = uString::Const(" / Alumnos");
    ::STRINGS[15] = uString::Const(" / Habilidades");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[4] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[6] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[7] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[11] = ::g::Fuse::Binding_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[14] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[15] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[16] = ::g::Fuse::Visual_typeof();
    ::TYPES[17] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos_typeof(), offsetof(::g::Cursos__Template2, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Cursos__Template2, actPage_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template2, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template2, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos__Template2, temp2_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template2, temp3_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template2, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template2, temp5_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template2::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template2::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template2::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template2__New2_fn, 0, true, Cursos__Template2_typeof(), 1, ::g::Cursos_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(Cursos__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template2_build;
    type->fp_cctor_ = Cursos__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template2__New1_fn;
    return type;
}

// public Template2(Cursos parent) :177
void Cursos__Template2__ctor_1_fn(Cursos__Template2* __this, ::g::Cursos* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :192
void Cursos__Template2__New1_fn(Cursos__Template2* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template2", "New()");
    ::g::Fuse::Controls::StackPanel* self = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Cursos__Template2::__selector0());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp1, Cursos__Template2::__selector0());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Visibility_inst = ::g::LOOP_FuseControlsText_Visibility_Property::New1(temp2, Cursos__Template2::__selector1());
    __this->actPage_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(uPtr(__this->__parent1)->actPage, Cursos__Template2::__selector2());
    ::g::Fuse::Controls::DockPanel* temp3 = ::g::Fuse::Controls::DockPanel::New4();
    __this->temp3_IsEnabled_inst = ::g::LOOP_FuseControlsDockPanel_IsEnabled_Property::New1(temp3, Cursos__Template2::__selector3());
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    __this->temp4_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp4, Cursos__Template2::__selector0());
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    __this->temp5_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp5, Cursos__Template2::__selector0());
    ::g::Fuse::Controls::Rectangle* temp6 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp7 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Grid* temp8 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Grid* temp9 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp10 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[4/*"curso"*/]);
    ::g::Fuse::Reactive::DataBinding* temp11 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[5/*"rama"*/]);
    ::g::Fuse::Reactive::DataBinding* temp12 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>*/], __this->temp2_Visibility_inst, ::STRINGS[6/*"movCurso.fl...*/]);
    ::g::Fuse::Gestures::Clicked* temp13 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp14 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp15 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], __this->actPage_Active_inst);
    ::g::Fuse::Reactive::EventBinding* temp_eb31 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[7/*"selectCurso"*/]);
    ::g::Fuse::Reactive::DataBinding* temp16 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<bool>*/], __this->temp3_IsEnabled_inst, ::STRINGS[8/*"movCurso.is...*/]);
    ::g::Fuse::Controls::StackPanel* temp17 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp18 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp19 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<string>*/], __this->temp4_Value_inst, ::STRINGS[9/*"alumnos"*/]);
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp21 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp22 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<string>*/], __this->temp5_Value_inst, ::STRINGS[10/*"habilidadesC"*/]);
    ::g::Fuse::Controls::Text* temp23 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    self->Margin(::g::Uno::Float4__New2(0.0f, 2.0f, 0.0f, 2.0f));
    temp3->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Padding(::g::Uno::Float4__New2(14.0f, 10.0f, 14.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp6->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Strokes()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp7);
    temp7->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp7->Width(1.0f);
    temp8->Columns(::STRINGS[11/*"7*,3*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp->FontSize(20.0f);
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(9);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 2.0f));
    temp->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp1->FontSize(9.0f);
    temp1->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp1->Alignment(9);
    temp1->Font(::g::MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp2->Value(::STRINGS[12/*">"*/]);
    temp2->FontSize(20.0f);
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->Alignment(11);
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp2->Font(::g::MainView::pres_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb31);
    temp14->add_Handler(uDelegate::New(::TYPES[15/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb31));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp15, uPtr(__this->__parent1)->pagActividad);
    temp17->Color(::g::Uno::Float4__New2(0.9882353f, 0.9843137f, 0.9882353f, 1.0f));
    temp17->Padding(::g::Uno::Float4__New2(14.0f, 8.0f, 14.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp18->Columns(::STRINGS[13/*"auto,auto"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp4->FontSize(28.0f);
    temp4->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp4->Alignment(9);
    temp4->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp20->Value(::STRINGS[14/*" / Alumnos"*/]);
    temp20->FontSize(18.0f);
    temp20->TextColor(::g::Uno::Float4__New2(0.7098039f, 0.7098039f, 0.7098039f, 1.0f));
    temp20->Alignment(9);
    temp20->Font(::g::MainView::museo300_letter());
    temp21->Columns(::STRINGS[13/*"auto,auto"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp5->FontSize(26.0f);
    temp5->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->Alignment(9);
    temp5->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp23->Value(::STRINGS[15/*" / Habilida...*/]);
    temp23->FontSize(18.0f);
    temp23->TextColor(::g::Uno::Float4__New2(0.7098039f, 0.7098039f, 0.7098039f, 1.0f));
    temp23->Alignment(9);
    temp23->Font(::g::MainView::museo300_letter());
    temp24->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp24->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp24->Alignment(12);
    temp24->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    return *__retval = self, void();
}

// public Template2 New(Cursos parent) :177
void Cursos__Template2__New2_fn(::g::Cursos* parent, Cursos__Template2** __retval)
{
    *__retval = Cursos__Template2::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template2::__selector0_;
::g::Uno::UX::Selector Cursos__Template2::__selector1_;
::g::Uno::UX::Selector Cursos__Template2::__selector2_;
::g::Uno::UX::Selector Cursos__Template2::__selector3_;

// public Template2(Cursos parent) [instance] :177
void Cursos__Template2::ctor_1(::g::Cursos* parent)
{
    uStackFrame __("Cursos.Template2", ".ctor(Cursos)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template2 New(Cursos parent) [static] :177
Cursos__Template2* Cursos__Template2::New2(::g::Cursos* parent)
{
    Cursos__Template2* obj1 = (Cursos__Template2*)uNew(Cursos__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
