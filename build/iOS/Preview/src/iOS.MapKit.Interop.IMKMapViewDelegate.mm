// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
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
#include <iOS.MapKit.IMKOverlay.h>
#include <iOS.MapKit.Interop.IMKMapViewDelegate.h>
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
namespace Interop{

// public sealed extern class IMKMapViewDelegate :2652
// {
static void IMKMapViewDelegate_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IMKMapViewDelegate_type, interface0),
        ::g::iOS::MapKit::IMKMapViewDelegate_typeof(), offsetof(IMKMapViewDelegate_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(22,
        new uFunction("mapViewAnnotationViewCalloutAccessoryControlTapped", NULL, (void*)IMKMapViewDelegate__mapViewAnnotationViewCalloutAccessoryControlTapped_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKAnnotationView_typeof(), ::g::iOS::UIKit::UIControl_typeof()),
        new uFunction("mapViewAnnotationViewDidChangeDragStateFromOldState", NULL, (void*)IMKMapViewDelegate__mapViewAnnotationViewDidChangeDragStateFromOldState_fn, 0, false, uVoid_typeof(), 4, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKAnnotationView_typeof(), ::g::iOS::MapKit::MKAnnotationViewDragState_typeof(), ::g::iOS::MapKit::MKAnnotationViewDragState_typeof()),
        new uFunction("mapViewDidAddAnnotationViews", NULL, (void*)IMKMapViewDelegate__mapViewDidAddAnnotationViews_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("mapViewDidAddOverlayRenderers", NULL, (void*)IMKMapViewDelegate__mapViewDidAddOverlayRenderers_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("mapViewDidAddOverlayViews", NULL, (void*)IMKMapViewDelegate__mapViewDidAddOverlayViews_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("mapViewDidChangeUserTrackingModeAnimated", NULL, (void*)IMKMapViewDelegate__mapViewDidChangeUserTrackingModeAnimated_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKUserTrackingMode_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("mapViewDidDeselectAnnotationView", NULL, (void*)IMKMapViewDelegate__mapViewDidDeselectAnnotationView_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKAnnotationView_typeof()),
        new uFunction("mapViewDidFailLoadingMapWithError", NULL, (void*)IMKMapViewDelegate__mapViewDidFailLoadingMapWithError_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::Foundation::NSError_typeof()),
        new uFunction("mapViewDidFailToLocateUserWithError", NULL, (void*)IMKMapViewDelegate__mapViewDidFailToLocateUserWithError_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::Foundation::NSError_typeof()),
        new uFunction("mapViewDidFinishLoadingMap", NULL, (void*)IMKMapViewDelegate__mapViewDidFinishLoadingMap_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapView_typeof()),
        new uFunction("mapViewDidFinishRenderingMapFullyRendered", NULL, (void*)IMKMapViewDelegate__mapViewDidFinishRenderingMapFullyRendered_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("mapViewDidSelectAnnotationView", NULL, (void*)IMKMapViewDelegate__mapViewDidSelectAnnotationView_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKAnnotationView_typeof()),
        new uFunction("mapViewDidStopLocatingUser", NULL, (void*)IMKMapViewDelegate__mapViewDidStopLocatingUser_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapView_typeof()),
        new uFunction("mapViewDidUpdateUserLocation", NULL, (void*)IMKMapViewDelegate__mapViewDidUpdateUserLocation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::MKUserLocation_typeof()),
        new uFunction("mapViewRegionDidChangeAnimated", NULL, (void*)IMKMapViewDelegate__mapViewRegionDidChangeAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("mapViewRegionWillChangeAnimated", NULL, (void*)IMKMapViewDelegate__mapViewRegionWillChangeAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("mapViewRendererForOverlay", NULL, (void*)IMKMapViewDelegate__mapViewRendererForOverlay_fn, 0, false, ::g::iOS::MapKit::MKOverlayRenderer_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("mapViewViewForAnnotation", NULL, (void*)IMKMapViewDelegate__mapViewViewForAnnotation_fn, 0, false, ::g::iOS::MapKit::MKAnnotationView_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::IMKAnnotation_typeof()),
        new uFunction("mapViewViewForOverlay", NULL, (void*)IMKMapViewDelegate__mapViewViewForOverlay_fn, 0, false, ::g::iOS::MapKit::MKOverlayView_typeof(), 2, ::g::iOS::MapKit::MKMapView_typeof(), ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("mapViewWillStartLoadingMap", NULL, (void*)IMKMapViewDelegate__mapViewWillStartLoadingMap_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapView_typeof()),
        new uFunction("mapViewWillStartLocatingUser", NULL, (void*)IMKMapViewDelegate__mapViewWillStartLocatingUser_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapView_typeof()),
        new uFunction("mapViewWillStartRenderingMap", NULL, (void*)IMKMapViewDelegate__mapViewWillStartRenderingMap_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapView_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

IMKMapViewDelegate_type* IMKMapViewDelegate_typeof()
{
    static uSStrong<IMKMapViewDelegate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IMKMapViewDelegate);
    options.TypeSize = sizeof(IMKMapViewDelegate_type);
    type = (IMKMapViewDelegate_type*)uClassType::New("iOS.MapKit.Interop.IMKMapViewDelegate", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IMKMapViewDelegate_build;
    type->interface1.fp_mapViewRegionWillChangeAnimated = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, bool*))IMKMapViewDelegate__mapViewRegionWillChangeAnimated_fn;
    type->interface1.fp_mapViewRegionDidChangeAnimated = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, bool*))IMKMapViewDelegate__mapViewRegionDidChangeAnimated_fn;
    type->interface1.fp_mapViewWillStartLoadingMap = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*))IMKMapViewDelegate__mapViewWillStartLoadingMap_fn;
    type->interface1.fp_mapViewDidFinishLoadingMap = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*))IMKMapViewDelegate__mapViewDidFinishLoadingMap_fn;
    type->interface1.fp_mapViewDidFailLoadingMapWithError = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::Foundation::NSError*))IMKMapViewDelegate__mapViewDidFailLoadingMapWithError_fn;
    type->interface1.fp_mapViewWillStartRenderingMap = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*))IMKMapViewDelegate__mapViewWillStartRenderingMap_fn;
    type->interface1.fp_mapViewDidFinishRenderingMapFullyRendered = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, bool*))IMKMapViewDelegate__mapViewDidFinishRenderingMapFullyRendered_fn;
    type->interface1.fp_mapViewViewForAnnotation = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, uObject*, ::g::iOS::MapKit::MKAnnotationView**))IMKMapViewDelegate__mapViewViewForAnnotation_fn;
    type->interface1.fp_mapViewDidAddAnnotationViews = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::Foundation::NSArray*))IMKMapViewDelegate__mapViewDidAddAnnotationViews_fn;
    type->interface1.fp_mapViewAnnotationViewCalloutAccessoryControlTapped = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::MapKit::MKAnnotationView*, ::g::iOS::UIKit::UIControl*))IMKMapViewDelegate__mapViewAnnotationViewCalloutAccessoryControlTapped_fn;
    type->interface1.fp_mapViewDidSelectAnnotationView = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::MapKit::MKAnnotationView*))IMKMapViewDelegate__mapViewDidSelectAnnotationView_fn;
    type->interface1.fp_mapViewDidDeselectAnnotationView = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::MapKit::MKAnnotationView*))IMKMapViewDelegate__mapViewDidDeselectAnnotationView_fn;
    type->interface1.fp_mapViewWillStartLocatingUser = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*))IMKMapViewDelegate__mapViewWillStartLocatingUser_fn;
    type->interface1.fp_mapViewDidStopLocatingUser = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*))IMKMapViewDelegate__mapViewDidStopLocatingUser_fn;
    type->interface1.fp_mapViewDidUpdateUserLocation = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::MapKit::MKUserLocation*))IMKMapViewDelegate__mapViewDidUpdateUserLocation_fn;
    type->interface1.fp_mapViewDidFailToLocateUserWithError = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::Foundation::NSError*))IMKMapViewDelegate__mapViewDidFailToLocateUserWithError_fn;
    type->interface1.fp_mapViewAnnotationViewDidChangeDragStateFromOldState = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::MapKit::MKAnnotationView*, uint32_t*, uint32_t*))IMKMapViewDelegate__mapViewAnnotationViewDidChangeDragStateFromOldState_fn;
    type->interface1.fp_mapViewDidChangeUserTrackingModeAnimated = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, int*, bool*))IMKMapViewDelegate__mapViewDidChangeUserTrackingModeAnimated_fn;
    type->interface1.fp_mapViewRendererForOverlay = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, uObject*, ::g::iOS::MapKit::MKOverlayRenderer**))IMKMapViewDelegate__mapViewRendererForOverlay_fn;
    type->interface1.fp_mapViewDidAddOverlayRenderers = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::Foundation::NSArray*))IMKMapViewDelegate__mapViewDidAddOverlayRenderers_fn;
    type->interface1.fp_mapViewViewForOverlay = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, uObject*, ::g::iOS::MapKit::MKOverlayView**))IMKMapViewDelegate__mapViewViewForOverlay_fn;
    type->interface1.fp_mapViewDidAddOverlayViews = (void(*)(uObject*, ::g::iOS::MapKit::MKMapView*, ::g::iOS::Foundation::NSArray*))IMKMapViewDelegate__mapViewDidAddOverlayViews_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern void mapViewAnnotationViewCalloutAccessoryControlTapped(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKAnnotationView view, iOS.UIKit.UIControl control) :2688
