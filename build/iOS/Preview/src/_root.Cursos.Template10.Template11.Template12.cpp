// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Checkbox.h>
#include <_root.Cursos.Template10.Template11.h>
#include <_root.Cursos.Template10.Template11.Template12.h>
#include <_root.LOOP_Checkbox_Value_Property.h>
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
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
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
static uString* STRINGS[9];
static uType* TYPES[11];

namespace g{

// public partial sealed class Cursos.Template10.Template11.Template12 :1093
// {
// static Template12() :1107
static void Cursos__Template10__Template11__Template12__cctor__fn(uType* __type)
{
    Cursos__Template10__Template11__Template12::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void Cursos__Template10__Template11__Template12_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("subHab");
    ::STRINGS[2] = uString::Const("noLogrado");
    ::STRINGS[3] = uString::Const("selectN");
    ::STRINGS[4] = uString::Const("medio");
    ::STRINGS[5] = uString::Const("selectM");
    ::STRINGS[6] = uString::Const("logrado");
    ::STRINGS[7] = uString::Const("selectL");
    ::STRINGS[8] = uString::Const("7*,1*,1*,1*");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[5] = ::g::Fuse::Binding_typeof();
    ::TYPES[6] = ::g::Fuse::Visual_typeof();
    ::TYPES[7] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos__Template10__Template11_typeof(), offsetof(::g::Cursos__Template10__Template11__Template12, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template10__Template11__Template12, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template10__Template11__Template12, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template10__Template11__Template12, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template10__Template11__Template12, temp3_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template10__Template11__Template12::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template10__Template11__Template12__New2_fn, 0, true, Cursos__Template10__Template11__Template12_typeof(), 1, ::g::Cursos__Template10__Template11_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template10__Template11__Template12_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Cursos__Template10__Template11__Template12);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template10.Template11.Template12", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template10__Template11__Template12_build;
    type->fp_cctor_ = Cursos__Template10__Template11__Template12__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template10__Template11__Template12__New1_fn;
    return type;
}

// public Template12(Cursos.Template10.Template11 parent) :1096
void Cursos__Template10__Template11__Template12__ctor_1_fn(Cursos__Template10__Template11__Template12* __this, ::g::Cursos__Template10__Template11* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :1110
void Cursos__Template10__Template11__Template12__New1_fn(Cursos__Template10__Template11__Template12* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template10.Template11.Template12", "New()");
    ::g::Fuse::Controls::Grid* self = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Cursos__Template10__Template11__Template12::__selector0());
    ::g::Checkbox* temp1 = ::g::Checkbox::New5();
    __this->temp1_Value_inst = ::g::LOOP_Checkbox_Value_Property::New1(temp1, Cursos__Template10__Template11__Template12::__selector0());
    ::g::Checkbox* temp2 = ::g::Checkbox::New5();
    __this->temp2_Value_inst = ::g::LOOP_Checkbox_Value_Property::New1(temp2, Cursos__Template10__Template11__Template12::__selector0());
    ::g::Checkbox* temp3 = ::g::Checkbox::New5();
    __this->temp3_Value_inst = ::g::LOOP_Checkbox_Value_Property::New1(temp3, Cursos__Template10__Template11__Template12::__selector0());
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[1/*"subHab"*/]);
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], __this->temp1_Value_inst, ::STRINGS[2/*"noLogrado"*/]);
    ::g::Fuse::Reactive::EventBinding* temp_eb301 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"selectN"*/]);
    ::g::Fuse::Reactive::DataBinding* temp6 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], __this->temp2_Value_inst, ::STRINGS[4/*"medio"*/]);
    ::g::Fuse::Reactive::EventBinding* temp_eb311 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[5/*"selectM"*/]);
    ::g::Fuse::Reactive::DataBinding* temp7 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], __this->temp3_Value_inst, ::STRINGS[6/*"logrado"*/]);
    ::g::Fuse::Reactive::EventBinding* temp_eb321 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[7/*"selectL"*/]);
    ::g::Fuse::Controls::Rectangle* temp8 = ::g::Fuse::Controls::Rectangle::New3();
    self->Columns(::STRINGS[8/*"7*,1*,1*,1*"*/]);
    self->Color(::g::Uno::Float4__New2(0.9882353f, 0.9843137f, 0.9882353f, 1.0f));
    self->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    temp->TextWrapping(1);
    temp->FontSize(12.0f);
    temp->TextColor(::g::Uno::Float4__New2(0.5372549f, 0.5372549f, 0.5372549f, 1.0f));
    temp->Alignment(9);
    temp->Font(::g::MainView::museo300I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    temp1->Alignment(10);
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb301));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb301);
    temp2->Alignment(10);
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp2, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb311));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb311);
    temp3->Alignment(10);
    temp3->TextColor(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp3, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb321));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb321);
    temp8->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp8->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp8->Alignment(12);
    temp8->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    return *__retval = self, void();
}

// public Template12 New(Cursos.Template10.Template11 parent) :1096
void Cursos__Template10__Template11__Template12__New2_fn(::g::Cursos__Template10__Template11* parent, Cursos__Template10__Template11__Template12** __retval)
{
    *__retval = Cursos__Template10__Template11__Template12::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template10__Template11__Template12::__selector0_;

// public Template12(Cursos.Template10.Template11 parent) [instance] :1096
void Cursos__Template10__Template11__Template12::ctor_1(::g::Cursos__Template10__Template11* parent)
{
    uStackFrame __("Cursos.Template10.Template11.Template12", ".ctor(Cursos.Template10.Template11)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template12 New(Cursos.Template10.Template11 parent) [static] :1096
Cursos__Template10__Template11__Template12* Cursos__Template10__Template11__Template12::New2(::g::Cursos__Template10__Template11* parent)
{
    Cursos__Template10__Template11__Template12* obj1 = (Cursos__Template10__Template11__Template12*)uNew(Cursos__Template10__Template11__Template12_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
