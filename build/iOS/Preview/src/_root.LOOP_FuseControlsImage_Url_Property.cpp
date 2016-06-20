// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LOOP_FuseControlsImage_Url_Property.h>
#include <Fuse.Controls.Image.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LOOP_FuseControlsImage_Url_Property :28
// {
static void LOOP_FuseControlsImage_Url_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::LOOP_FuseControlsImage_Url_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* LOOP_FuseControlsImage_Url_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LOOP_FuseControlsImage_Url_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LOOP_FuseControlsImage_Url_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = LOOP_FuseControlsImage_Url_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LOOP_FuseControlsImage_Url_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LOOP_FuseControlsImage_Url_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LOOP_FuseControlsImage_Url_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LOOP_FuseControlsImage_Url_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LOOP_FuseControlsImage_Url_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :31
void LOOP_FuseControlsImage_Url_Property__ctor_2_fn(LOOP_FuseControlsImage_Url_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :33
void LOOP_FuseControlsImage_Url_Property__Get_fn(LOOP_FuseControlsImage_Url_Property* __this, uString** __retval)
{
    uStackFrame __("LOOP_FuseControlsImage_Url_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Url(), void();
}

// public LOOP_FuseControlsImage_Url_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :31
void LOOP_FuseControlsImage_Url_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, LOOP_FuseControlsImage_Url_Property** __retval)
{
    *__retval = LOOP_FuseControlsImage_Url_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :32
void LOOP_FuseControlsImage_Url_Property__get_Object_fn(LOOP_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("LOOP_FuseControlsImage_Url_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :34
void LOOP_FuseControlsImage_Url_Property__Set_fn(LOOP_FuseControlsImage_Url_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("LOOP_FuseControlsImage_Url_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Url(v);
}

// public override sealed bool get_SupportsOriginSetter() :35
void LOOP_FuseControlsImage_Url_Property__get_SupportsOriginSetter_fn(LOOP_FuseControlsImage_Url_Property* __this, bool* __retval)
{
    uStackFrame __("LOOP_FuseControlsImage_Url_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public LOOP_FuseControlsImage_Url_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :31
void LOOP_FuseControlsImage_Url_Property::ctor_2(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("LOOP_FuseControlsImage_Url_Property", ".ctor(Fuse.Controls.Image,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public LOOP_FuseControlsImage_Url_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :31
LOOP_FuseControlsImage_Url_Property* LOOP_FuseControlsImage_Url_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    LOOP_FuseControlsImage_Url_Property* obj1 = (LOOP_FuseControlsImage_Url_Property*)uNew(LOOP_FuseControlsImage_Url_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