void IMKMapViewDelegate__mapViewAnnotationViewCalloutAccessoryControlTapped_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_, ::g::iOS::UIKit::UIControl* control_)
{
    __this->mapViewAnnotationViewCalloutAccessoryControlTapped(mapView_, view_, control_);
}

// public extern void mapViewAnnotationViewDidChangeDragStateFromOldState(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKAnnotationView view, iOS.MapKit.MKAnnotationViewDragState newState, iOS.MapKit.MKAnnotationViewDragState oldState) :2709
void IMKMapViewDelegate__mapViewAnnotationViewDidChangeDragStateFromOldState_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_, uint32_t* newState_, uint32_t* oldState_)
{
    __this->mapViewAnnotationViewDidChangeDragStateFromOldState(mapView_, view_, *newState_, *oldState_);
}

// public extern void mapViewDidAddAnnotationViews(iOS.MapKit.MKMapView mapView, iOS.Foundation.NSArray views) :2685
void IMKMapViewDelegate__mapViewDidAddAnnotationViews_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* views_)
{
    __this->mapViewDidAddAnnotationViews(mapView_, views_);
}

// public extern void mapViewDidAddOverlayRenderers(iOS.MapKit.MKMapView mapView, iOS.Foundation.NSArray renderers) :2718
void IMKMapViewDelegate__mapViewDidAddOverlayRenderers_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* renderers_)
{
    __this->mapViewDidAddOverlayRenderers(mapView_, renderers_);
}

