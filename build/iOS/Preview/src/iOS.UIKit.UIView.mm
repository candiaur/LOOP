// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIView_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSCoder.h>
#include <iOS.Foundation.NSDate.h>
#include <iOS.QuartzCore.CALayer.h>
#include <iOS.UIKit.NSLayoutConstraint.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIEvent.h>
#include <iOS.UIKit.UIGestureRecognizer.h>
#include <iOS.UIKit.UILayoutConstraintAxis.h>
#include <iOS.UIKit.UIMotionEffect.h>
#include <iOS.UIKit.UITraitCollection.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.UIKit.UIViewAnimationCurve.h>
#include <iOS.UIKit.UIViewAnimationTransition.h>
#include <iOS.UIKit.UIViewAutoresizing.h>
#include <iOS.UIKit.UIViewContentMode.h>
#include <iOS.UIKit.UIViewPrintFormatter.h>
#include <iOS.UIKit.UIViewTintAdjustmentMode.h>
#include <iOS.UIKit.UIWindow.h>
#include <ObjC.Class.h>
#include <ObjC.ID.h>
#include <ObjC.Selector.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIView :86638
// {
static void UIView_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(UIView_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(218,
        new uFunction("_appearance", NULL, (void*)UIView___appearance_fn, 0, true, ::g::ObjC::ID_typeof(), 0),
        new uFunction("_appearanceForTraitCollection", NULL, (void*)UIView___appearanceForTraitCollection_fn, 0, true, ::g::ObjC::ID_typeof(), 1, ::g::iOS::UIKit::UITraitCollection_typeof()),
        new uFunction("_areAnimationsEnabled", NULL, (void*)UIView___areAnimationsEnabled_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("_beginAnimationsContext", NULL, (void*)UIView___beginAnimationsContext_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::IntPtr_typeof()),
        new uFunction("_commitAnimations", NULL, (void*)UIView___commitAnimations_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("_layerClass", NULL, (void*)UIView___layerClass_fn, 0, true, ::g::ObjC::Class_typeof(), 0),
        new uFunction("_requiresConstraintBasedLayout", NULL, (void*)UIView___requiresConstraintBasedLayout_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("_setAnimationBeginsFromCurrentState", NULL, (void*)UIView___setAnimationBeginsFromCurrentState_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("_setAnimationCurve", NULL, (void*)UIView___setAnimationCurve_fn, 0, true, uVoid_typeof(), 1, ::g::iOS::UIKit::UIViewAnimationCurve_typeof()),
        new uFunction("_setAnimationDelay", NULL, (void*)UIView___setAnimationDelay_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("_setAnimationDelegate", NULL, (void*)UIView___setAnimationDelegate_fn, 0, true, uVoid_typeof(), 1, ::g::ObjC::ID_typeof()),
        new uFunction("_setAnimationDidStopSelector", NULL, (void*)UIView___setAnimationDidStopSelector_fn, 0, true, uVoid_typeof(), 1, ::g::ObjC::Selector_typeof()),
        new uFunction("_setAnimationDuration", NULL, (void*)UIView___setAnimationDuration_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("_setAnimationRepeatAutoreverses", NULL, (void*)UIView___setAnimationRepeatAutoreverses_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("_setAnimationRepeatCount", NULL, (void*)UIView___setAnimationRepeatCount_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("_setAnimationsEnabled", NULL, (void*)UIView___setAnimationsEnabled_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("_setAnimationStartDate", NULL, (void*)UIView___setAnimationStartDate_fn, 0, true, uVoid_typeof(), 1, ::g::iOS::Foundation::NSDate_typeof()),
        new uFunction("_setAnimationTransitionForViewCache", NULL, (void*)UIView___setAnimationTransitionForViewCache_fn, 0, true, uVoid_typeof(), 3, ::g::iOS::UIKit::UIViewAnimationTransition_typeof(), UIView_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("_setAnimationWillStartSelector", NULL, (void*)UIView___setAnimationWillStartSelector_fn, 0, true, uVoid_typeof(), 1, ::g::ObjC::Selector_typeof()),
        new uFunction("addConstraint", NULL, (void*)UIView__addConstraint_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::NSLayoutConstraint_typeof()),
        new uFunction("addConstraints", NULL, (void*)UIView__addConstraints_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("addGestureRecognizer", NULL, (void*)UIView__addGestureRecognizer_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIGestureRecognizer_typeof()),
        new uFunction("addMotionEffect", NULL, (void*)UIView__addMotionEffect_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIMotionEffect_typeof()),
        new uFunction("addSubview", NULL, (void*)UIView__addSubview_fn, 0, false, uVoid_typeof(), 1, UIView_typeof()),
        new uFunction("alignmentRectForFrame", NULL, (void*)UIView__alignmentRectForFrame_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("alignmentRectInsets", NULL, (void*)UIView__alignmentRectInsets_fn, 0, false, ::g::iOS::UIKit::UIEdgeInsets_typeof(), 0),
        new uFunction("alpha", NULL, (void*)UIView__alpha_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Alpha", NULL, (void*)UIView__get_Alpha_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Alpha", NULL, (void*)UIView__set_Alpha_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("autoresizesSubviews", NULL, (void*)UIView__autoresizesSubviews_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_AutoresizesSubviews", NULL, (void*)UIView__get_AutoresizesSubviews_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AutoresizesSubviews", NULL, (void*)UIView__set_AutoresizesSubviews_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("autoresizingMask", NULL, (void*)UIView__autoresizingMask_fn, 0, false, ::g::iOS::UIKit::UIViewAutoresizing_typeof(), 0),
        new uFunction("get_AutoresizingMask", NULL, (void*)UIView__get_AutoresizingMask_fn, 0, false, ::g::iOS::UIKit::UIViewAutoresizing_typeof(), 0),
        new uFunction("set_AutoresizingMask", NULL, (void*)UIView__set_AutoresizingMask_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIViewAutoresizing_typeof()),
        new uFunction("backgroundColor", NULL, (void*)UIView__backgroundColor_fn, 0, false, ::g::iOS::UIKit::UIColor_typeof(), 0),
        new uFunction("get_BackgroundColor", NULL, (void*)UIView__get_BackgroundColor_fn, 0, false, ::g::iOS::UIKit::UIColor_typeof(), 0),
        new uFunction("set_BackgroundColor", NULL, (void*)UIView__set_BackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIColor_typeof()),
        new uFunction("bounds", NULL, (void*)UIView__bounds_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("get_Bounds", NULL, (void*)UIView__get_Bounds_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("set_Bounds", NULL, (void*)UIView__set_Bounds_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("bringSubviewToFront", NULL, (void*)UIView__bringSubviewToFront_fn, 0, false, uVoid_typeof(), 1, UIView_typeof()),
        new uFunction("center", NULL, (void*)UIView__center_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("get_Center", NULL, (void*)UIView__get_Center_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 0),
        new uFunction("set_Center", NULL, (void*)UIView__set_Center_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("clearsContextBeforeDrawing", NULL, (void*)UIView__clearsContextBeforeDrawing_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ClearsContextBeforeDrawing", NULL, (void*)UIView__get_ClearsContextBeforeDrawing_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ClearsContextBeforeDrawing", NULL, (void*)UIView__set_ClearsContextBeforeDrawing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("clipsToBounds", NULL, (void*)UIView__clipsToBounds_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ClipsToBounds", NULL, (void*)UIView__get_ClipsToBounds_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ClipsToBounds", NULL, (void*)UIView__set_ClipsToBounds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("constraints", NULL, (void*)UIView__constraints_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("constraintsAffectingLayoutForAxis", NULL, (void*)UIView__constraintsAffectingLayoutForAxis_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 1, ::g::iOS::UIKit::UILayoutConstraintAxis_typeof()),
        new uFunction("contentCompressionResistancePriorityForAxis", NULL, (void*)UIView__contentCompressionResistancePriorityForAxis_fn, 0, false, ::g::Uno::Float_typeof(), 1, ::g::iOS::UIKit::UILayoutConstraintAxis_typeof()),
        new uFunction("contentHuggingPriorityForAxis", NULL, (void*)UIView__contentHuggingPriorityForAxis_fn, 0, false, ::g::Uno::Float_typeof(), 1, ::g::iOS::UIKit::UILayoutConstraintAxis_typeof()),
        new uFunction("contentMode", NULL, (void*)UIView__contentMode_fn, 0, false, ::g::iOS::UIKit::UIViewContentMode_typeof(), 0),
        new uFunction("get_ContentMode", NULL, (void*)UIView__get_ContentMode_fn, 0, false, ::g::iOS::UIKit::UIViewContentMode_typeof(), 0),
        new uFunction("set_ContentMode", NULL, (void*)UIView__set_ContentMode_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIViewContentMode_typeof()),
        new uFunction("contentScaleFactor", NULL, (void*)UIView__contentScaleFactor_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_ContentScaleFactor", NULL, (void*)UIView__get_ContentScaleFactor_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_ContentScaleFactor", NULL, (void*)UIView__set_ContentScaleFactor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("contentStretch", NULL, (void*)UIView__contentStretch_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("get_ContentStretch", NULL, (void*)UIView__get_ContentStretch_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("set_ContentStretch", NULL, (void*)UIView__set_ContentStretch_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("convertPointFromCoordinateSpace", NULL, (void*)UIView__convertPointFromCoordinateSpace_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 2, ::g::iOS::CoreGraphics::CGPoint_typeof(), ::g::iOS::UIKit::IUICoordinateSpace_typeof()),
        new uFunction("convertPointFromView", NULL, (void*)UIView__convertPointFromView_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 2, ::g::iOS::CoreGraphics::CGPoint_typeof(), UIView_typeof()),
        new uFunction("convertPointToCoordinateSpace", NULL, (void*)UIView__convertPointToCoordinateSpace_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 2, ::g::iOS::CoreGraphics::CGPoint_typeof(), ::g::iOS::UIKit::IUICoordinateSpace_typeof()),
        new uFunction("convertPointToView", NULL, (void*)UIView__convertPointToView_fn, 0, false, ::g::iOS::CoreGraphics::CGPoint_typeof(), 2, ::g::iOS::CoreGraphics::CGPoint_typeof(), UIView_typeof()),
        new uFunction("convertRectFromCoordinateSpace", NULL, (void*)UIView__convertRectFromCoordinateSpace_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 2, ::g::iOS::CoreGraphics::CGRect_typeof(), ::g::iOS::UIKit::IUICoordinateSpace_typeof()),
        new uFunction("convertRectFromView", NULL, (void*)UIView__convertRectFromView_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 2, ::g::iOS::CoreGraphics::CGRect_typeof(), UIView_typeof()),
        new uFunction("convertRectToCoordinateSpace", NULL, (void*)UIView__convertRectToCoordinateSpace_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 2, ::g::iOS::CoreGraphics::CGRect_typeof(), ::g::iOS::UIKit::IUICoordinateSpace_typeof()),
        new uFunction("convertRectToView", NULL, (void*)UIView__convertRectToView_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 2, ::g::iOS::CoreGraphics::CGRect_typeof(), UIView_typeof()),
        new uFunction("decodeRestorableStateWithCoder", NULL, (void*)UIView__decodeRestorableStateWithCoder_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSCoder_typeof()),
        new uFunction("didAddSubview", NULL, (void*)UIView__didAddSubview_fn, 0, false, uVoid_typeof(), 1, UIView_typeof()),
        new uFunction("didMoveToSuperview", NULL, (void*)UIView__didMoveToSuperview_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("didMoveToWindow", NULL, (void*)UIView__didMoveToWindow_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("drawRect", NULL, (void*)UIView__drawRect_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("drawRectForViewPrintFormatter", NULL, (void*)UIView__drawRectForViewPrintFormatter_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::CoreGraphics::CGRect_typeof(), ::g::iOS::UIKit::UIViewPrintFormatter_typeof()),
        new uFunction("drawViewHierarchyInRectAfterScreenUpdates", NULL, (void*)UIView__drawViewHierarchyInRectAfterScreenUpdates_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::iOS::CoreGraphics::CGRect_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("encodeRestorableStateWithCoder", NULL, (void*)UIView__encodeRestorableStateWithCoder_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSCoder_typeof()),
        new uFunction("encodeWithCoder", NULL, NULL, offsetof(UIView_type, fp_encodeWithCoder), false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSCoder_typeof()),
        new uFunction("endEditing", NULL, (void*)UIView__endEditing_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("exchangeSubviewAtIndexWithSubviewAtIndex", NULL, (void*)UIView__exchangeSubviewAtIndexWithSubviewAtIndex_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_ExclusiveTouch", NULL, (void*)UIView__get_ExclusiveTouch_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ExclusiveTouch", NULL, (void*)UIView__set_ExclusiveTouch_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("exerciseAmbiguityInLayout", NULL, (void*)UIView__exerciseAmbiguityInLayout_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("frame", NULL, (void*)UIView__frame_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("get_Frame", NULL, (void*)UIView__get_Frame_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("set_Frame", NULL, (void*)UIView__set_Frame_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("frameForAlignmentRect", NULL, (void*)UIView__frameForAlignmentRect_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("gestureRecognizers", NULL, (void*)UIView__gestureRecognizers_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("get_GestureRecognizers", NULL, (void*)UIView__get_GestureRecognizers_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("set_GestureRecognizers", NULL, (void*)UIView__set_GestureRecognizers_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("gestureRecognizerShouldBegin", NULL, (void*)UIView__gestureRecognizerShouldBegin_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::iOS::UIKit::UIGestureRecognizer_typeof()),
        new uFunction("hasAmbiguousLayout", NULL, (void*)UIView__hasAmbiguousLayout_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Hidden", NULL, (void*)UIView__get_Hidden_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Hidden", NULL, (void*)UIView__set_Hidden_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("hitTestWithEvent", NULL, (void*)UIView__hitTestWithEvent_fn, 0, false, UIView_typeof(), 2, ::g::iOS::CoreGraphics::CGPoint_typeof(), ::g::iOS::UIKit::UIEvent_typeof()),
        new uFunction("initWithCoder", NULL, NULL, offsetof(UIView_type, fp_initWithCoder), false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSCoder_typeof()),
        new uFunction("initWithFrame", NULL, NULL, offsetof(UIView_type, fp_initWithFrame), false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("insertSubviewAboveSubview", NULL, (void*)UIView__insertSubviewAboveSubview_fn, 0, false, uVoid_typeof(), 2, UIView_typeof(), UIView_typeof()),
        new uFunction("insertSubviewAtIndex", NULL, (void*)UIView__insertSubviewAtIndex_fn, 0, false, uVoid_typeof(), 2, UIView_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("insertSubviewBelowSubview", NULL, (void*)UIView__insertSubviewBelowSubview_fn, 0, false, uVoid_typeof(), 2, UIView_typeof(), UIView_typeof()),
        new uFunction("intrinsicContentSize", NULL, (void*)UIView__intrinsicContentSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("invalidateIntrinsicContentSize", NULL, (void*)UIView__invalidateIntrinsicContentSize_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("isDescendantOfView", NULL, (void*)UIView__isDescendantOfView_fn, 0, false, ::g::Uno::Bool_typeof(), 1, UIView_typeof()),
        new uFunction("isExclusiveTouch", NULL, (void*)UIView__isExclusiveTouch_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isHidden", NULL, (void*)UIView__isHidden_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isMultipleTouchEnabled", NULL, (void*)UIView__isMultipleTouchEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isOpaque", NULL, (void*)UIView__isOpaque_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isUserInteractionEnabled", NULL, NULL, offsetof(UIView_type, fp_isUserInteractionEnabled), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("layer", NULL, (void*)UIView__layer_fn, 0, false, ::g::iOS::QuartzCore::CALayer_typeof(), 0),
        new uFunction("get_Layer", NULL, (void*)UIView__get_Layer_fn, 0, false, ::g::iOS::QuartzCore::CALayer_typeof(), 0),
        new uFunction("layoutIfNeeded", NULL, (void*)UIView__layoutIfNeeded_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("layoutMargins", NULL, (void*)UIView__layoutMargins_fn, 0, false, ::g::iOS::UIKit::UIEdgeInsets_typeof(), 0),
        new uFunction("get_LayoutMargins", NULL, (void*)UIView__get_LayoutMargins_fn, 0, false, ::g::iOS::UIKit::UIEdgeInsets_typeof(), 0),
        new uFunction("set_LayoutMargins", NULL, (void*)UIView__set_LayoutMargins_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIEdgeInsets_typeof()),
        new uFunction("layoutMarginsDidChange", NULL, (void*)UIView__layoutMarginsDidChange_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("layoutSubviews", NULL, (void*)UIView__layoutSubviews_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("maskView", NULL, (void*)UIView__maskView_fn, 0, false, UIView_typeof(), 0),
        new uFunction("get_MaskView", NULL, (void*)UIView__get_MaskView_fn, 0, false, UIView_typeof(), 0),
        new uFunction("set_MaskView", NULL, (void*)UIView__set_MaskView_fn, 0, false, uVoid_typeof(), 1, UIView_typeof()),
        new uFunction("motionEffects", NULL, (void*)UIView__motionEffects_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("get_MotionEffects", NULL, (void*)UIView__get_MotionEffects_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("set_MotionEffects", NULL, (void*)UIView__set_MotionEffects_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("get_MultipleTouchEnabled", NULL, (void*)UIView__get_MultipleTouchEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_MultipleTouchEnabled", NULL, (void*)UIView__set_MultipleTouchEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("needsUpdateConstraints", NULL, (void*)UIView__needsUpdateConstraints_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UIView__New7_fn, 0, true, UIView_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UIView__New8_fn, 0, true, UIView_typeof(), 1, ::g::ObjC::ID_typeof()),
        new uFunction("get_Opaque", NULL, (void*)UIView__get_Opaque_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Opaque", NULL, (void*)UIView__set_Opaque_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("pointInsideWithEvent", NULL, (void*)UIView__pointInsideWithEvent_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::iOS::CoreGraphics::CGPoint_typeof(), ::g::iOS::UIKit::UIEvent_typeof()),
        new uFunction("preservesSuperviewLayoutMargins", NULL, (void*)UIView__preservesSuperviewLayoutMargins_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_PreservesSuperviewLayoutMargins", NULL, (void*)UIView__get_PreservesSuperviewLayoutMargins_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_PreservesSuperviewLayoutMargins", NULL, (void*)UIView__set_PreservesSuperviewLayoutMargins_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("removeConstraint", NULL, (void*)UIView__removeConstraint_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::NSLayoutConstraint_typeof()),
        new uFunction("removeConstraints", NULL, (void*)UIView__removeConstraints_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("removeFromSuperview", NULL, (void*)UIView__removeFromSuperview_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("removeGestureRecognizer", NULL, (void*)UIView__removeGestureRecognizer_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIGestureRecognizer_typeof()),
        new uFunction("removeMotionEffect", NULL, (void*)UIView__removeMotionEffect_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIMotionEffect_typeof()),
        new uFunction("resizableSnapshotViewFromRectAfterScreenUpdatesWithCapInsets", NULL, (void*)UIView__resizableSnapshotViewFromRectAfterScreenUpdatesWithCapInsets_fn, 0, false, UIView_typeof(), 3, ::g::iOS::CoreGraphics::CGRect_typeof(), ::g::Uno::Bool_typeof(), ::g::iOS::UIKit::UIEdgeInsets_typeof()),
        new uFunction("restorationIdentifier", NULL, (void*)UIView__restorationIdentifier_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_RestorationIdentifier", NULL, (void*)UIView__get_RestorationIdentifier_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_RestorationIdentifier", NULL, (void*)UIView__set_RestorationIdentifier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("sendSubviewToBack", NULL, (void*)UIView__sendSubviewToBack_fn, 0, false, uVoid_typeof(), 1, UIView_typeof()),
        new uFunction("setAlpha", NULL, (void*)UIView__setAlpha_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("setAutoresizesSubviews", NULL, (void*)UIView__setAutoresizesSubviews_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setAutoresizingMask", NULL, (void*)UIView__setAutoresizingMask_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIViewAutoresizing_typeof()),
        new uFunction("setBackgroundColor", NULL, (void*)UIView__setBackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIColor_typeof()),
        new uFunction("setBounds", NULL, (void*)UIView__setBounds_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("setCenter", NULL, (void*)UIView__setCenter_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGPoint_typeof()),
        new uFunction("setClearsContextBeforeDrawing", NULL, (void*)UIView__setClearsContextBeforeDrawing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setClipsToBounds", NULL, (void*)UIView__setClipsToBounds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setContentCompressionResistancePriorityForAxis", NULL, (void*)UIView__setContentCompressionResistancePriorityForAxis_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::iOS::UIKit::UILayoutConstraintAxis_typeof()),
        new uFunction("setContentHuggingPriorityForAxis", NULL, (void*)UIView__setContentHuggingPriorityForAxis_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::iOS::UIKit::UILayoutConstraintAxis_typeof()),
        new uFunction("setContentMode", NULL, (void*)UIView__setContentMode_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIViewContentMode_typeof()),
        new uFunction("setContentScaleFactor", NULL, (void*)UIView__setContentScaleFactor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("setContentStretch", NULL, (void*)UIView__setContentStretch_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("setExclusiveTouch", NULL, (void*)UIView__setExclusiveTouch_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setFrame", NULL, NULL, offsetof(UIView_type, fp_setFrame), false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("setGestureRecognizers", NULL, (void*)UIView__setGestureRecognizers_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("setHidden", NULL, (void*)UIView__setHidden_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setLayoutMargins", NULL, (void*)UIView__setLayoutMargins_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIEdgeInsets_typeof()),
        new uFunction("setMaskView", NULL, (void*)UIView__setMaskView_fn, 0, false, uVoid_typeof(), 1, UIView_typeof()),
        new uFunction("setMotionEffects", NULL, (void*)UIView__setMotionEffects_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("setMultipleTouchEnabled", NULL, (void*)UIView__setMultipleTouchEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setNeedsDisplay", NULL, (void*)UIView__setNeedsDisplay_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("setNeedsDisplayInRect", NULL, (void*)UIView__setNeedsDisplayInRect_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("setNeedsLayout", NULL, (void*)UIView__setNeedsLayout_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("setNeedsUpdateConstraints", NULL, (void*)UIView__setNeedsUpdateConstraints_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("setOpaque", NULL, (void*)UIView__setOpaque_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setPreservesSuperviewLayoutMargins", NULL, (void*)UIView__setPreservesSuperviewLayoutMargins_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setRestorationIdentifier", NULL, (void*)UIView__setRestorationIdentifier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("setTag", NULL, (void*)UIView__setTag_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setTintAdjustmentMode", NULL, (void*)UIView__setTintAdjustmentMode_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIViewTintAdjustmentMode_typeof()),
        new uFunction("setTintColor", NULL, NULL, offsetof(UIView_type, fp_setTintColor), false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIColor_typeof()),
        new uFunction("setTransform", NULL, (void*)UIView__setTransform_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGAffineTransform_typeof()),
        new uFunction("setTranslatesAutoresizingMaskIntoConstraints", NULL, (void*)UIView__setTranslatesAutoresizingMaskIntoConstraints_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setUserInteractionEnabled", NULL, NULL, offsetof(UIView_type, fp_setUserInteractionEnabled), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("sizeThatFits", NULL, (void*)UIView__sizeThatFits_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("sizeToFit", NULL, (void*)UIView__sizeToFit_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("snapshotViewAfterScreenUpdates", NULL, (void*)UIView__snapshotViewAfterScreenUpdates_fn, 0, false, UIView_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("subviews", NULL, (void*)UIView__subviews_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("get_Subviews", NULL, (void*)UIView__get_Subviews_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("superview", NULL, (void*)UIView__superview_fn, 0, false, UIView_typeof(), 0),
        new uFunction("get_Superview", NULL, (void*)UIView__get_Superview_fn, 0, false, UIView_typeof(), 0),
        new uFunction("systemLayoutSizeFittingSize", NULL, (void*)UIView__systemLayoutSizeFittingSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("systemLayoutSizeFittingSizeWithHorizontalFittingPriorityVerticalFittingPriority", NULL, (void*)UIView__systemLayoutSizeFittingSizeWithHorizontalFittingPriorityVerticalFittingPriority_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 3, ::g::iOS::CoreGraphics::CGSize_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("tag", NULL, (void*)UIView__tag_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Tag", NULL, (void*)UIView__get_Tag_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Tag", NULL, (void*)UIView__set_Tag_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("tintAdjustmentMode", NULL, (void*)UIView__tintAdjustmentMode_fn, 0, false, ::g::iOS::UIKit::UIViewTintAdjustmentMode_typeof(), 0),
        new uFunction("get_TintAdjustmentMode", NULL, (void*)UIView__get_TintAdjustmentMode_fn, 0, false, ::g::iOS::UIKit::UIViewTintAdjustmentMode_typeof(), 0),
        new uFunction("set_TintAdjustmentMode", NULL, (void*)UIView__set_TintAdjustmentMode_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIViewTintAdjustmentMode_typeof()),
        new uFunction("tintColor", NULL, NULL, offsetof(UIView_type, fp_tintColor), false, ::g::iOS::UIKit::UIColor_typeof(), 0),
        new uFunction("get_TintColor", NULL, (void*)UIView__get_TintColor_fn, 0, false, ::g::iOS::UIKit::UIColor_typeof(), 0),
        new uFunction("set_TintColor", NULL, (void*)UIView__set_TintColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIColor_typeof()),
        new uFunction("tintColorDidChange", NULL, (void*)UIView__tintColorDidChange_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("traitCollection", NULL, (void*)UIView__traitCollection_fn, 0, false, ::g::iOS::UIKit::UITraitCollection_typeof(), 0),
        new uFunction("get_TraitCollection", NULL, (void*)UIView__get_TraitCollection_fn, 0, false, ::g::iOS::UIKit::UITraitCollection_typeof(), 0),
        new uFunction("traitCollectionDidChange", NULL, (void*)UIView__traitCollectionDidChange_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UITraitCollection_typeof()),
        new uFunction("transform", NULL, (void*)UIView__transform_fn, 0, false, ::g::iOS::CoreGraphics::CGAffineTransform_typeof(), 0),
        new uFunction("get_Transform", NULL, (void*)UIView__get_Transform_fn, 0, false, ::g::iOS::CoreGraphics::CGAffineTransform_typeof(), 0),
        new uFunction("set_Transform", NULL, (void*)UIView__set_Transform_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGAffineTransform_typeof()),
        new uFunction("translatesAutoresizingMaskIntoConstraints", NULL, (void*)UIView__translatesAutoresizingMaskIntoConstraints_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("updateConstraints", NULL, (void*)UIView__updateConstraints_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("updateConstraintsIfNeeded", NULL, (void*)UIView__updateConstraintsIfNeeded_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_UserInteractionEnabled", NULL, (void*)UIView__get_UserInteractionEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UserInteractionEnabled", NULL, (void*)UIView__set_UserInteractionEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("viewForBaselineLayout", NULL, (void*)UIView__viewForBaselineLayout_fn, 0, false, UIView_typeof(), 0),
        new uFunction("viewPrintFormatter", NULL, (void*)UIView__viewPrintFormatter_fn, 0, false, ::g::iOS::UIKit::UIViewPrintFormatter_typeof(), 0),
        new uFunction("viewWithTag", NULL, (void*)UIView__viewWithTag_fn, 0, false, UIView_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("willMoveToSuperview", NULL, (void*)UIView__willMoveToSuperview_fn, 0, false, uVoid_typeof(), 1, UIView_typeof()),
        new uFunction("willMoveToWindow", NULL, (void*)UIView__willMoveToWindow_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIWindow_typeof()),
        new uFunction("willRemoveSubview", NULL, (void*)UIView__willRemoveSubview_fn, 0, false, uVoid_typeof(), 1, UIView_typeof()),
        new uFunction("window", NULL, (void*)UIView__window_fn, 0, false, ::g::iOS::UIKit::UIWindow_typeof(), 0),
        new uFunction("get_Window", NULL, (void*)UIView__get_Window_fn, 0, false, ::g::iOS::UIKit::UIWindow_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

UIView_type* UIView_typeof()
{
    static uSStrong<UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIView);
    options.TypeSize = sizeof(UIView_type);
    type = (UIView_type*)uClassType::New("iOS.UIKit.UIView", options);
    type->SetBase(::g::iOS::UIKit::UIResponder_typeof());
    type->fp_build_ = UIView_build;
    type->fp_ctor_ = (void*)UIView__New7_fn;
    type->fp_encodeWithCoder = UIView__encodeWithCoder_fn;
    type->fp_initWithCoder = UIView__initWithCoder_fn;
    type->fp_initWithFrame = UIView__initWithFrame_fn;
    type->fp_isUserInteractionEnabled = UIView__isUserInteractionEnabled_fn;
    type->fp_setFrame = UIView__setFrame_fn;
    type->fp_setTintColor = UIView__setTintColor_fn;
    type->fp_setUserInteractionEnabled = UIView__setUserInteractionEnabled_fn;
    type->fp_tintColor = UIView__tintColor_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public UIView() :86641
void UIView__ctor_6_fn(UIView* __this)
{
    __this->ctor_6();
}

// public UIView(ObjC.ID __id) :86643
void UIView__ctor_7_fn(UIView* __this, ::id* __id1)
{
    __this->ctor_7(*__id1);
}

// public static extern ObjC.ID _appearance() :87283
void UIView___appearance_fn(::id* __retval)
{
    *__retval = UIView::_appearance();
}

// public static extern ObjC.ID _appearanceForTraitCollection(iOS.UIKit.UITraitCollection trait) :87286
void UIView___appearanceForTraitCollection_fn(::g::iOS::UIKit::UITraitCollection* trait_, ::id* __retval)
{
    *__retval = UIView::_appearanceForTraitCollection(trait_);
}

// public static extern bool _areAnimationsEnabled() :87037
void UIView___areAnimationsEnabled_fn(bool* __retval)
{
    *__retval = UIView::_areAnimationsEnabled();
}

// public static extern void _beginAnimationsContext(string animationID, Uno.IntPtr context) :86995
void UIView___beginAnimationsContext_fn(uString* animationID_, void** context_)
{
    UIView::_beginAnimationsContext(animationID_, *context_);
}

// public static extern void _commitAnimations() :86998
void UIView___commitAnimations_fn()
{
    UIView::_commitAnimations();
}

// public static extern ObjC.Class _layerClass() :86836
void UIView___layerClass_fn(::Class* __retval)
{
    *__retval = UIView::_layerClass();
}

// public static extern bool _requiresConstraintBasedLayout() :86938
void UIView___requiresConstraintBasedLayout_fn(bool* __retval)
{
    *__retval = UIView::_requiresConstraintBasedLayout();
}

// public static extern void _setAnimationBeginsFromCurrentState(bool fromCurrentState) :87028
void UIView___setAnimationBeginsFromCurrentState_fn(bool* fromCurrentState_)
{
    UIView::_setAnimationBeginsFromCurrentState(*fromCurrentState_);
}

// public static extern void _setAnimationCurve(iOS.UIKit.UIViewAnimationCurve curve) :87019
void UIView___setAnimationCurve_fn(int* curve_)
{
    UIView::_setAnimationCurve(*curve_);
}

// public static extern void _setAnimationDelay(double delay) :87013
void UIView___setAnimationDelay_fn(double* delay_)
{
    UIView::_setAnimationDelay(*delay_);
}

// public static extern void _setAnimationDelegate(ObjC.ID delegate_) :87001
void UIView___setAnimationDelegate_fn(::id* delegate__)
{
    UIView::_setAnimationDelegate(*delegate__);
}

// public static extern void _setAnimationDidStopSelector(ObjC.Selector selector) :87007
void UIView___setAnimationDidStopSelector_fn(uObjC::Selector* selector_)
{
    UIView::_setAnimationDidStopSelector(*selector_);
}

// public static extern void _setAnimationDuration(double duration) :87010
void UIView___setAnimationDuration_fn(double* duration_)
{
    UIView::_setAnimationDuration(*duration_);
}

// public static extern void _setAnimationRepeatAutoreverses(bool repeatAutoreverses) :87025
void UIView___setAnimationRepeatAutoreverses_fn(bool* repeatAutoreverses_)
{
    UIView::_setAnimationRepeatAutoreverses(*repeatAutoreverses_);
}

// public static extern void _setAnimationRepeatCount(float repeatCount) :87022
void UIView___setAnimationRepeatCount_fn(float* repeatCount_)
{
    UIView::_setAnimationRepeatCount(*repeatCount_);
}

// public static extern void _setAnimationsEnabled(bool enabled) :87034
void UIView___setAnimationsEnabled_fn(bool* enabled_)
{
    UIView::_setAnimationsEnabled(*enabled_);
}

// public static extern void _setAnimationStartDate(iOS.Foundation.NSDate startDate) :87016
void UIView___setAnimationStartDate_fn(::g::iOS::Foundation::NSDate* startDate_)
{
    UIView::_setAnimationStartDate(startDate_);
}

// public static extern void _setAnimationTransitionForViewCache(iOS.UIKit.UIViewAnimationTransition transition, iOS.UIKit.UIView view, bool cache) :87031
void UIView___setAnimationTransitionForViewCache_fn(int* transition_, UIView* view_, bool* cache_)
{
    UIView::_setAnimationTransitionForViewCache(*transition_, view_, *cache_);
}

// public static extern void _setAnimationWillStartSelector(ObjC.Selector selector) :87004
void UIView___setAnimationWillStartSelector_fn(uObjC::Selector* selector_)
{
    UIView::_setAnimationWillStartSelector(*selector_);
}

// public extern void addConstraint(iOS.UIKit.NSLayoutConstraint constraint) :86956
void UIView__addConstraint_fn(UIView* __this, ::g::iOS::UIKit::NSLayoutConstraint* constraint_)
{
    __this->addConstraint(constraint_);
}

// public extern void addConstraints(iOS.Foundation.NSArray constraints) :86959
void UIView__addConstraints_fn(UIView* __this, ::g::iOS::Foundation::NSArray* constraints_)
{
    __this->addConstraints(constraints_);
}

// public extern void addGestureRecognizer(iOS.UIKit.UIGestureRecognizer gestureRecognizer) :86980
void UIView__addGestureRecognizer_fn(UIView* __this, ::g::iOS::UIKit::UIGestureRecognizer* gestureRecognizer_)
{
    __this->addGestureRecognizer(gestureRecognizer_);
}

// public extern void addMotionEffect(iOS.UIKit.UIMotionEffect effect) :86968
void UIView__addMotionEffect_fn(UIView* __this, ::g::iOS::UIKit::UIMotionEffect* effect_)
{
    __this->addMotionEffect(effect_);
}

// public extern void addSubview(iOS.UIKit.UIView view) :87127
void UIView__addSubview_fn(UIView* __this, UIView* view_)
{
    __this->addSubview(view_);
}

// public extern iOS.CoreGraphics.CGRect alignmentRectForFrame(iOS.CoreGraphics.CGRect frame) :86902
void UIView__alignmentRectForFrame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* frame_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->alignmentRectForFrame(*frame_);
}

// public extern iOS.UIKit.UIEdgeInsets alignmentRectInsets() :86908
void UIView__alignmentRectInsets_fn(UIView* __this, ::g::iOS::UIKit::UIEdgeInsets* __retval)
{
    *__retval = __this->alignmentRectInsets();
}

// public extern double alpha() :87064
void UIView__alpha_fn(UIView* __this, double* __retval)
{
    *__retval = __this->alpha();
}

// public double get_Alpha() :86697
void UIView__get_Alpha_fn(UIView* __this, double* __retval)
{
    *__retval = __this->Alpha();
}

// public void set_Alpha(double value) :86698
void UIView__set_Alpha_fn(UIView* __this, double* value)
{
    __this->Alpha(*value);
}

// public extern bool autoresizesSubviews() :87265
void UIView__autoresizesSubviews_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->autoresizesSubviews();
}

// public bool get_AutoresizesSubviews() :86820
void UIView__get_AutoresizesSubviews_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->AutoresizesSubviews();
}

// public void set_AutoresizesSubviews(bool value) :86821
void UIView__set_AutoresizesSubviews_fn(UIView* __this, bool* value)
{
    __this->AutoresizesSubviews(*value);
}

// public extern iOS.UIKit.UIViewAutoresizing autoresizingMask() :87271
void UIView__autoresizingMask_fn(UIView* __this, uint32_t* __retval)
{
    *__retval = __this->autoresizingMask();
}

// public iOS.UIKit.UIViewAutoresizing get_AutoresizingMask() :86826
void UIView__get_AutoresizingMask_fn(UIView* __this, uint32_t* __retval)
{
    *__retval = __this->AutoresizingMask();
}

// public void set_AutoresizingMask(iOS.UIKit.UIViewAutoresizing value) :86827
void UIView__set_AutoresizingMask_fn(UIView* __this, uint32_t* value)
{
    __this->AutoresizingMask(*value);
}

// public extern iOS.UIKit.UIColor backgroundColor() :87058
void UIView__backgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = __this->backgroundColor();
}

// public iOS.UIKit.UIColor get_BackgroundColor() :86691
void UIView__get_BackgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = __this->BackgroundColor();
}

// public void set_BackgroundColor(iOS.UIKit.UIColor value) :86692
void UIView__set_BackgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* value)
{
    __this->BackgroundColor(value);
}

// public extern iOS.CoreGraphics.CGRect bounds() :87229
void UIView__bounds_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->bounds();
}

// public iOS.CoreGraphics.CGRect get_Bounds() :86784
void UIView__get_Bounds_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->Bounds();
}

// public void set_Bounds(iOS.CoreGraphics.CGRect value) :86785
void UIView__set_Bounds_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* value)
{
    __this->Bounds(*value);
}

// public extern void bringSubviewToFront(iOS.UIKit.UIView view) :87136
void UIView__bringSubviewToFront_fn(UIView* __this, UIView* view_)
{
    __this->bringSubviewToFront(view_);
}

// public extern iOS.CoreGraphics.CGPoint center() :87235
void UIView__center_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->center();
}

// public iOS.CoreGraphics.CGPoint get_Center() :86790
void UIView__get_Center_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->Center();
}

// public void set_Center(iOS.CoreGraphics.CGPoint value) :86791
void UIView__set_Center_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* value)
{
    __this->Center(*value);
}

// public extern bool clearsContextBeforeDrawing() :87076
void UIView__clearsContextBeforeDrawing_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->clearsContextBeforeDrawing();
}

// public bool get_ClearsContextBeforeDrawing() :86709
void UIView__get_ClearsContextBeforeDrawing_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->ClearsContextBeforeDrawing();
}

// public void set_ClearsContextBeforeDrawing(bool value) :86710
void UIView__set_ClearsContextBeforeDrawing_fn(UIView* __this, bool* value)
{
    __this->ClearsContextBeforeDrawing(*value);
}

// public extern bool clipsToBounds() :87052
void UIView__clipsToBounds_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->clipsToBounds();
}

// public bool get_ClipsToBounds() :86685
void UIView__get_ClipsToBounds_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->ClipsToBounds();
}

// public void set_ClipsToBounds(bool value) :86686
void UIView__set_ClipsToBounds_fn(UIView* __this, bool* value)
{
    __this->ClipsToBounds(*value);
}

// public extern iOS.Foundation.NSArray constraints() :86953
void UIView__constraints_fn(UIView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->constraints();
}

// public extern iOS.Foundation.NSArray constraintsAffectingLayoutForAxis(iOS.UIKit.UILayoutConstraintAxis axis) :86887
void UIView__constraintsAffectingLayoutForAxis_fn(UIView* __this, int* axis_, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->constraintsAffectingLayoutForAxis(*axis_);
}

// public extern float contentCompressionResistancePriorityForAxis(iOS.UIKit.UILayoutConstraintAxis axis) :86926
void UIView__contentCompressionResistancePriorityForAxis_fn(UIView* __this, int* axis_, float* __retval)
{
    *__retval = __this->contentCompressionResistancePriorityForAxis(*axis_);
}

// public extern float contentHuggingPriorityForAxis(iOS.UIKit.UILayoutConstraintAxis axis) :86920
void UIView__contentHuggingPriorityForAxis_fn(UIView* __this, int* axis_, float* __retval)
{
    *__retval = __this->contentHuggingPriorityForAxis(*axis_);
}

// public extern iOS.UIKit.UIViewContentMode contentMode() :87088
void UIView__contentMode_fn(UIView* __this, int* __retval)
{
    *__retval = __this->contentMode();
}

// public iOS.UIKit.UIViewContentMode get_ContentMode() :86721
void UIView__get_ContentMode_fn(UIView* __this, int* __retval)
{
    *__retval = __this->ContentMode();
}

// public void set_ContentMode(iOS.UIKit.UIViewContentMode value) :86722
void UIView__set_ContentMode_fn(UIView* __this, int* value)
{
    __this->ContentMode(*value);
}

// public extern double contentScaleFactor() :87247
void UIView__contentScaleFactor_fn(UIView* __this, double* __retval)
{
    *__retval = __this->contentScaleFactor();
}

// public double get_ContentScaleFactor() :86802
void UIView__get_ContentScaleFactor_fn(UIView* __this, double* __retval)
{
    *__retval = __this->ContentScaleFactor();
}

// public void set_ContentScaleFactor(double value) :86803
void UIView__set_ContentScaleFactor_fn(UIView* __this, double* value)
{
    __this->ContentScaleFactor(*value);
}

// public extern iOS.CoreGraphics.CGRect contentStretch() :87094
void UIView__contentStretch_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->contentStretch();
}

// public iOS.CoreGraphics.CGRect get_ContentStretch() :86727
void UIView__get_ContentStretch_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->ContentStretch();
}

// public void set_ContentStretch(iOS.CoreGraphics.CGRect value) :86728
void UIView__set_ContentStretch_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* value)
{
    __this->ContentStretch(*value);
}

// public extern iOS.CoreGraphics.CGPoint convertPointFromCoordinateSpace(iOS.CoreGraphics.CGPoint point, iOS.UIKit.IUICoordinateSpace coordinateSpace) :87298
void UIView__convertPointFromCoordinateSpace_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* point_, uObject* coordinateSpace_, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->convertPointFromCoordinateSpace(*point_, coordinateSpace_);
}

// public extern iOS.CoreGraphics.CGPoint convertPointFromView(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UIView view) :87208
void UIView__convertPointFromView_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* point_, UIView* view_, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->convertPointFromView(*point_, view_);
}

// public extern iOS.CoreGraphics.CGPoint convertPointToCoordinateSpace(iOS.CoreGraphics.CGPoint point, iOS.UIKit.IUICoordinateSpace coordinateSpace) :87295
void UIView__convertPointToCoordinateSpace_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* point_, uObject* coordinateSpace_, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->convertPointToCoordinateSpace(*point_, coordinateSpace_);
}

// public extern iOS.CoreGraphics.CGPoint convertPointToView(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UIView view) :87205
void UIView__convertPointToView_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* point_, UIView* view_, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->convertPointToView(*point_, view_);
}

// public extern iOS.CoreGraphics.CGRect convertRectFromCoordinateSpace(iOS.CoreGraphics.CGRect rect, iOS.UIKit.IUICoordinateSpace coordinateSpace) :87304
void UIView__convertRectFromCoordinateSpace_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect_, uObject* coordinateSpace_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->convertRectFromCoordinateSpace(*rect_, coordinateSpace_);
}

// public extern iOS.CoreGraphics.CGRect convertRectFromView(iOS.CoreGraphics.CGRect rect, iOS.UIKit.UIView view) :87214
void UIView__convertRectFromView_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect_, UIView* view_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->convertRectFromView(*rect_, view_);
}

// public extern iOS.CoreGraphics.CGRect convertRectToCoordinateSpace(iOS.CoreGraphics.CGRect rect, iOS.UIKit.IUICoordinateSpace coordinateSpace) :87301
void UIView__convertRectToCoordinateSpace_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect_, uObject* coordinateSpace_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->convertRectToCoordinateSpace(*rect_, coordinateSpace_);
}

// public extern iOS.CoreGraphics.CGRect convertRectToView(iOS.CoreGraphics.CGRect rect, iOS.UIKit.UIView view) :87211
void UIView__convertRectToView_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect_, UIView* view_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->convertRectToView(*rect_, view_);
}

// public extern void decodeRestorableStateWithCoder(iOS.Foundation.NSCoder coder) :86878
void UIView__decodeRestorableStateWithCoder_fn(UIView* __this, ::g::iOS::Foundation::NSCoder* coder_)
{
    __this->decodeRestorableStateWithCoder(coder_);
}

// public extern void didAddSubview(iOS.UIKit.UIView subview) :87142
void UIView__didAddSubview_fn(UIView* __this, UIView* subview_)
{
    __this->didAddSubview(subview_);
}

// public extern void didMoveToSuperview() :87151
void UIView__didMoveToSuperview_fn(UIView* __this)
{
    __this->didMoveToSuperview();
}

// public extern void didMoveToWindow() :87157
void UIView__didMoveToWindow_fn(UIView* __this)
{
    __this->didMoveToWindow();
}

// public extern void drawRect(iOS.CoreGraphics.CGRect rect) :87040
void UIView__drawRect_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect_)
{
    __this->drawRect(*rect_);
}

// public extern void drawRectForViewPrintFormatter(iOS.CoreGraphics.CGRect rect, iOS.UIKit.UIViewPrintFormatter formatter) :86860
void UIView__drawRectForViewPrintFormatter_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect_, ::g::iOS::UIKit::UIViewPrintFormatter* formatter_)
{
    __this->drawRectForViewPrintFormatter(*rect_, formatter_);
}

// public extern bool drawViewHierarchyInRectAfterScreenUpdates(iOS.CoreGraphics.CGRect rect, bool afterUpdates) :86872
void UIView__drawViewHierarchyInRectAfterScreenUpdates_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect_, bool* afterUpdates_, bool* __retval)
{
    *__retval = __this->drawViewHierarchyInRectAfterScreenUpdates(*rect_, *afterUpdates_);
}

// public extern void encodeRestorableStateWithCoder(iOS.Foundation.NSCoder coder) :86875
void UIView__encodeRestorableStateWithCoder_fn(UIView* __this, ::g::iOS::Foundation::NSCoder* coder_)
{
    __this->encodeRestorableStateWithCoder(coder_);
}

// public virtual extern void encodeWithCoder(iOS.Foundation.NSCoder aCoder) :87277
void UIView__encodeWithCoder_fn(UIView* __this, ::g::iOS::Foundation::NSCoder* aCoder_)
{
    uStackFrame __("iOS.UIKit.UIView", "encodeWithCoder(iOS.Foundation.NSCoder)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(encodeWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aCoder_));
}

// public extern bool endEditing(bool force) :86863
void UIView__endEditing_fn(UIView* __this, bool* force_, bool* __retval)
{
    *__retval = __this->endEditing(*force_);
}

// public extern void exchangeSubviewAtIndexWithSubviewAtIndex(int index1, int index2) :87124
void UIView__exchangeSubviewAtIndexWithSubviewAtIndex_fn(UIView* __this, int* index1_, int* index2_)
{
    __this->exchangeSubviewAtIndexWithSubviewAtIndex(*index1_, *index2_);
}

// public bool get_ExclusiveTouch() :86814
void UIView__get_ExclusiveTouch_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->ExclusiveTouch();
}

// public void set_ExclusiveTouch(bool value) :86815
void UIView__set_ExclusiveTouch_fn(UIView* __this, bool* value)
{
    __this->ExclusiveTouch(*value);
}

// public extern void exerciseAmbiguityInLayout() :86893
void UIView__exerciseAmbiguityInLayout_fn(UIView* __this)
{
    __this->exerciseAmbiguityInLayout();
}

// public extern iOS.CoreGraphics.CGRect frame() :87223
void UIView__frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->frame();
}

// public iOS.CoreGraphics.CGRect get_Frame() :86778
void UIView__get_Frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->Frame();
}

// public void set_Frame(iOS.CoreGraphics.CGRect value) :86779
void UIView__set_Frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* value)
{
    __this->Frame(*value);
}

// public extern iOS.CoreGraphics.CGRect frameForAlignmentRect(iOS.CoreGraphics.CGRect alignmentRect) :86905
void UIView__frameForAlignmentRect_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* alignmentRect_, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->frameForAlignmentRect(*alignmentRect_);
}

// public extern iOS.Foundation.NSArray gestureRecognizers() :86989
void UIView__gestureRecognizers_fn(UIView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->gestureRecognizers();
}

// public iOS.Foundation.NSArray get_GestureRecognizers() :86679
void UIView__get_GestureRecognizers_fn(UIView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->GestureRecognizers();
}

// public void set_GestureRecognizers(iOS.Foundation.NSArray value) :86680
void UIView__set_GestureRecognizers_fn(UIView* __this, ::g::iOS::Foundation::NSArray* value)
{
    __this->GestureRecognizers(value);
}

// public extern bool gestureRecognizerShouldBegin(iOS.UIKit.UIGestureRecognizer gestureRecognizer) :86986
void UIView__gestureRecognizerShouldBegin_fn(UIView* __this, ::g::iOS::UIKit::UIGestureRecognizer* gestureRecognizer_, bool* __retval)
{
    *__retval = __this->gestureRecognizerShouldBegin(gestureRecognizer_);
}

// public extern bool hasAmbiguousLayout() :86890
void UIView__hasAmbiguousLayout_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->hasAmbiguousLayout();
}

// public bool get_Hidden() :86715
void UIView__get_Hidden_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->Hidden();
}

// public void set_Hidden(bool value) :86716
void UIView__set_Hidden_fn(UIView* __this, bool* value)
{
    __this->Hidden(*value);
}

// public extern iOS.UIKit.UIView hitTestWithEvent(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UIEvent event_) :87199
void UIView__hitTestWithEvent_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* point_, ::g::iOS::UIKit::UIEvent* event__, UIView** __retval)
{
    *__retval = __this->hitTestWithEvent(*point_, event__);
}

// public virtual extern void initWithCoder(iOS.Foundation.NSCoder aDecoder) :87280
void UIView__initWithCoder_fn(UIView* __this, ::g::iOS::Foundation::NSCoder* aDecoder_)
{
    uStackFrame __("iOS.UIKit.UIView", "initWithCoder(iOS.Foundation.NSCoder)");
    uObjC_DO_INIT(__this, @selector(initWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aDecoder_));
}

// public virtual extern void initWithFrame(iOS.CoreGraphics.CGRect frame) :86839
void UIView__initWithFrame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* frame_)
{
    uStackFrame __("iOS.UIKit.UIView", "initWithFrame(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect frame__ = *frame_;
    uObjC_DO_INIT(__this, @selector(initWithFrame:),
        uObjC::Struct::FromUno_CGRect(frame__, ::CGRect()));
}

// public extern void insertSubviewAboveSubview(iOS.UIKit.UIView view, iOS.UIKit.UIView siblingSubview) :87133
void UIView__insertSubviewAboveSubview_fn(UIView* __this, UIView* view_, UIView* siblingSubview_)
{
    __this->insertSubviewAboveSubview(view_, siblingSubview_);
}

// public extern void insertSubviewAtIndex(iOS.UIKit.UIView view, int index) :87121
void UIView__insertSubviewAtIndex_fn(UIView* __this, UIView* view_, int* index_)
{
    __this->insertSubviewAtIndex(view_, *index_);
}

// public extern void insertSubviewBelowSubview(iOS.UIKit.UIView view, iOS.UIKit.UIView siblingSubview) :87130
void UIView__insertSubviewBelowSubview_fn(UIView* __this, UIView* view_, UIView* siblingSubview_)
{
    __this->insertSubviewBelowSubview(view_, siblingSubview_);
}

// public extern iOS.CoreGraphics.CGSize intrinsicContentSize() :86914
void UIView__intrinsicContentSize_fn(UIView* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->intrinsicContentSize();
}

// public extern void invalidateIntrinsicContentSize() :86917
void UIView__invalidateIntrinsicContentSize_fn(UIView* __this)
{
    __this->invalidateIntrinsicContentSize();
}

// public void iOS.Foundation.INSCoding.encodeWithCoder(iOS.Foundation.NSCoder aCoder) :87306
void UIView__iOSFoundationINSCodingencodeWithCoder_fn(UIView* __this, ::g::iOS::Foundation::NSCoder* aCoder)
{
    uStackFrame __("iOS.UIKit.UIView", "iOS.Foundation.INSCoding.encodeWithCoder(iOS.Foundation.NSCoder)");
    __this->encodeWithCoder(aCoder);
}

// public void iOS.Foundation.INSCoding.initWithCoder(iOS.Foundation.NSCoder aDecoder) :87308
void UIView__iOSFoundationINSCodinginitWithCoder_fn(UIView* __this, ::g::iOS::Foundation::NSCoder* aDecoder)
{
    uStackFrame __("iOS.UIKit.UIView", "iOS.Foundation.INSCoding.initWithCoder(iOS.Foundation.NSCoder)");
    __this->initWithCoder(aDecoder);
}

// public ObjC.ID iOS.UIKit.IUIAppearance._appearance() :87310
void UIView__iOSUIKitIUIAppearance_appearance_fn(UIView* __this, ::id* __retval)
{
    uStackFrame __("iOS.UIKit.UIView", "iOS.UIKit.IUIAppearance._appearance()");
    return *__retval = UIView::_appearance(), void();
}

// public ObjC.ID iOS.UIKit.IUIAppearance._appearanceForTraitCollection(iOS.UIKit.UITraitCollection trait) :87312
void UIView__iOSUIKitIUIAppearance_appearanceForTraitCollection_fn(UIView* __this, ::g::iOS::UIKit::UITraitCollection* trait, ::id* __retval)
{
    uStackFrame __("iOS.UIKit.UIView", "iOS.UIKit.IUIAppearance._appearanceForTraitCollection(iOS.UIKit.UITraitCollection)");
    return *__retval = UIView::_appearanceForTraitCollection(trait), void();
}

// public iOS.CoreGraphics.CGPoint iOS.UIKit.IUICoordinateSpace.convertPointFromCoordinateSpace(iOS.CoreGraphics.CGPoint point, iOS.UIKit.IUICoordinateSpace coordinateSpace) :87318
void UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* point, uObject* coordinateSpace, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    uStackFrame __("iOS.UIKit.UIView", "iOS.UIKit.IUICoordinateSpace.convertPointFromCoordinateSpace(iOS.CoreGraphics.CGPoint,iOS.UIKit.IUICoordinateSpace)");
    ::g::iOS::CoreGraphics::CGPoint point_ = *point;
    return *__retval = __this->convertPointFromCoordinateSpace(point_, coordinateSpace), void();
}

// public iOS.CoreGraphics.CGPoint iOS.UIKit.IUICoordinateSpace.convertPointToCoordinateSpace(iOS.CoreGraphics.CGPoint point, iOS.UIKit.IUICoordinateSpace coordinateSpace) :87316
void UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* point, uObject* coordinateSpace, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    uStackFrame __("iOS.UIKit.UIView", "iOS.UIKit.IUICoordinateSpace.convertPointToCoordinateSpace(iOS.CoreGraphics.CGPoint,iOS.UIKit.IUICoordinateSpace)");
    ::g::iOS::CoreGraphics::CGPoint point_ = *point;
    return *__retval = __this->convertPointToCoordinateSpace(point_, coordinateSpace), void();
}

// public iOS.CoreGraphics.CGRect iOS.UIKit.IUICoordinateSpace.convertRectFromCoordinateSpace(iOS.CoreGraphics.CGRect rect, iOS.UIKit.IUICoordinateSpace coordinateSpace) :87322
void UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect, uObject* coordinateSpace, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    uStackFrame __("iOS.UIKit.UIView", "iOS.UIKit.IUICoordinateSpace.convertRectFromCoordinateSpace(iOS.CoreGraphics.CGRect,iOS.UIKit.IUICoordinateSpace)");
    ::g::iOS::CoreGraphics::CGRect rect_ = *rect;
    return *__retval = __this->convertRectFromCoordinateSpace(rect_, coordinateSpace), void();
}

// public iOS.CoreGraphics.CGRect iOS.UIKit.IUICoordinateSpace.convertRectToCoordinateSpace(iOS.CoreGraphics.CGRect rect, iOS.UIKit.IUICoordinateSpace coordinateSpace) :87320
void UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect, uObject* coordinateSpace, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    uStackFrame __("iOS.UIKit.UIView", "iOS.UIKit.IUICoordinateSpace.convertRectToCoordinateSpace(iOS.CoreGraphics.CGRect,iOS.UIKit.IUICoordinateSpace)");
    ::g::iOS::CoreGraphics::CGRect rect_ = *rect;
    return *__retval = __this->convertRectToCoordinateSpace(rect_, coordinateSpace), void();
}

// public void iOS.UIKit.IUITraitEnvironment.traitCollectionDidChange(iOS.UIKit.UITraitCollection previousTraitCollection) :87314
void UIView__iOSUIKitIUITraitEnvironmenttraitCollectionDidChange_fn(UIView* __this, ::g::iOS::UIKit::UITraitCollection* previousTraitCollection)
{
    uStackFrame __("iOS.UIKit.UIView", "iOS.UIKit.IUITraitEnvironment.traitCollectionDidChange(iOS.UIKit.UITraitCollection)");
    __this->traitCollectionDidChange(previousTraitCollection);
}

// public extern bool isDescendantOfView(iOS.UIKit.UIView view) :87160
void UIView__isDescendantOfView_fn(UIView* __this, UIView* view_, bool* __retval)
{
    *__retval = __this->isDescendantOfView(view_);
}

// public extern bool isExclusiveTouch() :87259
void UIView__isExclusiveTouch_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->isExclusiveTouch();
}

// public extern bool isHidden() :87082
void UIView__isHidden_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->isHidden();
}

// public extern bool isMultipleTouchEnabled() :87253
void UIView__isMultipleTouchEnabled_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->isMultipleTouchEnabled();
}

// public extern bool isOpaque() :87070
void UIView__isOpaque_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->isOpaque();
}

// public virtual extern bool isUserInteractionEnabled() :86842
void UIView__isUserInteractionEnabled_fn(UIView* __this, bool* __retval)
{
    uStackFrame __("iOS.UIKit.UIView", "isUserInteractionEnabled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, BOOL, @selector(isUserInteractionEnabled));
    return *__retval = (bool)__return, void();
}

// public extern iOS.QuartzCore.CALayer layer() :86854
void UIView__layer_fn(UIView* __this, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = __this->layer();
}

// public iOS.QuartzCore.CALayer get_Layer() :86662
void UIView__get_Layer_fn(UIView* __this, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = __this->Layer();
}

// public extern void layoutIfNeeded() :87169
void UIView__layoutIfNeeded_fn(UIView* __this)
{
    __this->layoutIfNeeded();
}

// public extern iOS.UIKit.UIEdgeInsets layoutMargins() :87187
void UIView__layoutMargins_fn(UIView* __this, ::g::iOS::UIKit::UIEdgeInsets* __retval)
{
    *__retval = __this->layoutMargins();
}

// public iOS.UIKit.UIEdgeInsets get_LayoutMargins() :86766
void UIView__get_LayoutMargins_fn(UIView* __this, ::g::iOS::UIKit::UIEdgeInsets* __retval)
{
    *__retval = __this->LayoutMargins();
}

// public void set_LayoutMargins(iOS.UIKit.UIEdgeInsets value) :86767
void UIView__set_LayoutMargins_fn(UIView* __this, ::g::iOS::UIKit::UIEdgeInsets* value)
{
    __this->LayoutMargins(*value);
}

// public extern void layoutMarginsDidChange() :87175
void UIView__layoutMarginsDidChange_fn(UIView* __this)
{
    __this->layoutMarginsDidChange();
}

// public extern void layoutSubviews() :87172
void UIView__layoutSubviews_fn(UIView* __this)
{
    __this->layoutSubviews();
}

// public extern iOS.UIKit.UIView maskView() :87100
void UIView__maskView_fn(UIView* __this, UIView** __retval)
{
    *__retval = __this->maskView();
}

// public iOS.UIKit.UIView get_MaskView() :86733
void UIView__get_MaskView_fn(UIView* __this, UIView** __retval)
{
    *__retval = __this->MaskView();
}

// public void set_MaskView(iOS.UIKit.UIView value) :86734
void UIView__set_MaskView_fn(UIView* __this, UIView* value)
{
    __this->MaskView(value);
}

// public extern iOS.Foundation.NSArray motionEffects() :86974
void UIView__motionEffects_fn(UIView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->motionEffects();
}

// public iOS.Foundation.NSArray get_MotionEffects() :86673
void UIView__get_MotionEffects_fn(UIView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->MotionEffects();
}

// public void set_MotionEffects(iOS.Foundation.NSArray value) :86674
void UIView__set_MotionEffects_fn(UIView* __this, ::g::iOS::Foundation::NSArray* value)
{
    __this->MotionEffects(value);
}

// public bool get_MultipleTouchEnabled() :86808
void UIView__get_MultipleTouchEnabled_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->MultipleTouchEnabled();
}

// public void set_MultipleTouchEnabled(bool value) :86809
void UIView__set_MultipleTouchEnabled_fn(UIView* __this, bool* value)
{
    __this->MultipleTouchEnabled(*value);
}

// public extern bool needsUpdateConstraints() :86947
void UIView__needsUpdateConstraints_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->needsUpdateConstraints();
}

// public UIView New() :86641
void UIView__New7_fn(UIView** __retval)
{
    *__retval = UIView::New7();
}

// public UIView New(ObjC.ID __id) :86643
void UIView__New8_fn(::id* __id1, UIView** __retval)
{
    *__retval = UIView::New8(*__id1);
}

// public bool get_Opaque() :86703
void UIView__get_Opaque_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->Opaque();
}

// public void set_Opaque(bool value) :86704
void UIView__set_Opaque_fn(UIView* __this, bool* value)
{
    __this->Opaque(*value);
}

// public extern bool pointInsideWithEvent(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UIEvent event_) :87202
void UIView__pointInsideWithEvent_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* point_, ::g::iOS::UIKit::UIEvent* event__, bool* __retval)
{
    *__retval = __this->pointInsideWithEvent(*point_, event__);
}

// public extern bool preservesSuperviewLayoutMargins() :87193
void UIView__preservesSuperviewLayoutMargins_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->preservesSuperviewLayoutMargins();
}

// public bool get_PreservesSuperviewLayoutMargins() :86772
void UIView__get_PreservesSuperviewLayoutMargins_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->PreservesSuperviewLayoutMargins();
}

// public void set_PreservesSuperviewLayoutMargins(bool value) :86773
void UIView__set_PreservesSuperviewLayoutMargins_fn(UIView* __this, bool* value)
{
    __this->PreservesSuperviewLayoutMargins(*value);
}

// public extern void removeConstraint(iOS.UIKit.NSLayoutConstraint constraint) :86962
void UIView__removeConstraint_fn(UIView* __this, ::g::iOS::UIKit::NSLayoutConstraint* constraint_)
{
    __this->removeConstraint(constraint_);
}

// public extern void removeConstraints(iOS.Foundation.NSArray constraints) :86965
void UIView__removeConstraints_fn(UIView* __this, ::g::iOS::Foundation::NSArray* constraints_)
{
    __this->removeConstraints(constraints_);
}

// public extern void removeFromSuperview() :87118
void UIView__removeFromSuperview_fn(UIView* __this)
{
    __this->removeFromSuperview();
}

// public extern void removeGestureRecognizer(iOS.UIKit.UIGestureRecognizer gestureRecognizer) :86983
void UIView__removeGestureRecognizer_fn(UIView* __this, ::g::iOS::UIKit::UIGestureRecognizer* gestureRecognizer_)
{
    __this->removeGestureRecognizer(gestureRecognizer_);
}

// public extern void removeMotionEffect(iOS.UIKit.UIMotionEffect effect) :86971
void UIView__removeMotionEffect_fn(UIView* __this, ::g::iOS::UIKit::UIMotionEffect* effect_)
{
    __this->removeMotionEffect(effect_);
}

// public extern iOS.UIKit.UIView resizableSnapshotViewFromRectAfterScreenUpdatesWithCapInsets(iOS.CoreGraphics.CGRect rect, bool afterUpdates, iOS.UIKit.UIEdgeInsets capInsets) :86869
void UIView__resizableSnapshotViewFromRectAfterScreenUpdatesWithCapInsets_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect_, bool* afterUpdates_, ::g::iOS::UIKit::UIEdgeInsets* capInsets_, UIView** __retval)
{
    *__retval = __this->resizableSnapshotViewFromRectAfterScreenUpdatesWithCapInsets(*rect_, *afterUpdates_, *capInsets_);
}

// public extern string restorationIdentifier() :86881
void UIView__restorationIdentifier_fn(UIView* __this, uString** __retval)
{
    *__retval = __this->restorationIdentifier();
}

// public string get_RestorationIdentifier() :86667
void UIView__get_RestorationIdentifier_fn(UIView* __this, uString** __retval)
{
    *__retval = __this->RestorationIdentifier();
}

// public void set_RestorationIdentifier(string value) :86668
void UIView__set_RestorationIdentifier_fn(UIView* __this, uString* value)
{
    __this->RestorationIdentifier(value);
}

// public extern void sendSubviewToBack(iOS.UIKit.UIView view) :87139
void UIView__sendSubviewToBack_fn(UIView* __this, UIView* view_)
{
    __this->sendSubviewToBack(view_);
}

// public extern void setAlpha(double alpha) :87067
void UIView__setAlpha_fn(UIView* __this, double* alpha_)
{
    __this->setAlpha(*alpha_);
}

// public extern void setAutoresizesSubviews(bool autoresizesSubviews) :87268
void UIView__setAutoresizesSubviews_fn(UIView* __this, bool* autoresizesSubviews_)
{
    __this->setAutoresizesSubviews(*autoresizesSubviews_);
}

// public extern void setAutoresizingMask(iOS.UIKit.UIViewAutoresizing autoresizingMask) :87274
void UIView__setAutoresizingMask_fn(UIView* __this, uint32_t* autoresizingMask_)
{
    __this->setAutoresizingMask(*autoresizingMask_);
}

// public extern void setBackgroundColor(iOS.UIKit.UIColor backgroundColor) :87061
void UIView__setBackgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* backgroundColor_)
{
    __this->setBackgroundColor(backgroundColor_);
}

// public extern void setBounds(iOS.CoreGraphics.CGRect bounds) :87232
void UIView__setBounds_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* bounds_)
{
    __this->setBounds(*bounds_);
}

// public extern void setCenter(iOS.CoreGraphics.CGPoint center) :87238
void UIView__setCenter_fn(UIView* __this, ::g::iOS::CoreGraphics::CGPoint* center_)
{
    __this->setCenter(*center_);
}

// public extern void setClearsContextBeforeDrawing(bool clearsContextBeforeDrawing) :87079
void UIView__setClearsContextBeforeDrawing_fn(UIView* __this, bool* clearsContextBeforeDrawing_)
{
    __this->setClearsContextBeforeDrawing(*clearsContextBeforeDrawing_);
}

// public extern void setClipsToBounds(bool clipsToBounds) :87055
void UIView__setClipsToBounds_fn(UIView* __this, bool* clipsToBounds_)
{
    __this->setClipsToBounds(*clipsToBounds_);
}

// public extern void setContentCompressionResistancePriorityForAxis(float priority, iOS.UIKit.UILayoutConstraintAxis axis) :86929
void UIView__setContentCompressionResistancePriorityForAxis_fn(UIView* __this, float* priority_, int* axis_)
{
    __this->setContentCompressionResistancePriorityForAxis(*priority_, *axis_);
}

// public extern void setContentHuggingPriorityForAxis(float priority, iOS.UIKit.UILayoutConstraintAxis axis) :86923
void UIView__setContentHuggingPriorityForAxis_fn(UIView* __this, float* priority_, int* axis_)
{
    __this->setContentHuggingPriorityForAxis(*priority_, *axis_);
}

// public extern void setContentMode(iOS.UIKit.UIViewContentMode contentMode) :87091
void UIView__setContentMode_fn(UIView* __this, int* contentMode_)
{
    __this->setContentMode(*contentMode_);
}

// public extern void setContentScaleFactor(double contentScaleFactor) :87250
void UIView__setContentScaleFactor_fn(UIView* __this, double* contentScaleFactor_)
{
    __this->setContentScaleFactor(*contentScaleFactor_);
}

// public extern void setContentStretch(iOS.CoreGraphics.CGRect contentStretch) :87097
void UIView__setContentStretch_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* contentStretch_)
{
    __this->setContentStretch(*contentStretch_);
}

// public extern void setExclusiveTouch(bool exclusiveTouch) :87262
void UIView__setExclusiveTouch_fn(UIView* __this, bool* exclusiveTouch_)
{
    __this->setExclusiveTouch(*exclusiveTouch_);
}

// public virtual extern void setFrame(iOS.CoreGraphics.CGRect frame) :87226
void UIView__setFrame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* frame_)
{
    uStackFrame __("iOS.UIKit.UIView", "setFrame(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect frame__ = *frame_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setFrame:),
        uObjC::Struct::FromUno_CGRect(frame__, ::CGRect()));
}

// public extern void setGestureRecognizers(iOS.Foundation.NSArray gestureRecognizers) :86992
void UIView__setGestureRecognizers_fn(UIView* __this, ::g::iOS::Foundation::NSArray* gestureRecognizers_)
{
    __this->setGestureRecognizers(gestureRecognizers_);
}

// public extern void setHidden(bool hidden) :87085
void UIView__setHidden_fn(UIView* __this, bool* hidden_)
{
    __this->setHidden(*hidden_);
}

// public extern void setLayoutMargins(iOS.UIKit.UIEdgeInsets layoutMargins) :87190
void UIView__setLayoutMargins_fn(UIView* __this, ::g::iOS::UIKit::UIEdgeInsets* layoutMargins_)
{
    __this->setLayoutMargins(*layoutMargins_);
}

// public extern void setMaskView(iOS.UIKit.UIView maskView) :87103
void UIView__setMaskView_fn(UIView* __this, UIView* maskView_)
{
    __this->setMaskView(maskView_);
}

// public extern void setMotionEffects(iOS.Foundation.NSArray motionEffects) :86977
void UIView__setMotionEffects_fn(UIView* __this, ::g::iOS::Foundation::NSArray* motionEffects_)
{
    __this->setMotionEffects(motionEffects_);
}

// public extern void setMultipleTouchEnabled(bool multipleTouchEnabled) :87256
void UIView__setMultipleTouchEnabled_fn(UIView* __this, bool* multipleTouchEnabled_)
{
    __this->setMultipleTouchEnabled(*multipleTouchEnabled_);
}

// public extern void setNeedsDisplay() :87043
void UIView__setNeedsDisplay_fn(UIView* __this)
{
    __this->setNeedsDisplay();
}

// public extern void setNeedsDisplayInRect(iOS.CoreGraphics.CGRect rect) :87046
void UIView__setNeedsDisplayInRect_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* rect_)
{
    __this->setNeedsDisplayInRect(*rect_);
}

// public extern void setNeedsLayout() :87166
void UIView__setNeedsLayout_fn(UIView* __this)
{
    __this->setNeedsLayout();
}

// public extern void setNeedsUpdateConstraints() :86950
void UIView__setNeedsUpdateConstraints_fn(UIView* __this)
{
    __this->setNeedsUpdateConstraints();
}

// public extern void setOpaque(bool opaque) :87073
void UIView__setOpaque_fn(UIView* __this, bool* opaque_)
{
    __this->setOpaque(*opaque_);
}

// public extern void setPreservesSuperviewLayoutMargins(bool preservesSuperviewLayoutMargins) :87196
void UIView__setPreservesSuperviewLayoutMargins_fn(UIView* __this, bool* preservesSuperviewLayoutMargins_)
{
    __this->setPreservesSuperviewLayoutMargins(*preservesSuperviewLayoutMargins_);
}

// public extern void setRestorationIdentifier(string restorationIdentifier) :86884
void UIView__setRestorationIdentifier_fn(UIView* __this, uString* restorationIdentifier_)
{
    __this->setRestorationIdentifier(restorationIdentifier_);
}

// public extern void setTag(int tag) :86851
void UIView__setTag_fn(UIView* __this, int* tag_)
{
    __this->setTag(*tag_);
}

// public extern void setTintAdjustmentMode(iOS.UIKit.UIViewTintAdjustmentMode tintAdjustmentMode) :87115
void UIView__setTintAdjustmentMode_fn(UIView* __this, int* tintAdjustmentMode_)
{
    __this->setTintAdjustmentMode(*tintAdjustmentMode_);
}

// public virtual extern void setTintColor(iOS.UIKit.UIColor tintColor) :87109
void UIView__setTintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* tintColor_)
{
    uStackFrame __("iOS.UIKit.UIView", "setTintColor(iOS.UIKit.UIColor)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setTintColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)tintColor_));
}

// public extern void setTransform(iOS.CoreGraphics.CGAffineTransform transform) :87244
void UIView__setTransform_fn(UIView* __this, ::g::iOS::CoreGraphics::CGAffineTransform* transform_)
{
    __this->setTransform(*transform_);
}

// public extern void setTranslatesAutoresizingMaskIntoConstraints(bool flag) :86935
void UIView__setTranslatesAutoresizingMaskIntoConstraints_fn(UIView* __this, bool* flag_)
{
    __this->setTranslatesAutoresizingMaskIntoConstraints(*flag_);
}

// public virtual extern void setUserInteractionEnabled(bool userInteractionEnabled) :86845
void UIView__setUserInteractionEnabled_fn(UIView* __this, bool* userInteractionEnabled_)
{
    uStackFrame __("iOS.UIKit.UIView", "setUserInteractionEnabled(bool)");
    bool userInteractionEnabled__ = *userInteractionEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setUserInteractionEnabled:),
        (BOOL)userInteractionEnabled__);
}

// public extern iOS.CoreGraphics.CGSize sizeThatFits(iOS.CoreGraphics.CGSize size) :87217
void UIView__sizeThatFits_fn(UIView* __this, ::g::iOS::CoreGraphics::CGSize* size_, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->sizeThatFits(*size_);
}

// public extern void sizeToFit() :87220
void UIView__sizeToFit_fn(UIView* __this)
{
    __this->sizeToFit();
}

// public extern iOS.UIKit.UIView snapshotViewAfterScreenUpdates(bool afterUpdates) :86866
void UIView__snapshotViewAfterScreenUpdates_fn(UIView* __this, bool* afterUpdates_, UIView** __retval)
{
    *__retval = __this->snapshotViewAfterScreenUpdates(*afterUpdates_);
}

// public extern iOS.Foundation.NSArray subviews() :87181
void UIView__subviews_fn(UIView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->subviews();
}

// public iOS.Foundation.NSArray get_Subviews() :86756
void UIView__get_Subviews_fn(UIView* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->Subviews();
}

// public extern iOS.UIKit.UIView superview() :87178
void UIView__superview_fn(UIView* __this, UIView** __retval)
{
    *__retval = __this->superview();
}

// public iOS.UIKit.UIView get_Superview() :86751
void UIView__get_Superview_fn(UIView* __this, UIView** __retval)
{
    *__retval = __this->Superview();
}

// public extern iOS.CoreGraphics.CGSize systemLayoutSizeFittingSize(iOS.CoreGraphics.CGSize targetSize) :86896
void UIView__systemLayoutSizeFittingSize_fn(UIView* __this, ::g::iOS::CoreGraphics::CGSize* targetSize_, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->systemLayoutSizeFittingSize(*targetSize_);
}

// public extern iOS.CoreGraphics.CGSize systemLayoutSizeFittingSizeWithHorizontalFittingPriorityVerticalFittingPriority(iOS.CoreGraphics.CGSize targetSize, float horizontalFittingPriority, float verticalFittingPriority) :86899
void UIView__systemLayoutSizeFittingSizeWithHorizontalFittingPriorityVerticalFittingPriority_fn(UIView* __this, ::g::iOS::CoreGraphics::CGSize* targetSize_, float* horizontalFittingPriority_, float* verticalFittingPriority_, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->systemLayoutSizeFittingSizeWithHorizontalFittingPriorityVerticalFittingPriority(*targetSize_, *horizontalFittingPriority_, *verticalFittingPriority_);
}

// public extern int tag() :86848
void UIView__tag_fn(UIView* __this, int* __retval)
{
    *__retval = __this->tag();
}

// public int get_Tag() :86656
void UIView__get_Tag_fn(UIView* __this, int* __retval)
{
    *__retval = __this->Tag();
}

// public void set_Tag(int value) :86657
void UIView__set_Tag_fn(UIView* __this, int* value)
{
    __this->Tag(*value);
}

// public extern iOS.UIKit.UIViewTintAdjustmentMode tintAdjustmentMode() :87112
void UIView__tintAdjustmentMode_fn(UIView* __this, int* __retval)
{
    *__retval = __this->tintAdjustmentMode();
}

// public iOS.UIKit.UIViewTintAdjustmentMode get_TintAdjustmentMode() :86745
void UIView__get_TintAdjustmentMode_fn(UIView* __this, int* __retval)
{
    *__retval = __this->TintAdjustmentMode();
}

// public void set_TintAdjustmentMode(iOS.UIKit.UIViewTintAdjustmentMode value) :86746
void UIView__set_TintAdjustmentMode_fn(UIView* __this, int* value)
{
    __this->TintAdjustmentMode(*value);
}

// public virtual extern iOS.UIKit.UIColor tintColor() :87106
void UIView__tintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    uStackFrame __("iOS.UIKit.UIView", "tintColor()");
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::UIColor*, @selector(tintColor));
    return *__retval = (::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIColor_typeof()), void();
}

// public iOS.UIKit.UIColor get_TintColor() :86739
void UIView__get_TintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = __this->TintColor();
}

// public void set_TintColor(iOS.UIKit.UIColor value) :86740
void UIView__set_TintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* value)
{
    __this->TintColor(value);
}

// public extern void tintColorDidChange() :87049
void UIView__tintColorDidChange_fn(UIView* __this)
{
    __this->tintColorDidChange();
}

// public extern iOS.UIKit.UITraitCollection traitCollection() :87292
void UIView__traitCollection_fn(UIView* __this, ::g::iOS::UIKit::UITraitCollection** __retval)
{
    *__retval = __this->traitCollection();
}

// public iOS.UIKit.UITraitCollection get_TraitCollection() :86832
void UIView__get_TraitCollection_fn(UIView* __this, ::g::iOS::UIKit::UITraitCollection** __retval)
{
    *__retval = __this->TraitCollection();
}

// public extern void traitCollectionDidChange(iOS.UIKit.UITraitCollection previousTraitCollection) :87289
void UIView__traitCollectionDidChange_fn(UIView* __this, ::g::iOS::UIKit::UITraitCollection* previousTraitCollection_)
{
    __this->traitCollectionDidChange(previousTraitCollection_);
}

// public extern iOS.CoreGraphics.CGAffineTransform transform() :87241
void UIView__transform_fn(UIView* __this, ::g::iOS::CoreGraphics::CGAffineTransform* __retval)
{
    *__retval = __this->transform();
}

// public iOS.CoreGraphics.CGAffineTransform get_Transform() :86796
void UIView__get_Transform_fn(UIView* __this, ::g::iOS::CoreGraphics::CGAffineTransform* __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(iOS.CoreGraphics.CGAffineTransform value) :86797
void UIView__set_Transform_fn(UIView* __this, ::g::iOS::CoreGraphics::CGAffineTransform* value)
{
    __this->Transform(*value);
}

// public extern bool translatesAutoresizingMaskIntoConstraints() :86932
void UIView__translatesAutoresizingMaskIntoConstraints_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->translatesAutoresizingMaskIntoConstraints();
}

// public extern void updateConstraints() :86944
void UIView__updateConstraints_fn(UIView* __this)
{
    __this->updateConstraints();
}

// public extern void updateConstraintsIfNeeded() :86941
void UIView__updateConstraintsIfNeeded_fn(UIView* __this)
{
    __this->updateConstraintsIfNeeded();
}

// public bool get_UserInteractionEnabled() :86650
void UIView__get_UserInteractionEnabled_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->UserInteractionEnabled();
}

// public void set_UserInteractionEnabled(bool value) :86651
void UIView__set_UserInteractionEnabled_fn(UIView* __this, bool* value)
{
    __this->UserInteractionEnabled(*value);
}

// public extern iOS.UIKit.UIView viewForBaselineLayout() :86911
void UIView__viewForBaselineLayout_fn(UIView* __this, UIView** __retval)
{
    *__retval = __this->viewForBaselineLayout();
}

// public extern iOS.UIKit.UIViewPrintFormatter viewPrintFormatter() :86857
void UIView__viewPrintFormatter_fn(UIView* __this, ::g::iOS::UIKit::UIViewPrintFormatter** __retval)
{
    *__retval = __this->viewPrintFormatter();
}

// public extern iOS.UIKit.UIView viewWithTag(int tag) :87163
void UIView__viewWithTag_fn(UIView* __this, int* tag_, UIView** __retval)
{
    *__retval = __this->viewWithTag(*tag_);
}

// public extern void willMoveToSuperview(iOS.UIKit.UIView newSuperview) :87148
void UIView__willMoveToSuperview_fn(UIView* __this, UIView* newSuperview_)
{
    __this->willMoveToSuperview(newSuperview_);
}

// public extern void willMoveToWindow(iOS.UIKit.UIWindow newWindow) :87154
void UIView__willMoveToWindow_fn(UIView* __this, ::g::iOS::UIKit::UIWindow* newWindow_)
{
    __this->willMoveToWindow(newWindow_);
}

// public extern void willRemoveSubview(iOS.UIKit.UIView subview) :87145
void UIView__willRemoveSubview_fn(UIView* __this, UIView* subview_)
{
    __this->willRemoveSubview(subview_);
}

// public extern iOS.UIKit.UIWindow window() :87184
void UIView__window_fn(UIView* __this, ::g::iOS::UIKit::UIWindow** __retval)
{
    *__retval = __this->window();
}

// public iOS.UIKit.UIWindow get_Window() :86761
void UIView__get_Window_fn(UIView* __this, ::g::iOS::UIKit::UIWindow** __retval)
{
    *__retval = __this->Window();
}

// public UIView() [instance] :86641
void UIView::ctor_6()
{
    uStackFrame __("iOS.UIKit.UIView", ".ctor()");
    ctor_4();
}

// public UIView(ObjC.ID __id) [instance] :86643
void UIView::ctor_7(::id __id1)
{
    uStackFrame __("iOS.UIKit.UIView", ".ctor(ObjC.ID)");
    ctor_5(__id1);
}

// public extern void addConstraint(iOS.UIKit.NSLayoutConstraint constraint) [instance] :86956
void UIView::addConstraint(::g::iOS::UIKit::NSLayoutConstraint* constraint_)
{
    uStackFrame __("iOS.UIKit.UIView", "addConstraint(iOS.UIKit.NSLayoutConstraint)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addConstraint:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)constraint_));
}

// public extern void addConstraints(iOS.Foundation.NSArray constraints) [instance] :86959
void UIView::addConstraints(::g::iOS::Foundation::NSArray* constraints_)
{
    uStackFrame __("iOS.UIKit.UIView", "addConstraints(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addConstraints:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)constraints_));
}

// public extern void addGestureRecognizer(iOS.UIKit.UIGestureRecognizer gestureRecognizer) [instance] :86980
void UIView::addGestureRecognizer(::g::iOS::UIKit::UIGestureRecognizer* gestureRecognizer_)
{
    uStackFrame __("iOS.UIKit.UIView", "addGestureRecognizer(iOS.UIKit.UIGestureRecognizer)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addGestureRecognizer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)gestureRecognizer_));
}

// public extern void addMotionEffect(iOS.UIKit.UIMotionEffect effect) [instance] :86968
void UIView::addMotionEffect(::g::iOS::UIKit::UIMotionEffect* effect_)
{
    uStackFrame __("iOS.UIKit.UIView", "addMotionEffect(iOS.UIKit.UIMotionEffect)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addMotionEffect:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)effect_));
}

// public extern void addSubview(iOS.UIKit.UIView view) [instance] :87127
void UIView::addSubview(UIView* view_)
{
    uStackFrame __("iOS.UIKit.UIView", "addSubview(iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addSubview:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

// public extern iOS.CoreGraphics.CGRect alignmentRectForFrame(iOS.CoreGraphics.CGRect frame) [instance] :86902
::g::iOS::CoreGraphics::CGRect UIView::alignmentRectForFrame(::g::iOS::CoreGraphics::CGRect frame_)
{
    uStackFrame __("iOS.UIKit.UIView", "alignmentRectForFrame(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect frame__ = frame_;
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(alignmentRectForFrame:),
        uObjC::Struct::FromUno_CGRect(frame__, ::CGRect()));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern iOS.UIKit.UIEdgeInsets alignmentRectInsets() [instance] :86908
::g::iOS::UIKit::UIEdgeInsets UIView::alignmentRectInsets()
{
    uStackFrame __("iOS.UIKit.UIView", "alignmentRectInsets()");
    ::UIEdgeInsets __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIEdgeInsets, @selector(alignmentRectInsets));
    return uObjC::Struct::ToUno_UIEdgeInsets(__return, ::g::iOS::UIKit::UIEdgeInsets());
}

// public extern double alpha() [instance] :87064
double UIView::alpha()
{
    uStackFrame __("iOS.UIKit.UIView", "alpha()");
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(alpha));
    return (double)__return;
}

// public double get_Alpha() [instance] :86697
double UIView::Alpha()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Alpha()");
    return alpha();
}

// public void set_Alpha(double value) [instance] :86698
void UIView::Alpha(double value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_Alpha(double)");
    setAlpha(value);
}

// public extern bool autoresizesSubviews() [instance] :87265
bool UIView::autoresizesSubviews()
{
    uStackFrame __("iOS.UIKit.UIView", "autoresizesSubviews()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(autoresizesSubviews));
    return (bool)__return;
}

// public bool get_AutoresizesSubviews() [instance] :86820
bool UIView::AutoresizesSubviews()
{
    uStackFrame __("iOS.UIKit.UIView", "get_AutoresizesSubviews()");
    return autoresizesSubviews();
}

// public void set_AutoresizesSubviews(bool value) [instance] :86821
void UIView::AutoresizesSubviews(bool value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_AutoresizesSubviews(bool)");
    setAutoresizesSubviews(value);
}

// public extern iOS.UIKit.UIViewAutoresizing autoresizingMask() [instance] :87271
uint32_t UIView::autoresizingMask()
{
    uStackFrame __("iOS.UIKit.UIView", "autoresizingMask()");
    ::UIViewAutoresizing __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewAutoresizing, @selector(autoresizingMask));
    return uint32_t(__return);
}

// public iOS.UIKit.UIViewAutoresizing get_AutoresizingMask() [instance] :86826
uint32_t UIView::AutoresizingMask()
{
    uStackFrame __("iOS.UIKit.UIView", "get_AutoresizingMask()");
    return autoresizingMask();
}

// public void set_AutoresizingMask(iOS.UIKit.UIViewAutoresizing value) [instance] :86827
void UIView::AutoresizingMask(uint32_t value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_AutoresizingMask(iOS.UIKit.UIViewAutoresizing)");
    setAutoresizingMask(value);
}

// public extern iOS.UIKit.UIColor backgroundColor() [instance] :87058
::g::iOS::UIKit::UIColor* UIView::backgroundColor()
{
    uStackFrame __("iOS.UIKit.UIView", "backgroundColor()");
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIColor*, @selector(backgroundColor));
    return (::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIColor_typeof());
}

// public iOS.UIKit.UIColor get_BackgroundColor() [instance] :86691
::g::iOS::UIKit::UIColor* UIView::BackgroundColor()
{
    uStackFrame __("iOS.UIKit.UIView", "get_BackgroundColor()");
    return backgroundColor();
}

// public void set_BackgroundColor(iOS.UIKit.UIColor value) [instance] :86692
void UIView::BackgroundColor(::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_BackgroundColor(iOS.UIKit.UIColor)");
    setBackgroundColor(value);
}

// public extern iOS.CoreGraphics.CGRect bounds() [instance] :87229
::g::iOS::CoreGraphics::CGRect UIView::bounds()
{
    uStackFrame __("iOS.UIKit.UIView", "bounds()");
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(bounds));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public iOS.CoreGraphics.CGRect get_Bounds() [instance] :86784
::g::iOS::CoreGraphics::CGRect UIView::Bounds()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Bounds()");
    return bounds();
}

// public void set_Bounds(iOS.CoreGraphics.CGRect value) [instance] :86785
void UIView::Bounds(::g::iOS::CoreGraphics::CGRect value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_Bounds(iOS.CoreGraphics.CGRect)");
    setBounds(value);
}

// public extern void bringSubviewToFront(iOS.UIKit.UIView view) [instance] :87136
void UIView::bringSubviewToFront(UIView* view_)
{
    uStackFrame __("iOS.UIKit.UIView", "bringSubviewToFront(iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(bringSubviewToFront:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

// public extern iOS.CoreGraphics.CGPoint center() [instance] :87235
::g::iOS::CoreGraphics::CGPoint UIView::center()
{
    uStackFrame __("iOS.UIKit.UIView", "center()");
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(center));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public iOS.CoreGraphics.CGPoint get_Center() [instance] :86790
::g::iOS::CoreGraphics::CGPoint UIView::Center()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Center()");
    return center();
}

// public void set_Center(iOS.CoreGraphics.CGPoint value) [instance] :86791
void UIView::Center(::g::iOS::CoreGraphics::CGPoint value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_Center(iOS.CoreGraphics.CGPoint)");
    setCenter(value);
}

// public extern bool clearsContextBeforeDrawing() [instance] :87076
bool UIView::clearsContextBeforeDrawing()
{
    uStackFrame __("iOS.UIKit.UIView", "clearsContextBeforeDrawing()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(clearsContextBeforeDrawing));
    return (bool)__return;
}

// public bool get_ClearsContextBeforeDrawing() [instance] :86709
bool UIView::ClearsContextBeforeDrawing()
{
    uStackFrame __("iOS.UIKit.UIView", "get_ClearsContextBeforeDrawing()");
    return clearsContextBeforeDrawing();
}

// public void set_ClearsContextBeforeDrawing(bool value) [instance] :86710
void UIView::ClearsContextBeforeDrawing(bool value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_ClearsContextBeforeDrawing(bool)");
    setClearsContextBeforeDrawing(value);
}

// public extern bool clipsToBounds() [instance] :87052
bool UIView::clipsToBounds()
{
    uStackFrame __("iOS.UIKit.UIView", "clipsToBounds()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(clipsToBounds));
    return (bool)__return;
}

// public bool get_ClipsToBounds() [instance] :86685
bool UIView::ClipsToBounds()
{
    uStackFrame __("iOS.UIKit.UIView", "get_ClipsToBounds()");
    return clipsToBounds();
}

// public void set_ClipsToBounds(bool value) [instance] :86686
void UIView::ClipsToBounds(bool value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_ClipsToBounds(bool)");
    setClipsToBounds(value);
}

// public extern iOS.Foundation.NSArray constraints() [instance] :86953
::g::iOS::Foundation::NSArray* UIView::constraints()
{
    uStackFrame __("iOS.UIKit.UIView", "constraints()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(constraints));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public extern iOS.Foundation.NSArray constraintsAffectingLayoutForAxis(iOS.UIKit.UILayoutConstraintAxis axis) [instance] :86887
::g::iOS::Foundation::NSArray* UIView::constraintsAffectingLayoutForAxis(int axis_)
{
    uStackFrame __("iOS.UIKit.UIView", "constraintsAffectingLayoutForAxis(iOS.UIKit.UILayoutConstraintAxis)");
    int axis__ = axis_;
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(constraintsAffectingLayoutForAxis:),
        ::UILayoutConstraintAxis(axis__));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public extern float contentCompressionResistancePriorityForAxis(iOS.UIKit.UILayoutConstraintAxis axis) [instance] :86926
float UIView::contentCompressionResistancePriorityForAxis(int axis_)
{
    uStackFrame __("iOS.UIKit.UIView", "contentCompressionResistancePriorityForAxis(iOS.UIKit.UILayoutConstraintAxis)");
    int axis__ = axis_;
    float __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, float, @selector(contentCompressionResistancePriorityForAxis:),
        ::UILayoutConstraintAxis(axis__));
    return __return;
}

// public extern float contentHuggingPriorityForAxis(iOS.UIKit.UILayoutConstraintAxis axis) [instance] :86920
float UIView::contentHuggingPriorityForAxis(int axis_)
{
    uStackFrame __("iOS.UIKit.UIView", "contentHuggingPriorityForAxis(iOS.UIKit.UILayoutConstraintAxis)");
    int axis__ = axis_;
    float __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, float, @selector(contentHuggingPriorityForAxis:),
        ::UILayoutConstraintAxis(axis__));
    return __return;
}

// public extern iOS.UIKit.UIViewContentMode contentMode() [instance] :87088
int UIView::contentMode()
{
    uStackFrame __("iOS.UIKit.UIView", "contentMode()");
    ::UIViewContentMode __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewContentMode, @selector(contentMode));
    return int(__return);
}

// public iOS.UIKit.UIViewContentMode get_ContentMode() [instance] :86721
int UIView::ContentMode()
{
    uStackFrame __("iOS.UIKit.UIView", "get_ContentMode()");
    return contentMode();
}

// public void set_ContentMode(iOS.UIKit.UIViewContentMode value) [instance] :86722
void UIView::ContentMode(int value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_ContentMode(iOS.UIKit.UIViewContentMode)");
    setContentMode(value);
}

// public extern double contentScaleFactor() [instance] :87247
double UIView::contentScaleFactor()
{
    uStackFrame __("iOS.UIKit.UIView", "contentScaleFactor()");
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(contentScaleFactor));
    return (double)__return;
}

// public double get_ContentScaleFactor() [instance] :86802
double UIView::ContentScaleFactor()
{
    uStackFrame __("iOS.UIKit.UIView", "get_ContentScaleFactor()");
    return contentScaleFactor();
}

// public void set_ContentScaleFactor(double value) [instance] :86803
void UIView::ContentScaleFactor(double value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_ContentScaleFactor(double)");
    setContentScaleFactor(value);
}

// public extern iOS.CoreGraphics.CGRect contentStretch() [instance] :87094
::g::iOS::CoreGraphics::CGRect UIView::contentStretch()
{
    uStackFrame __("iOS.UIKit.UIView", "contentStretch()");
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(contentStretch));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public iOS.CoreGraphics.CGRect get_ContentStretch() [instance] :86727
::g::iOS::CoreGraphics::CGRect UIView::ContentStretch()
{
    uStackFrame __("iOS.UIKit.UIView", "get_ContentStretch()");
    return contentStretch();
}

// public void set_ContentStretch(iOS.CoreGraphics.CGRect value) [instance] :86728
void UIView::ContentStretch(::g::iOS::CoreGraphics::CGRect value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_ContentStretch(iOS.CoreGraphics.CGRect)");
    setContentStretch(value);
}

// public extern iOS.CoreGraphics.CGPoint convertPointFromCoordinateSpace(iOS.CoreGraphics.CGPoint point, iOS.UIKit.IUICoordinateSpace coordinateSpace) [instance] :87298
::g::iOS::CoreGraphics::CGPoint UIView::convertPointFromCoordinateSpace(::g::iOS::CoreGraphics::CGPoint point_, uObject* coordinateSpace_)
{
    uStackFrame __("iOS.UIKit.UIView", "convertPointFromCoordinateSpace(iOS.CoreGraphics.CGPoint,iOS.UIKit.IUICoordinateSpace)");
    ::g::iOS::CoreGraphics::CGPoint point__ = point_;
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(convertPoint:fromCoordinateSpace:),
        uObjC::Struct::FromUno_CGPoint(point__, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coordinateSpace_, ::g::iOS::UIKit::IUICoordinateSpace_typeof()));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public extern iOS.CoreGraphics.CGPoint convertPointFromView(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UIView view) [instance] :87208
::g::iOS::CoreGraphics::CGPoint UIView::convertPointFromView(::g::iOS::CoreGraphics::CGPoint point_, UIView* view_)
{
    uStackFrame __("iOS.UIKit.UIView", "convertPointFromView(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIView)");
    ::g::iOS::CoreGraphics::CGPoint point__ = point_;
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(convertPoint:fromView:),
        uObjC::Struct::FromUno_CGPoint(point__, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public extern iOS.CoreGraphics.CGPoint convertPointToCoordinateSpace(iOS.CoreGraphics.CGPoint point, iOS.UIKit.IUICoordinateSpace coordinateSpace) [instance] :87295
::g::iOS::CoreGraphics::CGPoint UIView::convertPointToCoordinateSpace(::g::iOS::CoreGraphics::CGPoint point_, uObject* coordinateSpace_)
{
    uStackFrame __("iOS.UIKit.UIView", "convertPointToCoordinateSpace(iOS.CoreGraphics.CGPoint,iOS.UIKit.IUICoordinateSpace)");
    ::g::iOS::CoreGraphics::CGPoint point__ = point_;
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(convertPoint:toCoordinateSpace:),
        uObjC::Struct::FromUno_CGPoint(point__, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coordinateSpace_, ::g::iOS::UIKit::IUICoordinateSpace_typeof()));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public extern iOS.CoreGraphics.CGPoint convertPointToView(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UIView view) [instance] :87205
::g::iOS::CoreGraphics::CGPoint UIView::convertPointToView(::g::iOS::CoreGraphics::CGPoint point_, UIView* view_)
{
    uStackFrame __("iOS.UIKit.UIView", "convertPointToView(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIView)");
    ::g::iOS::CoreGraphics::CGPoint point__ = point_;
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(convertPoint:toView:),
        uObjC::Struct::FromUno_CGPoint(point__, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public extern iOS.CoreGraphics.CGRect convertRectFromCoordinateSpace(iOS.CoreGraphics.CGRect rect, iOS.UIKit.IUICoordinateSpace coordinateSpace) [instance] :87304
::g::iOS::CoreGraphics::CGRect UIView::convertRectFromCoordinateSpace(::g::iOS::CoreGraphics::CGRect rect_, uObject* coordinateSpace_)
{
    uStackFrame __("iOS.UIKit.UIView", "convertRectFromCoordinateSpace(iOS.CoreGraphics.CGRect,iOS.UIKit.IUICoordinateSpace)");
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(convertRect:fromCoordinateSpace:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coordinateSpace_, ::g::iOS::UIKit::IUICoordinateSpace_typeof()));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern iOS.CoreGraphics.CGRect convertRectFromView(iOS.CoreGraphics.CGRect rect, iOS.UIKit.UIView view) [instance] :87214
::g::iOS::CoreGraphics::CGRect UIView::convertRectFromView(::g::iOS::CoreGraphics::CGRect rect_, UIView* view_)
{
    uStackFrame __("iOS.UIKit.UIView", "convertRectFromView(iOS.CoreGraphics.CGRect,iOS.UIKit.UIView)");
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(convertRect:fromView:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern iOS.CoreGraphics.CGRect convertRectToCoordinateSpace(iOS.CoreGraphics.CGRect rect, iOS.UIKit.IUICoordinateSpace coordinateSpace) [instance] :87301
::g::iOS::CoreGraphics::CGRect UIView::convertRectToCoordinateSpace(::g::iOS::CoreGraphics::CGRect rect_, uObject* coordinateSpace_)
{
    uStackFrame __("iOS.UIKit.UIView", "convertRectToCoordinateSpace(iOS.CoreGraphics.CGRect,iOS.UIKit.IUICoordinateSpace)");
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(convertRect:toCoordinateSpace:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coordinateSpace_, ::g::iOS::UIKit::IUICoordinateSpace_typeof()));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern iOS.CoreGraphics.CGRect convertRectToView(iOS.CoreGraphics.CGRect rect, iOS.UIKit.UIView view) [instance] :87211
::g::iOS::CoreGraphics::CGRect UIView::convertRectToView(::g::iOS::CoreGraphics::CGRect rect_, UIView* view_)
{
    uStackFrame __("iOS.UIKit.UIView", "convertRectToView(iOS.CoreGraphics.CGRect,iOS.UIKit.UIView)");
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(convertRect:toView:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern void decodeRestorableStateWithCoder(iOS.Foundation.NSCoder coder) [instance] :86878
void UIView::decodeRestorableStateWithCoder(::g::iOS::Foundation::NSCoder* coder_)
{
    uStackFrame __("iOS.UIKit.UIView", "decodeRestorableStateWithCoder(iOS.Foundation.NSCoder)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(decodeRestorableStateWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coder_));
}

// public extern void didAddSubview(iOS.UIKit.UIView subview) [instance] :87142
void UIView::didAddSubview(UIView* subview_)
{
    uStackFrame __("iOS.UIKit.UIView", "didAddSubview(iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(didAddSubview:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)subview_));
}

// public extern void didMoveToSuperview() [instance] :87151
void UIView::didMoveToSuperview()
{
    uStackFrame __("iOS.UIKit.UIView", "didMoveToSuperview()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(didMoveToSuperview));
}

// public extern void didMoveToWindow() [instance] :87157
void UIView::didMoveToWindow()
{
    uStackFrame __("iOS.UIKit.UIView", "didMoveToWindow()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(didMoveToWindow));
}

// public extern void drawRect(iOS.CoreGraphics.CGRect rect) [instance] :87040
void UIView::drawRect(::g::iOS::CoreGraphics::CGRect rect_)
{
    uStackFrame __("iOS.UIKit.UIView", "drawRect(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(drawRect:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()));
}

// public extern void drawRectForViewPrintFormatter(iOS.CoreGraphics.CGRect rect, iOS.UIKit.UIViewPrintFormatter formatter) [instance] :86860
void UIView::drawRectForViewPrintFormatter(::g::iOS::CoreGraphics::CGRect rect_, ::g::iOS::UIKit::UIViewPrintFormatter* formatter_)
{
    uStackFrame __("iOS.UIKit.UIView", "drawRectForViewPrintFormatter(iOS.CoreGraphics.CGRect,iOS.UIKit.UIViewPrintFormatter)");
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(drawRect:forViewPrintFormatter:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)formatter_));
}

// public extern bool drawViewHierarchyInRectAfterScreenUpdates(iOS.CoreGraphics.CGRect rect, bool afterUpdates) [instance] :86872
bool UIView::drawViewHierarchyInRectAfterScreenUpdates(::g::iOS::CoreGraphics::CGRect rect_, bool afterUpdates_)
{
    uStackFrame __("iOS.UIKit.UIView", "drawViewHierarchyInRectAfterScreenUpdates(iOS.CoreGraphics.CGRect,bool)");
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    bool afterUpdates__ = afterUpdates_;
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(drawViewHierarchyInRect:afterScreenUpdates:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()),
        (BOOL)afterUpdates__);
    return (bool)__return;
}

// public extern void encodeRestorableStateWithCoder(iOS.Foundation.NSCoder coder) [instance] :86875
void UIView::encodeRestorableStateWithCoder(::g::iOS::Foundation::NSCoder* coder_)
{
    uStackFrame __("iOS.UIKit.UIView", "encodeRestorableStateWithCoder(iOS.Foundation.NSCoder)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(encodeRestorableStateWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coder_));
}

// public extern bool endEditing(bool force) [instance] :86863
bool UIView::endEditing(bool force_)
{
    uStackFrame __("iOS.UIKit.UIView", "endEditing(bool)");
    bool force__ = force_;
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(endEditing:),
        (BOOL)force__);
    return (bool)__return;
}

// public extern void exchangeSubviewAtIndexWithSubviewAtIndex(int index1, int index2) [instance] :87124
void UIView::exchangeSubviewAtIndexWithSubviewAtIndex(int index1_, int index2_)
{
    uStackFrame __("iOS.UIKit.UIView", "exchangeSubviewAtIndexWithSubviewAtIndex(int,int)");
    int index1__ = index1_;
    int index2__ = index2_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(exchangeSubviewAtIndex:withSubviewAtIndex:),
        (long)index1__,
        (long)index2__);
}

// public bool get_ExclusiveTouch() [instance] :86814
bool UIView::ExclusiveTouch()
{
    uStackFrame __("iOS.UIKit.UIView", "get_ExclusiveTouch()");
    return isExclusiveTouch();
}

// public void set_ExclusiveTouch(bool value) [instance] :86815
void UIView::ExclusiveTouch(bool value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_ExclusiveTouch(bool)");
    setExclusiveTouch(value);
}

// public extern void exerciseAmbiguityInLayout() [instance] :86893
void UIView::exerciseAmbiguityInLayout()
{
    uStackFrame __("iOS.UIKit.UIView", "exerciseAmbiguityInLayout()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(exerciseAmbiguityInLayout));
}

// public extern iOS.CoreGraphics.CGRect frame() [instance] :87223
::g::iOS::CoreGraphics::CGRect UIView::frame()
{
    uStackFrame __("iOS.UIKit.UIView", "frame()");
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(frame));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public iOS.CoreGraphics.CGRect get_Frame() [instance] :86778
::g::iOS::CoreGraphics::CGRect UIView::Frame()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Frame()");
    return frame();
}

// public void set_Frame(iOS.CoreGraphics.CGRect value) [instance] :86779
void UIView::Frame(::g::iOS::CoreGraphics::CGRect value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_Frame(iOS.CoreGraphics.CGRect)");
    setFrame(value);
}

// public extern iOS.CoreGraphics.CGRect frameForAlignmentRect(iOS.CoreGraphics.CGRect alignmentRect) [instance] :86905
::g::iOS::CoreGraphics::CGRect UIView::frameForAlignmentRect(::g::iOS::CoreGraphics::CGRect alignmentRect_)
{
    uStackFrame __("iOS.UIKit.UIView", "frameForAlignmentRect(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect alignmentRect__ = alignmentRect_;
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(frameForAlignmentRect:),
        uObjC::Struct::FromUno_CGRect(alignmentRect__, ::CGRect()));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public extern iOS.Foundation.NSArray gestureRecognizers() [instance] :86989
::g::iOS::Foundation::NSArray* UIView::gestureRecognizers()
{
    uStackFrame __("iOS.UIKit.UIView", "gestureRecognizers()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(gestureRecognizers));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_GestureRecognizers() [instance] :86679
::g::iOS::Foundation::NSArray* UIView::GestureRecognizers()
{
    uStackFrame __("iOS.UIKit.UIView", "get_GestureRecognizers()");
    return gestureRecognizers();
}

// public void set_GestureRecognizers(iOS.Foundation.NSArray value) [instance] :86680
void UIView::GestureRecognizers(::g::iOS::Foundation::NSArray* value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_GestureRecognizers(iOS.Foundation.NSArray)");
    setGestureRecognizers(value);
}

// public extern bool gestureRecognizerShouldBegin(iOS.UIKit.UIGestureRecognizer gestureRecognizer) [instance] :86986
bool UIView::gestureRecognizerShouldBegin(::g::iOS::UIKit::UIGestureRecognizer* gestureRecognizer_)
{
    uStackFrame __("iOS.UIKit.UIView", "gestureRecognizerShouldBegin(iOS.UIKit.UIGestureRecognizer)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(gestureRecognizerShouldBegin:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)gestureRecognizer_));
    return (bool)__return;
}

// public extern bool hasAmbiguousLayout() [instance] :86890
bool UIView::hasAmbiguousLayout()
{
    uStackFrame __("iOS.UIKit.UIView", "hasAmbiguousLayout()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(hasAmbiguousLayout));
    return (bool)__return;
}

// public bool get_Hidden() [instance] :86715
bool UIView::Hidden()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Hidden()");
    return isHidden();
}

// public void set_Hidden(bool value) [instance] :86716
void UIView::Hidden(bool value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_Hidden(bool)");
    setHidden(value);
}

// public extern iOS.UIKit.UIView hitTestWithEvent(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UIEvent event_) [instance] :87199
UIView* UIView::hitTestWithEvent(::g::iOS::CoreGraphics::CGPoint point_, ::g::iOS::UIKit::UIEvent* event__)
{
    uStackFrame __("iOS.UIKit.UIView", "hitTestWithEvent(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIEvent)");
    ::g::iOS::CoreGraphics::CGPoint point__ = point_;
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(hitTest:withEvent:),
        uObjC::Struct::FromUno_CGPoint(point__, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)event__));
    return (UIView*)uObjC::Lifetime::GetUnoObject(__return, UIView_typeof());
}

// public extern void insertSubviewAboveSubview(iOS.UIKit.UIView view, iOS.UIKit.UIView siblingSubview) [instance] :87133
void UIView::insertSubviewAboveSubview(UIView* view_, UIView* siblingSubview_)
{
    uStackFrame __("iOS.UIKit.UIView", "insertSubviewAboveSubview(iOS.UIKit.UIView,iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(insertSubview:aboveSubview:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)siblingSubview_));
}

// public extern void insertSubviewAtIndex(iOS.UIKit.UIView view, int index) [instance] :87121
void UIView::insertSubviewAtIndex(UIView* view_, int index_)
{
    uStackFrame __("iOS.UIKit.UIView", "insertSubviewAtIndex(iOS.UIKit.UIView,int)");
    int index__ = index_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(insertSubview:atIndex:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_),
        (long)index__);
}

// public extern void insertSubviewBelowSubview(iOS.UIKit.UIView view, iOS.UIKit.UIView siblingSubview) [instance] :87130
void UIView::insertSubviewBelowSubview(UIView* view_, UIView* siblingSubview_)
{
    uStackFrame __("iOS.UIKit.UIView", "insertSubviewBelowSubview(iOS.UIKit.UIView,iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(insertSubview:belowSubview:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)siblingSubview_));
}

// public extern iOS.CoreGraphics.CGSize intrinsicContentSize() [instance] :86914
::g::iOS::CoreGraphics::CGSize UIView::intrinsicContentSize()
{
    uStackFrame __("iOS.UIKit.UIView", "intrinsicContentSize()");
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(intrinsicContentSize));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public extern void invalidateIntrinsicContentSize() [instance] :86917
void UIView::invalidateIntrinsicContentSize()
{
    uStackFrame __("iOS.UIKit.UIView", "invalidateIntrinsicContentSize()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(invalidateIntrinsicContentSize));
}

// public extern bool isDescendantOfView(iOS.UIKit.UIView view) [instance] :87160
bool UIView::isDescendantOfView(UIView* view_)
{
    uStackFrame __("iOS.UIKit.UIView", "isDescendantOfView(iOS.UIKit.UIView)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isDescendantOfView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return (bool)__return;
}

// public extern bool isExclusiveTouch() [instance] :87259
bool UIView::isExclusiveTouch()
{
    uStackFrame __("iOS.UIKit.UIView", "isExclusiveTouch()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isExclusiveTouch));
    return (bool)__return;
}

// public extern bool isHidden() [instance] :87082
bool UIView::isHidden()
{
    uStackFrame __("iOS.UIKit.UIView", "isHidden()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isHidden));
    return (bool)__return;
}

// public extern bool isMultipleTouchEnabled() [instance] :87253
bool UIView::isMultipleTouchEnabled()
{
    uStackFrame __("iOS.UIKit.UIView", "isMultipleTouchEnabled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isMultipleTouchEnabled));
    return (bool)__return;
}

// public extern bool isOpaque() [instance] :87070
bool UIView::isOpaque()
{
    uStackFrame __("iOS.UIKit.UIView", "isOpaque()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isOpaque));
    return (bool)__return;
}

// public extern iOS.QuartzCore.CALayer layer() [instance] :86854
::g::iOS::QuartzCore::CALayer* UIView::layer()
{
    uStackFrame __("iOS.UIKit.UIView", "layer()");
    ::CALayer* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CALayer*, @selector(layer));
    return (::g::iOS::QuartzCore::CALayer*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::QuartzCore::CALayer_typeof());
}

// public iOS.QuartzCore.CALayer get_Layer() [instance] :86662
::g::iOS::QuartzCore::CALayer* UIView::Layer()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Layer()");
    return layer();
}

// public extern void layoutIfNeeded() [instance] :87169
void UIView::layoutIfNeeded()
{
    uStackFrame __("iOS.UIKit.UIView", "layoutIfNeeded()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(layoutIfNeeded));
}

// public extern iOS.UIKit.UIEdgeInsets layoutMargins() [instance] :87187
::g::iOS::UIKit::UIEdgeInsets UIView::layoutMargins()
{
    uStackFrame __("iOS.UIKit.UIView", "layoutMargins()");
    ::UIEdgeInsets __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIEdgeInsets, @selector(layoutMargins));
    return uObjC::Struct::ToUno_UIEdgeInsets(__return, ::g::iOS::UIKit::UIEdgeInsets());
}

// public iOS.UIKit.UIEdgeInsets get_LayoutMargins() [instance] :86766
::g::iOS::UIKit::UIEdgeInsets UIView::LayoutMargins()
{
    uStackFrame __("iOS.UIKit.UIView", "get_LayoutMargins()");
    return layoutMargins();
}

// public void set_LayoutMargins(iOS.UIKit.UIEdgeInsets value) [instance] :86767
void UIView::LayoutMargins(::g::iOS::UIKit::UIEdgeInsets value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_LayoutMargins(iOS.UIKit.UIEdgeInsets)");
    setLayoutMargins(value);
}

// public extern void layoutMarginsDidChange() [instance] :87175
void UIView::layoutMarginsDidChange()
{
    uStackFrame __("iOS.UIKit.UIView", "layoutMarginsDidChange()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(layoutMarginsDidChange));
}

// public extern void layoutSubviews() [instance] :87172
void UIView::layoutSubviews()
{
    uStackFrame __("iOS.UIKit.UIView", "layoutSubviews()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(layoutSubviews));
}

// public extern iOS.UIKit.UIView maskView() [instance] :87100
UIView* UIView::maskView()
{
    uStackFrame __("iOS.UIKit.UIView", "maskView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(maskView));
    return (UIView*)uObjC::Lifetime::GetUnoObject(__return, UIView_typeof());
}

// public iOS.UIKit.UIView get_MaskView() [instance] :86733
UIView* UIView::MaskView()
{
    uStackFrame __("iOS.UIKit.UIView", "get_MaskView()");
    return maskView();
}

// public void set_MaskView(iOS.UIKit.UIView value) [instance] :86734
void UIView::MaskView(UIView* value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_MaskView(iOS.UIKit.UIView)");
    setMaskView(value);
}

// public extern iOS.Foundation.NSArray motionEffects() [instance] :86974
::g::iOS::Foundation::NSArray* UIView::motionEffects()
{
    uStackFrame __("iOS.UIKit.UIView", "motionEffects()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(motionEffects));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_MotionEffects() [instance] :86673
::g::iOS::Foundation::NSArray* UIView::MotionEffects()
{
    uStackFrame __("iOS.UIKit.UIView", "get_MotionEffects()");
    return motionEffects();
}

// public void set_MotionEffects(iOS.Foundation.NSArray value) [instance] :86674
void UIView::MotionEffects(::g::iOS::Foundation::NSArray* value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_MotionEffects(iOS.Foundation.NSArray)");
    setMotionEffects(value);
}

// public bool get_MultipleTouchEnabled() [instance] :86808
bool UIView::MultipleTouchEnabled()
{
    uStackFrame __("iOS.UIKit.UIView", "get_MultipleTouchEnabled()");
    return isMultipleTouchEnabled();
}

// public void set_MultipleTouchEnabled(bool value) [instance] :86809
void UIView::MultipleTouchEnabled(bool value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_MultipleTouchEnabled(bool)");
    setMultipleTouchEnabled(value);
}

// public extern bool needsUpdateConstraints() [instance] :86947
bool UIView::needsUpdateConstraints()
{
    uStackFrame __("iOS.UIKit.UIView", "needsUpdateConstraints()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(needsUpdateConstraints));
    return (bool)__return;
}

// public bool get_Opaque() [instance] :86703
bool UIView::Opaque()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Opaque()");
    return isOpaque();
}

// public void set_Opaque(bool value) [instance] :86704
void UIView::Opaque(bool value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_Opaque(bool)");
    setOpaque(value);
}

// public extern bool pointInsideWithEvent(iOS.CoreGraphics.CGPoint point, iOS.UIKit.UIEvent event_) [instance] :87202
bool UIView::pointInsideWithEvent(::g::iOS::CoreGraphics::CGPoint point_, ::g::iOS::UIKit::UIEvent* event__)
{
    uStackFrame __("iOS.UIKit.UIView", "pointInsideWithEvent(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIEvent)");
    ::g::iOS::CoreGraphics::CGPoint point__ = point_;
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(pointInside:withEvent:),
        uObjC::Struct::FromUno_CGPoint(point__, ::CGPoint()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)event__));
    return (bool)__return;
}

// public extern bool preservesSuperviewLayoutMargins() [instance] :87193
bool UIView::preservesSuperviewLayoutMargins()
{
    uStackFrame __("iOS.UIKit.UIView", "preservesSuperviewLayoutMargins()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(preservesSuperviewLayoutMargins));
    return (bool)__return;
}

// public bool get_PreservesSuperviewLayoutMargins() [instance] :86772
bool UIView::PreservesSuperviewLayoutMargins()
{
    uStackFrame __("iOS.UIKit.UIView", "get_PreservesSuperviewLayoutMargins()");
    return preservesSuperviewLayoutMargins();
}

// public void set_PreservesSuperviewLayoutMargins(bool value) [instance] :86773
void UIView::PreservesSuperviewLayoutMargins(bool value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_PreservesSuperviewLayoutMargins(bool)");
    setPreservesSuperviewLayoutMargins(value);
}

// public extern void removeConstraint(iOS.UIKit.NSLayoutConstraint constraint) [instance] :86962
void UIView::removeConstraint(::g::iOS::UIKit::NSLayoutConstraint* constraint_)
{
    uStackFrame __("iOS.UIKit.UIView", "removeConstraint(iOS.UIKit.NSLayoutConstraint)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeConstraint:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)constraint_));
}

// public extern void removeConstraints(iOS.Foundation.NSArray constraints) [instance] :86965
void UIView::removeConstraints(::g::iOS::Foundation::NSArray* constraints_)
{
    uStackFrame __("iOS.UIKit.UIView", "removeConstraints(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeConstraints:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)constraints_));
}

// public extern void removeFromSuperview() [instance] :87118
void UIView::removeFromSuperview()
{
    uStackFrame __("iOS.UIKit.UIView", "removeFromSuperview()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeFromSuperview));
}

// public extern void removeGestureRecognizer(iOS.UIKit.UIGestureRecognizer gestureRecognizer) [instance] :86983
void UIView::removeGestureRecognizer(::g::iOS::UIKit::UIGestureRecognizer* gestureRecognizer_)
{
    uStackFrame __("iOS.UIKit.UIView", "removeGestureRecognizer(iOS.UIKit.UIGestureRecognizer)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeGestureRecognizer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)gestureRecognizer_));
}

// public extern void removeMotionEffect(iOS.UIKit.UIMotionEffect effect) [instance] :86971
void UIView::removeMotionEffect(::g::iOS::UIKit::UIMotionEffect* effect_)
{
    uStackFrame __("iOS.UIKit.UIView", "removeMotionEffect(iOS.UIKit.UIMotionEffect)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeMotionEffect:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)effect_));
}

// public extern iOS.UIKit.UIView resizableSnapshotViewFromRectAfterScreenUpdatesWithCapInsets(iOS.CoreGraphics.CGRect rect, bool afterUpdates, iOS.UIKit.UIEdgeInsets capInsets) [instance] :86869
UIView* UIView::resizableSnapshotViewFromRectAfterScreenUpdatesWithCapInsets(::g::iOS::CoreGraphics::CGRect rect_, bool afterUpdates_, ::g::iOS::UIKit::UIEdgeInsets capInsets_)
{
    uStackFrame __("iOS.UIKit.UIView", "resizableSnapshotViewFromRectAfterScreenUpdatesWithCapInsets(iOS.CoreGraphics.CGRect,bool,iOS.UIKit.UIEdgeInsets)");
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    bool afterUpdates__ = afterUpdates_;
    ::g::iOS::UIKit::UIEdgeInsets capInsets__ = capInsets_;
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(resizableSnapshotViewFromRect:afterScreenUpdates:withCapInsets:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()),
        (BOOL)afterUpdates__,
        uObjC::Struct::FromUno_UIEdgeInsets(capInsets__, ::UIEdgeInsets()));
    return (UIView*)uObjC::Lifetime::GetUnoObject(__return, UIView_typeof());
}

// public extern string restorationIdentifier() [instance] :86881
uString* UIView::restorationIdentifier()
{
    uStackFrame __("iOS.UIKit.UIView", "restorationIdentifier()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(restorationIdentifier));
    return uObjC::UnoString(__return);
}

// public string get_RestorationIdentifier() [instance] :86667
uString* UIView::RestorationIdentifier()
{
    uStackFrame __("iOS.UIKit.UIView", "get_RestorationIdentifier()");
    return restorationIdentifier();
}

// public void set_RestorationIdentifier(string value) [instance] :86668
void UIView::RestorationIdentifier(uString* value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_RestorationIdentifier(string)");
    setRestorationIdentifier(value);
}

// public extern void sendSubviewToBack(iOS.UIKit.UIView view) [instance] :87139
void UIView::sendSubviewToBack(UIView* view_)
{
    uStackFrame __("iOS.UIKit.UIView", "sendSubviewToBack(iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(sendSubviewToBack:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

// public extern void setAlpha(double alpha) [instance] :87067
void UIView::setAlpha(double alpha_)
{
    uStackFrame __("iOS.UIKit.UIView", "setAlpha(double)");
    double alpha__ = alpha_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAlpha:),
        (CGFloat)alpha__);
}

// public extern void setAutoresizesSubviews(bool autoresizesSubviews) [instance] :87268
void UIView::setAutoresizesSubviews(bool autoresizesSubviews_)
{
    uStackFrame __("iOS.UIKit.UIView", "setAutoresizesSubviews(bool)");
    bool autoresizesSubviews__ = autoresizesSubviews_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAutoresizesSubviews:),
        (BOOL)autoresizesSubviews__);
}

// public extern void setAutoresizingMask(iOS.UIKit.UIViewAutoresizing autoresizingMask) [instance] :87274
void UIView::setAutoresizingMask(uint32_t autoresizingMask_)
{
    uStackFrame __("iOS.UIKit.UIView", "setAutoresizingMask(iOS.UIKit.UIViewAutoresizing)");
    uint32_t autoresizingMask__ = autoresizingMask_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAutoresizingMask:),
        ::UIViewAutoresizing(autoresizingMask__));
}

// public extern void setBackgroundColor(iOS.UIKit.UIColor backgroundColor) [instance] :87061
void UIView::setBackgroundColor(::g::iOS::UIKit::UIColor* backgroundColor_)
{
    uStackFrame __("iOS.UIKit.UIView", "setBackgroundColor(iOS.UIKit.UIColor)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setBackgroundColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)backgroundColor_));
}

// public extern void setBounds(iOS.CoreGraphics.CGRect bounds) [instance] :87232
void UIView::setBounds(::g::iOS::CoreGraphics::CGRect bounds_)
{
    uStackFrame __("iOS.UIKit.UIView", "setBounds(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect bounds__ = bounds_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setBounds:),
        uObjC::Struct::FromUno_CGRect(bounds__, ::CGRect()));
}

// public extern void setCenter(iOS.CoreGraphics.CGPoint center) [instance] :87238
void UIView::setCenter(::g::iOS::CoreGraphics::CGPoint center_)
{
    uStackFrame __("iOS.UIKit.UIView", "setCenter(iOS.CoreGraphics.CGPoint)");
    ::g::iOS::CoreGraphics::CGPoint center__ = center_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setCenter:),
        uObjC::Struct::FromUno_CGPoint(center__, ::CGPoint()));
}

// public extern void setClearsContextBeforeDrawing(bool clearsContextBeforeDrawing) [instance] :87079
void UIView::setClearsContextBeforeDrawing(bool clearsContextBeforeDrawing_)
{
    uStackFrame __("iOS.UIKit.UIView", "setClearsContextBeforeDrawing(bool)");
    bool clearsContextBeforeDrawing__ = clearsContextBeforeDrawing_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setClearsContextBeforeDrawing:),
        (BOOL)clearsContextBeforeDrawing__);
}

// public extern void setClipsToBounds(bool clipsToBounds) [instance] :87055
void UIView::setClipsToBounds(bool clipsToBounds_)
{
    uStackFrame __("iOS.UIKit.UIView", "setClipsToBounds(bool)");
    bool clipsToBounds__ = clipsToBounds_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setClipsToBounds:),
        (BOOL)clipsToBounds__);
}

// public extern void setContentCompressionResistancePriorityForAxis(float priority, iOS.UIKit.UILayoutConstraintAxis axis) [instance] :86929
void UIView::setContentCompressionResistancePriorityForAxis(float priority_, int axis_)
{
    uStackFrame __("iOS.UIKit.UIView", "setContentCompressionResistancePriorityForAxis(float,iOS.UIKit.UILayoutConstraintAxis)");
    float priority__ = priority_;
    int axis__ = axis_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentCompressionResistancePriority:forAxis:),
        priority__,
        ::UILayoutConstraintAxis(axis__));
}

// public extern void setContentHuggingPriorityForAxis(float priority, iOS.UIKit.UILayoutConstraintAxis axis) [instance] :86923
void UIView::setContentHuggingPriorityForAxis(float priority_, int axis_)
{
    uStackFrame __("iOS.UIKit.UIView", "setContentHuggingPriorityForAxis(float,iOS.UIKit.UILayoutConstraintAxis)");
    float priority__ = priority_;
    int axis__ = axis_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentHuggingPriority:forAxis:),
        priority__,
        ::UILayoutConstraintAxis(axis__));
}

// public extern void setContentMode(iOS.UIKit.UIViewContentMode contentMode) [instance] :87091
void UIView::setContentMode(int contentMode_)
{
    uStackFrame __("iOS.UIKit.UIView", "setContentMode(iOS.UIKit.UIViewContentMode)");
    int contentMode__ = contentMode_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentMode:),
        ::UIViewContentMode(contentMode__));
}

// public extern void setContentScaleFactor(double contentScaleFactor) [instance] :87250
void UIView::setContentScaleFactor(double contentScaleFactor_)
{
    uStackFrame __("iOS.UIKit.UIView", "setContentScaleFactor(double)");
    double contentScaleFactor__ = contentScaleFactor_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentScaleFactor:),
        (CGFloat)contentScaleFactor__);
}

// public extern void setContentStretch(iOS.CoreGraphics.CGRect contentStretch) [instance] :87097
void UIView::setContentStretch(::g::iOS::CoreGraphics::CGRect contentStretch_)
{
    uStackFrame __("iOS.UIKit.UIView", "setContentStretch(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect contentStretch__ = contentStretch_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentStretch:),
        uObjC::Struct::FromUno_CGRect(contentStretch__, ::CGRect()));
}

// public extern void setExclusiveTouch(bool exclusiveTouch) [instance] :87262
void UIView::setExclusiveTouch(bool exclusiveTouch_)
{
    uStackFrame __("iOS.UIKit.UIView", "setExclusiveTouch(bool)");
    bool exclusiveTouch__ = exclusiveTouch_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setExclusiveTouch:),
        (BOOL)exclusiveTouch__);
}

// public extern void setGestureRecognizers(iOS.Foundation.NSArray gestureRecognizers) [instance] :86992
void UIView::setGestureRecognizers(::g::iOS::Foundation::NSArray* gestureRecognizers_)
{
    uStackFrame __("iOS.UIKit.UIView", "setGestureRecognizers(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setGestureRecognizers:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)gestureRecognizers_));
}

// public extern void setHidden(bool hidden) [instance] :87085
void UIView::setHidden(bool hidden_)
{
    uStackFrame __("iOS.UIKit.UIView", "setHidden(bool)");
    bool hidden__ = hidden_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setHidden:),
        (BOOL)hidden__);
}

// public extern void setLayoutMargins(iOS.UIKit.UIEdgeInsets layoutMargins) [instance] :87190
void UIView::setLayoutMargins(::g::iOS::UIKit::UIEdgeInsets layoutMargins_)
{
    uStackFrame __("iOS.UIKit.UIView", "setLayoutMargins(iOS.UIKit.UIEdgeInsets)");
    ::g::iOS::UIKit::UIEdgeInsets layoutMargins__ = layoutMargins_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setLayoutMargins:),
        uObjC::Struct::FromUno_UIEdgeInsets(layoutMargins__, ::UIEdgeInsets()));
}

// public extern void setMaskView(iOS.UIKit.UIView maskView) [instance] :87103
void UIView::setMaskView(UIView* maskView_)
{
    uStackFrame __("iOS.UIKit.UIView", "setMaskView(iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setMaskView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)maskView_));
}

// public extern void setMotionEffects(iOS.Foundation.NSArray motionEffects) [instance] :86977
void UIView::setMotionEffects(::g::iOS::Foundation::NSArray* motionEffects_)
{
    uStackFrame __("iOS.UIKit.UIView", "setMotionEffects(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setMotionEffects:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)motionEffects_));
}

// public extern void setMultipleTouchEnabled(bool multipleTouchEnabled) [instance] :87256
void UIView::setMultipleTouchEnabled(bool multipleTouchEnabled_)
{
    uStackFrame __("iOS.UIKit.UIView", "setMultipleTouchEnabled(bool)");
    bool multipleTouchEnabled__ = multipleTouchEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setMultipleTouchEnabled:),
        (BOOL)multipleTouchEnabled__);
}

// public extern void setNeedsDisplay() [instance] :87043
void UIView::setNeedsDisplay()
{
    uStackFrame __("iOS.UIKit.UIView", "setNeedsDisplay()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setNeedsDisplay));
}

// public extern void setNeedsDisplayInRect(iOS.CoreGraphics.CGRect rect) [instance] :87046
void UIView::setNeedsDisplayInRect(::g::iOS::CoreGraphics::CGRect rect_)
{
    uStackFrame __("iOS.UIKit.UIView", "setNeedsDisplayInRect(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setNeedsDisplayInRect:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()));
}

// public extern void setNeedsLayout() [instance] :87166
void UIView::setNeedsLayout()
{
    uStackFrame __("iOS.UIKit.UIView", "setNeedsLayout()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setNeedsLayout));
}

// public extern void setNeedsUpdateConstraints() [instance] :86950
void UIView::setNeedsUpdateConstraints()
{
    uStackFrame __("iOS.UIKit.UIView", "setNeedsUpdateConstraints()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setNeedsUpdateConstraints));
}

// public extern void setOpaque(bool opaque) [instance] :87073
void UIView::setOpaque(bool opaque_)
{
    uStackFrame __("iOS.UIKit.UIView", "setOpaque(bool)");
    bool opaque__ = opaque_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setOpaque:),
        (BOOL)opaque__);
}

// public extern void setPreservesSuperviewLayoutMargins(bool preservesSuperviewLayoutMargins) [instance] :87196
void UIView::setPreservesSuperviewLayoutMargins(bool preservesSuperviewLayoutMargins_)
{
    uStackFrame __("iOS.UIKit.UIView", "setPreservesSuperviewLayoutMargins(bool)");
    bool preservesSuperviewLayoutMargins__ = preservesSuperviewLayoutMargins_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setPreservesSuperviewLayoutMargins:),
        (BOOL)preservesSuperviewLayoutMargins__);
}

// public extern void setRestorationIdentifier(string restorationIdentifier) [instance] :86884
void UIView::setRestorationIdentifier(uString* restorationIdentifier_)
{
    uStackFrame __("iOS.UIKit.UIView", "setRestorationIdentifier(string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setRestorationIdentifier:),
        uObjC::NativeString(restorationIdentifier_));
}

// public extern void setTag(int tag) [instance] :86851
void UIView::setTag(int tag_)
{
    uStackFrame __("iOS.UIKit.UIView", "setTag(int)");
    int tag__ = tag_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTag:),
        (long)tag__);
}

// public extern void setTintAdjustmentMode(iOS.UIKit.UIViewTintAdjustmentMode tintAdjustmentMode) [instance] :87115
void UIView::setTintAdjustmentMode(int tintAdjustmentMode_)
{
    uStackFrame __("iOS.UIKit.UIView", "setTintAdjustmentMode(iOS.UIKit.UIViewTintAdjustmentMode)");
    int tintAdjustmentMode__ = tintAdjustmentMode_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTintAdjustmentMode:),
        ::UIViewTintAdjustmentMode(tintAdjustmentMode__));
}

// public extern void setTransform(iOS.CoreGraphics.CGAffineTransform transform) [instance] :87244
void UIView::setTransform(::g::iOS::CoreGraphics::CGAffineTransform transform_)
{
    uStackFrame __("iOS.UIKit.UIView", "setTransform(iOS.CoreGraphics.CGAffineTransform)");
    ::g::iOS::CoreGraphics::CGAffineTransform transform__ = transform_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTransform:),
        uObjC::Struct::FromUno_CGAffineTransform(transform__, ::CGAffineTransform()));
}

// public extern void setTranslatesAutoresizingMaskIntoConstraints(bool flag) [instance] :86935
void UIView::setTranslatesAutoresizingMaskIntoConstraints(bool flag_)
{
    uStackFrame __("iOS.UIKit.UIView", "setTranslatesAutoresizingMaskIntoConstraints(bool)");
    bool flag__ = flag_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTranslatesAutoresizingMaskIntoConstraints:),
        (BOOL)flag__);
}

// public extern iOS.CoreGraphics.CGSize sizeThatFits(iOS.CoreGraphics.CGSize size) [instance] :87217
::g::iOS::CoreGraphics::CGSize UIView::sizeThatFits(::g::iOS::CoreGraphics::CGSize size_)
{
    uStackFrame __("iOS.UIKit.UIView", "sizeThatFits(iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize size__ = size_;
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(sizeThatFits:),
        uObjC::Struct::FromUno_CGSize(size__, ::CGSize()));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public extern void sizeToFit() [instance] :87220
void UIView::sizeToFit()
{
    uStackFrame __("iOS.UIKit.UIView", "sizeToFit()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(sizeToFit));
}

// public extern iOS.UIKit.UIView snapshotViewAfterScreenUpdates(bool afterUpdates) [instance] :86866
UIView* UIView::snapshotViewAfterScreenUpdates(bool afterUpdates_)
{
    uStackFrame __("iOS.UIKit.UIView", "snapshotViewAfterScreenUpdates(bool)");
    bool afterUpdates__ = afterUpdates_;
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(snapshotViewAfterScreenUpdates:),
        (BOOL)afterUpdates__);
    return (UIView*)uObjC::Lifetime::GetUnoObject(__return, UIView_typeof());
}

// public extern iOS.Foundation.NSArray subviews() [instance] :87181
::g::iOS::Foundation::NSArray* UIView::subviews()
{
    uStackFrame __("iOS.UIKit.UIView", "subviews()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(subviews));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_Subviews() [instance] :86756
::g::iOS::Foundation::NSArray* UIView::Subviews()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Subviews()");
    return subviews();
}

// public extern iOS.UIKit.UIView superview() [instance] :87178
UIView* UIView::superview()
{
    uStackFrame __("iOS.UIKit.UIView", "superview()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(superview));
    return (UIView*)uObjC::Lifetime::GetUnoObject(__return, UIView_typeof());
}

// public iOS.UIKit.UIView get_Superview() [instance] :86751
UIView* UIView::Superview()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Superview()");
    return superview();
}

// public extern iOS.CoreGraphics.CGSize systemLayoutSizeFittingSize(iOS.CoreGraphics.CGSize targetSize) [instance] :86896
::g::iOS::CoreGraphics::CGSize UIView::systemLayoutSizeFittingSize(::g::iOS::CoreGraphics::CGSize targetSize_)
{
    uStackFrame __("iOS.UIKit.UIView", "systemLayoutSizeFittingSize(iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize targetSize__ = targetSize_;
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(systemLayoutSizeFittingSize:),
        uObjC::Struct::FromUno_CGSize(targetSize__, ::CGSize()));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public extern iOS.CoreGraphics.CGSize systemLayoutSizeFittingSizeWithHorizontalFittingPriorityVerticalFittingPriority(iOS.CoreGraphics.CGSize targetSize, float horizontalFittingPriority, float verticalFittingPriority) [instance] :86899
::g::iOS::CoreGraphics::CGSize UIView::systemLayoutSizeFittingSizeWithHorizontalFittingPriorityVerticalFittingPriority(::g::iOS::CoreGraphics::CGSize targetSize_, float horizontalFittingPriority_, float verticalFittingPriority_)
{
    uStackFrame __("iOS.UIKit.UIView", "systemLayoutSizeFittingSizeWithHorizontalFittingPriorityVerticalFittingPriority(iOS.CoreGraphics.CGSize,float,float)");
    ::g::iOS::CoreGraphics::CGSize targetSize__ = targetSize_;
    float horizontalFittingPriority__ = horizontalFittingPriority_;
    float verticalFittingPriority__ = verticalFittingPriority_;
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:),
        uObjC::Struct::FromUno_CGSize(targetSize__, ::CGSize()),
        horizontalFittingPriority__,
        verticalFittingPriority__);
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public extern int tag() [instance] :86848
int UIView::tag()
{
    uStackFrame __("iOS.UIKit.UIView", "tag()");
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, long, @selector(tag));
    return (int)__return;
}

// public int get_Tag() [instance] :86656
int UIView::Tag()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Tag()");
    return tag();
}

// public void set_Tag(int value) [instance] :86657
void UIView::Tag(int value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_Tag(int)");
    setTag(value);
}

// public extern iOS.UIKit.UIViewTintAdjustmentMode tintAdjustmentMode() [instance] :87112
int UIView::tintAdjustmentMode()
{
    uStackFrame __("iOS.UIKit.UIView", "tintAdjustmentMode()");
    ::UIViewTintAdjustmentMode __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewTintAdjustmentMode, @selector(tintAdjustmentMode));
    return int(__return);
}

// public iOS.UIKit.UIViewTintAdjustmentMode get_TintAdjustmentMode() [instance] :86745
int UIView::TintAdjustmentMode()
{
    uStackFrame __("iOS.UIKit.UIView", "get_TintAdjustmentMode()");
    return tintAdjustmentMode();
}

// public void set_TintAdjustmentMode(iOS.UIKit.UIViewTintAdjustmentMode value) [instance] :86746
void UIView::TintAdjustmentMode(int value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_TintAdjustmentMode(iOS.UIKit.UIViewTintAdjustmentMode)");
    setTintAdjustmentMode(value);
}

// public iOS.UIKit.UIColor get_TintColor() [instance] :86739
::g::iOS::UIKit::UIColor* UIView::TintColor()
{
    uStackFrame __("iOS.UIKit.UIView", "get_TintColor()");
    return tintColor();
}

// public void set_TintColor(iOS.UIKit.UIColor value) [instance] :86740
void UIView::TintColor(::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_TintColor(iOS.UIKit.UIColor)");
    setTintColor(value);
}

// public extern void tintColorDidChange() [instance] :87049
void UIView::tintColorDidChange()
{
    uStackFrame __("iOS.UIKit.UIView", "tintColorDidChange()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(tintColorDidChange));
}

// public extern iOS.UIKit.UITraitCollection traitCollection() [instance] :87292
::g::iOS::UIKit::UITraitCollection* UIView::traitCollection()
{
    uStackFrame __("iOS.UIKit.UIView", "traitCollection()");
    ::UITraitCollection* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITraitCollection*, @selector(traitCollection));
    return (::g::iOS::UIKit::UITraitCollection*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITraitCollection_typeof());
}

// public iOS.UIKit.UITraitCollection get_TraitCollection() [instance] :86832
::g::iOS::UIKit::UITraitCollection* UIView::TraitCollection()
{
    uStackFrame __("iOS.UIKit.UIView", "get_TraitCollection()");
    return traitCollection();
}

// public extern void traitCollectionDidChange(iOS.UIKit.UITraitCollection previousTraitCollection) [instance] :87289
void UIView::traitCollectionDidChange(::g::iOS::UIKit::UITraitCollection* previousTraitCollection_)
{
    uStackFrame __("iOS.UIKit.UIView", "traitCollectionDidChange(iOS.UIKit.UITraitCollection)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(traitCollectionDidChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)previousTraitCollection_));
}

// public extern iOS.CoreGraphics.CGAffineTransform transform() [instance] :87241
::g::iOS::CoreGraphics::CGAffineTransform UIView::transform()
{
    uStackFrame __("iOS.UIKit.UIView", "transform()");
    ::CGAffineTransform __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGAffineTransform, @selector(transform));
    return uObjC::Struct::ToUno_CGAffineTransform(__return, ::g::iOS::CoreGraphics::CGAffineTransform());
}

// public iOS.CoreGraphics.CGAffineTransform get_Transform() [instance] :86796
::g::iOS::CoreGraphics::CGAffineTransform UIView::Transform()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Transform()");
    return transform();
}

// public void set_Transform(iOS.CoreGraphics.CGAffineTransform value) [instance] :86797
void UIView::Transform(::g::iOS::CoreGraphics::CGAffineTransform value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_Transform(iOS.CoreGraphics.CGAffineTransform)");
    setTransform(value);
}

// public extern bool translatesAutoresizingMaskIntoConstraints() [instance] :86932
bool UIView::translatesAutoresizingMaskIntoConstraints()
{
    uStackFrame __("iOS.UIKit.UIView", "translatesAutoresizingMaskIntoConstraints()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(translatesAutoresizingMaskIntoConstraints));
    return (bool)__return;
}

// public extern void updateConstraints() [instance] :86944
void UIView::updateConstraints()
{
    uStackFrame __("iOS.UIKit.UIView", "updateConstraints()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(updateConstraints));
}

// public extern void updateConstraintsIfNeeded() [instance] :86941
void UIView::updateConstraintsIfNeeded()
{
    uStackFrame __("iOS.UIKit.UIView", "updateConstraintsIfNeeded()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(updateConstraintsIfNeeded));
}

// public bool get_UserInteractionEnabled() [instance] :86650
bool UIView::UserInteractionEnabled()
{
    uStackFrame __("iOS.UIKit.UIView", "get_UserInteractionEnabled()");
    return isUserInteractionEnabled();
}

// public void set_UserInteractionEnabled(bool value) [instance] :86651
void UIView::UserInteractionEnabled(bool value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_UserInteractionEnabled(bool)");
    setUserInteractionEnabled(value);
}

// public extern iOS.UIKit.UIView viewForBaselineLayout() [instance] :86911
UIView* UIView::viewForBaselineLayout()
{
    uStackFrame __("iOS.UIKit.UIView", "viewForBaselineLayout()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(viewForBaselineLayout));
    return (UIView*)uObjC::Lifetime::GetUnoObject(__return, UIView_typeof());
}

// public extern iOS.UIKit.UIViewPrintFormatter viewPrintFormatter() [instance] :86857
::g::iOS::UIKit::UIViewPrintFormatter* UIView::viewPrintFormatter()
{
    uStackFrame __("iOS.UIKit.UIView", "viewPrintFormatter()");
    ::UIViewPrintFormatter* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewPrintFormatter*, @selector(viewPrintFormatter));
    return (::g::iOS::UIKit::UIViewPrintFormatter*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIViewPrintFormatter_typeof());
}

// public extern iOS.UIKit.UIView viewWithTag(int tag) [instance] :87163
UIView* UIView::viewWithTag(int tag_)
{
    uStackFrame __("iOS.UIKit.UIView", "viewWithTag(int)");
    int tag__ = tag_;
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(viewWithTag:),
        (long)tag__);
    return (UIView*)uObjC::Lifetime::GetUnoObject(__return, UIView_typeof());
}

// public extern void willMoveToSuperview(iOS.UIKit.UIView newSuperview) [instance] :87148
void UIView::willMoveToSuperview(UIView* newSuperview_)
{
    uStackFrame __("iOS.UIKit.UIView", "willMoveToSuperview(iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willMoveToSuperview:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)newSuperview_));
}

// public extern void willMoveToWindow(iOS.UIKit.UIWindow newWindow) [instance] :87154
void UIView::willMoveToWindow(::g::iOS::UIKit::UIWindow* newWindow_)
{
    uStackFrame __("iOS.UIKit.UIView", "willMoveToWindow(iOS.UIKit.UIWindow)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willMoveToWindow:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)newWindow_));
}

// public extern void willRemoveSubview(iOS.UIKit.UIView subview) [instance] :87145
void UIView::willRemoveSubview(UIView* subview_)
{
    uStackFrame __("iOS.UIKit.UIView", "willRemoveSubview(iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willRemoveSubview:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)subview_));
}

// public extern iOS.UIKit.UIWindow window() [instance] :87184
::g::iOS::UIKit::UIWindow* UIView::window()
{
    uStackFrame __("iOS.UIKit.UIView", "window()");
    ::UIWindow* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIWindow*, @selector(window));
    return (::g::iOS::UIKit::UIWindow*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIWindow_typeof());
}

// public iOS.UIKit.UIWindow get_Window() [instance] :86761
::g::iOS::UIKit::UIWindow* UIView::Window()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Window()");
    return window();
}

// public static extern ObjC.ID _appearance() [static] :87283
::id UIView::_appearance()
{
    uStackFrame __("iOS.UIKit.UIView", "_appearance()");
    ::id __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::id, @selector(appearance));
    return (::id)__return;
}

// public static extern ObjC.ID _appearanceForTraitCollection(iOS.UIKit.UITraitCollection trait) [static] :87286
::id UIView::_appearanceForTraitCollection(::g::iOS::UIKit::UITraitCollection* trait_)
{
    uStackFrame __("iOS.UIKit.UIView", "_appearanceForTraitCollection(iOS.UIKit.UITraitCollection)");
    ::id __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::id, @selector(appearanceForTraitCollection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)trait_));
    return (::id)__return;
}

// public static extern bool _areAnimationsEnabled() [static] :87037
bool UIView::_areAnimationsEnabled()
{
    uStackFrame __("iOS.UIKit.UIView", "_areAnimationsEnabled()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, BOOL, @selector(areAnimationsEnabled));
    return (bool)__return;
}

// public static extern void _beginAnimationsContext(string animationID, Uno.IntPtr context) [static] :86995
void UIView::_beginAnimationsContext(uString* animationID_, void* context_)
{
    uStackFrame __("iOS.UIKit.UIView", "_beginAnimationsContext(string,Uno.IntPtr)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(beginAnimations:context:),
        uObjC::NativeString(animationID_),
        (void*)context_);
}

// public static extern void _commitAnimations() [static] :86998
void UIView::_commitAnimations()
{
    uStackFrame __("iOS.UIKit.UIView", "_commitAnimations()");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(commitAnimations));
}

// public static extern ObjC.Class _layerClass() [static] :86836
::Class UIView::_layerClass()
{
    uStackFrame __("iOS.UIKit.UIView", "_layerClass()");
    ::Class __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::Class, @selector(layerClass));
    return (::Class)__return;
}

// public static extern bool _requiresConstraintBasedLayout() [static] :86938
bool UIView::_requiresConstraintBasedLayout()
{
    uStackFrame __("iOS.UIKit.UIView", "_requiresConstraintBasedLayout()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, BOOL, @selector(requiresConstraintBasedLayout));
    return (bool)__return;
}

// public static extern void _setAnimationBeginsFromCurrentState(bool fromCurrentState) [static] :87028
void UIView::_setAnimationBeginsFromCurrentState(bool fromCurrentState_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationBeginsFromCurrentState(bool)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationBeginsFromCurrentState:),
        (BOOL)fromCurrentState_);
}

// public static extern void _setAnimationCurve(iOS.UIKit.UIViewAnimationCurve curve) [static] :87019
void UIView::_setAnimationCurve(int curve_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationCurve(iOS.UIKit.UIViewAnimationCurve)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationCurve:),
        ::UIViewAnimationCurve(curve_));
}

// public static extern void _setAnimationDelay(double delay) [static] :87013
void UIView::_setAnimationDelay(double delay_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationDelay(double)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationDelay:),
        delay_);
}

// public static extern void _setAnimationDelegate(ObjC.ID delegate_) [static] :87001
void UIView::_setAnimationDelegate(::id delegate__)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationDelegate(ObjC.ID)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationDelegate:),
        (::id)delegate__);
}

