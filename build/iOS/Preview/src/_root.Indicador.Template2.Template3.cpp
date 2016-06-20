// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Indicador.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Indicador.Template2.h>
#include <_root.Indicador.Template2.Template3.h>
#include <_root.LOOP_FuseControlsImage_Source_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
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
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Resources.ImageSource.h>
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
static uString* STRINGS[7];
static uType* TYPES[9];

namespace g{

// public partial sealed class Indicador.Template2.Template3 :157
// {
// static Template3() :168
static void Indicador__Template2__Template3__cctor__fn(uType* __type)
{
    Indicador__Template2__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Indicador__Template2__Template3::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Source"*/]);
}

static void Indicador__Template2__Template3_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Source");
    ::STRINGS[2] = uString::Const("subHab");
    ::STRINGS[3] = uString::Const("noLogrado");
    ::STRINGS[4] = uString::Const("medio");
    ::STRINGS[5] = uString::Const("logrado");
    ::STRINGS[6] = uString::Const("7*,1*,1*,1*");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Reactive::DataToResourceBinding_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[5] = ::g::Fuse::Binding_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = uObject_typeof();
    type->SetFields(2,
        ::g::Indicador__Template2_typeof(), offsetof(::g::Indicador__Template2__Template3, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador__Template2__Template3, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof()), offsetof(::g::Indicador__Template2__Template3, temp1_Source_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof()), offsetof(::g::Indicador__Template2__Template3, temp2_Source_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof()), offsetof(::g::Indicador__Template2__Template3, temp3_Source_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template2__Template3::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador__Template2__Template3::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Indicador__Template2__Template3__New2_fn, 0, true, Indicador__Template2__Template3_typeof(), 1, ::g::Indicador__Template2_typeof()));
}

::g::Uno::UX::Template_type* Indicador__Template2__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Indicador__Template2__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Indicador.Template2.Template3", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Indicador__Template2__Template3_build;
    type->fp_cctor_ = Indicador__Template2__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Indicador__Template2__Template3__New1_fn;
    return type;
}

// public Template3(Indicador.Template2 parent) :160
void Indicador__Template2__Template3__ctor_1_fn(Indicador__Template2__Template3* __this, ::g::Indicador__Template2* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :171
void Indicador__Template2__Template3__New1_fn(Indicador__Template2__Template3* __this, uObject** __retval)
{
    uStackFrame __("Indicador.Template2.Template3", "New()");
    ::g::Fuse::Controls::Grid* self = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Indicador__Template2__Template3::__selector0());
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    __this->temp1_Source_inst = ::g::LOOP_FuseControlsImage_Source_Property::New1(temp1, Indicador__Template2__Template3::__selector1());
    ::g::Fuse::Controls::Image* temp2 = ::g::Fuse::Controls::Image::New3();
    __this->temp2_Source_inst = ::g::LOOP_FuseControlsImage_Source_Property::New1(temp2, Indicador__Template2__Template3::__selector1());
    ::g::Fuse::Controls::Image* temp3 = ::g::Fuse::Controls::Image::New3();
    __this->temp3_Source_inst = ::g::LOOP_FuseControlsImage_Source_Property::New1(temp3, Indicador__Template2__Template3::__selector1());
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[2/*"subHab"*/]);
    ::g::Fuse::Controls::Panel* temp5 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataToResourceBinding* temp6 = (::g::Fuse::Reactive::DataToResourceBinding*)::g::Fuse::Reactive::DataToResourceBinding::New2(::TYPES[3/*Fuse.Reactive.DataToResourceBinding<Fuse.Resources.ImageSource>*/], __this->temp1_Source_inst, ::STRINGS[3/*"noLogrado"*/]);
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataToResourceBinding* temp8 = (::g::Fuse::Reactive::DataToResourceBinding*)::g::Fuse::Reactive::DataToResourceBinding::New2(::TYPES[3/*Fuse.Reactive.DataToResourceBinding<Fuse.Resources.ImageSource>*/], __this->temp2_Source_inst, ::STRINGS[4/*"medio"*/]);
    ::g::Fuse::Controls::Panel* temp9 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataToResourceBinding* temp10 = (::g::Fuse::Reactive::DataToResourceBinding*)::g::Fuse::Reactive::DataToResourceBinding::New2(::TYPES[3/*Fuse.Reactive.DataToResourceBinding<Fuse.Resources.ImageSource>*/], __this->temp3_Source_inst, ::STRINGS[5/*"logrado"*/]);
    ::g::Fuse::Controls::Rectangle* temp11 = ::g::Fuse::Controls::Rectangle::New3();
    self->Columns(::STRINGS[6/*"7*,1*,1*,1*"*/]);
    self->Color(::g::Uno::Float4__New2(0.9882353f, 0.9843137f, 0.9882353f, 1.0f));
    self->Padding(::g::Uno::Float4__New2(15.0f, 5.0f, 15.0f, 5.0f));
    temp->TextWrapping(1);
    temp->FontSize(14.0f);
    temp->Alignment(9);
    temp->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp1->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp1->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp2->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp3->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp3->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp11->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp11->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp11->Alignment(12);
    temp11->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    return *__retval = self, void();
}

// public Template3 New(Indicador.Template2 parent) :160
void Indicador__Template2__Template3__New2_fn(::g::Indicador__Template2* parent, Indicador__Template2__Template3** __retval)
{
    *__retval = Indicador__Template2__Template3::New2(parent);
}

::g::Uno::UX::Selector Indicador__Template2__Template3::__selector0_;
::g::Uno::UX::Selector Indicador__Template2__Template3::__selector1_;

// public Template3(Indicador.Template2 parent) [instance] :160
void Indicador__Template2__Template3::ctor_1(::g::Indicador__Template2* parent)
{
    uStackFrame __("Indicador.Template2.Template3", ".ctor(Indicador.Template2)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template3 New(Indicador.Template2 parent) [static] :160
Indicador__Template2__Template3* Indicador__Template2__Template3::New2(::g::Indicador__Template2* parent)
{
    Indicador__Template2__Template3* obj1 = (Indicador__Template2__Template3*)uNew(Indicador__Template2__Template3_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
