// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_Operation_Opacity_Property.h>
#include <_root.Operation.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_Operation_Opacity_Property :181
// {
static void LOOP_Operation_Opacity_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Operation_typeof(), offsetof(::g::LOOP_Operation_Opacity_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_Operation_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_Operation_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_Operation_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = LOOP_Operation_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_Operation_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_Operation_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_Operation_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_Operation_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_Operation_Opacity_Property(Operation obj, Uno.UX.Selector name) :184
void LOOP_Operation_Opacity_Property__ctor_2_fn(LOOP_Operation_Opacity_Property* __this, ::g::Operation* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :186
void LOOP_Operation_Opacity_Property__Get_fn(LOOP_Operation_Opacity_Property* __this, float* __retval)
{
    uStackFrame __("LOOP_Operation_Opacity_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public LOOP_Operation_Opacity_Property New(Operation obj, Uno.UX.Selector name) :184
void LOOP_Operation_Opacity_Property__New1_fn(::g::Operation* obj, ::g::Uno::UX::Selector* name, LOOP_Operation_Opacity_Property** __retval)
{
    *__retval = LOOP_Operation_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :185
void LOOP_Operation_Opacity_Property__get_Object_fn(LOOP_Operation_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_Operation_Opacity_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :187
void LOOP_Operation_Opacity_Property__Set_fn(LOOP_Operation_Opacity_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("LOOP_Operation_Opacity_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :188
void LOOP_Operation_Opacity_Property__get_SupportsOriginSetter_fn(LOOP_Operation_Opacity_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_Operation_Opacity_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public LOOP_Operation_Opacity_Property(Operation obj, Uno.UX.Selector name) [instance] :184
void LOOP_Operation_Opacity_Property::ctor_2(::g::Operation* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_Operation_Opacity_Property", ".ctor(Operation,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_Operation_Opacity_Property New(Operation obj, Uno.UX.Selector name) [static] :184
LOOP_Operation_Opacity_Property* LOOP_Operation_Opacity_Property::New1(::g::Operation* obj, ::g::Uno::UX::Selector name)
{
    LOOP_Operation_Opacity_Property* obj1 = (LOOP_Operation_Opacity_Property*)uNew(LOOP_Operation_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
