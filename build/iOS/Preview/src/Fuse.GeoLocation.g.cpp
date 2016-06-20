// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.GeoLocation.GeoCoordinates.h>
#include <Fuse.GeoLocation.GeoLocation.h>
#include <Fuse.GeoLocation.GeoLocationAuthorizationType.h>
#include <Fuse.GeoLocation.ILocationTracker.h>
#include <Fuse.GeoLocation.IOSLocationProvider.ContinuesListener.h>
#include <Fuse.GeoLocation.IOSLocationProvider.h>
#include <Fuse.GeoLocation.IOSLocationProvider.LocationListenerBase.h>
#include <Fuse.GeoLocation.IOSLocationProvider.PromiseListener.h>
#include <Fuse.GeoLocation.Location.h>
#include <Fuse.GeoLocation.LocationTracker.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.UpdateManager.h>
#include <iOS.CoreLocation.CLAuthorizationStatus.h>
#include <iOS.CoreLocation.CLBeaconRegion.h>
#include <iOS.CoreLocation.CLHeading.h>
#include <iOS.CoreLocation.CLLocation.h>
#include <iOS.CoreLocation.CLLocationCoordinate2D.h>
#include <iOS.CoreLocation.CLLocationManager.h>
#include <iOS.CoreLocation.CLRegion.h>
#include <iOS.CoreLocation.CLRegionState.h>
#include <iOS.CoreLocation.CLVisit.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSDate.h>
#include <iOS.Foundation.NSError.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <ObjC.Selector.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Time.CalendarSystem.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.ULong.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[20];
static uType* TYPES[28];

namespace g{
namespace Fuse{
namespace GeoLocation{

// /usr/local/share/uno/Packages/Fuse.GeoLocation/0.29.22/iOS/$.uno
// ----------------------------------------------------------------

// private class IOSLocationProvider.ContinuesListener :90
// {
static void IOSLocationProvider__ContinuesListener_build(uType* type)
{
    ::TYPES[0] = ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof();
    ::TYPES[1] = ::g::Uno::Delegate_typeof();
    type->SetInterfaces(
        ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof(), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type, interface0));
    type->SetFields(0,
        ::g::iOS::CoreLocation::CLLocationManager_typeof(), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider__ContinuesListener, _lm), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider__ContinuesListener, _onLocationUpdate), 0);
}

::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type* IOSLocationProvider__ContinuesListener_typeof()
{
    static uSStrong< ::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IOSLocationProvider__ContinuesListener);
    options.TypeSize = sizeof(::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type);
    type = (::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type*)uClassType::New("Fuse.GeoLocation.IOSLocationProvider.ContinuesListener", options);
    type->SetBase(::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_typeof());
    type->fp_build_ = IOSLocationProvider__ContinuesListener_build;
    type->fp_OnLocationChanged = (void(*)(::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase*, ::g::Fuse::GeoLocation::Location*))IOSLocationProvider__ContinuesListener__OnLocationChanged_fn;
    type->interface0.fp_locationManagerDidUpdateToLocationFromLocation = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLLocation*, ::g::iOS::CoreLocation::CLLocation*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateToLocationFromLocation_fn;
    type->interface0.fp_locationManagerDidUpdateLocations = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSArray*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateLocations_fn;
    type->interface0.fp_locationManagerDidUpdateHeading = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLHeading*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateHeading_fn;
    type->interface0.fp_locationManagerShouldDisplayHeadingCalibration = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, bool*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerShouldDisplayHeadingCalibration_fn;
    type->interface0.fp_locationManagerDidDetermineStateForRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, int*, ::g::iOS::CoreLocation::CLRegion*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidDetermineStateForRegion_fn;
    type->interface0.fp_locationManagerDidRangeBeaconsInRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSArray*, ::g::iOS::CoreLocation::CLBeaconRegion*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidRangeBeaconsInRegion_fn;
    type->interface0.fp_locationManagerRangingBeaconsDidFailForRegionWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLBeaconRegion*, ::g::iOS::Foundation::NSError*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerRangingBeaconsDidFailForRegionWithError_fn;
    type->interface0.fp_locationManagerDidEnterRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidEnterRegion_fn;
    type->interface0.fp_locationManagerDidExitRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidExitRegion_fn;
    type->interface0.fp_locationManagerDidFailWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSError*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidFailWithError_fn;
    type->interface0.fp_locationManagerMonitoringDidFailForRegionWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*, ::g::iOS::Foundation::NSError*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerMonitoringDidFailForRegionWithError_fn;
    type->interface0.fp_locationManagerDidChangeAuthorizationStatus = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, int*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidChangeAuthorizationStatus_fn;
    type->interface0.fp_locationManagerDidStartMonitoringForRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidStartMonitoringForRegion_fn;
    type->interface0.fp_locationManagerDidPauseLocationUpdates = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidPauseLocationUpdates_fn;
    type->interface0.fp_locationManagerDidResumeLocationUpdates = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidResumeLocationUpdates_fn;
    type->interface0.fp_locationManagerDidFinishDeferredUpdatesWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSError*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidFinishDeferredUpdatesWithError_fn;
    type->interface0.fp_locationManagerDidVisit = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLVisit*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidVisit_fn;
    return type;
}

// public ContinuesListener(iOS.CoreLocation.CLLocationManager lm) :95
void IOSLocationProvider__ContinuesListener__ctor_1_fn(IOSLocationProvider__ContinuesListener* __this, ::g::iOS::CoreLocation::CLLocationManager* lm)
{
    __this->ctor_1(lm);
}

// public ContinuesListener New(iOS.CoreLocation.CLLocationManager lm) :95
void IOSLocationProvider__ContinuesListener__New1_fn(::g::iOS::CoreLocation::CLLocationManager* lm, IOSLocationProvider__ContinuesListener** __retval)
{
    *__retval = IOSLocationProvider__ContinuesListener::New1(lm);
}

// protected override void OnLocationChanged(Fuse.GeoLocation.Location location) :115
void IOSLocationProvider__ContinuesListener__OnLocationChanged_fn(IOSLocationProvider__ContinuesListener* __this, ::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider.ContinuesListener", "OnLocationChanged(Fuse.GeoLocation.Location)");

    if (::g::Uno::Delegate::op_Inequality(__this->_onLocationUpdate, NULL))
        uPtr(__this->_onLocationUpdate)->InvokeVoid(location);
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationUpdate, Uno.Action<Uno.Exception> onLocationError) :101
void IOSLocationProvider__ContinuesListener__StartListening_fn(IOSLocationProvider__ContinuesListener* __this, uDelegate* onLocationUpdate, uDelegate* onLocationError)
{
    __this->StartListening(onLocationUpdate, onLocationError);
}

// public void StopListening() :108
void IOSLocationProvider__ContinuesListener__StopListening_fn(IOSLocationProvider__ContinuesListener* __this)
{
    __this->StopListening();
}

// public ContinuesListener(iOS.CoreLocation.CLLocationManager lm) [instance] :95
void IOSLocationProvider__ContinuesListener::ctor_1(::g::iOS::CoreLocation::CLLocationManager* lm)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider.ContinuesListener", ".ctor(iOS.CoreLocation.CLLocationManager)");
    ctor_();
    _lm = lm;
    uPtr(_lm)->Delegate((uObject*)this);
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationUpdate, Uno.Action<Uno.Exception> onLocationError) [instance] :101
void IOSLocationProvider__ContinuesListener::StartListening(uDelegate* onLocationUpdate, uDelegate* onLocationError)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider.ContinuesListener", "StartListening(Uno.Action<Fuse.GeoLocation.Location>,Uno.Action<Uno.Exception>)");
    _onLocationUpdate = onLocationUpdate;
    uPtr(_lm)->startUpdatingLocation();
    uPtr(_lm)->startMonitoringSignificantLocationChanges();
}

// public void StopListening() [instance] :108
void IOSLocationProvider__ContinuesListener::StopListening()
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider.ContinuesListener", "StopListening()");
    _onLocationUpdate = NULL;
    uPtr(_lm)->stopUpdatingLocation();
    uPtr(_lm)->stopMonitoringSignificantLocationChanges();
}

