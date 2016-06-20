// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Checkbox.h>
#include <_root.Cursos.Template7.Template8.h>
#include <_root.Cursos.Template7.Template8.Template9.h>
#include <_root.LOOP_Checkbox_Value_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
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
static uString* STRINGS[5];
static uType* TYPES[11];

namespace g{

// public partial sealed class Cursos.Template7.Template8.Template9 :706
// {
// static Template9() :716
static void Cursos__Template7__Template8__Template9__cctor__fn(uType* __type)
{
    Cursos__Template7__Template8__Template9::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void Cursos__Template7__Template8__Template9_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("subHab");
    ::STRINGS[2] = uString::Const("activo");
    ::STRINGS[3] = uString::Const("selectSubHab");
    ::STRINGS[4] = uString::Const("9*,1*");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[7] = ::g::Fuse::Binding_typeof();
    ::TYPES[8] = ::g::Fuse::Visual_typeof();
    ::TYPES[9] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[10] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos__Template7__Template8_typeof(), offsetof(::g::Cursos__Template7__Template8__Template9, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template7__Template8__Template9, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template7__Template8__Template9, temp1_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template7__Template8__Template9::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template7__Template8__Template9__New2_fn, 0, true, Cursos__Template7__Template8__Template9_typeof(), 1, ::g::Cursos__Template7__Template8_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template7__Template8__Template9_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Cursos__Template7__Template8__Template9);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template7.Template8.Template9", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template7__Template8__Template9_build;
    type->fp_cctor_ = Cursos__Template7__Template8__Template9__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template7__Template8__Template9__New1_fn;
    return type;
}

// public Template9(Cursos.Template7.Template8 parent) :709
void Cursos__Template7__Template8__Template9__ctor_1_fn(Cursos__Template7__Template8__Template9* __this, ::g::Cursos__Template7__Template8* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :719
void Cursos__Template7__Template8__Template9__New1_fn(Cursos__Template7__Template8__Template9* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template7.Template8.Template9", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Cursos__Template7__Template8__Template9::__selector0());
    ::g::Checkbox* temp1 = ::g::Checkbox::New5();
    __this->temp1_Value_inst = ::g::LOOP_Checkbox_Value_Property::New1(temp1, Cursos__Template7__Template8__Template9::__selector0());
    ::g::Fuse::Controls::Grid* temp2 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[1/*"subHab"*/]);
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], __this->temp1_Value_inst, ::STRINGS[2/*"activo"*/]);
    ::g::Fuse::Reactive::EventBinding* temp_eb191 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"selectSubHab"*/]);
    ::g::Fuse::Controls::Rectangle* temp5 = ::g::Fuse::Controls::Rectangle::New3();
    self->Color(::g::Uno::Float4__New2(0.9882353f, 0.9843137f, 0.9882353f, 1.0f));
    temp2->Columns(::STRINGS[4/*"9*,1*"*/]);
    temp2->Padding(::g::Uno::Float4__New2(14.0f, 2.0f, 14.0f, 2.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp->TextWrapping(1);
    temp->FontSize(12.0f);
    temp->TextColor(::g::Uno::Float4__New2(0.5372549f, 0.5372549f, 0.5372549f, 1.0f));
    temp->Alignment(9);
    temp->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 0.0f));
    temp->Font(::g::MainView::museo300I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    temp1->Alignment(10);
    temp1->Padding(::g::Uno::Float4__New2(0.0f, 2.0f, 0.0f, 2.0f));
    temp1->TextColor(::g::Uno::Float4__New2(0.8627451f, 0.8627451f, 0.8627451f, 1.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb191));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb191);
    temp5->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp5->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp5->Alignment(12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    return *__retval = self, void();
}

// public Template9 New(Cursos.Template7.Template8 parent) :709
void Cursos__Template7__Template8__Template9__New2_fn(::g::Cursos__Template7__Template8* parent, Cursos__Template7__Template8__Template9** __retval)
{
    *__retval = Cursos__Template7__Template8__Template9::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template7__Template8__Template9::__selector0_;

// public Template9(Cursos.Template7.Template8 parent) [instance] :709
void Cursos__Template7__Template8__Template9::ctor_1(::g::Cursos__Template7__Template8* parent)
{
    uStackFrame __("Cursos.Template7.Template8.Template9", ".ctor(Cursos.Template7.Template8)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template9 New(Cursos.Template7.Template8 parent) [static] :709
Cursos__Template7__Template8__Template9* Cursos__Template7__Template8__Template9::New2(::g::Cursos__Template7__Template8* parent)
{
    Cursos__Template7__Template8__Template9* obj1 = (Cursos__Template7__Template8__Template9*)uNew(Cursos__Template7__Template8__Template9_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
