// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.RangeControl2D.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.InteractiveTransform.h>
#include <Fuse.Entities.Transform3D.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.Gestures.CircularRangeBehavior.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.ClickerEventHandler.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.double2.h>
#include <Fuse.Gestures.DoubleClicked.h>
#include <Fuse.Gestures.DoubleTapped.h>
#include <Fuse.Gestures.DoubleTappedArgs.h>
#include <Fuse.Gestures.DoubleTappedHandler.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.EdgeSwipeAnimation.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.Internal.SwipeRegion.h>
#include <Fuse.Gestures.Internal.SwipeRegionArea.h>
#include <Fuse.Gestures.Internal.TwoFinger.h>
#include <Fuse.Gestures.Internal.TwoFingerEventHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerRotateHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerTranslateHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerZoomHandler.h>
#include <Fuse.Gestures.ISizeConstraint.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.KeepInView.h>
#include <Fuse.Gestures.KeepInViewCommon.h>
#include <Fuse.Gestures.LinearRangeBehavior.h>
#include <Fuse.Gestures.LongPressed.h>
#include <Fuse.Gestures.LongPressedArgs.h>
#include <Fuse.Gestures.LongPressedHandler.h>
#include <Fuse.Gestures.PanGesture.h>
#include <Fuse.Gestures.Pressed.h>
#include <Fuse.Gestures.Released.h>
#include <Fuse.Gestures.RotateGesture.h>
#include <Fuse.Gestures.ScrollableGoto.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.Scroller.MoveUserFlags.h>
#include <Fuse.Gestures.ScrollTo.h>
#include <Fuse.Gestures.SetSwipeActive.h>
#include <Fuse.Gestures.Swiped.h>
#include <Fuse.Gestures.SwipedHow.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedArgs.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.Gestures.ToggleSwipeActive.h>
#include <Fuse.Gestures.Trackball.h>
#include <Fuse.Gestures.Trackball.MoveMode.h>
#include <Fuse.Gestures.TransformGesture.h>
#include <Fuse.Gestures.WhileClickerTrigger.h>
#include <Fuse.Gestures.WhileHovering.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Gestures.WhileSwipeActive.h>
#include <Fuse.Gestures.ZoomGesture.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.ScrollViewMotion.h>
#include <Fuse.Motion.Simulation.BasicBoundedRegion2D.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.ElasticForce-1.h>
#include <Fuse.Motion.Simulation.Friction-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[19];
static uType* TYPES[54];

namespace g{
namespace Fuse{
namespace Gestures{

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/RangeControls/$.uno
// ----------------------------------------------------------------------------------

// public sealed class CircularRangeBehavior :36
// {
// static CircularRangeBehavior() :36
static void CircularRangeBehavior__cctor_1_fn(uType* __type)
{
    CircularRangeBehavior::_valueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    CircularRangeBehavior::_degreesValueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"DegreesValue"*/]);
}

static void CircularRangeBehavior_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("DegreesValue");
    ::STRINGS[2] = uString::Const("RangeControl or BinaryRangeControl");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/RangeControls/$.uno");
    ::STRINGS[4] = uString::Const("OnRooted");
    ::TYPES[0] = uObject_typeof();
    ::TYPES[1] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Fuse::Visual_typeof();
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::RangeControl2D_typeof();
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[10] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[11] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[13] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[14] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Fuse::Controls::RangeControl2D_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _binaryRangeControl), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _control), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _down), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _endAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _hard), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _initialAngle), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _initialRadius), 0,
        ::g::Fuse::Gestures::double2_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _initialValue), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _maximumRadius), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _minimumRadius), 0,
        ::g::Fuse::Controls::RangeControl_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _rangeControl), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _startAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _wrap), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, DegreesValueChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::CircularRangeBehavior::_degreesValueName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::CircularRangeBehavior::_valueName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(16,
        new uFunction("get_DegreesValue", NULL, (void*)CircularRangeBehavior__get_DegreesValue_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesValue", NULL, (void*)CircularRangeBehavior__set_DegreesValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("add_DegreesValueChanged", NULL, (void*)CircularRangeBehavior__add_DegreesValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof())),
        new uFunction("remove_DegreesValueChanged", NULL, (void*)CircularRangeBehavior__remove_DegreesValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof())),
        new uFunction("get_EndAngleDegrees", NULL, (void*)CircularRangeBehavior__get_EndAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EndAngleDegrees", NULL, (void*)CircularRangeBehavior__set_EndAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsWrapping", NULL, (void*)CircularRangeBehavior__get_IsWrapping_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsWrapping", NULL, (void*)CircularRangeBehavior__set_IsWrapping_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_MaximumRadius", NULL, (void*)CircularRangeBehavior__get_MaximumRadius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MaximumRadius", NULL, (void*)CircularRangeBehavior__set_MaximumRadius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_MinimumRadius", NULL, (void*)CircularRangeBehavior__get_MinimumRadius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MinimumRadius", NULL, (void*)CircularRangeBehavior__set_MinimumRadius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)CircularRangeBehavior__New2_fn, 0, true, CircularRangeBehavior_typeof(), 0),
        new uFunction("SetDegreesValue", NULL, (void*)CircularRangeBehavior__SetDegreesValue_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_StartAngleDegrees", NULL, (void*)CircularRangeBehavior__get_StartAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StartAngleDegrees", NULL, (void*)CircularRangeBehavior__set_StartAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Node_type* CircularRangeBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(CircularRangeBehavior);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.CircularRangeBehavior", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = CircularRangeBehavior_build;
    type->fp_ctor_ = (void*)CircularRangeBehavior__New2_fn;
    type->fp_cctor_ = CircularRangeBehavior__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))CircularRangeBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))CircularRangeBehavior__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated CircularRangeBehavior() :36
void CircularRangeBehavior__ctor_3_fn(CircularRangeBehavior* __this)
{
    __this->ctor_3();
}

// private double Angle(Fuse.Input.PointerEventArgs args) :171
void CircularRangeBehavior__Angle_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval)
{
    *__retval = __this->Angle(args);
}

// private float2 get_AngleRange() :212
void CircularRangeBehavior__get_AngleRange_fn(CircularRangeBehavior* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AngleRange();
}

// private Fuse.Gestures.double2 get_ControlRelativeValue() :259
void CircularRangeBehavior__get_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* __retval)
{
    *__retval = __this->ControlRelativeValue();
}

// private void set_ControlRelativeValue(Fuse.Gestures.double2 value) :266
void CircularRangeBehavior__set_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* value)
{
    __this->ControlRelativeValue(*value);
}

// private double get_CurrentRadius() :250
void CircularRangeBehavior__get_CurrentRadius_fn(CircularRangeBehavior* __this, double* __retval)
{
    *__retval = __this->CurrentRadius();
}

// public float get_DegreesValue() :279
void CircularRangeBehavior__get_DegreesValue_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->DegreesValue();
}

// public void set_DegreesValue(float value) :284
void CircularRangeBehavior__set_DegreesValue_fn(CircularRangeBehavior* __this, float* value)
{
    __this->DegreesValue(*value);
}

// public generated void add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) :299
void CircularRangeBehavior__add_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value)
{
    __this->add_DegreesValueChanged(value);
}

// public generated void remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) :299
void CircularRangeBehavior__remove_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value)
{
    __this->remove_DegreesValueChanged(value);
}

// public float get_EndAngleDegrees() :55
void CircularRangeBehavior__get_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->EndAngleDegrees();
}

// public void set_EndAngleDegrees(float value) :56
void CircularRangeBehavior__set_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* value)
{
    __this->EndAngleDegrees(*value);
}

// private void EndInteraction() :125
void CircularRangeBehavior__EndInteraction_fn(CircularRangeBehavior* __this)
{
    __this->EndInteraction();
}

// public bool get_IsWrapping() :76
void CircularRangeBehavior__get_IsWrapping_fn(CircularRangeBehavior* __this, bool* __retval)
{
    *__retval = __this->IsWrapping();
}

// public void set_IsWrapping(bool value) :77
void CircularRangeBehavior__set_IsWrapping_fn(CircularRangeBehavior* __this, bool* value)
{
    __this->IsWrapping(*value);
}

// private float2 LocalVector(Fuse.Input.PointerEventArgs args) :159
void CircularRangeBehavior__LocalVector_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalVector(args);
}

// public float get_MaximumRadius() :69
void CircularRangeBehavior__get_MaximumRadius_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->MaximumRadius();
}

// public void set_MaximumRadius(float value) :70
void CircularRangeBehavior__set_MaximumRadius_fn(CircularRangeBehavior* __this, float* value)
{
    __this->MaximumRadius(*value);
}

// public float get_MinimumRadius() :62
void CircularRangeBehavior__get_MinimumRadius_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->MinimumRadius();
}

// public void set_MinimumRadius(float value) :63
void CircularRangeBehavior__set_MinimumRadius_fn(CircularRangeBehavior* __this, float* value)
{
    __this->MinimumRadius(*value);
}

// public generated CircularRangeBehavior New() :36
void CircularRangeBehavior__New2_fn(CircularRangeBehavior** __retval)
{
    *__retval = CircularRangeBehavior::New2();
}

// private void OnLostCapture() :116
void CircularRangeBehavior__OnLostCapture_fn(CircularRangeBehavior* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) :180
void CircularRangeBehavior__OnPointerMoved_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(s, args);
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) :138
void CircularRangeBehavior__OnPointerPressed_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(s, args);
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) :201
void CircularRangeBehavior__OnPointerReleased_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(s, args);
}

// protected override sealed void OnRooted() :80
void CircularRangeBehavior__OnRooted_fn(CircularRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_control = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[4/*Fuse.Elements.Element*/]);
    __this->_rangeControl = uAs< ::g::Fuse::Controls::RangeControl*>(__this->Parent(), ::TYPES[5/*Fuse.Controls.RangeControl*/]);
    __this->_binaryRangeControl = uAs< ::g::Fuse::Controls::RangeControl2D*>(__this->Parent(), ::TYPES[6/*Fuse.Controls.RangeControl2D*/]);

    if ((__this->_rangeControl == NULL) && (__this->_binaryRangeControl == NULL))
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[2/*"RangeContro...*/], __this->Parent(), __this, ::STRINGS[3/*"/usr/local/...*/], 90, ::STRINGS[4/*"OnRooted"*/]);
    else
    {
        ::g::Fuse::Input::Pointer::AddHandlers(__this->_control, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)CircularRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)CircularRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)CircularRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

        if (__this->_rangeControl != NULL)
            uPtr(__this->_rangeControl)->add_ValueChanged(uDelegate::New(::TYPES[10/*Uno.UX.ValueChangedHandler<double>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));
        else
            uPtr(__this->_binaryRangeControl)->add_ValueChanged(uDelegate::New(::TYPES[11/*Uno.UX.ValueChangedHandler<float2>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));
    }
}

// protected override sealed void OnUnrooted() :102
void CircularRangeBehavior__OnUnrooted_fn(CircularRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnUnrooted()");

    if (__this->_control != NULL)
        ::g::Fuse::Input::Pointer::RemoveHandlers(__this->_control, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)CircularRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)CircularRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)CircularRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

    if (__this->_rangeControl != NULL)
        uPtr(__this->_rangeControl)->remove_ValueChanged(uDelegate::New(::TYPES[10/*Uno.UX.ValueChangedHandler<double>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));

    if (__this->_binaryRangeControl != NULL)
        uPtr(__this->_binaryRangeControl)->remove_ValueChanged(uDelegate::New(::TYPES[11/*Uno.UX.ValueChangedHandler<float2>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));

    __this->_control = NULL;
    __this->_rangeControl = NULL;
    __this->_binaryRangeControl = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object s, object args) :300
void CircularRangeBehavior__OnValueChanged_fn(CircularRangeBehavior* __this, uObject* s, uObject* args)
{
    __this->OnValueChanged(s, args);
}

// private double Radius(Fuse.Input.PointerEventArgs args) :166
void CircularRangeBehavior__Radius_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval)
{
    *__retval = __this->Radius(args);
}

// public void SetDegreesValue(float value, Uno.UX.IPropertyListener origin) :290
void CircularRangeBehavior__SetDegreesValue_fn(CircularRangeBehavior* __this, float* value, uObject* origin)
{
    __this->SetDegreesValue(*value, origin);
}

// public float get_StartAngleDegrees() :48
void CircularRangeBehavior__get_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->StartAngleDegrees();
}

// public void set_StartAngleDegrees(float value) :49
void CircularRangeBehavior__set_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* value)
{
    __this->StartAngleDegrees(*value);
}

// private void UpdateValue(double angle, double radius) :228
void CircularRangeBehavior__UpdateValue_fn(CircularRangeBehavior* __this, double* angle, double* radius)
{
    __this->UpdateValue(*angle, *radius);
}

::g::Uno::UX::Selector CircularRangeBehavior::_degreesValueName_;
::g::Uno::UX::Selector CircularRangeBehavior::_valueName_;

// public generated CircularRangeBehavior() [instance] :36
void CircularRangeBehavior::ctor_3()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", ".ctor()");
    _startAngle = 0.0f;
    _endAngle = 6.28318548f;
    _minimumRadius = 0.0f;
    _maximumRadius = 1.0f;
    _down = -1;
    ctor_2();
}

// private double Angle(Fuse.Input.PointerEventArgs args) [instance] :171
double CircularRangeBehavior::Angle(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Angle(Fuse.Input.PointerEventArgs)");
    ::g::Uno::Float2 o = LocalVector(args);
    float a = ::g::Uno::Math::Atan22(o.Y, o.X);

    if (a < 0.0f)
        a = a + 6.28318548f;

    return (double)a;
}

// private float2 get_AngleRange() [instance] :212
::g::Uno::Float2 CircularRangeBehavior::AngleRange()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_AngleRange()");
    float s = _startAngle;
    float e = _endAngle;
    bool low = s < e;
    s = ::g::Uno::Math::Mod1(s, 6.28318548f);
    e = ::g::Uno::Math::Mod1(e, 6.28318548f);

    if (low && (s > (e - 1e-05f)))
        s = s - 6.28318548f;
    else if (!low && (s < (e + 1e-05f)))
        s = s + 6.28318548f;

    return ::g::Uno::Float2__New2(s, e);
}

// private Fuse.Gestures.double2 get_ControlRelativeValue() [instance] :259
::g::Fuse::Gestures::double2 CircularRangeBehavior::ControlRelativeValue()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_ControlRelativeValue()");

    if (_rangeControl != NULL)
        return ::g::Fuse::Gestures::double2__New1(uPtr(_rangeControl)->RelativeValue(), 0.0);
    else
        return ::g::Fuse::Gestures::double2__New2(uPtr(_binaryRangeControl)->RelativeValue());
}

// private void set_ControlRelativeValue(Fuse.Gestures.double2 value) [instance] :266
void CircularRangeBehavior::ControlRelativeValue(::g::Fuse::Gestures::double2 value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_ControlRelativeValue(Fuse.Gestures.double2)");

    if (_rangeControl != NULL)
        uPtr(_rangeControl)->RelativeValue(value.X);
    else
        uPtr(_binaryRangeControl)->RelativeValue(value.AsFloat2());
}

// private double get_CurrentRadius() [instance] :250
double CircularRangeBehavior::CurrentRadius()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_CurrentRadius()");
    return (((ControlRelativeValue().Y * (double)(MaximumRadius() - MinimumRadius())) + (double)MinimumRadius()) * (double)uPtr(_control)->ActualSize().X) / 2.0;
}

// public float get_DegreesValue() [instance] :279
float CircularRangeBehavior::DegreesValue()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_DegreesValue()");
    ::g::Uno::Float2 range = AngleRange();
    return (float)::g::Uno::Math::RadiansToDegrees((ControlRelativeValue().X * (double)(range.Y - range.X)) + (double)range.X);
}

// public void set_DegreesValue(float value) [instance] :284
void CircularRangeBehavior::DegreesValue(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_DegreesValue(float)");
    UpdateValue((double)(((value / 360.0f) * 3.14159274f) * 2.0f), CurrentRadius());
}

// public generated void add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :299
void CircularRangeBehavior::add_DegreesValueChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float>)");
    DegreesValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DegreesValueChanged1, value), ::TYPES[14/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :299
void CircularRangeBehavior::remove_DegreesValueChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float>)");
    DegreesValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DegreesValueChanged1, value), ::TYPES[14/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public float get_EndAngleDegrees() [instance] :55
float CircularRangeBehavior::EndAngleDegrees()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_EndAngleDegrees()");
    return ::g::Uno::Math::RadiansToDegrees1(_endAngle);
}

// public void set_EndAngleDegrees(float value) [instance] :56
void CircularRangeBehavior::EndAngleDegrees(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_EndAngleDegrees(float)");
    _endAngle = ::g::Uno::Math::DegreesToRadians1(value);
}

// private void EndInteraction() [instance] :125
void CircularRangeBehavior::EndInteraction()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "EndInteraction()");
    _down = -1;
    _hard = false;
    uPtr(_control)->EndInteraction(this);
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
}

// public bool get_IsWrapping() [instance] :76
bool CircularRangeBehavior::IsWrapping()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_IsWrapping()");
    return _wrap;
}

// public void set_IsWrapping(bool value) [instance] :77
void CircularRangeBehavior::IsWrapping(bool value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_IsWrapping(bool)");
    _wrap = value;
}

// private float2 LocalVector(Fuse.Input.PointerEventArgs args) [instance] :159
::g::Uno::Float2 CircularRangeBehavior::LocalVector(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "LocalVector(Fuse.Input.PointerEventArgs)");
    ::g::Uno::Float2 l = uPtr(_control)->WindowToLocal(uPtr(args)->WindowPoint());
    ::g::Uno::Float2 o = ::g::Uno::Float2__op_Subtraction2(l, ::g::Uno::Float2__op_Division1(uPtr(_control)->ActualSize(), 2.0f));
    return o;
}

// public float get_MaximumRadius() [instance] :69
float CircularRangeBehavior::MaximumRadius()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_MaximumRadius()");
    return _maximumRadius;
}

// public void set_MaximumRadius(float value) [instance] :70
void CircularRangeBehavior::MaximumRadius(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_MaximumRadius(float)");
    _maximumRadius = value;
}

// public float get_MinimumRadius() [instance] :62
float CircularRangeBehavior::MinimumRadius()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_MinimumRadius()");
    return _minimumRadius;
}

// public void set_MinimumRadius(float value) [instance] :63
void CircularRangeBehavior::MinimumRadius(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_MinimumRadius(float)");
    _minimumRadius = value;
}

// private void OnLostCapture() [instance] :116
void CircularRangeBehavior::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnLostCapture()");

    if (_rangeControl != NULL)
        uPtr(_rangeControl)->Value(_initialValue.X);
    else
        uPtr(_binaryRangeControl)->Value(_initialValue.AsFloat2());

    EndInteraction();
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) [instance] :180
void CircularRangeBehavior::OnPointerMoved(uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    double radius = Radius(args);
    double angle = Angle(args);

    if (!_hard && ((::g::Uno::Math::Abs(angle - _initialAngle) > 0.0872664600610733) || (::g::Uno::Math::Abs(radius - _initialRadius) > 5.0)))
    {
        if (!uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)CircularRangeBehavior__OnLostCapture_fn, this), NULL))
            OnLostCapture();
        else
            _hard = true;
    }

    if (_hard)
        UpdateValue(angle, radius);
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) [instance] :138
void CircularRangeBehavior::OnPointerPressed(uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if (_down != -1)
        return;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)CircularRangeBehavior__OnLostCapture_fn, this), NULL))
    {
        ::g::Fuse::Input::Focus::GiveTo(_control);
        uPtr(_control)->BeginInteraction(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)CircularRangeBehavior__OnLostCapture_fn, this));
        _down = uPtr(args)->PointIndex();

        if (_rangeControl != NULL)
            _initialValue = ::g::Fuse::Gestures::double2__New1(uPtr(_rangeControl)->Value(), 0.0);
        else
            _initialValue = ::g::Fuse::Gestures::double2__New2(uPtr(_binaryRangeControl)->Value());

        _initialAngle = Angle(args);
        _initialRadius = Radius(args);
    }
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) [instance] :201
void CircularRangeBehavior::OnPointerReleased(uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    UpdateValue(Angle(args), Radius(args));
    EndInteraction();
}

// private void OnValueChanged(object s, object args) [instance] :300
void CircularRangeBehavior::OnValueChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnValueChanged(object,object)");
    ::g::Uno::UX::ValueChangedArgs* ret2;
    OnPropertyChanged(CircularRangeBehavior::_valueName());
    OnPropertyChanged(CircularRangeBehavior::_degreesValueName());

    if (::g::Uno::Delegate::op_Inequality(DegreesValueChanged1, NULL))
        uPtr(DegreesValueChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[13/*Uno.UX.ValueChangedArgs<float>*/], uCRef(DegreesValue()), &ret2), ret2));
}

