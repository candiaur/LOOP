// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <iOS.MapKit.IMKAnnotation.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreLocation{struct CLLocationCoordinate2D;}}}
namespace g{namespace iOS{namespace MapKit{struct MKUserLocation;}}}

namespace g{
namespace iOS{
namespace MapKit{

// public sealed extern class MKUserLocation :31504
// {
struct MKUserLocation_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::MapKit::IMKAnnotation interface1;
};

MKUserLocation_type* MKUserLocation_typeof();
void MKUserLocation__coordinate_fn(MKUserLocation* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval);
void MKUserLocation__iOSMapKitIMKAnnotationsetCoordinate_fn(MKUserLocation* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* newCoordinate);
void MKUserLocation__setCoordinate_fn(MKUserLocation* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* newCoordinate_);
void MKUserLocation__subtitle_fn(MKUserLocation* __this, uString** __retval);
void MKUserLocation__title_fn(MKUserLocation* __this, uString** __retval);

struct MKUserLocation : ::g::iOS::Foundation::NSObject
{
    ::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate();
    void setCoordinate(::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate_);
    uString* subtitle();
    uString* title();
};
// }

}}} // ::g::iOS::MapKit
