// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.MapView/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.MapMarker.h>
#include <Fuse.Controls.MapStyle.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.iOS.Controls.FuseMapView.h>
#include <Fuse.iOS.Controls.MapView.h>
#include <Fuse.iOS.Controls.MapViewController.h>
#include <iOS.CoreLocation.CLLocationCoordinate2D.h>
#include <iOS.MapKit.MKMapCamera.h>
#include <iOS.MapKit.MKMapType.h>
#include <iOS.MapKit.MKMapView.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.UIKit.UIViewController.h>
#include <iOS/MapViewDelegate.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uType* TYPES[11];

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public sealed extern class MapView :53
// {
static void MapView_build(uType* type)
{
    ::TYPES[0] = ::g::ObjC::Object_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::iOS::Controls::FuseMapView_typeof();
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[4] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Fuse::Controls::IMapView_typeof();
    ::TYPES[7] = ::g::Uno::Delegate_typeof();
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::MapMarker_typeof());
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Controls::MapMarker_typeof());
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(MapView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(MapView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(MapView_type, interface2),
        ::g::Fuse::Controls::IMapView_typeof(), offsetof(MapView_type, interface3));
    type->SetFields(3,
        ::g::Fuse::iOS::Controls::MapViewController_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _isReady), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _latInternal), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _lngInternal), 0,
        ::g::Fuse::Controls::MapStyle_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _mapStyle), 0,
        ::g::Fuse::iOS::Controls::FuseMapView_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _mapView), 0,
        ::g::Fuse::Controls::MapView_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _mapViewHost), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _OnReady), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _ShowCompass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _ShowMyLocationButton), 0);
    type->Reflection.SetFunctions(30,
        new uFunction("get_AllowRotate", NULL, (void*)MapView__get_AllowRotate_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowRotate", NULL, (void*)MapView__set_AllowRotate_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_AllowTilt", NULL, (void*)MapView__get_AllowTilt_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowTilt", NULL, (void*)MapView__set_AllowTilt_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_AllowZoom", NULL, (void*)MapView__get_AllowZoom_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowZoom", NULL, (void*)MapView__set_AllowZoom_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Bearing", NULL, (void*)MapView__get_Bearing_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("Create", NULL, (void*)MapView__Create_fn, 0, true, MapView_typeof(), 1, ::g::Fuse::Controls::MapView_typeof()),
        new uFunction("HandleLongPress", NULL, (void*)MapView__HandleLongPress_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("HandleMarkerTapped", NULL, (void*)MapView__HandleMarkerTapped_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("HandleTapped", NULL, (void*)MapView__HandleTapped_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_IsReady", NULL, (void*)MapView__get_IsReady_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Latitude", NULL, (void*)MapView__get_Latitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Longitude", NULL, (void*)MapView__get_Longitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Markers", NULL, (void*)MapView__get_Markers_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Controls::MapMarker_typeof()), 0),
        new uFunction("MoveTo", NULL, (void*)MapView__MoveTo_fn, 0, false, uVoid_typeof(), 5, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_OnReady", NULL, (void*)MapView__get_OnReady_fn, 0, false, ::g::Uno::Action_typeof(), 0),
        new uFunction("set_OnReady", NULL, (void*)MapView__set_OnReady_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("SetLocation", NULL, (void*)MapView__SetLocation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_ShowCompass", NULL, (void*)MapView__get_ShowCompass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowCompass", NULL, (void*)MapView__set_ShowCompass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ShowMyLocation", NULL, (void*)MapView__get_ShowMyLocation_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowMyLocation", NULL, (void*)MapView__set_ShowMyLocation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ShowMyLocationButton", NULL, (void*)MapView__get_ShowMyLocationButton_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowMyLocationButton", NULL, (void*)MapView__set_ShowMyLocationButton_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Style", NULL, (void*)MapView__get_Style_fn, 0, false, ::g::Fuse::Controls::MapStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)MapView__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::MapStyle_typeof()),
        new uFunction("get_Tilt", NULL, (void*)MapView__get_Tilt_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("UpdateMarkers", NULL, (void*)MapView__UpdateMarkers_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Zoom", NULL, (void*)MapView__get_Zoom_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

MapView_type* MapView_typeof()
{
    static uSStrong<MapView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(MapView);
    options.TypeSize = sizeof(MapView_type);
    type = (MapView_type*)uClassType::New("Fuse.iOS.Controls.MapView", options);
    type->SetBase(::g::Fuse::Controls::Native::iOS::LeafView_typeof());
    type->fp_build_ = MapView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))MapView__Dispose_fn;
    type->interface3.fp_SetLocation = (void(*)(uObject*, double*, double*))MapView__SetLocation_fn;
    type->interface3.fp_MoveTo = (void(*)(uObject*, double*, double*, double*, double*, double*))MapView__MoveTo_fn;
    type->interface3.fp_UpdateMarkers = (void(*)(uObject*))MapView__UpdateMarkers_fn;
    type->interface3.fp_HandleMarkerTapped = (void(*)(uObject*, uString*))MapView__HandleMarkerTapped_fn;
    type->interface3.fp_HandleTapped = (void(*)(uObject*, double*, double*))MapView__HandleTapped_fn;
    type->interface3.fp_HandleLongPress = (void(*)(uObject*, double*, double*))MapView__HandleLongPress_fn;
    type->interface3.fp_get_Markers = (void(*)(uObject*, uObject**))MapView__get_Markers_fn;
    type->interface3.fp_get_Style = (void(*)(uObject*, int*))MapView__get_Style_fn;
    type->interface3.fp_set_Style = (void(*)(uObject*, int*))MapView__set_Style_fn;
    type->interface3.fp_get_Latitude = (void(*)(uObject*, double*))MapView__get_Latitude_fn;
    type->interface3.fp_get_Longitude = (void(*)(uObject*, double*))MapView__get_Longitude_fn;
    type->interface3.fp_get_Bearing = (void(*)(uObject*, double*))MapView__get_Bearing_fn;
    type->interface3.fp_get_Tilt = (void(*)(uObject*, double*))MapView__get_Tilt_fn;
    type->interface3.fp_get_Zoom = (void(*)(uObject*, double*))MapView__get_Zoom_fn;
    type->interface3.fp_get_IsReady = (void(*)(uObject*, bool*))MapView__get_IsReady_fn;
    type->interface3.fp_get_ShowMyLocation = (void(*)(uObject*, bool*))MapView__get_ShowMyLocation_fn;
    type->interface3.fp_set_ShowMyLocation = (void(*)(uObject*, bool*))MapView__set_ShowMyLocation_fn;
    type->interface3.fp_get_ShowMyLocationButton = (void(*)(uObject*, bool*))MapView__get_ShowMyLocationButton_fn;
    type->interface3.fp_set_ShowMyLocationButton = (void(*)(uObject*, bool*))MapView__set_ShowMyLocationButton_fn;
    type->interface3.fp_get_ShowCompass = (void(*)(uObject*, bool*))MapView__get_ShowCompass_fn;
    type->interface3.fp_set_ShowCompass = (void(*)(uObject*, bool*))MapView__set_ShowCompass_fn;
    type->interface3.fp_get_AllowZoom = (void(*)(uObject*, bool*))MapView__get_AllowZoom_fn;
    type->interface3.fp_set_AllowZoom = (void(*)(uObject*, bool*))MapView__set_AllowZoom_fn;
    type->interface3.fp_get_AllowTilt = (void(*)(uObject*, bool*))MapView__get_AllowTilt_fn;
    type->interface3.fp_set_AllowTilt = (void(*)(uObject*, bool*))MapView__set_AllowTilt_fn;
    type->interface3.fp_get_AllowRotate = (void(*)(uObject*, bool*))MapView__get_AllowRotate_fn;
    type->interface3.fp_set_AllowRotate = (void(*)(uObject*, bool*))MapView__set_AllowRotate_fn;
    type->interface3.fp_get_OnReady = (void(*)(uObject*, uDelegate**))MapView__get_OnReady_fn;
    type->interface3.fp_set_OnReady = (void(*)(uObject*, uDelegate*))MapView__set_OnReady_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))MapView__Dispose_fn;
    return type;
}

// private MapView(Fuse.Controls.MapView mapViewHost, Fuse.iOS.Controls.MapViewController mapViewController) :76
void MapView__ctor_2_fn(MapView* __this, ::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::iOS::Controls::MapViewController* mapViewController)
{
    __this->ctor_2(mapViewHost, mapViewController);
}

// private int AddMarker(string label, double lat, double lng) :181
void MapView__AddMarker_fn(MapView* __this, uString* label, double* lat, double* lng, int* __retval)
{
    *__retval = __this->AddMarker(label, *lat, *lng);
}

// public bool get_AllowRotate() :328
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowRotate();
}

// public void set_AllowRotate(bool value) :329
void MapView__set_AllowRotate_fn(MapView* __this, bool* value)
{
    __this->AllowRotate(*value);
}

// public bool get_AllowTilt() :322
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowTilt();
}

// public void set_AllowTilt(bool value) :323
void MapView__set_AllowTilt_fn(MapView* __this, bool* value)
{
    __this->AllowTilt(*value);
}

// public bool get_AllowZoom() :316
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowZoom();
}

// public void set_AllowZoom(bool value) :317
void MapView__set_AllowZoom_fn(MapView* __this, bool* value)
{
    __this->AllowZoom(*value);
}

// public double get_Bearing() :267
void MapView__get_Bearing_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Bearing();
}

