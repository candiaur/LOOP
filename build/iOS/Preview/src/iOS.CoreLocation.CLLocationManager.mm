// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CLLocationManager
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::CoreLocation::CLLocationManager*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::CoreLocation::CLLocationManager_typeof()

#include <CoreLocation/CoreLocation.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreLocation.CLAuthorizationStatus.h>
#include <iOS.CoreLocation.CLLocation.h>
#include <iOS.CoreLocation.CLLocationManager.h>
#include <iOS.CoreLocation.ICLLocationManagerDelegate.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace CoreLocation{

// public sealed extern class CLLocationManager :19395
// {
static void CLLocationManager_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(26,
        new uFunction("_authorizationStatus", NULL, (void*)CLLocationManager___authorizationStatus_fn, 0, true, ::g::iOS::CoreLocation::CLAuthorizationStatus_typeof(), 0),
        new uFunction("get_Delegate", NULL, (void*)CLLocationManager__get_Delegate_fn, 0, false, ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof(), 0),
        new uFunction("set_Delegate", NULL, (void*)CLLocationManager__set_Delegate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof()),
        new uFunction("delegate_", NULL, (void*)CLLocationManager__delegate__fn, 0, false, ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof(), 0),
        new uFunction("desiredAccuracy", NULL, (void*)CLLocationManager__desiredAccuracy_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_DesiredAccuracy", NULL, (void*)CLLocationManager__get_DesiredAccuracy_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_DesiredAccuracy", NULL, (void*)CLLocationManager__set_DesiredAccuracy_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("distanceFilter", NULL, (void*)CLLocationManager__distanceFilter_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_DistanceFilter", NULL, (void*)CLLocationManager__get_DistanceFilter_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_DistanceFilter", NULL, (void*)CLLocationManager__set_DistanceFilter_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("location", NULL, (void*)CLLocationManager__location_fn, 0, false, ::g::iOS::CoreLocation::CLLocation_typeof(), 0),
        new uFunction("get_Location", NULL, (void*)CLLocationManager__get_Location_fn, 0, false, ::g::iOS::CoreLocation::CLLocation_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)CLLocationManager__New5_fn, 0, true, CLLocationManager_typeof(), 0),
        new uFunction("pausesLocationUpdatesAutomatically", NULL, (void*)CLLocationManager__pausesLocationUpdatesAutomatically_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_PausesLocationUpdatesAutomatically", NULL, (void*)CLLocationManager__get_PausesLocationUpdatesAutomatically_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_PausesLocationUpdatesAutomatically", NULL, (void*)CLLocationManager__set_PausesLocationUpdatesAutomatically_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("requestAlwaysAuthorization", NULL, (void*)CLLocationManager__requestAlwaysAuthorization_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("requestWhenInUseAuthorization", NULL, (void*)CLLocationManager__requestWhenInUseAuthorization_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("setDelegate", NULL, (void*)CLLocationManager__setDelegate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof()),
        new uFunction("setDesiredAccuracy", NULL, (void*)CLLocationManager__setDesiredAccuracy_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("setDistanceFilter", NULL, (void*)CLLocationManager__setDistanceFilter_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("setPausesLocationUpdatesAutomatically", NULL, (void*)CLLocationManager__setPausesLocationUpdatesAutomatically_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("startMonitoringSignificantLocationChanges", NULL, (void*)CLLocationManager__startMonitoringSignificantLocationChanges_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("startUpdatingLocation", NULL, (void*)CLLocationManager__startUpdatingLocation_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("stopMonitoringSignificantLocationChanges", NULL, (void*)CLLocationManager__stopMonitoringSignificantLocationChanges_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("stopUpdatingLocation", NULL, (void*)CLLocationManager__stopUpdatingLocation_fn, 0, false, uVoid_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::Foundation::NSObject_type* CLLocationManager_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CLLocationManager);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.CoreLocation.CLLocationManager", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = CLLocationManager_build;
    type->fp_ctor_ = (void*)CLLocationManager__New5_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public CLLocationManager() :19398
void CLLocationManager__ctor_4_fn(CLLocationManager* __this)
{
    __this->ctor_4();
}

// public static extern iOS.CoreLocation.CLAuthorizationStatus _authorizationStatus() :19510
void CLLocationManager___authorizationStatus_fn(int* __retval)
{
    *__retval = CLLocationManager::_authorizationStatus();
}

// public iOS.CoreLocation.ICLLocationManagerDelegate get_Delegate() :19407
void CLLocationManager__get_Delegate_fn(CLLocationManager* __this, uObject** __retval)
{
    *__retval = __this->Delegate();
}

// public void set_Delegate(iOS.CoreLocation.ICLLocationManagerDelegate value) :19408
void CLLocationManager__set_Delegate_fn(CLLocationManager* __this, uObject* value)
{
    __this->Delegate(value);
}

// public extern iOS.CoreLocation.ICLLocationManagerDelegate delegate_() :19567
void CLLocationManager__delegate__fn(CLLocationManager* __this, uObject** __retval)
{
    *__retval = __this->delegate_();
}

// public extern double desiredAccuracy() :19594
void CLLocationManager__desiredAccuracy_fn(CLLocationManager* __this, double* __retval)
{
    *__retval = __this->desiredAccuracy();
}

// public double get_DesiredAccuracy() :19436
void CLLocationManager__get_DesiredAccuracy_fn(CLLocationManager* __this, double* __retval)
{
    *__retval = __this->DesiredAccuracy();
}

// public void set_DesiredAccuracy(double value) :19437
void CLLocationManager__set_DesiredAccuracy_fn(CLLocationManager* __this, double* value)
{
    __this->DesiredAccuracy(*value);
}

// public extern double distanceFilter() :19588
void CLLocationManager__distanceFilter_fn(CLLocationManager* __this, double* __retval)
{
    *__retval = __this->distanceFilter();
}

// public double get_DistanceFilter() :19430
void CLLocationManager__get_DistanceFilter_fn(CLLocationManager* __this, double* __retval)
{
    *__retval = __this->DistanceFilter();
}

// public void set_DistanceFilter(double value) :19431
void CLLocationManager__set_DistanceFilter_fn(CLLocationManager* __this, double* value)
{
    __this->DistanceFilter(*value);
}

// public extern iOS.CoreLocation.CLLocation location() :19606
void CLLocationManager__location_fn(CLLocationManager* __this, ::g::iOS::CoreLocation::CLLocation** __retval)
{
    *__retval = __this->location();
}

// public iOS.CoreLocation.CLLocation get_Location() :19448
void CLLocationManager__get_Location_fn(CLLocationManager* __this, ::g::iOS::CoreLocation::CLLocation** __retval)
{
    *__retval = __this->Location();
}

// public CLLocationManager New() :19398
void CLLocationManager__New5_fn(CLLocationManager** __retval)
{
    *__retval = CLLocationManager::New5();
}

// public extern bool pausesLocationUpdatesAutomatically() :19600
void CLLocationManager__pausesLocationUpdatesAutomatically_fn(CLLocationManager* __this, bool* __retval)
{
    *__retval = __this->pausesLocationUpdatesAutomatically();
}

// public bool get_PausesLocationUpdatesAutomatically() :19442
void CLLocationManager__get_PausesLocationUpdatesAutomatically_fn(CLLocationManager* __this, bool* __retval)
{
    *__retval = __this->PausesLocationUpdatesAutomatically();
}

// public void set_PausesLocationUpdatesAutomatically(bool value) :19443
void CLLocationManager__set_PausesLocationUpdatesAutomatically_fn(CLLocationManager* __this, bool* value)
{
    __this->PausesLocationUpdatesAutomatically(*value);
}

// public extern void requestAlwaysAuthorization() :19516
void CLLocationManager__requestAlwaysAuthorization_fn(CLLocationManager* __this)
{
    __this->requestAlwaysAuthorization();
}

// public extern void requestWhenInUseAuthorization() :19513
void CLLocationManager__requestWhenInUseAuthorization_fn(CLLocationManager* __this)
{
    __this->requestWhenInUseAuthorization();
}

// public extern void setDelegate(iOS.CoreLocation.ICLLocationManagerDelegate delegate_) :19570
void CLLocationManager__setDelegate_fn(CLLocationManager* __this, uObject* delegate__)
{
    __this->setDelegate(delegate__);
}

// public extern void setDesiredAccuracy(double desiredAccuracy) :19597
void CLLocationManager__setDesiredAccuracy_fn(CLLocationManager* __this, double* desiredAccuracy_)
{
    __this->setDesiredAccuracy(*desiredAccuracy_);
}

// public extern void setDistanceFilter(double distanceFilter) :19591
void CLLocationManager__setDistanceFilter_fn(CLLocationManager* __this, double* distanceFilter_)
{
    __this->setDistanceFilter(*distanceFilter_);
}

// public extern void setPausesLocationUpdatesAutomatically(bool pausesLocationUpdatesAutomatically) :19603
void CLLocationManager__setPausesLocationUpdatesAutomatically_fn(CLLocationManager* __this, bool* pausesLocationUpdatesAutomatically_)
{
    __this->setPausesLocationUpdatesAutomatically(*pausesLocationUpdatesAutomatically_);
}

// public extern void startMonitoringSignificantLocationChanges() :19534
void CLLocationManager__startMonitoringSignificantLocationChanges_fn(CLLocationManager* __this)
{
    __this->startMonitoringSignificantLocationChanges();
}

// public extern void startUpdatingLocation() :19519
void CLLocationManager__startUpdatingLocation_fn(CLLocationManager* __this)
{
    __this->startUpdatingLocation();
}

// public extern void stopMonitoringSignificantLocationChanges() :19537
void CLLocationManager__stopMonitoringSignificantLocationChanges_fn(CLLocationManager* __this)
{
    __this->stopMonitoringSignificantLocationChanges();
}

// public extern void stopUpdatingLocation() :19522
void CLLocationManager__stopUpdatingLocation_fn(CLLocationManager* __this)
{
    __this->stopUpdatingLocation();
}

// public CLLocationManager() [instance] :19398
void CLLocationManager::ctor_4()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", ".ctor()");
    ctor_2();
}

// public iOS.CoreLocation.ICLLocationManagerDelegate get_Delegate() [instance] :19407
uObject* CLLocationManager::Delegate()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "get_Delegate()");
    return delegate_();
}

// public void set_Delegate(iOS.CoreLocation.ICLLocationManagerDelegate value) [instance] :19408
void CLLocationManager::Delegate(uObject* value)
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "set_Delegate(iOS.CoreLocation.ICLLocationManagerDelegate)");
    setDelegate(value);
}

// public extern iOS.CoreLocation.ICLLocationManagerDelegate delegate_() [instance] :19567
uObject* CLLocationManager::delegate_()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "delegate_()");
    id<CLLocationManagerDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<CLLocationManagerDelegate>, @selector(delegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::CoreLocation::Interop::ICLLocationManagerDelegate_typeof());
}

// public extern double desiredAccuracy() [instance] :19594
double CLLocationManager::desiredAccuracy()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "desiredAccuracy()");
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, double, @selector(desiredAccuracy));
    return __return;
}

// public double get_DesiredAccuracy() [instance] :19436
double CLLocationManager::DesiredAccuracy()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "get_DesiredAccuracy()");
    return desiredAccuracy();
}

