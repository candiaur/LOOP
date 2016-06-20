// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_FuseControlsText_TextColor_Property.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_FuseControlsText_TextColor_Property :1
// {
static void LOOP_FuseControlsText_TextColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::LOOP_FuseControlsText_TextColor_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_FuseControlsText_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_FuseControlsText_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_FuseControlsText_TextColor_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = LOOP_FuseControlsText_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_FuseControlsText_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_FuseControlsText_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_FuseControlsText_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :4
void LOOP_FuseControlsText_TextColor_Property__ctor_2_fn(LOOP_FuseControlsText_TextColor_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :6
void LOOP_FuseControlsText_TextColor_Property__Get_fn(LOOP_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("LOOP_FuseControlsText_TextColor_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public LOOP_FuseControlsText_TextColor_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :4
void LOOP_FuseControlsText_TextColor_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsText_TextColor_Property** __retval)
{
    *__retval = LOOP_FuseControlsText_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void LOOP_FuseControlsText_TextColor_Property__get_Object_fn(LOOP_FuseControlsText_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_FuseControlsText_TextColor_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :7
void LOOP_FuseControlsText_TextColor_Property__Set_fn(LOOP_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("LOOP_FuseControlsText_TextColor_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public override sealed bool get_SupportsOriginSetter() :8
void LOOP_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsText_TextColor_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseControlsText_TextColor_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public LOOP_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :4
void LOOP_FuseControlsText_TextColor_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_FuseControlsText_TextColor_Property", ".ctor(Fuse.Controls.Text,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_FuseControlsText_TextColor_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :4
LOOP_FuseControlsText_TextColor_Property* LOOP_FuseControlsText_TextColor_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    LOOP_FuseControlsText_TextColor_Property* obj1 = (LOOP_FuseControlsText_TextColor_Property*)uNew(LOOP_FuseControlsText_TextColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
