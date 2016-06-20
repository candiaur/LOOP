// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE MKAnnotation
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::IMKAnnotation_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.MapKit.Interop.IMKAnnotation.h>
#include <Uno.String.h>
#include <iOS.CoreLocation.CLLocationCoordinate2D.h>

namespace g{
namespace iOS{
namespace MapKit{
namespace Interop{

// public sealed extern class IMKAnnotation :2604
// {
static void IMKAnnotation_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IMKAnnotation_type, interface0),
        ::g::iOS::MapKit::IMKAnnotation_typeof(), offsetof(IMKAnnotation_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(4,
        new uFunction("coordinate", NULL, (void*)IMKAnnotation__coordinate_fn, 0, false, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof(), 0),
        new uFunction("setCoordinate", NULL, (void*)IMKAnnotation__setCoordinate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof()),
        new uFunction("subtitle", NULL, (void*)IMKAnnotation__subtitle_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("title", NULL, (void*)IMKAnnotation__title_fn, 0, false, ::g::Uno::String_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

IMKAnnotation_type* IMKAnnotation_typeof()
{
    static uSStrong<IMKAnnotation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IMKAnnotation);
    options.TypeSize = sizeof(IMKAnnotation_type);
    type = (IMKAnnotation_type*)uClassType::New("iOS.MapKit.Interop.IMKAnnotation", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IMKAnnotation_build;
    type->interface1.fp_setCoordinate = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*))IMKAnnotation__setCoordinate_fn;
    type->interface1.fp_coordinate = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*))IMKAnnotation__coordinate_fn;
    type->interface1.fp_title = (void(*)(uObject*, uString**))IMKAnnotation__title_fn;
    type->interface1.fp_subtitle = (void(*)(uObject*, uString**))IMKAnnotation__subtitle_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.CoreLocation.CLLocationCoordinate2D coordinate() :2631
void IMKAnnotation__coordinate_fn(IMKAnnotation* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval)
{
    *__retval = __this->coordinate();
}

// public extern void setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D newCoordinate) :2628
void IMKAnnotation__setCoordinate_fn(IMKAnnotation* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* newCoordinate_)
{
    __this->setCoordinate(*newCoordinate_);
}

// public extern string subtitle() :2637
void IMKAnnotation__subtitle_fn(IMKAnnotation* __this, uString** __retval)
{
    *__retval = __this->subtitle();
}

// public extern string title() :2634
void IMKAnnotation__title_fn(IMKAnnotation* __this, uString** __retval)
{
    *__retval = __this->title();
}

// public extern iOS.CoreLocation.CLLocationCoordinate2D coordinate() [instance] :2631
::g::iOS::CoreLocation::CLLocationCoordinate2D IMKAnnotation::coordinate()
{
    uStackFrame __("iOS.MapKit.Interop.IMKAnnotation", "coordinate()");
    ::CLLocationCoordinate2D __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CLLocationCoordinate2D, @selector(coordinate));
    return uObjC::Struct::ToUno_CLLocationCoordinate2D(__return, ::g::iOS::CoreLocation::CLLocationCoordinate2D());
}

// public extern void setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D newCoordinate) [instance] :2628
void IMKAnnotation::setCoordinate(::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKAnnotation", "setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setCoordinate:),
        uObjC::Struct::FromUno_CLLocationCoordinate2D(newCoordinate_, ::CLLocationCoordinate2D()));
}

// public extern string subtitle() [instance] :2637
uString* IMKAnnotation::subtitle()
{
    uStackFrame __("iOS.MapKit.Interop.IMKAnnotation", "subtitle()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(subtitle));
    return uObjC::UnoString(__return);
}

// public extern string title() [instance] :2634
uString* IMKAnnotation::title()
{
    uStackFrame __("iOS.MapKit.Interop.IMKAnnotation", "title()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(title));
    return uObjC::UnoString(__return);
}
// }

}}}} // ::g::iOS::MapKit::Interop