// private void ClearMarkers() :195
void MapView__ClearMarkers_fn(MapView* __this)
{
    __this->ClearMarkers();
}

// private void Configure(ObjC.Object mapView, Uno.Action<bool> onMapMove, Uno.Action<int, double, double> onMapTouch, Uno.Action<string> onMarkerTouch) :105
void MapView__Configure_fn(MapView* __this, uObject* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch)
{
    __this->Configure(mapView, onMapMove, onMapTouch, onMarkerTouch);
}

// public static Fuse.iOS.Controls.MapView Create(Fuse.Controls.MapView mapViewHost) :70
void MapView__Create_fn(::g::Fuse::Controls::MapView* mapViewHost, MapView** __retval)
{
    *__retval = MapView::Create(mapViewHost);
}

// public override sealed void Dispose() :58
void MapView__Dispose_fn(MapView* __this)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "Dispose()");
    uPtr(__this->_mapViewHost)->MapViewClient(NULL);
    __this->_mapViewHost = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// private double GetZoomLevel() :132
void MapView__GetZoomLevel_fn(MapView* __this, double* __retval)
{
    *__retval = __this->GetZoomLevel();
}

// public void HandleLongPress(double lat, double lng) :169
void MapView__HandleLongPress_fn(MapView* __this, double* lat, double* lng)
{
    __this->HandleLongPress(*lat, *lng);
}

