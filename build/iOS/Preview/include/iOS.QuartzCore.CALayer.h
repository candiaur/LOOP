// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGPoint;}}}
namespace g{namespace iOS{namespace QuartzCore{struct CALayer;}}}
namespace g{namespace iOS{namespace QuartzCore{struct CATransform3D;}}}

namespace g{
namespace iOS{
namespace QuartzCore{

// public extern class CALayer :13458
// {
::g::iOS::Foundation::NSObject_type* CALayer_typeof();
void CALayer__ctor_4_fn(CALayer* __this);
void CALayer__anchorPoint_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* __retval);
void CALayer__get_AnchorPoint_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* __retval);
void CALayer__set_AnchorPoint_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* value);
void CALayer__backgroundColor_fn(CALayer* __this, app::CGColorRef** __retval);
void CALayer__get_BackgroundColor_fn(CALayer* __this, app::CGColorRef** __retval);
void CALayer__set_BackgroundColor_fn(CALayer* __this, app::CGColorRef** value);
void CALayer__init_fn(CALayer* __this);
void CALayer__New5_fn(CALayer** __retval);
void CALayer__setAnchorPoint_fn(CALayer* __this, ::g::iOS::CoreGraphics::CGPoint* anchorPoint_);
void CALayer__setBackgroundColor_fn(CALayer* __this, app::CGColorRef** backgroundColor_);
void CALayer__setTransform_fn(CALayer* __this, ::g::iOS::QuartzCore::CATransform3D* transform_);
void CALayer__transform_fn(CALayer* __this, ::g::iOS::QuartzCore::CATransform3D* __retval);
void CALayer__get_Transform_fn(CALayer* __this, ::g::iOS::QuartzCore::CATransform3D* __retval);
void CALayer__set_Transform_fn(CALayer* __this, ::g::iOS::QuartzCore::CATransform3D* value);

struct CALayer : ::g::iOS::Foundation::NSObject
{
    void ctor_4();
    ::g::iOS::CoreGraphics::CGPoint anchorPoint();
    ::g::iOS::CoreGraphics::CGPoint AnchorPoint();
    void AnchorPoint(::g::iOS::CoreGraphics::CGPoint value);
    app::CGColorRef* backgroundColor();
    app::CGColorRef* BackgroundColor();
    void BackgroundColor(app::CGColorRef* value);
    void setAnchorPoint(::g::iOS::CoreGraphics::CGPoint anchorPoint_);
    void setBackgroundColor(app::CGColorRef* backgroundColor_);
    void setTransform(::g::iOS::QuartzCore::CATransform3D transform_);
    ::g::iOS::QuartzCore::CATransform3D transform();
    ::g::iOS::QuartzCore::CATransform3D Transform();
    void Transform(::g::iOS::QuartzCore::CATransform3D value);
    static CALayer* New5();
};
// }

}}} // ::g::iOS::QuartzCore
