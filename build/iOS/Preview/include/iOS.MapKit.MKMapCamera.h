// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace MapKit{struct MKMapCamera;}}}

namespace g{
namespace iOS{
namespace MapKit{

// public sealed extern class MKMapCamera :29525
// {
struct MKMapCamera_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

MKMapCamera_type* MKMapCamera_typeof();
void MKMapCamera__heading_fn(MKMapCamera* __this, double* __retval);
void MKMapCamera__get_Heading_fn(MKMapCamera* __this, double* __retval);
void MKMapCamera__set_Heading_fn(MKMapCamera* __this, double* value);
void MKMapCamera__pitch_fn(MKMapCamera* __this, double* __retval);
void MKMapCamera__get_Pitch_fn(MKMapCamera* __this, double* __retval);
void MKMapCamera__set_Pitch_fn(MKMapCamera* __this, double* value);
void MKMapCamera__setHeading_fn(MKMapCamera* __this, double* heading_);
void MKMapCamera__setPitch_fn(MKMapCamera* __this, double* pitch_);

struct MKMapCamera : ::g::iOS::Foundation::NSObject
{
    double heading();
    double Heading();
    void Heading(double value);
    double pitch();
    double Pitch();
    void Pitch(double value);
    void setHeading(double heading_);
    void setPitch(double pitch_);
};
// }

}}} // ::g::iOS::MapKit
