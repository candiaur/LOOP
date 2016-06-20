// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_FuseControlsPageControl_Active_Property.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.PageControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_FuseControlsPageControl_Active_Property :163
// {
static void LOOP_FuseControlsPageControl_Active_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::LOOP_FuseControlsPageControl_Active_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_FuseControlsPageControl_Active_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_FuseControlsPageControl_Active_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_FuseControlsPageControl_Active_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()));
    type->fp_build_ = LOOP_FuseControlsPageControl_Active_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_FuseControlsPageControl_Active_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_FuseControlsPageControl_Active_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_FuseControlsPageControl_Active_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_FuseControlsPageControl_Active_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj, Uno.UX.Selector name) :166
void LOOP_FuseControlsPageControl_Active_Property__ctor_2_fn(LOOP_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Visual Get() :168
void LOOP_FuseControlsPageControl_Active_Property__Get_fn(LOOP_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("LOOP_FuseControlsPageControl_Active_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Active(), void();
}

// public LOOP_FuseControlsPageControl_Active_Property New(Fuse.Controls.PageControl obj, Uno.UX.Selector name) :166
void LOOP_FuseControlsPageControl_Active_Property__New1_fn(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsPageControl_Active_Property** __retval)
{
    *__retval = LOOP_FuseControlsPageControl_Active_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :167
void LOOP_FuseControlsPageControl_Active_Property__get_Object_fn(LOOP_FuseControlsPageControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_FuseControlsPageControl_Active_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Visual v, Uno.UX.IPropertyListener origin) :169
void LOOP_FuseControlsPageControl_Active_Property__Set_fn(LOOP_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual* v, uObject* origin)
{
    uStackFrame __("LOOP_FuseControlsPageControl_Active_Property", "Set(Fuse.Visual,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Active(v);
}

// public override sealed bool get_SupportsOriginSetter() :170
void LOOP_FuseControlsPageControl_Active_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsPageControl_Active_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseControlsPageControl_Active_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public LOOP_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj, Uno.UX.Selector name) [instance] :166
void LOOP_FuseControlsPageControl_Active_Property::ctor_2(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_FuseControlsPageControl_Active_Property", ".ctor(Fuse.Controls.PageControl,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_FuseControlsPageControl_Active_Property New(Fuse.Controls.PageControl obj, Uno.UX.Selector name) [static] :166
LOOP_FuseControlsPageControl_Active_Property* LOOP_FuseControlsPageControl_Active_Property::New1(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name)
{
    LOOP_FuseControlsPageControl_Active_Property* obj1 = (LOOP_FuseControlsPageControl_Active_Property*)uNew(LOOP_FuseControlsPageControl_Active_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
