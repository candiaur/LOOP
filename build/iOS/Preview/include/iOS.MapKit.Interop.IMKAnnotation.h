// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.MapKit.IMKAnnotation.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreLocation{struct CLLocationCoordinate2D;}}}
namespace g{namespace iOS{namespace MapKit{namespace Interop{struct IMKAnnotation;}}}}

namespace g{
namespace iOS{
namespace MapKit{
namespace Interop{

// public sealed extern class IMKAnnotation :2604
// {
struct IMKAnnotation_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::MapKit::IMKAnnotation interface1;
};

IMKAnnotation_type* IMKAnnotation_typeof();
void IMKAnnotation__coordinate_fn(IMKAnnotation* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval);
void IMKAnnotation__setCoordinate_fn(IMKAnnotation* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* newCoordinate_);
void IMKAnnotation__subtitle_fn(IMKAnnotation* __this, uString** __retval);
void IMKAnnotation__title_fn(IMKAnnotation* __this, uString** __retval);

struct IMKAnnotation : ::g::ObjC::Bindings::Object
{
    ::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate();
    void setCoordinate(::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate_);
    uString* subtitle();
    uString* title();
};
// }

}}}} // ::g::iOS::MapKit::Interop
