// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.CoreLocation.CLLocationCoordinate2D.h>
#include <iOS.MapKit.MKCoordinateSpan.h>
#include <Uno.Object.h>
namespace g{namespace iOS{namespace MapKit{struct MKCoordinateRegion;}}}

namespace g{
namespace iOS{
namespace MapKit{

// public extern struct MKCoordinateRegion :3209
// {
uStructType* MKCoordinateRegion_typeof();

struct MKCoordinateRegion
{
    ::g::iOS::CoreLocation::CLLocationCoordinate2D Center;
    ::g::iOS::MapKit::MKCoordinateSpan Span;
};
// }

}}} // ::g::iOS::MapKit
