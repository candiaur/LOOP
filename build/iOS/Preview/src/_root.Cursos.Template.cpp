// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cursos.h>
#include <_root.Cursos.Template.h>
#include <_root.LOOP_FuseControlsPageControl_Active_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
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
static uString* STRINGS[6];
static uType* TYPES[13];

namespace g{

// public partial sealed class Cursos.Template :5
// {
// static Template() :15
static void Cursos__Template__cctor__fn(uType* __type)
{
    Cursos__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Cursos__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Active"*/]);
}

static void Cursos__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Active");
    ::STRINGS[2] = uString::Const("rama");
    ::STRINGS[3] = uString::Const("selectRama");
    ::STRINGS[4] = uString::Const("7*,3*");
    ::STRINGS[5] = uString::Const(">");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[7] = ::g::Fuse::Binding_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[9] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[10] = ::g::Fuse::Visual_typeof();
    ::TYPES[11] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[12] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos_typeof(), offsetof(::g::Cursos__Template, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Cursos__Template, actPage_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template__New2_fn, 0, true, Cursos__Template_typeof(), 1, ::g::Cursos_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Cursos__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template_build;
    type->fp_cctor_ = Cursos__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template__New1_fn;
    return type;
}

// public Template(Cursos parent) :8
void Cursos__Template__ctor_1_fn(Cursos__Template* __this, ::g::Cursos* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :18
void Cursos__Template__New1_fn(Cursos__Template* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Cursos__Template::__selector0());
    __this->actPage_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(uPtr(__this->__parent1)->actPage, Cursos__Template::__selector1());
    ::g::Fuse::Controls::Grid* temp1 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[2/*"rama"*/]);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp4 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp5 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp6 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], __this->actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp7 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb01 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"selectRama"*/]);
    self->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    self->Padding(::g::Uno::Float4__New2(14.0f, 10.0f, 14.0f, 10.0f));
    temp1->Columns(::STRINGS[4/*"7*,3*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp->FontSize(19.0f);
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(9);
    temp->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    temp3->Value(::STRINGS[5/*">"*/]);
    temp3->FontSize(20.0f);
    temp3->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->Alignment(11);
    temp3->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp3->Font(::g::MainView::pres_letter());
    temp4->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp4->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp4->Alignment(12);
    temp4->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb01);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp6, uPtr(__this->__parent1)->pagCursos);
    temp7->add_Handler(uDelegate::New(::TYPES[11/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb01));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    return *__retval = self, void();
}

// public Template New(Cursos parent) :8
void Cursos__Template__New2_fn(::g::Cursos* parent, Cursos__Template** __retval)
{
    *__retval = Cursos__Template::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template::__selector0_;
::g::Uno::UX::Selector Cursos__Template::__selector1_;

// public Template(Cursos parent) [instance] :8
void Cursos__Template::ctor_1(::g::Cursos* parent)
{
    uStackFrame __("Cursos.Template", ".ctor(Cursos)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template New(Cursos parent) [static] :8
Cursos__Template* Cursos__Template::New2(::g::Cursos* parent)
{
    Cursos__Template* obj1 = (Cursos__Template*)uNew(Cursos__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