// public extern void mapViewDidAddOverlayViews(iOS.MapKit.MKMapView mapView, iOS.Foundation.NSArray overlayViews) :2724
void IMKMapViewDelegate__mapViewDidAddOverlayViews_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* overlayViews_)
{
    __this->mapViewDidAddOverlayViews(mapView_, overlayViews_);
}

// public extern void mapViewDidChangeUserTrackingModeAnimated(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKUserTrackingMode mode, bool animated) :2712
void IMKMapViewDelegate__mapViewDidChangeUserTrackingModeAnimated_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, int* mode_, bool* animated_)
{
    __this->mapViewDidChangeUserTrackingModeAnimated(mapView_, *mode_, *animated_);
}

// public extern void mapViewDidDeselectAnnotationView(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKAnnotationView view) :2694
void IMKMapViewDelegate__mapViewDidDeselectAnnotationView_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_)
{
    __this->mapViewDidDeselectAnnotationView(mapView_, view_);
}

// public extern void mapViewDidFailLoadingMapWithError(iOS.MapKit.MKMapView mapView, iOS.Foundation.NSError error) :2673
void IMKMapViewDelegate__mapViewDidFailLoadingMapWithError_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSError* error_)
{
    __this->mapViewDidFailLoadingMapWithError(mapView_, error_);
}