// public ContinuesListener New(iOS.CoreLocation.CLLocationManager lm) [static] :95
IOSLocationProvider__ContinuesListener* IOSLocationProvider__ContinuesListener::New1(::g::iOS::CoreLocation::CLLocationManager* lm)
{
    IOSLocationProvider__ContinuesListener* obj1 = (IOSLocationProvider__ContinuesListener*)uNew(IOSLocationProvider__ContinuesListener_typeof());
    obj1->ctor_1(lm);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.GeoLocation/0.29.22/$.uno
// ------------------------------------------------------------

// public sealed class GeoCoordinates :7
// {
static void GeoCoordinates_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" - ");
    ::TYPES[2] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::GeoCoordinates, _lat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::GeoCoordinates, _long), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Latitude", NULL, (void*)GeoCoordinates__get_Latitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Longitude", NULL, (void*)GeoCoordinates__get_Longitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)GeoCoordinates__New1_fn, 0, true, GeoCoordinates_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()));
}

uType* GeoCoordinates_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GeoCoordinates);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.GeoCoordinates", options);
    type->fp_build_ = GeoCoordinates_build;
    type->fp_ToString = (void(*)(uObject*, uString**))GeoCoordinates__ToString_fn;
    return type;
}

// public GeoCoordinates(double latitude, double longitude) :15
void GeoCoordinates__ctor__fn(GeoCoordinates* __this, double* latitude, double* longitude)
{
    __this->ctor_(*latitude, *longitude);
}

// public double get_Latitude() :12
void GeoCoordinates__get_Latitude_fn(GeoCoordinates* __this, double* __retval)
{
    *__retval = __this->Latitude();
}

// public double get_Longitude() :13
void GeoCoordinates__get_Longitude_fn(GeoCoordinates* __this, double* __retval)
{
    *__retval = __this->Longitude();
}

// public GeoCoordinates New(double latitude, double longitude) :15
void GeoCoordinates__New1_fn(double* latitude, double* longitude, GeoCoordinates** __retval)
{
    *__retval = GeoCoordinates::New1(*latitude, *longitude);
}

// public override sealed string ToString() :21
void GeoCoordinates__ToString_fn(GeoCoordinates* __this, uString** __retval)
{
    uStackFrame __("Fuse.GeoLocation.GeoCoordinates", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox(::g::Uno::Double_typeof(), __this->Latitude()), ::STRINGS[0/*" - "*/]), uBox(::g::Uno::Double_typeof(), __this->Longitude())), void();
}

// public GeoCoordinates(double latitude, double longitude) [instance] :15
void GeoCoordinates::ctor_(double latitude, double longitude)
{
    uStackFrame __("Fuse.GeoLocation.GeoCoordinates", ".ctor(double,double)");
    _lat = latitude;
    _long = longitude;
}

// public double get_Latitude() [instance] :12
double GeoCoordinates::Latitude()
{
    uStackFrame __("Fuse.GeoLocation.GeoCoordinates", "get_Latitude()");
    return _lat;
}

// public double get_Longitude() [instance] :13
double GeoCoordinates::Longitude()
{
    uStackFrame __("Fuse.GeoLocation.GeoCoordinates", "get_Longitude()");
    return _long;
}

// public GeoCoordinates New(double latitude, double longitude) [static] :15
GeoCoordinates* GeoCoordinates::New1(double latitude, double longitude)
{
    GeoCoordinates* obj1 = (GeoCoordinates*)uNew(GeoCoordinates_typeof());
    obj1->ctor_(latitude, longitude);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.GeoLocation/0.29.22/$.uno
// ------------------------------------------------------------

// public sealed class GeoLocation :54
// {
static void GeoLocation_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FuseJS/GeoLocation");
    ::STRINGS[2] = uString::Const("auhtorizationRequest");
    ::STRINGS[3] = uString::Const("startListening");
    ::STRINGS[4] = uString::Const("stopListening");
    ::STRINGS[5] = uString::Const("onChanged");
    ::STRINGS[6] = uString::Const("onError");
    ::STRINGS[7] = uString::Const("location");
    ::STRINGS[8] = uString::Const("getLocation");
    ::STRINGS[9] = uString::Const("latitude");
    ::STRINGS[10] = uString::Const("longitude");
    ::STRINGS[11] = uString::Const("accuracy");
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[5] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof());
    ::TYPES[6] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[7] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[8] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[11] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[12] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[13] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[14] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[15] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[16] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[17] = ::g::Uno::Int_typeof();
    ::TYPES[18] = uObject_typeof()->Array();
    ::TYPES[19] = ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::g::Fuse::GeoLocation::LocationTracker_typeof(), offsetof(::g::Fuse::GeoLocation::GeoLocation, _locationTracker), 0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), offsetof(::g::Fuse::GeoLocation::GeoLocation, _onChangedEvent), 0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), offsetof(::g::Fuse::GeoLocation::GeoLocation, _onErrorEvent), 0,
        GeoLocation_typeof(), (uintptr_t)&::g::Fuse::GeoLocation::GeoLocation::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GeoLocation__New2_fn, 0, true, GeoLocation_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GeoLocation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.GeoLocation.GeoLocation", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_build_ = GeoLocation_build;
    type->fp_ctor_ = (void*)GeoLocation__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public GeoLocation() :61
void GeoLocation__ctor_2_fn(GeoLocation* __this)
{
    __this->ctor_2();
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) :138
void GeoLocation__AuthorizationRequestConverter_fn(::g::Fuse::Scripting::Context* context, int* type, int* __retval)
{
    *__retval = GeoLocation::AuthorizationRequestConverter(context, *type);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) :189
void GeoLocation__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = GeoLocation::Converter(context, location);
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() :154
void GeoLocation__GetAuhtorizationRequest_fn(GeoLocation* __this, int* __retval)
{
    *__retval = __this->GetAuhtorizationRequest();
}

// private Fuse.GeoLocation.Location GetLocation() :170
void GeoLocation__GetLocation_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLocation();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) :183
void GeoLocation__GetLocationAsync_fn(GeoLocation* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(args);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) :121
void GeoLocation__LocationChanged_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location* location)
{
    __this->LocationChanged(location);
}

// private void LocationError(string error) :133
void GeoLocation__LocationError_fn(GeoLocation* __this, uString* error)
{
    __this->LocationError(error);
}

// public GeoLocation New() :61
void GeoLocation__New2_fn(GeoLocation** __retval)
{
    *__retval = GeoLocation::New2();
}

// private void SetAuhtorizationRequest(int value) :149
void GeoLocation__SetAuhtorizationRequest_fn(GeoLocation* __this, int* value)
{
    __this->SetAuhtorizationRequest(*value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) :94
void GeoLocation__StartListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StartListening(c, args);
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) :108
void GeoLocation__StopListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StopListening(c, args);
}

uSStrong<GeoLocation*> GeoLocation::_instance_;

