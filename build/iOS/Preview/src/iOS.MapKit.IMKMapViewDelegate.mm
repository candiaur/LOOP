// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE MKMapViewDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::IMKMapViewDelegate_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSError.h>
#include <iOS.MapKit.IMKAnnotation.h>
#include <iOS.MapKit.IMKMapViewDelegate.h>
#include <iOS.MapKit.IMKOverlay.h>
#include <iOS.MapKit.MKAnnotationView.h>
#include <iOS.MapKit.MKAnnotationViewDragState.h>
#include <iOS.MapKit.MKMapView.h>
#include <iOS.MapKit.MKOverlayRenderer.h>
#include <iOS.MapKit.MKOverlayView.h>
#include <iOS.MapKit.MKUserLocation.h>
#include <iOS.MapKit.MKUserTrackingMode.h>
#include <iOS.UIKit.UIControl.h>
#include <Uno.Bool.h>

namespace g{
namespace iOS{
namespace MapKit{

// public abstract extern interface IMKMapViewDelegate :1866
// {
uInterfaceType* IMKMapViewDelegate_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("iOS.MapKit.IMKMapViewDelegate", 0, 0);
    type->Reflection.SetFunctions(22,
        new uFunction("mapViewAnnotationViewCalloutAccessoryControlTapped", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewAnnotationViewCalloutAccessoryControlTapped), false, uVoid_typeof(), 3, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKAnnotationView_typeof(), ::g::iOS::UIKit::UIControl_typeof()),
        new uFunction("mapViewAnnotationViewDidChangeDragStateFromOldState", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewAnnotationViewDidChangeDragStateFromOldState), false, uVoid_typeof(), 4, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKAnnotationView_typeof(), ::g::iOS::MapKit::MKAnnotationViewDragState_typeof(), ::g::iOS::MapKit::MKAnnotationViewDragState_typeof()),
        new uFunction("mapViewDidAddAnnotationViews", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidAddAnnotationViews), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("mapViewDidAddOverlayRenderers", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidAddOverlayRenderers), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("mapViewDidAddOverlayViews", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidAddOverlayViews), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("mapViewDidChangeUserTrackingModeAnimated", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidChangeUserTrackingModeAnimated), false, uVoid_typeof(), 3, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKUserTrackingMode_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("mapViewDidDeselectAnnotationView", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidDeselectAnnotationView), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKAnnotationView_typeof()),
        new uFunction("mapViewDidFailLoadingMapWithError", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidFailLoadingMapWithError), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::Foundation::NSError_typeof()),
        new uFunction("mapViewDidFailToLocateUserWithError", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidFailToLocateUserWithError), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::Foundation::NSError_typeof()),
        new uFunction("mapViewDidFinishLoadingMap", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidFinishLoadingMap), false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapView_typeof()),
        new uFunction("mapViewDidFinishRenderingMapFullyRendered", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidFinishRenderingMapFullyRendered), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("mapViewDidSelectAnnotationView", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidSelectAnnotationView), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKAnnotationView_typeof()),
        new uFunction("mapViewDidStopLocatingUser", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidStopLocatingUser), false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapView_typeof()),
        new uFunction("mapViewDidUpdateUserLocation", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewDidUpdateUserLocation), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKUserLocation_typeof()),
        new uFunction("mapViewRegionDidChangeAnimated", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewRegionDidChangeAnimated), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("mapViewRegionWillChangeAnimated", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewRegionWillChangeAnimated), false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("mapViewRendererForOverlay", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewRendererForOverlay), false, ::g::iOS::MapKit::MKOverlayRenderer_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("mapViewViewForAnnotation", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewViewForAnnotation), false, ::g::iOS::MapKit::MKAnnotationView_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::IMKAnnotation_typeof()),
        new uFunction("mapViewViewForOverlay", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewViewForOverlay), false, ::g::iOS::MapKit::MKOverlayView_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("mapViewWillStartLoadingMap", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewWillStartLoadingMap), false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapView_typeof()),
        new uFunction("mapViewWillStartLocatingUser", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewWillStartLocatingUser), false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapView_typeof()),
        new uFunction("mapViewWillStartRenderingMap", NULL, NULL, offsetof(IMKMapViewDelegate, fp_mapViewWillStartRenderingMap), false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapView_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::MapKit
