// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE MKMapView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::MapKit::MKMapView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::MKMapView_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSSet.h>
#include <iOS.MapKit.IMKAnnotation.h>
#include <iOS.MapKit.IMKMapViewDelegate.h>
#include <iOS.MapKit.IMKOverlay.h>
#include <iOS.MapKit.MKAnnotationView.h>
#include <iOS.MapKit.MKMapCamera.h>
#include <iOS.MapKit.MKMapType.h>
#include <iOS.MapKit.MKMapView.h>
#include <iOS.MapKit.MKOverlayLevel.h>
#include <iOS.MapKit.MKOverlayRenderer.h>
#include <iOS.MapKit.MKOverlayView.h>
#include <iOS.MapKit.MKUserLocation.h>
#include <iOS.MapKit.MKUserTrackingMode.h>
#include <ObjC.ID.h>
#include <Uno.Bool.h>
#include <Uno.String.h>
#include <Uno.ULong.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreLocation.CLLocationCoordinate2D.h>
#include <iOS.MapKit.MKCoordinateRegion.h>
#include <iOS.MapKit.MKMapRect.h>
#include <iOS.UIKit.UIEdgeInsets.h>

namespace g{
namespace iOS{
namespace MapKit{

// public extern class MKMapView :29889
// {
static void MKMapView_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(110,
        new uFunction("addAnnotation", NULL, (void*)MKMapView__addAnnotation_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::IMKAnnotation_typeof()),
        new uFunction("addAnnotations", NULL, (void*)MKMapView__addAnnotations_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("addOverlay", NULL, (void*)MKMapView__addOverlay_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("addOverlayLevel", NULL, (void*)MKMapView__addOverlayLevel_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::IMKOverlay_typeof(), ::g::iOS::MapKit::MKOverlayLevel_typeof()),
        new uFunction("addOverlays", NULL, (void*)MKMapView__addOverlays_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("addOverlaysLevel", NULL, (void*)MKMapView__addOverlaysLevel_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::Foundation::NSArray_typeof(), ::g::iOS::MapKit::MKOverlayLevel_typeof()),
        new uFunction("annotations", NULL, (void*)MKMapView__annotations_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("get_Annotations", NULL, (void*)MKMapView__get_Annotations_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("annotationsInMapRect", NULL, (void*)MKMapView__annotationsInMapRect_fn, 0, false, ::g::iOS::Foundation::NSSet_typeof(), 1, ::g::iOS::MapKit::MKMapRect_typeof()),
        new uFunction("annotationVisibleRect", NULL, (void*)MKMapView__annotationVisibleRect_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("get_AnnotationVisibleRect", NULL, (void*)MKMapView__get_AnnotationVisibleRect_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("camera", NULL, (void*)MKMapView__camera_fn, 0, false, ::g::iOS::MapKit::MKMapCamera_typeof(), 0),
        new uFunction("get_Camera", NULL, (void*)MKMapView__get_Camera_fn, 0, false, ::g::iOS::MapKit::MKMapCamera_typeof(), 0),
        new uFunction("set_Camera", NULL, (void*)MKMapView__set_Camera_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapCamera_typeof()),
        new uFunction("centerCoordinate", NULL, (void*)MKMapView__centerCoordinate_fn, 0, false, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof(), 0),
        new uFunction("get_CenterCoordinate", NULL, (void*)MKMapView__get_CenterCoordinate_fn, 0, false, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof(), 0),
        new uFunction("set_CenterCoordinate", NULL, (void*)MKMapView__set_CenterCoordinate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof()),
        new uFunction("convertCoordinateToPointToView", NULL, (void*)MKMapView__convertCoordinateToPointToView_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 2, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof(), ::g::iOS::UIKit::UIView_typeof()),
        new uFunction("convertPointToCoordinateFromView", NULL, (void*)MKMapView__convertPointToCoordinateFromView_fn, 0, false, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof(), 2, ::g::iOS::CoreGraphics::CGPoint_typeof(), ::g::iOS::UIKit::UIView_typeof()),
        new uFunction("convertRectToRegionFromView", NULL, (void*)MKMapView__convertRectToRegionFromView_fn, 0, false, ::g::iOS::MapKit::MKCoordinateRegion_typeof(), 2, ::g::iOS::CoreGraphics::CGRect_typeof(), ::g::iOS::UIKit::UIView_typeof()),
        new uFunction("convertRegionToRectToView", NULL, (void*)MKMapView__convertRegionToRectToView_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 2, ::g::iOS::MapKit::MKCoordinateRegion_typeof(), ::g::iOS::UIKit::UIView_typeof()),
        new uFunction("get_Delegate", NULL, (void*)MKMapView__get_Delegate_fn, 0, false, ::g::iOS::MapKit::IMKMapViewDelegate_typeof(), 0),
        new uFunction("set_Delegate", NULL, (void*)MKMapView__set_Delegate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()),
        new uFunction("delegate_", NULL, (void*)MKMapView__delegate__fn, 0, false, ::g::iOS::MapKit::IMKMapViewDelegate_typeof(), 0),
        new uFunction("dequeueReusableAnnotationViewWithIdentifier", NULL, (void*)MKMapView__dequeueReusableAnnotationViewWithIdentifier_fn, 0, false, ::g::iOS::MapKit::MKAnnotationView_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("deselectAnnotationAnimated", NULL, (void*)MKMapView__deselectAnnotationAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::IMKAnnotation_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("exchangeOverlayAtIndexWithOverlayAtIndex", NULL, (void*)MKMapView__exchangeOverlayAtIndexWithOverlayAtIndex_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::ULong_typeof(), ::g::Uno::ULong_typeof()),
        new uFunction("exchangeOverlayWithOverlay", NULL, (void*)MKMapView__exchangeOverlayWithOverlay_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::IMKOverlay_typeof(), ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("insertOverlayAboveOverlay", NULL, (void*)MKMapView__insertOverlayAboveOverlay_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::IMKOverlay_typeof(), ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("insertOverlayAtIndex", NULL, (void*)MKMapView__insertOverlayAtIndex_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::IMKOverlay_typeof(), ::g::Uno::ULong_typeof()),
        new uFunction("insertOverlayAtIndexLevel", NULL, (void*)MKMapView__insertOverlayAtIndexLevel_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::MapKit::IMKOverlay_typeof(), ::g::Uno::ULong_typeof(), ::g::iOS::MapKit::MKOverlayLevel_typeof()),
        new uFunction("insertOverlayBelowOverlay", NULL, (void*)MKMapView__insertOverlayBelowOverlay_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::IMKOverlay_typeof(), ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("isPitchEnabled", NULL, (void*)MKMapView__isPitchEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isRotateEnabled", NULL, (void*)MKMapView__isRotateEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isScrollEnabled", NULL, (void*)MKMapView__isScrollEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isUserLocationVisible", NULL, (void*)MKMapView__isUserLocationVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isZoomEnabled", NULL, (void*)MKMapView__isZoomEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("mapRectThatFits", NULL, (void*)MKMapView__mapRectThatFits_fn, 0, false, ::g::iOS::MapKit::MKMapRect_typeof(), 1, ::g::iOS::MapKit::MKMapRect_typeof()),
        new uFunction("mapRectThatFitsEdgePadding", NULL, (void*)MKMapView__mapRectThatFitsEdgePadding_fn, 0, false, ::g::iOS::MapKit::MKMapRect_typeof(), 2, ::g::iOS::MapKit::MKMapRect_typeof(), ::g::iOS::UIKit::UIEdgeInsets_typeof()),
        new uFunction("mapType", NULL, (void*)MKMapView__mapType_fn, 0, false, ::g::iOS::MapKit::MKMapType_typeof(), 0),
        new uFunction("get_MapType", NULL, (void*)MKMapView__get_MapType_fn, 0, false, ::g::iOS::MapKit::MKMapType_typeof(), 0),
        new uFunction("set_MapType", NULL, (void*)MKMapView__set_MapType_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapType_typeof()),
        new uFunction(".ctor", NULL, (void*)MKMapView__New9_fn, 0, true, MKMapView_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)MKMapView__New10_fn, 0, true, MKMapView_typeof(), 1, ::g::ObjC::ID_typeof()),
        new uFunction("overlays", NULL, (void*)MKMapView__overlays_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("get_Overlays", NULL, (void*)MKMapView__get_Overlays_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("overlaysInLevel", NULL, (void*)MKMapView__overlaysInLevel_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 1, ::g::iOS::MapKit::MKOverlayLevel_typeof()),
        new uFunction("get_PitchEnabled", NULL, (void*)MKMapView__get_PitchEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_PitchEnabled", NULL, (void*)MKMapView__set_PitchEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("region", NULL, (void*)MKMapView__region_fn, 0, false, ::g::iOS::MapKit::MKCoordinateRegion_typeof(), 0),
        new uFunction("get_Region", NULL, (void*)MKMapView__get_Region_fn, 0, false, ::g::iOS::MapKit::MKCoordinateRegion_typeof(), 0),
        new uFunction("set_Region", NULL, (void*)MKMapView__set_Region_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKCoordinateRegion_typeof()),
        new uFunction("regionThatFits", NULL, (void*)MKMapView__regionThatFits_fn, 0, false, ::g::iOS::MapKit::MKCoordinateRegion_typeof(), 1, ::g::iOS::MapKit::MKCoordinateRegion_typeof()),
        new uFunction("removeAnnotation", NULL, (void*)MKMapView__removeAnnotation_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::IMKAnnotation_typeof()),
        new uFunction("removeAnnotations", NULL, (void*)MKMapView__removeAnnotations_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("removeOverlay", NULL, (void*)MKMapView__removeOverlay_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("removeOverlays", NULL, (void*)MKMapView__removeOverlays_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("rendererForOverlay", NULL, (void*)MKMapView__rendererForOverlay_fn, 0, false, ::g::iOS::MapKit::MKOverlayRenderer_typeof(), 1, ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("get_RotateEnabled", NULL, (void*)MKMapView__get_RotateEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_RotateEnabled", NULL, (void*)MKMapView__set_RotateEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ScrollEnabled", NULL, (void*)MKMapView__get_ScrollEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ScrollEnabled", NULL, (void*)MKMapView__set_ScrollEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("selectAnnotationAnimated", NULL, (void*)MKMapView__selectAnnotationAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::IMKAnnotation_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("selectedAnnotations", NULL, (void*)MKMapView__selectedAnnotations_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("get_SelectedAnnotations", NULL, (void*)MKMapView__get_SelectedAnnotations_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("set_SelectedAnnotations", NULL, (void*)MKMapView__set_SelectedAnnotations_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("setCamera", NULL, (void*)MKMapView__setCamera_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapCamera_typeof()),
        new uFunction("setCameraAnimated", NULL, (void*)MKMapView__setCameraAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapCamera_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setCenterCoordinate", NULL, (void*)MKMapView__setCenterCoordinate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof()),
        new uFunction("setCenterCoordinateAnimated", NULL, (void*)MKMapView__setCenterCoordinateAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setDelegate", NULL, (void*)MKMapView__setDelegate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()),
        new uFunction("setMapType", NULL, (void*)MKMapView__setMapType_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapType_typeof()),
        new uFunction("setPitchEnabled", NULL, (void*)MKMapView__setPitchEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setRegion", NULL, (void*)MKMapView__setRegion_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKCoordinateRegion_typeof()),
        new uFunction("setRegionAnimated", NULL, (void*)MKMapView__setRegionAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKCoordinateRegion_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setRotateEnabled", NULL, (void*)MKMapView__setRotateEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setScrollEnabled", NULL, (void*)MKMapView__setScrollEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setSelectedAnnotations", NULL, (void*)MKMapView__setSelectedAnnotations_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("setShowsBuildings", NULL, (void*)MKMapView__setShowsBuildings_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setShowsPointsOfInterest", NULL, (void*)MKMapView__setShowsPointsOfInterest_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setShowsUserLocation", NULL, (void*)MKMapView__setShowsUserLocation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setUserTrackingMode", NULL, (void*)MKMapView__setUserTrackingMode_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKUserTrackingMode_typeof()),
        new uFunction("setUserTrackingModeAnimated", NULL, (void*)MKMapView__setUserTrackingModeAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKUserTrackingMode_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setVisibleMapRect", NULL, (void*)MKMapView__setVisibleMapRect_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapRect_typeof()),
        new uFunction("setVisibleMapRectAnimated", NULL, (void*)MKMapView__setVisibleMapRectAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::MapKit::MKMapRect_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setVisibleMapRectEdgePaddingAnimated", NULL, (void*)MKMapView__setVisibleMapRectEdgePaddingAnimated_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::MapKit::MKMapRect_typeof(), ::g::iOS::UIKit::UIEdgeInsets_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setZoomEnabled", NULL, (void*)MKMapView__setZoomEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("showAnnotationsAnimated", NULL, (void*)MKMapView__showAnnotationsAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::Foundation::NSArray_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("showsBuildings", NULL, (void*)MKMapView__showsBuildings_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ShowsBuildings", NULL, (void*)MKMapView__get_ShowsBuildings_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowsBuildings", NULL, (void*)MKMapView__set_ShowsBuildings_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("showsPointsOfInterest", NULL, (void*)MKMapView__showsPointsOfInterest_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ShowsPointsOfInterest", NULL, (void*)MKMapView__get_ShowsPointsOfInterest_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowsPointsOfInterest", NULL, (void*)MKMapView__set_ShowsPointsOfInterest_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("showsUserLocation", NULL, (void*)MKMapView__showsUserLocation_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ShowsUserLocation", NULL, (void*)MKMapView__get_ShowsUserLocation_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowsUserLocation", NULL, (void*)MKMapView__set_ShowsUserLocation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("userLocation", NULL, (void*)MKMapView__userLocation_fn, 0, false, ::g::iOS::MapKit::MKUserLocation_typeof(), 0),
        new uFunction("get_UserLocation", NULL, (void*)MKMapView__get_UserLocation_fn, 0, false, ::g::iOS::MapKit::MKUserLocation_typeof(), 0),
        new uFunction("get_UserLocationVisible", NULL, (void*)MKMapView__get_UserLocationVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("userTrackingMode", NULL, (void*)MKMapView__userTrackingMode_fn, 0, false, ::g::iOS::MapKit::MKUserTrackingMode_typeof(), 0),
        new uFunction("get_UserTrackingMode", NULL, (void*)MKMapView__get_UserTrackingMode_fn, 0, false, ::g::iOS::MapKit::MKUserTrackingMode_typeof(), 0),
        new uFunction("set_UserTrackingMode", NULL, (void*)MKMapView__set_UserTrackingMode_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKUserTrackingMode_typeof()),
        new uFunction("viewForAnnotation", NULL, (void*)MKMapView__viewForAnnotation_fn, 0, false, ::g::iOS::MapKit::MKAnnotationView_typeof(), 1, ::g::iOS::MapKit::IMKAnnotation_typeof()),
        new uFunction("viewForOverlay", NULL, (void*)MKMapView__viewForOverlay_fn, 0, false, ::g::iOS::MapKit::MKOverlayView_typeof(), 1, ::g::iOS::MapKit::IMKOverlay_typeof()),
        new uFunction("visibleMapRect", NULL, (void*)MKMapView__visibleMapRect_fn, 0, false, ::g::iOS::MapKit::MKMapRect_typeof(), 0),
        new uFunction("get_VisibleMapRect", NULL, (void*)MKMapView__get_VisibleMapRect_fn, 0, false, ::g::iOS::MapKit::MKMapRect_typeof(), 0),
        new uFunction("set_VisibleMapRect", NULL, (void*)MKMapView__set_VisibleMapRect_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::MapKit::MKMapRect_typeof()),
        new uFunction("get_ZoomEnabled", NULL, (void*)MKMapView__get_ZoomEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ZoomEnabled", NULL, (void*)MKMapView__set_ZoomEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::UIKit::UIView_type* MKMapView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MKMapView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.MapKit.MKMapView", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_build_ = MKMapView_build;
    type->fp_ctor_ = (void*)MKMapView__New9_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public MKMapView() :29892
void MKMapView__ctor_8_fn(MKMapView* __this)
{
    __this->ctor_8();
}

// public MKMapView(ObjC.ID __id) :29894
void MKMapView__ctor_9_fn(MKMapView* __this, ::id* __id1)
{
    __this->ctor_9(*__id1);
}

// public extern void addAnnotation(iOS.MapKit.IMKAnnotation annotation) :30054
void MKMapView__addAnnotation_fn(MKMapView* __this, uObject* annotation_)
{
    __this->addAnnotation(annotation_);
}

// public extern void addAnnotations(iOS.Foundation.NSArray annotations) :30057
void MKMapView__addAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* annotations_)
{
    __this->addAnnotations(annotations_);
}

// public extern void addOverlay(iOS.MapKit.IMKOverlay overlay) :30219
void MKMapView__addOverlay_fn(MKMapView* __this, uObject* overlay_)
{
    __this->addOverlay(overlay_);
}

// public extern void addOverlayLevel(iOS.MapKit.IMKOverlay overlay, iOS.MapKit.MKOverlayLevel level) :30186
void MKMapView__addOverlayLevel_fn(MKMapView* __this, uObject* overlay_, int* level_)
{
    __this->addOverlayLevel(overlay_, *level_);
}

// public extern void addOverlays(iOS.Foundation.NSArray overlays) :30222
void MKMapView__addOverlays_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* overlays_)
{
    __this->addOverlays(overlays_);
}

// public extern void addOverlaysLevel(iOS.Foundation.NSArray overlays, iOS.MapKit.MKOverlayLevel level) :30189
void MKMapView__addOverlaysLevel_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* overlays_, int* level_)
{
    __this->addOverlaysLevel(overlays_, *level_);
}

// public extern iOS.Foundation.NSArray annotations() :30174
void MKMapView__annotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->annotations();
}

// public iOS.Foundation.NSArray get_Annotations() :29995
void MKMapView__get_Annotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->Annotations();
}

// public extern iOS.Foundation.NSSet annotationsInMapRect(iOS.MapKit.MKMapRect mapRect) :30066
void MKMapView__annotationsInMapRect_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, ::g::iOS::Foundation::NSSet** __retval)
{
    *__retval = __this->annotationsInMapRect(*mapRect_);
}

// public extern iOS.CoreGraphics.CGRect annotationVisibleRect() :30183
void MKMapView__annotationVisibleRect_fn(MKMapView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->annotationVisibleRect();
}

// public iOS.CoreGraphics.CGRect get_AnnotationVisibleRect() :30006
void MKMapView__get_AnnotationVisibleRect_fn(MKMapView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->AnnotationVisibleRect();
}

// public extern iOS.MapKit.MKMapCamera camera() :30114
void MKMapView__camera_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapCamera** __retval)
{
    *__retval = __this->camera();
}

// public iOS.MapKit.MKMapCamera get_Camera() :29931
void MKMapView__get_Camera_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapCamera** __retval)
{
    *__retval = __this->Camera();
}

// public void set_Camera(iOS.MapKit.MKMapCamera value) :29932
void MKMapView__set_Camera_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapCamera* value)
{
    __this->Camera(value);
}

// public extern iOS.CoreLocation.CLLocationCoordinate2D centerCoordinate() :30102
void MKMapView__centerCoordinate_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval)
{
    *__retval = __this->centerCoordinate();
}

// public iOS.CoreLocation.CLLocationCoordinate2D get_CenterCoordinate() :29919
void MKMapView__get_CenterCoordinate_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval)
{
    *__retval = __this->CenterCoordinate();
}

// public void set_CenterCoordinate(iOS.CoreLocation.CLLocationCoordinate2D value) :29920
void MKMapView__set_CenterCoordinate_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* value)
{
    __this->CenterCoordinate(*value);
}

// public extern iOS.CoreGraphics.CGPoint convertCoordinateToPointToView(iOS.CoreLocation.CLLocationCoordinate2D coordinate, iOS.UIKit.UIView view) :30039
void MKMapView__convertCoordinateToPointToView_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* coordinate_, ::g::iOS::UIKit::UIView* view_, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->convertCoordinateToPointToView(*coordinate_, view_);
}

// public extern iOS.CoreLocation.CLLocationCoordinate2D convertPointToCoordinateFromView(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UIView view) :30042
void MKMapView__convertPointToCoordinateFromView_fn(MKMapView* __this, ::g::iOS::CoreGraphics::CGPoint* point_, ::g::iOS::UIKit::UIView* view_, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval)
{
    *__retval = __this->convertPointToCoordinateFromView(*point_, view_);
}

// public extern iOS.MapKit.MKCoordinateRegion convertRectToRegionFromView(iOS.CoreGraphics.CGRect rect, iOS.UIKit.UIView view) :30048
void MKMapView__convertRectToRegionFromView_fn(MKMapView* __this, ::g::iOS::CoreGraphics::CGRect* rect_, ::g::iOS::UIKit::UIView* view_, ::g::iOS::MapKit::MKCoordinateRegion* __retval)
{
    *__retval = __this->convertRectToRegionFromView(*rect_, view_);
}

// public extern iOS.CoreGraphics.CGRect convertRegionToRectToView(iOS.MapKit.MKCoordinateRegion region, iOS.UIKit.UIView view) :30045
void MKMapView__convertRegionToRectToView_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* region_, ::g::iOS::UIKit::UIView* view_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->convertRegionToRectToView(*region_, view_);
}

// public iOS.MapKit.IMKMapViewDelegate get_Delegate() :29901
void MKMapView__get_Delegate_fn(MKMapView* __this, uObject** __retval)
{
    *__retval = __this->Delegate();
}

// public void set_Delegate(iOS.MapKit.IMKMapViewDelegate value) :29902
void MKMapView__set_Delegate_fn(MKMapView* __this, uObject* value)
{
    __this->Delegate(value);
}

// public extern iOS.MapKit.IMKMapViewDelegate delegate_() :30084
void MKMapView__delegate__fn(MKMapView* __this, uObject** __retval)
{
    *__retval = __this->delegate_();
}

// public extern iOS.MapKit.MKAnnotationView dequeueReusableAnnotationViewWithIdentifier(string identifier) :30072
void MKMapView__dequeueReusableAnnotationViewWithIdentifier_fn(MKMapView* __this, uString* identifier_, ::g::iOS::MapKit::MKAnnotationView** __retval)
{
    *__retval = __this->dequeueReusableAnnotationViewWithIdentifier(identifier_);
}

// public extern void deselectAnnotationAnimated(iOS.MapKit.IMKAnnotation annotation, bool animated) :30078
void MKMapView__deselectAnnotationAnimated_fn(MKMapView* __this, uObject* annotation_, bool* animated_)
{
    __this->deselectAnnotationAnimated(annotation_, *animated_);
}

// public extern void exchangeOverlayAtIndexWithOverlayAtIndex(ulong index1, ulong index2) :30228
void MKMapView__exchangeOverlayAtIndexWithOverlayAtIndex_fn(MKMapView* __this, uint64_t* index1_, uint64_t* index2_)
{
    __this->exchangeOverlayAtIndexWithOverlayAtIndex(*index1_, *index2_);
}

// public extern void exchangeOverlayWithOverlay(iOS.MapKit.IMKOverlay overlay1, iOS.MapKit.IMKOverlay overlay2) :30207
void MKMapView__exchangeOverlayWithOverlay_fn(MKMapView* __this, uObject* overlay1_, uObject* overlay2_)
{
    __this->exchangeOverlayWithOverlay(overlay1_, overlay2_);
}

// public extern void insertOverlayAboveOverlay(iOS.MapKit.IMKOverlay overlay, iOS.MapKit.IMKOverlay sibling) :30201
void MKMapView__insertOverlayAboveOverlay_fn(MKMapView* __this, uObject* overlay_, uObject* sibling_)
{
    __this->insertOverlayAboveOverlay(overlay_, sibling_);
}

// public extern void insertOverlayAtIndex(iOS.MapKit.IMKOverlay overlay, ulong index) :30225
void MKMapView__insertOverlayAtIndex_fn(MKMapView* __this, uObject* overlay_, uint64_t* index_)
{
    __this->insertOverlayAtIndex(overlay_, *index_);
}

// public extern void insertOverlayAtIndexLevel(iOS.MapKit.IMKOverlay overlay, ulong index, iOS.MapKit.MKOverlayLevel level) :30198
void MKMapView__insertOverlayAtIndexLevel_fn(MKMapView* __this, uObject* overlay_, uint64_t* index_, int* level_)
{
    __this->insertOverlayAtIndexLevel(overlay_, *index_, *level_);
}

// public extern void insertOverlayBelowOverlay(iOS.MapKit.IMKOverlay overlay, iOS.MapKit.IMKOverlay sibling) :30204
void MKMapView__insertOverlayBelowOverlay_fn(MKMapView* __this, uObject* overlay_, uObject* sibling_)
{
    __this->insertOverlayBelowOverlay(overlay_, sibling_);
}

// public extern bool isPitchEnabled() :30138
void MKMapView__isPitchEnabled_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->isPitchEnabled();
}

// public extern bool isRotateEnabled() :30132
void MKMapView__isRotateEnabled_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->isRotateEnabled();
}

// public extern bool isScrollEnabled() :30126
void MKMapView__isScrollEnabled_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->isScrollEnabled();
}

// public extern bool isUserLocationVisible() :30171
void MKMapView__isUserLocationVisible_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->isUserLocationVisible();
}

// public extern bool isZoomEnabled() :30120
void MKMapView__isZoomEnabled_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->isZoomEnabled();
}

// public extern iOS.MapKit.MKMapRect mapRectThatFits(iOS.MapKit.MKMapRect mapRect) :30027
void MKMapView__mapRectThatFits_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, ::g::iOS::MapKit::MKMapRect* __retval)
{
    *__retval = __this->mapRectThatFits(*mapRect_);
}

// public extern iOS.MapKit.MKMapRect mapRectThatFitsEdgePadding(iOS.MapKit.MKMapRect mapRect, iOS.UIKit.UIEdgeInsets insets) :30033
void MKMapView__mapRectThatFitsEdgePadding_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, ::g::iOS::UIKit::UIEdgeInsets* insets_, ::g::iOS::MapKit::MKMapRect* __retval)
{
    *__retval = __this->mapRectThatFitsEdgePadding(*mapRect_, *insets_);
}

// public extern iOS.MapKit.MKMapType mapType() :30090
void MKMapView__mapType_fn(MKMapView* __this, uint32_t* __retval)
{
    *__retval = __this->mapType();
}

// public iOS.MapKit.MKMapType get_MapType() :29907
void MKMapView__get_MapType_fn(MKMapView* __this, uint32_t* __retval)
{
    *__retval = __this->MapType();
}

// public void set_MapType(iOS.MapKit.MKMapType value) :29908
void MKMapView__set_MapType_fn(MKMapView* __this, uint32_t* value)
{
    __this->MapType(*value);
}

// public MKMapView New() :29892
void MKMapView__New9_fn(MKMapView** __retval)
{
    *__retval = MKMapView::New9();
}

// public MKMapView New(ObjC.ID __id) :29894
void MKMapView__New10_fn(::id* __id1, MKMapView** __retval)
{
    *__retval = MKMapView::New10(*__id1);
}

// public extern iOS.Foundation.NSArray overlays() :30231
void MKMapView__overlays_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->overlays();
}

// public iOS.Foundation.NSArray get_Overlays() :30011
void MKMapView__get_Overlays_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->Overlays();
}

// public extern iOS.Foundation.NSArray overlaysInLevel(iOS.MapKit.MKOverlayLevel level) :30210
void MKMapView__overlaysInLevel_fn(MKMapView* __this, int* level_, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->overlaysInLevel(*level_);
}

// public bool get_PitchEnabled() :29955
void MKMapView__get_PitchEnabled_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->PitchEnabled();
}

// public void set_PitchEnabled(bool value) :29956
void MKMapView__set_PitchEnabled_fn(MKMapView* __this, bool* value)
{
    __this->PitchEnabled(*value);
}

// public extern iOS.MapKit.MKCoordinateRegion region() :30096
void MKMapView__region_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* __retval)
{
    *__retval = __this->region();
}

// public iOS.MapKit.MKCoordinateRegion get_Region() :29913
void MKMapView__get_Region_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* __retval)
{
    *__retval = __this->Region();
}

// public void set_Region(iOS.MapKit.MKCoordinateRegion value) :29914
void MKMapView__set_Region_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* value)
{
    __this->Region(*value);
}

// public extern iOS.MapKit.MKCoordinateRegion regionThatFits(iOS.MapKit.MKCoordinateRegion region) :30021
void MKMapView__regionThatFits_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* region_, ::g::iOS::MapKit::MKCoordinateRegion* __retval)
{
    *__retval = __this->regionThatFits(*region_);
}

// public extern void removeAnnotation(iOS.MapKit.IMKAnnotation annotation) :30060
void MKMapView__removeAnnotation_fn(MKMapView* __this, uObject* annotation_)
{
    __this->removeAnnotation(annotation_);
}

// public extern void removeAnnotations(iOS.Foundation.NSArray annotations) :30063
void MKMapView__removeAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* annotations_)
{
    __this->removeAnnotations(annotations_);
}

// public extern void removeOverlay(iOS.MapKit.IMKOverlay overlay) :30192
void MKMapView__removeOverlay_fn(MKMapView* __this, uObject* overlay_)
{
    __this->removeOverlay(overlay_);
}

// public extern void removeOverlays(iOS.Foundation.NSArray overlays) :30195
void MKMapView__removeOverlays_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* overlays_)
{
    __this->removeOverlays(overlays_);
}

// public extern iOS.MapKit.MKOverlayRenderer rendererForOverlay(iOS.MapKit.IMKOverlay overlay) :30213
void MKMapView__rendererForOverlay_fn(MKMapView* __this, uObject* overlay_, ::g::iOS::MapKit::MKOverlayRenderer** __retval)
{
    *__retval = __this->rendererForOverlay(overlay_);
}

// public bool get_RotateEnabled() :29949
void MKMapView__get_RotateEnabled_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->RotateEnabled();
}

// public void set_RotateEnabled(bool value) :29950
void MKMapView__set_RotateEnabled_fn(MKMapView* __this, bool* value)
{
    __this->RotateEnabled(*value);
}

// public bool get_ScrollEnabled() :29943
void MKMapView__get_ScrollEnabled_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->ScrollEnabled();
}

// public void set_ScrollEnabled(bool value) :29944
void MKMapView__set_ScrollEnabled_fn(MKMapView* __this, bool* value)
{
    __this->ScrollEnabled(*value);
}

// public extern void selectAnnotationAnimated(iOS.MapKit.IMKAnnotation annotation, bool animated) :30075
void MKMapView__selectAnnotationAnimated_fn(MKMapView* __this, uObject* annotation_, bool* animated_)
{
    __this->selectAnnotationAnimated(annotation_, *animated_);
}

// public extern iOS.Foundation.NSArray selectedAnnotations() :30177
void MKMapView__selectedAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->selectedAnnotations();
}

// public iOS.Foundation.NSArray get_SelectedAnnotations() :30000
void MKMapView__get_SelectedAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->SelectedAnnotations();
}

// public void set_SelectedAnnotations(iOS.Foundation.NSArray value) :30001
void MKMapView__set_SelectedAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* value)
{
    __this->SelectedAnnotations(value);
}

