// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_FuseControlsTextInput_Value_Property.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_FuseControlsTextInput_Value_Property :73
// {
static void LOOP_FuseControlsTextInput_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::LOOP_FuseControlsTextInput_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_FuseControlsTextInput_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_FuseControlsTextInput_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_FuseControlsTextInput_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = LOOP_FuseControlsTextInput_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_FuseControlsTextInput_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_FuseControlsTextInput_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_FuseControlsTextInput_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_FuseControlsTextInput_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_FuseControlsTextInput_Value_Property(Fuse.Controls.TextInput obj, Uno.UX.Selector name) :76
void LOOP_FuseControlsTextInput_Value_Property__ctor_2_fn(LOOP_FuseControlsTextInput_Value_Property* __this, ::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :78
void LOOP_FuseControlsTextInput_Value_Property__Get_fn(LOOP_FuseControlsTextInput_Value_Property* __this, uString** __retval)
{
    uStackFrame __("LOOP_FuseControlsTextInput_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public LOOP_FuseControlsTextInput_Value_Property New(Fuse.Controls.TextInput obj, Uno.UX.Selector name) :76
void LOOP_FuseControlsTextInput_Value_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsTextInput_Value_Property** __retval)
{
    *__retval = LOOP_FuseControlsTextInput_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :77
void LOOP_FuseControlsTextInput_Value_Property__get_Object_fn(LOOP_FuseControlsTextInput_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_FuseControlsTextInput_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :79
void LOOP_FuseControlsTextInput_Value_Property__Set_fn(LOOP_FuseControlsTextInput_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("LOOP_FuseControlsTextInput_Value_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :80
void LOOP_FuseControlsTextInput_Value_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsTextInput_Value_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseControlsTextInput_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public LOOP_FuseControlsTextInput_Value_Property(Fuse.Controls.TextInput obj, Uno.UX.Selector name) [instance] :76
void LOOP_FuseControlsTextInput_Value_Property::ctor_2(::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_FuseControlsTextInput_Value_Property", ".ctor(Fuse.Controls.TextInput,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_FuseControlsTextInput_Value_Property New(Fuse.Controls.TextInput obj, Uno.UX.Selector name) [static] :76
LOOP_FuseControlsTextInput_Value_Property* LOOP_FuseControlsTextInput_Value_Property::New1(::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector name)
{
    LOOP_FuseControlsTextInput_Value_Property* obj1 = (LOOP_FuseControlsTextInput_Value_Property*)uNew(LOOP_FuseControlsTextInput_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
