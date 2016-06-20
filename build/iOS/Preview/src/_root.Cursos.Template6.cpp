// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cursos.h>
#include <_root.Cursos.Template6.h>
#include <_root.LOOP_FuseControlsImage_Source_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.LOOP_FuseTriggersWhileTrue_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layer.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Rotation.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
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
static uString* STRINGS[8];
static uType* TYPES[14];

namespace g{

// public partial sealed class Cursos.Template6 :612
// {
// static Template6() :623
static void Cursos__Template6__cctor__fn(uType* __type)
{
    Cursos__Template6::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Source"*/]);
    Cursos__Template6::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void Cursos__Template6_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Source");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("icono");
    ::STRINGS[3] = uString::Const("nivel");
    ::STRINGS[4] = uString::Const("activo");
    ::STRINGS[5] = uString::Const("mostrarHabs");
    ::STRINGS[6] = uString::Const("auto,auto,1*");
    ::STRINGS[7] = uString::Const(">");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[3] = ::g::Fuse::Reactive::DataToResourceBinding_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[4] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[9] = ::g::Fuse::Binding_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[11] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[12] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos_typeof(), offsetof(::g::Cursos__Template6, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof()), offsetof(::g::Cursos__Template6, temp_Source_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template6, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template6, temp2_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template6::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template6::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template6__New2_fn, 0, true, Cursos__Template6_typeof(), 1, ::g::Cursos_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template6_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Cursos__Template6);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template6", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template6_build;
    type->fp_cctor_ = Cursos__Template6__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template6__New1_fn;
    return type;
}

// public Template6(Cursos parent) :615
void Cursos__Template6__ctor_1_fn(Cursos__Template6* __this, ::g::Cursos* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :626
void Cursos__Template6__New1_fn(Cursos__Template6* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template6", "New()");
    ::g::Fuse::Controls::StackPanel* self = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    __this->temp_Source_inst = ::g::LOOP_FuseControlsImage_Source_Property::New1(temp, Cursos__Template6::__selector0());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp1, Cursos__Template6::__selector1());
    ::g::Fuse::Triggers::WhileTrue* temp2 = ::g::Fuse::Triggers::WhileTrue::New2();
    __this->temp2_Value_inst = ::g::LOOP_FuseTriggersWhileTrue_Value_Property::New1(temp2, Cursos__Template6::__selector1());
    ::g::Fuse::Controls::Grid* temp3 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataToResourceBinding* temp4 = (::g::Fuse::Reactive::DataToResourceBinding*)::g::Fuse::Reactive::DataToResourceBinding::New2(::TYPES[3/*Fuse.Reactive.DataToResourceBinding<Fuse.Resources.ImageSource>*/], __this->temp_Source_inst, ::STRINGS[2/*"icono"*/]);
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[3/*"nivel"*/]);
    ::g::Fuse::Controls::StackPanel* temp6 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Rotation* temp8 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Reactive::DataBinding* temp9 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<bool>*/], __this->temp2_Value_inst, ::STRINGS[4/*"activo"*/]);
    ::g::Fuse::Gestures::Clicked* temp10 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp11 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb161 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[5/*"mostrarHabs"*/]);
    ::g::Fuse::Controls::Rectangle* temp12 = ::g::Fuse::Controls::Rectangle::New3();
    self->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    self->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    temp3->Columns(::STRINGS[6/*"auto,auto,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp->Height(::g::Uno::UX::Size__New1(12.0f, 1));
    temp->Alignment(8);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 2.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    temp1->TextWrapping(1);
    temp1->FontSize(12.0f);
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->Alignment(9);
    temp1->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    temp6->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp7->Value(::STRINGS[7/*">"*/]);
    temp7->FontSize(12.0f);
    temp7->TextAlignment(2);
    temp7->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp7->Font(::g::MainView::pres_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp8->Degrees(90.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb161);
    temp11->add_Handler(uDelegate::New(::TYPES[12/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb161));
    temp12->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp12->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp12->Alignment(12);
    temp12->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    return *__retval = self, void();
}

// public Template6 New(Cursos parent) :615
void Cursos__Template6__New2_fn(::g::Cursos* parent, Cursos__Template6** __retval)
{
    *__retval = Cursos__Template6::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template6::__selector0_;
::g::Uno::UX::Selector Cursos__Template6::__selector1_;

// public Template6(Cursos parent) [instance] :615
void Cursos__Template6::ctor_1(::g::Cursos* parent)
{
    uStackFrame __("Cursos.Template6", ".ctor(Cursos)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template6 New(Cursos parent) [static] :615
Cursos__Template6* Cursos__Template6::New2(::g::Cursos* parent)
{
    Cursos__Template6* obj1 = (Cursos__Template6*)uNew(Cursos__Template6_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