// public extern void setCamera(iOS.MapKit.MKMapCamera camera) :30117
void MKMapView__setCamera_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapCamera* camera_)
{
    __this->setCamera(camera_);
}

// public extern void setCameraAnimated(iOS.MapKit.MKMapCamera camera, bool animated) :30036
void MKMapView__setCameraAnimated_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapCamera* camera_, bool* animated_)
{
    __this->setCameraAnimated(camera_, *animated_);
}

// public extern void setCenterCoordinate(iOS.CoreLocation.CLLocationCoordinate2D centerCoordinate) :30105
void MKMapView__setCenterCoordinate_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* centerCoordinate_)
{
    __this->setCenterCoordinate(*centerCoordinate_);
}

// public extern void setCenterCoordinateAnimated(iOS.CoreLocation.CLLocationCoordinate2D coordinate, bool animated) :30018
void MKMapView__setCenterCoordinateAnimated_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* coordinate_, bool* animated_)
{
    __this->setCenterCoordinateAnimated(*coordinate_, *animated_);
}

// public extern void setDelegate(iOS.MapKit.IMKMapViewDelegate delegate_) :30087
void MKMapView__setDelegate_fn(MKMapView* __this, uObject* delegate__)
{
    __this->setDelegate(delegate__);
}

// public extern void setMapType(iOS.MapKit.MKMapType mapType) :30093
void MKMapView__setMapType_fn(MKMapView* __this, uint32_t* mapType_)
{
    __this->setMapType(*mapType_);
}