// public extern void mapViewDidFailToLocateUserWithError(iOS.MapKit.MKMapView mapView, iOS.Foundation.NSError error) :2706
void IMKMapViewDelegate__mapViewDidFailToLocateUserWithError_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSError* error_)
{
    __this->mapViewDidFailToLocateUserWithError(mapView_, error_);
}

// public extern void mapViewDidFinishLoadingMap(iOS.MapKit.MKMapView mapView) :2670
void IMKMapViewDelegate__mapViewDidFinishLoadingMap_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_)
{
    __this->mapViewDidFinishLoadingMap(mapView_);
}

// public extern void mapViewDidFinishRenderingMapFullyRendered(iOS.MapKit.MKMapView mapView, bool fullyRendered) :2679
void IMKMapViewDelegate__mapViewDidFinishRenderingMapFullyRendered_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, bool* fullyRendered_)
{
    __this->mapViewDidFinishRenderingMapFullyRendered(mapView_, *fullyRendered_);
}

// public extern void mapViewDidSelectAnnotationView(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKAnnotationView view) :2691
void IMKMapViewDelegate__mapViewDidSelectAnnotationView_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_)
{
    __this->mapViewDidSelectAnnotationView(mapView_, view_);
}

// public extern void mapViewDidStopLocatingUser(iOS.MapKit.MKMapView mapView) :2700
void IMKMapViewDelegate__mapViewDidStopLocatingUser_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_)
{
    __this->mapViewDidStopLocatingUser(mapView_);
}

// public extern void mapViewDidUpdateUserLocation(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKUserLocation userLocation) :2703
void IMKMapViewDelegate__mapViewDidUpdateUserLocation_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKUserLocation* userLocation_)
{
    __this->mapViewDidUpdateUserLocation(mapView_, userLocation_);
}

// public extern void mapViewRegionDidChangeAnimated(iOS.MapKit.MKMapView mapView, bool animated) :2664
void IMKMapViewDelegate__mapViewRegionDidChangeAnimated_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, bool* animated_)
{
    __this->mapViewRegionDidChangeAnimated(mapView_, *animated_);
}

// public extern void mapViewRegionWillChangeAnimated(iOS.MapKit.MKMapView mapView, bool animated) :2661
void IMKMapViewDelegate__mapViewRegionWillChangeAnimated_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, bool* animated_)
{
    __this->mapViewRegionWillChangeAnimated(mapView_, *animated_);
}

// public extern iOS.MapKit.MKOverlayRenderer mapViewRendererForOverlay(iOS.MapKit.MKMapView mapView, iOS.MapKit.IMKOverlay overlay) :2715
void IMKMapViewDelegate__mapViewRendererForOverlay_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, uObject* overlay_, ::g::iOS::MapKit::MKOverlayRenderer** __retval)
{
    *__retval = __this->mapViewRendererForOverlay(mapView_, overlay_);
}

// public extern iOS.MapKit.MKAnnotationView mapViewViewForAnnotation(iOS.MapKit.MKMapView mapView, iOS.MapKit.IMKAnnotation annotation) :2682
void IMKMapViewDelegate__mapViewViewForAnnotation_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, uObject* annotation_, ::g::iOS::MapKit::MKAnnotationView** __retval)
{
    *__retval = __this->mapViewViewForAnnotation(mapView_, annotation_);
}

// public extern iOS.MapKit.MKOverlayView mapViewViewForOverlay(iOS.MapKit.MKMapView mapView, iOS.MapKit.IMKOverlay overlay) :2721
void IMKMapViewDelegate__mapViewViewForOverlay_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_, uObject* overlay_, ::g::iOS::MapKit::MKOverlayView** __retval)
{
    *__retval = __this->mapViewViewForOverlay(mapView_, overlay_);
}

