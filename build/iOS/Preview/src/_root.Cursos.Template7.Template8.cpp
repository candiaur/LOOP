// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Checkbox.h>
#include <_root.Cursos.Template7.h>
#include <_root.Cursos.Template7.Template8.h>
#include <_root.Cursos.Template7.Template8.Template9.h>
#include <_root.LOOP_Checkbox_Value_Property.h>
#include <_root.LOOP_FuseControlsStackPanel_Visibility_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.LOOP_FuseReactiveEach_Items_Property.h>
#include <_root.MainView.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Triggers.Actions.Callback.h>
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
static uString* STRINGS[10];
static uType* TYPES[21];

namespace g{

// public partial sealed class Cursos.Template7.Template8 :698
// {
// static Template8() :764
static void Cursos__Template7__Template8__cctor__fn(uType* __type)
{
    Cursos__Template7__Template8::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Cursos__Template7__Template8::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Items"*/]);
    Cursos__Template7__Template8::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Visibility"*/]);
}

static void Cursos__Template7__Template8_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Items");
    ::STRINGS[2] = uString::Const("Visibility");
    ::STRINGS[3] = uString::Const("habilidad");
    ::STRINGS[4] = uString::Const("activo");
    ::STRINGS[5] = uString::Const("selectHab");
    ::STRINGS[6] = uString::Const("mostrarSubHabs");
    ::STRINGS[7] = uString::Const("subHabs");
    ::STRINGS[8] = uString::Const("isVisible");
    ::STRINGS[9] = uString::Const("9*,1*");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[4] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[6] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[7] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[8] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[12] = ::g::Fuse::Binding_typeof();
    ::TYPES[13] = ::g::Fuse::Visual_typeof();
    ::TYPES[14] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[16] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[17] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[19] = ::g::Uno::UX::Template_typeof();
    ::TYPES[20] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos__Template7_typeof(), offsetof(::g::Cursos__Template7__Template8, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos__Template7__Template8, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos__Template7__Template8, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos__Template7__Template8, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos__Template7__Template8, temp3_Visibility_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template7__Template8::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template7__Template8::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template7__Template8::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template7__Template8__New2_fn, 0, true, Cursos__Template7__Template8_typeof(), 1, ::g::Cursos__Template7_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template7__Template8_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Cursos__Template7__Template8);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template7.Template8", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template7__Template8_build;
    type->fp_cctor_ = Cursos__Template7__Template8__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template7__Template8__New1_fn;
    return type;
}

// public Template8(Cursos.Template7 parent) :701
void Cursos__Template7__Template8__ctor_1_fn(Cursos__Template7__Template8* __this, ::g::Cursos__Template7* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :767
void Cursos__Template7__Template8__New1_fn(Cursos__Template7__Template8* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template7.Template8", "New()");
    ::g::Fuse::Controls::DockPanel* self = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp, Cursos__Template7__Template8::__selector0());
    ::g::Checkbox* temp1 = ::g::Checkbox::New5();
    __this->temp1_Value_inst = ::g::LOOP_Checkbox_Value_Property::New1(temp1, Cursos__Template7__Template8::__selector0());
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New2();
    __this->temp2_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp2, Cursos__Template7__Template8::__selector1());
    ::g::Fuse::Controls::StackPanel* temp3 = ::g::Fuse::Controls::StackPanel::New4();
    __this->temp3_Visibility_inst = ::g::LOOP_FuseControlsStackPanel_Visibility_Property::New1(temp3, Cursos__Template7__Template8::__selector2());
    ::g::Fuse::Controls::DockPanel* temp4 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp5 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp6 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp7 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[3/*"habilidad"*/]);
    ::g::Fuse::Reactive::DataBinding* temp8 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<bool>*/], __this->temp1_Value_inst, ::STRINGS[4/*"activo"*/]);
    ::g::Fuse::Reactive::EventBinding* temp_eb171 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[5/*"selectHab"*/]);
    ::g::Fuse::Gestures::Clicked* temp9 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp10 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb181 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[6/*"mostrarSubH...*/]);
    ::g::Fuse::Controls::Rectangle* temp11 = ::g::Fuse::Controls::Rectangle::New3();
    Cursos__Template7__Template8__Template9* temp12 = Cursos__Template7__Template8__Template9::New2(__this);
    ::g::Fuse::Reactive::DataBinding* temp13 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<object>*/], __this->temp2_Items_inst, ::STRINGS[7/*"subHabs"*/]);
    ::g::Fuse::Reactive::DataBinding* temp14 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>*/], __this->temp3_Visibility_inst, ::STRINGS[8/*"isVisible"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp5->Columns(::STRINGS[9/*"9*,1*"*/]);
    temp5->Padding(::g::Uno::Float4__New2(14.0f, 2.0f, 14.0f, 2.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp5, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp6->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->TextWrapping(1);
    temp->FontSize(12.0f);
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(9);
    temp->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 0.0f));
    temp->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp1->Alignment(3);
    temp1->Padding(::g::Uno::Float4__New2(0.0f, 2.0f, 0.0f, 2.0f));
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::TYPES[14/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb171));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb171);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb181);
    temp10->add_Handler(uDelegate::New(::TYPES[17/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb181));
    temp11->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp11->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp11->Alignment(12);
    temp11->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[18/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    return *__retval = self, void();
}

// public Template8 New(Cursos.Template7 parent) :701
void Cursos__Template7__Template8__New2_fn(::g::Cursos__Template7* parent, Cursos__Template7__Template8** __retval)
{
    *__retval = Cursos__Template7__Template8::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template7__Template8::__selector0_;
::g::Uno::UX::Selector Cursos__Template7__Template8::__selector1_;
::g::Uno::UX::Selector Cursos__Template7__Template8::__selector2_;

// public Template8(Cursos.Template7 parent) [instance] :701
void Cursos__Template7__Template8::ctor_1(::g::Cursos__Template7* parent)
{
    uStackFrame __("Cursos.Template7.Template8", ".ctor(Cursos.Template7)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template8 New(Cursos.Template7 parent) [static] :701
Cursos__Template7__Template8* Cursos__Template7__Template8::New2(::g::Cursos__Template7* parent)
{
    Cursos__Template7__Template8* obj1 = (Cursos__Template7__Template8*)uNew(Cursos__Template7__Template8_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