// public extern void setPitchEnabled(bool pitchEnabled) :30141
void MKMapView__setPitchEnabled_fn(MKMapView* __this, bool* pitchEnabled_)
{
    __this->setPitchEnabled(*pitchEnabled_);
}

// public extern void setRegion(iOS.MapKit.MKCoordinateRegion region) :30099
void MKMapView__setRegion_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* region_)
{
    __this->setRegion(*region_);
}

// public extern void setRegionAnimated(iOS.MapKit.MKCoordinateRegion region, bool animated) :30015
void MKMapView__setRegionAnimated_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* region_, bool* animated_)
{
    __this->setRegionAnimated(*region_, *animated_);
}

// public extern void setRotateEnabled(bool rotateEnabled) :30135
void MKMapView__setRotateEnabled_fn(MKMapView* __this, bool* rotateEnabled_)
{
    __this->setRotateEnabled(*rotateEnabled_);
}

// public extern void setScrollEnabled(bool scrollEnabled) :30129
void MKMapView__setScrollEnabled_fn(MKMapView* __this, bool* scrollEnabled_)
{
    __this->setScrollEnabled(*scrollEnabled_);
}

// public extern void setSelectedAnnotations(iOS.Foundation.NSArray selectedAnnotations) :30180
void MKMapView__setSelectedAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* selectedAnnotations_)
{
    __this->setSelectedAnnotations(selectedAnnotations_);
}