// public extern void mapViewWillStartLoadingMap(iOS.MapKit.MKMapView mapView) :2667
void IMKMapViewDelegate__mapViewWillStartLoadingMap_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_)
{
    __this->mapViewWillStartLoadingMap(mapView_);
}

// public extern void mapViewWillStartLocatingUser(iOS.MapKit.MKMapView mapView) :2697
void IMKMapViewDelegate__mapViewWillStartLocatingUser_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_)
{
    __this->mapViewWillStartLocatingUser(mapView_);
}

// public extern void mapViewWillStartRenderingMap(iOS.MapKit.MKMapView mapView) :2676
void IMKMapViewDelegate__mapViewWillStartRenderingMap_fn(IMKMapViewDelegate* __this, ::g::iOS::MapKit::MKMapView* mapView_)
{
    __this->mapViewWillStartRenderingMap(mapView_);
}

// public extern void mapViewAnnotationViewCalloutAccessoryControlTapped(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKAnnotationView view, iOS.UIKit.UIControl control) [instance] :2688
void IMKMapViewDelegate::mapViewAnnotationViewCalloutAccessoryControlTapped(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_, ::g::iOS::UIKit::UIControl* control_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewAnnotationViewCalloutAccessoryControlTapped(iOS.MapKit.MKMapView,iOS.MapKit.MKAnnotationView,iOS.UIKit.UIControl)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:annotationView:calloutAccessoryControlTapped:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)control_));
}

// public extern void mapViewAnnotationViewDidChangeDragStateFromOldState(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKAnnotationView view, iOS.MapKit.MKAnnotationViewDragState newState, iOS.MapKit.MKAnnotationViewDragState oldState) [instance] :2709
void IMKMapViewDelegate::mapViewAnnotationViewDidChangeDragStateFromOldState(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_, uint32_t newState_, uint32_t oldState_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewAnnotationViewDidChangeDragStateFromOldState(iOS.MapKit.MKMapView,iOS.MapKit.MKAnnotationView,iOS.MapKit.MKAnnotationViewDragState,iOS.MapKit.MKAnnotationViewDragState)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:annotationView:didChangeDragState:fromOldState:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_),
        ::MKAnnotationViewDragState(newState_),
        ::MKAnnotationViewDragState(oldState_));
}

// public extern void mapViewDidAddAnnotationViews(iOS.MapKit.MKMapView mapView, iOS.Foundation.NSArray views) [instance] :2685
void IMKMapViewDelegate::mapViewDidAddAnnotationViews(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* views_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidAddAnnotationViews(iOS.MapKit.MKMapView,iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:didAddAnnotationViews:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)views_));
}

// public extern void mapViewDidAddOverlayRenderers(iOS.MapKit.MKMapView mapView, iOS.Foundation.NSArray renderers) [instance] :2718
void IMKMapViewDelegate::mapViewDidAddOverlayRenderers(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* renderers_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidAddOverlayRenderers(iOS.MapKit.MKMapView,iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:didAddOverlayRenderers:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)renderers_));
}

// public extern void mapViewDidAddOverlayViews(iOS.MapKit.MKMapView mapView, iOS.Foundation.NSArray overlayViews) [instance] :2724
void IMKMapViewDelegate::mapViewDidAddOverlayViews(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSArray* overlayViews_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidAddOverlayViews(iOS.MapKit.MKMapView,iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:didAddOverlayViews:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlayViews_));
}

// public extern void mapViewDidChangeUserTrackingModeAnimated(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKUserTrackingMode mode, bool animated) [instance] :2712
void IMKMapViewDelegate::mapViewDidChangeUserTrackingModeAnimated(::g::iOS::MapKit::MKMapView* mapView_, int mode_, bool animated_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidChangeUserTrackingModeAnimated(iOS.MapKit.MKMapView,iOS.MapKit.MKUserTrackingMode,bool)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:didChangeUserTrackingMode:animated:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        ::MKUserTrackingMode(mode_),
        (BOOL)animated_);
}