// public void HandleMarkerTapped(string label) :201
void MapView__HandleMarkerTapped_fn(MapView* __this, uString* label)
{
    __this->HandleMarkerTapped(label);
}

// public void HandleTapped(double lat, double lng) :164
void MapView__HandleTapped_fn(MapView* __this, double* lat, double* lng)
{
    __this->HandleTapped(*lat, *lng);
}

// public bool get_IsReady() :90
void MapView__get_IsReady_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->IsReady();
}

// public double get_Latitude() :248
void MapView__get_Latitude_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Latitude();
}

// public double get_Longitude() :258
void MapView__get_Longitude_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Longitude();
}

// public Uno.Collections.IList<Fuse.Controls.MapMarker> get_Markers() :216
void MapView__get_Markers_fn(MapView* __this, uObject** __retval)
{
    *__retval = __this->Markers();
}

// public void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation) :288
void MapView__MoveTo_fn(MapView* __this, double* latitude, double* longitude, double* zoomlevel, double* tilt, double* orientation)
{
    __this->MoveTo(*latitude, *longitude, *zoomlevel, *tilt, *orientation);
}

// private MapView New(Fuse.Controls.MapView mapViewHost, Fuse.iOS.Controls.MapViewController mapViewController) :76
void MapView__New1_fn(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::iOS::Controls::MapViewController* mapViewController, MapView** __retval)
{
    *__retval = MapView::New1(mapViewHost, mapViewController);
}

// private void OnCameraMoved(bool animated) :174
void MapView__OnCameraMoved_fn(MapView* __this, bool* animated)
{
    __this->OnCameraMoved(*animated);
}

// private void OnMapTouch(int type, double lat, double lng) :143
void MapView__OnMapTouch_fn(MapView* __this, int* type, double* lat, double* lng)
{
    __this->OnMapTouch(*type, *lat, *lng);
}

// public generated Uno.Action get_OnReady() :95
void MapView__get_OnReady_fn(MapView* __this, uDelegate** __retval)
{
    *__retval = __this->OnReady();
}

// public generated void set_OnReady(Uno.Action value) :95
void MapView__set_OnReady_fn(MapView* __this, uDelegate* value)
{
    __this->OnReady(value);
}

// private void OnReadyInternal() :97
void MapView__OnReadyInternal_fn(MapView* __this)
{
    __this->OnReadyInternal();
}

