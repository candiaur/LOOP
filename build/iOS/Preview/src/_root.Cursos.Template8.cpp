// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cursos.h>
#include <_root.Cursos.Template8.h>
#include <_root.LOOP_bundle.h>
#include <_root.LOOP_FuseControlsDockPanel_Visibility_Property.h>
#include <_root.LOOP_FuseControlsImage_Url_Property.h>
#include <_root.LOOP_FuseControlsPageControl_Active_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.LOOP_FuseTriggersWhileFalse_Value_Property.h>
#include <_root.LOOP_FuseTriggersWhileTrue_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Skew.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
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
#include <Fuse.Triggers.WhileEnabled.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[13];
static uType* TYPES[21];

namespace g{

// public partial sealed class Cursos.Template8 :858
// {
// static Template8() :876
static void Cursos__Template8__cctor__fn(uType* __type)
{
    Cursos__Template8::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    Cursos__Template8::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    Cursos__Template8::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Visibility"*/]);
    Cursos__Template8::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Active"*/]);
}

static void Cursos__Template8_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Visibility");
    ::STRINGS[3] = uString::Const("Active");
    ::STRINGS[4] = uString::Const("imagen");
    ::STRINGS[5] = uString::Const("editarAlumnos");
    ::STRINGS[6] = uString::Const("nombre");
    ::STRINGS[7] = uString::Const("apellido");
    ::STRINGS[8] = uString::Const("editarAlumnoCurso");
    ::STRINGS[9] = uString::Const("eliminarAlumnoCurso");
    ::STRINGS[10] = uString::Const("selectAlumno");
    ::STRINGS[11] = uString::Const("auto,auto");
    ::STRINGS[12] = uString::Const(">");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[4] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[6] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[11] = ::g::Fuse::Binding_typeof();
    ::TYPES[12] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[14] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[15] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[17] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[18] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Visual_typeof();
    ::TYPES[20] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos_typeof(), offsetof(::g::Cursos__Template8, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Cursos__Template8, actPage_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos__Template8, showCreaAlumno_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template8, temp_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template8, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template8, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template8, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template8, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template8, temp5_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template8::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template8::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template8::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template8::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template8__New2_fn, 0, true, Cursos__Template8_typeof(), 1, ::g::Cursos_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template8_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(Cursos__Template8);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template8", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template8_build;
    type->fp_cctor_ = Cursos__Template8__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template8__New1_fn;
    return type;
}

// public Template8(Cursos parent) :861
void Cursos__Template8__ctor_1_fn(Cursos__Template8* __this, ::g::Cursos* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :879
void Cursos__Template8__New1_fn(Cursos__Template8* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template8", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    __this->temp_Url_inst = ::g::LOOP_FuseControlsImage_Url_Property::New1(temp, Cursos__Template8::__selector0());
    ::g::Fuse::Triggers::WhileFalse* temp1 = ::g::Fuse::Triggers::WhileFalse::New2();
    __this->temp1_Value_inst = ::g::LOOP_FuseTriggersWhileFalse_Value_Property::New1(temp1, Cursos__Template8::__selector1());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp2, Cursos__Template8::__selector1());
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    __this->temp3_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp3, Cursos__Template8::__selector1());
    __this->showCreaAlumno_Visibility_inst = ::g::LOOP_FuseControlsDockPanel_Visibility_Property::New1(uPtr(__this->__parent1)->showCreaAlumno, Cursos__Template8::__selector2());
    __this->actPage_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(uPtr(__this->__parent1)->actPage, Cursos__Template8::__selector3());
    ::g::Fuse::Triggers::WhileTrue* temp4 = ::g::Fuse::Triggers::WhileTrue::New2();
    __this->temp4_Value_inst = ::g::LOOP_FuseTriggersWhileTrue_Value_Property::New1(temp4, Cursos__Template8::__selector1());
    ::g::Fuse::Triggers::WhileFalse* temp5 = ::g::Fuse::Triggers::WhileFalse::New2();
    __this->temp5_Value_inst = ::g::LOOP_FuseTriggersWhileFalse_Value_Property::New1(temp5, Cursos__Template8::__selector1());
    ::g::Fuse::Controls::Grid* temp6 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp7 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp8 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Url_inst, ::STRINGS[4/*"imagen"*/]);
    ::g::Fuse::Controls::Rectangle* temp9 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Triggers::WhileEnabled* temp10 = ::g::Fuse::Triggers::WhileEnabled::New2();
    ::g::Fuse::Animations::Skew* temp11 = ::g::Fuse::Animations::Skew::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp12 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp13 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<bool>*/], __this->temp1_Value_inst, ::STRINGS[5/*"editarAlumnos"*/]);
    ::g::Fuse::Controls::Grid* temp14 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp15 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<string>*/], __this->temp2_Value_inst, ::STRINGS[6/*"nombre"*/]);
    ::g::Fuse::Reactive::DataBinding* temp16 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<string>*/], __this->temp3_Value_inst, ::STRINGS[7/*"apellido"*/]);
    ::g::Fuse::Controls::Text* temp17 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp18 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp19 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp20 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp21 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp22 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[6/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->showCreaAlumno_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp23 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], __this->actPage_Active_inst);
    ::g::Fuse::Reactive::EventBinding* temp_eb221 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[8/*"editarAlumn...*/]);
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp25 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp26 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp27 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb231 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[9/*"eliminarAlu...*/]);
    ::g::Fuse::Reactive::DataBinding* temp28 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<bool>*/], __this->temp4_Value_inst, ::STRINGS[5/*"editarAlumnos"*/]);
    ::g::Fuse::Gestures::Clicked* temp29 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp30 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp31 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], __this->actPage_Active_inst);
    ::g::Fuse::Reactive::EventBinding* temp_eb241 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[10/*"selectAlumno"*/]);
    ::g::Fuse::Reactive::DataBinding* temp32 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<bool>*/], __this->temp5_Value_inst, ::STRINGS[5/*"editarAlumnos"*/]);
    ::g::Fuse::Controls::Rectangle* temp33 = ::g::Fuse::Controls::Rectangle::New3();
    self->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp6->Columns(::STRINGS[11/*"auto,auto"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp7->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp->StretchMode(6);
    temp->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    temp9->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp9->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp9->Alignment(1);
    temp9->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    temp9->ZOffset(2.0f);
    temp9->Fill(temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    temp11->DegreesX(-15.0f);
    temp11->Duration(0.4);
    temp14->Margin(::g::Uno::Float4__New2(14.0f, 10.0f, 14.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp2->FontSize(16.0f);
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->Alignment(9);
    temp2->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp2->Font(::g::MainView::museo300I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp3->FontSize(16.0f);
    temp3->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->Alignment(9);
    temp3->Font(::g::MainView::museo700I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp17->Value(::STRINGS[12/*">"*/]);
    temp17->FontSize(20.0f);
    temp17->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp17->Alignment(11);
    temp17->Margin(::g::Uno::Float4__New2(15.0f, 5.0f, 15.0f, 0.0f));
    temp17->Font(::g::MainView::pres_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp18->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp18->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp18->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp18->Alignment(3);
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 60.0f, 0.0f));
    temp18->ZOffset(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp19->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    temp19->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_EditaBlanco05838aae()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb221);
    temp21->add_Handler(uDelegate::New(::TYPES[18/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb221));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp22, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp23, uPtr(__this->__parent1)->crearAlumno);
    temp24->Color(::g::Uno::Float4__New2(0.8784314f, 0.2745098f, 0.3019608f, 1.0f));
    temp24->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp24->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp24->Alignment(3);
    temp24->ZOffset(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp25->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    temp25->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_XBlancae3cf47c1()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Actions()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb231);
    temp27->add_Handler(uDelegate::New(::TYPES[18/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb231));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Actions()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Actions()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb241);
    temp30->add_Handler(uDelegate::New(::TYPES[18/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb241));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp31, uPtr(__this->__parent1)->calificaAlumno);
    temp33->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp33->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp33->Alignment(12);
    temp33->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    return *__retval = self, void();
}

// public Template8 New(Cursos parent) :861
void Cursos__Template8__New2_fn(::g::Cursos* parent, Cursos__Template8** __retval)
{
    *__retval = Cursos__Template8::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template8::__selector0_;
::g::Uno::UX::Selector Cursos__Template8::__selector1_;
::g::Uno::UX::Selector Cursos__Template8::__selector2_;
::g::Uno::UX::Selector Cursos__Template8::__selector3_;

// public Template8(Cursos parent) [instance] :861
void Cursos__Template8::ctor_1(::g::Cursos* parent)
{
    uStackFrame __("Cursos.Template8", ".ctor(Cursos)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template8 New(Cursos parent) [static] :861
Cursos__Template8* Cursos__Template8::New2(::g::Cursos* parent)
{
    Cursos__Template8* obj1 = (Cursos__Template8*)uNew(Cursos__Template8_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