// private double Radius(Fuse.Input.PointerEventArgs args) [instance] :166
double CircularRangeBehavior::Radius(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Radius(Fuse.Input.PointerEventArgs)");
    return (double)::g::Uno::Vector::Length(LocalVector(args));
}

// public void SetDegreesValue(float value, Uno.UX.IPropertyListener origin) [instance] :290
void CircularRangeBehavior::SetDegreesValue(float value, uObject* origin)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "SetDegreesValue(float,Uno.UX.IPropertyListener)");
    DegreesValue(value);
}

// public float get_StartAngleDegrees() [instance] :48
float CircularRangeBehavior::StartAngleDegrees()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_StartAngleDegrees()");
    return ::g::Uno::Math::RadiansToDegrees1(_startAngle);
}

// public void set_StartAngleDegrees(float value) [instance] :49
void CircularRangeBehavior::StartAngleDegrees(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_StartAngleDegrees(float)");
    _startAngle = ::g::Uno::Math::DegreesToRadians1(value);
}

// private void UpdateValue(double angle, double radius) [instance] :228
void CircularRangeBehavior::UpdateValue(double angle, double radius)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "UpdateValue(double,double)");
    ::g::Uno::Float2 step = (_rangeControl != NULL) ? ::g::Uno::Float2__New2((float)uPtr(_rangeControl)->RelativeUserStep(), 0.0f) : uPtr(_binaryRangeControl)->RelativeUserStep();
    ::g::Uno::Float2 range = AngleRange();
    double rel = ::g::Uno::Math::Mod(angle - (double)range.X, 6.2831854820251465) / (double)(range.Y - range.X);

    if (step.X > 1e-05f)
        rel = ::g::Uno::Math::Round(rel / (double)step.X) * (double)step.X;

    if (IsWrapping() && (rel > 0.99998998641967773))
        rel = 0.0;

    double relRad = radius / (double)(uPtr(_control)->ActualSize().X / 2.0f);
    double xRad = (relRad - (double)MinimumRadius()) / (double)(MaximumRadius() - MinimumRadius());

    if (step.Y > 1e-05f)
        xRad = ::g::Uno::Math::Round(xRad / (double)step.Y) * (double)step.Y;

    ControlRelativeValue(::g::Fuse::Gestures::double2__New1(rel, xRad));
}

// public generated CircularRangeBehavior New() [static] :36
CircularRangeBehavior* CircularRangeBehavior::New2()
{
    CircularRangeBehavior* obj1 = (CircularRangeBehavior*)uNew(CircularRangeBehavior_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Clicked :25
// {
static void Clicked_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[18] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::ClickedHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicked, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AddHandler", NULL, (void*)Clicked__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction("add_Handler", NULL, (void*)Clicked__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)Clicked__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)Clicked__New2_fn, 0, true, Clicked_typeof(), 0),
        new uFunction("RemoveHandler", NULL, (void*)Clicked__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Gestures::ClickedHandler_typeof()));
}

::g::Fuse::Triggers::Trigger_type* Clicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Clicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Clicked", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_build_ = Clicked_build;
    type->fp_ctor_ = (void*)Clicked__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Clicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Clicked__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Clicked() :25
void Clicked__ctor_5_fn(Clicked* __this)
{
    __this->ctor_5();
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) :41
void Clicked__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Clicked::AddHandler(visual, handler);
}

// private static Fuse.Gestures.Clicked GetClicked(Fuse.Visual visual) :27
void Clicked__GetClicked_fn(::g::Fuse::Visual* visual, Clicked** __retval)
{
    *__retval = Clicked::GetClicked(visual);
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :54
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :54
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Clicked New() :25
void Clicked__New2_fn(Clicked** __retval)
{
    *__retval = Clicked::New2();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :68
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted() :56
void Clicked__OnRooted_fn(Clicked* __this)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted() :62
void Clicked__OnUnrooted_fn(Clicked* __this)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) :48
void Clicked__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Clicked::RemoveHandler(visual, handler);
}

// public generated Clicked() [instance] :25
void Clicked::ctor_5()
{
    uStackFrame __("Fuse.Gestures.Clicked", ".ctor()");
    ctor_4();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :54
void Clicked::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicked", "add_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[19/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :54
void Clicked::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicked", "remove_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[19/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :68
void Clicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnClicked(Fuse.Input.PointerEventArgs,int)");

    if (!IsRootingCompleted())
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, Parent()));
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) [static] :41
void Clicked::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Clicked", "AddHandler(Fuse.Visual,Fuse.Gestures.ClickedHandler)");
    Clicked* c = Clicked::GetClicked(visual);
    uPtr(c)->add_Handler(handler);
}

// private static Fuse.Gestures.Clicked GetClicked(Fuse.Visual visual) [static] :27
Clicked* Clicked::GetClicked(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.Clicked", "GetClicked(Fuse.Visual)");
    ::g::Fuse::Node* ret2;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* b = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[16/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2);

        if (uIs(b, Clicked_typeof()))
            return uCast<Clicked*>(b, Clicked_typeof());
    }

    Clicked* c = Clicked::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), c);
    return c;
}

// public generated Clicked New() [static] :25
Clicked* Clicked::New2()
{
    Clicked* obj1 = (Clicked*)uNew(Clicked_typeof());
    obj1->ctor_5();
    return obj1;
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) [static] :48
void Clicked::RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Clicked", "RemoveHandler(Fuse.Visual,Fuse.Gestures.ClickedHandler)");
    Clicked* c = Clicked::GetClicked(visual);
    uPtr(c)->remove_Handler(handler);
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class ClickedArgs :9
// {
static void ClickedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ClickedArgs__New3_fn, 0, true, ClickedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* ClickedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClickedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.ClickedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->fp_build_ = ClickedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :11
void ClickedArgs__ctor_4_fn(ClickedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :11
void ClickedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, ClickedArgs** __retval)
{
    *__retval = ClickedArgs::New3(args, visual);
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :11
void ClickedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.ClickedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :11
ClickedArgs* ClickedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    ClickedArgs* obj1 = (ClickedArgs*)uNew(ClickedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public delegate void ClickedHandler(object sender, Fuse.Gestures.ClickedArgs args) :14
uDelegateType* ClickedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::ClickedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/Internal/$.uno
// ------------------------------------------------------------------

// internal sealed class Clicker :47
// {
// static Clicker() :47
static void Clicker__cctor__fn(uType* __type)
{
    Clicker::_clickerProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Clicker_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _attachCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _clickCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hasUpdate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hovering), 0,
        ::g::Fuse::Input::PointerEventArgs_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastArgs), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastUpTime), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _longPressTimeout), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxDoubleInterval), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapDistanceMoved), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapTimeHeld), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maybeTap), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startTime), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _tapCount), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _visual), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, ClickedEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, LongPressedEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, PressingEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, TappedEvent1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Gestures::Clicker::_clickerProperty_, uFieldFlagsStatic);
}

uType* Clicker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Clicker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Clicker", options);
    type->fp_build_ = Clicker_build;
    type->fp_cctor_ = Clicker__cctor__fn;
    return type;
}

// private Clicker(Fuse.Visual visual) :62
void Clicker__ctor__fn(Clicker* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_(visual);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Visual elm) :68
void Clicker__AttachClicker_fn(::g::Fuse::Visual* elm, Clicker** __retval)
{
    *__retval = Clicker::AttachClicker(elm);
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__add_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_ClickedEvent(value);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__remove_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_ClickedEvent(value);
}

// public void Detach() :84
void Clicker__Detach_fn(Clicker* __this)
{
    __this->Detach();
}

// private void DoneCapture() :237
void Clicker__DoneCapture_fn(Clicker* __this)
{
    __this->DoneCapture();
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__add_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_LongPressedEvent(value);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__remove_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_LongPressedEvent(value);
}

// private bool NeedCapture() :179
void Clicker__NeedCapture_fn(Clicker* __this, bool* __retval)
{
    *__retval = __this->NeedCapture();
}

// private Clicker New(Fuse.Visual visual) :62
void Clicker__New1_fn(::g::Fuse::Visual* visual, Clicker** __retval)
{
    *__retval = Clicker::New1(visual);
}

// private void OnLostCapture() :256
void Clicker__OnLostCapture_fn(Clicker* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :151
void Clicker__OnPointerMoved_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :121
void Clicker__OnPointerPressed_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :187
void Clicker__OnPointerReleased_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRooted() :94
void Clicker__OnRooted_fn(Clicker* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted() :101
void Clicker__OnUnrooted_fn(Clicker* __this)
{
    __this->OnUnrooted();
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__add_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_PressingEvent(value);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__remove_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_PressingEvent(value);
}

// private void ReleaseUpdate() :247
void Clicker__ReleaseUpdate_fn(Clicker* __this)
{
    __this->ReleaseUpdate();
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__add_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_TappedEvent(value);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__remove_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_TappedEvent(value);
}

// private void Update() :226
void Clicker__Update_fn(Clicker* __this)
{
    __this->Update();
}

uSStrong< ::g::Fuse::PropertyHandle*> Clicker::_clickerProperty_;

// private Clicker(Fuse.Visual visual) [instance] :62
void Clicker::ctor_(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.Clicker", ".ctor(Fuse.Visual)");
    _maxTapDistanceMoved = 25.0f;
    _maxTapTimeHeld = 0.3f;
    _maxDoubleInterval = 0.3f;
    _longPressTimeout = 0.5f;
    _attachCount = 1;
    _down = -1;
    _visual = visual;
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::add_ClickedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_ClickedEvent(Fuse.Gestures.ClickerEventHandler)");
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ClickedEvent1, value), ::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::remove_ClickedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler)");
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ClickedEvent1, value), ::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public void Detach() [instance] :84
void Clicker::Detach()
{
    uStackFrame __("Fuse.Gestures.Clicker", "Detach()");
    _attachCount--;

    if (_attachCount == 0)
    {
        OnUnrooted();
        uPtr(uPtr(_visual)->Properties())->Clear(Clicker::_clickerProperty());
    }
}

// private void DoneCapture() [instance] :237
void Clicker::DoneCapture()
{
    uStackFrame __("Fuse.Gestures.Clicker", "DoneCapture()");
    _down = -1;
    ReleaseUpdate();

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));

    _hovering = false;
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::add_LongPressedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler)");
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LongPressedEvent1, value), ::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::remove_LongPressedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler)");
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LongPressedEvent1, value), ::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private bool NeedCapture() [instance] :179
bool Clicker::NeedCapture()
{
    uStackFrame __("Fuse.Gestures.Clicker", "NeedCapture()");
    return (((_maybeTap && ::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL);
}

// private void OnLostCapture() [instance] :256
void Clicker::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnLostCapture()");
    DoneCapture();
    _tapCount = 0;
    _clickCount = 0;
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :151
void Clicker::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    float distance = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), _startCoord));
    double deltaTime = args->Timestamp() - _startTime;

    if ((distance > _maxTapDistanceMoved) || (deltaTime > (double)_maxTapTimeHeld))
        _maybeTap = false;

    if (!NeedCapture())
    {
        uPtr(args)->ReleaseSoftCapture(this);
        DoneCapture();
    }

    bool hoverNow = uPtr(_visual)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow != _hovering)
    {
        if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
            uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(hoverNow ? 1 : 0));

        _hovering = hoverNow;
    }

    _lastArgs = args;
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :121
void Clicker::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if ((_down != -1) || !uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Clicker__OnLostCapture_fn, this), NULL))
        return;

    double delta = uPtr(args)->Timestamp() - _lastUpTime;

    if (delta > (double)_maxDoubleInterval)
    {
        _tapCount = 0;
        _clickCount = 0;
    }

    _down = args->PointIndex();
    _startCoord = args->WindowPoint();
    _startTime = args->Timestamp();
    _maybeTap = true;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL))
    {
        _hasUpdate = true;
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Clicker__Update_fn, this), 0);
    }

    if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(1));

    _lastArgs = args;
    _hovering = true;
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :187
void Clicker::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    uPtr(args)->ReleaseSoftCapture(this);
    double deltaTime = args->Timestamp() - _startTime;

    if (_maybeTap && (deltaTime <= (double)_maxTapTimeHeld))
    {
        _tapCount++;

        if (::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL))
            uPtr(TappedEvent1)->Invoke(2, args, uCRef<int>(_tapCount));
    }
    else
        _tapCount = 0;

    bool hoverNow = uPtr(_visual)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow)
    {
        _clickCount++;

        if (::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL))
            uPtr(ClickedEvent1)->Invoke(2, args, uCRef<int>(_clickCount));
    }
    else
        _clickCount = 0;

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(0));

    _hovering = false;
    DoneCapture();
    _lastUpTime = args->Timestamp();
    _lastArgs = args;
}

// private void OnRooted() [instance] :94
void Clicker::OnRooted()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnRooted()");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _visual, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _visual, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _visual, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
}

// private void OnUnrooted() [instance] :101
void Clicker::OnUnrooted()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _visual, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _visual, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _visual, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::add_PressingEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_PressingEvent(Fuse.Gestures.ClickerEventHandler)");
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PressingEvent1, value), ::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::remove_PressingEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_PressingEvent(Fuse.Gestures.ClickerEventHandler)");
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PressingEvent1, value), ::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void ReleaseUpdate() [instance] :247
void Clicker::ReleaseUpdate()
{
    uStackFrame __("Fuse.Gestures.Clicker", "ReleaseUpdate()");

    if (_hasUpdate)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Clicker__Update_fn, this), 0);
        _hasUpdate = false;
    }
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::add_TappedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_TappedEvent(Fuse.Gestures.ClickerEventHandler)");
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TappedEvent1, value), ::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::remove_TappedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_TappedEvent(Fuse.Gestures.ClickerEventHandler)");
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TappedEvent1, value), ::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void Update() [instance] :226
void Clicker::Update()
{
    uStackFrame __("Fuse.Gestures.Clicker", "Update()");
    double elapsed = ::g::Fuse::Time::FrameTime() - _startTime;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL) && (elapsed > (double)_longPressTimeout))
    {
        uPtr(LongPressedEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));
        ::g::Fuse::Input::Pointer::ReleaseSoftCapture(_down, this);
        DoneCapture();
    }
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Visual elm) [static] :68
Clicker* Clicker::AttachClicker(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Gestures.Clicker", "AttachClicker(Fuse.Visual)");
    Clicker_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Clicker::_clickerProperty(), &v))
    {
        Clicker* c = uAs<Clicker*>(v, Clicker_typeof());
        uPtr(c)->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker::New1(elm);
    uPtr(uPtr(elm)->Properties())->Set(Clicker::_clickerProperty(), nc);
    nc->OnRooted();
    return nc;
}

// private Clicker New(Fuse.Visual visual) [static] :62
Clicker* Clicker::New1(::g::Fuse::Visual* visual)
{
    Clicker* obj1 = (Clicker*)uNew(Clicker_typeof());
    obj1->ctor_(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/Internal/$.uno
// ------------------------------------------------------------------

// internal delegate void ClickerEventHandler(Fuse.Input.PointerEventArgs args, int count) :11
uDelegateType* ClickerEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickerEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Input::PointerEventArgs_typeof(),
        ::g::Uno::Int_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/Internal/$.uno
// ------------------------------------------------------------------

// public abstract class ClickerTrigger :13
// {
static void ClickerTrigger_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::ClickerTrigger, Clicker), 0);
}

::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.ClickerTrigger", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = ClickerTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ClickerTrigger__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated ClickerTrigger() :13
void ClickerTrigger__ctor_4_fn(ClickerTrigger* __this)
{
    __this->ctor_4();
}

// protected override void OnRooted() :16
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent());
}

// protected override void OnUnrooted() :22
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", "OnUnrooted()");
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated ClickerTrigger() [instance] :13
void ClickerTrigger::ctor_4()
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", ".ctor()");
    ctor_3();
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/Internal/$.uno
// ------------------------------------------------------------------

// internal sealed class DegreeSpan :579
// {
static void DegreeSpan_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _b), 0);
}

uType* DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.DegreeSpan", options);
    type->fp_build_ = DegreeSpan_build;
    return type;
}

// public DegreeSpan(float a, float b) :584
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x) :590
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b) :584
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval)
{
    *__retval = DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance] :584
void DegreeSpan::ctor_(float a, float b)
{
    uStackFrame __("Fuse.Gestures.DegreeSpan", ".ctor(float,float)");
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance] :590
bool DegreeSpan::IsWithinBounds(float x)
{
    uStackFrame __("Fuse.Gestures.DegreeSpan", "IsWithinBounds(float)");
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static] :584
DegreeSpan* DegreeSpan::New1(float a, float b)
{
    DegreeSpan* obj1 = (DegreeSpan*)uNew(DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/RangeControls/$.uno
// ----------------------------------------------------------------------------------

// internal struct double2 :13
// {
static void double2_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::double2, X), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::double2, Y), 0);
}

uStructType* double2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(double2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Gestures.double2", options);
    type->fp_build_ = double2_build;
    return type;
}

// public double2(double x, double y) :18
void double2__ctor__fn(double2* __this, double* x, double* y)
{
    __this->ctor_(*x, *y);
}

// public double2(float2 v) :24
void double2__ctor_1_fn(double2* __this, ::g::Uno::Float2* v)
{
    __this->ctor_1(*v);
}

// public float2 get_AsFloat2() :32
void double2__get_AsFloat2_fn(double2* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AsFloat2();
}

// public double2 New(double x, double y) :18
void double2__New1_fn(double* x, double* y, double2* __retval)
{
    *__retval = double2__New1(*x, *y);
}

// public double2 New(float2 v) :24
void double2__New2_fn(::g::Uno::Float2* v, double2* __retval)
{
    *__retval = double2__New2(*v);
}

// public double2(double x, double y) [instance] :18
void double2::ctor_(double x, double y)
{
    uStackFrame __("Fuse.Gestures.double2", ".ctor(double,double)");
    X = x;
    Y = y;
}

// public double2(float2 v) [instance] :24
void double2::ctor_1(::g::Uno::Float2 v)
{
    uStackFrame __("Fuse.Gestures.double2", ".ctor(float2)");
    X = (double)v.X;
    Y = (double)v.Y;
}

// public float2 get_AsFloat2() [instance] :32
::g::Uno::Float2 double2::AsFloat2()
{
    uStackFrame __("Fuse.Gestures.double2", "get_AsFloat2()");
    return ::g::Uno::Float2__New2((float)X, (float)Y);
}

// public double2 New(double x, double y) [static] :18
double2 double2__New1(double x, double y)
{
    double2 obj1;
    obj1.ctor_(x, y);
    return obj1;
}

// public double2 New(float2 v) [static] :24
double2 double2__New2(::g::Uno::Float2 v)
{
    double2 obj2;
    obj2.ctor_1(v);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class DoubleClicked :80
// {
static void DoubleClicked_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[18] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::ClickedHandler_typeof(), offsetof(::g::Fuse::Gestures::DoubleClicked, Handler1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Handler", NULL, (void*)DoubleClicked__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)DoubleClicked__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)DoubleClicked__New2_fn, 0, true, DoubleClicked_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* DoubleClicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DoubleClicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.DoubleClicked", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_build_ = DoubleClicked_build;
    type->fp_ctor_ = (void*)DoubleClicked__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DoubleClicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))DoubleClicked__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated DoubleClicked() :80
void DoubleClicked__ctor_5_fn(DoubleClicked* __this)
{
    __this->ctor_5();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :82
void DoubleClicked__add_Handler_fn(DoubleClicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :82
void DoubleClicked__remove_Handler_fn(DoubleClicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated DoubleClicked New() :80
void DoubleClicked__New2_fn(DoubleClicked** __retval)
{
    *__retval = DoubleClicked::New2();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :96
void DoubleClicked__OnClicked_fn(DoubleClicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted() :84
void DoubleClicked__OnRooted_fn(DoubleClicked* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleClicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted() :90
void DoubleClicked__OnUnrooted_fn(DoubleClicked* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleClicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public generated DoubleClicked() [instance] :80
void DoubleClicked::ctor_5()
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", ".ctor()");
    ctor_4();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :82
void DoubleClicked::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "add_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[19/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :82
void DoubleClicked::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "remove_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[19/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :96
void DoubleClicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnClicked(Fuse.Input.PointerEventArgs,int)");

    if (clickCount != 2)
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, Parent()));
}

// public generated DoubleClicked New() [static] :80
DoubleClicked* DoubleClicked::New2()
{
    DoubleClicked* obj1 = (DoubleClicked*)uNew(DoubleClicked_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class DoubleTapped :1098
// {
static void DoubleTapped_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[20] = ::g::Fuse::Gestures::DoubleTappedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::DoubleTappedHandler_typeof(), offsetof(::g::Fuse::Gestures::DoubleTapped, Handler1), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("add_Handler", NULL, (void*)DoubleTapped__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::DoubleTappedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)DoubleTapped__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::DoubleTappedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)DoubleTapped__New2_fn, 0, true, DoubleTapped_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DoubleTapped__New3_fn, 0, true, DoubleTapped_typeof(), 1, ::g::Fuse::Gestures::DoubleTappedHandler_typeof()));
}

::g::Fuse::Triggers::Trigger_type* DoubleTapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DoubleTapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.DoubleTapped", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_build_ = DoubleTapped_build;
    type->fp_ctor_ = (void*)DoubleTapped__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DoubleTapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))DoubleTapped__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public DoubleTapped() :1102