// public void SetLocation(double latitude, double longitude) :332
void MapView__SetLocation_fn(MapView* __this, double* latitude, double* longitude)
{
    __this->SetLocation(*latitude, *longitude);
}

// public generated bool get_ShowCompass() :310
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowCompass();
}

// public generated void set_ShowCompass(bool value) :311
void MapView__set_ShowCompass_fn(MapView* __this, bool* value)
{
    __this->ShowCompass(*value);
}

// public bool get_ShowMyLocation() :296
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowMyLocation();
}

// public void set_ShowMyLocation(bool value) :300
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value)
{
    __this->ShowMyLocation(*value);
}

// public generated bool get_ShowMyLocationButton() :305
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowMyLocationButton();
}

// public generated void set_ShowMyLocationButton(bool value) :305
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value)
{
    __this->ShowMyLocationButton(*value);
}

// public Fuse.Controls.MapStyle get_Style() :225
void MapView__get_Style_fn(MapView* __this, int* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Controls.MapStyle value) :228
void MapView__set_Style_fn(MapView* __this, int* value)
{
    __this->Style(*value);
}

// public double get_Tilt() :274
void MapView__get_Tilt_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Tilt();
}

// public void UpdateMarkers() :206
void MapView__UpdateMarkers_fn(MapView* __this)
{
    __this->UpdateMarkers();
}

// public double get_Zoom() :281
void MapView__get_Zoom_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Zoom();
}

// private MapView(Fuse.Controls.MapView mapViewHost, Fuse.iOS.Controls.MapViewController mapViewController) [instance] :76
void MapView::ctor_2(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::iOS::Controls::MapViewController* mapViewController)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", ".ctor(Fuse.Controls.MapView,Fuse.iOS.Controls.MapViewController)");
    ctor_1((uObject*)uPtr(mapViewController)->View());
    _mapViewHost = mapViewHost;
    _container = mapViewController;
    uPtr(_container)->OnReady = uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)MapView__OnReadyInternal_fn, this);
    _mapView = uCast< ::g::Fuse::iOS::Controls::FuseMapView*>(uPtr(_container)->View(), ::TYPES[2/*Fuse.iOS.Controls.FuseMapView*/]);
    Configure((uObject*)_mapView, uDelegate::New(::TYPES[3/*Uno.Action<bool>*/], (void*)MapView__OnCameraMoved_fn, this), uDelegate::New(::TYPES[4/*Uno.Action<int, double, double>*/], (void*)MapView__OnMapTouch_fn, this), uDelegate::New(::TYPES[5/*Uno.Action<string>*/], (void*)MapView__HandleMarkerTapped_fn, this));
    uPtr(_mapViewHost)->MapViewClient((uObject*)this);
}

// private int AddMarker(string label, double lat, double lng) [instance] :181
int MapView::AddMarker(uString* label, double lat, double lng)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "AddMarker(string,double,double)");
    @autoreleasepool
    {
        return [] (::NSString* label, double lat, double lng) -> int
        {
            id dg = [MapViewDelegate instance];
            return [dg addMarker:label latitude:lat longitude:lng];
        } (::uObjC::NativeString(label), lat, lng);
        
    }
    
}

// public bool get_AllowRotate() [instance] :328
bool MapView::AllowRotate()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_AllowRotate()");
    return uPtr(_mapView)->RotateEnabled();
}

// public void set_AllowRotate(bool value) [instance] :329
void MapView::AllowRotate(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_AllowRotate(bool)");
    uPtr(_mapView)->RotateEnabled(value);
}

// public bool get_AllowTilt() [instance] :322
bool MapView::AllowTilt()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_AllowTilt()");
    return uPtr(_mapView)->PitchEnabled();
}

// public void set_AllowTilt(bool value) [instance] :323
void MapView::AllowTilt(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_AllowTilt(bool)");
    uPtr(_mapView)->PitchEnabled(value);
}

// public bool get_AllowZoom() [instance] :316
bool MapView::AllowZoom()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_AllowZoom()");
    return uPtr(_mapView)->ZoomEnabled();
}

// public void set_AllowZoom(bool value) [instance] :317
void MapView::AllowZoom(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_AllowZoom(bool)");
    uPtr(_mapView)->ZoomEnabled(value);
}

// public double get_Bearing() [instance] :267
double MapView::Bearing()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Bearing()");
    return uPtr(uPtr(_mapView)->Camera())->Heading();
}

// private void ClearMarkers() [instance] :195
void MapView::ClearMarkers()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "ClearMarkers()");
    @autoreleasepool
    {
        id dg = [MapViewDelegate instance];
        [dg clearMarkers];
    }
    
}

