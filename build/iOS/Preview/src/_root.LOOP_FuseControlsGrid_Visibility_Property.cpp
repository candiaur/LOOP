// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_FuseControlsGrid_Visibility_Property.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_FuseControlsGrid_Visibility_Property :145
// {
static void LOOP_FuseControlsGrid_Visibility_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::LOOP_FuseControlsGrid_Visibility_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_FuseControlsGrid_Visibility_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_FuseControlsGrid_Visibility_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_FuseControlsGrid_Visibility_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()));
    type->fp_build_ = LOOP_FuseControlsGrid_Visibility_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_FuseControlsGrid_Visibility_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_FuseControlsGrid_Visibility_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_FuseControlsGrid_Visibility_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_FuseControlsGrid_Visibility_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_FuseControlsGrid_Visibility_Property(Fuse.Controls.Grid obj, Uno.UX.Selector name) :148
void LOOP_FuseControlsGrid_Visibility_Property__ctor_2_fn(LOOP_FuseControlsGrid_Visibility_Property* __this, ::g::Fuse::Controls::Grid* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Elements.Visibility Get() :150
void LOOP_FuseControlsGrid_Visibility_Property__Get_fn(LOOP_FuseControlsGrid_Visibility_Property* __this, int* __retval)
{
    uStackFrame __("LOOP_FuseControlsGrid_Visibility_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Visibility(), void();
}

// public LOOP_FuseControlsGrid_Visibility_Property New(Fuse.Controls.Grid obj, Uno.UX.Selector name) :148
void LOOP_FuseControlsGrid_Visibility_Property__New1_fn(::g::Fuse::Controls::Grid* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsGrid_Visibility_Property** __retval)
{
    *__retval = LOOP_FuseControlsGrid_Visibility_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :149
void LOOP_FuseControlsGrid_Visibility_Property__get_Object_fn(LOOP_FuseControlsGrid_Visibility_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_FuseControlsGrid_Visibility_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Elements.Visibility v, Uno.UX.IPropertyListener origin) :151
void LOOP_FuseControlsGrid_Visibility_Property__Set_fn(LOOP_FuseControlsGrid_Visibility_Property* __this, int* v, uObject* origin)
{
    uStackFrame __("LOOP_FuseControlsGrid_Visibility_Property", "Set(Fuse.Elements.Visibility,Uno.UX.IPropertyListener)");
    int v_ = *v;
    uPtr(__this->_obj)->SetVisibility(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :152
void LOOP_FuseControlsGrid_Visibility_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsGrid_Visibility_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseControlsGrid_Visibility_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public LOOP_FuseControlsGrid_Visibility_Property(Fuse.Controls.Grid obj, Uno.UX.Selector name) [instance] :148
void LOOP_FuseControlsGrid_Visibility_Property::ctor_2(::g::Fuse::Controls::Grid* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_FuseControlsGrid_Visibility_Property", ".ctor(Fuse.Controls.Grid,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_FuseControlsGrid_Visibility_Property New(Fuse.Controls.Grid obj, Uno.UX.Selector name) [static] :148
LOOP_FuseControlsGrid_Visibility_Property* LOOP_FuseControlsGrid_Visibility_Property::New1(::g::Fuse::Controls::Grid* obj, ::g::Uno::UX::Selector name)
{
    LOOP_FuseControlsGrid_Visibility_Property* obj1 = (LOOP_FuseControlsGrid_Visibility_Property*)uNew(LOOP_FuseControlsGrid_Visibility_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