void DoubleTapped__ctor_5_fn(DoubleTapped* __this)
{
    __this->ctor_5();
}

// public DoubleTapped(Fuse.Gestures.DoubleTappedHandler handler) :1104
void DoubleTapped__ctor_6_fn(DoubleTapped* __this, uDelegate* handler)
{
    __this->ctor_6(handler);
}

// public generated void add_Handler(Fuse.Gestures.DoubleTappedHandler value) :1100
void DoubleTapped__add_Handler_fn(DoubleTapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.DoubleTappedHandler value) :1100
void DoubleTapped__remove_Handler_fn(DoubleTapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public DoubleTapped New() :1102
void DoubleTapped__New2_fn(DoubleTapped** __retval)
{
    *__retval = DoubleTapped::New2();
}

// public DoubleTapped New(Fuse.Gestures.DoubleTappedHandler handler) :1104
void DoubleTapped__New3_fn(uDelegate* handler, DoubleTapped** __retval)
{
    *__retval = DoubleTapped::New3(handler);
}

// protected override sealed void OnRooted() :1109
void DoubleTapped__OnRooted_fn(DoubleTapped* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleTapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :1121
void DoubleTapped__OnTapped_fn(DoubleTapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted() :1115
void DoubleTapped__OnUnrooted_fn(DoubleTapped* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleTapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public DoubleTapped() [instance] :1102
void DoubleTapped::ctor_5()
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", ".ctor()");
    ctor_4();
}

// public DoubleTapped(Fuse.Gestures.DoubleTappedHandler handler) [instance] :1104
void DoubleTapped::ctor_6(uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", ".ctor(Fuse.Gestures.DoubleTappedHandler)");
    ctor_4();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.DoubleTappedHandler value) [instance] :1100
void DoubleTapped::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "add_Handler(Fuse.Gestures.DoubleTappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[20/*Fuse.Gestures.DoubleTappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.DoubleTappedHandler value) [instance] :1100
void DoubleTapped::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "remove_Handler(Fuse.Gestures.DoubleTappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[20/*Fuse.Gestures.DoubleTappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :1121
void DoubleTapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnTapped(Fuse.Input.PointerEventArgs,int)");

    if (tapCount != 2)
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::DoubleTappedArgs*)::g::Fuse::Gestures::DoubleTappedArgs::New3(args, Parent()));
}

// public DoubleTapped New() [static] :1102
DoubleTapped* DoubleTapped::New2()
{
    DoubleTapped* obj1 = (DoubleTapped*)uNew(DoubleTapped_typeof());
    obj1->ctor_5();
    return obj1;
}

// public DoubleTapped New(Fuse.Gestures.DoubleTappedHandler handler) [static] :1104
DoubleTapped* DoubleTapped::New3(uDelegate* handler)
{
    DoubleTapped* obj2 = (DoubleTapped*)uNew(DoubleTapped_typeof());
    obj2->ctor_6(handler);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class DoubleTappedArgs :1088
// {
static void DoubleTappedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DoubleTappedArgs__New3_fn, 0, true, DoubleTappedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* DoubleTappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DoubleTappedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.DoubleTappedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->fp_build_ = DoubleTappedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public DoubleTappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1090
void DoubleTappedArgs__ctor_4_fn(DoubleTappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public DoubleTappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1090
void DoubleTappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, DoubleTappedArgs** __retval)
{
    *__retval = DoubleTappedArgs::New3(args, visual);
}

// public DoubleTappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :1090
void DoubleTappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.DoubleTappedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public DoubleTappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :1090
DoubleTappedArgs* DoubleTappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    DoubleTappedArgs* obj1 = (DoubleTappedArgs*)uNew(DoubleTappedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public delegate void DoubleTappedHandler(object sender, Fuse.Gestures.DoubleTappedArgs args) :1096
uDelegateType* DoubleTappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.DoubleTappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::DoubleTappedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public enum Edge :1475
uEnumType* Edge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Edge", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class EdgeSwipeAnimation :1483
// {
static void EdgeSwipeAnimation_build(uType* type)
{
    ::STRINGS[5] = uString::Const("EdgeSwipeAnimation must be attached to an Element");
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[21] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), offsetof(::g::Fuse::Gestures::EdgeSwipeAnimation, _swiper), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("Disable", NULL, (void*)EdgeSwipeAnimation__Disable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Edge", NULL, (void*)EdgeSwipeAnimation__get_Edge_fn, 0, false, ::g::Fuse::Gestures::Edge_typeof(), 0),
        new uFunction("set_Edge", NULL, (void*)EdgeSwipeAnimation__set_Edge_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::Edge_typeof()),
        new uFunction("get_EdgeThreshold", NULL, (void*)EdgeSwipeAnimation__get_EdgeThreshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EdgeThreshold", NULL, (void*)EdgeSwipeAnimation__set_EdgeThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Enable", NULL, (void*)EdgeSwipeAnimation__Enable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IsEnabled", NULL, (void*)EdgeSwipeAnimation__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)EdgeSwipeAnimation__New2_fn, 0, true, EdgeSwipeAnimation_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)EdgeSwipeAnimation__get_Target_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)EdgeSwipeAnimation__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()));
}

::g::Fuse::Triggers::Trigger_type* EdgeSwipeAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(EdgeSwipeAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.EdgeSwipeAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = EdgeSwipeAnimation_build;
    type->fp_ctor_ = (void*)EdgeSwipeAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))EdgeSwipeAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))EdgeSwipeAnimation__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated EdgeSwipeAnimation() :1483
void EdgeSwipeAnimation__ctor_4_fn(EdgeSwipeAnimation* __this)
{
    __this->ctor_4();
}

// public void Disable() :1537
void EdgeSwipeAnimation__Disable_fn(EdgeSwipeAnimation* __this)
{
    __this->Disable();
}

// public Fuse.Gestures.Edge get_Edge() :1490
void EdgeSwipeAnimation__get_Edge_fn(EdgeSwipeAnimation* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :1491
void EdgeSwipeAnimation__set_Edge_fn(EdgeSwipeAnimation* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_EdgeThreshold() :1497
void EdgeSwipeAnimation__get_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* __retval)
{
    *__retval = __this->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) :1498
void EdgeSwipeAnimation__set_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* value)
{
    __this->EdgeThreshold(*value);
}

// public void Enable() :1532
void EdgeSwipeAnimation__Enable_fn(EdgeSwipeAnimation* __this)
{
    __this->Enable();
}

// public bool get_IsEnabled() :1544
void EdgeSwipeAnimation__get_IsEnabled_fn(EdgeSwipeAnimation* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public generated EdgeSwipeAnimation New() :1483
void EdgeSwipeAnimation__New2_fn(EdgeSwipeAnimation** __retval)
{
    *__retval = EdgeSwipeAnimation::New2();
}

// private void OnProgressChanged(object s, double progress) :1527
void EdgeSwipeAnimation__OnProgressChanged1_fn(EdgeSwipeAnimation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged1(s, *progress);
}

// protected override sealed void OnRooted() :1508
void EdgeSwipeAnimation__OnRooted_fn(EdgeSwipeAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnRooted()");
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[4/*Fuse.Elements.Element*/]);

    if (element == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"EdgeSwipeAn...*/]));

    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    uPtr(__this->_swiper)->Rooted(element);
    uPtr(__this->_swiper)->Seek(0.0);
    uPtr(__this->_swiper)->add_ProgressChanged(uDelegate::New(::TYPES[21/*Uno.Action<object, double>*/], (void*)EdgeSwipeAnimation__OnProgressChanged1_fn, __this));
}

// protected override sealed void OnUnrooted() :1520
void EdgeSwipeAnimation__OnUnrooted_fn(EdgeSwipeAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnUnrooted()");
    uPtr(__this->_swiper)->Unrooted();
    uPtr(__this->_swiper)->remove_ProgressChanged(uDelegate::New(::TYPES[21/*Uno.Action<object, double>*/], (void*)EdgeSwipeAnimation__OnProgressChanged1_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Elements.Element get_Target() :1504
void EdgeSwipeAnimation__get_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Elements.Element value) :1505
void EdgeSwipeAnimation__set_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// public generated EdgeSwipeAnimation() [instance] :1483
void EdgeSwipeAnimation::ctor_4()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", ".ctor()");
    _swiper = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
    ctor_3();
}

// public void Disable() [instance] :1537
void EdgeSwipeAnimation::Disable()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "Disable()");
    uPtr(_swiper)->Disable();
}

// public Fuse.Gestures.Edge get_Edge() [instance] :1490
int EdgeSwipeAnimation::Edge()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_Edge()");
    return uPtr(_swiper)->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :1491
void EdgeSwipeAnimation::Edge(int value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_Edge(Fuse.Gestures.Edge)");
    uPtr(_swiper)->Edge(value);
}

// public float get_EdgeThreshold() [instance] :1497
float EdgeSwipeAnimation::EdgeThreshold()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_EdgeThreshold()");
    return uPtr(_swiper)->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) [instance] :1498
void EdgeSwipeAnimation::EdgeThreshold(float value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_EdgeThreshold(float)");
    uPtr(_swiper)->EdgeThreshold(value);
}

// public void Enable() [instance] :1532
void EdgeSwipeAnimation::Enable()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "Enable()");
    uPtr(_swiper)->Enable();
}

// public bool get_IsEnabled() [instance] :1544
bool EdgeSwipeAnimation::IsEnabled()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_IsEnabled()");
    return uPtr(_swiper)->IsEnabled();
}

// private void OnProgressChanged(object s, double progress) [instance] :1527
void EdgeSwipeAnimation::OnProgressChanged1(uObject* s, double progress)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnProgressChanged(object,double)");
    Seek(progress, 0);
}

// public Fuse.Elements.Element get_Target() [instance] :1504
::g::Fuse::Elements::Element* EdgeSwipeAnimation::Target()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_Target()");
    return uPtr(_swiper)->Target();
}

// public void set_Target(Fuse.Elements.Element value) [instance] :1505
void EdgeSwipeAnimation::Target(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_Target(Fuse.Elements.Element)");
    uPtr(_swiper)->Target(value);
}

// public generated EdgeSwipeAnimation New() [static] :1483
EdgeSwipeAnimation* EdgeSwipeAnimation::New2()
{
    EdgeSwipeAnimation* obj1 = (EdgeSwipeAnimation*)uNew(EdgeSwipeAnimation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract interface ISizeConstraint :1384
// {
uInterfaceType* ISizeConstraint_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Gestures.ISizeConstraint", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_ContentSize", NULL, NULL, offsetof(ISizeConstraint, fp_get_ContentSize), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_TrimSize", NULL, NULL, offsetof(ISizeConstraint, fp_get_TrimSize), false, ::g::Uno::Float2_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class KeepFocusInView :211
// {
static void KeepFocusInView_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    ::TYPES[22] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[23] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeepFocusInView__New3_fn, 0, true, KeepFocusInView_typeof(), 0));
}

::g::Fuse::Node_type* KeepFocusInView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(KeepFocusInView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepFocusInView", options);
    type->SetBase(::g::Fuse::Gestures::KeepInViewCommon_typeof());
    type->fp_build_ = KeepFocusInView_build;
    type->fp_ctor_ = (void*)KeepFocusInView__New3_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated KeepFocusInView() :211
void KeepFocusInView__ctor_4_fn(KeepFocusInView* __this)
{
    __this->ctor_4();
}

// public generated KeepFocusInView New() :211
void KeepFocusInView__New3_fn(KeepFocusInView** __retval)
{
    *__retval = KeepFocusInView::New3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) :227
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    __this->OnGotFocus(s, fga);
}

// private void OnLostFocus(object s, object a) :232
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted() :213
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnRooted()");
    ::g::Fuse::Gestures::KeepInViewCommon__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[22/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[23/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
}

// protected override sealed void OnUnrooted() :220
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[22/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[23/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
    ::g::Fuse::Gestures::KeepInViewCommon__OnUnrooted_fn(__this);
}

// public generated KeepFocusInView() [instance] :211
void KeepFocusInView::ctor_4()
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", ".ctor()");
    ctor_3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) [instance] :227
void KeepFocusInView::OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnGotFocus(object,Fuse.Input.FocusGainedArgs)");
    Target(::g::Fuse::Input::Focus::FocusedVisual());
}

// private void OnLostFocus(object s, object a) [instance] :232
void KeepFocusInView::OnLostFocus(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnLostFocus(object,object)");
    Target(NULL);
}

// public generated KeepFocusInView New() [static] :211
KeepFocusInView* KeepFocusInView::New3()
{
    KeepFocusInView* obj1 = (KeepFocusInView*)uNew(KeepFocusInView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class KeepInView :207
// {
static void KeepInView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeepInView__New3_fn, 0, true, KeepInView_typeof(), 0));
}

::g::Fuse::Node_type* KeepInView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(KeepInView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepInView", options);
    type->SetBase(::g::Fuse::Gestures::KeepInViewCommon_typeof());
    type->fp_build_ = KeepInView_build;
    type->fp_ctor_ = (void*)KeepInView__New3_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated KeepInView() :207
void KeepInView__ctor_4_fn(KeepInView* __this)
{
    __this->ctor_4();
}

// public generated KeepInView New() :207
void KeepInView__New3_fn(KeepInView** __retval)
{
    *__retval = KeepInView::New3();
}

// public generated KeepInView() [instance] :207
void KeepInView::ctor_4()
{
    uStackFrame __("Fuse.Gestures.KeepInView", ".ctor()");
    ctor_3();
}

// public generated KeepInView New() [static] :207
KeepInView* KeepInView::New3()
{
    KeepInView* obj1 = (KeepInView*)uNew(KeepInView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public class KeepInViewCommon :119
// {
static void KeepInViewCommon_build(uType* type)
{
    ::TYPES[24] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _attached), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _rootElement), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Target", NULL, (void*)KeepInViewCommon__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)KeepInViewCommon__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
}

::g::Fuse::Node_type* KeepInViewCommon_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(KeepInViewCommon);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepInViewCommon", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = KeepInViewCommon_build;
    type->fp_ctor_ = (void*)KeepInViewCommon__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal KeepInViewCommon() :121
void KeepInViewCommon__ctor_3_fn(KeepInViewCommon* __this)
{
    __this->ctor_3();
}

// private void AttachElement() :190
void KeepInViewCommon__AttachElement_fn(KeepInViewCommon* __this)
{
    __this->AttachElement();
}

// internal KeepInViewCommon New() :121
void KeepInViewCommon__New2_fn(KeepInViewCommon** __retval)
{
    *__retval = KeepInViewCommon::New2();
}

// protected override void OnRooted() :158
void KeepInViewCommon__OnRooted_fn(KeepInViewCommon* __this)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_rootElement = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[4/*Fuse.Elements.Element*/]);

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->add_Placed(uDelegate::New(::TYPES[24/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->AttachElement();
    }
}

// protected override void OnUnrooted() :170
void KeepInViewCommon__OnUnrooted_fn(KeepInViewCommon* __this)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "OnUnrooted()");

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->remove_Placed(uDelegate::New(::TYPES[24/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->ReleaseElement();
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseElement() :181
void KeepInViewCommon__ReleaseElement_fn(KeepInViewCommon* __this)
{
    __this->ReleaseElement();
}

// public Fuse.Node get_Target() :127
void KeepInViewCommon__get_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Node value) :128
void KeepInViewCommon__set_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// private void Update(object s, object a) :200
void KeepInViewCommon__Update_fn(KeepInViewCommon* __this, uObject* s, uObject* a)
{
    __this->Update(s, a);
}

// internal KeepInViewCommon() [instance] :121
void KeepInViewCommon::ctor_3()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", ".ctor()");
    ctor_2();
}

// private void AttachElement() [instance] :190
void KeepInViewCommon::AttachElement()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "AttachElement()");

    if (_target == NULL)
        return;

    uPtr(_target)->add_Placed(uDelegate::New(::TYPES[24/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = true;
    Update(NULL, NULL);
}

// private void ReleaseElement() [instance] :181
void KeepInViewCommon::ReleaseElement()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "ReleaseElement()");

    if (!_attached)
        return;

    uPtr(_target)->remove_Placed(uDelegate::New(::TYPES[24/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = false;
}

// public Fuse.Node get_Target() [instance] :127
::g::Fuse::Node* KeepInViewCommon::Target()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "get_Target()");
    return _target;
}

// public void set_Target(Fuse.Node value) [instance] :128
void KeepInViewCommon::Target(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "set_Target(Fuse.Node)");
    ::g::Fuse::Elements::Element* prev = _target;
    ReleaseElement();
    ::g::Fuse::Node* v = value;

    while (v != NULL)
    {
        _target = uAs< ::g::Fuse::Elements::Element*>(v, ::TYPES[4/*Fuse.Elements.Element*/]);

        if (_target != NULL)
            break;

        v = uPtr(v)->Parent();
    }

    if (v == NULL)
    {
        if (prev != NULL)
            uPtr(prev)->OnBringIntoView(NULL);

        _target = NULL;
    }
    else
        AttachElement();
}

// private void Update(object s, object a) [instance] :200
void KeepInViewCommon::Update(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "Update(object,object)");

    if (_target != NULL)
        uPtr(_target)->BringIntoView();
}

// internal KeepInViewCommon New() [static] :121
KeepInViewCommon* KeepInViewCommon::New2()
{
    KeepInViewCommon* obj1 = (KeepInViewCommon*)uNew(KeepInViewCommon_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/RangeControls/$.uno
// ----------------------------------------------------------------------------------

// public sealed class LinearRangeBehavior :321
// {
// static LinearRangeBehavior() :321
static void LinearRangeBehavior__cctor_1_fn(uType* __type)
{
    LinearRangeBehavior::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[25/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
}

static void LinearRangeBehavior_build(uType* type)
{
    ::STRINGS[6] = uString::Const("RangeControl");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/RangeControls/$.uno");
    ::STRINGS[4] = uString::Const("OnRooted");
    ::TYPES[25] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[5] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Fuse::Visual_typeof();
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _down), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _initialValue), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _startCoord), 0,
        ::g::Fuse::Controls::RangeControl_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, Control), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::LinearRangeBehavior::_horizontalGesture_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LinearRangeBehavior__New2_fn, 0, true, LinearRangeBehavior_typeof(), 0));
}

::g::Fuse::Node_type* LinearRangeBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(LinearRangeBehavior);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.LinearRangeBehavior", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = LinearRangeBehavior_build;
    type->fp_ctor_ = (void*)LinearRangeBehavior__New2_fn;
    type->fp_cctor_ = LinearRangeBehavior__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))LinearRangeBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))LinearRangeBehavior__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated LinearRangeBehavior() :321
void LinearRangeBehavior__ctor_3_fn(LinearRangeBehavior* __this)
{
    __this->ctor_3();
}

// private Fuse.Controls.RangeControl FindRangeControl() :323
void LinearRangeBehavior__FindRangeControl_fn(LinearRangeBehavior* __this, ::g::Fuse::Controls::RangeControl** __retval)
{
    *__retval = __this->FindRangeControl();
}

// public generated LinearRangeBehavior New() :321
void LinearRangeBehavior__New2_fn(LinearRangeBehavior** __retval)
{
    *__retval = LinearRangeBehavior::New2();
}

// private void OnLostCapture() :356
void LinearRangeBehavior__OnLostCapture_fn(LinearRangeBehavior* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) :383
void LinearRangeBehavior__OnPointerMoved_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    __this->OnPointerMoved(sender, c);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) :367
void LinearRangeBehavior__OnPointerPressed_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    __this->OnPointerPressed(sender, c);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) :399
void LinearRangeBehavior__OnPointerReleased_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    __this->OnPointerReleased(sender, c);
}

// protected override sealed void OnRooted() :332
void LinearRangeBehavior__OnRooted_fn(LinearRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->Control = __this->FindRangeControl();

    if (__this->Control == NULL)
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[6/*"RangeControl"*/], __this->Parent(), __this, ::STRINGS[3/*"/usr/local/...*/], 338, ::STRINGS[4/*"OnRooted"*/]);

    ::g::Fuse::Input::Pointer::AddHandlers(__this->Control, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)LinearRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)LinearRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)LinearRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);
}

// protected override sealed void OnUnrooted() :343
void LinearRangeBehavior__OnUnrooted_fn(LinearRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnUnrooted()");

    if (__this->Control != NULL)
        ::g::Fuse::Input::Pointer::RemoveHandlers(__this->Control, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)LinearRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)LinearRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)LinearRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

    __this->Control = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private double PositionToValue(float2 pos) :423
