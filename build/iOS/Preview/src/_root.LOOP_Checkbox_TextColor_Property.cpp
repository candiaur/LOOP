// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Checkbox.h>
#include <_root.LOOP_Checkbox_TextColor_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_Checkbox_TextColor_Property :172
// {
static void LOOP_Checkbox_TextColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Checkbox_typeof(), offsetof(::g::LOOP_Checkbox_TextColor_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_Checkbox_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_Checkbox_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_Checkbox_TextColor_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = LOOP_Checkbox_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_Checkbox_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_Checkbox_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_Checkbox_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_Checkbox_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_Checkbox_TextColor_Property(Checkbox obj, Uno.UX.Selector name) :175
void LOOP_Checkbox_TextColor_Property__ctor_2_fn(LOOP_Checkbox_TextColor_Property* __this, ::g::Checkbox* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :177
void LOOP_Checkbox_TextColor_Property__Get_fn(LOOP_Checkbox_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("LOOP_Checkbox_TextColor_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public LOOP_Checkbox_TextColor_Property New(Checkbox obj, Uno.UX.Selector name) :175
void LOOP_Checkbox_TextColor_Property__New1_fn(::g::Checkbox* obj, ::g::Uno::UX::Selector* name, LOOP_Checkbox_TextColor_Property** __retval)
{
    *__retval = LOOP_Checkbox_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :176
void LOOP_Checkbox_TextColor_Property__get_Object_fn(LOOP_Checkbox_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_Checkbox_TextColor_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :178
void LOOP_Checkbox_TextColor_Property__Set_fn(LOOP_Checkbox_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("LOOP_Checkbox_TextColor_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetTextColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :179
void LOOP_Checkbox_TextColor_Property__get_SupportsOriginSetter_fn(LOOP_Checkbox_TextColor_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_Checkbox_TextColor_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public LOOP_Checkbox_TextColor_Property(Checkbox obj, Uno.UX.Selector name) [instance] :175
void LOOP_Checkbox_TextColor_Property::ctor_2(::g::Checkbox* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_Checkbox_TextColor_Property", ".ctor(Checkbox,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_Checkbox_TextColor_Property New(Checkbox obj, Uno.UX.Selector name) [static] :175
LOOP_Checkbox_TextColor_Property* LOOP_Checkbox_TextColor_Property::New1(::g::Checkbox* obj, ::g::Uno::UX::Selector name)
{
    LOOP_Checkbox_TextColor_Property* obj1 = (LOOP_Checkbox_TextColor_Property*)uNew(LOOP_Checkbox_TextColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
