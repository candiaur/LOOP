#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE MKMapViewDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::IMKMapViewDelegate_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewRegionWillChangeAnimated(iOS.MapKit.MKMapView,bool):IsStripped}
- (void) mapView:(MKMapView *)mapView regionWillChangeAnimated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewRegionWillChangeAnimated(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewRegionDidChangeAnimated(iOS.MapKit.MKMapView,bool):IsStripped}
- (void) mapView:(MKMapView *)mapView regionDidChangeAnimated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewRegionDidChangeAnimated(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewWillStartLoadingMap(iOS.MapKit.MKMapView):IsStripped}
- (void) mapViewWillStartLoadingMap:(MKMapView *)mapView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewWillStartLoadingMap(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidFinishLoadingMap(iOS.MapKit.MKMapView):IsStripped}
- (void) mapViewDidFinishLoadingMap:(MKMapView *)mapView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidFinishLoadingMap(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidFailLoadingMapWithError(iOS.MapKit.MKMapView,iOS.Foundation.NSError):IsStripped}
- (void) mapViewDidFailLoadingMap:(MKMapView *)mapView withError:(NSError *)error
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidFailLoadingMapWithError(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (::g::iOS::Foundation::NSError*)uObjC::Lifetime::GetUnoObject(error, ::g::iOS::Foundation::NSError_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewWillStartRenderingMap(iOS.MapKit.MKMapView):IsStripped}
- (void) mapViewWillStartRenderingMap:(MKMapView *)mapView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewWillStartRenderingMap(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidFinishRenderingMapFullyRendered(iOS.MapKit.MKMapView,bool):IsStripped}
- (void) mapViewDidFinishRenderingMap:(MKMapView *)mapView fullyRendered:(BOOL)fullyRendered
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidFinishRenderingMapFullyRendered(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (bool)fullyRendered);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewViewForAnnotation(iOS.MapKit.MKMapView,iOS.MapKit.IMKAnnotation):IsStripped}
- (MKAnnotationView *) mapView:(MKMapView *)mapView viewForAnnotation:(id<MKAnnotation>)annotation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKAnnotationView* __return = ::g::iOS::MapKit::IMKMapViewDelegate::mapViewViewForAnnotation(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), uObjC::Lifetime::GetUnoObject(annotation, ::g::iOS::MapKit::Interop::IMKAnnotation_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidAddAnnotationViews(iOS.MapKit.MKMapView,iOS.Foundation.NSArray):IsStripped}
- (void) mapView:(MKMapView *)mapView didAddAnnotationViews:(NSArray *)views
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidAddAnnotationViews(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(views, ::g::iOS::Foundation::NSArray_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewAnnotationViewCalloutAccessoryControlTapped(iOS.MapKit.MKMapView,iOS.MapKit.MKAnnotationView,iOS.UIKit.UIControl):IsStripped}
- (void) mapView:(MKMapView *)mapView annotationView:(MKAnnotationView *)view calloutAccessoryControlTapped:(UIControl *)control
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewAnnotationViewCalloutAccessoryControlTapped(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (::g::iOS::MapKit::MKAnnotationView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::MapKit::MKAnnotationView_typeof()), (::g::iOS::UIKit::UIControl*)uObjC::Lifetime::GetUnoObject(control, ::g::iOS::UIKit::UIControl_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidSelectAnnotationView(iOS.MapKit.MKMapView,iOS.MapKit.MKAnnotationView):IsStripped}
- (void) mapView:(MKMapView *)mapView didSelectAnnotationView:(MKAnnotationView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidSelectAnnotationView(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (::g::iOS::MapKit::MKAnnotationView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::MapKit::MKAnnotationView_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidDeselectAnnotationView(iOS.MapKit.MKMapView,iOS.MapKit.MKAnnotationView):IsStripped}
- (void) mapView:(MKMapView *)mapView didDeselectAnnotationView:(MKAnnotationView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidDeselectAnnotationView(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (::g::iOS::MapKit::MKAnnotationView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::MapKit::MKAnnotationView_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewWillStartLocatingUser(iOS.MapKit.MKMapView):IsStripped}
- (void) mapViewWillStartLocatingUser:(MKMapView *)mapView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewWillStartLocatingUser(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidStopLocatingUser(iOS.MapKit.MKMapView):IsStripped}
- (void) mapViewDidStopLocatingUser:(MKMapView *)mapView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidStopLocatingUser(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidUpdateUserLocation(iOS.MapKit.MKMapView,iOS.MapKit.MKUserLocation):IsStripped}
- (void) mapView:(MKMapView *)mapView didUpdateUserLocation:(MKUserLocation *)userLocation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidUpdateUserLocation(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (::g::iOS::MapKit::MKUserLocation*)uObjC::Lifetime::GetUnoObject(userLocation, ::g::iOS::MapKit::MKUserLocation_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidFailToLocateUserWithError(iOS.MapKit.MKMapView,iOS.Foundation.NSError):IsStripped}
- (void) mapView:(MKMapView *)mapView didFailToLocateUserWithError:(NSError *)error
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidFailToLocateUserWithError(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (::g::iOS::Foundation::NSError*)uObjC::Lifetime::GetUnoObject(error, ::g::iOS::Foundation::NSError_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewAnnotationViewDidChangeDragStateFromOldState(iOS.MapKit.MKMapView,iOS.MapKit.MKAnnotationView,iOS.MapKit.MKAnnotationViewDragState,iOS.MapKit.MKAnnotationViewDragState):IsStripped}
- (void) mapView:(MKMapView *)mapView annotationView:(MKAnnotationView *)view didChangeDragState:(MKAnnotationViewDragState)newState fromOldState:(MKAnnotationViewDragState)oldState
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewAnnotationViewDidChangeDragStateFromOldState(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (::g::iOS::MapKit::MKAnnotationView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::MapKit::MKAnnotationView_typeof()), uint32_t(newState), uint32_t(oldState));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidChangeUserTrackingModeAnimated(iOS.MapKit.MKMapView,iOS.MapKit.MKUserTrackingMode,bool):IsStripped}
- (void) mapView:(MKMapView *)mapView didChangeUserTrackingMode:(MKUserTrackingMode)mode animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidChangeUserTrackingModeAnimated(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), int(mode), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewRendererForOverlay(iOS.MapKit.MKMapView,iOS.MapKit.IMKOverlay):IsStripped}
- (MKOverlayRenderer *) mapView:(MKMapView *)mapView rendererForOverlay:(id<MKOverlay>)overlay
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKOverlayRenderer* __return = ::g::iOS::MapKit::IMKMapViewDelegate::mapViewRendererForOverlay(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidAddOverlayRenderers(iOS.MapKit.MKMapView,iOS.Foundation.NSArray):IsStripped}
- (void) mapView:(MKMapView *)mapView didAddOverlayRenderers:(NSArray *)renderers
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidAddOverlayRenderers(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(renderers, ::g::iOS::Foundation::NSArray_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewViewForOverlay(iOS.MapKit.MKMapView,iOS.MapKit.IMKOverlay):IsStripped}
- (MKOverlayView *) mapView:(MKMapView *)mapView viewForOverlay:(id<MKOverlay>)overlay
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::MKOverlayView* __return = ::g::iOS::MapKit::IMKMapViewDelegate::mapViewViewForOverlay(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), uObjC::Lifetime::GetUnoObject(overlay, ::g::iOS::MapKit::Interop::IMKOverlay_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.MapKit.IMKMapViewDelegate.mapViewDidAddOverlayViews(iOS.MapKit.MKMapView,iOS.Foundation.NSArray):IsStripped}
- (void) mapView:(MKMapView *)mapView didAddOverlayViews:(NSArray *)overlayViews
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::MapKit::IMKMapViewDelegate::mapViewDidAddOverlayViews(uInterface(__this, ::g::iOS::MapKit::IMKMapViewDelegate_typeof()), (::g::iOS::MapKit::MKMapView*)uObjC::Lifetime::GetUnoObject(mapView, ::g::iOS::MapKit::MKMapView_typeof()), (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(overlayViews, ::g::iOS::Foundation::NSArray_typeof()));
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
