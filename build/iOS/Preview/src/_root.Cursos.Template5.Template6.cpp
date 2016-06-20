// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cursos.Template5.h>
#include <_root.Cursos.Template5.Template6.h>
#include <_root.Cursos.Template5.Template6.Template7.h>
#include <_root.LOOP_FuseReactiveEach_Items_Property.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
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
static uString* STRINGS[2];
static uType* TYPES[9];

namespace g{

// public partial sealed class Cursos.Template5.Template6 :452
// {
// static Template6() :578
static void Cursos__Template5__Template6__cctor__fn(uType* __type)
{
    Cursos__Template5__Template6::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Items"*/]);
}

static void Cursos__Template5__Template6_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Items");
    ::STRINGS[1] = uString::Const("subHabs");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof());
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[3] = ::g::Uno::UX::Template_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[5] = ::g::Fuse::Binding_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos__Template5_typeof(), offsetof(::g::Cursos__Template5__Template6, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos__Template5__Template6, temp_Items_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template5__Template6::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template5__Template6__New2_fn, 0, true, Cursos__Template5__Template6_typeof(), 1, ::g::Cursos__Template5_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template5__Template6_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Cursos__Template5__Template6);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template5.Template6", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template5__Template6_build;
    type->fp_cctor_ = Cursos__Template5__Template6__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template5__Template6__New1_fn;
    return type;
}

// public Template6(Cursos.Template5 parent) :455
void Cursos__Template5__Template6__ctor_1_fn(Cursos__Template5__Template6* __this, ::g::Cursos__Template5* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :581
void Cursos__Template5__Template6__New1_fn(Cursos__Template5__Template6* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template5.Template6", "New()");
    ::g::Fuse::Controls::StackPanel* self = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New2();
    __this->temp_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp, Cursos__Template5__Template6::__selector0());
    Cursos__Template5__Template6__Template7* temp1 = Cursos__Template5__Template6__Template7::New2(__this);
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<object>*/], __this->temp_Items_inst, ::STRINGS[1/*"subHabs"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[2/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    return *__retval = self, void();
}

// public Template6 New(Cursos.Template5 parent) :455
void Cursos__Template5__Template6__New2_fn(::g::Cursos__Template5* parent, Cursos__Template5__Template6** __retval)
{
    *__retval = Cursos__Template5__Template6::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template5__Template6::__selector0_;

// public Template6(Cursos.Template5 parent) [instance] :455
void Cursos__Template5__Template6::ctor_1(::g::Cursos__Template5* parent)
{
    uStackFrame __("Cursos.Template5.Template6", ".ctor(Cursos.Template5)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template6 New(Cursos.Template5 parent) [static] :455
Cursos__Template5__Template6* Cursos__Template5__Template6::New2(::g::Cursos__Template5* parent)
{
    Cursos__Template5__Template6* obj1 = (Cursos__Template5__Template6*)uNew(Cursos__Template5__Template6_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