// public GeoLocation() [instance] :61
void GeoLocation::ctor_2()
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", ".ctor()");
    ctor_1();

    if (GeoLocation::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(GeoLocation::_instance_ = this, ::STRINGS[1/*"FuseJS/GeoL...*/]);
    _locationTracker = ::g::Fuse::GeoLocation::LocationTracker::New1();
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[4/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], ::STRINGS[2/*"auhtorizati...*/], uDelegate::New(::TYPES[5/*Uno.Func<Fuse.GeoLocation.GeoLocationAuthorizationType>*/], (void*)GeoLocation__GetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[6/*Uno.Action<int>*/], (void*)GeoLocation__SetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[7/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], (void*)GeoLocation__AuthorizationRequestConverter_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"startListen...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StartListening_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"stopListening"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StopListening_fn, this)));
    _onChangedEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[5/*"onChanged"*/], true);
    uPtr(_locationTracker)->add_LocationChanged(uDelegate::New(::TYPES[9/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__LocationChanged_fn, this));
    AddMember(_onChangedEvent);
    _onErrorEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[6/*"onError"*/], true);
    uPtr(_locationTracker)->add_LocationError(uDelegate::New(::TYPES[10/*Uno.Action<string>*/], (void*)GeoLocation__LocationError_fn, this));
    AddMember(_onErrorEvent);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[11/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[7/*"location"*/], uDelegate::New(::TYPES[12/*Uno.Func<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocation_fn, this), NULL, uDelegate::New(::TYPES[13/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[14/*Fuse.Scripting.NativePromise<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[8/*"getLocation"*/], uDelegate::New(::TYPES[15/*Fuse.Scripting.FutureFactory<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocationAsync_fn, this), uDelegate::New(::TYPES[16/*Fuse.Scripting.ResultConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() [instance] :154
int GeoLocation::GetAuhtorizationRequest()
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "GetAuhtorizationRequest()");
    return uPtr(_locationTracker)->AuthorizationType();
}

// private Fuse.GeoLocation.Location GetLocation() [instance] :170
::g::Fuse::GeoLocation::Location* GeoLocation::GetLocation()
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "GetLocation()");
    return uPtr(_locationTracker)->Location();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) [instance] :183
::g::Uno::Threading::Future1* GeoLocation::GetLocationAsync(uArray* args)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "GetLocationAsync(object[])");
    double timeout = (uPtr(args)->Length() > 0) ? ::g::Fuse::Scripting::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 20000.0;
    return uPtr(_locationTracker)->GetLocationAsync(timeout);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) [instance] :121
void GeoLocation::LocationChanged(::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "LocationChanged(Fuse.GeoLocation.Location)");
    uPtr(_onChangedEvent)->RaiseAsync(uArray::Init<uObject*>(::TYPES[18/*object[]*/], 1, (::g::Fuse::Scripting::Object*)GeoLocation::Converter(uPtr(_onChangedEvent)->Context(), location)));
}

// private void LocationError(string error) [instance] :133
void GeoLocation::LocationError(uString* error)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "LocationError(string)");
    uPtr(_onErrorEvent)->RaiseAsync(uArray::Init<uObject*>(::TYPES[18/*object[]*/], 1, error));
}

// private void SetAuhtorizationRequest(int value) [instance] :149
void GeoLocation::SetAuhtorizationRequest(int value)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "SetAuhtorizationRequest(int)");
    uPtr(_locationTracker)->AuthorizationType(value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) [instance] :94
uObject* GeoLocation::StartListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "StartListening(Fuse.Scripting.Context,object[])");
    int minimumReportInterval = (uPtr(args)->Length() > 0) ? ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)) : 0;
    double desiredAccuracyInMeters = (args->Length() > 1) ? ::g::Fuse::Scripting::Marshal::ToDouble(args->Strong<uObject*>(1)) : 0.0;
    uPtr(_locationTracker)->StartListening(minimumReportInterval, desiredAccuracyInMeters);
    return NULL;
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) [instance] :108
uObject* GeoLocation::StopListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "StopListening(Fuse.Scripting.Context,object[])");
    uPtr(_locationTracker)->StopListening();
    return NULL;
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) [static] :138
int GeoLocation::AuthorizationRequestConverter(::g::Fuse::Scripting::Context* context, int type)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "AuthorizationRequestConverter(Fuse.Scripting.Context,Fuse.GeoLocation.GeoLocationAuthorizationType)");
    return type;
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) [static] :189
::g::Fuse::Scripting::Object* GeoLocation::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "Converter(Fuse.Scripting.Context,Fuse.GeoLocation.Location)");
    ::g::Fuse::Scripting::Object* obj = uPtr(context)->NewObject();

    if (location != NULL)
    {
        uPtr(obj)->Item(::STRINGS[9/*"latitude"*/], uBox(::g::Uno::Double_typeof(), uPtr(uPtr(location)->Coordinates())->Latitude()));
        obj->Item(::STRINGS[10/*"longitude"*/], uBox(::g::Uno::Double_typeof(), uPtr(location->Coordinates())->Longitude()));
        obj->Item(::STRINGS[11/*"accuracy"*/], uBox(::g::Uno::Double_typeof(), location->Accuracy()));
    }

    return obj;
}

// public GeoLocation New() [static] :61
GeoLocation* GeoLocation::New2()
{
    GeoLocation* obj1 = (GeoLocation*)uNew(GeoLocation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.GeoLocation/0.29.22/$.uno
// ------------------------------------------------------------

// public enum GeoLocationAuthorizationType :257
uEnumType* GeoLocationAuthorizationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.GeoLocation.GeoLocationAuthorizationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Never", 0LL,
        "WhenInUse", 1LL,
        "Always", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.GeoLocation/0.29.22/$.uno
// ------------------------------------------------------------

// public abstract interface ILocationTracker :244
// {
uInterfaceType* ILocationTracker_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.GeoLocation.ILocationTracker", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("GetLastKnownPosition", NULL, NULL, offsetof(ILocationTracker, fp_GetLastKnownPosition), false, ::g::Fuse::GeoLocation::Location_typeof(), 0),
        new uFunction("GetLocation", NULL, NULL, offsetof(ILocationTracker, fp_GetLocation), false, uVoid_typeof(), 2, ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), ::g::Uno::Double_typeof()),
        new uFunction("RequestAuthorization", NULL, NULL, offsetof(ILocationTracker, fp_RequestAuthorization), false, uVoid_typeof(), 1, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof()),
        new uFunction("StartListening", NULL, NULL, offsetof(ILocationTracker, fp_StartListening), false, uVoid_typeof(), 4, ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof()), ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("StopListening", NULL, NULL, offsetof(ILocationTracker, fp_StopListening), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.GeoLocation/0.29.22/iOS/$.uno
// ----------------------------------------------------------------

// internal sealed extern class IOSLocationProvider :9
// {
static void IOSLocationProvider_build(uType* type)
{
    ::STRINGS[12] = uString::Const("requestWhenInUseAuthorization");
    ::STRINGS[13] = uString::Const("requestAlwaysAuthorization");
    ::TYPES[20] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[17] = ::g::Uno::Int_typeof();
    ::TYPES[21] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Fuse::GeoLocation::ILocationTracker_typeof(), offsetof(IOSLocationProvider_type, interface0));
    type->SetFields(0,
        IOSLocationProvider__ContinuesListener_typeof(), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider, _continuesListener), 0,
        ::g::iOS::CoreLocation::CLLocationManager_typeof(), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider, _lm), 0);
}

IOSLocationProvider_type* IOSLocationProvider_typeof()
{
    static uSStrong<IOSLocationProvider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IOSLocationProvider);
    options.TypeSize = sizeof(IOSLocationProvider_type);
    type = (IOSLocationProvider_type*)uClassType::New("Fuse.GeoLocation.IOSLocationProvider", options);
    type->fp_build_ = IOSLocationProvider_build;
    type->fp_ctor_ = (void*)IOSLocationProvider__New1_fn;
    type->interface0.fp_GetLastKnownPosition = (void(*)(uObject*, ::g::Fuse::GeoLocation::Location**))IOSLocationProvider__GetLastKnownPosition_fn;
    type->interface0.fp_GetLocation = (void(*)(uObject*, ::g::Uno::Threading::Promise*, double*))IOSLocationProvider__GetLocation_fn;
    type->interface0.fp_StartListening = (void(*)(uObject*, uDelegate*, uDelegate*, int*, double*))IOSLocationProvider__StartListening_fn;
    type->interface0.fp_StopListening = (void(*)(uObject*))IOSLocationProvider__StopListening_fn;
    type->interface0.fp_RequestAuthorization = (void(*)(uObject*, int*))IOSLocationProvider__RequestAuthorization_fn;
    return type;
}

// public IOSLocationProvider() :13
void IOSLocationProvider__ctor__fn(IOSLocationProvider* __this)
{
    __this->ctor_();
}