// private void Configure(ObjC.Object mapView, Uno.Action<bool> onMapMove, Uno.Action<int, double, double> onMapTouch, Uno.Action<string> onMarkerTouch) [instance] :105
void MapView::Configure(uObject* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "Configure(ObjC.Object,Uno.Action<bool>,Uno.Action<int, double, double>,Uno.Action<string>)");
    @autoreleasepool
    {
        [] (::id mapView, ::uObjC::Function<void, bool> onMapMove, ::uObjC::Function<void, int, double, double> onMapTouch, ::uObjC::Function<void, ::NSString*> onMarkerTouch) -> void
        {
            NSLog(@"Configure step");
            MKMapView* mv = mapView;
            mv.translatesAutoresizingMaskIntoConstraints = YES;
            
            id dg = [MapViewDelegate instance];
            [dg setAsDelegate:mv]; 
            [dg setMapMoveAction:onMapMove];
            [dg setMapTouchAction:onMapTouch];
            [dg setMarkerSelectAction:onMarkerTouch];
            
            mv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        } (::g::ObjC::Helpers::GetHandle(mapView), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, bool>
        {
            return [[^ void (bool arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(uCRef(arg));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onMapMove]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, int, double, double>
        {
            return [[^ void (int arg1, double arg2, double arg3)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(3, uCRef<int>(arg1), uCRef(arg2), uCRef(arg3));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onMapTouch]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return [[^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onMarkerTouch]));
        
    }
    
}

// private double GetZoomLevel() [instance] :132
double MapView::GetZoomLevel()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "GetZoomLevel()");
    @autoreleasepool
    {
        return [[MapViewDelegate instance] getZoomLevel];
    }
    
}

// public void HandleLongPress(double lat, double lng) [instance] :169
void MapView::HandleLongPress(double lat, double lng)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "HandleLongPress(double,double)");
    uPtr(_mapViewHost)->HandleLongPress(lat, lng);
}

// public void HandleMarkerTapped(string label) [instance] :201
void MapView::HandleMarkerTapped(uString* label)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "HandleMarkerTapped(string)");
    uPtr(_mapViewHost)->HandleMarkerTapped(label);
}

// public void HandleTapped(double lat, double lng) [instance] :164
void MapView::HandleTapped(double lat, double lng)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "HandleTapped(double,double)");
    uPtr(_mapViewHost)->HandleTapped(lat, lng);
}

// public bool get_IsReady() [instance] :90
bool MapView::IsReady()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_IsReady()");
    return _isReady;
}

// public double get_Latitude() [instance] :248
double MapView::Latitude()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Latitude()");
    return ::g::Uno::Double::IsNaN(uPtr(_mapView)->CenterCoordinate().Latitude) ? _latInternal : uPtr(_mapView)->CenterCoordinate().Latitude;
}

// public double get_Longitude() [instance] :258
double MapView::Longitude()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Longitude()");
    return ::g::Uno::Double::IsNaN(uPtr(_mapView)->CenterCoordinate().Longitude) ? _lngInternal : uPtr(_mapView)->CenterCoordinate().Longitude;
}

// public Uno.Collections.IList<Fuse.Controls.MapMarker> get_Markers() [instance] :216
uObject* MapView::Markers()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Markers()");
    return uPtr(_mapViewHost)->Markers();
}

// public void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation) [instance] :288
void MapView::MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "MoveTo(double,double,double,double,double)");
    @autoreleasepool
    {
        NSLog(@"MoveTo %f %f", latitude, longitude);
        [[MapViewDelegate instance] moveTo:latitude longitude:longitude zoom:zoomlevel tilt:tilt orientation:orientation];
    }
    
}

// private void OnCameraMoved(bool animated) [instance] :174
void MapView::OnCameraMoved(bool animated)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "OnCameraMoved(bool)");

    if (animated)
        uPtr(_mapViewHost)->OnMapInteractionEnd();
}

// private void OnMapTouch(int type, double lat, double lng) [instance] :143
void MapView::OnMapTouch(int type, double lat, double lng)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "OnMapTouch(int,double,double)");

    switch (type)
    {
        case 0:
        {
            uPtr(_mapViewHost)->OnMapInteractionStart();
            break;
        }
        case 1:
            break;
        case 2:
        {
            HandleTapped(lat, lng);
            break;
        }
        case 3:
        {
            HandleLongPress(lat, lng);
            break;
        }
        case 4:
        {
            uPtr(_mapViewHost)->OnMapInteractionEnd();
            break;
        }
    }
}