// public static extern void _setAnimationDidStopSelector(ObjC.Selector selector) [static] :87007
void UIView::_setAnimationDidStopSelector(uObjC::Selector selector_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationDidStopSelector(ObjC.Selector)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationDidStopSelector:),
        (::SEL)selector_);
}

// public static extern void _setAnimationDuration(double duration) [static] :87010
void UIView::_setAnimationDuration(double duration_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationDuration(double)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationDuration:),
        duration_);
}

// public static extern void _setAnimationRepeatAutoreverses(bool repeatAutoreverses) [static] :87025
void UIView::_setAnimationRepeatAutoreverses(bool repeatAutoreverses_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationRepeatAutoreverses(bool)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationRepeatAutoreverses:),
        (BOOL)repeatAutoreverses_);
}

// public static extern void _setAnimationRepeatCount(float repeatCount) [static] :87022
void UIView::_setAnimationRepeatCount(float repeatCount_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationRepeatCount(float)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationRepeatCount:),
        repeatCount_);
}

// public static extern void _setAnimationsEnabled(bool enabled) [static] :87034
void UIView::_setAnimationsEnabled(bool enabled_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationsEnabled(bool)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationsEnabled:),
        (BOOL)enabled_);
}

// public static extern void _setAnimationStartDate(iOS.Foundation.NSDate startDate) [static] :87016
void UIView::_setAnimationStartDate(::g::iOS::Foundation::NSDate* startDate_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationStartDate(iOS.Foundation.NSDate)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationStartDate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)startDate_));
}

