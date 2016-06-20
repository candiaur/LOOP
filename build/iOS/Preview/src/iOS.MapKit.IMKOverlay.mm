// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE MKOverlay
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::IMKOverlay_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.MapKit.IMKOverlay.h>
#include <Uno.Bool.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace MapKit{

// public abstract extern interface IMKOverlay :1945
// {
uInterfaceType* IMKOverlay_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("iOS.MapKit.IMKOverlay", 0, 0);
    type->Reflection.SetFunctions(7,
        new uFunction("boundingMapRect", NULL, NULL, offsetof(IMKOverlay, fp_boundingMapRect), false, ::g::iOS::MapKit::MKMapRect_typeof(), 0),
        new uFunction("canReplaceMapContent", NULL, NULL, offsetof(IMKOverlay, fp_canReplaceMapContent), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("coordinate", NULL, NULL, offsetof(IMKOverlay, fp_coordinate), false, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof(), 0),
        new uFunction("intersectsMapRect", NULL, NULL, offsetof(IMKOverlay, fp_intersectsMapRect), false, ::g::Uno::Bool_typeof(), 1, ::g::iOS::MapKit::MKMapRect_typeof()),
        new uFunction("setCoordinate", NULL, NULL, offsetof(IMKOverlay, fp_setCoordinate), false, uVoid_typeof(), 1, ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof()),
        new uFunction("subtitle", NULL, NULL, offsetof(IMKOverlay, fp_subtitle), false, ::g::Uno::String_typeof(), 0),
        new uFunction("title", NULL, NULL, offsetof(IMKOverlay, fp_title), false, ::g::Uno::String_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::MapKit