// public void set_DesiredAccuracy(double value) [instance] :19437
void CLLocationManager::DesiredAccuracy(double value)
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "set_DesiredAccuracy(double)");
    setDesiredAccuracy(value);
}

// public extern double distanceFilter() [instance] :19588
double CLLocationManager::distanceFilter()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "distanceFilter()");
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, double, @selector(distanceFilter));
    return __return;
}

// public double get_DistanceFilter() [instance] :19430
double CLLocationManager::DistanceFilter()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "get_DistanceFilter()");
    return distanceFilter();
}

// public void set_DistanceFilter(double value) [instance] :19431
void CLLocationManager::DistanceFilter(double value)
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "set_DistanceFilter(double)");
    setDistanceFilter(value);
}

// public extern iOS.CoreLocation.CLLocation location() [instance] :19606
::g::iOS::CoreLocation::CLLocation* CLLocationManager::location()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "location()");
    ::CLLocation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CLLocation*, @selector(location));
    return (::g::iOS::CoreLocation::CLLocation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::CoreLocation::CLLocation_typeof());
}

// public iOS.CoreLocation.CLLocation get_Location() [instance] :19448
::g::iOS::CoreLocation::CLLocation* CLLocationManager::Location()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "get_Location()");
    return location();
}

// public extern bool pausesLocationUpdatesAutomatically() [instance] :19600
bool CLLocationManager::pausesLocationUpdatesAutomatically()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "pausesLocationUpdatesAutomatically()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(pausesLocationUpdatesAutomatically));
    return (bool)__return;
}