// internal static Fuse.GeoLocation.Location ConvertLocation(iOS.CoreLocation.CLLocation location) :80
void IOSLocationProvider__ConvertLocation_fn(::g::iOS::CoreLocation::CLLocation* location, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = IOSLocationProvider::ConvertLocation(location);
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() :64
void IOSLocationProvider__GetLastKnownPosition_fn(IOSLocationProvider* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLastKnownPosition();
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) :69
void IOSLocationProvider__GetLocation_fn(IOSLocationProvider* __this, ::g::Uno::Threading::Promise* promise, double* timeout)
{
    __this->GetLocation(promise, *timeout);
}

// public IOSLocationProvider New() :13
void IOSLocationProvider__New1_fn(IOSLocationProvider** __retval)
{
    *__retval = IOSLocationProvider::New1();
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) :38
void IOSLocationProvider__RequestAuthorization_fn(IOSLocationProvider* __this, int* type)
{
    __this->RequestAuthorization(*type);
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) :23
void IOSLocationProvider__StartListening_fn(IOSLocationProvider* __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(onLocationChanged, onLocationError, *minimumReportInterval, *desiredAccuracyInMeters);
}

// public void StopListening() :56
void IOSLocationProvider__StopListening_fn(IOSLocationProvider* __this)
{
    __this->StopListening();
}

// public IOSLocationProvider() [instance] :13
void IOSLocationProvider::ctor_()
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", ".ctor()");
    _lm = ::g::iOS::CoreLocation::CLLocationManager::New5();
    uPtr(_lm)->init();
    uPtr(_lm)->PausesLocationUpdatesAutomatically(false);
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() [instance] :64
::g::Fuse::GeoLocation::Location* IOSLocationProvider::GetLastKnownPosition()
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "GetLastKnownPosition()");
    return IOSLocationProvider::ConvertLocation(uPtr(_lm)->Location());
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) [instance] :69
void IOSLocationProvider::GetLocation(::g::Uno::Threading::Promise* promise, double timeout)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location>,double)");
    StopListening();
    int status = ::g::iOS::CoreLocation::CLLocationManager::_authorizationStatus();
    uPtr(_lm)->DesiredAccuracy(0.0);
    uPtr(_lm)->DistanceFilter(0.0);
    IOSLocationProvider__PromiseListener::New2(_lm, promise);
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) [instance] :38
void IOSLocationProvider::RequestAuthorization(int type)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType)");

    if (type == 1)
    {
        if (uPtr(_lm)->respondsToSelector(::g::ObjC::Selector::op_Implicit1(::STRINGS[12/*"requestWhen...*/])))
            uPtr(_lm)->requestWhenInUseAuthorization();
    }
    else if (type == 2)
    {
        if (uPtr(_lm)->respondsToSelector(::g::ObjC::Selector::op_Implicit1(::STRINGS[13/*"requestAlwa...*/])))
            uPtr(_lm)->requestAlwaysAuthorization();
    }
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) [instance] :23
void IOSLocationProvider::StartListening(uDelegate* onLocationChanged, uDelegate* onLocationError, int minimumReportInterval, double desiredAccuracyInMeters)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "StartListening(Uno.Action<Fuse.GeoLocation.Location>,Uno.Action<Uno.Exception>,int,double)");

    try
    {
        _continuesListener = IOSLocationProvider__ContinuesListener::New1(_lm);
        uPtr(_lm)->DesiredAccuracy(desiredAccuracyInMeters);
        uPtr(_lm)->DistanceFilter((double)minimumReportInterval);
        uPtr(_continuesListener)->StartListening(onLocationChanged, onLocationError);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(onLocationError)->InvokeVoid(e);
    }
}

// public void StopListening() [instance] :56
void IOSLocationProvider::StopListening()
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "StopListening()");

    if (_continuesListener != NULL)
        uPtr(_continuesListener)->StopListening();

    _continuesListener = NULL;
}

// internal static Fuse.GeoLocation.Location ConvertLocation(iOS.CoreLocation.CLLocation location) [static] :80
::g::Fuse::GeoLocation::Location* IOSLocationProvider::ConvertLocation(::g::iOS::CoreLocation::CLLocation* location)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "ConvertLocation(iOS.CoreLocation.CLLocation)");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(location), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        return NULL;

    ::g::Uno::Time::Instant instant = ::g::Uno::Time::Instant__FromMillisecondsSinceUnixEpoch((int64_t)uPtr(uPtr(location)->Timestamp())->TimeIntervalSince1970() * 1000LL);
    ::g::Uno::Time::LocalDateTime* dateTime = ::g::Uno::Time::LocalDateTime::New10(instant, ::g::Uno::Time::CalendarSystem::Iso());
    return ::g::Fuse::GeoLocation::Location::New1(::g::Fuse::GeoLocation::GeoCoordinates::New1(location->Coordinate().Latitude, location->Coordinate().Longitude), location->HorizontalAccuracy(), dateTime);
}

// public IOSLocationProvider New() [static] :13
IOSLocationProvider* IOSLocationProvider::New1()
{
    IOSLocationProvider* obj1 = (IOSLocationProvider*)uNew(IOSLocationProvider_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.GeoLocation/0.29.22/$.uno
// ------------------------------------------------------------

// public sealed class Location :209
// {
static void Location_build(uType* type)
{
    ::STRINGS[14] = uString::Const(" ");
    ::STRINGS[15] = uString::Const(" (");
    ::STRINGS[16] = uString::Const("/");
    ::STRINGS[17] = uString::Const(":");
    ::STRINGS[18] = uString::Const(")");
    ::TYPES[2] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _accuracy), 0,
        ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _coordinates), 0,
        ::g::Uno::Time::LocalDateTime_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _dateTime), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Accuracy", NULL, (void*)Location__get_Accuracy_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Coordinates", NULL, (void*)Location__get_Coordinates_fn, 0, false, ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), 0),
        new uFunction("get_DateTime", NULL, (void*)Location__get_DateTime_fn, 0, false, ::g::Uno::Time::LocalDateTime_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Location__New1_fn, 0, true, Location_typeof(), 3, ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Time::LocalDateTime_typeof()));
}

uType* Location_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Location);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.Location", options);
    type->fp_build_ = Location_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Location__ToString_fn;
    return type;
}

// public Location(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) :223
void Location__ctor__fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, ::g::Uno::Time::LocalDateTime* dateTime)
{
    __this->ctor_(coordinates, *accuracy, dateTime);
}

// public double get_Accuracy() :221
void Location__get_Accuracy_fn(Location* __this, double* __retval)
{
    *__retval = __this->Accuracy();
}

// public Fuse.GeoLocation.GeoCoordinates get_Coordinates() :215
void Location__get_Coordinates_fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates** __retval)
{
    *__retval = __this->Coordinates();
}

// public Uno.Time.LocalDateTime get_DateTime() :216
void Location__get_DateTime_fn(Location* __this, ::g::Uno::Time::LocalDateTime** __retval)
{
    *__retval = __this->DateTime();
}

// public Location New(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) :223
void Location__New1_fn(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, ::g::Uno::Time::LocalDateTime* dateTime, Location** __retval)
{
    *__retval = Location::New1(coordinates, *accuracy, dateTime);
}

// public override sealed string ToString() :230
void Location__ToString_fn(Location* __this, uString** __retval)
{
    uStackFrame __("Fuse.GeoLocation.Location", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this->Coordinates(), ::STRINGS[14/*" "*/]), uBox(::g::Uno::Double_typeof(), __this->Accuracy())), ::STRINGS[15/*" ("*/]), uBox<int>(::TYPES[17/*int*/], uPtr(__this->DateTime())->Month())), ::STRINGS[16/*"/"*/]), uBox<int>(::TYPES[17/*int*/], uPtr(__this->DateTime())->Day())), ::STRINGS[14/*" "*/]), uBox<int>(::TYPES[17/*int*/], uPtr(__this->DateTime())->Hour())), ::STRINGS[17/*":"*/]), uBox<int>(::TYPES[17/*int*/], uPtr(__this->DateTime())->Minute())), ::STRINGS[18/*")"*/]), void();
}

