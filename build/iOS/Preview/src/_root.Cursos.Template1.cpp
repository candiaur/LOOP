// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cursos.h>
#include <_root.Cursos.Template1.h>
#include <_root.LOOP_FuseControlsImage_Url_Property.h>
#include <_root.LOOP_FuseControlsPageControl_Active_Property.h>
#include <_root.LOOP_FuseControlsStackPanel_Visibility_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
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
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
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
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[9];
static uType* TYPES[19];

namespace g{

// public partial sealed class Cursos.Template1 :66
// {
// static Template1() :79
static void Cursos__Template1__cctor__fn(uType* __type)
{
    Cursos__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    Cursos__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    Cursos__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Active"*/]);
    Cursos__Template1::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Visibility"*/]);
}

static void Cursos__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Active");
    ::STRINGS[3] = uString::Const("Visibility");
    ::STRINGS[4] = uString::Const("imagen");
    ::STRINGS[5] = uString::Const("nombre");
    ::STRINGS[6] = uString::Const("apellido");
    ::STRINGS[7] = uString::Const("selectInstructor");
    ::STRINGS[8] = uString::Const(">");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[8] = ::g::Fuse::Binding_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[11] = ::g::Fuse::Node_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[13] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[15] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[16] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Visual_typeof();
    ::TYPES[18] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos_typeof(), offsetof(::g::Cursos__Template1, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Cursos__Template1, actPage_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos__Template1, showInstructores_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template1, temp_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template1, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template1, temp2_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template1::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template1::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template1__New2_fn, 0, true, Cursos__Template1_typeof(), 1, ::g::Cursos_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(Cursos__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template1_build;
    type->fp_cctor_ = Cursos__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template1__New1_fn;
    return type;
}

// public Template1(Cursos parent) :69
void Cursos__Template1__ctor_1_fn(Cursos__Template1* __this, ::g::Cursos* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :82
void Cursos__Template1__New1_fn(Cursos__Template1* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template1", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    __this->temp_Url_inst = ::g::LOOP_FuseControlsImage_Url_Property::New1(temp, Cursos__Template1::__selector0());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp1, Cursos__Template1::__selector1());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp2, Cursos__Template1::__selector1());
    __this->actPage_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(uPtr(__this->__parent1)->actPage, Cursos__Template1::__selector2());
    __this->showInstructores_Visibility_inst = ::g::LOOP_FuseControlsStackPanel_Visibility_Property::New1(uPtr(__this->__parent1)->showInstructores, Cursos__Template1::__selector3());
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp4 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Url_inst, ::STRINGS[4/*"imagen"*/]);
    ::g::Fuse::Controls::Rectangle* temp6 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Triggers::WhileEnabled* temp7 = ::g::Fuse::Triggers::WhileEnabled::New2();
    ::g::Fuse::Animations::Skew* temp8 = ::g::Fuse::Animations::Skew::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp9 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid* temp10 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp11 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[5/*"nombre"*/]);
    ::g::Fuse::Reactive::DataBinding* temp12 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<string>*/], __this->temp2_Value_inst, ::STRINGS[6/*"apellido"*/]);
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp14 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp15 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp16 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], __this->actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Set* temp17 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->showInstructores_Visibility_inst);
    ::g::Fuse::Reactive::EventBinding* temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[7/*"selectInstr...*/]);
    self->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    self->Padding(::g::Uno::Float4__New2(0.0f, 1.0f, 0.0f, 1.0f));
    temp3->Opacity(0.5f);
    temp3->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Strokes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp4);
    temp4->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp4->Width(1.0f);
    temp->StretchMode(6);
    temp->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    temp6->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp6->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp6->Alignment(1);
    temp6->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    temp6->ZOffset(2.0f);
    temp6->Fill(temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    temp8->DegreesX(-15.0f);
    temp8->Duration(0.4);
    temp10->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp1->FontSize(16.0f);
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->Alignment(9);
    temp1->Margin(::g::Uno::Float4__New2(65.0f, 0.0f, 0.0f, 0.0f));
    temp1->Font(::g::MainView::museo300I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp2->FontSize(16.0f);
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->Alignment(9);
    temp2->Margin(::g::Uno::Float4__New2(60.0f, 0.0f, 0.0f, 0.0f));
    temp2->Font(::g::MainView::museo700I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp13->Value(::STRINGS[8/*">"*/]);
    temp13->FontSize(20.0f);
    temp13->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp13->Alignment(11);
    temp13->Margin(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 0.0f));
    temp13->Font(::g::MainView::pres_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb21);
    temp15->add_Handler(uDelegate::New(::TYPES[16/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb21));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp16, uPtr(__this->__parent1)->pagCursos);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp17, uCRef<int>(1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    return *__retval = self, void();
}

// public Template1 New(Cursos parent) :69
void Cursos__Template1__New2_fn(::g::Cursos* parent, Cursos__Template1** __retval)
{
    *__retval = Cursos__Template1::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template1::__selector0_;
::g::Uno::UX::Selector Cursos__Template1::__selector1_;
::g::Uno::UX::Selector Cursos__Template1::__selector2_;
::g::Uno::UX::Selector Cursos__Template1::__selector3_;

// public Template1(Cursos parent) [instance] :69
void Cursos__Template1::ctor_1(::g::Cursos* parent)
{
    uStackFrame __("Cursos.Template1", ".ctor(Cursos)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template1 New(Cursos parent) [static] :69
Cursos__Template1* Cursos__Template1::New2(::g::Cursos* parent)
{
    Cursos__Template1* obj1 = (Cursos__Template1*)uNew(Cursos__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
