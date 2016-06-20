// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cursos.Template5.Template6.h>
#include <_root.Cursos.Template5.Template6.Template7.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.LOOP_FuseDrawingSolidColor_Color_Property.h>
#include <_root.LOOP_Operation_Opacity_Property.h>
#include <_root.MainView.h>
#include <_root.Operation.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[9];
static uType* TYPES[19];

namespace g{

// public partial sealed class Cursos.Template5.Template6.Template7 :460
// {
// static Template7() :475
static void Cursos__Template5__Template6__Template7__cctor__fn(uType* __type)
{
    Cursos__Template5__Template6__Template7::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Cursos__Template5__Template6__Template7::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Opacity"*/]);
    Cursos__Template5__Template6__Template7::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Color"*/]);
    Cursos__Template5__Template6__Template7::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"contents"*/]);
    Cursos__Template5__Template6__Template7::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"postponeText"*/]);
}

static void Cursos__Template5__Template6__Template7_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Opacity");
    ::STRINGS[2] = uString::Const("Color");
    ::STRINGS[3] = uString::Const("contents");
    ::STRINGS[4] = uString::Const("postponeText");
    ::STRINGS[5] = uString::Const("habilidad");
    ::STRINGS[6] = uString::Const("subHab");
    ::STRINGS[7] = uString::Const("eliminarSubHabActividad");
    ::STRINGS[8] = uString::Const("Eliminar");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[5] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[6] = ::g::Fuse::Visual_typeof();
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[11] = ::g::Fuse::Binding_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[13] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[15] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[16] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[18] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos__Template5__Template6_typeof(), offsetof(::g::Cursos__Template5__Template6__Template7, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Cursos__Template5__Template6__Template7, background_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Cursos__Template5__Template6__Template7, postponeText_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template5__Template6__Template7, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template5__Template6__Template7, temp1_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template5__Template6__Template7::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template5__Template6__Template7::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template5__Template6__Template7::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template5__Template6__Template7::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template5__Template6__Template7::__selector4_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template5__Template6__Template7__New2_fn, 0, true, Cursos__Template5__Template6__Template7_typeof(), 1, ::g::Cursos__Template5__Template6_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template5__Template6__Template7_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(Cursos__Template5__Template6__Template7);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template5.Template6.Template7", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template5__Template6__Template7_build;
    type->fp_cctor_ = Cursos__Template5__Template6__Template7__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template5__Template6__Template7__New1_fn;
    return type;
}

// public Template7(Cursos.Template5.Template6 parent) :463
void Cursos__Template5__Template6__Template7__ctor_1_fn(Cursos__Template5__Template6__Template7* __this, ::g::Cursos__Template5__Template6* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :478
void Cursos__Template5__Template6__Template7__New1_fn(Cursos__Template5__Template6__Template7* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template5.Template6.Template7", "New()");
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Cursos__Template5__Template6__Template7::__selector0());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp1, Cursos__Template5__Template6__Template7::__selector0());
    ::g::Operation* postponeText1 = ::g::Operation::New4();
    __this->postponeText_Opacity_inst = ::g::LOOP_Operation_Opacity_Property::New1(postponeText1, Cursos__Template5__Template6__Template7::__selector1());
    ::g::Fuse::Drawing::SolidColor* background1 = ::g::Fuse::Drawing::SolidColor::New2();
    __this->background_Color_inst = ::g::LOOP_FuseDrawingSolidColor_Color_Property::New1(background1, Cursos__Template5__Template6__Template7::__selector2());
    ::g::Fuse::Controls::PageControl* temp2 = ::g::Fuse::Controls::PageControl::New4();
    ::g::Fuse::Controls::Page* contents1 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp3 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[5/*"habilidad"*/]);
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[6/*"subHab"*/]);
    ::g::Fuse::Controls::Rectangle* temp6 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp7 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Page* temp8 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::ActivatingAnimation* temp9 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Triggers::Actions::Set* temp10 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<float>*/], __this->postponeText_Opacity_inst);
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[5/*Fuse.Animations.Change<float4>*/], __this->background_Color_inst);
    ::g::Fuse::Animations::Move* temp12 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::WhileActive* temp13 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp14 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb121 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[7/*"eliminarSub...*/]);
    ::g::Fuse::Controls::Rectangle* temp15 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Triggers::RemovingAnimation* temp16 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Move* temp17 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::LayoutAnimation* temp18 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp19 = ::g::Fuse::Animations::Move::New2();
    temp2->Active(contents1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), contents1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    contents1->Name(Cursos__Template5__Template6__Template7::__selector3());
    contents1->Background(temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(contents1->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Padding(::g::Uno::Float4__New2(14.0f, 8.0f, 14.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp->FontSize(10.0f);
    temp->TextColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp->Alignment(9);
    temp->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    temp1->TextWrapping(1);
    temp1->FontSize(12.0f);
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->Alignment(9);
    temp1->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    temp6->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp6->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp6->Alignment(12);
    temp6->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp10, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(::g::Uno::Float4__New2(0.8784314f, 0.2745098f, 0.3019608f, 1.0f)));
    temp11->Easing(18);
    temp12->X(-2.0f);
    temp12->Duration(0.3);
    temp12->DelayBack(0.0);
    temp12->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp12->Target(postponeText1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb121);
    temp14->add_Handler(uDelegate::New(::TYPES[16/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb121));
    postponeText1->Value(::STRINGS[8/*"Eliminar"*/]);
    postponeText1->Name(Cursos__Template5__Template6__Template7::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Fills()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), background1);
    background1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Animators()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp17);
    temp17->Y(-1.0f);
    temp17->Easing(21);
    temp17->Duration(0.4);
    temp17->RelativeTo(::g::Fuse::TranslationModes::Size());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    temp19->Y(1.0f);
    temp19->Easing(21);
    temp19->Duration(0.8);
    temp19->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), postponeText1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    return *__retval = self, void();
}

// public Template7 New(Cursos.Template5.Template6 parent) :463
void Cursos__Template5__Template6__Template7__New2_fn(::g::Cursos__Template5__Template6* parent, Cursos__Template5__Template6__Template7** __retval)
{
    *__retval = Cursos__Template5__Template6__Template7::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template5__Template6__Template7::__selector0_;
::g::Uno::UX::Selector Cursos__Template5__Template6__Template7::__selector1_;
::g::Uno::UX::Selector Cursos__Template5__Template6__Template7::__selector2_;
::g::Uno::UX::Selector Cursos__Template5__Template6__Template7::__selector3_;
::g::Uno::UX::Selector Cursos__Template5__Template6__Template7::__selector4_;

// public Template7(Cursos.Template5.Template6 parent) [instance] :463
void Cursos__Template5__Template6__Template7::ctor_1(::g::Cursos__Template5__Template6* parent)
{
    uStackFrame __("Cursos.Template5.Template6.Template7", ".ctor(Cursos.Template5.Template6)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template7 New(Cursos.Template5.Template6 parent) [static] :463
Cursos__Template5__Template6__Template7* Cursos__Template5__Template6__Template7::New2(::g::Cursos__Template5__Template6* parent)
{
    Cursos__Template5__Template6__Template7* obj1 = (Cursos__Template5__Template6__Template7*)uNew(Cursos__Template5__Template6__Template7_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