// public Location(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) [instance] :223
void Location::ctor_(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, ::g::Uno::Time::LocalDateTime* dateTime)
{
    uStackFrame __("Fuse.GeoLocation.Location", ".ctor(Fuse.GeoLocation.GeoCoordinates,double,Uno.Time.LocalDateTime)");
    _coordinates = coordinates;
    _accuracy = accuracy;
    _dateTime = dateTime;
}

// public double get_Accuracy() [instance] :221
double Location::Accuracy()
{
    uStackFrame __("Fuse.GeoLocation.Location", "get_Accuracy()");
    return _accuracy;
}

// public Fuse.GeoLocation.GeoCoordinates get_Coordinates() [instance] :215
::g::Fuse::GeoLocation::GeoCoordinates* Location::Coordinates()
{
    uStackFrame __("Fuse.GeoLocation.Location", "get_Coordinates()");
    return _coordinates;
}

// public Uno.Time.LocalDateTime get_DateTime() [instance] :216
::g::Uno::Time::LocalDateTime* Location::DateTime()
{
    uStackFrame __("Fuse.GeoLocation.Location", "get_DateTime()");
    return _dateTime;
}

// public Location New(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) [static] :223
Location* Location::New1(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, ::g::Uno::Time::LocalDateTime* dateTime)
{
    Location* obj1 = (Location*)uNew(Location_typeof());
    obj1->ctor_(coordinates, accuracy, dateTime);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.GeoLocation/0.29.22/iOS/$.uno
// ----------------------------------------------------------------

// internal abstract class IOSLocationProvider.LocationListenerBase :141
// {
static void IOSLocationProvider__LocationListenerBase_build(uType* type)
{
    type->SetInterfaces(
        ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof(), offsetof(IOSLocationProvider__LocationListenerBase_type, interface0));
}

IOSLocationProvider__LocationListenerBase_type* IOSLocationProvider__LocationListenerBase_typeof()
{
    static uSStrong<IOSLocationProvider__LocationListenerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IOSLocationProvider__LocationListenerBase);
    options.TypeSize = sizeof(IOSLocationProvider__LocationListenerBase_type);
    type = (IOSLocationProvider__LocationListenerBase_type*)uClassType::New("Fuse.GeoLocation.IOSLocationProvider.LocationListenerBase", options);
    type->fp_build_ = IOSLocationProvider__LocationListenerBase_build;
    type->interface0.fp_locationManagerDidUpdateToLocationFromLocation = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLLocation*, ::g::iOS::CoreLocation::CLLocation*))IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateToLocationFromLocation_fn;
    type->interface0.fp_locationManagerDidUpdateLocations = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSArray*))IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateLocations_fn;
    type->interface0.fp_locationManagerDidUpdateHeading = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLHeading*))IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateHeading_fn;
    type->interface0.fp_locationManagerShouldDisplayHeadingCalibration = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, bool*))IOSLocationProvider__LocationListenerBase__locationManagerShouldDisplayHeadingCalibration_fn;
    type->interface0.fp_locationManagerDidDetermineStateForRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, int*, ::g::iOS::CoreLocation::CLRegion*))IOSLocationProvider__LocationListenerBase__locationManagerDidDetermineStateForRegion_fn;
    type->interface0.fp_locationManagerDidRangeBeaconsInRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSArray*, ::g::iOS::CoreLocation::CLBeaconRegion*))IOSLocationProvider__LocationListenerBase__locationManagerDidRangeBeaconsInRegion_fn;
    type->interface0.fp_locationManagerRangingBeaconsDidFailForRegionWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLBeaconRegion*, ::g::iOS::Foundation::NSError*))IOSLocationProvider__LocationListenerBase__locationManagerRangingBeaconsDidFailForRegionWithError_fn;
    type->interface0.fp_locationManagerDidEnterRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))IOSLocationProvider__LocationListenerBase__locationManagerDidEnterRegion_fn;
    type->interface0.fp_locationManagerDidExitRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))IOSLocationProvider__LocationListenerBase__locationManagerDidExitRegion_fn;
    type->interface0.fp_locationManagerDidFailWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSError*))IOSLocationProvider__LocationListenerBase__locationManagerDidFailWithError_fn;
    type->interface0.fp_locationManagerMonitoringDidFailForRegionWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*, ::g::iOS::Foundation::NSError*))IOSLocationProvider__LocationListenerBase__locationManagerMonitoringDidFailForRegionWithError_fn;
    type->interface0.fp_locationManagerDidChangeAuthorizationStatus = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, int*))IOSLocationProvider__LocationListenerBase__locationManagerDidChangeAuthorizationStatus_fn;
    type->interface0.fp_locationManagerDidStartMonitoringForRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))IOSLocationProvider__LocationListenerBase__locationManagerDidStartMonitoringForRegion_fn;
    type->interface0.fp_locationManagerDidPauseLocationUpdates = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*))IOSLocationProvider__LocationListenerBase__locationManagerDidPauseLocationUpdates_fn;
    type->interface0.fp_locationManagerDidResumeLocationUpdates = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*))IOSLocationProvider__LocationListenerBase__locationManagerDidResumeLocationUpdates_fn;
    type->interface0.fp_locationManagerDidFinishDeferredUpdatesWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSError*))IOSLocationProvider__LocationListenerBase__locationManagerDidFinishDeferredUpdatesWithError_fn;
    type->interface0.fp_locationManagerDidVisit = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLVisit*))IOSLocationProvider__LocationListenerBase__locationManagerDidVisit_fn;
    return type;
}

// public LocationListenerBase() :145
void IOSLocationProvider__LocationListenerBase__ctor__fn(IOSLocationProvider__LocationListenerBase* __this)
{
    __this->ctor_();
}

// public void locationManagerDidChangeAuthorizationStatus(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLAuthorizationStatus status) :193
void IOSLocationProvider__LocationListenerBase__locationManagerDidChangeAuthorizationStatus_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, int* status)
{
    __this->locationManagerDidChangeAuthorizationStatus(manager, *status);
}

// public void locationManagerDidDetermineStateForRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegionState state, iOS.CoreLocation.CLRegion region) :172
void IOSLocationProvider__LocationListenerBase__locationManagerDidDetermineStateForRegion_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, int* state, ::g::iOS::CoreLocation::CLRegion* region)
{
    __this->locationManagerDidDetermineStateForRegion(manager, *state, region);
}

// public void locationManagerDidEnterRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) :181
void IOSLocationProvider__LocationListenerBase__locationManagerDidEnterRegion_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLRegion* region)
{
    __this->locationManagerDidEnterRegion(manager, region);
}

// public void locationManagerDidExitRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) :184
void IOSLocationProvider__LocationListenerBase__locationManagerDidExitRegion_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLRegion* region)
{
    __this->locationManagerDidExitRegion(manager, region);
}

// public void locationManagerDidFailWithError(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSError error) :187
void IOSLocationProvider__LocationListenerBase__locationManagerDidFailWithError_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::Foundation::NSError* error)
{
    __this->locationManagerDidFailWithError(manager, error);
}

// public void locationManagerDidFinishDeferredUpdatesWithError(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSError error) :205
void IOSLocationProvider__LocationListenerBase__locationManagerDidFinishDeferredUpdatesWithError_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::Foundation::NSError* error)
{
    __this->locationManagerDidFinishDeferredUpdatesWithError(manager, error);
}

// public void locationManagerDidPauseLocationUpdates(iOS.CoreLocation.CLLocationManager manager) :199
void IOSLocationProvider__LocationListenerBase__locationManagerDidPauseLocationUpdates_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager)
{
    __this->locationManagerDidPauseLocationUpdates(manager);
}

// public void locationManagerDidRangeBeaconsInRegion(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSArray beacons, iOS.CoreLocation.CLBeaconRegion region) :175
void IOSLocationProvider__LocationListenerBase__locationManagerDidRangeBeaconsInRegion_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::Foundation::NSArray* beacons, ::g::iOS::CoreLocation::CLBeaconRegion* region)
{
    __this->locationManagerDidRangeBeaconsInRegion(manager, beacons, region);
}