// public static extern void _setAnimationTransitionForViewCache(iOS.UIKit.UIViewAnimationTransition transition, iOS.UIKit.UIView view, bool cache) [static] :87031
void UIView::_setAnimationTransitionForViewCache(int transition_, UIView* view_, bool cache_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationTransitionForViewCache(iOS.UIKit.UIViewAnimationTransition,iOS.UIKit.UIView,bool)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationTransition:forView:cache:),
        ::UIViewAnimationTransition(transition_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_),
        (BOOL)cache_);
}

// public static extern void _setAnimationWillStartSelector(ObjC.Selector selector) [static] :87004
void UIView::_setAnimationWillStartSelector(uObjC::Selector selector_)
{
    uStackFrame __("iOS.UIKit.UIView", "_setAnimationWillStartSelector(ObjC.Selector)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setAnimationWillStartSelector:),
        (::SEL)selector_);
}

// public UIView New() [static] :86641
UIView* UIView::New7()
{
    UIView* obj1 = (UIView*)uNew(UIView_typeof());
    obj1->ctor_6();
    return obj1;
}

// public UIView New(ObjC.ID __id) [static] :86643
UIView* UIView::New8(::id __id1)
{
    UIView* obj2 = (UIView*)uNew(UIView_typeof());
    obj2->ctor_7(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::UIKit