void LinearRangeBehavior__PositionToValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos, double* __retval)
{
    *__retval = __this->PositionToValue(*pos);
}

// private void UpdateValue(float2 pos) :418
void LinearRangeBehavior__UpdateValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos)
{
    __this->UpdateValue(*pos);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> LinearRangeBehavior::_horizontalGesture_;

// public generated LinearRangeBehavior() [instance] :321
void LinearRangeBehavior::ctor_3()
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", ".ctor()");
    _startCoord = ::g::Uno::Float2__New1(0.0f);
    _initialValue = 0.0;
    _down = -1;
    ctor_2();
}

// private Fuse.Controls.RangeControl FindRangeControl() [instance] :323
::g::Fuse::Controls::RangeControl* LinearRangeBehavior::FindRangeControl()
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "FindRangeControl()");
    ::g::Fuse::Visual* p = Parent();

    while ((p != NULL) && !uIs(p, ::TYPES[5/*Fuse.Controls.RangeControl*/]))
        p = uPtr(p)->Parent();

    return uAs< ::g::Fuse::Controls::RangeControl*>(p, ::TYPES[5/*Fuse.Controls.RangeControl*/]);
}

// private void OnLostCapture() [instance] :356
void LinearRangeBehavior::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnLostCapture()");
    _down = -1;
    uPtr(Control)->Value(_initialValue);
    uPtr(Control)->EndInteraction(this);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) [instance] :383
void LinearRangeBehavior::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsSoftCapturedTo(this))
    {
        if (uPtr(LinearRangeBehavior::_horizontalGesture())->IsWithinBounds(::g::Uno::Float2__op_Subtraction2(uPtr(c)->WindowPoint(), _startCoord)))
            uPtr(c)->TryHardCapture(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this), NULL);
    }
    else if (uPtr(c)->IsHardCapturedTo(this))
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) [instance] :367
void LinearRangeBehavior::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if (_down == -1)
    {
        if (uPtr(c)->TrySoftCapture(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this), NULL))
        {
            ::g::Fuse::Input::Focus::GiveTo(Control);
            uPtr(Control)->BeginInteraction(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this));
            _startCoord = uPtr(c)->WindowPoint();
            _down = c->PointIndex();
            _initialValue = uPtr(Control)->Value();
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) [instance] :399
void LinearRangeBehavior::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsHardCapturedTo(this))
    {
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
        c->ReleaseHardCapture(this);
    }

    if (uPtr(c)->IsSoftCapturedTo(this))
    {
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
        c->ReleaseSoftCapture(this);
    }

    uPtr(Control)->EndInteraction(this);
    _down = -1;
}

// private double PositionToValue(float2 pos) [instance] :423
double LinearRangeBehavior::PositionToValue(::g::Uno::Float2 pos)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "PositionToValue(float2)");
    return (double)(pos.X / uPtr(Control)->ActualSize().X);
}

// private void UpdateValue(float2 pos) [instance] :418
void LinearRangeBehavior::UpdateValue(::g::Uno::Float2 pos)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "UpdateValue(float2)");
    uPtr(Control)->RelativeValue(PositionToValue(pos));
}

// public generated LinearRangeBehavior New() [static] :321
LinearRangeBehavior* LinearRangeBehavior::New2()
{
    LinearRangeBehavior* obj1 = (LinearRangeBehavior*)uNew(LinearRangeBehavior_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class LongPressed :259
// {
static void LongPressed_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[18] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[26] = ::g::Fuse::Gestures::LongPressedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::LongPressedHandler_typeof(), offsetof(::g::Fuse::Gestures::LongPressed, Handler1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Handler", NULL, (void*)LongPressed__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::LongPressedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)LongPressed__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::LongPressedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)LongPressed__New2_fn, 0, true, LongPressed_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* LongPressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(LongPressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.LongPressed", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_build_ = LongPressed_build;
    type->fp_ctor_ = (void*)LongPressed__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))LongPressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))LongPressed__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated LongPressed() :259
void LongPressed__ctor_5_fn(LongPressed* __this)
{
    __this->ctor_5();
}

// public generated void add_Handler(Fuse.Gestures.LongPressedHandler value) :261
void LongPressed__add_Handler_fn(LongPressed* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.LongPressedHandler value) :261
void LongPressed__remove_Handler_fn(LongPressed* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated LongPressed New() :259
void LongPressed__New2_fn(LongPressed** __retval)
{
    *__retval = LongPressed::New2();
}

// private void OnLongPressed(Fuse.Input.PointerEventArgs args, int count) :275
void LongPressed__OnLongPressed_fn(LongPressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count)
{
    __this->OnLongPressed(args, *count);
}

// protected override sealed void OnRooted() :263
void LongPressed__OnRooted_fn(LongPressed* __this)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_LongPressedEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)LongPressed__OnLongPressed_fn, __this));
}

// protected override sealed void OnUnrooted() :269
void LongPressed__OnUnrooted_fn(LongPressed* __this)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_LongPressedEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)LongPressed__OnLongPressed_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public generated LongPressed() [instance] :259
void LongPressed::ctor_5()
{
    uStackFrame __("Fuse.Gestures.LongPressed", ".ctor()");
    ctor_4();
}

// public generated void add_Handler(Fuse.Gestures.LongPressedHandler value) [instance] :261
void LongPressed::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "add_Handler(Fuse.Gestures.LongPressedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[26/*Fuse.Gestures.LongPressedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.LongPressedHandler value) [instance] :261
void LongPressed::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "remove_Handler(Fuse.Gestures.LongPressedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[26/*Fuse.Gestures.LongPressedHandler*/]);
}

// private void OnLongPressed(Fuse.Input.PointerEventArgs args, int count) [instance] :275
void LongPressed::OnLongPressed(::g::Fuse::Input::PointerEventArgs* args, int count)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnLongPressed(Fuse.Input.PointerEventArgs,int)");
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::LongPressedArgs*)::g::Fuse::Gestures::LongPressedArgs::New3(args, Parent()));
}

// public generated LongPressed New() [static] :259
LongPressed* LongPressed::New2()
{
    LongPressed* obj1 = (LongPressed*)uNew(LongPressed_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class LongPressedArgs :248
// {
static void LongPressedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LongPressedArgs__New3_fn, 0, true, LongPressedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* LongPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LongPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.LongPressedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->fp_build_ = LongPressedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public LongPressedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :250
void LongPressedArgs__ctor_4_fn(LongPressedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public LongPressedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :250
void LongPressedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, LongPressedArgs** __retval)
{
    *__retval = LongPressedArgs::New3(args, visual);
}

// public LongPressedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :250
void LongPressedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.LongPressedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public LongPressedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :250
LongPressedArgs* LongPressedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    LongPressedArgs* obj1 = (LongPressedArgs*)uNew(LongPressedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public delegate void LongPressedHandler(object sender, Fuse.Gestures.LongPressedArgs args) :256
uDelegateType* LongPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.LongPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::LongPressedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// private enum Trackball.MoveMode :1147
uEnumType* Trackball__MoveMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Trackball.MoveMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Stop", 0LL,
        "Attraction", 1LL,
        "Friction", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.29.22/$.uno
// --------------------------------------------------------------------

// private enum Scroller.MoveUserFlags :452
uEnumType* Scroller__MoveUserFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Scroller.MoveUserFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class PanGesture :299
// {
static void PanGesture_build(uType* type)
{
    ::TYPES[27] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[28] = ::g::Fuse::Gestures::Internal::TwoFingerTranslateHandler_typeof();
    ::TYPES[29] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[30] = ::g::Fuse::Gestures::ISizeConstraint_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface3));
    type->SetFields(17,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _constrainElement), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _invTransform), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _screenPrevTranslation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _screenStartTranslation), 0,
        ::g::Fuse::Gestures::ISizeConstraint_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _sizeConstraint), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _startTransform), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _startTranslation), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_ConstrainElement", NULL, (void*)PanGesture__get_ConstrainElement_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_ConstrainElement", NULL, (void*)PanGesture__set_ConstrainElement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("get_Constraint", NULL, (void*)PanGesture__get_Constraint_fn, 0, false, ::g::Fuse::Gestures::ISizeConstraint_typeof(), 0),
        new uFunction("set_Constraint", NULL, (void*)PanGesture__set_Constraint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ISizeConstraint_typeof()),
        new uFunction(".ctor", NULL, (void*)PanGesture__New2_fn, 0, true, PanGesture_typeof(), 1, ::g::Fuse::Elements::InteractiveTransform_typeof()));
}

::g::Fuse::Gestures::TransformGesture_type* PanGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 24;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(PanGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.PanGesture", options);
    type->SetBase(::g::Fuse::Gestures::TransformGesture_typeof());
    type->fp_build_ = PanGesture_build;
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PanGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PanGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnUpdate_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PanGesture(Fuse.Elements.InteractiveTransform target) :302
void PanGesture__ctor_4_fn(PanGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_4(target);
}

// public Fuse.Elements.Element get_ConstrainElement() :412
void PanGesture__get_ConstrainElement_fn(PanGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->ConstrainElement();
}

// public void set_ConstrainElement(Fuse.Elements.Element value) :413
void PanGesture__set_ConstrainElement_fn(PanGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->ConstrainElement(value);
}

// public Fuse.Gestures.ISizeConstraint get_Constraint() :422
void PanGesture__get_Constraint_fn(PanGesture* __this, uObject** __retval)
{
    *__retval = __this->Constraint();
}

// public void set_Constraint(Fuse.Gestures.ISizeConstraint value) :423
void PanGesture__set_Constraint_fn(PanGesture* __this, uObject* value)
{
    __this->Constraint(value);
}

// public PanGesture New(Fuse.Elements.InteractiveTransform target) :302
void PanGesture__New2_fn(::g::Fuse::Elements::InteractiveTransform* target, PanGesture** __retval)
{
    *__retval = PanGesture::New2(target);
}

// protected override sealed void OnEnded() :338
void PanGesture__OnEnded_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnEnded()");
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnRooted() :306
void PanGesture__OnRooted_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnRooted()");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this);
    uPtr(__this->Impl)->add_Translated(uDelegate::New(::TYPES[28/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/], (void*)PanGesture__OnTranslated_fn, __this));
}

// protected override sealed void OnStarted() :323
void PanGesture__OnStarted_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnStarted()");
    ::g::Uno::Float4 ind1;
    __this->_startTranslation = uPtr(__this->Target())->Translation();
    __this->_startTransform = ::g::Fuse::FastMatrix::Identity();
    uPtr(__this->Target())->AppendRotationScale(__this->_startTransform);
    __this->_invTransform = ::g::Uno::Matrix::Invert2(uPtr(__this->_startTransform)->Matrix());
    __this->_screenStartTranslation = (__this->_screenPrevTranslation = (ind1 = ::g::Uno::Vector::Transform1(__this->_startTranslation, uPtr(__this->_startTransform)->Matrix()), ::g::Uno::Float2__New2(ind1.X, ind1.Y)));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(__this->_screenStartTranslation));
    __this->UpdateConstraint();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
    __this->CheckNeedUpdate();
}

// private void OnTranslated(float2 dist) :351
void PanGesture__OnTranslated_fn(PanGesture* __this, ::g::Uno::Float2* dist)
{
    __this->OnTranslated(*dist);
}

// protected override sealed void OnUnrooted() :312
void PanGesture__OnUnrooted_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Translated(uDelegate::New(::TYPES[28/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/], (void*)PanGesture__OnTranslated_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this);
}

// protected override sealed void OnUpdate() :363
void PanGesture__OnUpdate_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnUpdate()");
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float2 ret6;
    uPtr(__this->Target())->Translation((ind3 = ::g::Uno::Vector::Transform1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret6), ret6), __this->_invTransform), ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
}

// internal float4 get_TranslationConstraint() :371
void PanGesture__get_TranslationConstraint_fn(PanGesture* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TranslationConstraint();
}

// private void UpdateConstraint() :344
void PanGesture__UpdateConstraint_fn(PanGesture* __this)
{
    __this->UpdateConstraint();
}

// public PanGesture(Fuse.Elements.InteractiveTransform target) [instance] :302
void PanGesture::ctor_4(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.PanGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    ctor_3(target);
}

// public Fuse.Elements.Element get_ConstrainElement() [instance] :412
::g::Fuse::Elements::Element* PanGesture::ConstrainElement()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "get_ConstrainElement()");
    return _constrainElement;
}

// public void set_ConstrainElement(Fuse.Elements.Element value) [instance] :413
void PanGesture::ConstrainElement(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "set_ConstrainElement(Fuse.Elements.Element)");
    _constrainElement = value;
}

// public Fuse.Gestures.ISizeConstraint get_Constraint() [instance] :422
uObject* PanGesture::Constraint()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "get_Constraint()");
    return _sizeConstraint;
}

// public void set_Constraint(Fuse.Gestures.ISizeConstraint value) [instance] :423
void PanGesture::Constraint(uObject* value)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "set_Constraint(Fuse.Gestures.ISizeConstraint)");
    _sizeConstraint = value;
}

// private void OnTranslated(float2 dist) [instance] :351
void PanGesture::OnTranslated(::g::Uno::Float2 dist)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnTranslated(float2)");
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float2 ret5;
    UpdateConstraint();
    ::g::Uno::Float2 screen = ::g::Uno::Float2__op_Addition2(_screenStartTranslation, dist);
    ::g::Uno::Float2 step = ::g::Uno::Float2__op_Subtraction2(screen, _screenPrevTranslation);
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), step);
    _screenPrevTranslation = screen;
    uPtr(Target())->Translation((ind2 = ::g::Uno::Vector::Transform1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(Region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret5), ret5), _invTransform), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
}

// internal float4 get_TranslationConstraint() [instance] :371
::g::Uno::Float4 PanGesture::TranslationConstraint()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "get_TranslationConstraint()");
    bool hasSize = false;
    ::g::Uno::Float2 size = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 trimSize = ::g::Uno::Float2__New1(0.0f);

    if (_constrainElement != NULL)
    {
        size = uPtr(_constrainElement)->ActualSize();
        hasSize = true;
    }

    if (_sizeConstraint != NULL)
    {
        size = ::g::Fuse::Gestures::ISizeConstraint::ContentSize(uInterface(uPtr(_sizeConstraint), ::TYPES[30/*Fuse.Gestures.ISizeConstraint*/]));
        trimSize = ::g::Fuse::Gestures::ISizeConstraint::TrimSize(uInterface(uPtr(_sizeConstraint), ::TYPES[30/*Fuse.Gestures.ISizeConstraint*/]));
        hasSize = true;
    }

    if (hasSize)
    {
        ::g::Fuse::FastMatrix* trans = ::g::Fuse::FastMatrix::Identity();
        uPtr(Target())->AppendRotationScale(trans);
        ::g::Uno::Rect rect = ::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_UnaryNegation(size), 2.0f), size);
        ::g::Uno::Rect bounds = ::g::Uno::Rect__Transform(rect, uPtr(trans)->Matrix());
        ::g::Uno::Float2 full = bounds.Maximum();
        ::g::Uno::Float2 over = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(full, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(size, trimSize), 2.0f)));
        ::g::Uno::Float4 c = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(over), over);
        return c;
    }

    return ::g::Uno::Float4__New2(-FLT_INF, -FLT_INF, FLT_INF, FLT_INF);
}

// private void UpdateConstraint() [instance] :344
void PanGesture::UpdateConstraint()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "UpdateConstraint()");
    ::g::Uno::Float4 c = TranslationConstraint();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(c.X, c.Y));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(c.Z, c.W));
}

// public PanGesture New(Fuse.Elements.InteractiveTransform target) [static] :302
PanGesture* PanGesture::New2(::g::Fuse::Elements::InteractiveTransform* target)
{
    PanGesture* obj4 = (PanGesture*)uNew(PanGesture_typeof());
    obj4->ctor_4(target);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Pressed :444
// {
static void Pressed_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pressed__New2_fn, 0, true, Pressed_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* Pressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 27;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Pressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Pressed", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = Pressed_build;
    type->fp_ctor_ = (void*)Pressed__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Pressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Pressed__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Pressed() :444
void Pressed__ctor_4_fn(Pressed* __this)
{
    __this->ctor_4();
}

// public generated Pressed New() :444
void Pressed__New2_fn(Pressed** __retval)
{
    *__retval = Pressed::New2();
}

// private void OnPressed(object s, object a) :458
void Pressed__OnPressed_fn(Pressed* __this, uObject* s, uObject* a)
{
    __this->OnPressed(s, a);
}

// protected override sealed void OnRooted() :446
void Pressed__OnRooted_fn(Pressed* __this)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)Pressed__OnPressed_fn, __this));
}

// protected override sealed void OnUnrooted() :452
void Pressed__OnUnrooted_fn(Pressed* __this)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)Pressed__OnPressed_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Pressed() [instance] :444
void Pressed::ctor_4()
{
    uStackFrame __("Fuse.Gestures.Pressed", ".ctor()");
    ctor_3();
}

// private void OnPressed(object s, object a) [instance] :458
void Pressed::OnPressed(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnPressed(object,object)");
    Pulse();
}

// public generated Pressed New() [static] :444
Pressed* Pressed::New2()
{
    Pressed* obj1 = (Pressed*)uNew(Pressed_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Released :560
// {
static void Released_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Released__New2_fn, 0, true, Released_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* Released_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 27;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Released);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Released", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = Released_build;
    type->fp_ctor_ = (void*)Released__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Released__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Released__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Released() :560
void Released__ctor_4_fn(Released* __this)
{
    __this->ctor_4();
}

// public generated Released New() :560
void Released__New2_fn(Released** __retval)
{
    *__retval = Released::New2();
}

// private void OnReleased(object s, object a) :574
void Released__OnReleased_fn(Released* __this, uObject* s, uObject* a)
{
    __this->OnReleased(s, a);
}

// protected override sealed void OnRooted() :562
void Released__OnRooted_fn(Released* __this)
{
    uStackFrame __("Fuse.Gestures.Released", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)Released__OnReleased_fn, __this));
}

// protected override sealed void OnUnrooted() :568
void Released__OnUnrooted_fn(Released* __this)
{
    uStackFrame __("Fuse.Gestures.Released", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)Released__OnReleased_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Released() [instance] :560
void Released::ctor_4()
{
    uStackFrame __("Fuse.Gestures.Released", ".ctor()");
    ctor_3();
}

// private void OnReleased(object s, object a) [instance] :574
void Released::OnReleased(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.Released", "OnReleased(object,object)");
    Pulse();
}

// public generated Released New() [static] :560
Released* Released::New2()
{
    Released* obj1 = (Released*)uNew(Released_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class RotateGesture :596
// {
static void RotateGesture_build(uType* type)
{
    ::TYPES[27] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[31] = ::g::Fuse::Gestures::Internal::TwoFingerRotateHandler_typeof();
    ::TYPES[29] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface3));
    type->SetFields(17,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::RotateGesture, _startRotation), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::RotateGesture, _Step), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)RotateGesture__New2_fn, 0, true, RotateGesture_typeof(), 1, ::g::Fuse::Elements::InteractiveTransform_typeof()),
        new uFunction("get_Step", NULL, (void*)RotateGesture__get_Step_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Step", NULL, (void*)RotateGesture__set_Step_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_StepDegrees", NULL, (void*)RotateGesture__get_StepDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StepDegrees", NULL, (void*)RotateGesture__set_StepDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Gestures::TransformGesture_type* RotateGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(RotateGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.RotateGesture", options);
    type->SetBase(::g::Fuse::Gestures::TransformGesture_typeof());
    type->fp_build_ = RotateGesture_build;
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RotateGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RotateGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnUpdate_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public RotateGesture(Fuse.Elements.InteractiveTransform target) :599
void RotateGesture__ctor_4_fn(RotateGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_4(target);
}

// public RotateGesture New(Fuse.Elements.InteractiveTransform target) :599
void RotateGesture__New2_fn(::g::Fuse::Elements::InteractiveTransform* target, RotateGesture** __retval)
{
    *__retval = RotateGesture::New2(target);
}

// protected override sealed void OnEnded() :632
void RotateGesture__OnEnded_fn(RotateGesture* __this)
{
}

// protected override sealed void OnRooted() :613
void RotateGesture__OnRooted_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnRooted()");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this);
    uPtr(__this->Impl)->add_Rotated(uDelegate::New(::TYPES[31/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/], (void*)RotateGesture__OnRotated_fn, __this));
}

// private void OnRotated(float angle) :641
void RotateGesture__OnRotated_fn(RotateGesture* __this, float* angle)
{
    __this->OnRotated(*angle);
}

// protected override sealed void OnStarted() :626
void RotateGesture__OnStarted_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnStarted()");
    __this->_startRotation = uPtr(__this->Target())->Rotation();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(__this->Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(__this->_startRotation, 0.0f));
}