// public extern void setShowsBuildings(bool showsBuildings) :30153
void MKMapView__setShowsBuildings_fn(MKMapView* __this, bool* showsBuildings_)
{
    __this->setShowsBuildings(*showsBuildings_);
}

// public extern void setShowsPointsOfInterest(bool showsPointsOfInterest) :30147
void MKMapView__setShowsPointsOfInterest_fn(MKMapView* __this, bool* showsPointsOfInterest_)
{
    __this->setShowsPointsOfInterest(*showsPointsOfInterest_);
}

// public extern void setShowsUserLocation(bool showsUserLocation) :30159
void MKMapView__setShowsUserLocation_fn(MKMapView* __this, bool* showsUserLocation_)
{
    __this->setShowsUserLocation(*showsUserLocation_);
}

// public extern void setUserTrackingMode(iOS.MapKit.MKUserTrackingMode userTrackingMode) :30168
void MKMapView__setUserTrackingMode_fn(MKMapView* __this, int* userTrackingMode_)
{
    __this->setUserTrackingMode(*userTrackingMode_);
}

// public extern void setUserTrackingModeAnimated(iOS.MapKit.MKUserTrackingMode mode, bool animated) :30051
void MKMapView__setUserTrackingModeAnimated_fn(MKMapView* __this, int* mode_, bool* animated_)
{
    __this->setUserTrackingModeAnimated(*mode_, *animated_);
}

// public extern void setVisibleMapRect(iOS.MapKit.MKMapRect visibleMapRect) :30111
void MKMapView__setVisibleMapRect_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* visibleMapRect_)
{
    __this->setVisibleMapRect(*visibleMapRect_);
}

// public extern void setVisibleMapRectAnimated(iOS.MapKit.MKMapRect mapRect, bool animate) :30024
void MKMapView__setVisibleMapRectAnimated_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, bool* animate_)
{
    __this->setVisibleMapRectAnimated(*mapRect_, *animate_);
}

// public extern void setVisibleMapRectEdgePaddingAnimated(iOS.MapKit.MKMapRect mapRect, iOS.UIKit.UIEdgeInsets insets, bool animate) :30030
void MKMapView__setVisibleMapRectEdgePaddingAnimated_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, ::g::iOS::UIKit::UIEdgeInsets* insets_, bool* animate_)
{
    __this->setVisibleMapRectEdgePaddingAnimated(*mapRect_, *insets_, *animate_);
}

// public extern void setZoomEnabled(bool zoomEnabled) :30123
void MKMapView__setZoomEnabled_fn(MKMapView* __this, bool* zoomEnabled_)
{
    __this->setZoomEnabled(*zoomEnabled_);
}

// public extern void showAnnotationsAnimated(iOS.Foundation.NSArray annotations, bool animated) :30081
void MKMapView__showAnnotationsAnimated_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* annotations_, bool* animated_)
{
    __this->showAnnotationsAnimated(annotations_, *animated_);
}

// public extern bool showsBuildings() :30150
void MKMapView__showsBuildings_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->showsBuildings();
}

// public bool get_ShowsBuildings() :29967
void MKMapView__get_ShowsBuildings_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->ShowsBuildings();
}

// public void set_ShowsBuildings(bool value) :29968
void MKMapView__set_ShowsBuildings_fn(MKMapView* __this, bool* value)
{
    __this->ShowsBuildings(*value);
}

// public extern bool showsPointsOfInterest() :30144
void MKMapView__showsPointsOfInterest_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->showsPointsOfInterest();
}

// public bool get_ShowsPointsOfInterest() :29961
void MKMapView__get_ShowsPointsOfInterest_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->ShowsPointsOfInterest();
}

// public void set_ShowsPointsOfInterest(bool value) :29962
void MKMapView__set_ShowsPointsOfInterest_fn(MKMapView* __this, bool* value)
{
    __this->ShowsPointsOfInterest(*value);
}

// public extern bool showsUserLocation() :30156
void MKMapView__showsUserLocation_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->showsUserLocation();
}

// public bool get_ShowsUserLocation() :29973
void MKMapView__get_ShowsUserLocation_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->ShowsUserLocation();
}

// public void set_ShowsUserLocation(bool value) :29974
void MKMapView__set_ShowsUserLocation_fn(MKMapView* __this, bool* value)
{
    __this->ShowsUserLocation(*value);
}

// public extern iOS.MapKit.MKUserLocation userLocation() :30162
void MKMapView__userLocation_fn(MKMapView* __this, ::g::iOS::MapKit::MKUserLocation** __retval)
{
    *__retval = __this->userLocation();
}

// public iOS.MapKit.MKUserLocation get_UserLocation() :29979
void MKMapView__get_UserLocation_fn(MKMapView* __this, ::g::iOS::MapKit::MKUserLocation** __retval)
{
    *__retval = __this->UserLocation();
}

// public bool get_UserLocationVisible() :29990
void MKMapView__get_UserLocationVisible_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->UserLocationVisible();
}

// public extern iOS.MapKit.MKUserTrackingMode userTrackingMode() :30165
void MKMapView__userTrackingMode_fn(MKMapView* __this, int* __retval)
{
    *__retval = __this->userTrackingMode();
}

// public iOS.MapKit.MKUserTrackingMode get_UserTrackingMode() :29984
void MKMapView__get_UserTrackingMode_fn(MKMapView* __this, int* __retval)
{
    *__retval = __this->UserTrackingMode();
}

// public void set_UserTrackingMode(iOS.MapKit.MKUserTrackingMode value) :29985
void MKMapView__set_UserTrackingMode_fn(MKMapView* __this, int* value)
{
    __this->UserTrackingMode(*value);
}

// public extern iOS.MapKit.MKAnnotationView viewForAnnotation(iOS.MapKit.IMKAnnotation annotation) :30069
void MKMapView__viewForAnnotation_fn(MKMapView* __this, uObject* annotation_, ::g::iOS::MapKit::MKAnnotationView** __retval)
{
    *__retval = __this->viewForAnnotation(annotation_);
}

// public extern iOS.MapKit.MKOverlayView viewForOverlay(iOS.MapKit.IMKOverlay overlay) :30216
void MKMapView__viewForOverlay_fn(MKMapView* __this, uObject* overlay_, ::g::iOS::MapKit::MKOverlayView** __retval)
{
    *__retval = __this->viewForOverlay(overlay_);
}

// public extern iOS.MapKit.MKMapRect visibleMapRect() :30108
void MKMapView__visibleMapRect_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* __retval)
{
    *__retval = __this->visibleMapRect();
}

// public iOS.MapKit.MKMapRect get_VisibleMapRect() :29925
void MKMapView__get_VisibleMapRect_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* __retval)
{
    *__retval = __this->VisibleMapRect();
}