// public bool get_PausesLocationUpdatesAutomatically() [instance] :19442
bool CLLocationManager::PausesLocationUpdatesAutomatically()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "get_PausesLocationUpdatesAutomatically()");
    return pausesLocationUpdatesAutomatically();
}

// public void set_PausesLocationUpdatesAutomatically(bool value) [instance] :19443
void CLLocationManager::PausesLocationUpdatesAutomatically(bool value)
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "set_PausesLocationUpdatesAutomatically(bool)");
    setPausesLocationUpdatesAutomatically(value);
}

// public extern void requestAlwaysAuthorization() [instance] :19516
void CLLocationManager::requestAlwaysAuthorization()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "requestAlwaysAuthorization()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(requestAlwaysAuthorization));
}

// public extern void requestWhenInUseAuthorization() [instance] :19513
void CLLocationManager::requestWhenInUseAuthorization()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "requestWhenInUseAuthorization()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(requestWhenInUseAuthorization));
}

// public extern void setDelegate(iOS.CoreLocation.ICLLocationManagerDelegate delegate_) [instance] :19570
void CLLocationManager::setDelegate(uObject* delegate__)
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "setDelegate(iOS.CoreLocation.ICLLocationManagerDelegate)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)delegate__, ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof()));
}

// public extern void setDesiredAccuracy(double desiredAccuracy) [instance] :19597
void CLLocationManager::setDesiredAccuracy(double desiredAccuracy_)
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "setDesiredAccuracy(double)");
    double desiredAccuracy__ = desiredAccuracy_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setDesiredAccuracy:),
        desiredAccuracy__);
}

