// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUICoordinateSpace.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGPoint;}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace CoreLocation{struct CLLocationCoordinate2D;}}}
namespace g{namespace iOS{namespace Foundation{struct NSArray;}}}
namespace g{namespace iOS{namespace Foundation{struct NSSet;}}}
namespace g{namespace iOS{namespace MapKit{struct MKAnnotationView;}}}
namespace g{namespace iOS{namespace MapKit{struct MKCoordinateRegion;}}}
namespace g{namespace iOS{namespace MapKit{struct MKMapCamera;}}}
namespace g{namespace iOS{namespace MapKit{struct MKMapRect;}}}
namespace g{namespace iOS{namespace MapKit{struct MKMapView;}}}
namespace g{namespace iOS{namespace MapKit{struct MKOverlayRenderer;}}}
namespace g{namespace iOS{namespace MapKit{struct MKOverlayView;}}}
namespace g{namespace iOS{namespace MapKit{struct MKUserLocation;}}}
namespace g{namespace iOS{namespace UIKit{struct UIEdgeInsets;}}}

namespace g{
namespace iOS{
namespace MapKit{

// public extern class MKMapView :29889
// {
::g::iOS::UIKit::UIView_type* MKMapView_typeof();
void MKMapView__ctor_8_fn(MKMapView* __this);
void MKMapView__ctor_9_fn(MKMapView* __this, ::id* __id1);
void MKMapView__addAnnotation_fn(MKMapView* __this, uObject* annotation_);
void MKMapView__addAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* annotations_);
void MKMapView__addOverlay_fn(MKMapView* __this, uObject* overlay_);
void MKMapView__addOverlayLevel_fn(MKMapView* __this, uObject* overlay_, int* level_);
void MKMapView__addOverlays_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* overlays_);
void MKMapView__addOverlaysLevel_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* overlays_, int* level_);
void MKMapView__annotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval);
void MKMapView__get_Annotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval);
void MKMapView__annotationsInMapRect_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, ::g::iOS::Foundation::NSSet** __retval);
void MKMapView__annotationVisibleRect_fn(MKMapView* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void MKMapView__get_AnnotationVisibleRect_fn(MKMapView* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void MKMapView__camera_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapCamera** __retval);
void MKMapView__get_Camera_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapCamera** __retval);
void MKMapView__set_Camera_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapCamera* value);
void MKMapView__centerCoordinate_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval);
void MKMapView__get_CenterCoordinate_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval);
void MKMapView__set_CenterCoordinate_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* value);
void MKMapView__convertCoordinateToPointToView_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* coordinate_, ::g::iOS::UIKit::UIView* view_, ::g::iOS::CoreGraphics::CGPoint* __retval);
void MKMapView__convertPointToCoordinateFromView_fn(MKMapView* __this, ::g::iOS::CoreGraphics::CGPoint* point_, ::g::iOS::UIKit::UIView* view_, ::g::iOS::CoreLocation::CLLocationCoordinate2D* __retval);
void MKMapView__convertRectToRegionFromView_fn(MKMapView* __this, ::g::iOS::CoreGraphics::CGRect* rect_, ::g::iOS::UIKit::UIView* view_, ::g::iOS::MapKit::MKCoordinateRegion* __retval);
void MKMapView__convertRegionToRectToView_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* region_, ::g::iOS::UIKit::UIView* view_, ::g::iOS::CoreGraphics::CGRect* __retval);
void MKMapView__get_Delegate_fn(MKMapView* __this, uObject** __retval);
void MKMapView__set_Delegate_fn(MKMapView* __this, uObject* value);
void MKMapView__delegate__fn(MKMapView* __this, uObject** __retval);
void MKMapView__dequeueReusableAnnotationViewWithIdentifier_fn(MKMapView* __this, uString* identifier_, ::g::iOS::MapKit::MKAnnotationView** __retval);
void MKMapView__deselectAnnotationAnimated_fn(MKMapView* __this, uObject* annotation_, bool* animated_);
void MKMapView__exchangeOverlayAtIndexWithOverlayAtIndex_fn(MKMapView* __this, uint64_t* index1_, uint64_t* index2_);
void MKMapView__exchangeOverlayWithOverlay_fn(MKMapView* __this, uObject* overlay1_, uObject* overlay2_);
void MKMapView__insertOverlayAboveOverlay_fn(MKMapView* __this, uObject* overlay_, uObject* sibling_);
void MKMapView__insertOverlayAtIndex_fn(MKMapView* __this, uObject* overlay_, uint64_t* index_);
void MKMapView__insertOverlayAtIndexLevel_fn(MKMapView* __this, uObject* overlay_, uint64_t* index_, int* level_);
void MKMapView__insertOverlayBelowOverlay_fn(MKMapView* __this, uObject* overlay_, uObject* sibling_);
void MKMapView__isPitchEnabled_fn(MKMapView* __this, bool* __retval);
void MKMapView__isRotateEnabled_fn(MKMapView* __this, bool* __retval);
void MKMapView__isScrollEnabled_fn(MKMapView* __this, bool* __retval);
void MKMapView__isUserLocationVisible_fn(MKMapView* __this, bool* __retval);
void MKMapView__isZoomEnabled_fn(MKMapView* __this, bool* __retval);
void MKMapView__mapRectThatFits_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, ::g::iOS::MapKit::MKMapRect* __retval);
void MKMapView__mapRectThatFitsEdgePadding_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, ::g::iOS::UIKit::UIEdgeInsets* insets_, ::g::iOS::MapKit::MKMapRect* __retval);
void MKMapView__mapType_fn(MKMapView* __this, uint32_t* __retval);
void MKMapView__get_MapType_fn(MKMapView* __this, uint32_t* __retval);
void MKMapView__set_MapType_fn(MKMapView* __this, uint32_t* value);
void MKMapView__New9_fn(MKMapView** __retval);
void MKMapView__New10_fn(::id* __id1, MKMapView** __retval);
void MKMapView__overlays_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval);
void MKMapView__get_Overlays_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval);
void MKMapView__overlaysInLevel_fn(MKMapView* __this, int* level_, ::g::iOS::Foundation::NSArray** __retval);
void MKMapView__get_PitchEnabled_fn(MKMapView* __this, bool* __retval);
void MKMapView__set_PitchEnabled_fn(MKMapView* __this, bool* value);
void MKMapView__region_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* __retval);
void MKMapView__get_Region_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* __retval);
void MKMapView__set_Region_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* value);
void MKMapView__regionThatFits_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* region_, ::g::iOS::MapKit::MKCoordinateRegion* __retval);
void MKMapView__removeAnnotation_fn(MKMapView* __this, uObject* annotation_);
void MKMapView__removeAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* annotations_);
void MKMapView__removeOverlay_fn(MKMapView* __this, uObject* overlay_);
void MKMapView__removeOverlays_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* overlays_);
void MKMapView__rendererForOverlay_fn(MKMapView* __this, uObject* overlay_, ::g::iOS::MapKit::MKOverlayRenderer** __retval);
void MKMapView__get_RotateEnabled_fn(MKMapView* __this, bool* __retval);
void MKMapView__set_RotateEnabled_fn(MKMapView* __this, bool* value);
void MKMapView__get_ScrollEnabled_fn(MKMapView* __this, bool* __retval);
void MKMapView__set_ScrollEnabled_fn(MKMapView* __this, bool* value);
void MKMapView__selectAnnotationAnimated_fn(MKMapView* __this, uObject* annotation_, bool* animated_);
void MKMapView__selectedAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval);
void MKMapView__get_SelectedAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray** __retval);
void MKMapView__set_SelectedAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* value);
void MKMapView__setCamera_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapCamera* camera_);
void MKMapView__setCameraAnimated_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapCamera* camera_, bool* animated_);
void MKMapView__setCenterCoordinate_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* centerCoordinate_);
void MKMapView__setCenterCoordinateAnimated_fn(MKMapView* __this, ::g::iOS::CoreLocation::CLLocationCoordinate2D* coordinate_, bool* animated_);
void MKMapView__setDelegate_fn(MKMapView* __this, uObject* delegate__);
void MKMapView__setMapType_fn(MKMapView* __this, uint32_t* mapType_);
void MKMapView__setPitchEnabled_fn(MKMapView* __this, bool* pitchEnabled_);
void MKMapView__setRegion_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* region_);
void MKMapView__setRegionAnimated_fn(MKMapView* __this, ::g::iOS::MapKit::MKCoordinateRegion* region_, bool* animated_);
void MKMapView__setRotateEnabled_fn(MKMapView* __this, bool* rotateEnabled_);
void MKMapView__setScrollEnabled_fn(MKMapView* __this, bool* scrollEnabled_);
void MKMapView__setSelectedAnnotations_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* selectedAnnotations_);
void MKMapView__setShowsBuildings_fn(MKMapView* __this, bool* showsBuildings_);
void MKMapView__setShowsPointsOfInterest_fn(MKMapView* __this, bool* showsPointsOfInterest_);
void MKMapView__setShowsUserLocation_fn(MKMapView* __this, bool* showsUserLocation_);
void MKMapView__setUserTrackingMode_fn(MKMapView* __this, int* userTrackingMode_);
void MKMapView__setUserTrackingModeAnimated_fn(MKMapView* __this, int* mode_, bool* animated_);
void MKMapView__setVisibleMapRect_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* visibleMapRect_);
void MKMapView__setVisibleMapRectAnimated_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, bool* animate_);
void MKMapView__setVisibleMapRectEdgePaddingAnimated_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* mapRect_, ::g::iOS::UIKit::UIEdgeInsets* insets_, bool* animate_);
void MKMapView__setZoomEnabled_fn(MKMapView* __this, bool* zoomEnabled_);
void MKMapView__showAnnotationsAnimated_fn(MKMapView* __this, ::g::iOS::Foundation::NSArray* annotations_, bool* animated_);
void MKMapView__showsBuildings_fn(MKMapView* __this, bool* __retval);
void MKMapView__get_ShowsBuildings_fn(MKMapView* __this, bool* __retval);
void MKMapView__set_ShowsBuildings_fn(MKMapView* __this, bool* value);
void MKMapView__showsPointsOfInterest_fn(MKMapView* __this, bool* __retval);
void MKMapView__get_ShowsPointsOfInterest_fn(MKMapView* __this, bool* __retval);
void MKMapView__set_ShowsPointsOfInterest_fn(MKMapView* __this, bool* value);
void MKMapView__showsUserLocation_fn(MKMapView* __this, bool* __retval);
void MKMapView__get_ShowsUserLocation_fn(MKMapView* __this, bool* __retval);
void MKMapView__set_ShowsUserLocation_fn(MKMapView* __this, bool* value);
void MKMapView__userLocation_fn(MKMapView* __this, ::g::iOS::MapKit::MKUserLocation** __retval);
void MKMapView__get_UserLocation_fn(MKMapView* __this, ::g::iOS::MapKit::MKUserLocation** __retval);
void MKMapView__get_UserLocationVisible_fn(MKMapView* __this, bool* __retval);
void MKMapView__userTrackingMode_fn(MKMapView* __this, int* __retval);
void MKMapView__get_UserTrackingMode_fn(MKMapView* __this, int* __retval);
void MKMapView__set_UserTrackingMode_fn(MKMapView* __this, int* value);
void MKMapView__viewForAnnotation_fn(MKMapView* __this, uObject* annotation_, ::g::iOS::MapKit::MKAnnotationView** __retval);
void MKMapView__viewForOverlay_fn(MKMapView* __this, uObject* overlay_, ::g::iOS::MapKit::MKOverlayView** __retval);
void MKMapView__visibleMapRect_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* __retval);
void MKMapView__get_VisibleMapRect_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* __retval);
void MKMapView__set_VisibleMapRect_fn(MKMapView* __this, ::g::iOS::MapKit::MKMapRect* value);
void MKMapView__get_ZoomEnabled_fn(MKMapView* __this, bool* __retval);
void MKMapView__set_ZoomEnabled_fn(MKMapView* __this, bool* value);