// public void set_VisibleMapRect(iOS.MapKit.MKMapRect value) :29926
void MKMapView__set_VisibleMapRect_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* value)
{
    __this->VisibleMapRect(*value);
}

// public bool get_ZoomEnabled() :29937
void MKMapView__get_ZoomEnabled_fn(MKMapView* __this, bool* __retval)
{
    *__retval = __this->ZoomEnabled();
}

// public void set_ZoomEnabled(bool value) :29938
void MKMapView__set_ZoomEnabled_fn(MKMapView* __this, bool* value)
{
    __this->ZoomEnabled(*value);
}

// public MKMapView() [instance] :29892
void MKMapView::ctor_8()
{
    uStackFrame __("iOS.MapKit.MKMapView", ".ctor()");
    ctor_6();
}

// public MKMapView(ObjC.ID __id) [instance] :29894
void MKMapView::ctor_9(::id __id1)
{
    uStackFrame __("iOS.MapKit.MKMapView", ".ctor(ObjC.ID)");
    ctor_7(__id1);
}

// public extern void addAnnotation(iOS.MapKit.IMKAnnotation annotation) [instance] :30054
void MKMapView::addAnnotation(uObject* annotation_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "addAnnotation(iOS.MapKit.IMKAnnotation)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addAnnotation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)annotation_, ::g::iOS::MapKit::IMKAnnotation_typeof()));
}

// public extern void addAnnotations(iOS.Foundation.NSArray annotations) [instance] :30057
void MKMapView::addAnnotations(::g::iOS::Foundation::NSArray* annotations_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "addAnnotations(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addAnnotations:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)annotations_));
}

// public extern void addOverlay(iOS.MapKit.IMKOverlay overlay) [instance] :30219
void MKMapView::addOverlay(uObject* overlay_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "addOverlay(iOS.MapKit.IMKOverlay)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addOverlay:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()));
}

// public extern void addOverlayLevel(iOS.MapKit.IMKOverlay overlay, iOS.MapKit.MKOverlayLevel level) [instance] :30186
void MKMapView::addOverlayLevel(uObject* overlay_, int level_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "addOverlayLevel(iOS.MapKit.IMKOverlay,iOS.MapKit.MKOverlayLevel)");
    int level__ = level_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addOverlay:level:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()),
        ::MKOverlayLevel(level__));
}

// public extern void addOverlays(iOS.Foundation.NSArray overlays) [instance] :30222
void MKMapView::addOverlays(::g::iOS::Foundation::NSArray* overlays_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "addOverlays(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addOverlays:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlays_));
}

// public extern void addOverlaysLevel(iOS.Foundation.NSArray overlays, iOS.MapKit.MKOverlayLevel level) [instance] :30189
void MKMapView::addOverlaysLevel(::g::iOS::Foundation::NSArray* overlays_, int level_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "addOverlaysLevel(iOS.Foundation.NSArray,iOS.MapKit.MKOverlayLevel)");
    int level__ = level_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addOverlays:level:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlays_),
        ::MKOverlayLevel(level__));
}

// public extern iOS.Foundation.NSArray annotations() [instance] :30174
::g::iOS::Foundation::NSArray* MKMapView::annotations()
{
    uStackFrame __("iOS.MapKit.MKMapView", "annotations()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(annotations));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_Annotations() [instance] :29995
::g::iOS::Foundation::NSArray* MKMapView::Annotations()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_Annotations()");
    return annotations();
}

// public extern iOS.Foundation.NSSet annotationsInMapRect(iOS.MapKit.MKMapRect mapRect) [instance] :30066
::g::iOS::Foundation::NSSet* MKMapView::annotationsInMapRect(::g::iOS::MapKit::MKMapRect mapRect_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "annotationsInMapRect(iOS.MapKit.MKMapRect)");
    ::g::iOS::MapKit::MKMapRect mapRect__ = mapRect_;
    ::NSSet* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSSet*, @selector(annotationsInMapRect:),
        uObjC::Struct::FromUno_MKMapRect(mapRect__, ::MKMapRect()));
    return (::g::iOS::Foundation::NSSet*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSSet_typeof());
}

// public extern iOS.CoreGraphics.CGRect annotationVisibleRect() [instance] :30183
::g::iOS::CoreGraphics::CGRect MKMapView::annotationVisibleRect()
{
    uStackFrame __("iOS.MapKit.MKMapView", "annotationVisibleRect()");
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(annotationVisibleRect));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public iOS.CoreGraphics.CGRect get_AnnotationVisibleRect() [instance] :30006
::g::iOS::CoreGraphics::CGRect MKMapView::AnnotationVisibleRect()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_AnnotationVisibleRect()");
    return annotationVisibleRect();
}

// public extern iOS.MapKit.MKMapCamera camera() [instance] :30114
::g::iOS::MapKit::MKMapCamera* MKMapView::camera()
{
    uStackFrame __("iOS.MapKit.MKMapView", "camera()");
    ::MKMapCamera* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKMapCamera*, @selector(camera));
    return (::g::iOS::MapKit::MKMapCamera*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::MapKit::MKMapCamera_typeof());
}

// public iOS.MapKit.MKMapCamera get_Camera() [instance] :29931
::g::iOS::MapKit::MKMapCamera* MKMapView::Camera()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_Camera()");
    return camera();
}

// public void set_Camera(iOS.MapKit.MKMapCamera value) [instance] :29932
void MKMapView::Camera(::g::iOS::MapKit::MKMapCamera* value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_Camera(iOS.MapKit.MKMapCamera)");
    setCamera(value);
}

// public extern iOS.CoreLocation.CLLocationCoordinate2D centerCoordinate() [instance] :30102
::g::iOS::CoreLocation::CLLocationCoordinate2D MKMapView::centerCoordinate()
{
    uStackFrame __("iOS.MapKit.MKMapView", "centerCoordinate()");
    ::CLLocationCoordinate2D __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CLLocationCoordinate2D, @selector(centerCoordinate));
    return uObjC::Struct::ToUno_CLLocationCoordinate2D(__return, ::g::iOS::CoreLocation::CLLocationCoordinate2D());
}

// public iOS.CoreLocation.CLLocationCoordinate2D get_CenterCoordinate() [instance] :29919
::g::iOS::CoreLocation::CLLocationCoordinate2D MKMapView::CenterCoordinate()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_CenterCoordinate()");
    return centerCoordinate();
}

// public void set_CenterCoordinate(iOS.CoreLocation.CLLocationCoordinate2D value) [instance] :29920
void MKMapView::CenterCoordinate(::g::iOS::CoreLocation::CLLocationCoordinate2D value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_CenterCoordinate(iOS.CoreLocation.CLLocationCoordinate2D)");
    setCenterCoordinate(value);
}

// public extern iOS.CoreGraphics.CGPoint convertCoordinateToPointToView(iOS.CoreLocation.CLLocationCoordinate2D coordinate, iOS.UIKit.UIView view) [instance] :30039
::g::iOS::CoreGraphics::CGPoint MKMapView::convertCoordinateToPointToView(::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate_, ::g::iOS::UIKit::UIView* view_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "convertCoordinateToPointToView(iOS.CoreLocation.CLLocationCoordinate2D,iOS.UIKit.UIView)");
    ::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate__ = coordinate_;
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(convertCoordinate:toPointToView:),
        uObjC::Struct::FromUno_CLLocationCoordinate2D(coordinate__, ::CLLocationCoordinate2D()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public extern iOS.CoreLocation.CLLocationCoordinate2D convertPointToCoordinateFromView(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UIView view) [instance] :30042
::g::iOS::CoreLocation::CLLocationCoordinate2D MKMapView::convertPointToCoordinateFromView(::g::iOS::CoreGraphics::CGPoint point_, ::g::iOS::UIKit::UIView* view_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "convertPointToCoordinateFromView(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIView)");
    ::g::iOS::CoreGraphics::CGPoint point__ = point_;
    ::CLLocationCoordinate2D __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CLLocationCoordinate2D, @selector(convertPoint:toCoordinateFromView:),
        uObjC::Struct::FromUno_CGPoint(point__, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return uObjC::Struct::ToUno_CLLocationCoordinate2D(__return, ::g::iOS::CoreLocation::CLLocationCoordinate2D());
}

// public extern iOS.MapKit.MKCoordinateRegion convertRectToRegionFromView(iOS.CoreGraphics.CGRect rect, iOS.UIKit.UIView view) [instance] :30048
::g::iOS::MapKit::MKCoordinateRegion MKMapView::convertRectToRegionFromView(::g::iOS::CoreGraphics::CGRect rect_, ::g::iOS::UIKit::UIView* view_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "convertRectToRegionFromView(iOS.CoreGraphics.CGRect,iOS.UIKit.UIView)");
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    ::MKCoordinateRegion __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKCoordinateRegion, @selector(convertRect:toRegionFromView:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return uObjC::Struct::ToUno_MKCoordinateRegion(__return, ::g::iOS::MapKit::MKCoordinateRegion());
}

// public extern iOS.CoreGraphics.CGRect convertRegionToRectToView(iOS.MapKit.MKCoordinateRegion region, iOS.UIKit.UIView view) [instance] :30045
::g::iOS::CoreGraphics::CGRect MKMapView::convertRegionToRectToView(::g::iOS::MapKit::MKCoordinateRegion region_, ::g::iOS::UIKit::UIView* view_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "convertRegionToRectToView(iOS.MapKit.MKCoordinateRegion,iOS.UIKit.UIView)");
    ::g::iOS::MapKit::MKCoordinateRegion region__ = region_;
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(convertRegion:toRectToView:),
        uObjC::Struct::FromUno_MKCoordinateRegion(region__, ::MKCoordinateRegion()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public iOS.MapKit.IMKMapViewDelegate get_Delegate() [instance] :29901
uObject* MKMapView::Delegate()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_Delegate()");
    return delegate_();
}

// public void set_Delegate(iOS.MapKit.IMKMapViewDelegate value) [instance] :29902
void MKMapView::Delegate(uObject* value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_Delegate(iOS.MapKit.IMKMapViewDelegate)");
    setDelegate(value);
}

// public extern iOS.MapKit.IMKMapViewDelegate delegate_() [instance] :30084
uObject* MKMapView::delegate_()
{
    uStackFrame __("iOS.MapKit.MKMapView", "delegate_()");
    id<MKMapViewDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<MKMapViewDelegate>, @selector(delegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::MapKit::Interop::IMKMapViewDelegate_typeof());
}

// public extern iOS.MapKit.MKAnnotationView dequeueReusableAnnotationViewWithIdentifier(string identifier) [instance] :30072
::g::iOS::MapKit::MKAnnotationView* MKMapView::dequeueReusableAnnotationViewWithIdentifier(uString* identifier_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "dequeueReusableAnnotationViewWithIdentifier(string)");
    ::MKAnnotationView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKAnnotationView*, @selector(dequeueReusableAnnotationViewWithIdentifier:),
        uObjC::NativeString(identifier_));
    return (::g::iOS::MapKit::MKAnnotationView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::MapKit::MKAnnotationView_typeof());
}