// public void locationManagerDidResumeLocationUpdates(iOS.CoreLocation.CLLocationManager manager) :202
void IOSLocationProvider__LocationListenerBase__locationManagerDidResumeLocationUpdates_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager)
{
    __this->locationManagerDidResumeLocationUpdates(manager);
}

// public void locationManagerDidStartMonitoringForRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) :196
void IOSLocationProvider__LocationListenerBase__locationManagerDidStartMonitoringForRegion_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLRegion* region)
{
    __this->locationManagerDidStartMonitoringForRegion(manager, region);
}

// public void locationManagerDidUpdateHeading(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLHeading newHeading) :164
void IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateHeading_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLHeading* newHeading)
{
    __this->locationManagerDidUpdateHeading(manager, newHeading);
}

// public void locationManagerDidUpdateLocations(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSArray locations) :154
void IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateLocations_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::Foundation::NSArray* locations)
{
    __this->locationManagerDidUpdateLocations(manager, locations);
}

// public void locationManagerDidUpdateToLocationFromLocation(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLLocation newLocation, iOS.CoreLocation.CLLocation oldLocation) :149
void IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateToLocationFromLocation_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLLocation* newLocation, ::g::iOS::CoreLocation::CLLocation* oldLocation)
{
    __this->locationManagerDidUpdateToLocationFromLocation(manager, newLocation, oldLocation);
}

// public void locationManagerDidVisit(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLVisit visit) :208
void IOSLocationProvider__LocationListenerBase__locationManagerDidVisit_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLVisit* visit)
{
    __this->locationManagerDidVisit(manager, visit);
}

// public void locationManagerMonitoringDidFailForRegionWithError(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region, iOS.Foundation.NSError error) :190
void IOSLocationProvider__LocationListenerBase__locationManagerMonitoringDidFailForRegionWithError_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLRegion* region, ::g::iOS::Foundation::NSError* error)
{
    __this->locationManagerMonitoringDidFailForRegionWithError(manager, region, error);
}

// public void locationManagerRangingBeaconsDidFailForRegionWithError(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLBeaconRegion region, iOS.Foundation.NSError error) :178
void IOSLocationProvider__LocationListenerBase__locationManagerRangingBeaconsDidFailForRegionWithError_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLBeaconRegion* region, ::g::iOS::Foundation::NSError* error)
{
    __this->locationManagerRangingBeaconsDidFailForRegionWithError(manager, region, error);
}

// public bool locationManagerShouldDisplayHeadingCalibration(iOS.CoreLocation.CLLocationManager manager) :168
void IOSLocationProvider__LocationListenerBase__locationManagerShouldDisplayHeadingCalibration_fn(IOSLocationProvider__LocationListenerBase* __this, ::g::iOS::CoreLocation::CLLocationManager* manager, bool* __retval)
{
    *__retval = __this->locationManagerShouldDisplayHeadingCalibration(manager);
}

// public LocationListenerBase() [instance] :145
void IOSLocationProvider__LocationListenerBase::ctor_()
{
}

// public void locationManagerDidChangeAuthorizationStatus(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLAuthorizationStatus status) [instance] :193
void IOSLocationProvider__LocationListenerBase::locationManagerDidChangeAuthorizationStatus(::g::iOS::CoreLocation::CLLocationManager* manager, int status)
{
}

// public void locationManagerDidDetermineStateForRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegionState state, iOS.CoreLocation.CLRegion region) [instance] :172
void IOSLocationProvider__LocationListenerBase::locationManagerDidDetermineStateForRegion(::g::iOS::CoreLocation::CLLocationManager* manager, int state, ::g::iOS::CoreLocation::CLRegion* region)
{
}

// public void locationManagerDidEnterRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) [instance] :181
void IOSLocationProvider__LocationListenerBase::locationManagerDidEnterRegion(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLRegion* region)
{
}

// public void locationManagerDidExitRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) [instance] :184
void IOSLocationProvider__LocationListenerBase::locationManagerDidExitRegion(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLRegion* region)
{
}

// public void locationManagerDidFailWithError(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSError error) [instance] :187
void IOSLocationProvider__LocationListenerBase::locationManagerDidFailWithError(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::Foundation::NSError* error)
{
}

// public void locationManagerDidFinishDeferredUpdatesWithError(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSError error) [instance] :205
void IOSLocationProvider__LocationListenerBase::locationManagerDidFinishDeferredUpdatesWithError(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::Foundation::NSError* error)
{
}

// public void locationManagerDidPauseLocationUpdates(iOS.CoreLocation.CLLocationManager manager) [instance] :199
void IOSLocationProvider__LocationListenerBase::locationManagerDidPauseLocationUpdates(::g::iOS::CoreLocation::CLLocationManager* manager)
{
}

// public void locationManagerDidRangeBeaconsInRegion(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSArray beacons, iOS.CoreLocation.CLBeaconRegion region) [instance] :175
void IOSLocationProvider__LocationListenerBase::locationManagerDidRangeBeaconsInRegion(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::Foundation::NSArray* beacons, ::g::iOS::CoreLocation::CLBeaconRegion* region)
{
}

// public void locationManagerDidResumeLocationUpdates(iOS.CoreLocation.CLLocationManager manager) [instance] :202
void IOSLocationProvider__LocationListenerBase::locationManagerDidResumeLocationUpdates(::g::iOS::CoreLocation::CLLocationManager* manager)
{
}

// public void locationManagerDidStartMonitoringForRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) [instance] :196
void IOSLocationProvider__LocationListenerBase::locationManagerDidStartMonitoringForRegion(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLRegion* region)
{
}

// public void locationManagerDidUpdateHeading(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLHeading newHeading) [instance] :164
void IOSLocationProvider__LocationListenerBase::locationManagerDidUpdateHeading(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLHeading* newHeading)
{
}

// public void locationManagerDidUpdateLocations(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSArray locations) [instance] :154
void IOSLocationProvider__LocationListenerBase::locationManagerDidUpdateLocations(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::Foundation::NSArray* locations)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider.LocationListenerBase", "locationManagerDidUpdateLocations(iOS.CoreLocation.CLLocationManager,iOS.Foundation.NSArray)");

    for (int i = 0; (uint64_t)i < uPtr(locations)->Count(); i++)
    {
        ::id a = uPtr(locations)->objectAtIndex((uint64_t)i);
        ::g::iOS::CoreLocation::CLLocation* newLocation = ::g::iOS::CoreLocation::CLLocation::New6(a);
        OnLocationChanged(::g::Fuse::GeoLocation::IOSLocationProvider::ConvertLocation(newLocation));
    }
}

// public void locationManagerDidUpdateToLocationFromLocation(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLLocation newLocation, iOS.CoreLocation.CLLocation oldLocation) [instance] :149
void IOSLocationProvider__LocationListenerBase::locationManagerDidUpdateToLocationFromLocation(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLLocation* newLocation, ::g::iOS::CoreLocation::CLLocation* oldLocation)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider.LocationListenerBase", "locationManagerDidUpdateToLocationFromLocation(iOS.CoreLocation.CLLocationManager,iOS.CoreLocation.CLLocation,iOS.CoreLocation.CLLocation)");
    OnLocationChanged(::g::Fuse::GeoLocation::IOSLocationProvider::ConvertLocation(newLocation));
}

// public void locationManagerDidVisit(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLVisit visit) [instance] :208
void IOSLocationProvider__LocationListenerBase::locationManagerDidVisit(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLVisit* visit)
{
}

// public void locationManagerMonitoringDidFailForRegionWithError(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region, iOS.Foundation.NSError error) [instance] :190
void IOSLocationProvider__LocationListenerBase::locationManagerMonitoringDidFailForRegionWithError(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLRegion* region, ::g::iOS::Foundation::NSError* error)
{
}

// public void locationManagerRangingBeaconsDidFailForRegionWithError(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLBeaconRegion region, iOS.Foundation.NSError error) [instance] :178
void IOSLocationProvider__LocationListenerBase::locationManagerRangingBeaconsDidFailForRegionWithError(::g::iOS::CoreLocation::CLLocationManager* manager, ::g::iOS::CoreLocation::CLBeaconRegion* region, ::g::iOS::Foundation::NSError* error)
{
}

