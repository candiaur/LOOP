// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace iOS{namespace CoreLocation{struct CLLocationCoordinate2D;}}}

namespace g{
namespace iOS{
namespace MapKit{

// public abstract extern interface IMKAnnotation :1834
// {
uInterfaceType* IMKAnnotation_typeof();

struct IMKAnnotation
{
    void(*fp_coordinate)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*);
    void(*fp_setCoordinate)(uObject*, ::g::iOS::CoreLocation::CLLocationCoordinate2D*);
    void(*fp_subtitle)(uObject*, uString**);
    void(*fp_title)(uObject*, uString**);
    static ::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate(const uInterface& __this);
    static void setCoordinate(const uInterface& __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate);
    static uString* subtitle(const uInterface& __this) { uString* __retval; return __this.VTable<IMKAnnotation>()->fp_subtitle(__this, &__retval), __retval; }
    static uString* title(const uInterface& __this) { uString* __retval; return __this.VTable<IMKAnnotation>()->fp_title(__this, &__retval), __retval; }
};

}}} // ::g::iOS::MapKit

#include <iOS.CoreLocation.CLLocationCoordinate2D.h>

namespace g{
namespace iOS{
namespace MapKit{

inline ::g::iOS::CoreLocation::CLLocationCoordinate2D IMKAnnotation::coordinate(const uInterface& __this) { ::g::iOS::CoreLocation::CLLocationCoordinate2D __retval; return __this.VTable<IMKAnnotation>()->fp_coordinate(__this, &__retval), __retval; }
inline void IMKAnnotation::setCoordinate(const uInterface& __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D newCoordinate) { __this.VTable<IMKAnnotation>()->fp_setCoordinate(__this, &newCoordinate); }
// }

}}} // ::g::iOS::MapKit