// public extern void deselectAnnotationAnimated(iOS.MapKit.IMKAnnotation annotation, bool animated) [instance] :30078
void MKMapView::deselectAnnotationAnimated(uObject* annotation_, bool animated_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "deselectAnnotationAnimated(iOS.MapKit.IMKAnnotation,bool)");
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(deselectAnnotation:animated:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)annotation_, ::g::iOS::MapKit::IMKAnnotation_typeof()),
        (BOOL)animated__);
}

// public extern void exchangeOverlayAtIndexWithOverlayAtIndex(ulong index1, ulong index2) [instance] :30228
void MKMapView::exchangeOverlayAtIndexWithOverlayAtIndex(uint64_t index1_, uint64_t index2_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "exchangeOverlayAtIndexWithOverlayAtIndex(ulong,ulong)");
    uint64_t index1__ = index1_;
    uint64_t index2__ = index2_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(exchangeOverlayAtIndex:withOverlayAtIndex:),
        (unsigned long)index1__,
        (unsigned long)index2__);
}

// public extern void exchangeOverlayWithOverlay(iOS.MapKit.IMKOverlay overlay1, iOS.MapKit.IMKOverlay overlay2) [instance] :30207
void MKMapView::exchangeOverlayWithOverlay(uObject* overlay1_, uObject* overlay2_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "exchangeOverlayWithOverlay(iOS.MapKit.IMKOverlay,iOS.MapKit.IMKOverlay)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(exchangeOverlay:withOverlay:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay1_, ::g::iOS::MapKit::IMKOverlay_typeof()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay2_, ::g::iOS::MapKit::IMKOverlay_typeof()));
}

// public extern void insertOverlayAboveOverlay(iOS.MapKit.IMKOverlay overlay, iOS.MapKit.IMKOverlay sibling) [instance] :30201
void MKMapView::insertOverlayAboveOverlay(uObject* overlay_, uObject* sibling_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "insertOverlayAboveOverlay(iOS.MapKit.IMKOverlay,iOS.MapKit.IMKOverlay)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(insertOverlay:aboveOverlay:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)sibling_, ::g::iOS::MapKit::IMKOverlay_typeof()));
}

// public extern void insertOverlayAtIndex(iOS.MapKit.IMKOverlay overlay, ulong index) [instance] :30225
void MKMapView::insertOverlayAtIndex(uObject* overlay_, uint64_t index_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "insertOverlayAtIndex(iOS.MapKit.IMKOverlay,ulong)");
    uint64_t index__ = index_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(insertOverlay:atIndex:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()),
        (unsigned long)index__);
}

// public extern void insertOverlayAtIndexLevel(iOS.MapKit.IMKOverlay overlay, ulong index, iOS.MapKit.MKOverlayLevel level) [instance] :30198
void MKMapView::insertOverlayAtIndexLevel(uObject* overlay_, uint64_t index_, int level_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "insertOverlayAtIndexLevel(iOS.MapKit.IMKOverlay,ulong,iOS.MapKit.MKOverlayLevel)");
    uint64_t index__ = index_;
    int level__ = level_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(insertOverlay:atIndex:level:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()),
        (unsigned long)index__,
        ::MKOverlayLevel(level__));
}

// public extern void insertOverlayBelowOverlay(iOS.MapKit.IMKOverlay overlay, iOS.MapKit.IMKOverlay sibling) [instance] :30204
void MKMapView::insertOverlayBelowOverlay(uObject* overlay_, uObject* sibling_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "insertOverlayBelowOverlay(iOS.MapKit.IMKOverlay,iOS.MapKit.IMKOverlay)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(insertOverlay:belowOverlay:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)sibling_, ::g::iOS::MapKit::IMKOverlay_typeof()));
}

// public extern bool isPitchEnabled() [instance] :30138
bool MKMapView::isPitchEnabled()
{
    uStackFrame __("iOS.MapKit.MKMapView", "isPitchEnabled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isPitchEnabled));
    return (bool)__return;
}

// public extern bool isRotateEnabled() [instance] :30132
bool MKMapView::isRotateEnabled()
{
    uStackFrame __("iOS.MapKit.MKMapView", "isRotateEnabled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isRotateEnabled));
    return (bool)__return;
}

// public extern bool isScrollEnabled() [instance] :30126
bool MKMapView::isScrollEnabled()
{
    uStackFrame __("iOS.MapKit.MKMapView", "isScrollEnabled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isScrollEnabled));
    return (bool)__return;
}

// public extern bool isUserLocationVisible() [instance] :30171
bool MKMapView::isUserLocationVisible()
{
    uStackFrame __("iOS.MapKit.MKMapView", "isUserLocationVisible()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isUserLocationVisible));
    return (bool)__return;
}

// public extern bool isZoomEnabled() [instance] :30120
bool MKMapView::isZoomEnabled()
{
    uStackFrame __("iOS.MapKit.MKMapView", "isZoomEnabled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isZoomEnabled));
    return (bool)__return;
}

// public extern iOS.MapKit.MKMapRect mapRectThatFits(iOS.MapKit.MKMapRect mapRect) [instance] :30027
::g::iOS::MapKit::MKMapRect MKMapView::mapRectThatFits(::g::iOS::MapKit::MKMapRect mapRect_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "mapRectThatFits(iOS.MapKit.MKMapRect)");
    ::g::iOS::MapKit::MKMapRect mapRect__ = mapRect_;
    ::MKMapRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKMapRect, @selector(mapRectThatFits:),
        uObjC::Struct::FromUno_MKMapRect(mapRect__, ::MKMapRect()));
    return uObjC::Struct::ToUno_MKMapRect(__return, ::g::iOS::MapKit::MKMapRect());
}

// public extern iOS.MapKit.MKMapRect mapRectThatFitsEdgePadding(iOS.MapKit.MKMapRect mapRect, iOS.UIKit.UIEdgeInsets insets) [instance] :30033
::g::iOS::MapKit::MKMapRect MKMapView::mapRectThatFitsEdgePadding(::g::iOS::MapKit::MKMapRect mapRect_, ::g::iOS::UIKit::UIEdgeInsets insets_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "mapRectThatFitsEdgePadding(iOS.MapKit.MKMapRect,iOS.UIKit.UIEdgeInsets)");
    ::g::iOS::MapKit::MKMapRect mapRect__ = mapRect_;
    ::g::iOS::UIKit::UIEdgeInsets insets__ = insets_;
    ::MKMapRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKMapRect, @selector(mapRectThatFits:edgePadding:),
        uObjC::Struct::FromUno_MKMapRect(mapRect__, ::MKMapRect()),
        uObjC::Struct::FromUno_UIEdgeInsets(insets__, ::UIEdgeInsets()));
    return uObjC::Struct::ToUno_MKMapRect(__return, ::g::iOS::MapKit::MKMapRect());
}

// public extern iOS.MapKit.MKMapType mapType() [instance] :30090
uint32_t MKMapView::mapType()
{
    uStackFrame __("iOS.MapKit.MKMapView", "mapType()");
    ::MKMapType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKMapType, @selector(mapType));
    return uint32_t(__return);
}

// public iOS.MapKit.MKMapType get_MapType() [instance] :29907
uint32_t MKMapView::MapType()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_MapType()");
    return mapType();
}

// public void set_MapType(iOS.MapKit.MKMapType value) [instance] :29908
void MKMapView::MapType(uint32_t value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_MapType(iOS.MapKit.MKMapType)");
    setMapType(value);
}

// public extern iOS.Foundation.NSArray overlays() [instance] :30231
::g::iOS::Foundation::NSArray* MKMapView::overlays()
{
    uStackFrame __("iOS.MapKit.MKMapView", "overlays()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(overlays));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_Overlays() [instance] :30011
::g::iOS::Foundation::NSArray* MKMapView::Overlays()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_Overlays()");
    return overlays();
}

// public extern iOS.Foundation.NSArray overlaysInLevel(iOS.MapKit.MKOverlayLevel level) [instance] :30210
::g::iOS::Foundation::NSArray* MKMapView::overlaysInLevel(int level_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "overlaysInLevel(iOS.MapKit.MKOverlayLevel)");
    int level__ = level_;
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(overlaysInLevel:),
        ::MKOverlayLevel(level__));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public bool get_PitchEnabled() [instance] :29955
bool MKMapView::PitchEnabled()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_PitchEnabled()");
    return isPitchEnabled();
}

// public void set_PitchEnabled(bool value) [instance] :29956
void MKMapView::PitchEnabled(bool value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_PitchEnabled(bool)");
    setPitchEnabled(value);
}

// public extern iOS.MapKit.MKCoordinateRegion region() [instance] :30096
::g::iOS::MapKit::MKCoordinateRegion MKMapView::region()
{
    uStackFrame __("iOS.MapKit.MKMapView", "region()");
    ::MKCoordinateRegion __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKCoordinateRegion, @selector(region));
    return uObjC::Struct::ToUno_MKCoordinateRegion(__return, ::g::iOS::MapKit::MKCoordinateRegion());
}

// public iOS.MapKit.MKCoordinateRegion get_Region() [instance] :29913
::g::iOS::MapKit::MKCoordinateRegion MKMapView::Region()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_Region()");
    return region();
}

// public void set_Region(iOS.MapKit.MKCoordinateRegion value) [instance] :29914
void MKMapView::Region(::g::iOS::MapKit::MKCoordinateRegion value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_Region(iOS.MapKit.MKCoordinateRegion)");
    setRegion(value);
}

