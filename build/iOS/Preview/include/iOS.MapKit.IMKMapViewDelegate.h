// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace iOS{namespace Foundation{struct NSArray;}}}
namespace g{namespace iOS{namespace Foundation{struct NSError;}}}
namespace g{namespace iOS{namespace MapKit{struct MKAnnotationView;}}}
namespace g{namespace iOS{namespace MapKit{struct MKMapView;}}}
namespace g{namespace iOS{namespace MapKit{struct MKOverlayRenderer;}}}
namespace g{namespace iOS{namespace MapKit{struct MKOverlayView;}}}
namespace g{namespace iOS{namespace MapKit{struct MKUserLocation;}}}
namespace g{namespace iOS{namespace UIKit{struct UIControl;}}}

namespace g{
namespace iOS{
namespace MapKit{

// public abstract extern interface IMKMapViewDelegate :1866
// {
uInterfaceType* IMKMapViewDelegate_typeof();

struct IMKMapViewDelegate
{
    void(*fp_mapViewAnnotationViewCalloutAccessoryControlTapped)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::MapKit::MKAnnotationView*, ::g::iOS::UIKit::UIControl*);
    void(*fp_mapViewAnnotationViewDidChangeDragStateFromOldState)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::MapKit::MKAnnotationView*, uint32_t*, uint32_t*);
    void(*fp_mapViewDidAddAnnotationViews)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::Foundation::NSArray*);
    void(*fp_mapViewDidAddOverlayRenderers)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::Foundation::NSArray*);
    void(*fp_mapViewDidAddOverlayViews)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::Foundation::NSArray*);
    void(*fp_mapViewDidChangeUserTrackingModeAnimated)(uObject*, ::g::iOS::MapKit::MKMapView*, int*, bool*);
    void(*fp_mapViewDidDeselectAnnotationView)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::MapKit::MKAnnotationView*);
    void(*fp_mapViewDidFailLoadingMapWithError)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::Foundation::NSError*);
    void(*fp_mapViewDidFailToLocateUserWithError)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::Foundation::NSError*);
    void(*fp_mapViewDidFinishLoadingMap)(uObject*, ::g::iOS::MapKit::MKMapView*);
    void(*fp_mapViewDidFinishRenderingMapFullyRendered)(uObject*, ::g::iOS::MapKit::MKMapView*, bool*);
    void(*fp_mapViewDidSelectAnnotationView)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::MapKit::MKAnnotationView*);
    void(*fp_mapViewDidStopLocatingUser)(uObject*, ::g::iOS::MapKit::MKMapView*);
    void(*fp_mapViewDidUpdateUserLocation)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::MapKit::MKUserLocation*);
    void(*fp_mapViewRegionDidChangeAnimated)(uObject*, ::g::iOS::MapKit::MKMapView*, bool*);
    void(*fp_mapViewRegionWillChangeAnimated)(uObject*, ::g::iOS::MapKit::MKMapView*, bool*);
    void(*fp_mapViewRendererForOverlay)(uObject*, ::g::iOS::MapKit::MKMapView*, uObject*, ::g::iOS::MapKit::MKOverlayRenderer**);
    void(*fp_mapViewViewForAnnotation)(uObject*, ::g::iOS::MapKit::MKMapView*, uObject*, ::g::iOS::MapKit::MKAnnotationView**);
    void(*fp_mapViewViewForOverlay)(uObject*, ::g::iOS::MapKit::MKMapView*, uObject*, ::g::iOS::MapKit::MKOverlayView**);
    void(*fp_mapViewWillStartLoadingMap)(uObject*, ::g::iOS::MapKit::MKMapView*);
    void(*fp_mapViewWillStartLocatingUser)(uObject*, ::g::iOS::MapKit::MKMapView*);
    void(*fp_mapViewWillStartRenderingMap)(uObject*, ::g::iOS::MapKit::MKMapView*);
    static void mapViewAnnotationViewCalloutAccessoryControlTapped(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, ::g::iOS::MapKit::MKAnnotationView* view, ::g::iOS::UIKit::UIControl* control) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewAnnotationViewCalloutAccessoryControlTapped(__this, mapView, view, control); }
    static void mapViewAnnotationViewDidChangeDragStateFromOldState(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, ::g::iOS::MapKit::MKAnnotationView* view, uint32_t newState, uint32_t oldState) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewAnnotationViewDidChangeDragStateFromOldState(__this, mapView, view, &newState, &oldState); }
    static void mapViewDidAddAnnotationViews(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, ::g::iOS::Foundation::NSArray* views) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidAddAnnotationViews(__this, mapView, views); }
    static void mapViewDidAddOverlayRenderers(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, ::g::iOS::Foundation::NSArray* renderers) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidAddOverlayRenderers(__this, mapView, renderers); }
    static void mapViewDidAddOverlayViews(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, ::g::iOS::Foundation::NSArray* overlayViews) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidAddOverlayViews(__this, mapView, overlayViews); }
    static void mapViewDidChangeUserTrackingModeAnimated(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, int mode, bool animated) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidChangeUserTrackingModeAnimated(__this, mapView, &mode, &animated); }
    static void mapViewDidDeselectAnnotationView(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, ::g::iOS::MapKit::MKAnnotationView* view) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidDeselectAnnotationView(__this, mapView, view); }
    static void mapViewDidFailLoadingMapWithError(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, ::g::iOS::Foundation::NSError* error) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidFailLoadingMapWithError(__this, mapView, error); }
    static void mapViewDidFailToLocateUserWithError(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, ::g::iOS::Foundation::NSError* error) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidFailToLocateUserWithError(__this, mapView, error); }
    static void mapViewDidFinishLoadingMap(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidFinishLoadingMap(__this, mapView); }
    static void mapViewDidFinishRenderingMapFullyRendered(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, bool fullyRendered) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidFinishRenderingMapFullyRendered(__this, mapView, &fullyRendered); }
    static void mapViewDidSelectAnnotationView(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, ::g::iOS::MapKit::MKAnnotationView* view) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidSelectAnnotationView(__this, mapView, view); }
    static void mapViewDidStopLocatingUser(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidStopLocatingUser(__this, mapView); }
    static void mapViewDidUpdateUserLocation(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, ::g::iOS::MapKit::MKUserLocation* userLocation) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewDidUpdateUserLocation(__this, mapView, userLocation); }
    static void mapViewRegionDidChangeAnimated(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, bool animated) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewRegionDidChangeAnimated(__this, mapView, &animated); }
    static void mapViewRegionWillChangeAnimated(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, bool animated) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewRegionWillChangeAnimated(__this, mapView, &animated); }
    static ::g::iOS::MapKit::MKOverlayRenderer* mapViewRendererForOverlay(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, uObject* overlay) { ::g::iOS::MapKit::MKOverlayRenderer* __retval; return __this.VTable<IMKMapViewDelegate>()->fp_mapViewRendererForOverlay(__this, mapView, overlay, &__retval), __retval; }
    static ::g::iOS::MapKit::MKAnnotationView* mapViewViewForAnnotation(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, uObject* annotation) { ::g::iOS::MapKit::MKAnnotationView* __retval; return __this.VTable<IMKMapViewDelegate>()->fp_mapViewViewForAnnotation(__this, mapView, annotation, &__retval), __retval; }
    static ::g::iOS::MapKit::MKOverlayView* mapViewViewForOverlay(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView, uObject* overlay) { ::g::iOS::MapKit::MKOverlayView* __retval; return __this.VTable<IMKMapViewDelegate>()->fp_mapViewViewForOverlay(__this, mapView, overlay, &__retval), __retval; }
    static void mapViewWillStartLoadingMap(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewWillStartLoadingMap(__this, mapView); }
    static void mapViewWillStartLocatingUser(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewWillStartLocatingUser(__this, mapView); }
    static void mapViewWillStartRenderingMap(const uInterface& __this, ::g::iOS::MapKit::MKMapView* mapView) { __this.VTable<IMKMapViewDelegate>()->fp_mapViewWillStartRenderingMap(__this, mapView); }
};
// }

}}} // ::g::iOS::MapKit