// public bool locationManagerShouldDisplayHeadingCalibration(iOS.CoreLocation.CLLocationManager manager) [instance] :168
bool IOSLocationProvider__LocationListenerBase::locationManagerShouldDisplayHeadingCalibration(::g::iOS::CoreLocation::CLLocationManager* manager)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider.LocationListenerBase", "locationManagerShouldDisplayHeadingCalibration(iOS.CoreLocation.CLLocationManager)");
    return false;
}
// }

// /usr/local/share/uno/Packages/Fuse.GeoLocation/0.29.22/$.uno
// ------------------------------------------------------------

// public sealed class LocationTracker :264
// {
static void LocationTracker_build(uType* type)
{
    ::STRINGS[19] = uString::Const("Not supported for current target.");
    ::TYPES[22] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[24] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[21] = ::g::Uno::Exception_typeof();
    ::TYPES[25] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    ::TYPES[26] = ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[1] = ::g::Uno::Delegate_typeof();
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[27] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Fuse::GeoLocation::Location_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _lastLocation), 0,
        ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _AuthorizationType), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), offsetof(::g::Fuse::GeoLocation::LocationTracker, LocationChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::GeoLocation::LocationTracker, LocationError1), 0,
        ::g::Fuse::GeoLocation::ILocationTracker_typeof(), (uintptr_t)&::g::Fuse::GeoLocation::LocationTracker::_locationTracker_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("get_AuthorizationType", NULL, (void*)LocationTracker__get_AuthorizationType_fn, 0, false, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), 0),
        new uFunction("set_AuthorizationType", NULL, (void*)LocationTracker__set_AuthorizationType_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof()),
        new uFunction("GetLocationAsync", NULL, (void*)LocationTracker__GetLocationAsync_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Location", NULL, (void*)LocationTracker__get_Location_fn, 0, false, ::g::Fuse::GeoLocation::Location_typeof(), 0),
        new uFunction("add_LocationChanged", NULL, (void*)LocationTracker__add_LocationChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof())),
        new uFunction("remove_LocationChanged", NULL, (void*)LocationTracker__remove_LocationChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof())),
        new uFunction("add_LocationError", NULL, (void*)LocationTracker__add_LocationError_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("remove_LocationError", NULL, (void*)LocationTracker__remove_LocationError_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction(".ctor", NULL, (void*)LocationTracker__New1_fn, 0, true, LocationTracker_typeof(), 0),
        new uFunction("StartListening", NULL, (void*)LocationTracker__StartListening_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("StopListening", NULL, (void*)LocationTracker__StopListening_fn, 0, false, uVoid_typeof(), 0));
}

uType* LocationTracker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LocationTracker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.LocationTracker", options);
    type->fp_build_ = LocationTracker_build;
    type->fp_ctor_ = (void*)LocationTracker__New1_fn;
    return type;
}

// public LocationTracker() :268
void LocationTracker__ctor__fn(LocationTracker* __this)
{
    __this->ctor_();
}

// public generated Fuse.GeoLocation.GeoLocationAuthorizationType get_AuthorizationType() :290
void LocationTracker__get_AuthorizationType_fn(LocationTracker* __this, int* __retval)
{
    *__retval = __this->AuthorizationType();
}

// public generated void set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType value) :290
void LocationTracker__set_AuthorizationType_fn(LocationTracker* __this, int* value)
{
    __this->AuthorizationType(*value);
}

// public Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync([double timeout]) :333
void LocationTracker__GetLocationAsync_fn(LocationTracker* __this, double* timeout, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(*timeout);
}

// private void Init() :274
void LocationTracker__Init_fn(LocationTracker* __this)
{
    __this->Init();
}

// public Fuse.GeoLocation.Location get_Location() :294
void LocationTracker__get_Location_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->Location();
}

// public generated void add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) :284
void LocationTracker__add_LocationChanged_fn(LocationTracker* __this, uDelegate* value)
{
    __this->add_LocationChanged(value);
}

// public generated void remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) :284
void LocationTracker__remove_LocationChanged_fn(LocationTracker* __this, uDelegate* value)
{
    __this->remove_LocationChanged(value);
}

// public generated void add_LocationError(Uno.Action<string> value) :286
void LocationTracker__add_LocationError_fn(LocationTracker* __this, uDelegate* value)
{
    __this->add_LocationError(value);
}

// public generated void remove_LocationError(Uno.Action<string> value) :286
void LocationTracker__remove_LocationError_fn(LocationTracker* __this, uDelegate* value)
{
    __this->remove_LocationError(value);
}

// public LocationTracker New() :268
void LocationTracker__New1_fn(LocationTracker** __retval)
{
    *__retval = LocationTracker::New1();
}

// private void OnLocationChanged(Fuse.GeoLocation.Location newLocation) :306
void LocationTracker__OnLocationChanged_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location* newLocation)
{
    __this->OnLocationChanged(newLocation);
}

// private void OnLocationError(Uno.Exception error) :312
void LocationTracker__OnLocationError_fn(LocationTracker* __this, ::g::Uno::Exception* error)
{
    __this->OnLocationError(error);
}

// public void StartListening([int minimumReportInterval], [double desiredAccuracyInMeters]) :318
void LocationTracker__StartListening_fn(LocationTracker* __this, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(*minimumReportInterval, *desiredAccuracyInMeters);
}

// public void StopListening() :326
void LocationTracker__StopListening_fn(LocationTracker* __this)
{
    __this->StopListening();
}

uSStrong<uObject*> LocationTracker::_locationTracker_;

// public LocationTracker() [instance] :268
void LocationTracker::ctor_()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", ".ctor()");
    AuthorizationType(1);
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::UpdateManager::Dispatcher()), ::TYPES[22/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)LocationTracker__Init_fn, this));
}

// public generated Fuse.GeoLocation.GeoLocationAuthorizationType get_AuthorizationType() [instance] :290
int LocationTracker::AuthorizationType()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "get_AuthorizationType()");
    return _AuthorizationType;
}

// public generated void set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType value) [instance] :290
void LocationTracker::AuthorizationType(int value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType)");
    _AuthorizationType = value;
}

// public Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync([double timeout]) [instance] :333
::g::Uno::Threading::Future1* LocationTracker::GetLocationAsync(double timeout)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "GetLocationAsync([double])");
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[24/*Uno.Threading.Promise<Fuse.GeoLocation.Location>*/]);

    try
    {
        if (LocationTracker::_locationTracker_ != NULL)
        {
            ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
            ::g::Fuse::GeoLocation::ILocationTracker::GetLocation(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), promise, timeout);
        }
        else
            uPtr(promise)->Reject(::g::Uno::Exception::New2(::STRINGS[19/*"Not support...*/]));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(promise)->Reject(e);
    }

    return promise;
}

// private void Init() [instance] :274
void LocationTracker::Init()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "Init()");

    if (LocationTracker::_locationTracker_ != NULL)
        return;

    LocationTracker::_locationTracker_ = (uObject*)::g::Fuse::GeoLocation::IOSLocationProvider::New1();
}

// public Fuse.GeoLocation.Location get_Location() [instance] :294
::g::Fuse::GeoLocation::Location* LocationTracker::Location()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "get_Location()");

    if ((_lastLocation == NULL) && (LocationTracker::_locationTracker_ != NULL))
    {
        ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
        _lastLocation = ::g::Fuse::GeoLocation::ILocationTracker::GetLastKnownPosition(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]));
    }

    return _lastLocation;
}

// public generated void add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) [instance] :284
void LocationTracker::add_LocationChanged(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location>)");
    LocationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LocationChanged1, value), ::TYPES[9/*Uno.Action<Fuse.GeoLocation.Location>*/]);
}

// public generated void remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) [instance] :284
void LocationTracker::remove_LocationChanged(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location>)");
    LocationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LocationChanged1, value), ::TYPES[9/*Uno.Action<Fuse.GeoLocation.Location>*/]);
}