// public extern iOS.MapKit.MKCoordinateRegion regionThatFits(iOS.MapKit.MKCoordinateRegion region) [instance] :30021
::g::iOS::MapKit::MKCoordinateRegion MKMapView::regionThatFits(::g::iOS::MapKit::MKCoordinateRegion region_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "regionThatFits(iOS.MapKit.MKCoordinateRegion)");
    ::g::iOS::MapKit::MKCoordinateRegion region__ = region_;
    ::MKCoordinateRegion __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKCoordinateRegion, @selector(regionThatFits:),
        uObjC::Struct::FromUno_MKCoordinateRegion(region__, ::MKCoordinateRegion()));
    return uObjC::Struct::ToUno_MKCoordinateRegion(__return, ::g::iOS::MapKit::MKCoordinateRegion());
}

// public extern void removeAnnotation(iOS.MapKit.IMKAnnotation annotation) [instance] :30060
void MKMapView::removeAnnotation(uObject* annotation_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "removeAnnotation(iOS.MapKit.IMKAnnotation)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeAnnotation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)annotation_, ::g::iOS::MapKit::IMKAnnotation_typeof()));
}

// public extern void removeAnnotations(iOS.Foundation.NSArray annotations) [instance] :30063
void MKMapView::removeAnnotations(::g::iOS::Foundation::NSArray* annotations_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "removeAnnotations(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeAnnotations:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)annotations_));
}

// public extern void removeOverlay(iOS.MapKit.IMKOverlay overlay) [instance] :30192
void MKMapView::removeOverlay(uObject* overlay_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "removeOverlay(iOS.MapKit.IMKOverlay)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeOverlay:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()));
}

// public extern void removeOverlays(iOS.Foundation.NSArray overlays) [instance] :30195
void MKMapView::removeOverlays(::g::iOS::Foundation::NSArray* overlays_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "removeOverlays(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeOverlays:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlays_));
}

// public extern iOS.MapKit.MKOverlayRenderer rendererForOverlay(iOS.MapKit.IMKOverlay overlay) [instance] :30213
::g::iOS::MapKit::MKOverlayRenderer* MKMapView::rendererForOverlay(uObject* overlay_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "rendererForOverlay(iOS.MapKit.IMKOverlay)");
    ::MKOverlayRenderer* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKOverlayRenderer*, @selector(rendererForOverlay:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()));
    return (::g::iOS::MapKit::MKOverlayRenderer*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::MapKit::MKOverlayRenderer_typeof());
}

// public bool get_RotateEnabled() [instance] :29949
bool MKMapView::RotateEnabled()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_RotateEnabled()");
    return isRotateEnabled();
}

// public void set_RotateEnabled(bool value) [instance] :29950
void MKMapView::RotateEnabled(bool value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_RotateEnabled(bool)");
    setRotateEnabled(value);
}

// public bool get_ScrollEnabled() [instance] :29943
bool MKMapView::ScrollEnabled()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_ScrollEnabled()");
    return isScrollEnabled();
}

// public void set_ScrollEnabled(bool value) [instance] :29944
void MKMapView::ScrollEnabled(bool value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_ScrollEnabled(bool)");
    setScrollEnabled(value);
}

// public extern void selectAnnotationAnimated(iOS.MapKit.IMKAnnotation annotation, bool animated) [instance] :30075
void MKMapView::selectAnnotationAnimated(uObject* annotation_, bool animated_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "selectAnnotationAnimated(iOS.MapKit.IMKAnnotation,bool)");
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(selectAnnotation:animated:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)annotation_, ::g::iOS::MapKit::IMKAnnotation_typeof()),
        (BOOL)animated__);
}

// public extern iOS.Foundation.NSArray selectedAnnotations() [instance] :30177
::g::iOS::Foundation::NSArray* MKMapView::selectedAnnotations()
{
    uStackFrame __("iOS.MapKit.MKMapView", "selectedAnnotations()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(selectedAnnotations));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_SelectedAnnotations() [instance] :30000
::g::iOS::Foundation::NSArray* MKMapView::SelectedAnnotations()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_SelectedAnnotations()");
    return selectedAnnotations();
}

// public void set_SelectedAnnotations(iOS.Foundation.NSArray value) [instance] :30001
void MKMapView::SelectedAnnotations(::g::iOS::Foundation::NSArray* value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_SelectedAnnotations(iOS.Foundation.NSArray)");
    setSelectedAnnotations(value);
}

// public extern void setCamera(iOS.MapKit.MKMapCamera camera) [instance] :30117
void MKMapView::setCamera(::g::iOS::MapKit::MKMapCamera* camera_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setCamera(iOS.MapKit.MKMapCamera)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setCamera:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)camera_));
}

// public extern void setCameraAnimated(iOS.MapKit.MKMapCamera camera, bool animated) [instance] :30036
void MKMapView::setCameraAnimated(::g::iOS::MapKit::MKMapCamera* camera_, bool animated_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setCameraAnimated(iOS.MapKit.MKMapCamera,bool)");
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setCamera:animated:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)camera_),
        (BOOL)animated__);
}

// public extern void setCenterCoordinate(iOS.CoreLocation.CLLocationCoordinate2D centerCoordinate) [instance] :30105
void MKMapView::setCenterCoordinate(::g::iOS::CoreLocation::CLLocationCoordinate2D centerCoordinate_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setCenterCoordinate(iOS.CoreLocation.CLLocationCoordinate2D)");
    ::g::iOS::CoreLocation::CLLocationCoordinate2D centerCoordinate__ = centerCoordinate_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setCenterCoordinate:),
        uObjC::Struct::FromUno_CLLocationCoordinate2D(centerCoordinate__, ::CLLocationCoordinate2D()));
}

// public extern void setCenterCoordinateAnimated(iOS.CoreLocation.CLLocationCoordinate2D coordinate, bool animated) [instance] :30018
void MKMapView::setCenterCoordinateAnimated(::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate_, bool animated_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setCenterCoordinateAnimated(iOS.CoreLocation.CLLocationCoordinate2D,bool)");
    ::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate__ = coordinate_;
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setCenterCoordinate:animated:),
        uObjC::Struct::FromUno_CLLocationCoordinate2D(coordinate__, ::CLLocationCoordinate2D()),
        (BOOL)animated__);
}

// public extern void setDelegate(iOS.MapKit.IMKMapViewDelegate delegate_) [instance] :30087
void MKMapView::setDelegate(uObject* delegate__)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setDelegate(iOS.MapKit.IMKMapViewDelegate)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)delegate__, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()));
}

// public extern void setMapType(iOS.MapKit.MKMapType mapType) [instance] :30093
void MKMapView::setMapType(uint32_t mapType_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setMapType(iOS.MapKit.MKMapType)");
    uint32_t mapType__ = mapType_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setMapType:),
        ::MKMapType(mapType__));
}

// public extern void setPitchEnabled(bool pitchEnabled) [instance] :30141
void MKMapView::setPitchEnabled(bool pitchEnabled_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setPitchEnabled(bool)");
    bool pitchEnabled__ = pitchEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setPitchEnabled:),
        (BOOL)pitchEnabled__);
}

// public extern void setRegion(iOS.MapKit.MKCoordinateRegion region) [instance] :30099
void MKMapView::setRegion(::g::iOS::MapKit::MKCoordinateRegion region_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setRegion(iOS.MapKit.MKCoordinateRegion)");
    ::g::iOS::MapKit::MKCoordinateRegion region__ = region_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setRegion:),
        uObjC::Struct::FromUno_MKCoordinateRegion(region__, ::MKCoordinateRegion()));
}

// public extern void setRegionAnimated(iOS.MapKit.MKCoordinateRegion region, bool animated) [instance] :30015
void MKMapView::setRegionAnimated(::g::iOS::MapKit::MKCoordinateRegion region_, bool animated_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setRegionAnimated(iOS.MapKit.MKCoordinateRegion,bool)");
    ::g::iOS::MapKit::MKCoordinateRegion region__ = region_;
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setRegion:animated:),
        uObjC::Struct::FromUno_MKCoordinateRegion(region__, ::MKCoordinateRegion()),
        (BOOL)animated__);
}

// public extern void setRotateEnabled(bool rotateEnabled) [instance] :30135
void MKMapView::setRotateEnabled(bool rotateEnabled_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setRotateEnabled(bool)");
    bool rotateEnabled__ = rotateEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setRotateEnabled:),
        (BOOL)rotateEnabled__);
}

// public extern void setScrollEnabled(bool scrollEnabled) [instance] :30129
void MKMapView::setScrollEnabled(bool scrollEnabled_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setScrollEnabled(bool)");
    bool scrollEnabled__ = scrollEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setScrollEnabled:),
        (BOOL)scrollEnabled__);
}

// public extern void setSelectedAnnotations(iOS.Foundation.NSArray selectedAnnotations) [instance] :30180
void MKMapView::setSelectedAnnotations(::g::iOS::Foundation::NSArray* selectedAnnotations_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setSelectedAnnotations(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setSelectedAnnotations:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)selectedAnnotations_));
}

// public extern void setShowsBuildings(bool showsBuildings) [instance] :30153
void MKMapView::setShowsBuildings(bool showsBuildings_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setShowsBuildings(bool)");
    bool showsBuildings__ = showsBuildings_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setShowsBuildings:),
        (BOOL)showsBuildings__);
}

// public extern void setShowsPointsOfInterest(bool showsPointsOfInterest) [instance] :30147
void MKMapView::setShowsPointsOfInterest(bool showsPointsOfInterest_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setShowsPointsOfInterest(bool)");
    bool showsPointsOfInterest__ = showsPointsOfInterest_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setShowsPointsOfInterest:),
        (BOOL)showsPointsOfInterest__);
}

// public extern void setShowsUserLocation(bool showsUserLocation) [instance] :30159
void MKMapView::setShowsUserLocation(bool showsUserLocation_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setShowsUserLocation(bool)");
    bool showsUserLocation__ = showsUserLocation_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setShowsUserLocation:),
        (BOOL)showsUserLocation__);
}