// public generated Uno.Action get_OnReady() [instance] :95
uDelegate* MapView::OnReady()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_OnReady()");
    return _OnReady;
}

// public generated void set_OnReady(Uno.Action value) [instance] :95
void MapView::OnReady(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_OnReady(Uno.Action)");
    _OnReady = value;
}

// private void OnReadyInternal() [instance] :97
void MapView::OnReadyInternal()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "OnReadyInternal()");
    _isReady = true;

    if (::g::Uno::Delegate::op_Inequality(OnReady(), NULL))
        uPtr(OnReady())->InvokeVoid();
}

// public void SetLocation(double latitude, double longitude) [instance] :332
void MapView::SetLocation(double latitude, double longitude)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "SetLocation(double,double)");
    MoveTo(latitude, longitude, Zoom(), Tilt(), Bearing());
}

// public generated bool get_ShowCompass() [instance] :310
bool MapView::ShowCompass()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_ShowCompass()");
    return _ShowCompass;
}

// public generated void set_ShowCompass(bool value) [instance] :311
void MapView::ShowCompass(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_ShowCompass(bool)");
    _ShowCompass = value;
}

// public bool get_ShowMyLocation() [instance] :296
bool MapView::ShowMyLocation()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_ShowMyLocation()");
    return uPtr(_mapView)->showsUserLocation();
}

// public void set_ShowMyLocation(bool value) [instance] :300
void MapView::ShowMyLocation(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_ShowMyLocation(bool)");
    uPtr(_mapView)->setShowsUserLocation(value);
}

// public generated bool get_ShowMyLocationButton() [instance] :305
bool MapView::ShowMyLocationButton()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_ShowMyLocationButton()");
    return _ShowMyLocationButton;
}

// public generated void set_ShowMyLocationButton(bool value) [instance] :305
void MapView::ShowMyLocationButton(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_ShowMyLocationButton(bool)");
    _ShowMyLocationButton = value;
}

// public Fuse.Controls.MapStyle get_Style() [instance] :225
int MapView::Style()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Style()");
    return _mapStyle;
}

// public void set_Style(Fuse.Controls.MapStyle value) [instance] :228
void MapView::Style(int value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_Style(Fuse.Controls.MapStyle)");
    _mapStyle = value;

    switch (_mapStyle)
    {
        case 1:
        {
            uPtr(_mapView)->MapType(1);
            break;
        }
        case 2:
        {
            uPtr(_mapView)->MapType(2);
            break;
        }
        default:
        {
            uPtr(_mapView)->MapType(0);
            break;
        }
    }
}

// public double get_Tilt() [instance] :274
double MapView::Tilt()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Tilt()");
    return uPtr(uPtr(_mapView)->Camera())->Pitch();
}

// public void UpdateMarkers() [instance] :206
void MapView::UpdateMarkers()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "UpdateMarkers()");
    ::g::Fuse::Controls::MapMarker* ret3;
    ClearMarkers();

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Markers()), ::TYPES[8/*Uno.Collections.IEnumerable<Fuse.Controls.MapMarker>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[9/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Controls::MapMarker* m = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[10/*Uno.Collections.IEnumerator<Fuse.Controls.MapMarker>*/]), &ret3), ret3);
        AddMarker(uPtr(m)->Label(), uPtr(m)->Latitude(), uPtr(m)->Longitude());
    }
}

// public double get_Zoom() [instance] :281
double MapView::Zoom()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Zoom()");
    return GetZoomLevel();
}

// public static Fuse.iOS.Controls.MapView Create(Fuse.Controls.MapView mapViewHost) [static] :70
MapView* MapView::Create(::g::Fuse::Controls::MapView* mapViewHost)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "Create(Fuse.Controls.MapView)");
    ::g::Fuse::iOS::Controls::MapViewController* mapViewController = ::g::Fuse::iOS::Controls::MapViewController::New9();
    return MapView::New1(mapViewHost, mapViewController);
}

// private MapView New(Fuse.Controls.MapView mapViewHost, Fuse.iOS.Controls.MapViewController mapViewController) [static] :76
MapView* MapView::New1(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::iOS::Controls::MapViewController* mapViewController)
{
    MapView* obj2 = (MapView*)uNew(MapView_typeof());
    obj2->ctor_2(mapViewHost, mapViewController);
    return obj2;
}
// }

}}}} // ::g::Fuse::iOS::Controls
