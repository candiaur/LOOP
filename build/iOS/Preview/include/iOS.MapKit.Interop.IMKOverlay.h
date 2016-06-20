// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.MapKit.IMKAnnotation.h>
#include <iOS.MapKit.IMKOverlay.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreLocation{struct CLLocationCoordinate2D;}}}
namespace g{namespace iOS{namespace MapKit{namespace Interop{struct IMKOverlay;}}}}
namespace g{namespace iOS{namespace MapKit{struct MKMapRect;}}}

namespace g{
namespace iOS{
namespace MapKit{
namespace Interop{

// public sealed extern class IMKOverlay :2739
// {
struct IMKOverlay_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::MapKit::IMKOverlay interface1;
    ::g::iOS::MapKit::IMKAnnotation interface2;
};

IMKOverlay_type* IMKOverlay_typeof();
void IMKOverlay__boundingMapRect_fn(IMKOverlay* __this, ::g::iOS::MapKit::MKMapRect* __retval);
void IMKOverlay__canReplaceMapContent_fn(IMKOverlay* __this, bool* __retval);
void IMKOverlay__coordinate_fn(IMKOverlay* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval);
void IMKOverlay__intersectsMapRect_fn(IMKOverlay* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, bool* __retval);
void IMKOverlay__setCoordinate_fn(IMKOverlay* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* newCoordinate_);
void IMKOverlay__subtitle_fn(IMKOverlay* __this, uString** __retval);
void IMKOverlay__title_fn(IMKOverlay* __this, uString** __retval);

struct IMKOverlay : ::g::ObjC::Bindings::Object
{
    ::g::iOS::MapKit::MKMapRect boundingMapRect();
    bool canReplaceMapContent();
    ::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate();
    bool intersectsMapRect(::g::iOS::MapKit::MKMapRect mapRect_);
    void setCoordinate(::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate_);
    uString* subtitle();
    uString* title();
};
// }

}}}} // ::g::iOS::MapKit::Interop
