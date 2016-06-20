// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Checkbox.h>
#include <_root.Cursos.h>
#include <_root.Cursos.Template11.h>
#include <_root.LOOP_Checkbox_Value_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
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
static uString* STRINGS[4];
static uType* TYPES[11];

namespace g{

// public partial sealed class Cursos.Template11 :1226
// {
// static Template11() :1236
static void Cursos__Template11__cctor__fn(uType* __type)
{
    Cursos__Template11::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void Cursos__Template11_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("nombres");
    ::STRINGS[2] = uString::Const("activo");
    ::STRINGS[3] = uString::Const("selectNewAlumno");
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
        ::g::Cursos_typeof(), offsetof(::g::Cursos__Template11, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template11, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template11, temp1_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template11::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template11__New2_fn, 0, true, Cursos__Template11_typeof(), 1, ::g::Cursos_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template11_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Cursos__Template11);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template11", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template11_build;
    type->fp_cctor_ = Cursos__Template11__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template11__New1_fn;
    return type;
}

// public Template11(Cursos parent) :1229
void Cursos__Template11__ctor_1_fn(Cursos__Template11* __this, ::g::Cursos* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :1239
void Cursos__Template11__New1_fn(Cursos__Template11* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template11", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Cursos__Template11::__selector0());
    ::g::Checkbox* temp1 = ::g::Checkbox::New5();
    __this->temp1_Value_inst = ::g::LOOP_Checkbox_Value_Property::New1(temp1, Cursos__Template11::__selector0());
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[1/*"nombres"*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], __this->temp1_Value_inst, ::STRINGS[2/*"activo"*/]);
    ::g::Fuse::Reactive::EventBinding* temp_eb341 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"selectNewAl...*/]);
    ::g::Fuse::Controls::Rectangle* temp4 = ::g::Fuse::Controls::Rectangle::New3();
    self->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    self->Padding(::g::Uno::Float4__New2(15.0f, 5.0f, 15.0f, 5.0f));
    temp->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    temp1->Alignment(3);
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb341));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb341);
    temp4->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp4->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp4->Alignment(12);
    temp4->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    return *__retval = self, void();
}

// public Template11 New(Cursos parent) :1229
void Cursos__Template11__New2_fn(::g::Cursos* parent, Cursos__Template11** __retval)
{
    *__retval = Cursos__Template11::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template11::__selector0_;

// public Template11(Cursos parent) [instance] :1229
void Cursos__Template11::ctor_1(::g::Cursos* parent)
{
    uStackFrame __("Cursos.Template11", ".ctor(Cursos)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template11 New(Cursos parent) [static] :1229
Cursos__Template11* Cursos__Template11::New2(::g::Cursos* parent)
{
    Cursos__Template11* obj1 = (Cursos__Template11*)uNew(Cursos__Template11_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