// public extern void mapViewDidDeselectAnnotationView(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKAnnotationView view) [instance] :2694
void IMKMapViewDelegate::mapViewDidDeselectAnnotationView(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidDeselectAnnotationView(iOS.MapKit.MKMapView,iOS.MapKit.MKAnnotationView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:didDeselectAnnotationView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

// public extern void mapViewDidFailLoadingMapWithError(iOS.MapKit.MKMapView mapView, iOS.Foundation.NSError error) [instance] :2673
void IMKMapViewDelegate::mapViewDidFailLoadingMapWithError(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSError* error_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidFailLoadingMapWithError(iOS.MapKit.MKMapView,iOS.Foundation.NSError)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapViewDidFailLoadingMap:withError:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)error_));
}

// public extern void mapViewDidFailToLocateUserWithError(iOS.MapKit.MKMapView mapView, iOS.Foundation.NSError error) [instance] :2706
void IMKMapViewDelegate::mapViewDidFailToLocateUserWithError(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::Foundation::NSError* error_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidFailToLocateUserWithError(iOS.MapKit.MKMapView,iOS.Foundation.NSError)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:didFailToLocateUserWithError:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)error_));
}

// public extern void mapViewDidFinishLoadingMap(iOS.MapKit.MKMapView mapView) [instance] :2670
void IMKMapViewDelegate::mapViewDidFinishLoadingMap(::g::iOS::MapKit::MKMapView* mapView_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidFinishLoadingMap(iOS.MapKit.MKMapView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapViewDidFinishLoadingMap:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_));
}

// public extern void mapViewDidFinishRenderingMapFullyRendered(iOS.MapKit.MKMapView mapView, bool fullyRendered) [instance] :2679
void IMKMapViewDelegate::mapViewDidFinishRenderingMapFullyRendered(::g::iOS::MapKit::MKMapView* mapView_, bool fullyRendered_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidFinishRenderingMapFullyRendered(iOS.MapKit.MKMapView,bool)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapViewDidFinishRenderingMap:fullyRendered:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        (BOOL)fullyRendered_);
}

// public extern void mapViewDidSelectAnnotationView(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKAnnotationView view) [instance] :2691
void IMKMapViewDelegate::mapViewDidSelectAnnotationView(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKAnnotationView* view_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidSelectAnnotationView(iOS.MapKit.MKMapView,iOS.MapKit.MKAnnotationView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:didSelectAnnotationView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

// public extern void mapViewDidStopLocatingUser(iOS.MapKit.MKMapView mapView) [instance] :2700
void IMKMapViewDelegate::mapViewDidStopLocatingUser(::g::iOS::MapKit::MKMapView* mapView_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidStopLocatingUser(iOS.MapKit.MKMapView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapViewDidStopLocatingUser:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_));
}

// public extern void mapViewDidUpdateUserLocation(iOS.MapKit.MKMapView mapView, iOS.MapKit.MKUserLocation userLocation) [instance] :2703
void IMKMapViewDelegate::mapViewDidUpdateUserLocation(::g::iOS::MapKit::MKMapView* mapView_, ::g::iOS::MapKit::MKUserLocation* userLocation_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewDidUpdateUserLocation(iOS.MapKit.MKMapView,iOS.MapKit.MKUserLocation)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:didUpdateUserLocation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)userLocation_));
}

// public extern void mapViewRegionDidChangeAnimated(iOS.MapKit.MKMapView mapView, bool animated) [instance] :2664
void IMKMapViewDelegate::mapViewRegionDidChangeAnimated(::g::iOS::MapKit::MKMapView* mapView_, bool animated_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewRegionDidChangeAnimated(iOS.MapKit.MKMapView,bool)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:regionDidChangeAnimated:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        (BOOL)animated_);
}

