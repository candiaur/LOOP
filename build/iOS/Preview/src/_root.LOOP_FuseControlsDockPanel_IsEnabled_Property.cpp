// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_FuseControlsDockPanel_IsEnabled_Property.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Visual.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_FuseControlsDockPanel_IsEnabled_Property :55
// {
static void LOOP_FuseControlsDockPanel_IsEnabled_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(::g::LOOP_FuseControlsDockPanel_IsEnabled_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_FuseControlsDockPanel_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_FuseControlsDockPanel_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_FuseControlsDockPanel_IsEnabled_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = LOOP_FuseControlsDockPanel_IsEnabled_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_FuseControlsDockPanel_IsEnabled_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_FuseControlsDockPanel_IsEnabled_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_FuseControlsDockPanel_IsEnabled_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_FuseControlsDockPanel_IsEnabled_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_FuseControlsDockPanel_IsEnabled_Property(Fuse.Controls.DockPanel obj, Uno.UX.Selector name) :58
void LOOP_FuseControlsDockPanel_IsEnabled_Property__ctor_2_fn(LOOP_FuseControlsDockPanel_IsEnabled_Property* __this, ::g::Fuse::Controls::DockPanel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :60
void LOOP_FuseControlsDockPanel_IsEnabled_Property__Get_fn(LOOP_FuseControlsDockPanel_IsEnabled_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseControlsDockPanel_IsEnabled_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->IsEnabled(), void();
}

// public LOOP_FuseControlsDockPanel_IsEnabled_Property New(Fuse.Controls.DockPanel obj, Uno.UX.Selector name) :58
void LOOP_FuseControlsDockPanel_IsEnabled_Property__New1_fn(::g::Fuse::Controls::DockPanel* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsDockPanel_IsEnabled_Property** __retval)
{
    *__retval = LOOP_FuseControlsDockPanel_IsEnabled_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :59
void LOOP_FuseControlsDockPanel_IsEnabled_Property__get_Object_fn(LOOP_FuseControlsDockPanel_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_FuseControlsDockPanel_IsEnabled_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :61
void LOOP_FuseControlsDockPanel_IsEnabled_Property__Set_fn(LOOP_FuseControlsDockPanel_IsEnabled_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("LOOP_FuseControlsDockPanel_IsEnabled_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->IsEnabled(v_);
}

// public override sealed bool get_SupportsOriginSetter() :62
void LOOP_FuseControlsDockPanel_IsEnabled_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsDockPanel_IsEnabled_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseControlsDockPanel_IsEnabled_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public LOOP_FuseControlsDockPanel_IsEnabled_Property(Fuse.Controls.DockPanel obj, Uno.UX.Selector name) [instance] :58
void LOOP_FuseControlsDockPanel_IsEnabled_Property::ctor_2(::g::Fuse::Controls::DockPanel* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_FuseControlsDockPanel_IsEnabled_Property", ".ctor(Fuse.Controls.DockPanel,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_FuseControlsDockPanel_IsEnabled_Property New(Fuse.Controls.DockPanel obj, Uno.UX.Selector name) [static] :58
LOOP_FuseControlsDockPanel_IsEnabled_Property* LOOP_FuseControlsDockPanel_IsEnabled_Property::New1(::g::Fuse::Controls::DockPanel* obj, ::g::Uno::UX::Selector name)
{
    LOOP_FuseControlsDockPanel_IsEnabled_Property* obj1 = (LOOP_FuseControlsDockPanel_IsEnabled_Property*)uNew(LOOP_FuseControlsDockPanel_IsEnabled_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
