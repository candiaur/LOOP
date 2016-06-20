// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE MKUserLocation
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::MapKit::MKUserLocation*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::MKUserLocation_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.MapKit.MKUserLocation.h>
#include <Uno.String.h>
#include <iOS.CoreLocation.CLLocationCoordinate2D.h>

namespace g{
namespace iOS{
namespace MapKit{

// public sealed extern class MKUserLocation :31504
// {
static void MKUserLocation_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(MKUserLocation_type, interface0),
        ::g::iOS::MapKit::IMKAnnotation_typeof(), offsetof(MKUserLocation_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(4,
        new uFunction("coordinate", NULL, (void*)MKUserLocation__coordinate_fn, 0, false, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof(), 0),
        new uFunction("setCoordinate", NULL, (void*)MKUserLocation__setCoordinate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof()),
        new uFunction("subtitle", NULL, (void*)MKUserLocation__subtitle_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("title", NULL, (void*)MKUserLocation__title_fn, 0, false, ::g::Uno::String_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

MKUserLocation_type* MKUserLocation_typeof()
{
    static uSStrong<MKUserLocation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MKUserLocation);
    options.TypeSize = sizeof(MKUserLocation_type);
    type = (MKUserLocation_type*)uClassType::New("iOS.MapKit.MKUserLocation", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = MKUserLocation_build;
    type->interface1.fp_setCoordinate = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*))MKUserLocation__iOSMapKitIMKAnnotationsetCoordinate_fn;
    type->interface1.fp_coordinate = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*))MKUserLocation__coordinate_fn;
    type->interface1.fp_title = (void(*)(uObject*, uString**))MKUserLocation__title_fn;
    type->interface1.fp_subtitle = (void(*)(uObject*, uString**))MKUserLocation__subtitle_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.CoreLocation.CLLocationCoordinate2D coordinate() :31571
void MKUserLocation__coordinate_fn(MKUserLocation* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval)
{
    *__retval = __this->coordinate();
}

// public void iOS.MapKit.IMKAnnotation.setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D newCoordinate) :31573
void MKUserLocation__iOSMapKitIMKAnnotationsetCoordinate_fn(MKUserLocation* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* newCoordinate)
{
    uStackFrame __("iOS.MapKit.MKUserLocation", "iOS.MapKit.IMKAnnotation.setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D)");
    ::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate_ = *newCoordinate;
    __this->setCoordinate(newCoordinate_);
}

// public extern void setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D newCoordinate) :31568
void MKUserLocation__setCoordinate_fn(MKUserLocation* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* newCoordinate_)
{
    __this->setCoordinate(*newCoordinate_);
}

// public extern string subtitle() :31562
void MKUserLocation__subtitle_fn(MKUserLocation* __this, uString** __retval)
{
    *__retval = __this->subtitle();
}

// public extern string title() :31556
void MKUserLocation__title_fn(MKUserLocation* __this, uString** __retval)
{
    *__retval = __this->title();
}

// public extern iOS.CoreLocation.CLLocationCoordinate2D coordinate() [instance] :31571
::g::iOS::CoreLocation::CLLocationCoordinate2D MKUserLocation::coordinate()
{
    uStackFrame __("iOS.MapKit.MKUserLocation", "coordinate()");
    ::CLLocationCoordinate2D __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CLLocationCoordinate2D, @selector(coordinate));
    return uObjC::Struct::ToUno_CLLocationCoordinate2D(__return, ::g::iOS::CoreLocation::CLLocationCoordinate2D());
}

// public extern void setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D newCoordinate) [instance] :31568
void MKUserLocation::setCoordinate(::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate_)
{
    uStackFrame __("iOS.MapKit.MKUserLocation", "setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D)");
    ::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate__ = newCoordinate_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setCoordinate:),
        uObjC::Struct::FromUno_CLLocationCoordinate2D(newCoordinate__, ::CLLocationCoordinate2D()));
}

// public extern string subtitle() [instance] :31562
uString* MKUserLocation::subtitle()
{
    uStackFrame __("iOS.MapKit.MKUserLocation", "subtitle()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(subtitle));
    return uObjC::UnoString(__return);
}

// public extern string title() [instance] :31556
uString* MKUserLocation::title()
{
    uStackFrame __("iOS.MapKit.MKUserLocation", "title()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(title));
    return uObjC::UnoString(__return);
}
// }

}}} // ::g::iOS::MapKit