// protected override sealed void OnUnrooted() :619
void RotateGesture__OnUnrooted_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Rotated(uDelegate::New(::TYPES[31/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/], (void*)RotateGesture__OnRotated_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this);
}

// protected override sealed void OnUpdate() :636
void RotateGesture__OnUpdate_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnUpdate()");
    ::g::Uno::Float2 ret2;
    uPtr(__this->Target())->Rotation((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret2), ret2).X);
}

// public generated float get_Step() :605
void RotateGesture__get_Step_fn(RotateGesture* __this, float* __retval)
{
    *__retval = __this->Step();
}

// public generated void set_Step(float value) :605
void RotateGesture__set_Step_fn(RotateGesture* __this, float* value)
{
    __this->Step(*value);
}

// public float get_StepDegrees() :609
void RotateGesture__get_StepDegrees_fn(RotateGesture* __this, float* __retval)
{
    *__retval = __this->StepDegrees();
}

// public void set_StepDegrees(float value) :610
void RotateGesture__set_StepDegrees_fn(RotateGesture* __this, float* value)
{
    __this->StepDegrees(*value);
}

// public RotateGesture(Fuse.Elements.InteractiveTransform target) [instance] :599
void RotateGesture::ctor_4(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    ctor_3(target);
    Region = (uObject*)::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::CreateRadians();
}

// private void OnRotated(float angle) [instance] :641
void RotateGesture::OnRotated(float angle)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnRotated(float)");
    float q = _startRotation + angle;

    if (Step() > 0.0f)
    {
        float s = ::g::Uno::Math::Round2(q / Step()) * Step();
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(s, 0.0f));
        CheckNeedUpdate();
    }
    else
        uPtr(Target())->Rotation(q);
}

// public generated float get_Step() [instance] :605
float RotateGesture::Step()
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "get_Step()");
    return _Step;
}

// public generated void set_Step(float value) [instance] :605
void RotateGesture::Step(float value)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "set_Step(float)");
    _Step = value;
}

// public float get_StepDegrees() [instance] :609
float RotateGesture::StepDegrees()
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "get_StepDegrees()");
    return ::g::Uno::Math::RadiansToDegrees1(Step());
}

// public void set_StepDegrees(float value) [instance] :610
void RotateGesture::StepDegrees(float value)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "set_StepDegrees(float)");
    Step(::g::Uno::Math::DegreesToRadians1(value));
}

// public RotateGesture New(Fuse.Elements.InteractiveTransform target) [static] :599
RotateGesture* RotateGesture::New2(::g::Fuse::Elements::InteractiveTransform* target)
{
    RotateGesture* obj1 = (RotateGesture*)uNew(RotateGesture_typeof());
    obj1->ctor_4(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.29.22/$.uno
// --------------------------------------------------------------------

// public sealed class ScrollableGoto :51
// {
static void ScrollableGoto_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Use ScrollTo instead, it has the same interface");
    ::STRINGS[8] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.29.22/$.uno");
    ::STRINGS[9] = uString::Const(".ctor");
    ::TYPES[0] = uObject_typeof();
    type->SetFields(13);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollableGoto__New3_fn, 0, true, ScrollableGoto_typeof(), 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ScrollableGoto);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollableGoto", options);
    type->SetBase(::g::Fuse::Gestures::ScrollTo_typeof());
    type->fp_build_ = ScrollableGoto_build;
    type->fp_ctor_ = (void*)ScrollableGoto__New3_fn;
    return type;
}

// public ScrollableGoto() :54
void ScrollableGoto__ctor_3_fn(ScrollableGoto* __this)
{
    __this->ctor_3();
}

// public ScrollableGoto New() :54
void ScrollableGoto__New3_fn(ScrollableGoto** __retval)
{
    *__retval = ScrollableGoto::New3();
}

// public ScrollableGoto() [instance] :54
void ScrollableGoto::ctor_3()
{
    uStackFrame __("Fuse.Gestures.ScrollableGoto", ".ctor()");
    ctor_2();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[7/*"Use ScrollT...*/], this, ::STRINGS[8/*"/usr/local/...*/], 56, ::STRINGS[9/*".ctor"*/]);
}

// public ScrollableGoto New() [static] :54
ScrollableGoto* ScrollableGoto::New3()
{
    ScrollableGoto* obj1 = (ScrollableGoto*)uNew(ScrollableGoto_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.29.22/$.uno
// --------------------------------------------------------------------

// public class Scroller :77
// {
// static Scroller() :77
static void Scroller__cctor_1_fn(uType* __type)
{
    Scroller::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[25/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    Scroller::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[25/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
    Scroller::_scrollPositionName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"ScrollPosit...*/]);
}

static void Scroller_build(uType* type)
{
    ::STRINGS[10] = uString::Const("ScrollPosition");
    ::STRINGS[11] = uString::Const("Scroller can only be used in a ScrollView");
    ::STRINGS[12] = uString::Const("Invalid tear-down of pointer events");
    ::STRINGS[13] = uString::Const("Motion should not be changed post-rooting");
    ::STRINGS[8] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.29.22/$.uno");
    ::STRINGS[14] = uString::Const("set_Motion");
    ::TYPES[25] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[32] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[33] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[29] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[27] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[34] = ::g::Uno::Int_typeof();
    ::TYPES[35] = ::g::Fuse::Motion::Simulation::SampleFlags_typeof();
    ::TYPES[1] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[36] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[37] = ::g::Fuse::RequestBringIntoViewHandler_typeof();
    ::TYPES[38] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[3] = ::g::Fuse::Visual_typeof();
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[39] = ::g::Fuse::Motion::MotionConfig_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Scroller_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Scroller_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Scroller_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Scroller_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Scroller_type, interface4));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _delayStart), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _isHardCapture), 0,
        ::g::Fuse::Motion::MotionConfig_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _motion), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pendingBringIntoView), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerListening), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevPos), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevTime), 0,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _region), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _scrollable), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureCurrent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _startPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _updateFirstFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _userScroll), 0,
        ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Gestures::Scroller, _velocity), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_scrollPositionName_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_verticalGesture_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("CheckLimits", NULL, (void*)Scroller__CheckLimits_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_DelayStart", NULL, (void*)Scroller__get_DelayStart_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_DelayStart", NULL, (void*)Scroller__set_DelayStart_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Goto", NULL, (void*)Scroller__Goto_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Motion", NULL, (void*)Scroller__get_Motion_fn, 0, false, ::g::Fuse::Motion::MotionConfig_typeof(), 0),
        new uFunction("set_Motion", NULL, (void*)Scroller__set_Motion_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionConfig_typeof()),
        new uFunction(".ctor", NULL, (void*)Scroller__New2_fn, 0, true, Scroller_typeof(), 0),
        new uFunction("get_OverflowExtent", NULL, (void*)Scroller__get_OverflowExtent_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_UserScroll", NULL, (void*)Scroller__get_UserScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UserScroll", NULL, (void*)Scroller__set_UserScroll_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Scroller_type* Scroller_typeof()
{
    static uSStrong<Scroller_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 34;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Scroller);
    options.TypeSize = sizeof(Scroller_type);
    type = (Scroller_type*)uClassType::New("Fuse.Gestures.Scroller", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = Scroller_build;
    type->fp_ctor_ = (void*)Scroller__New2_fn;
    type->fp_cctor_ = Scroller__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Scroller__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Scroller__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Scroller() :77
void Scroller__ctor_3_fn(Scroller* __this)
{
    __this->ctor_3();
}

// public void CheckLimits() :361
void Scroller__CheckLimits_fn(Scroller* __this)
{
    __this->CheckLimits();
}

// private void CheckNeedUpdated([bool off]) :196
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public bool get_DelayStart() :107
void Scroller__get_DelayStart_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->DelayStart();
}

// public void set_DelayStart(bool value) :108
void Scroller__set_DelayStart_fn(Scroller* __this, bool* value)
{
    __this->DelayStart(*value);
}

// private void EndInteraction() :272
void Scroller__EndInteraction_fn(Scroller* __this)
{
    __this->EndInteraction();
}

// private float2 FromWindow(float2 p) :257
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// public void Goto(float2 position) :388
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) :292
void Scroller__HardCapture_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval)
{
    *__retval = __this->HardCapture(args);
}

// public Fuse.Motion.MotionConfig get_Motion() :85
void Scroller__get_Motion_fn(Scroller* __this, ::g::Fuse::Motion::MotionConfig** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.MotionConfig value) :91
void Scroller__set_Motion_fn(Scroller* __this, ::g::Fuse::Motion::MotionConfig* value)
{
    __this->Motion(value);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time) :459
void Scroller__MoveUser_fn(Scroller* __this, int* flags, double* time)
{
    __this->MoveUser(*flags, *time);
}

// public generated Scroller New() :77
void Scroller__New2_fn(Scroller** __retval)
{
    *__retval = Scroller::New2();
}

// private void OnLostCapture() :262
void Scroller__OnLostCapture_fn(Scroller* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :301
void Scroller__OnPointerMoved_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :229
void Scroller__OnPointerPressed_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :338
void Scroller__OnPointerReleased_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) :370
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    __this->OnRequestBringIntoView(sender, args);
}

// protected override sealed void OnRooted() :113
void Scroller__OnRooted_fn(Scroller* __this)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_scrollable = uAs< ::g::Fuse::Controls::ScrollView*>(__this->Parent(), ::TYPES[36/*Fuse.Controls.ScrollView*/]);

    if (__this->_scrollable == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"Scroller ca...*/]));

    uPtr(__this->_scrollable)->_scroller = __this;
    uPtr(__this->_scrollable)->add_RequestBringIntoView(uDelegate::New(::TYPES[37/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->AddPropertyListener((uObject*)__this);
    __this->_region = uPtr(__this->Motion())->AcquireSimulation();
    __this->UpdatePointerEvents(false);
}

// protected override sealed void OnUnrooted() :128
void Scroller__OnUnrooted_fn(Scroller* __this)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnUnrooted()");
    uPtr(__this->_scrollable)->remove_RequestBringIntoView(uDelegate::New(::TYPES[37/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->RemovePropertyListener((uObject*)__this);
    uPtr(__this->_scrollable)->_scroller = NULL;

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, __this), 0);
    }

    __this->UpdatePointerEvents(true);
    __this->_scrollable = NULL;

    if (__this->_region != NULL)
    {
        uPtr(__this->Motion())->ReleaseSimulation();
        __this->_region = NULL;
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdated() :417
void Scroller__OnUpdated_fn(Scroller* __this)
{
    __this->OnUpdated();
}

// public float2 get_OverflowExtent() :486
void Scroller__get_OverflowExtent_fn(Scroller* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// private void PerformBringIntoView() :378
void Scroller__PerformBringIntoView_fn(Scroller* __this)
{
    __this->PerformBringIntoView();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector prop) :436
void Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn(Scroller* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if (!__this->IsRootingCompleted())
        return;

    if ((sender == __this->_scrollable) && ::g::Uno::UX::Selector__op_Equality(prop_, Scroller::_scrollPositionName()))
    {
        if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
            return;

        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(__this->_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), uPtr(__this->_scrollable)->ScrollPosition());
        __this->CheckNeedUpdated(true);
    }
}

// private void UpdatePointerEvents([bool forceOff]) :168
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff)
{
    __this->UpdatePointerEvents(*forceOff);
}

// private void UpdateScrollMax() :405
void Scroller__UpdateScrollMax_fn(Scroller* __this)
{
    __this->UpdateScrollMax();
}

// public bool get_UserScroll() :155
void Scroller__get_UserScroll_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->UserScroll();
}

// public void set_UserScroll(bool value) :156
void Scroller__set_UserScroll_fn(Scroller* __this, bool* value)
{
    __this->UserScroll(*value);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_horizontalGesture_;
::g::Uno::UX::Selector Scroller::_scrollPositionName_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_verticalGesture_;

// public generated Scroller() [instance] :77
void Scroller::ctor_3()
{
    uStackFrame __("Fuse.Gestures.Scroller", ".ctor()");
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[32/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
    _delayStart = true;
    _userScroll = true;
    _down = -1;
    ctor_2();
}

// public void CheckLimits() [instance] :361
void Scroller::CheckLimits()
{
    uStackFrame __("Fuse.Gestures.Scroller", "CheckLimits()");
    UpdateScrollMax();

    if ((_region != NULL) && ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[33/*Fuse.Motion.Simulation.Simulation*/])))
        Goto(uPtr(_scrollable)->ScrollPosition());
}

// private void CheckNeedUpdated([bool off]) [instance] :196
void Scroller::CheckNeedUpdated(bool off)
{
    uStackFrame __("Fuse.Gestures.Scroller", "CheckNeedUpdated([bool])");
    bool needUpdated = (_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[33/*Fuse.Motion.Simulation.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = true;
        _updateFirstFrame = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public bool get_DelayStart() [instance] :107
bool Scroller::DelayStart()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_DelayStart()");
    return _delayStart;
}

// public void set_DelayStart(bool value) [instance] :108
void Scroller::DelayStart(bool value)
{
    uStackFrame __("Fuse.Gestures.Scroller", "set_DelayStart(bool)");
    _delayStart = value;
}

// private void EndInteraction() [instance] :272
void Scroller::EndInteraction()
{
    uStackFrame __("Fuse.Gestures.Scroller", "EndInteraction()");
    _down = -1;
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    CheckNeedUpdated(false);
    uPtr(_scrollable)->EndInteraction(this);
}

// private float2 FromWindow(float2 p) [instance] :257
::g::Uno::Float2 Scroller::FromWindow(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Gestures.Scroller", "FromWindow(float2)");
    return uPtr(uPtr(_scrollable)->Parent())->WindowToLocal(p);
}

// public void Goto(float2 position) [instance] :388
void Scroller::Goto(::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Goto(float2)");

    if (_scrollable == NULL)
        return;

    position = uPtr(_scrollable)->Constrain(position);
    UpdateScrollMax();

    if (_region != NULL)
    {
        if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[33/*Fuse.Motion.Simulation.Simulation*/])))
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));

        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), position);
    }

    CheckNeedUpdated(false);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) [instance] :292
bool Scroller::HardCapture(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "HardCapture(Fuse.Input.PointerEventArgs)");
    _isHardCapture = uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

    if (!_isHardCapture)
        OnLostCapture();

    uPtr(_scrollable)->BeginInteraction(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this));
    return _isHardCapture;
}

// public Fuse.Motion.MotionConfig get_Motion() [instance] :85
::g::Fuse::Motion::MotionConfig* Scroller::Motion()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_Motion()");

    if (_motion == NULL)
        _motion = ::g::Fuse::Motion::ScrollViewMotion::New2();

    return _motion;
}

// public void set_Motion(Fuse.Motion.MotionConfig value) [instance] :91
void Scroller::Motion(::g::Fuse::Motion::MotionConfig* value)
{
    uStackFrame __("Fuse.Gestures.Scroller", "set_Motion(Fuse.Motion.MotionConfig)");
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(::STRINGS[13/*"Motion shou...*/], this, ::STRINGS[8/*"/usr/local/...*/], 95, ::STRINGS[14/*"set_Motion"*/]);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time) [instance] :459
void Scroller::MoveUser(int flags, double time)
{
    uStackFrame __("Fuse.Gestures.Scroller", "MoveUser(Fuse.Gestures.Scroller.MoveUserFlags,double)");
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(FromWindow(_prevPos), FromWindow(_pointerPos));

    if ((flags & 2) == 2)
        diff = ::g::Uno::Float2__New1(0.0f);

    _prevPos = _pointerPos;
    double elapsed = time - _prevTime;
    _prevTime = time;

    if ((flags & 1) == 1)
    {
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), diff);
    }

    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef((double)(float)elapsed), uCRef<int>((!((flags & 1) == 1) ? 1 : 0) | (((flags & 2) == 2) ? 2 : 0)));
}

// private void OnLostCapture() [instance] :262
void Scroller::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnLostCapture()");

    if (IsRootingCompleted())
    {
        EndInteraction();

        if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
            ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    }
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :301
void Scroller::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    if (!::g::Fuse::Input::Pointer::IsPressed1(_down))
        OnLostCapture();

    if (!_isHardCapture)
    {
        _softCaptureCurrent = uPtr(args)->WindowPoint();
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_softCaptureCurrent, _softCaptureStart);

        if (uPtr(_scrollable)->AllowedScrollDirections() == 15)
        {
            if (::g::Uno::Vector::Length(diff) > 10.0f)
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 3)
        {
            if (uPtr(Scroller::_horizontalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 12)
        {
            if (uPtr(Scroller::_verticalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }
    }

    _pointerPos = uPtr(args)->WindowPoint();
    MoveUser((!_delayStart || _isHardCapture) ? 1 : 0, args->Timestamp());
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :229
void Scroller::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");
    ::g::Uno::Float2 ret2;

    if (_down == -1)
    {
        bool captured = false;
        _isHardCapture = false;

        if (::g::Uno::Vector::Length((::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret2), ret2)) > 100.0f)
            captured = HardCapture(args);
        else
            captured = uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

        if (captured)
        {
            _softCaptureStart = (_softCaptureCurrent = uPtr(args)->WindowPoint());
            _down = args->PointIndex();
            _pointerPos = args->WindowPoint();
            _prevPos = (_startPos = _pointerPos);
            _prevTime = args->Timestamp();
            ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(0.0));
            ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
            CheckNeedUpdated(false);
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :338
void Scroller::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");
    ::g::Uno::Float2 ret3;

    if (_down == uPtr(args)->PointIndex())
    {
        if (_delayStart && !_isHardCapture)
        {
            OnLostCapture();
            return;
        }

        if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
        {
            _pointerPos = uPtr(args)->WindowPoint();
            MoveUser(3, args->Timestamp());
            ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__op_UnaryNegation(uPtr(_scrollable)->ConstrainExtents((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3))));
        }

        EndInteraction();
    }
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) [instance] :370
void Scroller::OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnRequestBringIntoView(object,Fuse.RequestBringIntoViewArgs)");
    _pendingBringIntoView = uPtr(args)->Visual();
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Scroller__PerformBringIntoView_fn, this), 1, ::g::Fuse::LayoutPriority::Post());
}

// private void OnUpdated() [instance] :417
void Scroller::OnUpdated()
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnUpdated()");
    ::g::Uno::Float2 ret4;

    if (_updateFirstFrame)
    {
        _updateFirstFrame = false;
        return;
    }

    UpdateScrollMax();
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::TYPES[33/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    uPtr(_scrollable)->SetScrollPosition((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret4), ret4), (uObject*)this);
    CheckNeedUpdated(true);
}

// public float2 get_OverflowExtent() [instance] :486
::g::Uno::Float2 Scroller::OverflowExtent()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_OverflowExtent()");
    return uPtr(Motion())->OverflowExtent();
}

// private void PerformBringIntoView() [instance] :378
void Scroller::PerformBringIntoView()
{
    uStackFrame __("Fuse.Gestures.Scroller", "PerformBringIntoView()");

    if ((_pendingBringIntoView == NULL) || !uPtr(_pendingBringIntoView)->IsRootingCompleted())
        return;

    ::g::Uno::Float2 pos = uPtr(_scrollable)->GetVisualScrollPosition(_pendingBringIntoView);
    Goto(pos);
    _pendingBringIntoView = NULL;
}

// private void UpdatePointerEvents([bool forceOff]) [instance] :168
void Scroller::UpdatePointerEvents(bool forceOff)
{
    uStackFrame __("Fuse.Gestures.Scroller", "UpdatePointerEvents([bool])");
    bool shouldListen = (!forceOff && (_scrollable != NULL)) && _userScroll;

    if (shouldListen == _pointerListening)
        return;

    if (shouldListen)
    {
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else if (_scrollable != NULL)
    {
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[12/*"Invalid tea...*/]));

    _pointerListening = shouldListen;
}

// private void UpdateScrollMax() [instance] :405
void Scroller::UpdateScrollMax()
{
    uStackFrame __("Fuse.Gestures.Scroller", "UpdateScrollMax()");

    if (_scrollable == NULL)
        return;

    if (_region != NULL)
    {
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), uPtr(_scrollable)->MaxScroll());
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), uPtr(_scrollable)->MinScroll());
    }
}

// public bool get_UserScroll() [instance] :155
bool Scroller::UserScroll()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_UserScroll()");
    return _userScroll;
}

// public void set_UserScroll(bool value) [instance] :156
void Scroller::UserScroll(bool value)
{
    uStackFrame __("Fuse.Gestures.Scroller", "set_UserScroll(bool)");

    if (_userScroll != value)
    {
        _userScroll = value;
        UpdatePointerEvents(false);
        OnLostCapture();
    }
}