// public generated void add_LocationError(Uno.Action<string> value) [instance] :286
void LocationTracker::add_LocationError(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "add_LocationError(Uno.Action<string>)");
    LocationError1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LocationError1, value), ::TYPES[10/*Uno.Action<string>*/]);
}

// public generated void remove_LocationError(Uno.Action<string> value) [instance] :286
void LocationTracker::remove_LocationError(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "remove_LocationError(Uno.Action<string>)");
    LocationError1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LocationError1, value), ::TYPES[10/*Uno.Action<string>*/]);
}

// private void OnLocationChanged(Fuse.GeoLocation.Location newLocation) [instance] :306
void LocationTracker::OnLocationChanged(::g::Fuse::GeoLocation::Location* newLocation)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "OnLocationChanged(Fuse.GeoLocation.Location)");

    if (::g::Uno::Delegate::op_Inequality(LocationChanged1, NULL))
        uPtr(LocationChanged1)->InvokeVoid(newLocation);
}

// private void OnLocationError(Uno.Exception error) [instance] :312
void LocationTracker::OnLocationError(::g::Uno::Exception* error)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "OnLocationError(Uno.Exception)");

    if (::g::Uno::Delegate::op_Inequality(LocationError1, NULL))
        uPtr(LocationError1)->InvokeVoid(uPtr(error)->Message());
}

// public void StartListening([int minimumReportInterval], [double desiredAccuracyInMeters]) [instance] :318
void LocationTracker::StartListening(int minimumReportInterval, double desiredAccuracyInMeters)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "StartListening([int],[double])");

    if (LocationTracker::_locationTracker_ == NULL)
        return;

    ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
    ::g::Fuse::GeoLocation::ILocationTracker::StartListening(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), uDelegate::New(::TYPES[9/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)LocationTracker__OnLocationChanged_fn, this), uDelegate::New(::TYPES[27/*Uno.Action<Uno.Exception>*/], (void*)LocationTracker__OnLocationError_fn, this), minimumReportInterval, desiredAccuracyInMeters);
}

// public void StopListening() [instance] :326
void LocationTracker::StopListening()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "StopListening()");

    if (LocationTracker::_locationTracker_ == NULL)
        return;

    ::g::Fuse::GeoLocation::ILocationTracker::StopListening(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]));
}

// public LocationTracker New() [static] :268
LocationTracker* LocationTracker::New1()
{
    LocationTracker* obj1 = (LocationTracker*)uNew(LocationTracker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.GeoLocation/0.29.22/iOS/$.uno
// ----------------------------------------------------------------

// private sealed class IOSLocationProvider.PromiseListener :122
// {
static void IOSLocationProvider__PromiseListener_build(uType* type)
{
    type->SetInterfaces(
        ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof(), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type, interface0));
    type->SetFields(2,
        ::g::iOS::CoreLocation::CLLocationManager_typeof(), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider__PromiseListener, _lm1), 0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider__PromiseListener, _promise), 0);
}

::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type* IOSLocationProvider__PromiseListener_typeof()
{
    static uSStrong< ::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IOSLocationProvider__PromiseListener);
    options.TypeSize = sizeof(::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type);
    type = (::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type*)uClassType::New("Fuse.GeoLocation.IOSLocationProvider.PromiseListener", options);
    type->SetBase(::g::Fuse::GeoLocation::IOSLocationProvider__ContinuesListener_typeof());
    type->fp_build_ = IOSLocationProvider__PromiseListener_build;
    type->fp_OnLocationChanged = (void(*)(::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase*, ::g::Fuse::GeoLocation::Location*))IOSLocationProvider__PromiseListener__OnLocationChanged_fn;
    type->interface0.fp_locationManagerDidUpdateToLocationFromLocation = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLLocation*, ::g::iOS::CoreLocation::CLLocation*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateToLocationFromLocation_fn;
    type->interface0.fp_locationManagerDidUpdateLocations = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSArray*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateLocations_fn;
    type->interface0.fp_locationManagerDidUpdateHeading = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLHeading*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidUpdateHeading_fn;
    type->interface0.fp_locationManagerShouldDisplayHeadingCalibration = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, bool*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerShouldDisplayHeadingCalibration_fn;
    type->interface0.fp_locationManagerDidDetermineStateForRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, int*, ::g::iOS::CoreLocation::CLRegion*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidDetermineStateForRegion_fn;
    type->interface0.fp_locationManagerDidRangeBeaconsInRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSArray*, ::g::iOS::CoreLocation::CLBeaconRegion*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidRangeBeaconsInRegion_fn;
    type->interface0.fp_locationManagerRangingBeaconsDidFailForRegionWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLBeaconRegion*, ::g::iOS::Foundation::NSError*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerRangingBeaconsDidFailForRegionWithError_fn;
    type->interface0.fp_locationManagerDidEnterRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidEnterRegion_fn;
    type->interface0.fp_locationManagerDidExitRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidExitRegion_fn;
    type->interface0.fp_locationManagerDidFailWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSError*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidFailWithError_fn;
    type->interface0.fp_locationManagerMonitoringDidFailForRegionWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*, ::g::iOS::Foundation::NSError*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerMonitoringDidFailForRegionWithError_fn;
    type->interface0.fp_locationManagerDidChangeAuthorizationStatus = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, int*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidChangeAuthorizationStatus_fn;
    type->interface0.fp_locationManagerDidStartMonitoringForRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidStartMonitoringForRegion_fn;
    type->interface0.fp_locationManagerDidPauseLocationUpdates = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidPauseLocationUpdates_fn;
    type->interface0.fp_locationManagerDidResumeLocationUpdates = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidResumeLocationUpdates_fn;
    type->interface0.fp_locationManagerDidFinishDeferredUpdatesWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSError*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidFinishDeferredUpdatesWithError_fn;
    type->interface0.fp_locationManagerDidVisit = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLVisit*))::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase__locationManagerDidVisit_fn;
    return type;
}

// public PromiseListener(iOS.CoreLocation.CLLocationManager lm, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) :127
void IOSLocationProvider__PromiseListener__ctor_2_fn(IOSLocationProvider__PromiseListener* __this, ::g::iOS::CoreLocation::CLLocationManager* lm, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_2(lm, promise);
}

// public PromiseListener New(iOS.CoreLocation.CLLocationManager lm, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) :127
void IOSLocationProvider__PromiseListener__New2_fn(::g::iOS::CoreLocation::CLLocationManager* lm, ::g::Uno::Threading::Promise* promise, IOSLocationProvider__PromiseListener** __retval)
{
    *__retval = IOSLocationProvider__PromiseListener::New2(lm, promise);
}

// protected override sealed void OnLocationChanged(Fuse.GeoLocation.Location location) :134
void IOSLocationProvider__PromiseListener__OnLocationChanged_fn(IOSLocationProvider__PromiseListener* __this, ::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider.PromiseListener", "OnLocationChanged(Fuse.GeoLocation.Location)");
    __this->StopListening();
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(__this->_promise), location);
}

// public PromiseListener(iOS.CoreLocation.CLLocationManager lm, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) [instance] :127
void IOSLocationProvider__PromiseListener::ctor_2(::g::iOS::CoreLocation::CLLocationManager* lm, ::g::Uno::Threading::Promise* promise)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider.PromiseListener", ".ctor(iOS.CoreLocation.CLLocationManager,Uno.Threading.Promise<Fuse.GeoLocation.Location>)");
    ctor_1(lm);
    _lm1 = lm;
    _promise = promise;
    StartListening(NULL, NULL);
}

// public PromiseListener New(iOS.CoreLocation.CLLocationManager lm, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) [static] :127
IOSLocationProvider__PromiseListener* IOSLocationProvider__PromiseListener::New2(::g::iOS::CoreLocation::CLLocationManager* lm, ::g::Uno::Threading::Promise* promise)
{
    IOSLocationProvider__PromiseListener* obj1 = (IOSLocationProvider__PromiseListener*)uNew(IOSLocationProvider__PromiseListener_typeof());
    obj1->ctor_2(lm, promise);
    return obj1;
}
// }

}}} // ::g::Fuse::GeoLocation
