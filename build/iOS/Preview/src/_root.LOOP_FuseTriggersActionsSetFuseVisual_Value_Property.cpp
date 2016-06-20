// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_FuseTriggersActionsSetFuseVisual_Value_Property.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_FuseTriggersActionsSetFuseVisual_Value_Property :37
// {
static void LOOP_FuseTriggersActionsSetFuseVisual_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::LOOP_FuseTriggersActionsSetFuseVisual_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_FuseTriggersActionsSetFuseVisual_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_FuseTriggersActionsSetFuseVisual_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_FuseTriggersActionsSetFuseVisual_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()));
    type->fp_build_ = LOOP_FuseTriggersActionsSetFuseVisual_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_FuseTriggersActionsSetFuseVisual_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_FuseTriggersActionsSetFuseVisual_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_FuseTriggersActionsSetFuseVisual_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_FuseTriggersActionsSetFuseVisual_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_FuseTriggersActionsSetFuseVisual_Value_Property(Fuse.Triggers.Actions.Set<Fuse.Visual> obj, Uno.UX.Selector name) :40
void LOOP_FuseTriggersActionsSetFuseVisual_Value_Property__ctor_2_fn(LOOP_FuseTriggersActionsSetFuseVisual_Value_Property* __this, ::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Visual Get() :42
void LOOP_FuseTriggersActionsSetFuseVisual_Value_Property__Get_fn(LOOP_FuseTriggersActionsSetFuseVisual_Value_Property* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("LOOP_FuseTriggersActionsSetFuseVisual_Value_Property", "Get()");
    ::g::Fuse::Visual* ret2;
    return *__retval = (::g::Fuse::Triggers::Actions::Set__get_Value_fn(uPtr(__this->_obj), &ret2), ret2), void();
}

// public LOOP_FuseTriggersActionsSetFuseVisual_Value_Property New(Fuse.Triggers.Actions.Set<Fuse.Visual> obj, Uno.UX.Selector name) :40
void LOOP_FuseTriggersActionsSetFuseVisual_Value_Property__New1_fn(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name, LOOP_FuseTriggersActionsSetFuseVisual_Value_Property** __retval)
{
    *__retval = LOOP_FuseTriggersActionsSetFuseVisual_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :41
void LOOP_FuseTriggersActionsSetFuseVisual_Value_Property__get_Object_fn(LOOP_FuseTriggersActionsSetFuseVisual_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_FuseTriggersActionsSetFuseVisual_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Visual v, Uno.UX.IPropertyListener origin) :43
void LOOP_FuseTriggersActionsSetFuseVisual_Value_Property__Set_fn(LOOP_FuseTriggersActionsSetFuseVisual_Value_Property* __this, ::g::Fuse::Visual* v, uObject* origin)
{
    uStackFrame __("LOOP_FuseTriggersActionsSetFuseVisual_Value_Property", "Set(Fuse.Visual,Uno.UX.IPropertyListener)");
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(uPtr(__this->_obj), v);
}

// public override sealed bool get_SupportsOriginSetter() :44
void LOOP_FuseTriggersActionsSetFuseVisual_Value_Property__get_SupportsOriginSetter_fn(LOOP_FuseTriggersActionsSetFuseVisual_Value_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseTriggersActionsSetFuseVisual_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public LOOP_FuseTriggersActionsSetFuseVisual_Value_Property(Fuse.Triggers.Actions.Set<Fuse.Visual> obj, Uno.UX.Selector name) [instance] :40
void LOOP_FuseTriggersActionsSetFuseVisual_Value_Property::ctor_2(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_FuseTriggersActionsSetFuseVisual_Value_Property", ".ctor(Fuse.Triggers.Actions.Set<Fuse.Visual>,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_FuseTriggersActionsSetFuseVisual_Value_Property New(Fuse.Triggers.Actions.Set<Fuse.Visual> obj, Uno.UX.Selector name) [static] :40
LOOP_FuseTriggersActionsSetFuseVisual_Value_Property* LOOP_FuseTriggersActionsSetFuseVisual_Value_Property::New1(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name)
{
    LOOP_FuseTriggersActionsSetFuseVisual_Value_Property* obj1 = (LOOP_FuseTriggersActionsSetFuseVisual_Value_Property*)uNew(LOOP_FuseTriggersActionsSetFuseVisual_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
