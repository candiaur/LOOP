// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Indicador.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Indicador.h>
#include <_root.Indicador.Template.h>
#include <_root.LOOP_FuseControlsCircle_LengthAngleDegrees_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Layer.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Visual.h>
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
static uString* STRINGS[5];
static uType* TYPES[11];

namespace g{

// public partial sealed class Indicador.Template :5
// {
// static Template() :15
static void Indicador__Template__cctor__fn(uType* __type)
{
    Indicador__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Indicador__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"LengthAngle...*/]);
}

static void Indicador__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("LengthAngleDegrees");
    ::STRINGS[2] = uString::Const("nota");
    ::STRINGS[3] = uString::Const("radio");
    ::STRINGS[4] = uString::Const("nombre");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[7] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[9] = ::g::Fuse::Binding_typeof();
    ::TYPES[10] = uObject_typeof();
    type->SetFields(2,
        ::g::Indicador_typeof(), offsetof(::g::Indicador__Template, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Indicador__Template, temp1_LengthAngleDegrees_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador__Template, temp2_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Indicador__Template__New2_fn, 0, true, Indicador__Template_typeof(), 1, ::g::Indicador_typeof()));
}

::g::Uno::UX::Template_type* Indicador__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Indicador__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Indicador.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Indicador__Template_build;
    type->fp_cctor_ = Indicador__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Indicador__Template__New1_fn;
    return type;
}

// public Template(Indicador parent) :8
void Indicador__Template__ctor_1_fn(Indicador__Template* __this, ::g::Indicador* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :18
void Indicador__Template__New1_fn(Indicador__Template* __this, uObject** __retval)
{
    uStackFrame __("Indicador.Template", "New()");
    ::g::Fuse::Controls::Grid* self = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Indicador__Template::__selector0());
    ::g::Fuse::Controls::Circle* temp1 = ::g::Fuse::Controls::Circle::New3();
    __this->temp1_LengthAngleDegrees_inst = ::g::LOOP_FuseControlsCircle_LengthAngleDegrees_Property::New1(temp1, Indicador__Template::__selector1());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp2, Indicador__Template::__selector0());
    ::g::Fuse::Controls::Panel* temp3 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp4 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::Stroke* temp5 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp6 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7098039f, 0.7098039f, 0.7098039f, 1.0f));
    ::g::Fuse::Drawing::Stroke* temp7 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp8 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp9 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[2/*"nota"*/]);
    ::g::Fuse::Reactive::DataBinding* temp10 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<float>*/], __this->temp1_LengthAngleDegrees_inst, ::STRINGS[3/*"radio"*/]);
    ::g::Fuse::Controls::StackPanel* temp11 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp12 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], __this->temp2_Value_inst, ::STRINGS[4/*"nombre"*/]);
    self->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp4->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp4->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp4->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Strokes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp5);
    temp5->Width(3.0f);
    temp5->Brush(temp6);
    temp1->StartAngleDegrees(-90.0f);
    temp1->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp1->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp1->Margin(::g::Uno::Float4__New2(0.0f, -10.0f, 0.0f, -10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Strokes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp7->Width(3.0f);
    temp7->Brush(temp8);
    temp->FontSize(25.5f);
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(10);
    temp->Layer(0);
    temp->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp11->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp11->Alignment(8);
    temp11->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->TextWrapping(1);
    temp2->FontSize(9.0f);
    temp2->TextAlignment(1);
    temp2->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp2->Width(::g::Uno::UX::Size__New1(65.0f, 1));
    temp2->Font(::g::MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    return *__retval = self, void();
}

// public Template New(Indicador parent) :8
void Indicador__Template__New2_fn(::g::Indicador* parent, Indicador__Template** __retval)
{
    *__retval = Indicador__Template::New2(parent);
}

::g::Uno::UX::Selector Indicador__Template::__selector0_;
::g::Uno::UX::Selector Indicador__Template::__selector1_;

// public Template(Indicador parent) [instance] :8
void Indicador__Template::ctor_1(::g::Indicador* parent)
{
    uStackFrame __("Indicador.Template", ".ctor(Indicador)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template New(Indicador parent) [static] :8
Indicador__Template* Indicador__Template::New2(::g::Indicador* parent)
{
    Indicador__Template* obj1 = (Indicador__Template*)uNew(Indicador__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
