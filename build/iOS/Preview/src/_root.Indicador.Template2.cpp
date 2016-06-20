// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Indicador.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Indicador.h>
#include <_root.Indicador.Template2.h>
#include <_root.Indicador.Template2.Template3.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.LOOP_FuseReactiveEach_Items_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
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
static uString* STRINGS[4];
static uType* TYPES[12];

namespace g{

// public partial sealed class Indicador.Template2 :149
// {
// static Template2() :229
static void Indicador__Template2__cctor__fn(uType* __type)
{
    Indicador__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Indicador__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Items"*/]);
}

static void Indicador__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Items");
    ::STRINGS[2] = uString::Const("habilidad");
    ::STRINGS[3] = uString::Const("subHabs");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof());
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[8] = ::g::Fuse::Binding_typeof();
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[10] = ::g::Uno::UX::Template_typeof();
    ::TYPES[11] = uObject_typeof();
    type->SetFields(2,
        ::g::Indicador_typeof(), offsetof(::g::Indicador__Template2, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador__Template2, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Indicador__Template2, temp1_Items_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template2::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Indicador__Template2__New2_fn, 0, true, Indicador__Template2_typeof(), 1, ::g::Indicador_typeof()));
}

::g::Uno::UX::Template_type* Indicador__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Indicador__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Indicador.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Indicador__Template2_build;
    type->fp_cctor_ = Indicador__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Indicador__Template2__New1_fn;
    return type;
}

// public Template2(Indicador parent) :152
void Indicador__Template2__ctor_1_fn(Indicador__Template2* __this, ::g::Indicador* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :232
void Indicador__Template2__New1_fn(Indicador__Template2* __this, uObject** __retval)
{
    uStackFrame __("Indicador.Template2", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Indicador__Template2::__selector0());
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New2();
    __this->temp1_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp1, Indicador__Template2::__selector1());
    ::g::Fuse::Controls::Grid* temp2 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[2/*"habilidad"*/]);
    ::g::Fuse::Controls::Rectangle* temp4 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp5 = ::g::Fuse::Controls::StackPanel::New4();
    Indicador__Template2__Template3* temp6 = Indicador__Template2__Template3::New2(__this);
    ::g::Fuse::Reactive::DataBinding* temp7 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<object>*/], __this->temp1_Items_inst, ::STRINGS[3/*"subHabs"*/]);
    temp2->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Padding(::g::Uno::Float4__New2(15.0f, 5.0f, 15.0f, 5.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp->TextWrapping(1);
    temp->FontSize(14.0f);
    temp->TextColor(::g::Uno::Float4__New2(0.5372549f, 0.5372549f, 0.5372549f, 1.0f));
    temp->Alignment(5);
    temp->Font(::g::MainView::museo300I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    temp4->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp4->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp4->Alignment(12);
    temp4->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    return *__retval = self, void();
}

// public Template2 New(Indicador parent) :152
void Indicador__Template2__New2_fn(::g::Indicador* parent, Indicador__Template2** __retval)
{
    *__retval = Indicador__Template2::New2(parent);
}

::g::Uno::UX::Selector Indicador__Template2::__selector0_;
::g::Uno::UX::Selector Indicador__Template2::__selector1_;

// public Template2(Indicador parent) [instance] :152
void Indicador__Template2::ctor_1(::g::Indicador* parent)
{
    uStackFrame __("Indicador.Template2", ".ctor(Indicador)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template2 New(Indicador parent) [static] :152
Indicador__Template2* Indicador__Template2::New2(::g::Indicador* parent)
{
    Indicador__Template2* obj1 = (Indicador__Template2*)uNew(Indicador__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