// public extern void setDistanceFilter(double distanceFilter) [instance] :19591
void CLLocationManager::setDistanceFilter(double distanceFilter_)
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "setDistanceFilter(double)");
    double distanceFilter__ = distanceFilter_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setDistanceFilter:),
        distanceFilter__);
}

// public extern void setPausesLocationUpdatesAutomatically(bool pausesLocationUpdatesAutomatically) [instance] :19603
void CLLocationManager::setPausesLocationUpdatesAutomatically(bool pausesLocationUpdatesAutomatically_)
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "setPausesLocationUpdatesAutomatically(bool)");
    bool pausesLocationUpdatesAutomatically__ = pausesLocationUpdatesAutomatically_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setPausesLocationUpdatesAutomatically:),
        (BOOL)pausesLocationUpdatesAutomatically__);
}

// public extern void startMonitoringSignificantLocationChanges() [instance] :19534
void CLLocationManager::startMonitoringSignificantLocationChanges()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "startMonitoringSignificantLocationChanges()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(startMonitoringSignificantLocationChanges));
}

// public extern void startUpdatingLocation() [instance] :19519
void CLLocationManager::startUpdatingLocation()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "startUpdatingLocation()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(startUpdatingLocation));
}

// public extern void stopMonitoringSignificantLocationChanges() [instance] :19537
void CLLocationManager::stopMonitoringSignificantLocationChanges()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "stopMonitoringSignificantLocationChanges()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(stopMonitoringSignificantLocationChanges));
}

// public extern void stopUpdatingLocation() [instance] :19522
void CLLocationManager::stopUpdatingLocation()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "stopUpdatingLocation()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(stopUpdatingLocation));
}

// public static extern iOS.CoreLocation.CLAuthorizationStatus _authorizationStatus() [static] :19510
int CLLocationManager::_authorizationStatus()
{
    uStackFrame __("iOS.CoreLocation.CLLocationManager", "_authorizationStatus()");
    ::CLAuthorizationStatus __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::CLAuthorizationStatus, @selector(authorizationStatus));
    return int(__return);
}

// public CLLocationManager New() [static] :19398
CLLocationManager* CLLocationManager::New5()
{
    CLLocationManager* obj1 = (CLLocationManager*)uNew(CLLocationManager_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::iOS::CoreLocation
