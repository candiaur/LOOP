// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cursos.h>
#include <_root.Cursos.Template7.h>
#include <_root.Cursos.Template7.Template8.h>
#include <_root.LOOP_FuseControlsStackPanel_Visibility_Property.h>
#include <_root.LOOP_FuseReactiveEach_Items_Property.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[11];

namespace g{

// public partial sealed class Cursos.Template7 :690
// {
// static Template7() :836
static void Cursos__Template7__cctor__fn(uType* __type)
{
    Cursos__Template7::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Items"*/]);
    Cursos__Template7::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Visibility"*/]);
}

static void Cursos__Template7_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Items");
    ::STRINGS[1] = uString::Const("Visibility");
    ::STRINGS[2] = uString::Const("habilidades");
    ::STRINGS[3] = uString::Const("isVisible");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[5] = ::g::Uno::UX::Template_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[7] = ::g::Fuse::Binding_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos_typeof(), offsetof(::g::Cursos__Template7, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos__Template7, self_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos__Template7, temp_Items_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template7::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template7::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template7__New2_fn, 0, true, Cursos__Template7_typeof(), 1, ::g::Cursos_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template7_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Cursos__Template7);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template7", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template7_build;
    type->fp_cctor_ = Cursos__Template7__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template7__New1_fn;
    return type;
}

// public Template7(Cursos parent) :693
void Cursos__Template7__ctor_1_fn(Cursos__Template7* __this, ::g::Cursos* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :839
void Cursos__Template7__New1_fn(Cursos__Template7* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template7", "New()");
    ::g::Fuse::Controls::StackPanel* self = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New2();
    __this->temp_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp, Cursos__Template7::__selector0());
    __this->self_Visibility_inst = ::g::LOOP_FuseControlsStackPanel_Visibility_Property::New1(self, Cursos__Template7::__selector1());
    Cursos__Template7__Template8* temp1 = Cursos__Template7__Template8::New2(__this);
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<object>*/], __this->temp_Items_inst, ::STRINGS[2/*"habilidades"*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>*/], __this->self_Visibility_inst, ::STRINGS[3/*"isVisible"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    return *__retval = self, void();
}

// public Template7 New(Cursos parent) :693
void Cursos__Template7__New2_fn(::g::Cursos* parent, Cursos__Template7** __retval)
{
    *__retval = Cursos__Template7::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template7::__selector0_;
::g::Uno::UX::Selector Cursos__Template7::__selector1_;

// public Template7(Cursos parent) [instance] :693
void Cursos__Template7::ctor_1(::g::Cursos* parent)
{
    uStackFrame __("Cursos.Template7", ".ctor(Cursos)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template7 New(Cursos parent) [static] :693
Cursos__Template7* Cursos__Template7::New2(::g::Cursos* parent)
{
    Cursos__Template7* obj1 = (Cursos__Template7*)uNew(Cursos__Template7_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
