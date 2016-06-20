// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property :46
// {
static void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()));
    type->fp_build_ = LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property(Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility> obj, Uno.UX.Selector name) :49
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__ctor_2_fn(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* __this, ::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Elements.Visibility Get() :51
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__Get_fn(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* __this, int* __retval)
{
    uStackFrame __("LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property", "Get()");
    int ret2;
    return *__retval = (::g::Fuse::Triggers::Actions::Set__get_Value_fn(uPtr(__this->_obj), &ret2), ret2), void();
}

// public LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property New(Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility> obj, Uno.UX.Selector name) :49
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__New1_fn(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name, LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property** __retval)
{
    *__retval = LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :50
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__get_Object_fn(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Elements.Visibility v, Uno.UX.IPropertyListener origin) :52
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__Set_fn(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* __this, int* v, uObject* origin)
{
    uStackFrame __("LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property", "Set(Fuse.Elements.Visibility,Uno.UX.IPropertyListener)");
    int v_ = *v;
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(uPtr(__this->_obj), uCRef<int>(v_));
}

// public override sealed bool get_SupportsOriginSetter() :53
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__get_SupportsOriginSetter_fn(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property(Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility> obj, Uno.UX.Selector name) [instance] :49
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property::ctor_2(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property", ".ctor(Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property New(Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility> obj, Uno.UX.Selector name) [static] :49
LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property::New1(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name)
{
    LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* obj1 = (LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property*)uNew(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