// public extern void mapViewRegionWillChangeAnimated(iOS.MapKit.MKMapView mapView, bool animated) [instance] :2661
void IMKMapViewDelegate::mapViewRegionWillChangeAnimated(::g::iOS::MapKit::MKMapView* mapView_, bool animated_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewRegionWillChangeAnimated(iOS.MapKit.MKMapView,bool)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapView:regionWillChangeAnimated:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        (BOOL)animated_);
}

// public extern iOS.MapKit.MKOverlayRenderer mapViewRendererForOverlay(iOS.MapKit.MKMapView mapView, iOS.MapKit.IMKOverlay overlay) [instance] :2715
::g::iOS::MapKit::MKOverlayRenderer* IMKMapViewDelegate::mapViewRendererForOverlay(::g::iOS::MapKit::MKMapView* mapView_, uObject* overlay_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewRendererForOverlay(iOS.MapKit.MKMapView,iOS.MapKit.IMKOverlay)");
    ::MKOverlayRenderer* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKOverlayRenderer*, @selector(mapView:rendererForOverlay:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()));
    return (::g::iOS::MapKit::MKOverlayRenderer*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::MapKit::MKOverlayRenderer_typeof());
}

// public extern iOS.MapKit.MKAnnotationView mapViewViewForAnnotation(iOS.MapKit.MKMapView mapView, iOS.MapKit.IMKAnnotation annotation) [instance] :2682
::g::iOS::MapKit::MKAnnotationView* IMKMapViewDelegate::mapViewViewForAnnotation(::g::iOS::MapKit::MKMapView* mapView_, uObject* annotation_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewViewForAnnotation(iOS.MapKit.MKMapView,iOS.MapKit.IMKAnnotation)");
    ::MKAnnotationView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKAnnotationView*, @selector(mapView:viewForAnnotation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)annotation_, ::g::iOS::MapKit::IMKAnnotation_typeof()));
    return (::g::iOS::MapKit::MKAnnotationView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::MapKit::MKAnnotationView_typeof());
}

// public extern iOS.MapKit.MKOverlayView mapViewViewForOverlay(iOS.MapKit.MKMapView mapView, iOS.MapKit.IMKOverlay overlay) [instance] :2721
::g::iOS::MapKit::MKOverlayView* IMKMapViewDelegate::mapViewViewForOverlay(::g::iOS::MapKit::MKMapView* mapView_, uObject* overlay_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewViewForOverlay(iOS.MapKit.MKMapView,iOS.MapKit.IMKOverlay)");
    ::MKOverlayView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKOverlayView*, @selector(mapView:viewForOverlay:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()));
    return (::g::iOS::MapKit::MKOverlayView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::MapKit::MKOverlayView_typeof());
}

// public extern void mapViewWillStartLoadingMap(iOS.MapKit.MKMapView mapView) [instance] :2667
void IMKMapViewDelegate::mapViewWillStartLoadingMap(::g::iOS::MapKit::MKMapView* mapView_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewWillStartLoadingMap(iOS.MapKit.MKMapView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapViewWillStartLoadingMap:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_));
}

// public extern void mapViewWillStartLocatingUser(iOS.MapKit.MKMapView mapView) [instance] :2697
void IMKMapViewDelegate::mapViewWillStartLocatingUser(::g::iOS::MapKit::MKMapView* mapView_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewWillStartLocatingUser(iOS.MapKit.MKMapView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapViewWillStartLocatingUser:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_));
}

// public extern void mapViewWillStartRenderingMap(iOS.MapKit.MKMapView mapView) [instance] :2676
void IMKMapViewDelegate::mapViewWillStartRenderingMap(::g::iOS::MapKit::MKMapView* mapView_)
{
    uStackFrame __("iOS.MapKit.Interop.IMKMapViewDelegate", "mapViewWillStartRenderingMap(iOS.MapKit.MKMapView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(mapViewWillStartRenderingMap:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mapView_));
}
// }

}}}} // ::g::iOS::MapKit::Interop
