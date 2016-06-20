// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.MapView/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.IMapView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Fuse{namespace Controls{struct MapView;}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct FuseMapView;}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct MapView;}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct MapViewController;}}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public sealed extern class MapView :53
// {
struct MapView_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::IMapView interface3;
};

MapView_type* MapView_typeof();
void MapView__ctor_2_fn(MapView* __this, ::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::iOS::Controls::MapViewController* mapViewController);
void MapView__AddMarker_fn(MapView* __this, uString* label, double* lat, double* lng, int* __retval);
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval);
void MapView__set_AllowRotate_fn(MapView* __this, bool* value);
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval);
void MapView__set_AllowTilt_fn(MapView* __this, bool* value);
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval);
void MapView__set_AllowZoom_fn(MapView* __this, bool* value);
void MapView__get_Bearing_fn(MapView* __this, double* __retval);
void MapView__ClearMarkers_fn(MapView* __this);
void MapView__Configure_fn(MapView* __this, uObject* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch);
void MapView__Create_fn(::g::Fuse::Controls::MapView* mapViewHost, MapView** __retval);
void MapView__Dispose_fn(MapView* __this);
void MapView__GetZoomLevel_fn(MapView* __this, double* __retval);
void MapView__HandleLongPress_fn(MapView* __this, double* lat, double* lng);
void MapView__HandleMarkerTapped_fn(MapView* __this, uString* label);
void MapView__HandleTapped_fn(MapView* __this, double* lat, double* lng);
void MapView__get_IsReady_fn(MapView* __this, bool* __retval);
void MapView__get_Latitude_fn(MapView* __this, double* __retval);
void MapView__get_Longitude_fn(MapView* __this, double* __retval);
void MapView__get_Markers_fn(MapView* __this, uObject** __retval);
void MapView__MoveTo_fn(MapView* __this, double* latitude, double* longitude, double* zoomlevel, double* tilt, double* orientation);
void MapView__New1_fn(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::iOS::Controls::MapViewController* mapViewController, MapView** __retval);
void MapView__OnCameraMoved_fn(MapView* __this, bool* animated);
void MapView__OnMapTouch_fn(MapView* __this, int* type, double* lat, double* lng);
void MapView__get_OnReady_fn(MapView* __this, uDelegate** __retval);
void MapView__set_OnReady_fn(MapView* __this, uDelegate* value);
void MapView__OnReadyInternal_fn(MapView* __this);
void MapView__SetLocation_fn(MapView* __this, double* latitude, double* longitude);
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval);
void MapView__set_ShowCompass_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value);
void MapView__get_Style_fn(MapView* __this, int* __retval);
void MapView__set_Style_fn(MapView* __this, int* value);
void MapView__get_Tilt_fn(MapView* __this, double* __retval);
void MapView__UpdateMarkers_fn(MapView* __this);
void MapView__get_Zoom_fn(MapView* __this, double* __retval);

struct MapView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::iOS::Controls::MapViewController*> _container;
    bool _isReady;
    double _latInternal;
    double _lngInternal;
    int _mapStyle;
    uStrong< ::g::Fuse::iOS::Controls::FuseMapView*> _mapView;
    uStrong< ::g::Fuse::Controls::MapView*> _mapViewHost;
    uStrong<uDelegate*> _OnReady;
    bool _ShowCompass;
    bool _ShowMyLocationButton;

    void ctor_2(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::iOS::Controls::MapViewController* mapViewController);
    int AddMarker(uString* label, double lat, double lng);
    bool AllowRotate();
    void AllowRotate(bool value);
    bool AllowTilt();
    void AllowTilt(bool value);
    bool AllowZoom();
    void AllowZoom(bool value);
    double Bearing();
    void ClearMarkers();
    void Configure(uObject* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch);
    double GetZoomLevel();
    void HandleLongPress(double lat, double lng);
    void HandleMarkerTapped(uString* label);
    void HandleTapped(double lat, double lng);
    bool IsReady();
    double Latitude();
    double Longitude();
    uObject* Markers();
    void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation);
    void OnCameraMoved(bool animated);
    void OnMapTouch(int type, double lat, double lng);
    uDelegate* OnReady();
    void OnReady(uDelegate* value);
    void OnReadyInternal();
    void SetLocation(double latitude, double longitude);
    bool ShowCompass();
    void ShowCompass(bool value);
    bool ShowMyLocation();
    void ShowMyLocation(bool value);
    bool ShowMyLocationButton();
    void ShowMyLocationButton(bool value);
    int Style();
    void Style(int value);
    double Tilt();
    void UpdateMarkers();
    double Zoom();
    static MapView* Create(::g::Fuse::Controls::MapView* mapViewHost);
    static MapView* New1(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::iOS::Controls::MapViewController* mapViewController);
};
// }

}}}} // ::g::Fuse::iOS::Controls