// public generated Scroller New() [static] :77
Scroller* Scroller::New2()
{
    Scroller* obj1 = (Scroller*)uNew(Scroller_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.29.22/$.uno
// --------------------------------------------------------------------

// public class ScrollTo :11
// {
static void ScrollTo_build(uType* type)
{
    type->SetFields(8,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _hasPosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _hasRelativePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _relativePosition), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)ScrollTo__New2_fn, 0, true, ScrollTo_typeof(), 0),
        new uFunction("get_Position", NULL, (void*)ScrollTo__get_Position_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)ScrollTo__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RelativePosition", NULL, (void*)ScrollTo__get_RelativePosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_RelativePosition", NULL, (void*)ScrollTo__set_RelativePosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Target", NULL, (void*)ScrollTo__get_Target_fn, 0, false, ::g::Fuse::Controls::ScrollView_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)ScrollTo__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollView_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ScrollTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollTo", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = ScrollTo_build;
    type->fp_ctor_ = (void*)ScrollTo__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ScrollTo__Perform_fn;
    return type;
}

// public generated ScrollTo() :11
void ScrollTo__ctor_2_fn(ScrollTo* __this)
{
    __this->ctor_2();
}

// public generated ScrollTo New() :11
void ScrollTo__New2_fn(ScrollTo** __retval)
{
    *__retval = ScrollTo::New2();
}

// protected override sealed void Perform(Fuse.Node target) :39
void ScrollTo__Perform_fn(ScrollTo* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.ScrollTo", "Perform(Fuse.Node)");

    if (__this->Target() == NULL)
        return;

    if (__this->_hasRelativePosition)
        uPtr(__this->Target())->Goto(::g::Uno::Float2__op_Addition2(uPtr(__this->Target())->MinScroll(), ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(__this->Target())->MaxScroll(), uPtr(__this->Target())->MinScroll()), __this->_relativePosition)));
    else if (__this->_hasPosition)
        uPtr(__this->Target())->Goto(__this->_position);
}

// public float2 get_Position() :19
void ScrollTo__get_Position_fn(ScrollTo* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float2 value) :20
void ScrollTo__set_Position_fn(ScrollTo* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public float2 get_RelativePosition() :31
void ScrollTo__get_RelativePosition_fn(ScrollTo* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RelativePosition();
}

// public void set_RelativePosition(float2 value) :32
void ScrollTo__set_RelativePosition_fn(ScrollTo* __this, ::g::Uno::Float2* value)
{
    __this->RelativePosition(*value);
}

// public generated Fuse.Controls.ScrollView get_Target() :13
void ScrollTo__get_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Controls.ScrollView value) :13
void ScrollTo__set_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->Target(value);
}

// public generated ScrollTo() [instance] :11
void ScrollTo::ctor_2()
{
    uStackFrame __("Fuse.Gestures.ScrollTo", ".ctor()");
    ctor_1();
}

// public float2 get_Position() [instance] :19
::g::Uno::Float2 ScrollTo::Position()
{
    uStackFrame __("Fuse.Gestures.ScrollTo", "get_Position()");
    return _position;
}

// public void set_Position(float2 value) [instance] :20
void ScrollTo::Position(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Gestures.ScrollTo", "set_Position(float2)");
    _position = value;
    _hasPosition = true;
}

// public float2 get_RelativePosition() [instance] :31
::g::Uno::Float2 ScrollTo::RelativePosition()
{
    uStackFrame __("Fuse.Gestures.ScrollTo", "get_RelativePosition()");
    return _relativePosition;
}

// public void set_RelativePosition(float2 value) [instance] :32
void ScrollTo::RelativePosition(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Gestures.ScrollTo", "set_RelativePosition(float2)");
    _relativePosition = value;
    _hasRelativePosition = true;
}

// public generated Fuse.Controls.ScrollView get_Target() [instance] :13
::g::Fuse::Controls::ScrollView* ScrollTo::Target()
{
    uStackFrame __("Fuse.Gestures.ScrollTo", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Controls.ScrollView value) [instance] :13
void ScrollTo::Target(::g::Fuse::Controls::ScrollView* value)
{
    uStackFrame __("Fuse.Gestures.ScrollTo", "set_Target(Fuse.Controls.ScrollView)");
    _Target = value;
}

// public generated ScrollTo New() [static] :11
ScrollTo* ScrollTo::New2()
{
    ScrollTo* obj1 = (ScrollTo*)uNew(ScrollTo_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class SetSwipeActive :930
// {
static void SetSwipeActive_build(uType* type)
{
    type->SetFields(8,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Bypass), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Value), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Bypass", NULL, (void*)SetSwipeActive__get_Bypass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)SetSwipeActive__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)SetSwipeActive__New2_fn, 0, true, SetSwipeActive_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)SetSwipeActive__get_Target_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)SetSwipeActive__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Value", NULL, (void*)SetSwipeActive__get_Value_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)SetSwipeActive__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(SetSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.SetSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = SetSwipeActive_build;
    type->fp_ctor_ = (void*)SetSwipeActive__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SetSwipeActive__Perform_fn;
    return type;
}

// public generated SetSwipeActive() :930
void SetSwipeActive__ctor_2_fn(SetSwipeActive* __this)
{
    __this->ctor_2();
}

// public generated bool get_Bypass() :936
void SetSwipeActive__get_Bypass_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :936
void SetSwipeActive__set_Bypass_fn(SetSwipeActive* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated SetSwipeActive New() :930
void SetSwipeActive__New2_fn(SetSwipeActive** __retval)
{
    *__retval = SetSwipeActive::New2();
}

// protected override sealed void Perform(Fuse.Node target) :938
void SetSwipeActive__Perform_fn(SetSwipeActive* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "Perform(Fuse.Node)");

    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(__this->Value(), NULL, __this->Bypass());
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :932
void SetSwipeActive__get_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :932
void SetSwipeActive__set_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated bool get_Value() :934
void SetSwipeActive__get_Value_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(bool value) :934
void SetSwipeActive__set_Value_fn(SetSwipeActive* __this, bool* value)
{
    __this->Value(*value);
}

// public generated SetSwipeActive() [instance] :930
void SetSwipeActive::ctor_2()
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", ".ctor()");
    ctor_1();
}

// public generated bool get_Bypass() [instance] :936
bool SetSwipeActive::Bypass()
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "get_Bypass()");
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :936
void SetSwipeActive::Bypass(bool value)
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "set_Bypass(bool)");
    _Bypass = value;
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :932
::g::Fuse::Gestures::SwipeGesture* SetSwipeActive::Target()
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :932
void SetSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "set_Target(Fuse.Gestures.SwipeGesture)");
    _Target = value;
}

// public generated bool get_Value() [instance] :934
bool SetSwipeActive::Value()
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "get_Value()");
    return _Value;
}

// public generated void set_Value(bool value) [instance] :934
void SetSwipeActive::Value(bool value)
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "set_Value(bool)");
    _Value = value;
}

// public generated SetSwipeActive New() [static] :930
SetSwipeActive* SetSwipeActive::New2()
{
    SetSwipeActive* obj1 = (SetSwipeActive*)uNew(SetSwipeActive_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Swiped :992
// {
static void Swiped_build(uType* type)
{
    ::TYPES[40] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[34] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Fuse::Gestures::SwipedHow_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _how), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _Source), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_How", NULL, (void*)Swiped__get_How_fn, 0, false, ::g::Fuse::Gestures::SwipedHow_typeof(), 0),
        new uFunction("set_How", NULL, (void*)Swiped__set_How_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipedHow_typeof()),
        new uFunction(".ctor", NULL, (void*)Swiped__New2_fn, 0, true, Swiped_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)Swiped__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* Swiped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Swiped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Swiped", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = Swiped_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Swiped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Swiped__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Swiped(Fuse.Gestures.SwipeGesture source) :997
void Swiped__ctor_4_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_4(source);
}

// public Fuse.Gestures.SwipedHow get_How() :1005
void Swiped__get_How_fn(Swiped* __this, int* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Gestures.SwipedHow value) :1006
void Swiped__set_How_fn(Swiped* __this, int* value)
{
    __this->How(*value);
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) :997
void Swiped__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, Swiped** __retval)
{
    *__retval = Swiped::New2(source);
}

// protected override sealed void OnRooted() :1010
void Swiped__OnRooted_fn(Swiped* __this)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->add_Swiped(uDelegate::New(::TYPES[40/*Uno.Action<bool>*/], (void*)Swiped__OnSwiped_fn, __this));
}

// private void OnSwiped(bool v) :1023
void Swiped__OnSwiped_fn(Swiped* __this, bool* v)
{
    __this->OnSwiped(*v);
}

// protected override sealed void OnUnrooted() :1017
void Swiped__OnUnrooted_fn(Swiped* __this)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnUnrooted()");
    uPtr(__this->_region)->remove_Swiped(uDelegate::New(::TYPES[40/*Uno.Action<bool>*/], (void*)Swiped__OnSwiped_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :994
void Swiped__get_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :994
void Swiped__set_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public Swiped(Fuse.Gestures.SwipeGesture source) [instance] :997
void Swiped::ctor_4(::g::Fuse::Gestures::SwipeGesture* source)
{
    uStackFrame __("Fuse.Gestures.Swiped", ".ctor(Fuse.Gestures.SwipeGesture)");
    ctor_3();
    Source(source);
}

// public Fuse.Gestures.SwipedHow get_How() [instance] :1005
int Swiped::How()
{
    uStackFrame __("Fuse.Gestures.Swiped", "get_How()");
    return _how;
}

// public void set_How(Fuse.Gestures.SwipedHow value) [instance] :1006
void Swiped::How(int value)
{
    uStackFrame __("Fuse.Gestures.Swiped", "set_How(Fuse.Gestures.SwipedHow)");
    _how = value;
}

// private void OnSwiped(bool v) [instance] :1023
void Swiped::OnSwiped(bool v)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnSwiped(bool)");

    if (v && ((How() == 0) || (How() == 2)))
        Pulse();

    if (!v && ((How() == 1) || (How() == 2)))
        Pulse();
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :994
::g::Fuse::Gestures::SwipeGesture* Swiped::Source()
{
    uStackFrame __("Fuse.Gestures.Swiped", "get_Source()");
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :994
void Swiped::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    uStackFrame __("Fuse.Gestures.Swiped", "set_Source(Fuse.Gestures.SwipeGesture)");
    _Source = value;
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) [static] :997
Swiped* Swiped::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    Swiped* obj1 = (Swiped*)uNew(Swiped_typeof());
    obj1->ctor_4(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public enum SwipedHow :985
uEnumType* SwipedHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipedHow", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ToActive", 0LL,
        "ToInactive", 1LL,
        "ToEither", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public enum SwipeDirection :671
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Up", 1LL,
        "Right", 2LL,
        "Down", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class SwipeGesture :690
// {
// static SwipeGesture() :690
static void SwipeGesture__cctor_1_fn(uType* __type)
{
    SwipeGesture::_isActiveName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"IsActive"*/]);
}

static void SwipeGesture_build(uType* type)
{
    ::STRINGS[15] = uString::Const("IsActive");
    ::STRINGS[16] = uString::Const("Element");
    ::STRINGS[17] = uString::Const("/usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno");
    ::STRINGS[4] = uString::Const("OnRooted");
    ::TYPES[38] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[34] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[0] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipeGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipeGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipeGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipeGesture_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipeGesture_type, interface4));
    type->SetFields(13,
        ::g::Fuse::Gestures::SwipeDirection_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _direction), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _edge), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasEdge), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hitSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _isActive), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _length), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _lengthNode), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _region), 0,
        ::g::Fuse::Gestures::Internal::Swiper_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _swiper), 0,
        ::g::Fuse::Gestures::SwipeType_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _type), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::SwipeGesture::_isActiveName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Direction", NULL, (void*)SwipeGesture__get_Direction_fn, 0, false, ::g::Fuse::Gestures::SwipeDirection_typeof(), 0),
        new uFunction("set_Direction", NULL, (void*)SwipeGesture__set_Direction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeDirection_typeof()),
        new uFunction("get_Edge", NULL, (void*)SwipeGesture__get_Edge_fn, 0, false, ::g::Fuse::Gestures::Edge_typeof(), 0),
        new uFunction("set_Edge", NULL, (void*)SwipeGesture__set_Edge_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::Edge_typeof()),
        new uFunction("get_HitSize", NULL, (void*)SwipeGesture__get_HitSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_HitSize", NULL, (void*)SwipeGesture__set_HitSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsActive", NULL, (void*)SwipeGesture__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)SwipeGesture__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Length", NULL, (void*)SwipeGesture__get_Length_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Length", NULL, (void*)SwipeGesture__set_Length_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LengthNode", NULL, (void*)SwipeGesture__get_LengthNode_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_LengthNode", NULL, (void*)SwipeGesture__set_LengthNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)SwipeGesture__New2_fn, 0, true, SwipeGesture_typeof(), 0),
        new uFunction("SetIsActive", NULL, (void*)SwipeGesture__SetIsActive_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Type", NULL, (void*)SwipeGesture__get_Type_fn, 0, false, ::g::Fuse::Gestures::SwipeType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)SwipeGesture__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeType_typeof()));
}

SwipeGesture_type* SwipeGesture_typeof()
{
    static uSStrong<SwipeGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 25;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(SwipeGesture);
    options.TypeSize = sizeof(SwipeGesture_type);
    type = (SwipeGesture_type*)uClassType::New("Fuse.Gestures.SwipeGesture", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = SwipeGesture_build;
    type->fp_ctor_ = (void*)SwipeGesture__New2_fn;
    type->fp_cctor_ = SwipeGesture__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated SwipeGesture() :690
void SwipeGesture__ctor_3_fn(SwipeGesture* __this)
{
    __this->ctor_3();
}

// private void ConstructRegion() :761
void SwipeGesture__ConstructRegion_fn(SwipeGesture* __this)
{
    __this->ConstructRegion();
}

// public Fuse.Gestures.SwipeDirection get_Direction() :718
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) :719
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int* value)
{
    __this->Direction(*value);
}

// public Fuse.Gestures.Edge get_Edge() :706
void SwipeGesture__get_Edge_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :707
void SwipeGesture__set_Edge_fn(SwipeGesture* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_HitSize() :743
void SwipeGesture__get_HitSize_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->HitSize();
}

// public void set_HitSize(float value) :744
void SwipeGesture__set_HitSize_fn(SwipeGesture* __this, float* value)
{
    __this->HitSize(*value);
}

// public bool get_IsActive() :866
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :867
void SwipeGesture__set_IsActive_fn(SwipeGesture* __this, bool* value)
{
    __this->IsActive(*value);
}

// public float get_Length() :729
void SwipeGesture__get_Length_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->Length();
}

// public void set_Length(float value) :730
void SwipeGesture__set_Length_fn(SwipeGesture* __this, float* value)
{
    __this->Length(*value);
}

// public Fuse.Elements.Element get_LengthNode() :736
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value) :737
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public generated SwipeGesture New() :690
void SwipeGesture__New2_fn(SwipeGesture** __retval)
{
    *__retval = SwipeGesture::New2();
}

// protected override sealed void OnRooted() :747
void SwipeGesture__OnRooted_fn(SwipeGesture* __this)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[4/*Fuse.Elements.Element*/]);

    if (element == NULL)
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[16/*"Element"*/], __this->Parent(), __this, ::STRINGS[17/*"/usr/local/...*/], 753, ::STRINGS[4/*"OnRooted"*/]);
        return;
    }

    __this->_swiper = ::g::Fuse::Gestures::Internal::Swiper::AttachSwiper(element);
    uPtr(__this->_swiper)->AddRegion(__this->Region());
}

// protected override sealed void OnUnrooted() :844
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "OnUnrooted()");

    if (__this->_swiper != NULL)
    {
        if (__this->_region != NULL)
        {
            uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);
            __this->_region = NULL;
            uPtr(__this->_swiper)->RemoveRegion(__this->_region);
        }

        uPtr(__this->_swiper)->Detach();
        __this->_swiper = NULL;
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() :836
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->Region();
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass]) :876
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass)
{
    __this->SetActive(*value, origin, *bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) :870
void SwipeGesture__SetIsActive_fn(SwipeGesture* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public Fuse.Gestures.SwipeType get_Type() :698
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Gestures.SwipeType value) :699
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int* value)
{
    __this->Type(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :828
void SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeGesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((obj == __this->_region) && ::g::Uno::UX::Selector__op_Equality(prop_, SwipeGesture::_isActiveName()))
        __this->IsActive(uPtr(__this->_region)->IsActive());
}

::g::Uno::UX::Selector SwipeGesture::_isActiveName_;

// public generated SwipeGesture() [instance] :690
void SwipeGesture::ctor_3()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", ".ctor()");
    _length = 100.0f;
    _hitSize = 100.0f;
    ctor_2();
}

// private void ConstructRegion() [instance] :761
void SwipeGesture::ConstructRegion()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "ConstructRegion()");
    _region = ::g::Fuse::Gestures::Internal::SwipeRegion::New2();

    if (_hasEdge)
    {
        uPtr(_region)->Area = 1;

        switch (_edge)
        {
            case 0:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 1;
                break;
            }
            case 2:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 0.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 2;
                break;
            }
            case 1:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(1.0f, 0.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 3;
                break;
            }
            case 3:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 1.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 4;
                break;
            }
        }
    }
    else
    {
        uPtr(_region)->Area = 0;

        switch (Direction())
        {
            case 0:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 101;
                break;
            }
            case 1:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 102;
                break;
            }
            case 2:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 103;
                break;
            }
            case 3:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 104;
                break;
            }
        }
    }

    uPtr(_region)->SetProgress((double)(IsActive() ? 1 : 0), false);
    uPtr(_region)->Length = (double)Length();
    uPtr(_region)->LengthElement = LengthNode();
    uPtr(_region)->AreaVectorDistance = HitSize();
    uPtr(_region)->AddPropertyListener((uObject*)this);
    uPtr(_region)->IsInterruptible = (Type() != 0);
    uPtr(_region)->RevertActive = (Type() != 1);
    uPtr(_region)->AutoTrigger = ((Type() == 2) || (Type() == 3));
    uPtr(_region)->Continuous = (Type() == 2);
}

// public Fuse.Gestures.SwipeDirection get_Direction() [instance] :718
int SwipeGesture::Direction()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Direction()");
    return _direction;
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) [instance] :719
void SwipeGesture::Direction(int value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Direction(Fuse.Gestures.SwipeDirection)");
    _direction = value;
    _hasDirection = true;
}

// public Fuse.Gestures.Edge get_Edge() [instance] :706
int SwipeGesture::Edge()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Edge()");
    return _edge;
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :707
void SwipeGesture::Edge(int value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Edge(Fuse.Gestures.Edge)");
    _edge = value;
    _hasEdge = true;
}

// public float get_HitSize() [instance] :743
float SwipeGesture::HitSize()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_HitSize()");
    return _hitSize;
}

// public void set_HitSize(float value) [instance] :744
void SwipeGesture::HitSize(float value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_HitSize(float)");
    _hitSize = value;
}

// public bool get_IsActive() [instance] :866
bool SwipeGesture::IsActive()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_IsActive()");
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :867
void SwipeGesture::IsActive(bool value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_IsActive(bool)");
    SetIsActive(value, NULL);
}

// public float get_Length() [instance] :729
float SwipeGesture::Length()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Length()");
    return _length;
}

// public void set_Length(float value) [instance] :730
void SwipeGesture::Length(float value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Length(float)");
    _length = value;
}

// public Fuse.Elements.Element get_LengthNode() [instance] :736
::g::Fuse::Elements::Element* SwipeGesture::LengthNode()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_LengthNode()");
    return _lengthNode;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance] :737
void SwipeGesture::LengthNode(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_LengthNode(Fuse.Elements.Element)");
    _lengthNode = value;
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() [instance] :836
::g::Fuse::Gestures::Internal::SwipeRegion* SwipeGesture::Region()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Region()");

    if (_region == NULL)
        ConstructRegion();

    return _region;
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass]) [instance] :876
void SwipeGesture::SetActive(bool value, uObject* origin, bool bypass)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "SetActive(bool,Uno.UX.IPropertyListener,[bool])");

    if ((value == _isActive) || (origin == this))
        return;

    _isActive = value;
    OnPropertyChanged1(SwipeGesture::_isActiveName(), origin);

    if (_region != NULL)
        uPtr(_swiper)->SetActivation(_region, value, bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance] :870
void SwipeGesture::SetIsActive(bool value, uObject* origin)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "SetIsActive(bool,Uno.UX.IPropertyListener)");
    SetActive(value, origin, false);
}

// public Fuse.Gestures.SwipeType get_Type() [instance] :698
int SwipeGesture::Type()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Type()");
    return _type;
}

// public void set_Type(Fuse.Gestures.SwipeType value) [instance] :699
void SwipeGesture::Type(int value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Type(Fuse.Gestures.SwipeType)");
    _type = value;
}

// public generated SwipeGesture New() [static] :690
SwipeGesture* SwipeGesture::New2()
{
    SwipeGesture* obj1 = (SwipeGesture*)uNew(SwipeGesture_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/Internal/$.uno
// ------------------------------------------------------------------

// internal sealed class SwipeGestureHelper :616
// {
static void SwipeGestureHelper_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _lengthThreshold), 0,
        ::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _spans), 0);
}

