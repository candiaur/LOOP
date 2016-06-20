// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_FuseReactiveEach_Items_Property.h>
#include <Fuse.Reactive.Each.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_FuseReactiveEach_Items_Property :10
// {
static void LOOP_FuseReactiveEach_Items_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(::g::LOOP_FuseReactiveEach_Items_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_FuseReactiveEach_Items_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_FuseReactiveEach_Items_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_FuseReactiveEach_Items_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()));
    type->fp_build_ = LOOP_FuseReactiveEach_Items_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_FuseReactiveEach_Items_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_FuseReactiveEach_Items_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_FuseReactiveEach_Items_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) :13
void LOOP_FuseReactiveEach_Items_Property__ctor_2_fn(LOOP_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed object Get() :15
void LOOP_FuseReactiveEach_Items_Property__Get_fn(LOOP_FuseReactiveEach_Items_Property* __this, uObject** __retval)
{
    uStackFrame __("LOOP_FuseReactiveEach_Items_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Items(), void();
}

// public LOOP_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) :13
void LOOP_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, LOOP_FuseReactiveEach_Items_Property** __retval)
{
    *__retval = LOOP_FuseReactiveEach_Items_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void LOOP_FuseReactiveEach_Items_Property__get_Object_fn(LOOP_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_FuseReactiveEach_Items_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(object v, Uno.UX.IPropertyListener origin) :16
void LOOP_FuseReactiveEach_Items_Property__Set_fn(LOOP_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin)
{
    uStackFrame __("LOOP_FuseReactiveEach_Items_Property", "Set(object,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Items(v);
}

// public override sealed bool get_SupportsOriginSetter() :17
void LOOP_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn(LOOP_FuseReactiveEach_Items_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseReactiveEach_Items_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public LOOP_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) [instance] :13
void LOOP_FuseReactiveEach_Items_Property::ctor_2(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_FuseReactiveEach_Items_Property", ".ctor(Fuse.Reactive.Each,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) [static] :13
LOOP_FuseReactiveEach_Items_Property* LOOP_FuseReactiveEach_Items_Property::New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    LOOP_FuseReactiveEach_Items_Property* obj1 = (LOOP_FuseReactiveEach_Items_Property*)uNew(LOOP_FuseReactiveEach_Items_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