// public extern void setUserTrackingMode(iOS.MapKit.MKUserTrackingMode userTrackingMode) [instance] :30168
void MKMapView::setUserTrackingMode(int userTrackingMode_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setUserTrackingMode(iOS.MapKit.MKUserTrackingMode)");
    int userTrackingMode__ = userTrackingMode_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setUserTrackingMode:),
        ::MKUserTrackingMode(userTrackingMode__));
}

// public extern void setUserTrackingModeAnimated(iOS.MapKit.MKUserTrackingMode mode, bool animated) [instance] :30051
void MKMapView::setUserTrackingModeAnimated(int mode_, bool animated_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setUserTrackingModeAnimated(iOS.MapKit.MKUserTrackingMode,bool)");
    int mode__ = mode_;
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setUserTrackingMode:animated:),
        ::MKUserTrackingMode(mode__),
        (BOOL)animated__);
}

// public extern void setVisibleMapRect(iOS.MapKit.MKMapRect visibleMapRect) [instance] :30111
void MKMapView::setVisibleMapRect(::g::iOS::MapKit::MKMapRect visibleMapRect_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setVisibleMapRect(iOS.MapKit.MKMapRect)");
    ::g::iOS::MapKit::MKMapRect visibleMapRect__ = visibleMapRect_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setVisibleMapRect:),
        uObjC::Struct::FromUno_MKMapRect(visibleMapRect__, ::MKMapRect()));
}

// public extern void setVisibleMapRectAnimated(iOS.MapKit.MKMapRect mapRect, bool animate) [instance] :30024
void MKMapView::setVisibleMapRectAnimated(::g::iOS::MapKit::MKMapRect mapRect_, bool animate_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setVisibleMapRectAnimated(iOS.MapKit.MKMapRect,bool)");
    ::g::iOS::MapKit::MKMapRect mapRect__ = mapRect_;
    bool animate__ = animate_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setVisibleMapRect:animated:),
        uObjC::Struct::FromUno_MKMapRect(mapRect__, ::MKMapRect()),
        (BOOL)animate__);
}

// public extern void setVisibleMapRectEdgePaddingAnimated(iOS.MapKit.MKMapRect mapRect, iOS.UIKit.UIEdgeInsets insets, bool animate) [instance] :30030
void MKMapView::setVisibleMapRectEdgePaddingAnimated(::g::iOS::MapKit::MKMapRect mapRect_, ::g::iOS::UIKit::UIEdgeInsets insets_, bool animate_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setVisibleMapRectEdgePaddingAnimated(iOS.MapKit.MKMapRect,iOS.UIKit.UIEdgeInsets,bool)");
    ::g::iOS::MapKit::MKMapRect mapRect__ = mapRect_;
    ::g::iOS::UIKit::UIEdgeInsets insets__ = insets_;
    bool animate__ = animate_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setVisibleMapRect:edgePadding:animated:),
        uObjC::Struct::FromUno_MKMapRect(mapRect__, ::MKMapRect()),
        uObjC::Struct::FromUno_UIEdgeInsets(insets__, ::UIEdgeInsets()),
        (BOOL)animate__);
}

// public extern void setZoomEnabled(bool zoomEnabled) [instance] :30123
void MKMapView::setZoomEnabled(bool zoomEnabled_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "setZoomEnabled(bool)");
    bool zoomEnabled__ = zoomEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setZoomEnabled:),
        (BOOL)zoomEnabled__);
}

// public extern void showAnnotationsAnimated(iOS.Foundation.NSArray annotations, bool animated) [instance] :30081
void MKMapView::showAnnotationsAnimated(::g::iOS::Foundation::NSArray* annotations_, bool animated_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "showAnnotationsAnimated(iOS.Foundation.NSArray,bool)");
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(showAnnotations:animated:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)annotations_),
        (BOOL)animated__);
}

// public extern bool showsBuildings() [instance] :30150
bool MKMapView::showsBuildings()
{
    uStackFrame __("iOS.MapKit.MKMapView", "showsBuildings()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(showsBuildings));
    return (bool)__return;
}

// public bool get_ShowsBuildings() [instance] :29967
bool MKMapView::ShowsBuildings()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_ShowsBuildings()");
    return showsBuildings();
}

// public void set_ShowsBuildings(bool value) [instance] :29968
void MKMapView::ShowsBuildings(bool value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_ShowsBuildings(bool)");
    setShowsBuildings(value);
}

// public extern bool showsPointsOfInterest() [instance] :30144
bool MKMapView::showsPointsOfInterest()
{
    uStackFrame __("iOS.MapKit.MKMapView", "showsPointsOfInterest()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(showsPointsOfInterest));
    return (bool)__return;
}

// public bool get_ShowsPointsOfInterest() [instance] :29961
bool MKMapView::ShowsPointsOfInterest()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_ShowsPointsOfInterest()");
    return showsPointsOfInterest();
}

// public void set_ShowsPointsOfInterest(bool value) [instance] :29962
void MKMapView::ShowsPointsOfInterest(bool value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_ShowsPointsOfInterest(bool)");
    setShowsPointsOfInterest(value);
}

// public extern bool showsUserLocation() [instance] :30156
bool MKMapView::showsUserLocation()
{
    uStackFrame __("iOS.MapKit.MKMapView", "showsUserLocation()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(showsUserLocation));
    return (bool)__return;
}

// public bool get_ShowsUserLocation() [instance] :29973
bool MKMapView::ShowsUserLocation()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_ShowsUserLocation()");
    return showsUserLocation();
}

// public void set_ShowsUserLocation(bool value) [instance] :29974
void MKMapView::ShowsUserLocation(bool value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_ShowsUserLocation(bool)");
    setShowsUserLocation(value);
}

// public extern iOS.MapKit.MKUserLocation userLocation() [instance] :30162
::g::iOS::MapKit::MKUserLocation* MKMapView::userLocation()
{
    uStackFrame __("iOS.MapKit.MKMapView", "userLocation()");
    ::MKUserLocation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKUserLocation*, @selector(userLocation));
    return (::g::iOS::MapKit::MKUserLocation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::MapKit::MKUserLocation_typeof());
}

// public iOS.MapKit.MKUserLocation get_UserLocation() [instance] :29979
::g::iOS::MapKit::MKUserLocation* MKMapView::UserLocation()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_UserLocation()");
    return userLocation();
}

// public bool get_UserLocationVisible() [instance] :29990
bool MKMapView::UserLocationVisible()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_UserLocationVisible()");
    return isUserLocationVisible();
}

// public extern iOS.MapKit.MKUserTrackingMode userTrackingMode() [instance] :30165
int MKMapView::userTrackingMode()
{
    uStackFrame __("iOS.MapKit.MKMapView", "userTrackingMode()");
    ::MKUserTrackingMode __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKUserTrackingMode, @selector(userTrackingMode));
    return int(__return);
}

// public iOS.MapKit.MKUserTrackingMode get_UserTrackingMode() [instance] :29984
int MKMapView::UserTrackingMode()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_UserTrackingMode()");
    return userTrackingMode();
}

// public void set_UserTrackingMode(iOS.MapKit.MKUserTrackingMode value) [instance] :29985
void MKMapView::UserTrackingMode(int value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_UserTrackingMode(iOS.MapKit.MKUserTrackingMode)");
    setUserTrackingMode(value);
}

// public extern iOS.MapKit.MKAnnotationView viewForAnnotation(iOS.MapKit.IMKAnnotation annotation) [instance] :30069
::g::iOS::MapKit::MKAnnotationView* MKMapView::viewForAnnotation(uObject* annotation_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "viewForAnnotation(iOS.MapKit.IMKAnnotation)");
    ::MKAnnotationView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKAnnotationView*, @selector(viewForAnnotation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)annotation_, ::g::iOS::MapKit::IMKAnnotation_typeof()));
    return (::g::iOS::MapKit::MKAnnotationView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::MapKit::MKAnnotationView_typeof());
}

// public extern iOS.MapKit.MKOverlayView viewForOverlay(iOS.MapKit.IMKOverlay overlay) [instance] :30216
::g::iOS::MapKit::MKOverlayView* MKMapView::viewForOverlay(uObject* overlay_)
{
    uStackFrame __("iOS.MapKit.MKMapView", "viewForOverlay(iOS.MapKit.IMKOverlay)");
    ::MKOverlayView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKOverlayView*, @selector(viewForOverlay:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)overlay_, ::g::iOS::MapKit::IMKOverlay_typeof()));
    return (::g::iOS::MapKit::MKOverlayView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::MapKit::MKOverlayView_typeof());
}

// public extern iOS.MapKit.MKMapRect visibleMapRect() [instance] :30108
::g::iOS::MapKit::MKMapRect MKMapView::visibleMapRect()
{
    uStackFrame __("iOS.MapKit.MKMapView", "visibleMapRect()");
    ::MKMapRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::MKMapRect, @selector(visibleMapRect));
    return uObjC::Struct::ToUno_MKMapRect(__return, ::g::iOS::MapKit::MKMapRect());
}

// public iOS.MapKit.MKMapRect get_VisibleMapRect() [instance] :29925
::g::iOS::MapKit::MKMapRect MKMapView::VisibleMapRect()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_VisibleMapRect()");
    return visibleMapRect();
}

// public void set_VisibleMapRect(iOS.MapKit.MKMapRect value) [instance] :29926
void MKMapView::VisibleMapRect(::g::iOS::MapKit::MKMapRect value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_VisibleMapRect(iOS.MapKit.MKMapRect)");
    setVisibleMapRect(value);
}

// public bool get_ZoomEnabled() [instance] :29937
bool MKMapView::ZoomEnabled()
{
    uStackFrame __("iOS.MapKit.MKMapView", "get_ZoomEnabled()");
    return isZoomEnabled();
}

// public void set_ZoomEnabled(bool value) [instance] :29938
void MKMapView::ZoomEnabled(bool value)
{
    uStackFrame __("iOS.MapKit.MKMapView", "set_ZoomEnabled(bool)");
    setZoomEnabled(value);
}

// public MKMapView New() [static] :29892
MKMapView* MKMapView::New9()
{
    MKMapView* obj1 = (MKMapView*)uNew(MKMapView_typeof());
    obj1->ctor_8();
    return obj1;
}

// public MKMapView New(ObjC.ID __id) [static] :29894
MKMapView* MKMapView::New10(::id __id1)
{
    MKMapView* obj2 = (MKMapView*)uNew(MKMapView_typeof());
    obj2->ctor_9(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::MapKit
