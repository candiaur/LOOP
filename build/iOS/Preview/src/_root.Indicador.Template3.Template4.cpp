// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Indicador.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Indicador.Template3.h>
#include <_root.Indicador.Template3.Template4.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
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
static uString* STRINGS[4];
static uType* TYPES[7];

namespace g{

// public partial sealed class Indicador.Template3.Template4 :279
// {
// static Template4() :288
static void Indicador__Template3__Template4__cctor__fn(uType* __type)
{
    Indicador__Template3__Template4::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void Indicador__Template3__Template4_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("subHab");
    ::STRINGS[2] = uString::Const("fecha");
    ::STRINGS[3] = uString::Const("5*,2*");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[3] = ::g::Fuse::Binding_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = uObject_typeof();
    type->SetFields(2,
        ::g::Indicador__Template3_typeof(), offsetof(::g::Indicador__Template3__Template4, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador__Template3__Template4, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador__Template3__Template4, temp1_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template3__Template4::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Indicador__Template3__Template4__New2_fn, 0, true, Indicador__Template3__Template4_typeof(), 1, ::g::Indicador__Template3_typeof()));
}

::g::Uno::UX::Template_type* Indicador__Template3__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Indicador__Template3__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Indicador.Template3.Template4", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Indicador__Template3__Template4_build;
    type->fp_cctor_ = Indicador__Template3__Template4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Indicador__Template3__Template4__New1_fn;
    return type;
}

// public Template4(Indicador.Template3 parent) :282
void Indicador__Template3__Template4__ctor_1_fn(Indicador__Template3__Template4* __this, ::g::Indicador__Template3* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :291
void Indicador__Template3__Template4__New1_fn(Indicador__Template3__Template4* __this, uObject** __retval)
{
    uStackFrame __("Indicador.Template3.Template4", "New()");
    ::g::Fuse::Controls::Grid* self = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Indicador__Template3__Template4::__selector0());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp1, Indicador__Template3__Template4::__selector0());
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[1/*"subHab"*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[2/*"fecha"*/]);
    ::g::Fuse::Controls::Rectangle* temp4 = ::g::Fuse::Controls::Rectangle::New3();
    self->Columns(::STRINGS[3/*"5*,2*"*/]);
    self->Color(::g::Uno::Float4__New2(0.9882353f, 0.9843137f, 0.9882353f, 1.0f));
    self->Padding(::g::Uno::Float4__New2(15.0f, 5.0f, 15.0f, 5.0f));
    temp->TextWrapping(1);
    temp->FontSize(14.0f);
    temp->Alignment(9);
    temp->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    temp1->TextWrapping(1);
    temp1->FontSize(12.0f);
    temp1->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp1->Alignment(11);
    temp1->Font(::g::MainView::museo100I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    temp4->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp4->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp4->Alignment(12);
    temp4->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    return *__retval = self, void();
}

// public Template4 New(Indicador.Template3 parent) :282
void Indicador__Template3__Template4__New2_fn(::g::Indicador__Template3* parent, Indicador__Template3__Template4** __retval)
{
    *__retval = Indicador__Template3__Template4::New2(parent);
}

::g::Uno::UX::Selector Indicador__Template3__Template4::__selector0_;

// public Template4(Indicador.Template3 parent) [instance] :282
void Indicador__Template3__Template4::ctor_1(::g::Indicador__Template3* parent)
{
    uStackFrame __("Indicador.Template3.Template4", ".ctor(Indicador.Template3)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template4 New(Indicador.Template3 parent) [static] :282
Indicador__Template3__Template4* Indicador__Template3__Template4::New2(::g::Indicador__Template3* parent)
{
    Indicador__Template3__Template4* obj1 = (Indicador__Template3__Template4*)uNew(Indicador__Template3__Template4_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