struct MKMapView : ::g::iOS::UIKit::UIView
{
    void ctor_8();
    void ctor_9(::id __id1);
    void addAnnotation(uObject* annotation_);
    void addAnnotations(::g::iOS::Foundation::NSArray* annotations_);
    void addOverlay(uObject* overlay_);
    void addOverlayLevel(uObject* overlay_, int level_);
    void addOverlays(::g::iOS::Foundation::NSArray* overlays_);
    void addOverlaysLevel(::g::iOS::Foundation::NSArray* overlays_, int level_);
    ::g::iOS::Foundation::NSArray* annotations();
    ::g::iOS::Foundation::NSArray* Annotations();
    ::g::iOS::Foundation::NSSet* annotationsInMapRect(::g::iOS::MapKit::MKMapRect mapRect_);
    ::g::iOS::CoreGraphics::CGRect annotationVisibleRect();
    ::g::iOS::CoreGraphics::CGRect AnnotationVisibleRect();
    ::g::iOS::MapKit::MKMapCamera* camera();
    ::g::iOS::MapKit::MKMapCamera* Camera();
    void Camera(::g::iOS::MapKit::MKMapCamera* value);
    ::g::iOS::CoreLocation::CLLocationCoordinate2D centerCoordinate();
    ::g::iOS::CoreLocation::CLLocationCoordinate2D CenterCoordinate();
    void CenterCoordinate(::g::iOS::CoreLocation::CLLocationCoordinate2D value);
    ::g::iOS::CoreGraphics::CGPoint convertCoordinateToPointToView(::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate_, ::g::iOS::UIKit::UIView* view_);
    ::g::iOS::CoreLocation::CLLocationCoordinate2D convertPointToCoordinateFromView(::g::iOS::CoreGraphics::CGPoint point_, ::g::iOS::UIKit::UIView* view_);
    ::g::iOS::MapKit::MKCoordinateRegion convertRectToRegionFromView(::g::iOS::CoreGraphics::CGRect rect_, ::g::iOS::UIKit::UIView* view_);
    ::g::iOS::CoreGraphics::CGRect convertRegionToRectToView(::g::iOS::MapKit::MKCoordinateRegion region_, ::g::iOS::UIKit::UIView* view_);
    uObject* Delegate();
    void Delegate(uObject* value);
    uObject* delegate_();
    ::g::iOS::MapKit::MKAnnotationView* dequeueReusableAnnotationViewWithIdentifier(uString* identifier_);
    void deselectAnnotationAnimated(uObject* annotation_, bool animated_);
    void exchangeOverlayAtIndexWithOverlayAtIndex(uint64_t index1_, uint64_t index2_);
    void exchangeOverlayWithOverlay(uObject* overlay1_, uObject* overlay2_);
    void insertOverlayAboveOverlay(uObject* overlay_, uObject* sibling_);
    void insertOverlayAtIndex(uObject* overlay_, uint64_t index_);
    void insertOverlayAtIndexLevel(uObject* overlay_, uint64_t index_, int level_);
    void insertOverlayBelowOverlay(uObject* overlay_, uObject* sibling_);
    bool isPitchEnabled();
    bool isRotateEnabled();
    bool isScrollEnabled();
    bool isUserLocationVisible();
    bool isZoomEnabled();
    ::g::iOS::MapKit::MKMapRect mapRectThatFits(::g::iOS::MapKit::MKMapRect mapRect_);
    ::g::iOS::MapKit::MKMapRect mapRectThatFitsEdgePadding(::g::iOS::MapKit::MKMapRect mapRect_, ::g::iOS::UIKit::UIEdgeInsets insets_);
    uint32_t mapType();
    uint32_t MapType();
    void MapType(uint32_t value);
    ::g::iOS::Foundation::NSArray* overlays();
    ::g::iOS::Foundation::NSArray* Overlays();
    ::g::iOS::Foundation::NSArray* overlaysInLevel(int level_);
    bool PitchEnabled();
    void PitchEnabled(bool value);
    ::g::iOS::MapKit::MKCoordinateRegion region();
    ::g::iOS::MapKit::MKCoordinateRegion Region();
    void Region(::g::iOS::MapKit::MKCoordinateRegion value);
    ::g::iOS::MapKit::MKCoordinateRegion regionThatFits(::g::iOS::MapKit::MKCoordinateRegion region_);
    void removeAnnotation(uObject* annotation_);
    void removeAnnotations(::g::iOS::Foundation::NSArray* annotations_);
    void removeOverlay(uObject* overlay_);
    void removeOverlays(::g::iOS::Foundation::NSArray* overlays_);
    ::g::iOS::MapKit::MKOverlayRenderer* rendererForOverlay(uObject* overlay_);
    bool RotateEnabled();
    void RotateEnabled(bool value);
    bool ScrollEnabled();
    void ScrollEnabled(bool value);
    void selectAnnotationAnimated(uObject* annotation_, bool animated_);
    ::g::iOS::Foundation::NSArray* selectedAnnotations();
    ::g::iOS::Foundation::NSArray* SelectedAnnotations();
    void SelectedAnnotations(::g::iOS::Foundation::NSArray* value);
    void setCamera(::g::iOS::MapKit::MKMapCamera* camera_);
    void setCameraAnimated(::g::iOS::MapKit::MKMapCamera* camera_, bool animated_);
    void setCenterCoordinate(::g::iOS::CoreLocation::CLLocationCoordinate2D centerCoordinate_);
    void setCenterCoordinateAnimated(::g::iOS::CoreLocation::CLLocationCoordinate2D coordinate_, bool animated_);
    void setDelegate(uObject* delegate__);
    void setMapType(uint32_t mapType_);
    void setPitchEnabled(bool pitchEnabled_);
    void setRegion(::g::iOS::MapKit::MKCoordinateRegion region_);
    void setRegionAnimated(::g::iOS::MapKit::MKCoordinateRegion region_, bool animated_);
    void setRotateEnabled(bool rotateEnabled_);
    void setScrollEnabled(bool scrollEnabled_);
    void setSelectedAnnotations(::g::iOS::Foundation::NSArray* selectedAnnotations_);
    void setShowsBuildings(bool showsBuildings_);
    void setShowsPointsOfInterest(bool showsPointsOfInterest_);
    void setShowsUserLocation(bool showsUserLocation_);
    void setUserTrackingMode(int userTrackingMode_);
    void setUserTrackingModeAnimated(int mode_, bool animated_);
    void setVisibleMapRect(::g::iOS::MapKit::MKMapRect visibleMapRect_);
    void setVisibleMapRectAnimated(::g::iOS::MapKit::MKMapRect mapRect_, bool animate_);
    void setVisibleMapRectEdgePaddingAnimated(::g::iOS::MapKit::MKMapRect mapRect_, ::g::iOS::UIKit::UIEdgeInsets insets_, bool animate_);
    void setZoomEnabled(bool zoomEnabled_);
    void showAnnotationsAnimated(::g::iOS::Foundation::NSArray* annotations_, bool animated_);
    bool showsBuildings();
    bool ShowsBuildings();
    void ShowsBuildings(bool value);
    bool showsPointsOfInterest();
    bool ShowsPointsOfInterest();
    void ShowsPointsOfInterest(bool value);
    bool showsUserLocation();
    bool ShowsUserLocation();
    void ShowsUserLocation(bool value);
    ::g::iOS::MapKit::MKUserLocation* userLocation();
    ::g::iOS::MapKit::MKUserLocation* UserLocation();
    bool UserLocationVisible();
    int userTrackingMode();
    int UserTrackingMode();
    void UserTrackingMode(int value);
    ::g::iOS::MapKit::MKAnnotationView* viewForAnnotation(uObject* annotation_);
    ::g::iOS::MapKit::MKOverlayView* viewForOverlay(uObject* overlay_);
    ::g::iOS::MapKit::MKMapRect visibleMapRect();
    ::g::iOS::MapKit::MKMapRect VisibleMapRect();
    void VisibleMapRect(::g::iOS::MapKit::MKMapRect value);
    bool ZoomEnabled();
    void ZoomEnabled(bool value);
    static MKMapView* New9();
    static MKMapView* New10(::id __id1);
};
// }

}}} // ::g::iOS::MapKit
