// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_FuseTriggersWhileFalse_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_FuseTriggersWhileFalse_Value_Property :127
// {
static void LOOP_FuseTriggersWhileFalse_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Triggers::WhileFalse_typeof(), offsetof(::g::LOOP_FuseTriggersWhileFalse_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_FuseTriggersWhileFalse_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_FuseTriggersWhileFalse_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_FuseTriggersWhileFalse_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = LOOP_FuseTriggersWhileFalse_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_FuseTriggersWhileFalse_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_FuseTriggersWhileFalse_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_FuseTriggersWhileFalse_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_FuseTriggersWhileFalse_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_FuseTriggersWhileFalse_Value_Property(Fuse.Triggers.WhileFalse obj, Uno.UX.Selector name) :130
void LOOP_FuseTriggersWhileFalse_Value_Property__ctor_2_fn(LOOP_FuseTriggersWhileFalse_Value_Property* __this, ::g::Fuse::Triggers::WhileFalse* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :132
void LOOP_FuseTriggersWhileFalse_Value_Property__Get_fn(LOOP_FuseTriggersWhileFalse_Value_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseTriggersWhileFalse_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public LOOP_FuseTriggersWhileFalse_Value_Property New(Fuse.Triggers.WhileFalse obj, Uno.UX.Selector name) :130
void LOOP_FuseTriggersWhileFalse_Value_Property__New1_fn(::g::Fuse::Triggers::WhileFalse* obj, ::g::Uno::UX::Selector* name, LOOP_FuseTriggersWhileFalse_Value_Property** __retval)
{
    *__retval = LOOP_FuseTriggersWhileFalse_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :131
void LOOP_FuseTriggersWhileFalse_Value_Property__get_Object_fn(LOOP_FuseTriggersWhileFalse_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_FuseTriggersWhileFalse_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :133
void LOOP_FuseTriggersWhileFalse_Value_Property__Set_fn(LOOP_FuseTriggersWhileFalse_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("LOOP_FuseTriggersWhileFalse_Value_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :134
void LOOP_FuseTriggersWhileFalse_Value_Property__get_SupportsOriginSetter_fn(LOOP_FuseTriggersWhileFalse_Value_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseTriggersWhileFalse_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public LOOP_FuseTriggersWhileFalse_Value_Property(Fuse.Triggers.WhileFalse obj, Uno.UX.Selector name) [instance] :130
void LOOP_FuseTriggersWhileFalse_Value_Property::ctor_2(::g::Fuse::Triggers::WhileFalse* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_FuseTriggersWhileFalse_Value_Property", ".ctor(Fuse.Triggers.WhileFalse,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_FuseTriggersWhileFalse_Value_Property New(Fuse.Triggers.WhileFalse obj, Uno.UX.Selector name) [static] :130
LOOP_FuseTriggersWhileFalse_Value_Property* LOOP_FuseTriggersWhileFalse_Value_Property::New1(::g::Fuse::Triggers::WhileFalse* obj, ::g::Uno::UX::Selector name)
{
    LOOP_FuseTriggersWhileFalse_Value_Property* obj1 = (LOOP_FuseTriggersWhileFalse_Value_Property*)uNew(LOOP_FuseTriggersWhileFalse_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
