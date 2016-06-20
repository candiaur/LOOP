// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.MapKit.IMKMapViewDelegate.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace Foundation{struct NSArray;}}}
namespace g{namespace iOS{namespace Foundation{struct NSError;}}}
namespace g{namespace iOS{namespace MapKit{namespace Interop{struct IMKMapViewDelegate;}}}}
namespace g{namespace iOS{namespace MapKit{struct MKAnnotationView;}}}
namespace g{namespace iOS{namespace MapKit{struct MKMapView;}}}
namespace g{namespace iOS{namespace MapKit{struct MKOverlayRenderer;}}}
namespace g{namespace iOS{namespace MapKit{struct MKOverlayView;}}}
namespace g{namespace iOS{namespace MapKit{struct MKUserLocation;}}}
namespace g{namespace iOS{namespace UIKit{struct UIControl;}}}

namespace g{
namespace iOS{
namespace MapKit{
namespace Interop{

// public sealed extern class IMKMapViewDelegate :2652
// {
struct IMKMapViewDelegate_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::MapKit::IMKMapViewDelegate interface1;
};

IMKMapViewDelegate_type* IMKMapViewDelegate_typeof();
void IMKMapViewDelegate__mapViewAnnotationViewCalloutAccessoryControlTapped_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_, ::g::iOS::UIKit::UIControl* control_);
void IMKMapViewDelegate__mapViewAnnotationViewDidChangeDragStateFromOldState_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_, uint32_t* newState_, uint32_t* oldState_);
void IMKMapViewDelegate__mapViewDidAddAnnotationViews_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* views_);
void IMKMapViewDelegate__mapViewDidAddOverlayRenderers_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* renderers_);
void IMKMapViewDelegate__mapViewDidAddOverlayViews_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* overlayViews_);
void IMKMapViewDelegate__mapViewDidChangeUserTrackingModeAnimated_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, int* mode_, bool* animated_);
void IMKMapViewDelegate__mapViewDidDeselectAnnotationView_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_);
void IMKMapViewDelegate__mapViewDidFailLoadingMapWithError_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSError* error_);
void IMKMapViewDelegate__mapViewDidFailToLocateUserWithError_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSError* error_);
void IMKMapViewDelegate__mapViewDidFinishLoadingMap_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_);
void IMKMapViewDelegate__mapViewDidFinishRenderingMapFullyRendered_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, bool* fullyRendered_);
void IMKMapViewDelegate__mapViewDidSelectAnnotationView_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_);
void IMKMapViewDelegate__mapViewDidStopLocatingUser_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_);
void IMKMapViewDelegate__mapViewDidUpdateUserLocation_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKUserLocation* userLocation_);
void IMKMapViewDelegate__mapViewRegionDidChangeAnimated_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, bool* animated_);
void IMKMapViewDelegate__mapViewRegionWillChangeAnimated_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, bool* animated_);
void IMKMapViewDelegate__mapViewRendererForOverlay_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, uObject* overlay_, ::g::iOS::MapKit::MKOverlayRenderer** __retval);
void IMKMapViewDelegate__mapViewViewForAnnotation_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, uObject* annotation_, ::g::iOS::MapKit::MKAnnotationView** __retval);
void IMKMapViewDelegate__mapViewViewForOverlay_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, uObject* overlay_, ::g::iOS::MapKit::MKOverlayView** __retval);
void IMKMapViewDelegate__mapViewWillStartLoadingMap_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_);
void IMKMapViewDelegate__mapViewWillStartLocatingUser_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_);
void IMKMapViewDelegate__mapViewWillStartRenderingMap_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_);

struct IMKMapViewDelegate : ::g::ObjC::Bindings::Object
{
    void mapViewAnnotationViewCalloutAccessoryControlTapped(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_, ::g::iOS::UIKit::UIControl* control_);
    void mapViewAnnotationViewDidChangeDragStateFromOldState(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_, uint32_t newState_, uint32_t oldState_);
    void mapViewDidAddAnnotationViews(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* views_);
    void mapViewDidAddOverlayRenderers(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* renderers_);
    void mapViewDidAddOverlayViews(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* overlayViews_);
    void mapViewDidChangeUserTrackingModeAnimated(::g::iOS::MapKit::MKMapView* mapView_, int mode_, bool animated_);
    void mapViewDidDeselectAnnotationView(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_);
    void mapViewDidFailLoadingMapWithError(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSError* error_);
    void mapViewDidFailToLocateUserWithError(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSError* error_);
    void mapViewDidFinishLoadingMap(::g::iOS::MapKit::MKMapView* mapView_);
    void mapViewDidFinishRenderingMapFullyRendered(::g::iOS::MapKit::MKMapView* mapView_, bool fullyRendered_);
    void mapViewDidSelectAnnotationView(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_);
    void mapViewDidStopLocatingUser(::g::iOS::MapKit::MKMapView* mapView_);
    void mapViewDidUpdateUserLocation(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKUserLocation* userLocation_);
    void mapViewRegionDidChangeAnimated(::g::iOS::MapKit::MKMapView* mapView_, bool animated_);
    void mapViewRegionWillChangeAnimated(::g::iOS::MapKit::MKMapView* mapView_, bool animated_);
    ::g::iOS::MapKit::MKOverlayRenderer* mapViewRendererForOverlay(::g::iOS::MapKit::MKMapView* mapView_, uObject* overlay_);
    ::g::iOS::MapKit::MKAnnotationView* mapViewViewForAnnotation(::g::iOS::MapKit::MKMapView* mapView_, uObject* annotation_);
    ::g::iOS::MapKit::MKOverlayView* mapViewViewForOverlay(::g::iOS::MapKit::MKMapView* mapView_, uObject* overlay_);
    void mapViewWillStartLoadingMap(::g::iOS::MapKit::MKMapView* mapView_);
    void mapViewWillStartLocatingUser(::g::iOS::MapKit::MKMapView* mapView_);
    void mapViewWillStartRenderingMap(::g::iOS::MapKit::MKMapView* mapView_);
};
// }

}}}} // ::g::iOS::MapKit::Interop
