// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.MapKit.IMKAnnotation.h>
#include <Uno.Object.h>
namespace g{namespace iOS{namespace CoreLocation{struct CLLocationCoordinate2D;}}}
namespace g{namespace iOS{namespace MapKit{struct MKMapRect;}}}

namespace g{
namespace iOS{
namespace MapKit{

// public abstract extern interface IMKOverlay :1945
// {
uInterfaceType* IMKOverlay_typeof();

struct IMKOverlay
{
    void(*fp_boundingMapRect)(uObject*, ::g::iOS::MapKit::MKMapRect*);
    void(*fp_canReplaceMapContent)(uObject*, bool*);
    void(*fp_coordinate)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*);
    void(*fp_intersectsMapRect)(uObject*, ::g::iOS::MapKit::MKMapRect*, bool*);
    void(*fp_setCoordinate)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*);
    void(*fp_subtitle)(uObject*, uString**);
    void(*fp_title)(uObject*, uString**);
    static ::g::iOS::MapKit::MKMapRect boundingMapRect(const uInterface& __this);
    static bool canReplaceMapContent(const uInterface& __this) { bool __retval; return __this.VTable<IMKOverlay>()->fp_canReplaceMapContent(__this, &__retval), __retval; }
    static ::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate(const uInterface& __this);
    static bool intersectsMapRect(const uInterface& __this, ::g::iOS::MapKit::MKMapRect mapRect);
    static void setCoordinate(const uInterface& __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate);
    static uString* subtitle(const uInterface& __this) { uString* __retval; return __this.VTable<IMKOverlay>()->fp_subtitle(__this, &__retval), __retval; }
    static uString* title(const uInterface& __this) { uString* __retval; return __this.VTable<IMKOverlay>()->fp_title(__this, &__retval), __retval; }
};

}}} // ::g::iOS::MapKit

#include <iOS.CoreLocation.CLLocationCoordinate2D.h>
#include <iOS.MapKit.MKMapRect.h>

namespace g{
namespace iOS{
namespace MapKit{

inline ::g::iOS::MapKit::MKMapRect IMKOverlay::boundingMapRect(const uInterface& __this) { ::g::iOS::MapKit::MKMapRect __retval; return __this.VTable<IMKOverlay>()->fp_boundingMapRect(__this, &__retval), __retval; }
inline ::g::iOS::CoreLocation::CLLocationCoordinate2D IMKOverlay::coordinate(const uInterface& __this) { ::g::iOS::CoreLocation::CLLocationCoordinate2D __retval; return __this.VTable<IMKOverlay>()->fp_coordinate(__this, &__retval), __retval; }
inline bool IMKOverlay::intersectsMapRect(const uInterface& __this, ::g::iOS::MapKit::MKMapRect mapRect) { bool __retval; return __this.VTable<IMKOverlay>()->fp_intersectsMapRect(__this, &mapRect, &__retval), __retval; }
inline void IMKOverlay::setCoordinate(const uInterface& __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate) { __this.VTable<IMKOverlay>()->fp_setCoordinate(__this, &newCoordinate); }
// }

}}} // ::g::iOS::MapKit