uType* SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.SwipeGestureHelper", options);
    type->fp_build_ = SwipeGestureHelper_build;
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :622
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector) :628
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :622
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval)
{
    *__retval = SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [instance] :622
void SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    uStackFrame __("Fuse.Gestures.SwipeGestureHelper", ".ctor(float,Fuse.Gestures.DegreeSpan[])");
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance] :628
bool SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    uStackFrame __("Fuse.Gestures.SwipeGestureHelper", "IsWithinBounds(float2)");
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [static] :622
SwipeGestureHelper* SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    SwipeGestureHelper* obj1 = (SwipeGestureHelper*)uNew(SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public enum SwipeType :679
uEnumType* SwipeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Simple", 0LL,
        "Active", 1LL,
        "Continuous", 2LL,
        "Auto", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class SwipingAnimation :890
// {
// static SwipingAnimation() :890
static void SwipingAnimation__cctor_1_fn(uType* __type)
{
    SwipingAnimation::_progressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"Progress"*/]);
}

static void SwipingAnimation_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Progress");
    ::TYPES[38] = ::g::Uno::UX::IPropertyListener_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipingAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipingAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(SwipingAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(SwipingAnimation_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipingAnimation_type, interface5));
    type->SetFields(27,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipingAnimation, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SwipingAnimation, _Source), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::SwipingAnimation::_progressName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)SwipingAnimation__New2_fn, 0, true, SwipingAnimation_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)SwipingAnimation__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
}

SwipingAnimation_type* SwipingAnimation_typeof()
{
    static uSStrong<SwipingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(SwipingAnimation);
    options.TypeSize = sizeof(SwipingAnimation_type);
    type = (SwipingAnimation_type*)uClassType::New("Fuse.Gestures.SwipingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = SwipingAnimation_build;
    type->fp_cctor_ = SwipingAnimation__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnUnrooted_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) :897
void SwipingAnimation__ctor_4_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_4(source);
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) :897
void SwipingAnimation__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, SwipingAnimation** __retval)
{
    *__retval = SwipingAnimation::New2(source);
}

// private void OnProgressChanged(double progress) :923
void SwipingAnimation__OnProgressChanged1_fn(SwipingAnimation* __this, double* progress)
{
    __this->OnProgressChanged1(*progress);
}

// protected override sealed void OnRooted() :902
void SwipingAnimation__OnRooted_fn(SwipingAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
    __this->OnProgressChanged1(uPtr(uPtr(__this->Source())->Region())->Progress());
}

// protected override sealed void OnUnrooted() :910
void SwipingAnimation__OnUnrooted_fn(SwipingAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnUnrooted()");
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :892
void SwipingAnimation__get_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :892
void SwipingAnimation__set_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector prop) :917
void SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipingAnimation* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((sender != __this->_region) || ::g::Uno::UX::Selector__op_Inequality(prop_, SwipingAnimation::_progressName()))
        return;

    __this->OnProgressChanged1(uPtr(__this->_region)->Progress());
}

::g::Uno::UX::Selector SwipingAnimation::_progressName_;

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) [instance] :897
void SwipingAnimation::ctor_4(::g::Fuse::Gestures::SwipeGesture* source)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", ".ctor(Fuse.Gestures.SwipeGesture)");
    ctor_3();
    Source(source);
}

// private void OnProgressChanged(double progress) [instance] :923
void SwipingAnimation::OnProgressChanged1(double progress)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnProgressChanged(double)");
    double diff = progress - uPtr(uPtr(Source())->Region())->StableProgress();
    Seek(progress, (diff >= 0.0) ? 0 : 1);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :892
::g::Fuse::Gestures::SwipeGesture* SwipingAnimation::Source()
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "get_Source()");
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :892
void SwipingAnimation::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "set_Source(Fuse.Gestures.SwipeGesture)");
    _Source = value;
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) [static] :897
SwipingAnimation* SwipingAnimation::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    SwipingAnimation* obj1 = (SwipingAnimation*)uNew(SwipingAnimation_typeof());
    obj1->ctor_4(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Tapped :1054
// {
static void Tapped_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[41] = ::g::Fuse::Gestures::TappedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::TappedHandler_typeof(), offsetof(::g::Fuse::Gestures::Tapped, Handler1), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("add_Handler", NULL, (void*)Tapped__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::TappedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)Tapped__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::TappedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)Tapped__New2_fn, 0, true, Tapped_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Tapped__New3_fn, 0, true, Tapped_typeof(), 1, ::g::Fuse::Gestures::TappedHandler_typeof()));
}

::g::Fuse::Triggers::Trigger_type* Tapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Tapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Tapped", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_build_ = Tapped_build;
    type->fp_ctor_ = (void*)Tapped__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Tapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Tapped__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Tapped() :1058
void Tapped__ctor_5_fn(Tapped* __this)
{
    __this->ctor_5();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) :1060
void Tapped__ctor_6_fn(Tapped* __this, uDelegate* handler)
{
    __this->ctor_6(handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) :1056
void Tapped__add_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) :1056
void Tapped__remove_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public Tapped New() :1058
void Tapped__New2_fn(Tapped** __retval)
{
    *__retval = Tapped::New2();
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) :1060
void Tapped__New3_fn(uDelegate* handler, Tapped** __retval)
{
    *__retval = Tapped::New3(handler);
}

// protected override sealed void OnRooted() :1065
void Tapped__OnRooted_fn(Tapped* __this)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :1077
void Tapped__OnTapped_fn(Tapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted() :1071
void Tapped__OnUnrooted_fn(Tapped* __this)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public Tapped() [instance] :1058
void Tapped::ctor_5()
{
    uStackFrame __("Fuse.Gestures.Tapped", ".ctor()");
    ctor_4();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) [instance] :1060
void Tapped::ctor_6(uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Tapped", ".ctor(Fuse.Gestures.TappedHandler)");
    ctor_4();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) [instance] :1056
void Tapped::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Tapped", "add_Handler(Fuse.Gestures.TappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[41/*Fuse.Gestures.TappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) [instance] :1056
void Tapped::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Tapped", "remove_Handler(Fuse.Gestures.TappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[41/*Fuse.Gestures.TappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :1077
void Tapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnTapped(Fuse.Input.PointerEventArgs,int)");
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::TappedArgs*)::g::Fuse::Gestures::TappedArgs::New3(args, Parent()));
}

// public Tapped New() [static] :1058
Tapped* Tapped::New2()
{
    Tapped* obj1 = (Tapped*)uNew(Tapped_typeof());
    obj1->ctor_5();
    return obj1;
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) [static] :1060
Tapped* Tapped::New3(uDelegate* handler)
{
    Tapped* obj2 = (Tapped*)uNew(Tapped_typeof());
    obj2->ctor_6(handler);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class TappedArgs :1041
// {
static void TappedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TappedArgs__New3_fn, 0, true, TappedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* TappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TappedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.TappedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->fp_build_ = TappedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1043
void TappedArgs__ctor_4_fn(TappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1043
void TappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, TappedArgs** __retval)
{
    *__retval = TappedArgs::New3(args, visual);
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :1043
void TappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.TappedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :1043
TappedArgs* TappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    TappedArgs* obj1 = (TappedArgs*)uNew(TappedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public delegate void TappedHandler(object sender, Fuse.Gestures.TappedArgs args) :1049
uDelegateType* TappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.TappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::TappedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class ToggleSwipeActive :945
// {
static void ToggleSwipeActive_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::ToggleSwipeActive, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ToggleSwipeActive__New2_fn, 0, true, ToggleSwipeActive_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)ToggleSwipeActive__get_Target_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)ToggleSwipeActive__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ToggleSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ToggleSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = ToggleSwipeActive_build;
    type->fp_ctor_ = (void*)ToggleSwipeActive__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSwipeActive__Perform_fn;
    return type;
}

// public generated ToggleSwipeActive() :945
void ToggleSwipeActive__ctor_2_fn(ToggleSwipeActive* __this)
{
    __this->ctor_2();
}

// public generated ToggleSwipeActive New() :945
void ToggleSwipeActive__New2_fn(ToggleSwipeActive** __retval)
{
    *__retval = ToggleSwipeActive::New2();
}

// protected override sealed void Perform(Fuse.Node target) :949
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.ToggleSwipeActive", "Perform(Fuse.Node)");

    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(!uPtr(__this->Target())->IsActive(), NULL, false);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :947
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :947
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated ToggleSwipeActive() [instance] :945
void ToggleSwipeActive::ctor_2()
{
    uStackFrame __("Fuse.Gestures.ToggleSwipeActive", ".ctor()");
    ctor_1();
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :947
::g::Fuse::Gestures::SwipeGesture* ToggleSwipeActive::Target()
{
    uStackFrame __("Fuse.Gestures.ToggleSwipeActive", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :947
void ToggleSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    uStackFrame __("Fuse.Gestures.ToggleSwipeActive", "set_Target(Fuse.Gestures.SwipeGesture)");
    _Target = value;
}

// public generated ToggleSwipeActive New() [static] :945
ToggleSwipeActive* ToggleSwipeActive::New2()
{
    ToggleSwipeActive* obj1 = (ToggleSwipeActive*)uNew(ToggleSwipeActive_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Trackball :1145
// {
static void Trackball_build(uType* type)
{
    ::TYPES[42] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[43] = ::g::Fuse::Motion::Simulation::ElasticForce_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[44] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[45] = ::g::Fuse::Motion::Simulation::Friction_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[46] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[47] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[34] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[33] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[48] = ::g::Fuse::IViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Gestures::Trackball, _angularVelocity), 0,
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Fuse::Gestures::Trackball, _attractor), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _captured), 0,
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Gestures::Trackball, _friction), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _frictionQ), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _frictionVector), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _hasViewport), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _haveUpdate), 0,
        Trackball__MoveMode_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _moveMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressIndex), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressInvView), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressLoc), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressQ), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _prevAngular), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _radius), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _soft), 0,
        ::g::Fuse::Entities::Transform3D_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _transform), 0,
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _viewport), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("BringToFront", NULL, (void*)Trackball__BringToFront_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Trackball__New2_fn, 0, true, Trackball_typeof(), 0),
        new uFunction("get_Viewport", NULL, (void*)Trackball__get_Viewport_fn, 0, false, ::g::Fuse::IViewport_typeof(), 0),
        new uFunction("set_Viewport", NULL, (void*)Trackball__set_Viewport_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IViewport_typeof()));
}

::g::Fuse::Node_type* Trackball_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Trackball);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.Trackball", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = Trackball_build;
    type->fp_ctor_ = (void*)Trackball__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Trackball__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Trackball__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Trackball() :1145
void Trackball__ctor_3_fn(Trackball* __this)
{
    __this->ctor_3();
}

// public void BringToFront(float3 normal) :1350
void Trackball__BringToFront_fn(Trackball* __this, ::g::Uno::Float3* normal)
{
    __this->BringToFront(*normal);
}

// private void CheckNeedUpdate() :1203
void Trackball__CheckNeedUpdate_fn(Trackball* __this)
{
    __this->CheckNeedUpdate();
}

// private float4x4 get_InverseViewProjection() :1342
void Trackball__get_InverseViewProjection_fn(Trackball* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->InverseViewProjection();
}

// public generated Trackball New() :1145
void Trackball__New2_fn(Trackball** __retval)
{
    *__retval = Trackball::New2();
}

// private void OnLostCapture() :1284
void Trackball__OnLostCapture_fn(Trackball* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) :1308
void Trackball__OnPointerMoved_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(s, args);
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) :1260
void Trackball__OnPointerPressed_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(s, args);
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) :1290
void Trackball__OnPointerReleased_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(s, args);
}

// protected override sealed void OnRooted() :1173
void Trackball__OnRooted_fn(Trackball* __this)
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->Parent())->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->_transform);
    __this->_moveMode = 0;
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)Trackball__OnPointerPressed_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)Trackball__OnPointerReleased_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->Parent(), uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)Trackball__OnPointerMoved_fn, __this));

    if (!__this->_hasViewport)
        __this->_viewport = uPtr(__this->Parent())->Viewport();
}

// protected override sealed void OnUnrooted() :1188
void Trackball__OnUnrooted_fn(Trackball* __this)
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnUnrooted()");
    bool ret5;
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)Trackball__OnPointerPressed_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)Trackball__OnPointerReleased_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->Parent(), uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)Trackball__OnPointerMoved_fn, __this));
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(__this->Parent())->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->_transform, &ret5);
    __this->_moveMode = 0;
    __this->CheckNeedUpdate();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdate() :1224
void Trackball__OnUpdate_fn(Trackball* __this)
{
    __this->OnUpdate();
}

// public Fuse.IViewport get_Viewport() :1161
void Trackball__get_Viewport_fn(Trackball* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public void set_Viewport(Fuse.IViewport value) :1162
void Trackball__set_Viewport_fn(Trackball* __this, uObject* value)
{
    __this->Viewport(value);
}

// public generated Trackball() [instance] :1145
void Trackball::ctor_3()
{
    uStackFrame __("Fuse.Gestures.Trackball", ".ctor()");
    _transform = ::g::Fuse::Entities::Transform3D::New2();
    _radius = 100.0f;
    _attractor = (uObject*)((::g::Fuse::Motion::Simulation::ElasticForce*)::g::Fuse::Motion::Simulation::ElasticForce::CreateRadians(::TYPES[43/*Fuse.Motion.Simulation.ElasticForce<float4>*/]));
    _friction = (uObject*)((::g::Fuse::Motion::Simulation::Friction*)::g::Fuse::Motion::Simulation::Friction::CreateRadians(::TYPES[45/*Fuse.Motion.Simulation.Friction<float>*/]));
    _angularVelocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[46/*Fuse.Motion.Simulation.PointerVelocity<float>*/]));
    _frictionVector = ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f);
    ctor_2();
}

// public void BringToFront(float3 normal) [instance] :1350
void Trackball::BringToFront(::g::Uno::Float3 normal)
{
    uStackFrame __("Fuse.Gestures.Trackball", "BringToFront(float3)");
    ::g::Uno::Float4 old = uPtr(_transform)->RotationQuaternion();
    uPtr(_transform)->RotationQuaternion(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Uno::Float3 ind2 = ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(::g::Uno::Float3__New2(0.0f, 0.0f, -1.0f), InverseViewProjection()));
    ::g::Uno::Float3 localForward = ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
    ::g::Uno::Float4 lq = ::g::Uno::Quaternion::RotationBetween(normal, localForward);
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_attractor), ::TYPES[42/*Fuse.Motion.Simulation.DestinationSimulation<float4>*/]), uCRef(lq));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_attractor), ::TYPES[47/*Fuse.Motion.Simulation.MotionSimulation<float4>*/]), uCRef(old));
    uPtr(_transform)->RotationQuaternion(old);
    _moveMode = 1;
    CheckNeedUpdate();
}

// private void CheckNeedUpdate() [instance] :1203
void Trackball::CheckNeedUpdate()
{
    uStackFrame __("Fuse.Gestures.Trackball", "CheckNeedUpdate()");

    if (_moveMode == 0)
    {
        if (_haveUpdate)
        {
            ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Trackball__OnUpdate_fn, this), 0);
            _haveUpdate = false;
        }
    }
    else if (!_haveUpdate)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Trackball__OnUpdate_fn, this), 0);
        _haveUpdate = true;
    }
}

// private float4x4 get_InverseViewProjection() [instance] :1342
::g::Uno::Float4x4 Trackball::InverseViewProjection()
{
    uStackFrame __("Fuse.Gestures.Trackball", "get_InverseViewProjection()");
    ::g::Uno::Float4x4 at = uPtr(Parent())->WorldTransform();
    ::g::Uno::Float4x4 vp = ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(Viewport()), ::TYPES[48/*Fuse.IViewport*/]));
    return ::g::Uno::Matrix::Invert2(::g::Uno::Matrix::Mul8(at, vp));
}

// private void OnLostCapture() [instance] :1284
void Trackball::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnLostCapture()");
    _captured = false;
    uPtr(_transform)->RotationQuaternion(_pressQ);
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) [instance] :1308
void Trackball::OnPointerMoved(uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (!_captured || (uPtr(args)->PointIndex() != _pressIndex))
        return;

    ::g::Uno::Float2 dir0 = ::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), _pressLoc);
    ::g::Uno::Float2 dir = ::g::Uno::Float2__New2(dir0.X, -dir0.Y);
    ::g::Uno::Float3 norm = ::g::Uno::Vector::Normalize1(::g::Uno::Float3__New2(-dir.Y, dir.X, 0.0f));
    float length = ::g::Uno::Vector::Length(dir);
    float angular = length / (2.0f * _radius);
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_angularVelocity), uCRef(angular), uCRef((double)::g::Fuse::Time::FrameIntervalFloat()), uCRef<int>(0));
    _prevAngular = angular;
    ::g::Uno::Float3 ind1 = ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(norm, _pressInvView));
    ::g::Uno::Float3 localNorm = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
    _frictionVector = localNorm;
    ::g::Uno::Float4 q = ::g::Uno::Quaternion::RotationAxis(localNorm, angular);
    ::g::Uno::Float4 cq = ::g::Uno::Quaternion::Mul(_pressQ, q);
    uPtr(_transform)->RotationQuaternion(cq);

    if (_soft && (length > 10.0f))
    {
        if (!uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Trackball__OnLostCapture_fn, this), NULL))
            OnLostCapture();

        _soft = false;
    }
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) [instance] :1260
void Trackball::OnPointerPressed(uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if (_captured || !uPtr(args)->IsPrimary())
        return;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Trackball__OnLostCapture_fn, this), NULL))
    {
        _moveMode = 0;
        _captured = true;
        _soft = true;
        _pressLoc = uPtr(args)->WindowPoint();
        _pressIndex = args->PointIndex();
        _pressQ = uPtr(_transform)->RotationQuaternion();
        uPtr(_transform)->RotationQuaternion(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
        ::g::Fuse::Motion::Simulation::PointerVelocity__Reset_fn(uPtr(_angularVelocity), uCRef(0.0f));
        _prevAngular = 0.0f;
        _pressInvView = InverseViewProjection();
        uPtr(_transform)->RotationQuaternion(_pressQ);
    }
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) [instance] :1290
void Trackball::OnPointerReleased(uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");
    float ret4;

    if (!_captured || (uPtr(args)->PointIndex() != _pressIndex))
        return;

    if (_soft)
        uPtr(args)->ReleaseSoftCapture(this);
    else
        args->ReleaseHardCapture(this);

    _captured = false;
    _moveMode = 2;
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_friction), ::TYPES[44/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef(0.0f));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_friction), ::TYPES[44/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_angularVelocity), &ret4), ret4)));
    _frictionQ = uPtr(_transform)->RotationQuaternion();
    CheckNeedUpdate();
}

// private void OnUpdate() [instance] :1224
void Trackball::OnUpdate()
{
    uStackFrame __("Fuse.Gestures.Trackball", "OnUpdate()");
    ::g::Uno::Float4 ret6;
    float ret7;

    if (_moveMode == 1)
    {
        ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_attractor), ::TYPES[33/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());

        if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_attractor), ::TYPES[33/*Fuse.Motion.Simulation.Simulation*/])))
            _moveMode = 0;

        uPtr(_transform)->RotationQuaternion(::g::Uno::Vector::Normalize2((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_attractor), ::TYPES[47/*Fuse.Motion.Simulation.MotionSimulation<float4>*/]), &ret6), ret6)));
    }
    else if (_moveMode == 2)
    {
        ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_friction), ::TYPES[33/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());

        if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_friction), ::TYPES[33/*Fuse.Motion.Simulation.Simulation*/])))
            _moveMode = 0;

        ::g::Uno::Float4 q = ::g::Uno::Quaternion::RotationAxis(_frictionVector, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_friction), ::TYPES[44/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), &ret7), ret7));
        ::g::Uno::Float4 cq = ::g::Uno::Quaternion::Mul(_frictionQ, q);
        uPtr(_transform)->RotationQuaternion(cq);
    }

    CheckNeedUpdate();
}

// public Fuse.IViewport get_Viewport() [instance] :1161
uObject* Trackball::Viewport()
{
    uStackFrame __("Fuse.Gestures.Trackball", "get_Viewport()");
    return _viewport;
}

// public void set_Viewport(Fuse.IViewport value) [instance] :1162
void Trackball::Viewport(uObject* value)
{
    uStackFrame __("Fuse.Gestures.Trackball", "set_Viewport(Fuse.IViewport)");
    _viewport = value;
    _hasViewport = true;
}

