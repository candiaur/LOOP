// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cursos.h>
#include <_root.Cursos.Template10.h>
#include <_root.Cursos.Template10.Template11.h>
#include <_root.LOOP_FuseReactiveEach_Items_Property.h>
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];
static uType* TYPES[7];

namespace g{

// public partial sealed class Cursos.Template10 :1077
// {
// static Template10() :1210
static void Cursos__Template10__cctor__fn(uType* __type)
{
    Cursos__Template10::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Items"*/]);
}

static void Cursos__Template10_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Items");
    ::STRINGS[1] = uString::Const("habilidades");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof());
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[3] = ::g::Uno::UX::Template_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[5] = ::g::Fuse::Binding_typeof();
    ::TYPES[6] = uObject_typeof();
    type->SetFields(2,
        ::g::Cursos_typeof(), offsetof(::g::Cursos__Template10, __parent1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos__Template10, self_Items_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos__Template10::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__Template10__New2_fn, 0, true, Cursos__Template10_typeof(), 1, ::g::Cursos_typeof()));
}

::g::Uno::UX::Template_type* Cursos__Template10_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Cursos__Template10);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Cursos.Template10", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = Cursos__Template10_build;
    type->fp_cctor_ = Cursos__Template10__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Cursos__Template10__New1_fn;
    return type;
}

// public Template10(Cursos parent) :1080
void Cursos__Template10__ctor_1_fn(Cursos__Template10* __this, ::g::Cursos* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :1213
void Cursos__Template10__New1_fn(Cursos__Template10* __this, uObject** __retval)
{
    uStackFrame __("Cursos.Template10", "New()");
    ::g::Fuse::Reactive::Each* self = ::g::Fuse::Reactive::Each::New2();
    __this->self_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(self, Cursos__Template10::__selector0());
    Cursos__Template10__Template11* temp = Cursos__Template10__Template11::New2(__this);
    ::g::Fuse::Reactive::DataBinding* temp1 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<object>*/], __this->self_Items_inst, ::STRINGS[1/*"habilidades"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Templates()), ::TYPES[2/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    return *__retval = self, void();
}

// public Template10 New(Cursos parent) :1080
void Cursos__Template10__New2_fn(::g::Cursos* parent, Cursos__Template10** __retval)
{
    *__retval = Cursos__Template10::New2(parent);
}

::g::Uno::UX::Selector Cursos__Template10::__selector0_;

// public Template10(Cursos parent) [instance] :1080
void Cursos__Template10::ctor_1(::g::Cursos* parent)
{
    uStackFrame __("Cursos.Template10", ".ctor(Cursos)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template10 New(Cursos parent) [static] :1080
Cursos__Template10* Cursos__Template10::New2(::g::Cursos* parent)
{
    Cursos__Template10* obj1 = (Cursos__Template10*)uNew(Cursos__Template10_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
