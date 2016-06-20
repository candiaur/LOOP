// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE MKOverlay
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::IMKOverlay_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.MapKit.Interop.IMKOverlay.h>
#include <Uno.Bool.h>
#include <Uno.String.h>
#include <iOS.CoreLocation.CLLocationCoordinate2D.h>
#include <iOS.MapKit.MKMapRect.h>

namespace g{
namespace iOS{
namespace MapKit{
namespace Interop{

// public sealed extern class IMKOverlay :2739
// {
static void IMKOverlay_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IMKOverlay_type, interface0),
        ::g::iOS::MapKit::IMKOverlay_typeof(), offsetof(IMKOverlay_type, interface1),
        ::g::iOS::MapKit::IMKAnnotation_typeof(), offsetof(IMKOverlay_type, interface2));
    type->SetFields(1);
    type->Reflection.SetFunctions(7,
        new uFunction("boundingMapRect", NULL, (void*)IMKOverlay__boundingMapRect_fn, 0, false, ::g::iOS::MapKit::MKMapRect_typeof(), 0),
        new uFunction("canReplaceMapContent", NULL, (void*)IMKOverlay__canReplaceMapContent_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("coordinate", NULL, (void*)IMKOverlay__coordinate_fn, 0, false, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof(), 0),
        new uFunction("intersectsMapRect", NULL, (void*)IMKOverlay__intersectsMapRect_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::iOS::MapKit::MKMapRect_typeof()),
        new uFunction("setCoordinate", NULL, (void*)IMKOverlay__setCoordinate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof()),
        new uFunction("subtitle", NULL, (void*)IMKOverlay__subtitle_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("title", NULL, (void*)IMKOverlay__title_fn, 0, false, ::g::Uno::String_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

IMKOverlay_type* IMKOverlay_typeof()
{
    static uSStrong<IMKOverlay_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(IMKOverlay);
    options.TypeSize = sizeof(IMKOverlay_type);
    type = (IMKOverlay_type*)uClassType::New("iOS.MapKit.Interop.IMKOverlay", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IMKOverlay_build;
    type->interface1.fp_intersectsMapRect = (void(*)(uObject*, ::g::iOS::MapKit::MKMapRect*, bool*))IMKOverlay__intersectsMapRect_fn;
    type->interface1.fp_canReplaceMapContent = (void(*)(uObject*, bool*))IMKOverlay__canReplaceMapContent_fn;
    type->interface1.fp_coordinate = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*))IMKOverlay__coordinate_fn;
    type->interface1.fp_boundingMapRect = (void(*)(uObject*, ::g::iOS::MapKit::MKMapRect*))IMKOverlay__boundingMapRect_fn;
    type->interface1.fp_setCoordinate = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*))IMKOverlay__setCoordinate_fn;
    type->interface1.fp_title = (void(*)(uObject*, uString**))IMKOverlay__title_fn;
    type->interface1.fp_subtitle = (void(*)(uObject*, uString**))IMKOverlay__subtitle_fn;
    type->interface2.fp_setCoordinate = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*))IMKOverlay__setCoordinate_fn;
    type->interface2.fp_coordinate = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*))IMKOverlay__coordinate_fn;
    type->interface2.fp_title = (void(*)(uObject*, uString**))IMKOverlay__title_fn;
    type->interface2.fp_subtitle = (void(*)(uObject*, uString**))IMKOverlay__subtitle_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.MapKit.MKMapRect boundingMapRect() :2777
void IMKOverlay__boundingMapRect_fn(IMKOverlay* __this, ::g::iOS::MapKit::MKMapRect* __retval)
{
    *__retval = __this->boundingMapRect();
}

// public extern bool canReplaceMapContent() :2771
void IMKOverlay__canReplaceMapContent_fn(IMKOverlay* __this, bool* __retval)
{
    *__retval = __this->canReplaceMapContent();
}

// public extern iOS.CoreLocation.CLLocationCoordinate2D coordinate() :2774
void IMKOverlay__coordinate_fn(IMKOverlay* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval)
{
    *__retval = __this->coordinate();
}

// public extern bool intersectsMapRect(iOS.MapKit.MKMapRect mapRect) :2768
void IMKOverlay__intersectsMapRect_fn(IMKOverlay* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, bool* __retval)
{
    *__retval = __this->intersectsMapRect(*mapRect_);
}

// public extern void setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D newCoordinate) :2780
void IMKOverlay__setCoordinate_fn(IMKOverlay* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* newCoordinate_)
{
    __this->setCoordinate(*newCoordinate_);
}

// public extern string subtitle() :2786
void IMKOverlay__subtitle_fn(IMKOverlay* __this, uString** __retval)
{
    *__retval = __this->subtitle();
}

// public extern string title() :2783
void IMKOverlay__title_fn(IMKOverlay* __this, uString** __retval)
{
    *__retval = __this->title();
}

// public extern iOS.MapKit.MKMapRect boundingMapRect() [instance] :2777
::g::iOS::MapKit::MKMapRect IMKOverlay::boundingMapRect()
{
    uStackFrame __("iOS.MapKit.Interop.IMKOverlay", "boundingMapRect()");
    ::MKMapRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKMapRect, @selector(boundingMapRect));
    return uObjC::Struct::ToUno_MKMapRect(__return, ::g::iOS::MapKit::MKMapRect());
}

// public extern bool canReplaceMapContent() [instance] :2771
bool IMKOverlay::canReplaceMapContent()
{
    uStackFrame __("iOS.MapKit.Interop.IMKOverlay", "canReplaceMapContent()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(canReplaceMapContent));
    return (bool)__return;
}

// public extern iOS.CoreLocation.CLLocationCoordinate2D coordinate() [instance] :2774
::g::iOS::CoreLocation::CLLocationCoordinate2D IMKOverlay::coordinate()
{
    uStackFrame __("iOS.MapKit.Interop.IMKOverlay", "coordinate()");
    ::CLLocationCoordinate2D __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CLLocationCoordinate2D, @selector(coordinate));
    return uObjC::Struct::ToUno_CLLocationCoordinate2D(__return, ::g::iOS::CoreLocation::CLLocationCoordinate2D());
}

// public extern bool intersectsMapRect(iOS.MapKit.MKMapRect mapRect) [instance] :2768
bool IMKOverlay::intersectsMapRect(::g::iOS::MapKit::MKMapRect mapRect_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKOverlay", "intersectsMapRect(iOS.MapKit.MKMapRect)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(intersectsMapRect:),
        uObjC::Struct::FromUno_MKMapRect(mapRect_, ::MKMapRect()));
    return (bool)__return;
}

// public extern void setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D newCoordinate) [instance] :2780
void IMKOverlay::setCoordinate(::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKOverlay", "setCoordinate(iOS.CoreLocation.CLLocationCoordinate2D)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setCoordinate:),
        uObjC::Struct::FromUno_CLLocationCoordinate2D(newCoordinate_, ::CLLocationCoordinate2D()));
}

// public extern string subtitle() [instance] :2786
uString* IMKOverlay::subtitle()
{
    uStackFrame __("iOS.MapKit.Interop.IMKOverlay", "subtitle()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(subtitle));
    return uObjC::UnoString(__return);
}

// public extern string title() [instance] :2783
uString* IMKOverlay::title()
{
    uStackFrame __("iOS.MapKit.Interop.IMKOverlay", "title()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(title));
    return uObjC::UnoString(__return);
}
// }

}}}} // ::g::iOS::MapKit::Interop