// public generated Trackball New() [static] :1145
Trackball* Trackball::New2()
{
    Trackball* obj3 = (Trackball*)uNew(Trackball_typeof());
    obj3->ctor_3();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract class TransformGesture :1400
// {
static void TransformGesture_build(uType* type)
{
    ::TYPES[27] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[33] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[49] = ::g::Fuse::Gestures::Internal::TwoFingerEventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(TransformGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(TransformGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(TransformGesture_type, interface3));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, _hasUpdate), 0,
        ::g::Fuse::Gestures::Internal::TwoFinger_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, Impl), 0,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, Region), 0,
        ::g::Fuse::Elements::InteractiveTransform_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, _Target), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Target", NULL, (void*)TransformGesture__get_Target_fn, 0, false, ::g::Fuse::Elements::InteractiveTransform_typeof(), 0));
}

TransformGesture_type* TransformGesture_typeof()
{
    static uSStrong<TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TransformGesture);
    options.TypeSize = sizeof(TransformGesture_type);
    type = (TransformGesture_type*)uClassType::New("Fuse.Gestures.TransformGesture", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = TransformGesture_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))TransformGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))TransformGesture__OnUnrooted_fn;
    type->fp_OnUpdate = TransformGesture__OnUpdate_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal TransformGesture(Fuse.Elements.InteractiveTransform target) :1410
void TransformGesture__ctor_3_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_3(target);
}

// protected void CheckNeedUpdate() :1445
void TransformGesture__CheckNeedUpdate_fn(TransformGesture* __this)
{
    __this->CheckNeedUpdate();
}

// protected override void OnRooted() :1416
void TransformGesture__OnRooted_fn(TransformGesture* __this)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->Impl = ::g::Fuse::Gestures::Internal::TwoFinger::Attach(__this->Parent());
    uPtr(__this->Impl)->add_Started(uDelegate::New(::TYPES[49/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnStarted)));
    uPtr(__this->Impl)->add_Ended(uDelegate::New(::TYPES[49/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnEnded)));
}

// protected override void OnUnrooted() :1424
void TransformGesture__OnUnrooted_fn(TransformGesture* __this)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Started(uDelegate::New(::TYPES[49/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnStarted)));
    uPtr(__this->Impl)->remove_Ended(uDelegate::New(::TYPES[49/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnEnded)));
    uPtr(__this->Impl)->Detach();
    __this->Impl = NULL;
    __this->CheckNeedUpdate();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// protected virtual void OnUpdate() :1458
void TransformGesture__OnUpdate_fn(TransformGesture* __this)
{
}

// public generated Fuse.Elements.InteractiveTransform get_Target() :1404
void TransformGesture__get_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Fuse.Elements.InteractiveTransform value) :1405
void TransformGesture__set_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* value)
{
    __this->Target(value);
}

// private void Update() :1437
void TransformGesture__Update_fn(TransformGesture* __this)
{
    __this->Update();
}

// internal TransformGesture(Fuse.Elements.InteractiveTransform target) [instance] :1410
void TransformGesture::ctor_3(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    Region = (uObject*)::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::CreatePoints();
    ctor_2();
    Target(target);
}

// protected void CheckNeedUpdate() [instance] :1445
void TransformGesture::CheckNeedUpdate()
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "CheckNeedUpdate()");
    bool need = IsRootingCompleted() && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(Region), ::TYPES[33/*Fuse.Motion.Simulation.Simulation*/]));

    if (need == _hasUpdate)
        return;

    _hasUpdate = need;

    if (need)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)TransformGesture__Update_fn, this), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)TransformGesture__Update_fn, this), 0);
}

// public generated Fuse.Elements.InteractiveTransform get_Target() [instance] :1404
::g::Fuse::Elements::InteractiveTransform* TransformGesture::Target()
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "get_Target()");
    return _Target;
}

// private generated void set_Target(Fuse.Elements.InteractiveTransform value) [instance] :1405
void TransformGesture::Target(::g::Fuse::Elements::InteractiveTransform* value)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "set_Target(Fuse.Elements.InteractiveTransform)");
    _Target = value;
}

// private void Update() [instance] :1437
void TransformGesture::Update()
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "Update()");
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(Region), ::TYPES[33/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    OnUpdate();
    CheckNeedUpdate();
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/Internal/$.uno
// ------------------------------------------------------------------

// public abstract class WhileClickerTrigger :30
// {
static void WhileClickerTrigger_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::WhileClickerTrigger, Clicker), 0);
}

::g::Fuse::Triggers::Trigger_type* WhileClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileClickerTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileClickerTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileClickerTrigger__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated WhileClickerTrigger() :30
void WhileClickerTrigger__ctor_5_fn(WhileClickerTrigger* __this)
{
    __this->ctor_5();
}

// protected override sealed void OnRooted() :33
void WhileClickerTrigger__OnRooted_fn(WhileClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.WhileClickerTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent());
}

// protected override sealed void OnUnrooted() :39
void WhileClickerTrigger__OnUnrooted_fn(WhileClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.WhileClickerTrigger", "OnUnrooted()");
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated WhileClickerTrigger() [instance] :30
void WhileClickerTrigger::ctor_5()
{
    uStackFrame __("Fuse.Gestures.WhileClickerTrigger", ".ctor()");
    ctor_4();
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileHovering :1563
// {
static void WhileHovering_build(uType* type)
{
    ::TYPES[50] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[51] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[52] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileHovering__New2_fn, 0, true, WhileHovering_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* WhileHovering_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 27;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileHovering);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileHovering", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = WhileHovering_build;
    type->fp_ctor_ = (void*)WhileHovering__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileHovering__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileHovering__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileHovering() :1563
void WhileHovering__ctor_4_fn(WhileHovering* __this)
{
    __this->ctor_4();
}

// public generated WhileHovering New() :1563
void WhileHovering__New2_fn(WhileHovering** __retval)
{
    *__retval = WhileHovering::New2();
}

// private void OnIsContextEnabledChanged(object s, object a) :1592
void WhileHovering__OnIsContextEnabledChanged_fn(WhileHovering* __this, uObject* s, uObject* a)
{
    __this->OnIsContextEnabledChanged(s, a);
}

// private void OnPointerEntered(object sender, object args) :1581
void WhileHovering__OnPointerEntered_fn(WhileHovering* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args) :1586
void WhileHovering__OnPointerLeft_fn(WhileHovering* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted() :1565
void WhileHovering__OnRooted_fn(WhileHovering* __this)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[50/*Fuse.Input.PointerEnteredHandler*/], (void*)WhileHovering__OnPointerEntered_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[51/*Fuse.Input.PointerLeftHandler*/], (void*)WhileHovering__OnPointerLeft_fn, __this));
    uPtr(__this->Parent())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], (void*)WhileHovering__OnIsContextEnabledChanged_fn, __this));
}

// protected override sealed void OnUnrooted() :1573
void WhileHovering__OnUnrooted_fn(WhileHovering* __this)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[50/*Fuse.Input.PointerEnteredHandler*/], (void*)WhileHovering__OnPointerEntered_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[51/*Fuse.Input.PointerLeftHandler*/], (void*)WhileHovering__OnPointerLeft_fn, __this));
    uPtr(__this->Parent())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], (void*)WhileHovering__OnIsContextEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileHovering() [instance] :1563
void WhileHovering::ctor_4()
{
    uStackFrame __("Fuse.Gestures.WhileHovering", ".ctor()");
    ctor_3();
}

// private void OnIsContextEnabledChanged(object s, object a) [instance] :1592
void WhileHovering::OnIsContextEnabledChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnIsContextEnabledChanged(object,object)");

    if (!uPtr(Parent())->IsContextEnabled())
        Deactivate();
}

// private void OnPointerEntered(object sender, object args) [instance] :1581
void WhileHovering::OnPointerEntered(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnPointerEntered(object,object)");
    Activate(NULL);
}

// private void OnPointerLeft(object sender, object args) [instance] :1586
void WhileHovering::OnPointerLeft(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnPointerLeft(object,object)");
    Deactivate();
}

// public generated WhileHovering New() [static] :1563
WhileHovering* WhileHovering::New2()
{
    WhileHovering* obj1 = (WhileHovering*)uNew(WhileHovering_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhilePressed :465
// {
static void WhilePressed_build(uType* type)
{
    ::TYPES[34] = ::g::Uno::Int_typeof();
    ::TYPES[18] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[50] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[51] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[52] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _inside), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _pointerType), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, Clicker), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _Capture), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Capture", NULL, (void*)WhilePressed__get_Capture_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Capture", NULL, (void*)WhilePressed__set_Capture_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)WhilePressed__New2_fn, 0, true, WhilePressed_typeof(), 0),
        new uFunction("get_PointerType", NULL, (void*)WhilePressed__get_PointerType_fn, 0, false, ::g::Uno::Platform::PointerType_typeof(), 0),
        new uFunction("set_PointerType", NULL, (void*)WhilePressed__set_PointerType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::PointerType_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhilePressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhilePressed", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhilePressed_build;
    type->fp_ctor_ = (void*)WhilePressed__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhilePressed__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhilePressed() :465
void WhilePressed__ctor_5_fn(WhilePressed* __this)
{
    __this->ctor_5();
}

// public generated bool get_Capture() :467
void WhilePressed__get_Capture_fn(WhilePressed* __this, bool* __retval)
{
    *__retval = __this->Capture();
}

// public generated void set_Capture(bool value) :467
void WhilePressed__set_Capture_fn(WhilePressed* __this, bool* value)
{
    __this->Capture(*value);
}

// private void CheckStatus(object s, object a) :541
void WhilePressed__CheckStatus_fn(WhilePressed* __this, uObject* s, uObject* a)
{
    __this->CheckStatus(s, a);
}

// public generated WhilePressed New() :465
void WhilePressed__New2_fn(WhilePressed** __retval)
{
    *__retval = WhilePressed::New2();
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) :520
void WhilePressed__OnClickerPressing_fn(WhilePressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count)
{
    __this->OnClickerPressing(args, *count);
}

// private void OnPointerEntered(object sender, object args) :529
void WhilePressed__OnPointerEntered_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args) :535
void WhilePressed__OnPointerLeft_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted() :478
void WhilePressed__OnRooted_fn(WhilePressed* __this)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->Capture())
    {
        __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent());
        uPtr(__this->Clicker)->add_PressingEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
    }
    else
    {
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[50/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[51/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->Parent())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        __this->_inside = false;
    }

    __this->SetActive(false);
}

// protected override sealed void OnUnrooted() :500
void WhilePressed__OnUnrooted_fn(WhilePressed* __this)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnUnrooted()");

    if (__this->Capture())
    {
        uPtr(__this->Clicker)->remove_PressingEvent(uDelegate::New(::TYPES[18/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
        uPtr(__this->Clicker)->Detach();
        __this->Clicker = NULL;
    }
    else
    {
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[50/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[51/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->Parent())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Uno.Platform.PointerType get_PointerType() :474
void WhilePressed__get_PointerType_fn(WhilePressed* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// public void set_PointerType(Uno.Platform.PointerType value) :475
void WhilePressed__set_PointerType_fn(WhilePressed* __this, int* value)
{
    __this->PointerType(*value);
}

// public generated WhilePressed() [instance] :465
void WhilePressed::ctor_5()
{
    uStackFrame __("Fuse.Gestures.WhilePressed", ".ctor()");
    ctor_4();
}

// public generated bool get_Capture() [instance] :467
bool WhilePressed::Capture()
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "get_Capture()");
    return _Capture;
}

// public generated void set_Capture(bool value) [instance] :467
void WhilePressed::Capture(bool value)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "set_Capture(bool)");
    _Capture = value;
}

// private void CheckStatus(object s, object a) [instance] :541
void WhilePressed::CheckStatus(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "CheckStatus(object,object)");
    SetActive((_inside && uPtr(Parent())->IsContextEnabled()) && ::g::Fuse::Input::Pointer::IsPressed());
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) [instance] :520
void WhilePressed::OnClickerPressing(::g::Fuse::Input::PointerEventArgs* args, int count)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnClickerPressing(Fuse.Input.PointerEventArgs,int)");
    bool q = (PointerType() == 0) || (PointerType() == uPtr(args)->PointerType());
    bool on = count > 0;

    if (q)
        SetActive(on);
}

// private void OnPointerEntered(object sender, object args) [instance] :529
void WhilePressed::OnPointerEntered(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnPointerEntered(object,object)");
    _inside = true;
    CheckStatus(sender, args);
}

// private void OnPointerLeft(object sender, object args) [instance] :535
void WhilePressed::OnPointerLeft(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnPointerLeft(object,object)");
    _inside = false;
    CheckStatus(sender, args);
}

// public Uno.Platform.PointerType get_PointerType() [instance] :474
int WhilePressed::PointerType()
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "get_PointerType()");
    return _pointerType;
}

// public void set_PointerType(Uno.Platform.PointerType value) [instance] :475
void WhilePressed::PointerType(int value)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "set_PointerType(Uno.Platform.PointerType)");
    _pointerType = value;
}

// public generated WhilePressed New() [static] :465
WhilePressed* WhilePressed::New2()
{
    WhilePressed* obj1 = (WhilePressed*)uNew(WhilePressed_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileSwipeActive :956
// {
static void WhileSwipeActive_build(uType* type)
{
    ::TYPES[38] = ::g::Uno::UX::IPropertyListener_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileSwipeActive_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileSwipeActive_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileSwipeActive_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileSwipeActive_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileSwipeActive_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(WhileSwipeActive_type, interface5));
    type->SetFields(28,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::WhileSwipeActive, _Source), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileSwipeActive__New2_fn, 0, true, WhileSwipeActive_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)WhileSwipeActive__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
}

WhileSwipeActive_type* WhileSwipeActive_typeof()
{
    static uSStrong<WhileSwipeActive_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileSwipeActive);
    options.TypeSize = sizeof(WhileSwipeActive_type);
    type = (WhileSwipeActive_type*)uClassType::New("Fuse.Gestures.WhileSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileSwipeActive_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileSwipeActive__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileSwipeActive__OnUnrooted_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))WhileSwipeActive__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileSwipeActive(Fuse.Gestures.SwipeGesture source) :961
void WhileSwipeActive__ctor_5_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_5(source);
}

// public WhileSwipeActive New(Fuse.Gestures.SwipeGesture source) :961
void WhileSwipeActive__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, WhileSwipeActive** __retval)
{
    *__retval = WhileSwipeActive::New2(source);
}

// protected override sealed void OnRooted() :966
void WhileSwipeActive__OnRooted_fn(WhileSwipeActive* __this)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    uPtr(__this->Source())->AddPropertyListener((uObject*)__this);
    __this->SetActive(uPtr(__this->Source())->IsActive());
}

// protected override sealed void OnUnrooted() :973
void WhileSwipeActive__OnUnrooted_fn(WhileSwipeActive* __this)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "OnUnrooted()");
    uPtr(__this->Source())->RemovePropertyListener((uObject*)__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :958
void WhileSwipeActive__get_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :958
void WhileSwipeActive__set_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :979
void WhileSwipeActive__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileSwipeActive* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    __this->SetActive(uPtr(__this->Source())->IsActive());
}

// public WhileSwipeActive(Fuse.Gestures.SwipeGesture source) [instance] :961
void WhileSwipeActive::ctor_5(::g::Fuse::Gestures::SwipeGesture* source)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", ".ctor(Fuse.Gestures.SwipeGesture)");
    ctor_4();
    Source(source);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :958
::g::Fuse::Gestures::SwipeGesture* WhileSwipeActive::Source()
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "get_Source()");
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :958
void WhileSwipeActive::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "set_Source(Fuse.Gestures.SwipeGesture)");
    _Source = value;
}

// public WhileSwipeActive New(Fuse.Gestures.SwipeGesture source) [static] :961
WhileSwipeActive* WhileSwipeActive::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    WhileSwipeActive* obj1 = (WhileSwipeActive*)uNew(WhileSwipeActive_typeof());
    obj1->ctor_5(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class ZoomGesture :1615
// {
static void ZoomGesture_build(uType* type)
{
    ::TYPES[27] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[53] = ::g::Fuse::Gestures::Internal::TwoFingerZoomHandler_typeof();
    ::TYPES[29] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface3));
    type->SetFields(17,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _maximum), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _minimum), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _prevZoom), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _startZoom), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Maximum", NULL, (void*)ZoomGesture__get_Maximum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)ZoomGesture__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Minimum", NULL, (void*)ZoomGesture__get_Minimum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)ZoomGesture__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)ZoomGesture__New2_fn, 0, true, ZoomGesture_typeof(), 1, ::g::Fuse::Elements::InteractiveTransform_typeof()));
}

::g::Fuse::Gestures::TransformGesture_type* ZoomGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ZoomGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.ZoomGesture", options);
    type->SetBase(::g::Fuse::Gestures::TransformGesture_typeof());
    type->fp_build_ = ZoomGesture_build;
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ZoomGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ZoomGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnUpdate_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ZoomGesture(Fuse.Elements.InteractiveTransform target) :1618
void ZoomGesture__ctor_4_fn(ZoomGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_4(target);
}

// public float get_Maximum() :1673
void ZoomGesture__get_Maximum_fn(ZoomGesture* __this, float* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float value) :1674
void ZoomGesture__set_Maximum_fn(ZoomGesture* __this, float* value)
{
    __this->Maximum(*value);
}

// public float get_Minimum() :1680
void ZoomGesture__get_Minimum_fn(ZoomGesture* __this, float* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float value) :1681
void ZoomGesture__set_Minimum_fn(ZoomGesture* __this, float* value)
{
    __this->Minimum(*value);
}

// public ZoomGesture New(Fuse.Elements.InteractiveTransform target) :1618
void ZoomGesture__New2_fn(::g::Fuse::Elements::InteractiveTransform* target, ZoomGesture** __retval)
{
    *__retval = ZoomGesture::New2(target);
}

// protected override sealed void OnEnded() :1649
void ZoomGesture__OnEnded_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnEnded()");
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnRooted() :1624
void ZoomGesture__OnRooted_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnRooted()");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this);
    uPtr(__this->Impl)->add_Zoomed(uDelegate::New(::TYPES[53/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/], (void*)ZoomGesture__OnZoomed_fn, __this));
}

// protected override sealed void OnStarted() :1637
void ZoomGesture__OnStarted_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnStarted()");
    __this->_startZoom = uPtr(__this->Target())->ZoomFactor();
    __this->_prevZoom = ::g::Uno::Math::Log1(__this->_startZoom);
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__New2(__this->_prevZoom, 0.0f)));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(__this->Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(::g::Uno::Math::Log1(__this->Minimum()), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(__this->Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(::g::Uno::Math::Log1(__this->Maximum()), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnUnrooted() :1630
void ZoomGesture__OnUnrooted_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Zoomed(uDelegate::New(::TYPES[53/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/], (void*)ZoomGesture__OnZoomed_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this);
}

// protected override sealed void OnUpdate() :1665
void ZoomGesture__OnUpdate_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnUpdate()");
    ::g::Uno::Float2 ret2;
    uPtr(__this->Target())->SetZoomFactor(::g::Uno::Math::Exp1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret2), ret2).X), NULL);
}

// private void OnZoomed(float factor) :1655
void ZoomGesture__OnZoomed_fn(ZoomGesture* __this, float* factor)
{
    __this->OnZoomed(*factor);
}

// public ZoomGesture(Fuse.Elements.InteractiveTransform target) [instance] :1618
void ZoomGesture::ctor_4(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    _maximum = FLT_INF;
    _minimum = 0.0f;
    ctor_3(target);
    Region = (uObject*)::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::CreateExponential();
}

// public float get_Maximum() [instance] :1673
float ZoomGesture::Maximum()
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "get_Maximum()");
    return _maximum;
}

// public void set_Maximum(float value) [instance] :1674
void ZoomGesture::Maximum(float value)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "set_Maximum(float)");
    _maximum = value;
}

// public float get_Minimum() [instance] :1680
float ZoomGesture::Minimum()
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "get_Minimum()");
    return _minimum;
}

// public void set_Minimum(float value) [instance] :1681
void ZoomGesture::Minimum(float value)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "set_Minimum(float)");
    _minimum = value;
}

// private void OnZoomed(float factor) [instance] :1655
void ZoomGesture::OnZoomed(float factor)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnZoomed(float)");
    ::g::Uno::Float2 ret3;
    float current = _startZoom * factor;
    float step = ::g::Uno::Math::Log1(current) - _prevZoom;
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(Region), ::TYPES[27/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(step, 0.0f));
    _prevZoom = ::g::Uno::Math::Log1(current);
    uPtr(Target())->ZoomFactor(::g::Uno::Math::Exp1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(Region), ::TYPES[29/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret3), ret3).X));
}

// public ZoomGesture New(Fuse.Elements.InteractiveTransform target) [static] :1618
ZoomGesture* ZoomGesture::New2(::g::Fuse::Elements::InteractiveTransform* target)
{
    ZoomGesture* obj1 = (ZoomGesture*)uNew(ZoomGesture_typeof());
    obj1->ctor_4(target);
    return obj1;
}
// }

}}} // ::g::Fuse::Gestures
