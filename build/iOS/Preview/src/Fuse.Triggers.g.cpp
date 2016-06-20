// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.PlayMode.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.Controls.ITextEditControl.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.TextInputActionArgs.h>
#include <Fuse.Controls.TextInputActionHandler.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.PreplacementArgs.h>
#include <Fuse.Elements.PreplacementHandler.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.h>
#include <Fuse.PendingRemoveVisual.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scaling.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerDirection.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.Android.h>
#include <Fuse.Triggers.ContainingText.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.InteractionCompleted.h>
#include <Fuse.Triggers.iOS.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.IVisibility.h>
#include <Fuse.Triggers.KeyPressHandler.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutAnimationType.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransition.PositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ResizeChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ScaleChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransitioned.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.OnBackButton.h>
#include <Fuse.Triggers.OnKeyPress.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Fuse.Triggers.OnUserEventFilter.h>
#include <Fuse.Triggers.PageBeginLoading.h>
#include <Fuse.Triggers.PageLoaded.h>
#include <Fuse.Triggers.ProgressAnimation.h>
#include <Fuse.Triggers.PullToReload.h>
#include <Fuse.Triggers.RangeAnimation.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.ScrollingAnimation.h>
#include <Fuse.Triggers.ScrollingAnimationRange.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.StateTransition.h>
#include <Fuse.Triggers.TextInputActionTriggered.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Timeline.State.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.TriggerBypassMode.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhileContainsText.h>
#include <Fuse.Triggers.WhileDisabled.h>
#include <Fuse.Triggers.WhileEnabled.h>
#include <Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileFloat.h>
#include <Fuse.Triggers.WhileFloat.Range.h>
#include <Fuse.Triggers.WhileFocused.h>
#include <Fuse.Triggers.WhileFocusWithin.h>
#include <Fuse.Triggers.WhileInteracting.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.Triggers.WhileNotFocused.h>
#include <Fuse.Triggers.WhilePageLoading.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.Triggers.WhileScrollable.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Fuse.Triggers.WhileValueStatic.h>
#include <Fuse.Triggers.WhileVisible.h>
#include <Fuse.Triggers.WhileWindowAspect.h>
#include <Fuse.Triggers.WhileWindowLandscape.h>
#include <Fuse.Triggers.WhileWindowPortrait.h>
#include <Fuse.Triggers.WhileWindowSize.h>
#include <Fuse.Triggers.WindowSizeTrigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.UserEventArgs.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.UserEventHandler.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[45];
static uType* TYPES[73];

namespace g{
namespace Fuse{
namespace Triggers{

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class AddingAnimation :40
// {
static void AddingAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::AddingAnimation, _delayFrame), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_DelayFrame", NULL, (void*)AddingAnimation__get_DelayFrame_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_DelayFrame", NULL, (void*)AddingAnimation__set_DelayFrame_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)AddingAnimation__New2_fn, 0, true, AddingAnimation_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* AddingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(AddingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.AddingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = AddingAnimation_build;
    type->fp_ctor_ = (void*)AddingAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))AddingAnimation__OnRooted_fn;
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

// public generated AddingAnimation() :40
void AddingAnimation__ctor_4_fn(AddingAnimation* __this)
{
    __this->ctor_4();
}

// public bool get_DelayFrame() :45
void AddingAnimation__get_DelayFrame_fn(AddingAnimation* __this, bool* __retval)
{
    *__retval = __this->DelayFrame();
}

// public void set_DelayFrame(bool value) :46
void AddingAnimation__set_DelayFrame_fn(AddingAnimation* __this, bool* value)
{
    __this->DelayFrame(*value);
}

// public generated AddingAnimation New() :40
void AddingAnimation__New2_fn(AddingAnimation** __retval)
{
    *__retval = AddingAnimation::New2();
}

// protected override sealed void OnRooted() :49
void AddingAnimation__OnRooted_fn(AddingAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.AddingAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->BypassActivate();

    if (__this->DelayFrame())
        ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Triggers::Trigger__DirectDeactivate_fn, __this), 0);
    else
        __this->DirectDeactivate();
}

// public generated AddingAnimation() [instance] :40
void AddingAnimation::ctor_4()
{
    uStackFrame __("Fuse.Triggers.AddingAnimation", ".ctor()");
    _delayFrame = true;
    ctor_3();
}

// public bool get_DelayFrame() [instance] :45
bool AddingAnimation::DelayFrame()
{
    uStackFrame __("Fuse.Triggers.AddingAnimation", "get_DelayFrame()");
    return _delayFrame;
}

// public void set_DelayFrame(bool value) [instance] :46
void AddingAnimation::DelayFrame(bool value)
{
    uStackFrame __("Fuse.Triggers.AddingAnimation", "set_DelayFrame(bool)");
    _delayFrame = value;
}

// public generated AddingAnimation New() [static] :40
AddingAnimation* AddingAnimation::New2()
{
    AddingAnimation* obj1 = (AddingAnimation*)uNew(AddingAnimation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class Android :334
// {
static void Android_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Android__New2_fn, 0, true, Android_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* Android_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 27;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Android);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Android", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = Android_build;
    type->fp_ctor_ = (void*)Android__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Android__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Android__OnUnrooted_fn;
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

// public generated Android() :334
void Android__ctor_4_fn(Android* __this)
{
    __this->ctor_4();
}

// public generated Android New() :334
void Android__New2_fn(Android** __retval)
{
    *__retval = Android::New2();
}

// protected override sealed void OnRooted() :336
void Android__OnRooted_fn(Android* __this)
{
    uStackFrame __("Fuse.Triggers.Android", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
}

// protected override sealed void OnUnrooted() :345
void Android__OnUnrooted_fn(Android* __this)
{
    uStackFrame __("Fuse.Triggers.Android", "OnUnrooted()");
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Android() [instance] :334
void Android::ctor_4()
{
    uStackFrame __("Fuse.Triggers.Android", ".ctor()");
    ctor_3();
}

// public generated Android New() [static] :334
Android* Android::New2()
{
    Android* obj1 = (Android*)uNew(Android_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/Triggers/$.uno
// -----------------------------------------------------------------------------

// public sealed class ContainingText :54
// {
static void ContainingText_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Use the trigger WhileContainsText instead");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/Triggers/$.uno");
    ::STRINGS[2] = uString::Const(".ctor");
    ::TYPES[1] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(30);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ContainingText__New3_fn, 0, true, ContainingText_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* ContainingText_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ContainingText);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.ContainingText", options);
    type->SetBase(::g::Fuse::Triggers::WhileContainsText_typeof());
    type->fp_build_ = ContainingText_build;
    type->fp_ctor_ = (void*)ContainingText__New3_fn;
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

// public ContainingText() :56
void ContainingText__ctor_6_fn(ContainingText* __this)
{
    __this->ctor_6();
}

// public ContainingText New() :56
void ContainingText__New3_fn(ContainingText** __retval)
{
    *__retval = ContainingText::New3();
}

// public ContainingText() [instance] :56
void ContainingText::ctor_6()
{
    uStackFrame __("Fuse.Triggers.ContainingText", ".ctor()");
    ctor_5();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[0/*"Use the tri...*/], this, ::STRINGS[1/*"/usr/local/...*/], 58, ::STRINGS[2/*".ctor"*/]);
}

// public ContainingText New() [static] :56
ContainingText* ContainingText::New3()
{
    ContainingText* obj1 = (ContainingText*)uNew(ContainingText_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/Actions/$.uno
// -----------------------------------------------------------------

// public abstract interface IMediaPlayback :212
// {
uInterfaceType* IMediaPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IMediaPlayback", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Duration", NULL, NULL, offsetof(IMediaPlayback, fp_get_Duration), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Position", NULL, NULL, offsetof(IMediaPlayback, fp_get_Position), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Position", NULL, NULL, offsetof(IMediaPlayback, fp_set_Position), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Volume", NULL, NULL, offsetof(IMediaPlayback, fp_get_Volume), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Volume", NULL, NULL, offsetof(IMediaPlayback, fp_set_Volume), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// public sealed class InteractionCompleted :84
// {
static void InteractionCompleted_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::InteractionCompleted, _on), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::InteractionCompleted, _source), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::InteractionCompleted, _visual), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)InteractionCompleted__New2_fn, 0, true, InteractionCompleted_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)InteractionCompleted__get_Source_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)InteractionCompleted__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Triggers::Trigger_type* InteractionCompleted_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(InteractionCompleted);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.InteractionCompleted", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = InteractionCompleted_build;
    type->fp_ctor_ = (void*)InteractionCompleted__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))InteractionCompleted__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))InteractionCompleted__OnUnrooted_fn;
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

// public generated InteractionCompleted() :84
void InteractionCompleted__ctor_4_fn(InteractionCompleted* __this)
{
    __this->ctor_4();
}

// public generated InteractionCompleted New() :84
void InteractionCompleted__New2_fn(InteractionCompleted** __retval)
{
    *__retval = InteractionCompleted::New2();
}

// private void OnInteractingChanged(object s, object a) :111
void InteractionCompleted__OnInteractingChanged_fn(InteractionCompleted* __this, uObject* s, uObject* a)
{
    __this->OnInteractingChanged(s, a);
}

// protected override sealed void OnRooted() :95
void InteractionCompleted__OnRooted_fn(InteractionCompleted* __this)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "OnRooted()");
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_visual = (ind1 = __this->_source, ((ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)__this->Parent()));
    uPtr(__this->_visual)->add_IsInteractingChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)InteractionCompleted__OnInteractingChanged_fn, __this));
    __this->_on = uPtr(__this->_visual)->IsInteracting();
}

// protected override sealed void OnUnrooted() :104
void InteractionCompleted__OnUnrooted_fn(InteractionCompleted* __this)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "OnUnrooted()");
    uPtr(__this->_visual)->remove_IsInteractingChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)InteractionCompleted__OnInteractingChanged_fn, __this));
    __this->_visual = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Visual get_Source() :89
void InteractionCompleted__get_Source_fn(InteractionCompleted* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Visual value) :90
void InteractionCompleted__set_Source_fn(InteractionCompleted* __this, ::g::Fuse::Visual* value)
{
    __this->Source(value);
}

// public generated InteractionCompleted() [instance] :84
void InteractionCompleted::ctor_4()
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", ".ctor()");
    ctor_3();
}

// private void OnInteractingChanged(object s, object a) [instance] :111
void InteractionCompleted::OnInteractingChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "OnInteractingChanged(object,object)");
    bool n = uPtr(_visual)->IsInteracting();

    if (n == _on)
        return;

    _on = n;

    if (!n)
        Pulse();
}

// public Fuse.Visual get_Source() [instance] :89
::g::Fuse::Visual* InteractionCompleted::Source()
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.Visual value) [instance] :90
void InteractionCompleted::Source(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "set_Source(Fuse.Visual)");
    _source = value;
}

// public generated InteractionCompleted New() [static] :84
InteractionCompleted* InteractionCompleted::New2()
{
    InteractionCompleted* obj2 = (InteractionCompleted*)uNew(InteractionCompleted_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class iOS :302
// {
static void iOS_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)iOS__New2_fn, 0, true, iOS_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* iOS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 27;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(iOS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.iOS", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = iOS_build;
    type->fp_ctor_ = (void*)iOS__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))iOS__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))iOS__OnUnrooted_fn;
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

// public generated iOS() :302
void iOS__ctor_4_fn(iOS* __this)
{
    __this->ctor_4();
}

// public generated iOS New() :302
void iOS__New2_fn(iOS** __retval)
{
    *__retval = iOS::New2();
}

// protected override sealed void OnRooted() :304
void iOS__OnRooted_fn(iOS* __this)
{
    uStackFrame __("Fuse.Triggers.iOS", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Activate(NULL);
}

// protected override sealed void OnUnrooted() :313
void iOS__OnUnrooted_fn(iOS* __this)
{
    uStackFrame __("Fuse.Triggers.iOS", "OnUnrooted()");
    __this->Deactivate();
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated iOS() [instance] :302
void iOS::ctor_4()
{
    uStackFrame __("Fuse.Triggers.iOS", ".ctor()");
    ctor_3();
}

// public generated iOS New() [static] :302
iOS* iOS::New2()
{
    iOS* obj1 = (iOS*)uNew(iOS_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/Actions/$.uno
// -----------------------------------------------------------------

// public abstract interface IPlayback :198
// {
uInterfaceType* IPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPlayback", 0, 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_CanPause", NULL, NULL, offsetof(IPlayback, fp_get_CanPause), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanPlayTo", NULL, NULL, offsetof(IPlayback, fp_get_CanPlayTo), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanResume", NULL, NULL, offsetof(IPlayback, fp_get_CanResume), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanStop", NULL, NULL, offsetof(IPlayback, fp_get_CanStop), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Pause", NULL, NULL, offsetof(IPlayback, fp_Pause), false, uVoid_typeof(), 0),
        new uFunction("PlayTo", NULL, NULL, offsetof(IPlayback, fp_PlayTo), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Progress", NULL, NULL, offsetof(IPlayback, fp_get_Progress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, NULL, offsetof(IPlayback, fp_set_Progress), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Resume", NULL, NULL, offsetof(IPlayback, fp_Resume), false, uVoid_typeof(), 0),
        new uFunction("Stop", NULL, NULL, offsetof(IPlayback, fp_Stop), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract interface IProgress :366
// {
uInterfaceType* IProgress_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IProgress", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Progress", NULL, NULL, offsetof(IProgress, fp_get_Progress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, NULL, offsetof(IProgress, fp_add_ProgressChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ProgressChanged", NULL, NULL, offsetof(IProgress, fp_remove_ProgressChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract interface IPulseTrigger :875
// {
uInterfaceType* IPulseTrigger_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPulseTrigger", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Pulse", NULL, NULL, offsetof(IPulseTrigger, fp_Pulse), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract interface IValue<T> :131
// {
uInterfaceType* IValue_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IValue`1", 1, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Value", NULL, NULL, offsetof(IValue, fp_get_Value), false, type->T(0), 0),
        new uFunction("set_Value", NULL, NULL, offsetof(IValue, fp_set_Value), false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("add_ValueChanged", NULL, NULL, offsetof(IValue, fp_add_ValueChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))),
        new uFunction("remove_ValueChanged", NULL, NULL, offsetof(IValue, fp_remove_ValueChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// internal abstract interface IVisibility :12
// {
uInterfaceType* IVisibility_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IVisibility", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public delegate void KeyPressHandler(object sender, Fuse.Input.KeyEventArgs args) :255
uDelegateType* KeyPressHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.KeyPressHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyEventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// public sealed class LayoutAnimation :161
// {
static void LayoutAnimation_build(uType* type)
{
    ::STRINGS[3] = uString::Const("LayoutAnimation can only be used on an Element");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[5] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[6] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[7] = ::g::Fuse::Elements::PreplacementHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Triggers::LayoutTransitionedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _element), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _frameTrans), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _hasOld), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldLocal), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldParent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldSize), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldWorld), 0,
        ::g::Fuse::Triggers::LayoutAnimationType_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _type), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)LayoutAnimation__New2_fn, 0, true, LayoutAnimation_typeof(), 0),
        new uFunction("get_Type", NULL, (void*)LayoutAnimation__get_Type_fn, 0, false, ::g::Fuse::Triggers::LayoutAnimationType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)LayoutAnimation__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::LayoutAnimationType_typeof()));
}

::g::Fuse::Triggers::Trigger_type* LayoutAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 36;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(LayoutAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.LayoutAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = LayoutAnimation_build;
    type->fp_ctor_ = (void*)LayoutAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))LayoutAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))LayoutAnimation__OnUnrooted_fn;
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

// public generated LayoutAnimation() :161
void LayoutAnimation__ctor_4_fn(LayoutAnimation* __this)
{
    __this->ctor_4();
}

// public generated LayoutAnimation New() :161
void LayoutAnimation__New2_fn(LayoutAnimation** __retval)
{
    *__retval = LayoutAnimation::New2();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) :226
void LayoutAnimation__OnPlaced_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void OnPreplacement(object sender, Fuse.Elements.PreplacementArgs args) :205
void LayoutAnimation__OnPreplacement_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args)
{
    __this->OnPreplacement(sender, args);
}

// protected override sealed void OnRooted() :171
void LayoutAnimation__OnRooted_fn(LayoutAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[5/*Fuse.Elements.Element*/]);

    if (__this->_element == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[3/*"LayoutAnima...*/], __this, ::STRINGS[4/*"/usr/local/...*/], 177, ::STRINGS[5/*"OnRooted"*/]);
        return;
    }

    uPtr(__this->_element)->add_Placed(uDelegate::New(::TYPES[6/*Fuse.PlacedHandler*/], (void*)LayoutAnimation__OnPlaced_fn, __this));
    uPtr(__this->_element)->add_Preplacement(uDelegate::New(::TYPES[7/*Fuse.Elements.PreplacementHandler*/], (void*)LayoutAnimation__OnPreplacement_fn, __this));
    uPtr(__this->_element)->ignoreTempArrange = true;
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned()), __this->_element, uDelegate::New(::TYPES[8/*Fuse.Triggers.LayoutTransitionedHandler*/], (void*)LayoutAnimation__OnTransitioned_fn, __this));
}

// private void OnTransitioned(object sender, Fuse.Triggers.LayoutTransitionedArgs args) :252
void LayoutAnimation__OnTransitioned_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    __this->OnTransitioned(sender, args);
}

// protected override sealed void OnUnrooted() :187
void LayoutAnimation__OnUnrooted_fn(LayoutAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnUnrooted()");

    if (__this->_element != NULL)
    {
        uPtr(__this->_element)->ignoreTempArrange = false;
        uPtr(__this->_element)->remove_Placed(uDelegate::New(::TYPES[6/*Fuse.PlacedHandler*/], (void*)LayoutAnimation__OnPlaced_fn, __this));
        uPtr(__this->_element)->remove_Preplacement(uDelegate::New(::TYPES[7/*Fuse.Elements.PreplacementHandler*/], (void*)LayoutAnimation__OnPreplacement_fn, __this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned()), __this->_element, uDelegate::New(::TYPES[8/*Fuse.Triggers.LayoutTransitionedHandler*/], (void*)LayoutAnimation__OnTransitioned_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Triggers.LayoutAnimationType get_Type() :166
void LayoutAnimation__get_Type_fn(LayoutAnimation* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Triggers.LayoutAnimationType value) :167
void LayoutAnimation__set_Type_fn(LayoutAnimation* __this, int* value)
{
    __this->Type(*value);
}

// public generated LayoutAnimation() [instance] :161
void LayoutAnimation::ctor_4()
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", ".ctor()");
    _type = 3;
    ctor_3();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance] :226
void LayoutAnimation::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnPlaced(object,Fuse.PlacedArgs)");

    if (!((Type() & 1) == 1))
        return;

    if (_hasOld != ::g::Fuse::UpdateManager::FrameIndex())
        return;

    if (_frameTrans == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    ::g::Uno::Float4x4 ind1 = _oldLocal;
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind1.M41, ind1.M42);
    ::g::Uno::Float2 oldSize = _oldSize;
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(_oldWorld, uPtr(uPtr(_element)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(uPtr(_element)->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(_element, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(_element, oldPosition, uPtr(_element)->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(_element, oldSize, uPtr(_element)->IntendedSize());
    BypassActivate();
    Deactivate();
}

// private void OnPreplacement(object sender, Fuse.Elements.PreplacementArgs args) [instance] :205
void LayoutAnimation::OnPreplacement(uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnPreplacement(object,Fuse.Elements.PreplacementArgs)");

    if (!((Type() & 1) == 1))
        return;

    if (_hasOld == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    if (!uPtr(args)->HasPrev())
        return;

    _hasOld = ::g::Fuse::UpdateManager::FrameIndex();
    _oldWorld = uPtr(_element)->WorldTransform();
    _oldPosition = uPtr(_element)->ActualPosition();
    _oldSize = uPtr(_element)->ActualSize();
    _oldParent = uPtr(_element)->Parent();
    _oldLocal = uPtr(_element)->LocalTransform();
}

// private void OnTransitioned(object sender, Fuse.Triggers.LayoutTransitionedArgs args) [instance] :252
void LayoutAnimation::OnTransitioned(uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnTransitioned(object,Fuse.Triggers.LayoutTransitionedArgs)");

    if (!((Type() & 2) == 2))
        return;

    _frameTrans = ::g::Fuse::UpdateManager::FrameIndex();
    BypassActivate();
    Deactivate();
}

// public Fuse.Triggers.LayoutAnimationType get_Type() [instance] :166
int LayoutAnimation::Type()
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "get_Type()");
    return _type;
}

// public void set_Type(Fuse.Triggers.LayoutAnimationType value) [instance] :167
void LayoutAnimation::Type(int value)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "set_Type(Fuse.Triggers.LayoutAnimationType)");
    _type = value;
}

// public generated LayoutAnimation New() [static] :161
LayoutAnimation* LayoutAnimation::New2()
{
    LayoutAnimation* obj2 = (LayoutAnimation*)uNew(LayoutAnimation_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// public enum LayoutAnimationType :154
uEnumType* LayoutAnimationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.LayoutAnimationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Implicit", 1LL,
        "Explicit", 2LL,
        "Both", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// public static class LayoutTransition :26
// {
// static LayoutTransition() :26
static void LayoutTransition__cctor__fn(uType* __type)
{
    LayoutTransition::_transitioned_ = ::g::Fuse::Triggers::LayoutTransitioned::New1();
    LayoutTransition::PositionLayoutChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::WorldPositionChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::_worldPositionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::PositionChange_ = (uObject*)LayoutTransition__PositionChangeMode::New1();
    LayoutTransition::_positionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::SizeLayoutChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ResizeSizeChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ScalingSizeChange_ = (uObject*)LayoutTransition__ScaleChangeMode::New1();
    LayoutTransition::_sizeChange_ = ::g::Fuse::Properties::CreateHandle();
}

static void LayoutTransition_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[10] = ::g::Fuse::Animations::IResizeMode_typeof();
    ::TYPES[11] = ::g::Fuse::IScalingMode_typeof();
    ::TYPES[12] = ::g::Uno::Float4_typeof();
    ::TYPES[13] = ::g::Uno::Float3_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[14] = ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_positionChange_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_sizeChange_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::LayoutTransitioned_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_transitioned_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_worldPositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::PositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, uFieldFlagsStatic);
    type->Reflection.SetFields(6,
        new uField("PositionChange", 4),
        new uField("PositionLayoutChange", 5),
        new uField("ResizeSizeChange", 6),
        new uField("ScalingSizeChange", 7),
        new uField("SizeLayoutChange", 8),
        new uField("WorldPositionChange", 9));
    type->Reflection.SetFunctions(1,
        new uFunction("get_Transitioned", NULL, (void*)LayoutTransition__get_Transitioned_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof()), 0));
}

uClassType* LayoutTransition_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.LayoutTransition", options);
    type->fp_build_ = LayoutTransition_build;
    type->fp_cctor_ = LayoutTransition__cctor__fn;
    return type;
}

// internal static bool GetPositionChange(Fuse.Visual n, float2& oldPos, float2& newPos) :75
void LayoutTransition__GetPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos, bool* __retval)
{
    *__retval = LayoutTransition::GetPositionChange(n, oldPos, newPos);
}

// internal static bool GetSizeChange(Fuse.Visual n, float2& oldSize, float2& newSize) :135
void LayoutTransition__GetSizeChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize, bool* __retval)
{
    *__retval = LayoutTransition::GetSizeChange(n, oldSize, newSize);
}

// internal static float3 GetWorldPositionChange(Fuse.Visual n) :47
void LayoutTransition__GetWorldPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float3* __retval)
{
    *__retval = LayoutTransition::GetWorldPositionChange(n);
}

// internal static void SetPositionChange(Fuse.Visual n, float2 oldPos, float2 newPos) :85
void LayoutTransition__SetPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    LayoutTransition::SetPositionChange(n, *oldPos, *newPos);
}

// internal static void SetSizeChange(Fuse.Visual n, float2 oldSize, float2 newSize) :130
void LayoutTransition__SetSizeChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    LayoutTransition::SetSizeChange(n, *oldSize, *newSize);
}

// internal static void SetWorldPositionChange(Fuse.Visual n, float3 change) :54
void LayoutTransition__SetWorldPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float3* change)
{
    LayoutTransition::SetWorldPositionChange(n, *change);
}

// public static Fuse.VisualEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() :30
void LayoutTransition__get_Transitioned_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = LayoutTransition::Transitioned();
}

uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_positionChange_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_sizeChange_;
uSStrong< ::g::Fuse::Triggers::LayoutTransitioned*> LayoutTransition::_transitioned_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_worldPositionChange_;
uSStrong<uObject*> LayoutTransition::PositionChange_;
uSStrong<uObject*> LayoutTransition::PositionLayoutChange_;
uSStrong<uObject*> LayoutTransition::ResizeSizeChange_;
uSStrong<uObject*> LayoutTransition::ScalingSizeChange_;
uSStrong<uObject*> LayoutTransition::SizeLayoutChange_;
uSStrong<uObject*> LayoutTransition::WorldPositionChange_;

// internal static bool GetPositionChange(Fuse.Visual n, float2& oldPos, float2& newPos) [static] :75
bool LayoutTransition::GetPositionChange(::g::Fuse::Visual* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "GetPositionChange(Fuse.Visual,float2&,float2&)");
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_positionChange());
    ::g::Uno::Float4 f = (v == NULL) ? ::g::Uno::Float4__New1(0.0f) : uUnbox< ::g::Uno::Float4>(::TYPES[12/*float4*/], v);
    *oldPos = ::g::Uno::Float2__New2(f.X, f.Y);
    *newPos = ::g::Uno::Float2__New2(f.Z, f.W);
    return v != NULL;
}

// internal static bool GetSizeChange(Fuse.Visual n, float2& oldSize, float2& newSize) [static] :135
bool LayoutTransition::GetSizeChange(::g::Fuse::Visual* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "GetSizeChange(Fuse.Visual,float2&,float2&)");
    LayoutTransition_typeof()->Init();
    uObject* res = NULL;

    if ((n != NULL) && uPtr(uPtr(n)->Properties())->TryGet(LayoutTransition::_sizeChange(), &res))
    {
        ::g::Uno::Float4 f = uUnbox< ::g::Uno::Float4>(::TYPES[12/*float4*/], res);
        *oldSize = ::g::Uno::Float2__New2(f.X, f.Y);
        *newSize = ::g::Uno::Float2__New2(f.Z, f.W);
        return true;
    }
    else
    {
        *oldSize = ::g::Uno::Float2__New1(0.0f);
        *newSize = ::g::Uno::Float2__New1(0.0f);
        return false;
    }
}

// internal static float3 GetWorldPositionChange(Fuse.Visual n) [static] :47
::g::Uno::Float3 LayoutTransition::GetWorldPositionChange(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "GetWorldPositionChange(Fuse.Visual)");
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_worldPositionChange());

    if (v != NULL)
        return uUnbox< ::g::Uno::Float3>(::TYPES[13/*float3*/], v);
    else
        return ::g::Uno::Float3__New1(0.0f);
}

// internal static void SetPositionChange(Fuse.Visual n, float2 oldPos, float2 newPos) [static] :85
void LayoutTransition::SetPositionChange(::g::Fuse::Visual* n, ::g::Uno::Float2 oldPos, ::g::Uno::Float2 newPos)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "SetPositionChange(Fuse.Visual,float2,float2)");
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_positionChange(), uBox(::TYPES[12/*float4*/], ::g::Uno::Float4__New7(oldPos, newPos)));
}

// internal static void SetSizeChange(Fuse.Visual n, float2 oldSize, float2 newSize) [static] :130
void LayoutTransition::SetSizeChange(::g::Fuse::Visual* n, ::g::Uno::Float2 oldSize, ::g::Uno::Float2 newSize)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "SetSizeChange(Fuse.Visual,float2,float2)");
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_sizeChange(), uBox(::TYPES[12/*float4*/], ::g::Uno::Float4__New7(oldSize, newSize)));
}

// internal static void SetWorldPositionChange(Fuse.Visual n, float3 change) [static] :54
void LayoutTransition::SetWorldPositionChange(::g::Fuse::Visual* n, ::g::Uno::Float3 change)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "SetWorldPositionChange(Fuse.Visual,float3)");
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_worldPositionChange(), uBox(::TYPES[13/*float3*/], change));
}

// public static Fuse.VisualEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() [static] :30
::g::Fuse::VisualEvent* LayoutTransition::Transitioned()
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "get_Transitioned()");
    LayoutTransition_typeof()->Init();
    return LayoutTransition::_transitioned();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// internal sealed class LayoutTransitioned :17
// {
static void LayoutTransitioned_build(uType* type)
{
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* LayoutTransitioned_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LayoutTransitioned);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Triggers.LayoutTransitioned", options);
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof()));
    type->fp_build_ = LayoutTransitioned_build;
    type->fp_ctor_ = (void*)LayoutTransitioned__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))LayoutTransitioned__Invoke_fn;
    return type;
}

// public generated LayoutTransitioned() :17
void LayoutTransitioned__ctor_1_fn(LayoutTransitioned* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Triggers.LayoutTransitionedHandler handler, object sender, Fuse.Triggers.LayoutTransitionedArgs args) :19
void LayoutTransitioned__Invoke_fn(LayoutTransitioned* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutTransitioned", "Invoke(Fuse.Triggers.LayoutTransitionedHandler,object,Fuse.Triggers.LayoutTransitionedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated LayoutTransitioned New() :17
void LayoutTransitioned__New1_fn(LayoutTransitioned** __retval)
{
    *__retval = LayoutTransitioned::New1();
}

// public generated LayoutTransitioned() [instance] :17
void LayoutTransitioned::ctor_1()
{
    uStackFrame __("Fuse.Triggers.LayoutTransitioned", ".ctor()");
    ctor_();
}

// public generated LayoutTransitioned New() [static] :17
LayoutTransitioned* LayoutTransitioned::New1()
{
    LayoutTransitioned* obj1 = (LayoutTransitioned*)uNew(LayoutTransitioned_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// internal sealed class LayoutTransitionedArgs :10
// {
static void LayoutTransitionedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
}

::g::Fuse::VisualEventArgs_type* LayoutTransitionedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LayoutTransitionedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Triggers.LayoutTransitionedArgs", options);
    type->SetBase(::g::Fuse::VisualEventArgs_typeof());
    type->fp_build_ = LayoutTransitionedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public LayoutTransitionedArgs(Fuse.Visual node) :12
void LayoutTransitionedArgs__ctor_2_fn(LayoutTransitionedArgs* __this, ::g::Fuse::Visual* node)
{
    __this->ctor_2(node);
}

// public LayoutTransitionedArgs New(Fuse.Visual node) :12
void LayoutTransitionedArgs__New3_fn(::g::Fuse::Visual* node, LayoutTransitionedArgs** __retval)
{
    *__retval = LayoutTransitionedArgs::New3(node);
}

// public LayoutTransitionedArgs(Fuse.Visual node) [instance] :12
void LayoutTransitionedArgs::ctor_2(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Triggers.LayoutTransitionedArgs", ".ctor(Fuse.Visual)");
    ctor_1(node);
}

// public LayoutTransitionedArgs New(Fuse.Visual node) [static] :12
LayoutTransitionedArgs* LayoutTransitionedArgs::New3(::g::Fuse::Visual* node)
{
    LayoutTransitionedArgs* obj1 = (LayoutTransitionedArgs*)uNew(LayoutTransitionedArgs_typeof());
    obj1->ctor_2(node);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// internal delegate void LayoutTransitionedHandler(object sender, Fuse.Triggers.LayoutTransitionedArgs args) :16
uDelegateType* LayoutTransitionedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.LayoutTransitionedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class OnBackButton :286
// {
static void OnBackButton_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(29);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OnBackButton__New3_fn, 0, true, OnBackButton_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* OnBackButton_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(OnBackButton);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnBackButton", options);
    type->SetBase(::g::Fuse::Triggers::OnKeyPress_typeof());
    type->fp_build_ = OnBackButton_build;
    type->fp_ctor_ = (void*)OnBackButton__New3_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))OnBackButton__OnRooted_fn;
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

// public generated OnBackButton() :286
void OnBackButton__ctor_5_fn(OnBackButton* __this)
{
    __this->ctor_5();
}

// public generated OnBackButton New() :286
void OnBackButton__New3_fn(OnBackButton** __retval)
{
    *__retval = OnBackButton::New3();
}

// protected override sealed void OnRooted() :288
void OnBackButton__OnRooted_fn(OnBackButton* __this)
{
    uStackFrame __("Fuse.Triggers.OnBackButton", "OnRooted()");
    __this->Key(201);
    ::g::Fuse::Triggers::OnKeyPress__OnRooted_fn(__this);
}

// public generated OnBackButton() [instance] :286
void OnBackButton::ctor_5()
{
    uStackFrame __("Fuse.Triggers.OnBackButton", ".ctor()");
    ctor_4();
}

// public generated OnBackButton New() [static] :286
OnBackButton* OnBackButton::New3()
{
    OnBackButton* obj1 = (OnBackButton*)uNew(OnBackButton_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public class OnKeyPress :257
// {
static void OnKeyPress_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[16] = ::g::Fuse::Input::KeyPressedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Triggers::KeyPressHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Uno::Platform::Key_typeof(), offsetof(::g::Fuse::Triggers::OnKeyPress, _Key), 0,
        ::g::Fuse::Triggers::KeyPressHandler_typeof(), offsetof(::g::Fuse::Triggers::OnKeyPress, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("add_Handler", NULL, (void*)OnKeyPress__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::KeyPressHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)OnKeyPress__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::KeyPressHandler_typeof()),
        new uFunction("get_Key", NULL, (void*)OnKeyPress__get_Key_fn, 0, false, ::g::Uno::Platform::Key_typeof(), 0),
        new uFunction("set_Key", NULL, (void*)OnKeyPress__set_Key_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::Key_typeof()),
        new uFunction(".ctor", NULL, (void*)OnKeyPress__New2_fn, 0, true, OnKeyPress_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* OnKeyPress_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(OnKeyPress);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnKeyPress", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = OnKeyPress_build;
    type->fp_ctor_ = (void*)OnKeyPress__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))OnKeyPress__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))OnKeyPress__OnUnrooted_fn;
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

// public generated OnKeyPress() :257
void OnKeyPress__ctor_4_fn(OnKeyPress* __this)
{
    __this->ctor_4();
}

// public generated void add_Handler(Fuse.Triggers.KeyPressHandler value) :259
void OnKeyPress__add_Handler_fn(OnKeyPress* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.KeyPressHandler value) :259
void OnKeyPress__remove_Handler_fn(OnKeyPress* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Uno.Platform.Key get_Key() :261
void OnKeyPress__get_Key_fn(OnKeyPress* __this, int* __retval)
{
    *__retval = __this->Key();
}

// public generated void set_Key(Uno.Platform.Key value) :261
void OnKeyPress__set_Key_fn(OnKeyPress* __this, int* value)
{
    __this->Key(*value);
}

// public generated OnKeyPress New() :257
void OnKeyPress__New2_fn(OnKeyPress** __retval)
{
    *__retval = OnKeyPress::New2();
}

// internal void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) :275
void OnKeyPress__OnKeyPressed_fn(OnKeyPress* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    __this->OnKeyPressed(sender, args);
}

// protected override void OnRooted() :263
void OnKeyPress__OnRooted_fn(OnKeyPress* __this)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[16/*Fuse.Input.KeyPressedHandler*/], (void*)OnKeyPress__OnKeyPressed_fn, __this));
}

// protected override sealed void OnUnrooted() :269
void OnKeyPress__OnUnrooted_fn(OnKeyPress* __this)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[16/*Fuse.Input.KeyPressedHandler*/], (void*)OnKeyPress__OnKeyPressed_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated OnKeyPress() [instance] :257
void OnKeyPress::ctor_4()
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", ".ctor()");
    ctor_3();
}

// public generated void add_Handler(Fuse.Triggers.KeyPressHandler value) [instance] :259
void OnKeyPress::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "add_Handler(Fuse.Triggers.KeyPressHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[17/*Fuse.Triggers.KeyPressHandler*/]);
}

// public generated void remove_Handler(Fuse.Triggers.KeyPressHandler value) [instance] :259
void OnKeyPress::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "remove_Handler(Fuse.Triggers.KeyPressHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[17/*Fuse.Triggers.KeyPressHandler*/]);
}

// public generated Uno.Platform.Key get_Key() [instance] :261
int OnKeyPress::Key()
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "get_Key()");
    return _Key;
}

// public generated void set_Key(Uno.Platform.Key value) [instance] :261
void OnKeyPress::Key(int value)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "set_Key(Uno.Platform.Key)");
    _Key = value;
}

// internal void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) [instance] :275
void OnKeyPress::OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "OnKeyPressed(object,Fuse.Input.KeyEventArgs)");

    if (uPtr(args)->Key() == Key())
    {
        Pulse();

        if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
            uPtr(Handler1)->Invoke(2, this, args);
    }
}

// public generated OnKeyPress New() [static] :257
OnKeyPress* OnKeyPress::New2()
{
    OnKeyPress* obj1 = (OnKeyPress*)uNew(OnKeyPress_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class OnUserEvent :33
// {
static void OnUserEvent_build(uType* type)
{
    ::STRINGS[6] = uString::Const("OnUserEvent requires a `EventName`");
    ::STRINGS[7] = uString::Const("/usr/local/share/uno/Packages/Fuse.UserEvents/0.29.22/$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[18] = ::g::Fuse::UserEventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Fuse::Triggers::OnUserEventFilter_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _filter), 0,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _rootedEvent), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _scope), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _EventName), 0,
        ::g::Fuse::UserEventHandler_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, Handler1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_EventName", NULL, (void*)OnUserEvent__get_EventName_fn, 0, false, ::g::Uno::UX::Selector_typeof(), 0),
        new uFunction("set_EventName", NULL, (void*)OnUserEvent__set_EventName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Selector_typeof()),
        new uFunction("get_Filter", NULL, (void*)OnUserEvent__get_Filter_fn, 0, false, ::g::Fuse::Triggers::OnUserEventFilter_typeof(), 0),
        new uFunction("set_Filter", NULL, (void*)OnUserEvent__set_Filter_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::OnUserEventFilter_typeof()),
        new uFunction("add_Handler", NULL, (void*)OnUserEvent__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UserEventHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)OnUserEvent__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UserEventHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)OnUserEvent__New2_fn, 0, true, OnUserEvent_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* OnUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(OnUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnUserEvent", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = OnUserEvent_build;
    type->fp_ctor_ = (void*)OnUserEvent__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))OnUserEvent__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))OnUserEvent__OnUnrooted_fn;
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

// public generated OnUserEvent() :33
void OnUserEvent__ctor_4_fn(OnUserEvent* __this)
{
    __this->ctor_4();
}

// public generated Uno.UX.Selector get_EventName() :38
void OnUserEvent__get_EventName_fn(OnUserEvent* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->EventName();
}

// public generated void set_EventName(Uno.UX.Selector value) :38
void OnUserEvent__set_EventName_fn(OnUserEvent* __this, ::g::Uno::UX::Selector* value)
{
    __this->EventName(*value);
}

// public Fuse.Triggers.OnUserEventFilter get_Filter() :43
void OnUserEvent__get_Filter_fn(OnUserEvent* __this, int* __retval)
{
    *__retval = __this->Filter();
}

// public void set_Filter(Fuse.Triggers.OnUserEventFilter value) :44
void OnUserEvent__set_Filter_fn(OnUserEvent* __this, int* value)
{
    __this->Filter(*value);
}

// public generated void add_Handler(Fuse.UserEventHandler value) :50
void OnUserEvent__add_Handler_fn(OnUserEvent* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.UserEventHandler value) :50
void OnUserEvent__remove_Handler_fn(OnUserEvent* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated OnUserEvent New() :33
void OnUserEvent__New2_fn(OnUserEvent** __retval)
{
    *__retval = OnUserEvent::New2();
}

// private void OnRaised(object s, Fuse.UserEventArgs args) :84
void OnUserEvent__OnRaised_fn(OnUserEvent* __this, uObject* s, ::g::Fuse::UserEventArgs* args)
{
    __this->OnRaised(s, args);
}

// protected override sealed void OnRooted() :53
void OnUserEvent__OnRooted_fn(OnUserEvent* __this)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (::g::Uno::String::op_Equality(::g::Uno::UX::Selector__op_Implicit1(__this->EventName()), NULL))
        ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"OnUserEvent...*/], __this, ::STRINGS[7/*"/usr/local/...*/], 58, ::STRINGS[5/*"OnRooted"*/]);
    else
    {
        __this->_rootedEvent = ::g::Fuse::UserEventDispatch::GetByName(__this->EventName());
        uPtr(__this->_rootedEvent)->add_Raised(uDelegate::New(::TYPES[18/*Fuse.UserEventHandler*/], (void*)OnUserEvent__OnRaised_fn, __this));
    }

    __this->_scope = NULL;
}

// protected override sealed void OnUnrooted() :68
void OnUserEvent__OnUnrooted_fn(OnUserEvent* __this)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "OnUnrooted()");

    if (__this->_rootedEvent != NULL)
    {
        uPtr(__this->_rootedEvent)->remove_Raised(uDelegate::New(::TYPES[18/*Fuse.UserEventHandler*/], (void*)OnUserEvent__OnRaised_fn, __this));
        __this->_rootedEvent = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated OnUserEvent() [instance] :33
void OnUserEvent::ctor_4()
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", ".ctor()");
    ctor_3();
}

// public generated Uno.UX.Selector get_EventName() [instance] :38
::g::Uno::UX::Selector OnUserEvent::EventName()
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "get_EventName()");
    return _EventName;
}

// public generated void set_EventName(Uno.UX.Selector value) [instance] :38
void OnUserEvent::EventName(::g::Uno::UX::Selector value)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "set_EventName(Uno.UX.Selector)");
    _EventName = value;
}

// public Fuse.Triggers.OnUserEventFilter get_Filter() [instance] :43
int OnUserEvent::Filter()
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "get_Filter()");
    return _filter;
}

// public void set_Filter(Fuse.Triggers.OnUserEventFilter value) [instance] :44
void OnUserEvent::Filter(int value)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "set_Filter(Fuse.Triggers.OnUserEventFilter)");
    _filter = value;
}

// public generated void add_Handler(Fuse.UserEventHandler value) [instance] :50
void OnUserEvent::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "add_Handler(Fuse.UserEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[18/*Fuse.UserEventHandler*/]);
}

// public generated void remove_Handler(Fuse.UserEventHandler value) [instance] :50
void OnUserEvent::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "remove_Handler(Fuse.UserEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[18/*Fuse.UserEventHandler*/]);
}

// private void OnRaised(object s, Fuse.UserEventArgs args) [instance] :84
void OnUserEvent::OnRaised(uObject* s, ::g::Fuse::UserEventArgs* args)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "OnRaised(object,Fuse.UserEventArgs)");

    if (Filter() == 0)
    {
        if (_scope == NULL)
        {
            ::g::Fuse::Visual* n;
            ::g::Fuse::UserEvent::ScanTree(Parent(), EventName(), &n);
            _scope = n;
        }

        if (_scope != uPtr(args)->Source())
            return;
    }

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, args);

    Pulse();
}

// public generated OnUserEvent New() [static] :33
OnUserEvent* OnUserEvent::New2()
{
    OnUserEvent* obj1 = (OnUserEvent*)uNew(OnUserEvent_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.29.22/$.uno
// -----------------------------------------------------------

// public enum OnUserEventFilter :7
uEnumType* OnUserEventFilter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.OnUserEventFilter", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Local", 0LL,
        "Global", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.29.22/$.uno
// -----------------------------------------------------------------

// public sealed class PageBeginLoading :735
// {
static void PageBeginLoading_build(uType* type)
{
    ::STRINGS[8] = uString::Const("WebView");
    ::STRINGS[9] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.WebView/0.29.22/$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[19] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Triggers::PageBeginLoading, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageBeginLoading__New2_fn, 0, true, PageBeginLoading_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* PageBeginLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(PageBeginLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PageBeginLoading", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = PageBeginLoading_build;
    type->fp_ctor_ = (void*)PageBeginLoading__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageBeginLoading__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageBeginLoading__OnUnrooted_fn;
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

// public generated PageBeginLoading() :735
void PageBeginLoading__ctor_4_fn(PageBeginLoading* __this)
{
    __this->ctor_4();
}

// public generated PageBeginLoading New() :735
void PageBeginLoading__New2_fn(PageBeginLoading** __retval)
{
    *__retval = PageBeginLoading::New2();
}

// private void OnPageBeginLoading(object s, object a) :753
void PageBeginLoading__OnPageBeginLoading_fn(PageBeginLoading* __this, uObject* s, uObject* a)
{
    __this->OnPageBeginLoading(s, a);
}

// protected override sealed void OnRooted() :739
void PageBeginLoading__OnRooted_fn(PageBeginLoading* __this)
{
    uStackFrame __("Fuse.Triggers.PageBeginLoading", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[19/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs<uObject*>(__this->Parent(), ::TYPES[19/*Fuse.Controls.IWebView*/]);
        ::g::Fuse::Controls::IWebView::add_BeginLoading(uInterface(uPtr(__this->_webView), ::TYPES[19/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)PageBeginLoading__OnPageBeginLoading_fn, __this));
    }
    else
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[8/*"WebView"*/], __this->Parent(), __this, ::STRINGS[9/*"/usr/local/...*/], 749, ::STRINGS[5/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted() :758
void PageBeginLoading__OnUnrooted_fn(PageBeginLoading* __this)
{
    uStackFrame __("Fuse.Triggers.PageBeginLoading", "OnUnrooted()");

    if (__this->_webView != NULL)
    {
        ::g::Fuse::Controls::IWebView::remove_BeginLoading(uInterface(uPtr(__this->_webView), ::TYPES[19/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)PageBeginLoading__OnPageBeginLoading_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated PageBeginLoading() [instance] :735
void PageBeginLoading::ctor_4()
{
    uStackFrame __("Fuse.Triggers.PageBeginLoading", ".ctor()");
    ctor_3();
}

// private void OnPageBeginLoading(object s, object a) [instance] :753
void PageBeginLoading::OnPageBeginLoading(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.PageBeginLoading", "OnPageBeginLoading(object,object)");
    Pulse();
}

// public generated PageBeginLoading New() [static] :735
PageBeginLoading* PageBeginLoading::New2()
{
    PageBeginLoading* obj1 = (PageBeginLoading*)uNew(PageBeginLoading_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.29.22/$.uno
// -----------------------------------------------------------------

// public sealed class PageLoaded :776
// {
static void PageLoaded_build(uType* type)
{
    ::STRINGS[8] = uString::Const("WebView");
    ::STRINGS[9] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.WebView/0.29.22/$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[19] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Triggers::PageLoaded, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageLoaded__New2_fn, 0, true, PageLoaded_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* PageLoaded_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(PageLoaded);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PageLoaded", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = PageLoaded_build;
    type->fp_ctor_ = (void*)PageLoaded__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageLoaded__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageLoaded__OnUnrooted_fn;
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

// public generated PageLoaded() :776
void PageLoaded__ctor_4_fn(PageLoaded* __this)
{
    __this->ctor_4();
}

// public generated PageLoaded New() :776
void PageLoaded__New2_fn(PageLoaded** __retval)
{
    *__retval = PageLoaded::New2();
}

// private void OnPageLoaded(object s, object a) :794
void PageLoaded__OnPageLoaded_fn(PageLoaded* __this, uObject* s, uObject* a)
{
    __this->OnPageLoaded(s, a);
}

// protected override sealed void OnRooted() :780
void PageLoaded__OnRooted_fn(PageLoaded* __this)
{
    uStackFrame __("Fuse.Triggers.PageLoaded", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[19/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs<uObject*>(__this->Parent(), ::TYPES[19/*Fuse.Controls.IWebView*/]);
        ::g::Fuse::Controls::IWebView::add_PageLoaded(uInterface(uPtr(__this->_webView), ::TYPES[19/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)PageLoaded__OnPageLoaded_fn, __this));
    }
    else
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[8/*"WebView"*/], __this->Parent(), __this, ::STRINGS[9/*"/usr/local/...*/], 790, ::STRINGS[5/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted() :799
void PageLoaded__OnUnrooted_fn(PageLoaded* __this)
{
    uStackFrame __("Fuse.Triggers.PageLoaded", "OnUnrooted()");

    if (__this->_webView != NULL)
    {
        ::g::Fuse::Controls::IWebView::remove_PageLoaded(uInterface(uPtr(__this->_webView), ::TYPES[19/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)PageLoaded__OnPageLoaded_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated PageLoaded() [instance] :776
void PageLoaded::ctor_4()
{
    uStackFrame __("Fuse.Triggers.PageLoaded", ".ctor()");
    ctor_3();
}

// private void OnPageLoaded(object s, object a) [instance] :794
void PageLoaded::OnPageLoaded(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.PageLoaded", "OnPageLoaded(object,object)");
    Pulse();
}

// public generated PageLoaded New() [static] :776
PageLoaded* PageLoaded::New2()
{
    PageLoaded* obj1 = (PageLoaded*)uNew(PageLoaded_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// private sealed class LayoutTransition.PositionChangeMode :59
// {
static void LayoutTransition__PositionChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface1));
}

LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__PositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__PositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__PositionChangeMode_type);
    type = (LayoutTransition__PositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.PositionChangeMode", options);
    type->fp_build_ = LayoutTransition__PositionChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__PositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__PositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__PositionChangeMode__get_Flags_fn;
    return type;
}

// public generated PositionChangeMode() :59
void LayoutTransition__PositionChangeMode__ctor__fn(LayoutTransition__PositionChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :68
void LayoutTransition__PositionChangeMode__get_Flags_fn(LayoutTransition__PositionChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :61
void LayoutTransition__PositionChangeMode__GetAbsVector_fn(LayoutTransition__PositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated PositionChangeMode New() :59
void LayoutTransition__PositionChangeMode__New1_fn(LayoutTransition__PositionChangeMode** __retval)
{
    *__retval = LayoutTransition__PositionChangeMode::New1();
}

// public generated PositionChangeMode() [instance] :59
void LayoutTransition__PositionChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :68
int LayoutTransition__PositionChangeMode::Flags()
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.PositionChangeMode", "get_Flags()");
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :61
::g::Uno::Float3 LayoutTransition__PositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.PositionChangeMode", "GetAbsVector(Fuse.Translation)");
    ::g::Uno::Float2 oldPos;
    ::g::Uno::Float2 newPos;

    if (!::g::Fuse::Triggers::LayoutTransition::GetPositionChange(uPtr(t)->RelativeNode(), &oldPos, &newPos))
        return ::g::Uno::Float3__New1(0.0f);

    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(::g::Uno::Float2__op_Subtraction2(oldPos, newPos), 0.0f), uPtr(t)->Vector());
}

// public generated PositionChangeMode New() [static] :59
LayoutTransition__PositionChangeMode* LayoutTransition__PositionChangeMode::New1()
{
    LayoutTransition__PositionChangeMode* obj1 = (LayoutTransition__PositionChangeMode*)uNew(LayoutTransition__PositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class ProgressAnimation :372
// {
static void ProgressAnimation_build(uType* type)
{
    ::TYPES[20] = ::g::Fuse::Triggers::IProgress_typeof();
    ::TYPES[21] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _prevValue), 0,
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _progress), 0,
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _Source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ProgressAnimation__New2_fn, 0, true, ProgressAnimation_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)ProgressAnimation__get_Source_fn, 0, false, ::g::Fuse::Triggers::IProgress_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)ProgressAnimation__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IProgress_typeof()));
}

::g::Fuse::Triggers::Trigger_type* ProgressAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ProgressAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.ProgressAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = ProgressAnimation_build;
    type->fp_ctor_ = (void*)ProgressAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ProgressAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ProgressAnimation__OnUnrooted_fn;
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

// public generated ProgressAnimation() :372
void ProgressAnimation__ctor_4_fn(ProgressAnimation* __this)
{
    __this->ctor_4();
}

// private Fuse.Triggers.IProgress FindIProgress() :374
void ProgressAnimation__FindIProgress_fn(ProgressAnimation* __this, uObject** __retval)
{
    *__retval = __this->FindIProgress();
}

// public generated ProgressAnimation New() :372
void ProgressAnimation__New2_fn(ProgressAnimation** __retval)
{
    *__retval = ProgressAnimation::New2();
}

// private void OnChanged(object s, object a) :409
void ProgressAnimation__OnChanged_fn(ProgressAnimation* __this, uObject* s, uObject* a)
{
    __this->OnChanged(s, a);
}

// protected override sealed void OnRooted() :385
void ProgressAnimation__OnRooted_fn(ProgressAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "OnRooted()");
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_progress = (ind1 = __this->Source(), ((ind1 != NULL) ? ind1 : (uObject*)__this->FindIProgress()));

    if (__this->_progress != NULL)
    {
        ::g::Fuse::Triggers::IProgress::add_ProgressChanged(uInterface(uPtr(__this->_progress), ::TYPES[20/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[21/*Uno.UX.ValueChangedHandler<double>*/], (void*)ProgressAnimation__OnChanged_fn, __this));
        __this->_prevValue = ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(__this->_progress), ::TYPES[20/*Fuse.Triggers.IProgress*/]));
        __this->BypassSeek(__this->_prevValue, 0);
    }
}

// protected override sealed void OnUnrooted() :398
void ProgressAnimation__OnUnrooted_fn(ProgressAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "OnUnrooted()");

    if (__this->_progress != NULL)
    {
        ::g::Fuse::Triggers::IProgress::remove_ProgressChanged(uInterface(uPtr(__this->_progress), ::TYPES[20/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[21/*Uno.UX.ValueChangedHandler<double>*/], (void*)ProgressAnimation__OnChanged_fn, __this));
        __this->_progress = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Triggers.IProgress get_Source() :381
void ProgressAnimation__get_Source_fn(ProgressAnimation* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(Fuse.Triggers.IProgress value) :381
void ProgressAnimation__set_Source_fn(ProgressAnimation* __this, uObject* value)
{
    __this->Source(value);
}

// public generated ProgressAnimation() [instance] :372
void ProgressAnimation::ctor_4()
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", ".ctor()");
    ctor_3();
}

// private Fuse.Triggers.IProgress FindIProgress() [instance] :374
uObject* ProgressAnimation::FindIProgress()
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "FindIProgress()");
    ::g::Fuse::Visual* p = Parent();

    while ((p != NULL) && !uIs(p, ::TYPES[20/*Fuse.Triggers.IProgress*/]))
        p = uPtr(p)->Parent();

    return uAs<uObject*>(p, ::TYPES[20/*Fuse.Triggers.IProgress*/]);
}

// private void OnChanged(object s, object a) [instance] :409
void ProgressAnimation::OnChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "OnChanged(object,object)");
    double p = ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(_progress), ::TYPES[20/*Fuse.Triggers.IProgress*/]));
    double diff = p - _prevValue;
    _prevValue = p;
    Seek(p, (diff >= 0.0) ? 0 : 1);
}

// public generated Fuse.Triggers.IProgress get_Source() [instance] :381
uObject* ProgressAnimation::Source()
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "get_Source()");
    return _Source;
}

// public generated void set_Source(Fuse.Triggers.IProgress value) [instance] :381
void ProgressAnimation::Source(uObject* value)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "set_Source(Fuse.Triggers.IProgress)");
    _Source = value;
}

// public generated ProgressAnimation New() [static] :372
ProgressAnimation* ProgressAnimation::New2()
{
    ProgressAnimation* obj2 = (ProgressAnimation*)uNew(ProgressAnimation_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.29.22/Triggers/$.uno
// -----------------------------------------------------------------------------

// public partial sealed class PullToReload :11
// {
// static PullToReload() :81
static void PullToReload__cctor_2_fn(uType* __type)
{
}

static void PullToReload_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[22] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[23] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[24] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[25] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[26] = ::g::Fuse::Node_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[27] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[28] = ::g::Fuse::VisualEventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface5));
    type->SetFields(36,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _internLoading), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _isLoading), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _loading), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _pulledPastThreshold), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _pulling), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _rest), 0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, StateGroup), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, threshold), 0,
        ::g::Fuse::VisualEventHandler_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, ReloadHandler1), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_IsLoading", NULL, (void*)PullToReload__get_IsLoading_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsLoading", NULL, (void*)PullToReload__set_IsLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Loading", NULL, (void*)PullToReload__get_Loading_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Loading", NULL, (void*)PullToReload__set_Loading_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction(".ctor", NULL, (void*)PullToReload__New3_fn, 0, true, PullToReload_typeof(), 0),
        new uFunction("get_PulledPastThreshold", NULL, (void*)PullToReload__get_PulledPastThreshold_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_PulledPastThreshold", NULL, (void*)PullToReload__set_PulledPastThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("get_Pulling", NULL, (void*)PullToReload__get_Pulling_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Pulling", NULL, (void*)PullToReload__set_Pulling_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("add_ReloadHandler", NULL, (void*)PullToReload__add_ReloadHandler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::VisualEventHandler_typeof()),
        new uFunction("remove_ReloadHandler", NULL, (void*)PullToReload__remove_ReloadHandler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::VisualEventHandler_typeof()),
        new uFunction("get_Rest", NULL, (void*)PullToReload__get_Rest_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Rest", NULL, (void*)PullToReload__set_Rest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()));
}

::g::Fuse::Triggers::ScrollingAnimation_type* PullToReload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::ScrollingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 45;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(PullToReload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::ScrollingAnimation_type);
    type = (::g::Fuse::Triggers::ScrollingAnimation_type*)uClassType::New("Fuse.Triggers.PullToReload", options);
    type->SetBase(::g::Fuse::Triggers::ScrollingAnimation_typeof());
    type->fp_build_ = PullToReload_build;
    type->fp_ctor_ = (void*)PullToReload__New3_fn;
    type->fp_cctor_ = PullToReload__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PullToReload__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PullToReload__OnUnrooted_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Triggers::ScrollingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public PullToReload() :85
void PullToReload__ctor_5_fn(PullToReload* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :89
void PullToReload__InitializeUX_fn(PullToReload* __this)
{
    __this->InitializeUX();
}

// public bool get_IsLoading() :63
void PullToReload__get_IsLoading_fn(PullToReload* __this, bool* __retval)
{
    *__retval = __this->IsLoading();
}

// public void set_IsLoading(bool value) :64
void PullToReload__set_IsLoading_fn(PullToReload* __this, bool* value)
{
    __this->IsLoading(*value);
}

// public Fuse.Triggers.State get_Loading() :42
void PullToReload__get_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Loading();
}

// public void set_Loading(Fuse.Triggers.State value) :43
void PullToReload__set_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Loading(value);
}

// public PullToReload New() :85
void PullToReload__New3_fn(PullToReload** __retval)
{
    *__retval = PullToReload::New3();
}

// protected override sealed void OnRooted() :48
void PullToReload__OnRooted_fn(PullToReload* __this)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "OnRooted()");
    ::g::Fuse::Triggers::ScrollingAnimation__OnRooted_fn(__this);
    ::g::Fuse::Node::Relate(__this->Parent(), __this->StateGroup);
}

// protected override sealed void OnUnrooted() :54
void PullToReload__OnUnrooted_fn(PullToReload* __this)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "OnUnrooted()");
    ::g::Fuse::Node::Unrelate(__this->Parent(), __this->StateGroup);
    ::g::Fuse::Triggers::ScrollingAnimation__OnUnrooted_fn(__this);
}

// public Fuse.Triggers.State get_PulledPastThreshold() :37
void PullToReload__get_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->PulledPastThreshold();
}

// public void set_PulledPastThreshold(Fuse.Triggers.State value) :38
void PullToReload__set_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->PulledPastThreshold(value);
}

// public Fuse.Triggers.State get_Pulling() :32
void PullToReload__get_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Pulling();
}

// public void set_Pulling(Fuse.Triggers.State value) :33
void PullToReload__set_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Pulling(value);
}

// private void ReachThreshold() :102
void PullToReload__ReachThreshold_fn(PullToReload* __this)
{
    __this->ReachThreshold();
}

// private void ReleasePull() :85
void PullToReload__ReleasePull_fn(PullToReload* __this)
{
    __this->ReleasePull();
}

// public generated void add_ReloadHandler(Fuse.VisualEventHandler value) :46
void PullToReload__add_ReloadHandler_fn(PullToReload* __this, uDelegate* value)
{
    __this->add_ReloadHandler(value);
}

// public generated void remove_ReloadHandler(Fuse.VisualEventHandler value) :46
void PullToReload__remove_ReloadHandler_fn(PullToReload* __this, uDelegate* value)
{
    __this->remove_ReloadHandler(value);
}

// private Fuse.Triggers.State Replace(Fuse.Triggers.State state, Fuse.Triggers.State value) :15
void PullToReload__Replace_fn(PullToReload* __this, ::g::Fuse::Triggers::State* state, ::g::Fuse::Triggers::State* value, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Replace(state, value);
}

// public Fuse.Triggers.State get_Rest() :27
void PullToReload__get_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Rest();
}

// public void set_Rest(Fuse.Triggers.State value) :28
void PullToReload__set_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Rest(value);
}

// private void StartPull() :76
void PullToReload__StartPull_fn(PullToReload* __this)
{
    __this->StartPull();
}

// public PullToReload() [instance] :85
void PullToReload::ctor_5()
{
    uStackFrame __("Fuse.Triggers.PullToReload", ".ctor()");
    StateGroup = ::g::Fuse::Triggers::StateGroup::New2();
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :89
void PullToReload::InitializeUX()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "InitializeUX()");
    ::g::Fuse::Triggers::Actions::Callback* temp = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp1 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp2 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Animations::Nothing* temp3 = ::g::Fuse::Animations::Nothing::New2();
    Range(1);
    temp->Direction(0);
    temp->Action(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)PullToReload__StartPull_fn, this));
    temp1->Direction(1);
    temp1->Action(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)PullToReload__ReleasePull_fn, this));
    temp2->Delay(0.5f);
    temp2->Action(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)PullToReload__ReachThreshold_fn, this));
    temp3->Duration(1.0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp2);
}

// public bool get_IsLoading() [instance] :63
bool PullToReload::IsLoading()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "get_IsLoading()");
    return _isLoading;
}

// public void set_IsLoading(bool value) [instance] :64
void PullToReload::IsLoading(bool value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_IsLoading(bool)");
    _isLoading = value;
    _internLoading = value;

    if (_isLoading)
        uPtr(StateGroup)->Active(Loading());
    else
        uPtr(StateGroup)->Active(Rest());
}

// public Fuse.Triggers.State get_Loading() [instance] :42
::g::Fuse::Triggers::State* PullToReload::Loading()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "get_Loading()");
    return _loading;
}

// public void set_Loading(Fuse.Triggers.State value) [instance] :43
void PullToReload::Loading(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_Loading(Fuse.Triggers.State)");
    _loading = Replace(_loading, value);
}

// public Fuse.Triggers.State get_PulledPastThreshold() [instance] :37
::g::Fuse::Triggers::State* PullToReload::PulledPastThreshold()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "get_PulledPastThreshold()");
    return _pulledPastThreshold;
}

// public void set_PulledPastThreshold(Fuse.Triggers.State value) [instance] :38
void PullToReload::PulledPastThreshold(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_PulledPastThreshold(Fuse.Triggers.State)");
    _pulledPastThreshold = Replace(_pulledPastThreshold, value);
}

// public Fuse.Triggers.State get_Pulling() [instance] :32
::g::Fuse::Triggers::State* PullToReload::Pulling()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "get_Pulling()");
    return _pulling;
}

// public void set_Pulling(Fuse.Triggers.State value) [instance] :33
void PullToReload::Pulling(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_Pulling(Fuse.Triggers.State)");
    _pulling = Replace(_pulling, value);
}

// private void ReachThreshold() [instance] :102
void PullToReload::ReachThreshold()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "ReachThreshold()");

    if (IsLoading() || _internLoading)
        return;

    threshold = true;
    uPtr(StateGroup)->Active(PulledPastThreshold());
}

// private void ReleasePull() [instance] :85
void PullToReload::ReleasePull()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "ReleasePull()");

    if (IsLoading() || _internLoading)
        return;

    if (threshold)
    {
        _internLoading = true;
        uPtr(StateGroup)->Active(Loading());

        if (::g::Uno::Delegate::op_Inequality(ReloadHandler1, NULL))
            uPtr(ReloadHandler1)->Invoke(2, this, (::g::Fuse::VisualEventArgs*)::g::Fuse::VisualEventArgs::New2(Parent()));
    }
    else
        uPtr(StateGroup)->Active(Rest());
}

// public generated void add_ReloadHandler(Fuse.VisualEventHandler value) [instance] :46
void PullToReload::add_ReloadHandler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "add_ReloadHandler(Fuse.VisualEventHandler)");
    ReloadHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ReloadHandler1, value), ::TYPES[28/*Fuse.VisualEventHandler*/]);
}

// public generated void remove_ReloadHandler(Fuse.VisualEventHandler value) [instance] :46
void PullToReload::remove_ReloadHandler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "remove_ReloadHandler(Fuse.VisualEventHandler)");
    ReloadHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ReloadHandler1, value), ::TYPES[28/*Fuse.VisualEventHandler*/]);
}

// private Fuse.Triggers.State Replace(Fuse.Triggers.State state, Fuse.Triggers.State value) [instance] :15
::g::Fuse::Triggers::State* PullToReload::Replace(::g::Fuse::Triggers::State* state, ::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "Replace(Fuse.Triggers.State,Fuse.Triggers.State)");
    bool ret2;

    if (state != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), state, &ret2);

    if (value != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), value);

    return value;
}

// public Fuse.Triggers.State get_Rest() [instance] :27
::g::Fuse::Triggers::State* PullToReload::Rest()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "get_Rest()");
    return _rest;
}

// public void set_Rest(Fuse.Triggers.State value) [instance] :28
void PullToReload::Rest(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_Rest(Fuse.Triggers.State)");
    _rest = Replace(_rest, value);
}

// private void StartPull() [instance] :76
void PullToReload::StartPull()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "StartPull()");

    if (IsLoading() || _internLoading)
        return;

    threshold = false;
    uPtr(StateGroup)->Active(Pulling());
}

// public PullToReload New() [static] :85
PullToReload* PullToReload::New3()
{
    PullToReload* obj1 = (PullToReload*)uNew(PullToReload_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// private enum WhileFloat.Range :1982
uEnumType* WhileFloat__Range_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.WhileFloat.Range", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Open", 0LL,
        "Exclusive", 1LL,
        "Inclusive", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class RangeAnimation :431
// {
static void RangeAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::RangeAnimation, _maximum), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::RangeAnimation, _minimum), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::RangeAnimation, _prevValue), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::RangeAnimation, _value), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Maximum", NULL, (void*)RangeAnimation__get_Maximum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)RangeAnimation__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Minimum", NULL, (void*)RangeAnimation__get_Minimum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)RangeAnimation__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)RangeAnimation__New2_fn, 0, true, RangeAnimation_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)RangeAnimation__get_Value_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)RangeAnimation__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Triggers::Trigger_type* RangeAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(RangeAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.RangeAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = RangeAnimation_build;
    type->fp_ctor_ = (void*)RangeAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RangeAnimation__OnRooted_fn;
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

// public generated RangeAnimation() :431
void RangeAnimation__ctor_4_fn(RangeAnimation* __this)
{
    __this->ctor_4();
}

// public float get_Maximum() :455
void RangeAnimation__get_Maximum_fn(RangeAnimation* __this, float* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float value) :456
void RangeAnimation__set_Maximum_fn(RangeAnimation* __this, float* value)
{
    __this->Maximum(*value);
}

// public float get_Minimum() :448
void RangeAnimation__get_Minimum_fn(RangeAnimation* __this, float* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float value) :449
void RangeAnimation__set_Minimum_fn(RangeAnimation* __this, float* value)
{
    __this->Minimum(*value);
}

// public generated RangeAnimation New() :431
void RangeAnimation__New2_fn(RangeAnimation** __retval)
{
    *__retval = RangeAnimation::New2();
}

// protected override sealed void OnRooted() :460
void RangeAnimation__OnRooted_fn(RangeAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_prevValue = (double)__this->Value();
    __this->BypassSeek(__this->_prevValue, 0);
}

// private void Update() :468
void RangeAnimation__Update_fn(RangeAnimation* __this)
{
    __this->Update();
}

// public float get_Value() :436
void RangeAnimation__get_Value_fn(RangeAnimation* __this, float* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(float value) :437
void RangeAnimation__set_Value_fn(RangeAnimation* __this, float* value)
{
    __this->Value(*value);
}

// public generated RangeAnimation() [instance] :431
void RangeAnimation::ctor_4()
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", ".ctor()");
    _minimum = 0.0f;
    _maximum = 1.0f;
    ctor_3();
}

// public float get_Maximum() [instance] :455
float RangeAnimation::Maximum()
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "get_Maximum()");
    return _maximum;
}

// public void set_Maximum(float value) [instance] :456
void RangeAnimation::Maximum(float value)
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "set_Maximum(float)");
    _maximum = value;
}

// public float get_Minimum() [instance] :448
float RangeAnimation::Minimum()
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "get_Minimum()");
    return _minimum;
}

// public void set_Minimum(float value) [instance] :449
void RangeAnimation::Minimum(float value)
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "set_Minimum(float)");
    _minimum = value;
}

// private void Update() [instance] :468
void RangeAnimation::Update()
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "Update()");
    float p = Value();
    double diff = (double)p - _prevValue;
    _prevValue = (double)p;
    float relative = ::g::Uno::Math::Clamp1((p - Minimum()) / (Maximum() - Minimum()), 0.0f, 1.0f);
    Seek((double)relative, (diff >= 0.0) ? 0 : 1);
}

// public float get_Value() [instance] :436
float RangeAnimation::Value()
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "get_Value()");
    return (float)_value;
}

// public void set_Value(float value) [instance] :437
void RangeAnimation::Value(float value)
{
    uStackFrame __("Fuse.Triggers.RangeAnimation", "set_Value(float)");
    _value = (double)value;

    if (IsRootingCompleted())
        Update();
}

// public generated RangeAnimation New() [static] :431
RangeAnimation* RangeAnimation::New2()
{
    RangeAnimation* obj1 = (RangeAnimation*)uNew(RangeAnimation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// private sealed class WhileKeyboardVisible.RelativeToKeyboardMode :226
// {
static void WhileKeyboardVisible__RelativeToKeyboardMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode_type, interface1));
}

WhileKeyboardVisible__RelativeToKeyboardMode_type* WhileKeyboardVisible__RelativeToKeyboardMode_typeof()
{
    static uSStrong<WhileKeyboardVisible__RelativeToKeyboardMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WhileKeyboardVisible__RelativeToKeyboardMode);
    options.TypeSize = sizeof(WhileKeyboardVisible__RelativeToKeyboardMode_type);
    type = (WhileKeyboardVisible__RelativeToKeyboardMode_type*)uClassType::New("Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", options);
    type->fp_build_ = WhileKeyboardVisible__RelativeToKeyboardMode_build;
    type->fp_ctor_ = (void*)WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))WhileKeyboardVisible__RelativeToKeyboardMode__get_Flags_fn;
    return type;
}

// public generated RelativeToKeyboardMode() :226
void WhileKeyboardVisible__RelativeToKeyboardMode__ctor__fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :233
void WhileKeyboardVisible__RelativeToKeyboardMode__get_Flags_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :228
void WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated RelativeToKeyboardMode New() :226
void WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn(WhileKeyboardVisible__RelativeToKeyboardMode** __retval)
{
    *__retval = WhileKeyboardVisible__RelativeToKeyboardMode::New1();
}

// public generated RelativeToKeyboardMode() [instance] :226
void WhileKeyboardVisible__RelativeToKeyboardMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :233
int WhileKeyboardVisible__RelativeToKeyboardMode::Flags()
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", "get_Flags()");
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :228
::g::Uno::Float3 WhileKeyboardVisible__RelativeToKeyboardMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", "GetAbsVector(Fuse.Translation)");
    return ::g::Uno::Float3__New2(0.0f, uPtr(t)->Vector().Y * ::g::Fuse::Triggers::WhileKeyboardVisible::_deltaY(), 0.0f);
}

// public generated RelativeToKeyboardMode New() [static] :226
WhileKeyboardVisible__RelativeToKeyboardMode* WhileKeyboardVisible__RelativeToKeyboardMode::New1()
{
    WhileKeyboardVisible__RelativeToKeyboardMode* obj1 = (WhileKeyboardVisible__RelativeToKeyboardMode*)uNew(WhileKeyboardVisible__RelativeToKeyboardMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public class RemovingAnimation :490
// {
static void RemovingAnimation_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Double removal of Visual");
    ::STRINGS[11] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno");
    ::STRINGS[12] = uString::Const("Fuse.IBeginRemoveVisualListener.OnBeginRemoveVisual");
    ::STRINGS[13] = uString::Const("Unexpected done");
    ::STRINGS[14] = uString::Const("OnDone");
    ::TYPES[1] = uObject_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RemovingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RemovingAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RemovingAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RemovingAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(RemovingAnimation_type, interface4),
        ::g::Fuse::IBeginRemoveVisualListener_typeof(), offsetof(RemovingAnimation_type, interface5));
    type->SetFields(27,
        ::g::Fuse::PendingRemoveVisual_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation, _args), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RemovingAnimation__New2_fn, 0, true, RemovingAnimation_typeof(), 0));
}

RemovingAnimation_type* RemovingAnimation_typeof()
{
    static uSStrong<RemovingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(RemovingAnimation);
    options.TypeSize = sizeof(RemovingAnimation_type);
    type = (RemovingAnimation_type*)uClassType::New("Fuse.Triggers.RemovingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = RemovingAnimation_build;
    type->fp_ctor_ = (void*)RemovingAnimation__New2_fn;
    type->interface5.fp_OnBeginRemoveVisual = (void(*)(uObject*, ::g::Fuse::PendingRemoveVisual*))RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn;
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

// public generated RemovingAnimation() :490
void RemovingAnimation__ctor_4_fn(RemovingAnimation* __this)
{
    __this->ctor_4();
}

// private void Fuse.IBeginRemoveVisualListener.OnBeginRemoveVisual(Fuse.PendingRemoveVisual pr) :494
void RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn(RemovingAnimation* __this, ::g::Fuse::PendingRemoveVisual* pr)
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", "Fuse.IBeginRemoveVisualListener.OnBeginRemoveVisual(Fuse.PendingRemoveVisual)");

    if (__this->_args != NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[10/*"Double remo...*/], __this, ::STRINGS[11/*"/usr/local/...*/], 498, ::STRINGS[12/*"Fuse.IBegin...*/]);
        return;
    }

    __this->_args = pr;
    uPtr(__this->_args)->AddSubscriber();
    __this->Activate(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)RemovingAnimation__OnDone_fn, __this));
}

// public generated RemovingAnimation New() :490
void RemovingAnimation__New2_fn(RemovingAnimation** __retval)
{
    *__retval = RemovingAnimation::New2();
}

// private void OnDone() :507
void RemovingAnimation__OnDone_fn(RemovingAnimation* __this)
{
    __this->OnDone();
}

// public generated RemovingAnimation() [instance] :490
void RemovingAnimation::ctor_4()
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", ".ctor()");
    ctor_3();
}

// private void OnDone() [instance] :507
void RemovingAnimation::OnDone()
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", "OnDone()");

    if (_args == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[13/*"Unexpected ...*/], this, ::STRINGS[11/*"/usr/local/...*/], 511, ::STRINGS[14/*"OnDone"*/]);
        return;
    }

    uPtr(_args)->RemoveSubscriber();
    _args = NULL;
}

// public generated RemovingAnimation New() [static] :490
RemovingAnimation* RemovingAnimation::New2()
{
    RemovingAnimation* obj1 = (RemovingAnimation*)uNew(RemovingAnimation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// private sealed class LayoutTransition.ResizeChangeMode :91
// {
static void LayoutTransition__ResizeChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(LayoutTransition__ResizeChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__ResizeChangeMode_type, interface1));
}

LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ResizeChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__ResizeChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ResizeChangeMode_type);
    type = (LayoutTransition__ResizeChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ResizeChangeMode", options);
    type->fp_build_ = LayoutTransition__ResizeChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__ResizeChangeMode__New1_fn;
    type->interface0.fp_GetSizeChange = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*))LayoutTransition__ResizeChangeMode__GetSizeChange_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__ResizeChangeMode__get_Flags_fn;
    return type;
}

// public generated ResizeChangeMode() :91
void LayoutTransition__ResizeChangeMode__ctor__fn(LayoutTransition__ResizeChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :102
void LayoutTransition__ResizeChangeMode__get_Flags_fn(LayoutTransition__ResizeChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public bool GetSizeChange(Fuse.Visual n, Fuse.Visual relative, float2& baseSize, float2& deltaSize) :93
void LayoutTransition__ResizeChangeMode__GetSizeChange_fn(LayoutTransition__ResizeChangeMode* __this, ::g::Fuse::Visual* n, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval)
{
    *__retval = __this->GetSizeChange(n, relative, baseSize, deltaSize);
}

// public generated ResizeChangeMode New() :91
void LayoutTransition__ResizeChangeMode__New1_fn(LayoutTransition__ResizeChangeMode** __retval)
{
    *__retval = LayoutTransition__ResizeChangeMode::New1();
}

// public generated ResizeChangeMode() [instance] :91
void LayoutTransition__ResizeChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :102
int LayoutTransition__ResizeChangeMode::Flags()
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.ResizeChangeMode", "get_Flags()");
    return 0;
}

// public bool GetSizeChange(Fuse.Visual n, Fuse.Visual relative, float2& baseSize, float2& deltaSize) [instance] :93
bool LayoutTransition__ResizeChangeMode::GetSizeChange(::g::Fuse::Visual* n, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.ResizeChangeMode", "GetSizeChange(Fuse.Visual,Fuse.Visual,float2&,float2&)");
    ::g::Uno::Float2 oldSize;
    ::g::Uno::Float2 newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(n, &oldSize, &newSize);
    *deltaSize = ::g::Uno::Float2__op_Subtraction2(oldSize, newSize);
    *baseSize = newSize;
    return b;
}

// public generated ResizeChangeMode New() [static] :91
LayoutTransition__ResizeChangeMode* LayoutTransition__ResizeChangeMode::New1()
{
    LayoutTransition__ResizeChangeMode* obj1 = (LayoutTransition__ResizeChangeMode*)uNew(LayoutTransition__ResizeChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// private sealed class LayoutTransition.ScaleChangeMode :105
// {
static void LayoutTransition__ScaleChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface1));
}

LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ScaleChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__ScaleChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ScaleChangeMode_type);
    type = (LayoutTransition__ScaleChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ScaleChangeMode", options);
    type->fp_build_ = LayoutTransition__ScaleChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__ScaleChangeMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))LayoutTransition__ScaleChangeMode__GetScaleVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__ScaleChangeMode__get_Flags_fn;
    return type;
}

// public generated ScaleChangeMode() :105
void LayoutTransition__ScaleChangeMode__ctor__fn(LayoutTransition__ScaleChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :118
void LayoutTransition__ScaleChangeMode__get_Flags_fn(LayoutTransition__ScaleChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetScaleVector(Fuse.Scaling v) :107
void LayoutTransition__ScaleChangeMode__GetScaleVector_fn(LayoutTransition__ScaleChangeMode* __this, ::g::Fuse::Scaling* v, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(v);
}

// public generated ScaleChangeMode New() :105
void LayoutTransition__ScaleChangeMode__New1_fn(LayoutTransition__ScaleChangeMode** __retval)
{
    *__retval = LayoutTransition__ScaleChangeMode::New1();
}

// public generated ScaleChangeMode() [instance] :105
void LayoutTransition__ScaleChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :118
int LayoutTransition__ScaleChangeMode::Flags()
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.ScaleChangeMode", "get_Flags()");
    return 0;
}

// public float3 GetScaleVector(Fuse.Scaling v) [instance] :107
::g::Uno::Float3 LayoutTransition__ScaleChangeMode::GetScaleVector(::g::Fuse::Scaling* v)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.ScaleChangeMode", "GetScaleVector(Fuse.Scaling)");
    ::g::Uno::Float2 oldSize;
    ::g::Uno::Float2 newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(uPtr(v)->RelativeNode(), &oldSize, &newSize);

    if ((!b || (newSize.Y < 1e-05f)) || (newSize.X < 1e-05f))
        return v->Vector();

    ::g::Uno::Float2 n = ::g::Uno::Float2__op_Division2(oldSize, newSize);
    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(n, 1.0f), v->Vector());
}

// public generated ScaleChangeMode New() [static] :105
LayoutTransition__ScaleChangeMode* LayoutTransition__ScaleChangeMode::New1()
{
    LayoutTransition__ScaleChangeMode* obj1 = (LayoutTransition__ScaleChangeMode*)uNew(LayoutTransition__ScaleChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.29.22/Triggers/$.uno
// -----------------------------------------------------------------------------

// public class ScrollingAnimation :161
// {
// static ScrollingAnimation() :161
static void ScrollingAnimation__cctor_1_fn(uType* __type)
{
    ScrollingAnimation::_scrollPositionName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"ScrollPosit...*/]);
}

static void ScrollingAnimation_build(uType* type)
{
    ::STRINGS[15] = uString::Const("ScrollPosition");
    ::TYPES[29] = ::g::Fuse::Visual_typeof()->MakeMethod(1, ::g::Fuse::Controls::ScrollView_typeof());
    ::TYPES[30] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(ScrollingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(ScrollingAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(ScrollingAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(ScrollingAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(ScrollingAnimation_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(ScrollingAnimation_type, interface5));
    type->SetFields(27,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _from), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _hasFrom), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _hasScrollDirections), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _hasTo), 0,
        ::g::Fuse::Triggers::ScrollingAnimationRange_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _range), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _scrollable), 0,
        ::g::Fuse::Controls::ScrollDirections_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _scrollDirections), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _to), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _Inverse), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Triggers::ScrollingAnimation::_scrollPositionName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("get_From", NULL, (void*)ScrollingAnimation__get_From_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_From", NULL, (void*)ScrollingAnimation__set_From_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Inverse", NULL, (void*)ScrollingAnimation__get_Inverse_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Inverse", NULL, (void*)ScrollingAnimation__set_Inverse_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollingAnimation__New2_fn, 0, true, ScrollingAnimation_typeof(), 0),
        new uFunction("get_Range", NULL, (void*)ScrollingAnimation__get_Range_fn, 0, false, ::g::Fuse::Triggers::ScrollingAnimationRange_typeof(), 0),
        new uFunction("set_Range", NULL, (void*)ScrollingAnimation__set_Range_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::ScrollingAnimationRange_typeof()),
        new uFunction("get_ScrollDirections", NULL, (void*)ScrollingAnimation__get_ScrollDirections_fn, 0, false, ::g::Fuse::Controls::ScrollDirections_typeof(), 0),
        new uFunction("set_ScrollDirections", NULL, (void*)ScrollingAnimation__set_ScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction("get_To", NULL, (void*)ScrollingAnimation__get_To_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_To", NULL, (void*)ScrollingAnimation__set_To_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

ScrollingAnimation_type* ScrollingAnimation_typeof()
{
    static uSStrong<ScrollingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 37;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ScrollingAnimation);
    options.TypeSize = sizeof(ScrollingAnimation_type);
    type = (ScrollingAnimation_type*)uClassType::New("Fuse.Triggers.ScrollingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = ScrollingAnimation_build;
    type->fp_ctor_ = (void*)ScrollingAnimation__New2_fn;
    type->fp_cctor_ = ScrollingAnimation__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ScrollingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ScrollingAnimation__OnUnrooted_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))ScrollingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public generated ScrollingAnimation() :161
void ScrollingAnimation__ctor_4_fn(ScrollingAnimation* __this)
{
    __this->ctor_4();
}

// public float get_From() :201
void ScrollingAnimation__get_From_fn(ScrollingAnimation* __this, float* __retval)
{
    *__retval = __this->From();
}

// public void set_From(float value) :202
void ScrollingAnimation__set_From_fn(ScrollingAnimation* __this, float* value)
{
    __this->From(*value);
}

// public generated bool get_Inverse() :195
void ScrollingAnimation__get_Inverse_fn(ScrollingAnimation* __this, bool* __retval)
{
    *__retval = __this->Inverse();
}

// public generated void set_Inverse(bool value) :195
void ScrollingAnimation__set_Inverse_fn(ScrollingAnimation* __this, bool* value)
{
    __this->Inverse(*value);
}

// public generated ScrollingAnimation New() :161
void ScrollingAnimation__New2_fn(ScrollingAnimation** __retval)
{
    *__retval = ScrollingAnimation::New2();
}

// protected override void OnRooted() :266
void ScrollingAnimation__OnRooted_fn(ScrollingAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_scrollable = ((::g::Fuse::Controls::ScrollView*)uPtr(__this->Parent())->FindByType(::TYPES[29/*Fuse.Visual.FindByType<Fuse.Controls.ScrollView>*/]));

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->AddPropertyListener((uObject*)__this);
        __this->BypassSeek(__this->ScrollProgress(), 0);
    }
}

// protected override void OnUnrooted() :279
void ScrollingAnimation__OnUnrooted_fn(ScrollingAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "OnUnrooted()");

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->RemovePropertyListener((uObject*)__this);
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Triggers.ScrollingAnimationRange get_Range() :188
void ScrollingAnimation__get_Range_fn(ScrollingAnimation* __this, int* __retval)
{
    *__retval = __this->Range();
}

// public void set_Range(Fuse.Triggers.ScrollingAnimationRange value) :189
void ScrollingAnimation__set_Range_fn(ScrollingAnimation* __this, int* value)
{
    __this->Range(*value);
}

// public Fuse.Controls.ScrollDirections get_ScrollDirections() :169
void ScrollingAnimation__get_ScrollDirections_fn(ScrollingAnimation* __this, int* __retval)
{
    *__retval = __this->ScrollDirections();
}

// public void set_ScrollDirections(Fuse.Controls.ScrollDirections value) :178
void ScrollingAnimation__set_ScrollDirections_fn(ScrollingAnimation* __this, int* value)
{
    __this->ScrollDirections(*value);
}

// private double get_ScrollProgress() :225
void ScrollingAnimation__get_ScrollProgress_fn(ScrollingAnimation* __this, double* __retval)
{
    *__retval = __this->ScrollProgress();
}

// public float get_To() :212
void ScrollingAnimation__get_To_fn(ScrollingAnimation* __this, float* __retval)
{
    *__retval = __this->To();
}

// public void set_To(float value) :213
void ScrollingAnimation__set_To_fn(ScrollingAnimation* __this, float* value)
{
    __this->To(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :291
void ScrollingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn(ScrollingAnimation* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((obj == __this->_scrollable) && ::g::Uno::UX::Selector__op_Equality(prop_, ScrollingAnimation::_scrollPositionName()))
        __this->Seek(__this->ScrollProgress(), 0);
}

::g::Uno::UX::Selector ScrollingAnimation::_scrollPositionName_;

// public generated ScrollingAnimation() [instance] :161
void ScrollingAnimation::ctor_4()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", ".ctor()");
    _scrollDirections = 12;
    ctor_3();
}

// public float get_From() [instance] :201
float ScrollingAnimation::From()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_From()");
    return _from;
}

// public void set_From(float value) [instance] :202
void ScrollingAnimation::From(float value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_From(float)");
    _from = value;
    _hasFrom = true;
    _range = 3;
}

// public generated bool get_Inverse() [instance] :195
bool ScrollingAnimation::Inverse()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_Inverse()");
    return _Inverse;
}

// public generated void set_Inverse(bool value) [instance] :195
void ScrollingAnimation::Inverse(bool value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_Inverse(bool)");
    _Inverse = value;
}

// public Fuse.Triggers.ScrollingAnimationRange get_Range() [instance] :188
int ScrollingAnimation::Range()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_Range()");
    return _range;
}

// public void set_Range(Fuse.Triggers.ScrollingAnimationRange value) [instance] :189
void ScrollingAnimation::Range(int value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_Range(Fuse.Triggers.ScrollingAnimationRange)");
    _range = value;
}

// public Fuse.Controls.ScrollDirections get_ScrollDirections() [instance] :169
int ScrollingAnimation::ScrollDirections()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_ScrollDirections()");

    if (_hasScrollDirections || (_scrollable == NULL))
        return _scrollDirections;

    int d = uPtr(_scrollable)->AllowedScrollDirections();

    if (d == 3)
        return 3;

    return 12;
}

// public void set_ScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :178
void ScrollingAnimation::ScrollDirections(int value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_ScrollDirections(Fuse.Controls.ScrollDirections)");
    _hasScrollDirections = true;
    _scrollDirections = value;
}

// private double get_ScrollProgress() [instance] :225
double ScrollingAnimation::ScrollProgress()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_ScrollProgress()");
    ::g::Uno::Float2 from;
    ::g::Uno::Float2 to;

    if (Range() == 1)
    {
        from = uPtr(_scrollable)->MinScroll();
        to = uPtr(_scrollable)->MinOverflow();
    }
    else if (Range() == 2)
    {
        from = uPtr(_scrollable)->MaxScroll();
        to = uPtr(_scrollable)->MaxOverflow();
    }
    else
    {
        from = _hasFrom ? ::g::Uno::Float2__New1(From()) : uPtr(_scrollable)->MinScroll();
        to = _hasTo ? ::g::Uno::Float2__New1(To()) : uPtr(_scrollable)->MaxScroll();
    }

    ::g::Uno::Float2 range2 = ::g::Uno::Float2__op_Subtraction2(to, from);
    float at;
    float range;

    if (ScrollDirections() == 3)
    {
        at = uPtr(_scrollable)->ScrollPosition().X - from.X;
        range = range2.X;
    }
    else
    {
        at = uPtr(_scrollable)->ScrollPosition().Y - from.Y;
        range = range2.Y;
    }

    if (::g::Uno::Math::Abs1(range) < 1e-05f)
        return 0.0;

    float p = ::g::Uno::Math::Clamp1(at / range, 0.0f, 1.0f);
    return (double)(Inverse() ? 1.0f - p : p);
}

// public float get_To() [instance] :212
float ScrollingAnimation::To()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_To()");
    return _to;
}

// public void set_To(float value) [instance] :213
void ScrollingAnimation::To(float value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_To(float)");
    _to = value;
    _hasTo = true;
    _range = 3;
}

// public generated ScrollingAnimation New() [static] :161
ScrollingAnimation* ScrollingAnimation::New2()
{
    ScrollingAnimation* obj1 = (ScrollingAnimation*)uNew(ScrollingAnimation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.29.22/Triggers/$.uno
// -----------------------------------------------------------------------------

// public enum ScrollingAnimationRange :128
uEnumType* ScrollingAnimationRange_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.ScrollingAnimationRange", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Standard", 0LL,
        "SnapMin", 1LL,
        "SnapMax", 2LL,
        "Explicit", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public partial sealed class State :756
// {
// static State() :758
static void State__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(State_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMethod*>(::TYPES[32/*Fuse.Scripting.ScriptMethod[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[34/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.State>*/], ::STRINGS[16/*"goto"*/], uDelegate::New(::TYPES[35/*Uno.Action<Fuse.Triggers.State, object[]>*/], (void*)State__goto__fn), 2)));
}

static void State_build(uType* type)
{
    ::STRINGS[16] = uString::Const("goto");
    ::STRINGS[17] = uString::Const("Cannot call `Goto` on an unrooted `State`");
    ::STRINGS[11] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno");
    ::STRINGS[18] = uString::Const("Goto");
    ::TYPES[31] = ::g::Uno::Type_typeof();
    ::TYPES[32] = ::g::Fuse::Scripting::ScriptMethod_typeof()->Array();
    ::TYPES[33] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[34] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(State_typeof());
    ::TYPES[35] = ::g::Uno::Action2_typeof()->MakeType(State_typeof(), uObject_typeof()->Array());
    ::TYPES[26] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Triggers::State, _name1), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::State, _on), 0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::State, _stateGroup), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("Goto", NULL, (void*)State__Goto_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)State__get_Name1_fn, 0, false, ::g::Uno::UX::Selector_typeof(), 0),
        new uFunction("set_Name", NULL, (void*)State__set_Name1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Selector_typeof()),
        new uFunction(".ctor", NULL, (void*)State__New2_fn, 0, true, State_typeof(), 0),
        new uFunction("get_On", NULL, (void*)State__get_On_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_On", NULL, (void*)State__set_On_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Progress", NULL, (void*)State__get_Progress1_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* State_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(State);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.State", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = State_build;
    type->fp_ctor_ = (void*)State__New2_fn;
    type->fp_cctor_ = State__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))State__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))State__OnUnrooted_fn;
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

// public generated State() :756
void State__ctor_4_fn(State* __this)
{
    __this->ctor_4();
}

// public void Goto() :849
void State__Goto_fn(State* __this)
{
    __this->Goto();
}

// private static void goto_(Fuse.Triggers.State n, object[] args) :772
void State__goto__fn(State* n, uArray* args)
{
    State::goto_(n, args);
}

// public Uno.UX.Selector get_Name() :795
void State__get_Name1_fn(State* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Name1();
}

// public void set_Name(Uno.UX.Selector value) :799
void State__set_Name1_fn(State* __this, ::g::Uno::UX::Selector* value)
{
    __this->Name1(*value);
}

// public generated State New() :756
void State__New2_fn(State** __retval)
{
    *__retval = State::New2();
}

// public bool get_On() :812
void State__get_On_fn(State* __this, bool* __retval)
{
    *__retval = __this->On();
}

// public void set_On(bool value) :813
void State__set_On_fn(State* __this, bool* value)
{
    __this->On(*value);
}

// protected override sealed void OnRooted() :828
void State__OnRooted_fn(State* __this)
{
    uStackFrame __("Fuse.Triggers.State", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->_on)
        __this->Activate(NULL);
}

// protected override sealed void OnUnrooted() :841
void State__OnUnrooted_fn(State* __this)
{
    uStackFrame __("Fuse.Triggers.State", "OnUnrooted()");
    __this->_stateGroup = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public new double get_Progress() :847
void State__get_Progress1_fn(State* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// internal void RootStateGroup(Fuse.Triggers.StateGroup stateGroup) :836
void State__RootStateGroup_fn(State* __this, ::g::Fuse::Triggers::StateGroup* stateGroup)
{
    __this->RootStateGroup(stateGroup);
}

// public generated State() [instance] :756
void State::ctor_4()
{
    uStackFrame __("Fuse.Triggers.State", ".ctor()");
    ctor_3();
}

// public void Goto() [instance] :849
void State::Goto()
{
    uStackFrame __("Fuse.Triggers.State", "Goto()");

    if (_stateGroup == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[17/*"Cannot call...*/], NULL, ::STRINGS[11/*"/usr/local/...*/], 853, ::STRINGS[18/*"Goto"*/]);
        return;
    }

    uPtr(_stateGroup)->Goto(this);
}

// public Uno.UX.Selector get_Name() [instance] :795
::g::Uno::UX::Selector State::Name1()
{
    uStackFrame __("Fuse.Triggers.State", "get_Name()");
    return _name1;
}

// public void set_Name(Uno.UX.Selector value) [instance] :799
void State::Name1(::g::Uno::UX::Selector value)
{
    uStackFrame __("Fuse.Triggers.State", "set_Name(Uno.UX.Selector)");

    if (::g::Uno::UX::Selector__op_Inequality(_name1, value))
    {
        _name1 = value;
        ::g::Fuse::NameRegistry::SetName(this, _name1);
    }
}

// public bool get_On() [instance] :812
bool State::On()
{
    uStackFrame __("Fuse.Triggers.State", "get_On()");
    return _on;
}

// public void set_On(bool value) [instance] :813
void State::On(bool value)
{
    uStackFrame __("Fuse.Triggers.State", "set_On(bool)");

    if (_on == value)
        return;

    _on = value;

    if (Parent() != NULL)
    {
        if (_on)
            Activate(NULL);
        else
            Deactivate();
    }
}

// public new double get_Progress() [instance] :847
double State::Progress1()
{
    uStackFrame __("Fuse.Triggers.State", "get_Progress()");
    return Progress();
}

// internal void RootStateGroup(Fuse.Triggers.StateGroup stateGroup) [instance] :836
void State::RootStateGroup(::g::Fuse::Triggers::StateGroup* stateGroup)
{
    uStackFrame __("Fuse.Triggers.State", "RootStateGroup(Fuse.Triggers.StateGroup)");
    _stateGroup = stateGroup;
}

// private static void goto_(Fuse.Triggers.State n, object[] args) [static] :772
void State::goto_(State* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.State", "goto_(Fuse.Triggers.State,object[])");
    State_typeof()->Init();
    uPtr(n)->Goto();
}

// public generated State New() [static] :756
State* State::New2()
{
    State* obj1 = (State*)uNew(State_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// private enum Timeline.State :889
uEnumType* Timeline__State_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Timeline.State", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Play", 0LL,
        "Stop", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public partial sealed class StateGroup :531
// {
// static StateGroup() :533
static void StateGroup__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(StateGroup_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMethod*>(::TYPES[32/*Fuse.Scripting.ScriptMethod[]*/], 2, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[36/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.StateGroup>*/], ::STRINGS[16/*"goto"*/], uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Triggers.StateGroup, object[]>*/], (void*)StateGroup__goto__fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[36/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.StateGroup>*/], ::STRINGS[19/*"gotoNext"*/], uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Triggers.StateGroup, object[]>*/], (void*)StateGroup__gotoNext_fn), 2)));
}

static void StateGroup_build(uType* type)
{
    ::STRINGS[16] = uString::Const("goto");
    ::STRINGS[19] = uString::Const("gotoNext");
    ::STRINGS[20] = uString::Const("StateGroup.goto requires 1 argument");
    ::STRINGS[11] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno");
    ::STRINGS[21] = uString::Const("goto_");
    ::STRINGS[22] = uString::Const("Unable to find State with Name: ");
    ::STRINGS[23] = uString::Const("gotoName");
    ::TYPES[31] = ::g::Uno::Type_typeof();
    ::TYPES[32] = ::g::Fuse::Scripting::ScriptMethod_typeof()->Array();
    ::TYPES[33] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[36] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(StateGroup_typeof());
    ::TYPES[37] = ::g::Uno::Action2_typeof()->MakeType(StateGroup_typeof(), uObject_typeof()->Array());
    ::TYPES[38] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[39] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[40] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[41] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[42] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[1] = uObject_typeof();
    ::TYPES[43] = ::g::Uno::String_typeof();
    ::TYPES[44] = ::g::Fuse::Triggers::State_typeof();
    ::TYPES[45] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[27] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[46] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Triggers::Trigger_typeof());
    ::TYPES[26] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _active), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _rest), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()), offsetof(::g::Fuse::Triggers::StateGroup, _states), 0,
        ::g::Fuse::Triggers::StateTransition_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _transition), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Active", NULL, (void*)StateGroup__get_Active_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Active", NULL, (void*)StateGroup__set_Active_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("FindObjectByName", NULL, (void*)StateGroup__FindObjectByName_fn, 0, false, uObject_typeof(), 2, ::g::Uno::UX::Selector_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof())),
        new uFunction("GotoNextState", NULL, (void*)StateGroup__GotoNextState_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)StateGroup__New2_fn, 0, true, StateGroup_typeof(), 0),
        new uFunction("get_Rest", NULL, (void*)StateGroup__get_Rest_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Rest", NULL, (void*)StateGroup__set_Rest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("get_States", NULL, (void*)StateGroup__get_States_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()), 0),
        new uFunction("get_Transition", NULL, (void*)StateGroup__get_Transition_fn, 0, false, ::g::Fuse::Triggers::StateTransition_typeof(), 0),
        new uFunction("set_Transition", NULL, (void*)StateGroup__set_Transition_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::StateTransition_typeof()));
}

::g::Fuse::Node_type* StateGroup_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(StateGroup);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Triggers.StateGroup", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = StateGroup_build;
    type->fp_ctor_ = (void*)StateGroup__New2_fn;
    type->fp_cctor_ = StateGroup__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StateGroup__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StateGroup__OnUnrooted_fn;
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

// public generated StateGroup() :531
void StateGroup__ctor_3_fn(StateGroup* __this)
{
    __this->ctor_3();
}

// public Fuse.Triggers.State get_Active() :619
void StateGroup__get_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Active();
}

// public void set_Active(Fuse.Triggers.State value) :620
void StateGroup__set_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Active(value);
}

// private int get_ActiveIndex() :643
void StateGroup__get_ActiveIndex_fn(StateGroup* __this, int* __retval)
{
    *__retval = __this->ActiveIndex();
}

// private void set_ActiveIndex(int value) :650
void StateGroup__set_ActiveIndex_fn(StateGroup* __this, int* value)
{
    __this->ActiveIndex(*value);
}

// private void CheckAllDone() :729
void StateGroup__CheckAllDone_fn(StateGroup* __this)
{
    __this->CheckAllDone();
}

// public object FindObjectByName(Uno.UX.Selector name, Uno.Predicate<object> acceptor) :661
void StateGroup__FindObjectByName_fn(StateGroup* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, uObject** __retval)
{
    *__retval = __this->FindObjectByName(*name, acceptor);
}

// internal void Goto(Fuse.Triggers.State next) :704
void StateGroup__Goto_fn(StateGroup* __this, ::g::Fuse::Triggers::State* next)
{
    __this->Goto(next);
}

// private static void goto_(Fuse.Triggers.StateGroup n, object[] args) :567
void StateGroup__goto__fn(StateGroup* n, uArray* args)
{
    StateGroup::goto_(n, args);
}

// private static void gotoName(Fuse.Triggers.StateGroup n, string name) :546
void StateGroup__gotoName_fn(StateGroup* n, uString* name)
{
    StateGroup::gotoName(n, name);
}

// private static void gotoNext(Fuse.Triggers.StateGroup n, object[] args) :587
void StateGroup__gotoNext_fn(StateGroup* n, uArray* args)
{
    StateGroup::gotoNext(n, args);
}

// public void GotoNextState() :656
void StateGroup__GotoNextState_fn(StateGroup* __this)
{
    __this->GotoNextState();
}

// public generated StateGroup New() :531
void StateGroup__New2_fn(StateGroup** __retval)
{
    *__retval = StateGroup::New2();
}

// private void OnPlaybackDone(Fuse.Triggers.Trigger which) :723
void StateGroup__OnPlaybackDone_fn(StateGroup* __this, ::g::Fuse::Triggers::Trigger* which)
{
    __this->OnPlaybackDone(which);
}

// protected override sealed void OnRooted() :688
void StateGroup__OnRooted_fn(StateGroup* __this)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "OnRooted()");
    ::g::Fuse::Triggers::State* ret13;
    ::g::Fuse::Triggers::State* ret14;

    if ((__this->_active == NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->_states), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0))
        __this->_active = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->_states), ::TYPES[38/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(0), &ret13), ret13);

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::TYPES[40/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[42/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret14), ret14);
        uPtr(state)->On(state == __this->_active);
        state->add_PlaybackDone(uDelegate::New(::TYPES[46/*Uno.Action<Fuse.Triggers.Trigger>*/], (void*)StateGroup__OnPlaybackDone_fn, __this));
        state->RootStateGroup(__this);
        uPtr(__this->Parent())->Add1(state);
    }

    ::g::Fuse::Node__OnRooted_fn(__this);
}

// protected override sealed void OnUnrooted() :677
void StateGroup__OnUnrooted_fn(StateGroup* __this)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "OnUnrooted()");
    ::g::Fuse::Triggers::State* ret15;
    ::g::Fuse::Node__OnUnrooted_fn(__this);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::TYPES[40/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[42/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret15), ret15);
        uPtr(state)->remove_PlaybackDone(uDelegate::New(::TYPES[46/*Uno.Action<Fuse.Triggers.Trigger>*/], (void*)StateGroup__OnPlaybackDone_fn, __this));
        uPtr(__this->Parent())->Remove1(state);
    }
}

// public Fuse.Triggers.State get_Rest() :630
void StateGroup__get_Rest_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Rest();
}

// public void set_Rest(Fuse.Triggers.State value) :638
void StateGroup__set_Rest_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Rest(value);
}

// private static bool StateAcceptor(object o) :541
void StateGroup__StateAcceptor_fn(uObject* o, bool* __retval)
{
    *__retval = StateGroup::StateAcceptor(o);
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() :614
void StateGroup__get_States_fn(StateGroup* __this, uObject** __retval)
{
    *__retval = __this->States();
}

// public Fuse.Triggers.StateTransition get_Transition() :673
void StateGroup__get_Transition_fn(StateGroup* __this, int* __retval)
{
    *__retval = __this->Transition();
}

// public void set_Transition(Fuse.Triggers.StateTransition value) :674
void StateGroup__set_Transition_fn(StateGroup* __this, int* value)
{
    __this->Transition(*value);
}

// public generated StateGroup() [instance] :531
void StateGroup::ctor_3()
{
    uStackFrame __("Fuse.Triggers.StateGroup", ".ctor()");
    _states = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[39/*Uno.Collections.List<Fuse.Triggers.State>*/]));
    ctor_2();
}

// public Fuse.Triggers.State get_Active() [instance] :619
::g::Fuse::Triggers::State* StateGroup::Active()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_Active()");
    return _active;
}

// public void set_Active(Fuse.Triggers.State value) [instance] :620
void StateGroup::Active(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "set_Active(Fuse.Triggers.State)");

    if (value != _active)
        Goto(value);
}

// private int get_ActiveIndex() [instance] :643
int StateGroup::ActiveIndex()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_ActiveIndex()");
    ::g::Fuse::Triggers::State* ret16;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(States()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])); ++i)
        if (_active == (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(States()), ::TYPES[38/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(i), &ret16), ret16))
            return i;

    return -1;
}

// private void set_ActiveIndex(int value) [instance] :650
void StateGroup::ActiveIndex(int value)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "set_ActiveIndex(int)");
    ::g::Fuse::Triggers::State* ret17;
    Active((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[38/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(value), &ret17), ret17));
}

// private void CheckAllDone() [instance] :729
void StateGroup::CheckAllDone()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "CheckAllDone()");
    ::g::Fuse::Triggers::State* ret8;
    bool all = true;

    for (uObject* enum6 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::TYPES[40/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum6), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum6), ::TYPES[42/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret8), ret8);

        if (uPtr(state)->Progress1() > 0.0)
            all = false;
    }

    if (all && (_active != NULL))
        uPtr(_active)->On(true);
}

// public object FindObjectByName(Uno.UX.Selector name, Uno.Predicate<object> acceptor) [instance] :661
uObject* StateGroup::FindObjectByName(::g::Uno::UX::Selector name, uDelegate* acceptor)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "FindObjectByName(Uno.UX.Selector,Uno.Predicate<object>)");
    ::g::Fuse::Triggers::State* ret9;
    bool ret10;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(States()), ::TYPES[40/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[42/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret9), ret9);

        if (::g::Uno::UX::Selector__op_Equality(uPtr(s)->Name1(), name) && (uPtr(acceptor)->Invoke(&ret10, 1, s), ret10))
            return s;
    }

    return NULL;
}

// internal void Goto(Fuse.Triggers.State next) [instance] :704
void StateGroup::Goto(::g::Fuse::Triggers::State* next)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "Goto(Fuse.Triggers.State)");
    ::g::Fuse::Triggers::State* ret11;
    ::g::Fuse::Triggers::State* ret12;
    _active = next;

    switch (Transition())
    {
        case 0:
        {
            for (uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::TYPES[40/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
            {
                ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[42/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret11), ret11);
                uPtr(state)->On(state == next);
            }

            break;
        }
        case 1:
        {
            for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::TYPES[40/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
            {
                ::g::Fuse::Triggers::State* state1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[42/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret12), ret12);
                uPtr(state1)->On(false);
            }

            CheckAllDone();
            break;
        }
    }
}

// public void GotoNextState() [instance] :656
void StateGroup::GotoNextState()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "GotoNextState()");
    ActiveIndex((ActiveIndex() + 1) % ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])));
}

// private void OnPlaybackDone(Fuse.Triggers.Trigger which) [instance] :723
void StateGroup::OnPlaybackDone(::g::Fuse::Triggers::Trigger* which)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "OnPlaybackDone(Fuse.Triggers.Trigger)");

    if (Transition() == 1)
        CheckAllDone();
}

// public Fuse.Triggers.State get_Rest() [instance] :630
::g::Fuse::Triggers::State* StateGroup::Rest()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_Rest()");
    ::g::Fuse::Triggers::State* ret18;

    if (_rest != NULL)
        return _rest;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0)
        return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[38/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(0), &ret18), ret18);

    return NULL;
}

// public void set_Rest(Fuse.Triggers.State value) [instance] :638
void StateGroup::Rest(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "set_Rest(Fuse.Triggers.State)");
    _rest = value;
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() [instance] :614
uObject* StateGroup::States()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_States()");
    return _states;
}

// public Fuse.Triggers.StateTransition get_Transition() [instance] :673
int StateGroup::Transition()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_Transition()");
    return _transition;
}

// public void set_Transition(Fuse.Triggers.StateTransition value) [instance] :674
void StateGroup::Transition(int value)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "set_Transition(Fuse.Triggers.StateTransition)");
    _transition = value;
}

// private static void goto_(Fuse.Triggers.StateGroup n, object[] args) [static] :567
void StateGroup::goto_(StateGroup* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "goto_(Fuse.Triggers.StateGroup,object[])");
    StateGroup_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[20/*"StateGroup....*/], n, ::STRINGS[11/*"/usr/local/...*/], 571, ::STRINGS[21/*"goto_"*/]);
        return;
    }

    if (uIs((uObject*)uPtr(args)->Strong<uObject*>(0), ::TYPES[43/*string*/]))
        StateGroup::gotoName(n, uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[43/*string*/]));
    else
        uPtr(n)->Goto(uAs< ::g::Fuse::Triggers::State*>(args->Strong<uObject*>(0), ::TYPES[44/*Fuse.Triggers.State*/]));
}

// private static void gotoName(Fuse.Triggers.StateGroup n, string name) [static] :546
void StateGroup::gotoName(StateGroup* n, uString* name)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "gotoName(Fuse.Triggers.StateGroup,string)");
    StateGroup_typeof()->Init();
    ::g::Fuse::Triggers::State* state = uAs< ::g::Fuse::Triggers::State*>(uPtr(n)->FindObjectByName(::g::Uno::UX::Selector__op_Implicit(name), uDelegate::New(::TYPES[45/*Uno.Predicate<object>*/], (void*)StateGroup__StateAcceptor_fn)), ::TYPES[44/*Fuse.Triggers.State*/]);

    if (state == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[22/*"Unable to f...*/], name), n, ::STRINGS[11/*"/usr/local/...*/], 551, ::STRINGS[23/*"gotoName"*/]);
        return;
    }

    n->Goto(state);
}

// private static void gotoNext(Fuse.Triggers.StateGroup n, object[] args) [static] :587
void StateGroup::gotoNext(StateGroup* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "gotoNext(Fuse.Triggers.StateGroup,object[])");
    StateGroup_typeof()->Init();
    uPtr(n)->GotoNextState();
}

// public generated StateGroup New() [static] :531
StateGroup* StateGroup::New2()
{
    StateGroup* obj7 = (StateGroup*)uNew(StateGroup_typeof());
    obj7->ctor_3();
    return obj7;
}

// private static bool StateAcceptor(object o) [static] :541
bool StateGroup::StateAcceptor(uObject* o)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "StateAcceptor(object)");
    StateGroup_typeof()->Init();
    return uIs(o, ::TYPES[44/*Fuse.Triggers.State*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public enum StateTransition :604
uEnumType* StateTransition_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.StateTransition", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Parallel", 0LL,
        "Exclusive", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/Triggers/$.uno
// -----------------------------------------------------------------------------

// public sealed class TextInputActionTriggered :72
// {
static void TextInputActionTriggered_build(uType* type)
{
    ::STRINGS[24] = uString::Const("TextInputActionTriggered must be a child of an ITextEdit");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/Triggers/$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[47] = ::g::Fuse::Controls::ITextEditControl_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[48] = ::g::Fuse::Controls::TextInputActionHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Fuse::Controls::ITextEditControl_typeof(), offsetof(::g::Fuse::Triggers::TextInputActionTriggered, _textEdit), 0,
        ::g::Fuse::Controls::TextInputActionType_typeof(), offsetof(::g::Fuse::Triggers::TextInputActionTriggered, _type), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)TextInputActionTriggered__New2_fn, 0, true, TextInputActionTriggered_typeof(), 0),
        new uFunction("get_Type", NULL, (void*)TextInputActionTriggered__get_Type_fn, 0, false, ::g::Fuse::Controls::TextInputActionType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)TextInputActionTriggered__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionType_typeof()));
}

::g::Fuse::Triggers::Trigger_type* TextInputActionTriggered_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextInputActionTriggered);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.TextInputActionTriggered", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = TextInputActionTriggered_build;
    type->fp_ctor_ = (void*)TextInputActionTriggered__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))TextInputActionTriggered__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))TextInputActionTriggered__OnUnrooted_fn;
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

// public generated TextInputActionTriggered() :72
void TextInputActionTriggered__ctor_4_fn(TextInputActionTriggered* __this)
{
    __this->ctor_4();
}

// public generated TextInputActionTriggered New() :72
void TextInputActionTriggered__New2_fn(TextInputActionTriggered** __retval)
{
    *__retval = TextInputActionTriggered::New2();
}

// private void OnActionTriggered(object s, Fuse.Controls.TextInputActionArgs args) :106
void TextInputActionTriggered__OnActionTriggered_fn(TextInputActionTriggered* __this, uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args)
{
    __this->OnActionTriggered(s, args);
}

// protected override sealed void OnRooted() :82
void TextInputActionTriggered__OnRooted_fn(TextInputActionTriggered* __this)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_textEdit = uAs<uObject*>(__this->Parent(), ::TYPES[47/*Fuse.Controls.ITextEditControl*/]);

    if (__this->_textEdit == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[24/*"TextInputAc...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 88, ::STRINGS[5/*"OnRooted"*/]);
    else
        ::g::Fuse::Controls::ITextEditControl::add_ActionTriggered(uInterface(uPtr(__this->_textEdit), ::TYPES[47/*Fuse.Controls.ITextEditControl*/]), uDelegate::New(::TYPES[48/*Fuse.Controls.TextInputActionHandler*/], (void*)TextInputActionTriggered__OnActionTriggered_fn, __this));
}

// protected override sealed void OnUnrooted() :96
void TextInputActionTriggered__OnUnrooted_fn(TextInputActionTriggered* __this)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "OnUnrooted()");

    if (__this->_textEdit != NULL)
    {
        ::g::Fuse::Controls::ITextEditControl::remove_ActionTriggered(uInterface(uPtr(__this->_textEdit), ::TYPES[47/*Fuse.Controls.ITextEditControl*/]), uDelegate::New(::TYPES[48/*Fuse.Controls.TextInputActionHandler*/], (void*)TextInputActionTriggered__OnActionTriggered_fn, __this));
        __this->_textEdit = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Controls.TextInputActionType get_Type() :77
void TextInputActionTriggered__get_Type_fn(TextInputActionTriggered* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Controls.TextInputActionType value) :78
void TextInputActionTriggered__set_Type_fn(TextInputActionTriggered* __this, int* value)
{
    __this->Type(*value);
}

// public generated TextInputActionTriggered() [instance] :72
void TextInputActionTriggered::ctor_4()
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", ".ctor()");
    ctor_3();
}

// private void OnActionTriggered(object s, Fuse.Controls.TextInputActionArgs args) [instance] :106
void TextInputActionTriggered::OnActionTriggered(uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "OnActionTriggered(object,Fuse.Controls.TextInputActionArgs)");

    if (uPtr(args)->Type() != Type())
        return;

    Pulse();
}

// public Fuse.Controls.TextInputActionType get_Type() [instance] :77
int TextInputActionTriggered::Type()
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "get_Type()");
    return _type;
}

// public void set_Type(Fuse.Controls.TextInputActionType value) [instance] :78
void TextInputActionTriggered::Type(int value)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "set_Type(Fuse.Controls.TextInputActionType)");
    _type = value;
}

// public generated TextInputActionTriggered New() [static] :72
TextInputActionTriggered* TextInputActionTriggered::New2()
{
    TextInputActionTriggered* obj1 = (TextInputActionTriggered*)uNew(TextInputActionTriggered_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public partial sealed class Timeline :880
// {
// static Timeline() :1080
static void Timeline__cctor_1_fn(uType* __type)
{
    Timeline::_progressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"Progress"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(Timeline_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMethod*>(::TYPES[32/*Fuse.Scripting.ScriptMethod[]*/], 9, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[49/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[26/*"pause"*/], uDelegate::New(::TYPES[50/*Uno.Action<Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pause_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[49/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[27/*"pulse"*/], uDelegate::New(::TYPES[50/*Uno.Action<Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pulse_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[49/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[28/*"pulseBackward"*/], uDelegate::New(::TYPES[50/*Uno.Action<Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pulseBackward_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[49/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[29/*"pulseForward"*/], uDelegate::New(::TYPES[50/*Uno.Action<Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pulseForward_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[49/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[30/*"play"*/], uDelegate::New(::TYPES[50/*Uno.Action<Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__resume_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[49/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[31/*"playTo"*/], uDelegate::New(::TYPES[50/*Uno.Action<Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__playTo_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[49/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[32/*"resume"*/], uDelegate::New(::TYPES[50/*Uno.Action<Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__resume_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[49/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[33/*"seek"*/], uDelegate::New(::TYPES[50/*Uno.Action<Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__seek_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[49/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[34/*"stop"*/], uDelegate::New(::TYPES[50/*Uno.Action<Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__stop_fn), 2)));
}

static void Timeline_build(uType* type)
{
    ::STRINGS[25] = uString::Const("Progress");
    ::STRINGS[26] = uString::Const("pause");
    ::STRINGS[27] = uString::Const("pulse");
    ::STRINGS[28] = uString::Const("pulseBackward");
    ::STRINGS[29] = uString::Const("pulseForward");
    ::STRINGS[30] = uString::Const("play");
    ::STRINGS[31] = uString::Const("playTo");
    ::STRINGS[32] = uString::Const("resume");
    ::STRINGS[33] = uString::Const("seek");
    ::STRINGS[34] = uString::Const("stop");
    ::STRINGS[35] = uString::Const("Timeline.seek requires 1 argument");
    ::STRINGS[11] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno");
    ::STRINGS[36] = uString::Const("SetPRogress: ");
    ::TYPES[31] = ::g::Uno::Type_typeof();
    ::TYPES[32] = ::g::Fuse::Scripting::ScriptMethod_typeof()->Array();
    ::TYPES[33] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[49] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(Timeline_typeof());
    ::TYPES[50] = ::g::Uno::Action2_typeof()->MakeType(Timeline_typeof(), uObject_typeof()->Array());
    ::TYPES[30] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[51] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[21] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Timeline_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Timeline_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Timeline_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Timeline_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(Timeline_type, interface4),
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(Timeline_type, interface5),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(Timeline_type, interface6),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(Timeline_type, interface7));
    type->SetFields(27,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _hasInitialProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _hasTargetProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _initialProgress), 0,
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _progressOrigin), 0,
        Timeline__State_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _state), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _targetProgress), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Triggers::Timeline, ProgressChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Triggers::Timeline::_progressName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(25,
        new uFunction("get_CanPause", NULL, (void*)Timeline__get_CanPause_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanPlayTo", NULL, (void*)Timeline__get_CanPlayTo_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanResume", NULL, (void*)Timeline__get_CanResume_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanStop", NULL, (void*)Timeline__get_CanStop_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_InitialProgress", NULL, (void*)Timeline__get_InitialProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_InitialProgress", NULL, (void*)Timeline__set_InitialProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction(".ctor", NULL, (void*)Timeline__New2_fn, 0, true, Timeline_typeof(), 0),
        new uFunction("get_OnAtZero", NULL, (void*)Timeline__get_OnAtZero_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_OnAtZero", NULL, (void*)Timeline__set_OnAtZero_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Pause", NULL, (void*)Timeline__Pause_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_PlayMode", NULL, (void*)Timeline__get_PlayMode_fn, 0, false, ::g::Fuse::Animations::PlayMode_typeof(), 0),
        new uFunction("set_PlayMode", NULL, (void*)Timeline__set_PlayMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::PlayMode_typeof()),
        new uFunction("PlayTo", NULL, (void*)Timeline__PlayTo1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Progress", NULL, (void*)Timeline__get_Progress1_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, (void*)Timeline__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("add_ProgressChanged", NULL, (void*)Timeline__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ProgressChanged", NULL, (void*)Timeline__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("Pulse", NULL, (void*)Timeline__Pulse1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PulseBackward", NULL, (void*)Timeline__PulseBackward1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PulseForward", NULL, (void*)Timeline__PulseForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Resume", NULL, (void*)Timeline__Resume_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("SetProgress", NULL, (void*)Timeline__SetProgress_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("Stop", NULL, (void*)Timeline__Stop1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_TargetProgress", NULL, (void*)Timeline__get_TargetProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TargetProgress", NULL, (void*)Timeline__set_TargetProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Timeline_type* Timeline_typeof()
{
    static uSStrong<Timeline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 35;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Timeline);
    options.TypeSize = sizeof(Timeline_type);
    type = (Timeline_type*)uClassType::New("Fuse.Triggers.Timeline", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = Timeline_build;
    type->fp_ctor_ = (void*)Timeline__New2_fn;
    type->fp_cctor_ = Timeline__cctor_1_fn;
    type->fp_OnProgressChanged = (void(*)(::g::Fuse::Triggers::Trigger*))Timeline__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Timeline__OnRooted_fn;
    type->interface5.fp_Stop = (void(*)(uObject*))Timeline__Stop1_fn;
    type->interface5.fp_PlayTo = (void(*)(uObject*, double*))Timeline__PlayTo1_fn;
    type->interface5.fp_Pause = (void(*)(uObject*))Timeline__Pause_fn;
    type->interface5.fp_Resume = (void(*)(uObject*))Timeline__Resume_fn;
    type->interface5.fp_get_Progress = (void(*)(uObject*, double*))Timeline__get_Progress1_fn;
    type->interface5.fp_set_Progress = (void(*)(uObject*, double*))Timeline__set_Progress_fn;
    type->interface5.fp_get_CanPlayTo = (void(*)(uObject*, bool*))Timeline__get_CanPlayTo_fn;
    type->interface5.fp_get_CanStop = (void(*)(uObject*, bool*))Timeline__get_CanStop_fn;
    type->interface5.fp_get_CanPause = (void(*)(uObject*, bool*))Timeline__get_CanPause_fn;
    type->interface5.fp_get_CanResume = (void(*)(uObject*, bool*))Timeline__get_CanResume_fn;
    type->interface6.fp_Pulse = (void(*)(uObject*))Timeline__Pulse1_fn;
    type->interface7.fp_get_Progress = (void(*)(uObject*, double*))Timeline__get_Progress1_fn;
    type->interface7.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__add_ProgressChanged_fn;
    type->interface7.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__remove_ProgressChanged_fn;
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

// public generated Timeline() :880
void Timeline__ctor_4_fn(Timeline* __this)
{
    __this->ctor_4();
}

// private void BypassOff() :1053
void Timeline__BypassOff_fn(Timeline* __this)
{
    __this->BypassOff();
}

// public bool get_CanPause() :999
void Timeline__get_CanPause_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanPause();
}

// public bool get_CanPlayTo() :995
void Timeline__get_CanPlayTo_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanPlayTo();
}

// public bool get_CanResume() :1001
void Timeline__get_CanResume_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanResume();
}

// public bool get_CanStop() :997
void Timeline__get_CanStop_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanStop();
}

// public double get_InitialProgress() :900
void Timeline__get_InitialProgress_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->InitialProgress();
}

// public void set_InitialProgress(double value) :901
void Timeline__set_InitialProgress_fn(Timeline* __this, double* value)
{
    __this->InitialProgress(*value);
}

// public generated Timeline New() :880
void Timeline__New2_fn(Timeline** __retval)
{
    *__retval = Timeline::New2();
}

// public bool get_OnAtZero() :884
void Timeline__get_OnAtZero_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->OnAtZero();
}

// public void set_OnAtZero(bool value) :885
void Timeline__set_OnAtZero_fn(Timeline* __this, bool* value)
{
    __this->OnAtZero(*value);
}

// protected override sealed void OnProgressChanged() :1033
void Timeline__OnProgressChanged_fn(Timeline* __this)
{
    uStackFrame __("Fuse.Triggers.Timeline", "OnProgressChanged()");
    ::g::Uno::UX::ValueChangedArgs* ret3;
    uObject* ind1 = __this->_progressOrigin;
    uObject* sender = (ind1 != NULL) ? ind1 : uAs<uObject*>(__this, ::TYPES[30/*Uno.UX.IPropertyListener*/]);
    __this->OnPropertyChanged1(Timeline::_progressName(), sender);

    if (::g::Uno::Delegate::op_Inequality(__this->ProgressChanged1, NULL))
        uPtr(__this->ProgressChanged1)->Invoke(2, sender, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[51/*Uno.UX.ValueChangedArgs<double>*/], uCRef(__this->Progress1()), &ret3), ret3));
}

// protected override sealed void OnRooted() :934
void Timeline__OnRooted_fn(Timeline* __this)
{
    uStackFrame __("Fuse.Triggers.Timeline", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (!__this->IsPreservedRootFrame())
    {
        __this->BypassSeek(__this->_initialProgress, 0);

        if ((__this->Bypass() == 0) && !__this->_hasInitialProgress)
            __this->BypassSeek(__this->TargetProgress(), 0);

        if (__this->_state == 0)
            __this->Play(__this->TargetProgress());
    }
}

// private static void pause(Fuse.Triggers.Timeline n, object[] args) :1171
void Timeline__pause_fn(Timeline* n, uArray* args)
{
    Timeline::pause(n, args);
}

// public void Pause() :977
void Timeline__Pause_fn(Timeline* __this)
{
    __this->Pause();
}

// private void Play(double progress) :969
void Timeline__Play_fn(Timeline* __this, double* progress)
{
    __this->Play(*progress);
}

// public Fuse.Animations.PlayMode get_PlayMode() :930
void Timeline__get_PlayMode_fn(Timeline* __this, int* __retval)
{
    *__retval = __this->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) :931
void Timeline__set_PlayMode_fn(Timeline* __this, int* value)
{
    __this->PlayMode(*value);
}

// private static void playTo(Fuse.Triggers.Timeline n, object[] args) :1133
void Timeline__playTo_fn(Timeline* n, uArray* args)
{
    Timeline::playTo(n, args);
}

// public void PlayTo(double progress) :963
void Timeline__PlayTo1_fn(Timeline* __this, double* progress)
{
    __this->PlayTo1(*progress);
}

// public new double get_Progress() :1006
void Timeline__get_Progress1_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// public new void set_Progress(double value) :1007
void Timeline__set_Progress_fn(Timeline* __this, double* value)
{
    __this->Progress1(*value);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :951
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :951
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// private static void pulse(Fuse.Triggers.Timeline n, object[] args) :1100
void Timeline__pulse_fn(Timeline* n, uArray* args)
{
    Timeline::pulse(n, args);
}

// public new void Pulse() :1042
void Timeline__Pulse1_fn(Timeline* __this)
{
    __this->Pulse1();
}

// private static void pulseBackward(Fuse.Triggers.Timeline n, object[] args) :1120
void Timeline__pulseBackward_fn(Timeline* n, uArray* args)
{
    Timeline::pulseBackward(n, args);
}

// public void PulseBackward() :1059
void Timeline__PulseBackward1_fn(Timeline* __this)
{
    __this->PulseBackward1();
}

// private static void pulseForward(Fuse.Triggers.Timeline n, object[] args) :1110
void Timeline__pulseForward_fn(Timeline* n, uArray* args)
{
    Timeline::pulseForward(n, args);
}

// public void PulseForward() :1047
void Timeline__PulseForward_fn(Timeline* __this)
{
    __this->PulseForward();
}

// private static void resume(Fuse.Triggers.Timeline n, object[] args) :1161
void Timeline__resume_fn(Timeline* n, uArray* args)
{
    Timeline::resume(n, args);
}

// public void Resume() :986
void Timeline__Resume_fn(Timeline* __this)
{
    __this->Resume();
}

// private static void seek(Fuse.Triggers.Timeline n, object[] args) :1182
void Timeline__seek_fn(Timeline* n, uArray* args)
{
    Timeline::seek(n, args);
}

// public void SetProgress(double value, Uno.UX.IPropertyListener origin) :1020
void Timeline__SetProgress_fn(Timeline* __this, double* value, uObject* origin)
{
    __this->SetProgress(*value, origin);
}

// private static void stop(Fuse.Triggers.Timeline n, object[] args) :1150
void Timeline__stop_fn(Timeline* n, uArray* args)
{
    Timeline::stop(n, args);
}

// public void Stop() :953
void Timeline__Stop1_fn(Timeline* __this)
{
    __this->Stop1();
}

// public double get_TargetProgress() :912
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->TargetProgress();
}

// public void set_TargetProgress(double value) :919
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value)
{
    __this->TargetProgress(*value);
}

::g::Uno::UX::Selector Timeline::_progressName_;

// public generated Timeline() [instance] :880
void Timeline::ctor_4()
{
    uStackFrame __("Fuse.Triggers.Timeline", ".ctor()");
    _initialProgress = 0.0;
    _targetProgress = 0.0;
    ctor_3();
}

// private void BypassOff() [instance] :1053
void Timeline::BypassOff()
{
    uStackFrame __("Fuse.Triggers.Timeline", "BypassOff()");
    _targetProgress = 0.0;
    BypassDeactivate();
}

// public bool get_CanPause() [instance] :999
bool Timeline::CanPause()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_CanPause()");
    return true;
}

// public bool get_CanPlayTo() [instance] :995
bool Timeline::CanPlayTo()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_CanPlayTo()");
    return true;
}

// public bool get_CanResume() [instance] :1001
bool Timeline::CanResume()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_CanResume()");
    return true;
}

// public bool get_CanStop() [instance] :997
bool Timeline::CanStop()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_CanStop()");
    return true;
}

// public double get_InitialProgress() [instance] :900
double Timeline::InitialProgress()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_InitialProgress()");
    return _initialProgress;
}

// public void set_InitialProgress(double value) [instance] :901
void Timeline::InitialProgress(double value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_InitialProgress(double)");
    _hasInitialProgress = true;
    _initialProgress = value;
}

// public bool get_OnAtZero() [instance] :884
bool Timeline::OnAtZero()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_OnAtZero()");
    return _startAtZero;
}

// public void set_OnAtZero(bool value) [instance] :885
void Timeline::OnAtZero(bool value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_OnAtZero(bool)");
    _startAtZero = value;
}

// public void Pause() [instance] :977
void Timeline::Pause()
{
    uStackFrame __("Fuse.Triggers.Timeline", "Pause()");

    if (IsRootingCompleted())
    {
        _state = 1;
        Seek(Progress1(), 0);
    }
}

// private void Play(double progress) [instance] :969
void Timeline::Play(double progress)
{
    uStackFrame __("Fuse.Triggers.Timeline", "Play(double)");
    _state = 0;
    PlayTo(progress, (progress >= Progress1()) ? 0 : 1);
    _targetProgress = progress;
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance] :930
int Timeline::PlayMode()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_PlayMode()");
    return uPtr(Animation())->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance] :931
void Timeline::PlayMode(int value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_PlayMode(Fuse.Animations.PlayMode)");
    uPtr(Animation())->PlayMode(value);
}

// public void PlayTo(double progress) [instance] :963
void Timeline::PlayTo1(double progress)
{
    uStackFrame __("Fuse.Triggers.Timeline", "PlayTo(double)");

    if (IsRootingCompleted())
        Play(progress);
}

// public new double get_Progress() [instance] :1006
double Timeline::Progress1()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_Progress()");
    return Progress();
}

// public new void set_Progress(double value) [instance] :1007
void Timeline::Progress1(double value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_Progress(double)");
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::STRINGS[36/*"SetPRogress: "*/], uBox(::g::Uno::Double_typeof(), value)), 1, ::STRINGS[11/*"/usr/local/...*/], 1009);
    Seek(value, 0);
    _targetProgress = value;
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :951
void Timeline::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[21/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :951
void Timeline::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[21/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public new void Pulse() [instance] :1042
void Timeline::Pulse1()
{
    uStackFrame __("Fuse.Triggers.Timeline", "Pulse()");
    Pulse();
}

// public void PulseBackward() [instance] :1059
void Timeline::PulseBackward1()
{
    uStackFrame __("Fuse.Triggers.Timeline", "PulseBackward()");
    BypassActivate();
    _targetProgress = 0.0;
    DirectDeactivate();
}

// public void PulseForward() [instance] :1047
void Timeline::PulseForward()
{
    uStackFrame __("Fuse.Triggers.Timeline", "PulseForward()");
    _targetProgress = 1.0;
    DirectActivate(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Timeline__BypassOff_fn, this));
}

// public void Resume() [instance] :986
void Timeline::Resume()
{
    uStackFrame __("Fuse.Triggers.Timeline", "Resume()");

    if (IsRootingCompleted())
    {
        _state = 0;
        PlayTo(_targetProgress, 0);
    }
}

// public void SetProgress(double value, Uno.UX.IPropertyListener origin) [instance] :1020
void Timeline::SetProgress(double value, uObject* origin)
{
    uStackFrame __("Fuse.Triggers.Timeline", "SetProgress(double,Uno.UX.IPropertyListener)");

    if (origin != this)
    {
        _progressOrigin = origin;

        if (IsRootingCompleted())
            Seek(value, 0);
        else if (!_hasInitialProgress)
            _initialProgress = value;

        _progressOrigin = NULL;
    }
}

// public void Stop() [instance] :953
void Timeline::Stop1()
{
    uStackFrame __("Fuse.Triggers.Timeline", "Stop()");

    if (IsRootingCompleted())
    {
        Seek(Progress1(), 0);
        _targetProgress = Progress1();
        _state = 1;
    }
}

// public double get_TargetProgress() [instance] :912
double Timeline::TargetProgress()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_TargetProgress()");

    if (!_hasTargetProgress && (PlayMode() == 1))
        return 1.0;

    return _targetProgress;
}

// public void set_TargetProgress(double value) [instance] :919
void Timeline::TargetProgress(double value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_TargetProgress(double)");
    _targetProgress = value;
    _hasTargetProgress = true;

    if (IsRootingCompleted() && (_state == 0))
        PlayTo1(_targetProgress);
}

// public generated Timeline New() [static] :880
Timeline* Timeline::New2()
{
    Timeline* obj2 = (Timeline*)uNew(Timeline_typeof());
    obj2->ctor_4();
    return obj2;
}

// private static void pause(Fuse.Triggers.Timeline n, object[] args) [static] :1171
void Timeline::pause(Timeline* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.Timeline", "pause(Fuse.Triggers.Timeline,object[])");
    Timeline_typeof()->Init();
    uPtr(n)->Pause();
}

// private static void playTo(Fuse.Triggers.Timeline n, object[] args) [static] :1133
void Timeline::playTo(Timeline* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.Timeline", "playTo(Fuse.Triggers.Timeline,object[])");
    Timeline_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[35/*"Timeline.se...*/], n, ::STRINGS[11/*"/usr/local/...*/], 1137, ::STRINGS[31/*"playTo"*/]);
        return;
    }

    uPtr(n)->PlayTo1(::g::Fuse::Scripting::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)));
}

// private static void pulse(Fuse.Triggers.Timeline n, object[] args) [static] :1100
void Timeline::pulse(Timeline* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.Timeline", "pulse(Fuse.Triggers.Timeline,object[])");
    Timeline_typeof()->Init();
    uPtr(n)->Pulse1();
}

// private static void pulseBackward(Fuse.Triggers.Timeline n, object[] args) [static] :1120
void Timeline::pulseBackward(Timeline* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.Timeline", "pulseBackward(Fuse.Triggers.Timeline,object[])");
    Timeline_typeof()->Init();
    uPtr(n)->PulseBackward1();
}

// private static void pulseForward(Fuse.Triggers.Timeline n, object[] args) [static] :1110
void Timeline::pulseForward(Timeline* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.Timeline", "pulseForward(Fuse.Triggers.Timeline,object[])");
    Timeline_typeof()->Init();
    uPtr(n)->PulseForward();
}

// private static void resume(Fuse.Triggers.Timeline n, object[] args) [static] :1161
void Timeline::resume(Timeline* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.Timeline", "resume(Fuse.Triggers.Timeline,object[])");
    Timeline_typeof()->Init();
    uPtr(n)->Resume();
}

// private static void seek(Fuse.Triggers.Timeline n, object[] args) [static] :1182
void Timeline::seek(Timeline* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.Timeline", "seek(Fuse.Triggers.Timeline,object[])");
    Timeline_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[35/*"Timeline.se...*/], n, ::STRINGS[11/*"/usr/local/...*/], 1186, ::STRINGS[33/*"seek"*/]);
        return;
    }

    uPtr(n)->Progress1(::g::Fuse::Scripting::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)));
}

// private static void stop(Fuse.Triggers.Timeline n, object[] args) [static] :1150
void Timeline::stop(Timeline* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.Timeline", "stop(Fuse.Triggers.Timeline,object[])");
    Timeline_typeof()->Init();
    uPtr(n)->Stop1();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract class Trigger :1254
// {
static void Trigger_build(uType* type)
{
    ::STRINGS[37] = uString::Const("AddContent called prior to having a Parent");
    ::STRINGS[11] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno");
    ::STRINGS[38] = uString::Const("AddContent");
    ::STRINGS[39] = uString::Const("Could not locate trigger in parent, content not added: ");
    ::STRINGS[40] = uString::Const("Trigger started prior to being rooted: ");
    ::TYPES[52] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[1] = uObject_typeof();
    ::TYPES[53] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[54] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[26] = ::g::Fuse::Node_typeof();
    ::TYPES[55] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[56] = ::g::Fuse::Animations::IPlayerFeedback_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[22] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[23] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[57] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[58] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[59] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[60] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[46] = ::g::Uno::Action1_typeof()->MakeType(Trigger_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(Trigger_type, interface4));
    type->SetFields(13,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof()), offsetof(::g::Fuse::Triggers::Trigger, _actions), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _animation), 0,
        ::g::Fuse::Animations::TriggerAnimationState_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _animState), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _doneAction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _doneOn), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _isStarted), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _lastPlayDirection), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Triggers::Trigger, _nodes), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _rootFrame), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _rootPlayDirection), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _rootProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _startAtZero), 0,
        ::g::Fuse::Triggers::TriggerBypassMode_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _Bypass), 0,
        ::g::Uno::Action1_typeof()->MakeType(Trigger_typeof()), offsetof(::g::Fuse::Triggers::Trigger, PlaybackDone1), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_Actions", NULL, (void*)Trigger__get_Actions_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof()), 0),
        new uFunction("get_Animation", NULL, (void*)Trigger__get_Animation_fn, 0, false, ::g::Fuse::Animations::TriggerAnimation_typeof(), 0),
        new uFunction("set_Animation", NULL, (void*)Trigger__set_Animation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::TriggerAnimation_typeof()),
        new uFunction("get_Animators", NULL, (void*)Trigger__get_Animators_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof()), 0),
        new uFunction("get_BackwardAnimation", NULL, (void*)Trigger__get_BackwardAnimation_fn, 0, false, ::g::Fuse::Animations::TriggerAnimation_typeof(), 0),
        new uFunction("set_BackwardAnimation", NULL, (void*)Trigger__set_BackwardAnimation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::TriggerAnimation_typeof()),
        new uFunction("get_Bypass", NULL, (void*)Trigger__get_Bypass_fn, 0, false, ::g::Fuse::Triggers::TriggerBypassMode_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)Trigger__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::TriggerBypassMode_typeof()),
        new uFunction("get_CrossFadeDuration", NULL, (void*)Trigger__get_CrossFadeDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_CrossFadeDuration", NULL, (void*)Trigger__set_CrossFadeDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_HasActions", NULL, (void*)Trigger__get_HasActions_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasAnimators", NULL, (void*)Trigger__get_HasAnimators_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Nodes", NULL, (void*)Trigger__get_Nodes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), 0),
        new uFunction("get_StretchDuration", NULL, (void*)Trigger__get_StretchDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_StretchDuration", NULL, (void*)Trigger__set_StretchDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_TimeMultiplier", NULL, (void*)Trigger__get_TimeMultiplier_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TimeMultiplier", NULL, (void*)Trigger__set_TimeMultiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Trigger_type* Trigger_typeof()
{
    static uSStrong<Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 27;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Trigger);
    options.TypeSize = sizeof(Trigger_type);
    type = (Trigger_type*)uClassType::New("Fuse.Triggers.Trigger", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = Trigger_build;
    type->fp_OnNodeAdded = Trigger__OnNodeAdded_fn;
    type->fp_OnPreserveRootFrame = (void(*)(::g::Fuse::Node*))Trigger__OnPreserveRootFrame_fn;
    type->fp_OnProgressChanged = Trigger__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Trigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Trigger__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated Trigger() :1254
void Trigger__ctor_3_fn(Trigger* __this)
{
    __this->ctor_3();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() :1373
void Trigger__get_Actions_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Actions();
}

// protected void Activate([Uno.Action done]) :1566
void Trigger__Activate_fn(Trigger* __this, uDelegate* done)
{
    __this->Activate(done);
}

// protected void AddContent(Fuse.Node target) :1410
void Trigger__AddContent_fn(Trigger* __this, ::g::Fuse::Node* target)
{
    __this->AddContent(target);
}

// public Fuse.Animations.TriggerAnimation get_Animation() :1292
void Trigger__get_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) :1297
void Trigger__set_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :1359
void Trigger__get_Animators_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() :1344
void Trigger__get_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->BackwardAnimation();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) :1345
void Trigger__set_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->BackwardAnimation(value);
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() :1281
void Trigger__get_Bypass_fn(Trigger* __this, int* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) :1281
void Trigger__set_Bypass_fn(Trigger* __this, int* value)
{
    __this->Bypass(*value);
}

// protected void BypassActivate() :1577
void Trigger__BypassActivate_fn(Trigger* __this)
{
    __this->BypassActivate();
}

// protected void BypassDeactivate() :1611
void Trigger__BypassDeactivate_fn(Trigger* __this)
{
    __this->BypassDeactivate();
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) :1825
void Trigger__BypassSeek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->BypassSeek(*progress, *direction);
}

// private void CleanupState() :1684
void Trigger__CleanupState_fn(Trigger* __this)
{
    __this->CleanupState();
}

// private void CreateState() :1693
void Trigger__CreateState_fn(Trigger* __this)
{
    __this->CreateState();
}

// public double get_CrossFadeDuration() :1354
void Trigger__get_CrossFadeDuration_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) :1355
void Trigger__set_CrossFadeDuration_fn(Trigger* __this, double* value)
{
    __this->CrossFadeDuration(*value);
}

// protected void Deactivate() :1594
void Trigger__Deactivate_fn(Trigger* __this)
{
    __this->Deactivate();
}

// protected void DirectActivate([Uno.Action done]) :1584
void Trigger__DirectActivate_fn(Trigger* __this, uDelegate* done)
{
    __this->DirectActivate(done);
}

// protected void DirectDeactivate() :1605
void Trigger__DirectDeactivate_fn(Trigger* __this)
{
    __this->DirectDeactivate();
}

// protected void DirectSeek(double progress, [Fuse.Animations.AnimationVariant direction]) :1820
void Trigger__DirectSeek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->DirectSeek(*progress, *direction);
}

// private void EnsureAnimationLength() :1712
void Trigger__EnsureAnimationLength_fn(Trigger* __this)
{
    __this->EnsureAnimationLength();
}

// private bool EnsureState(double progress) :1702
void Trigger__EnsureState_fn(Trigger* __this, double* progress, bool* __retval)
{
    *__retval = __this->EnsureState(*progress);
}

// private void Fuse.Animations.IPlayerFeedback.OnPlaybackDone(object s) :1490
void Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn(Trigger* __this, uObject* s)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Fuse.Animations.IPlayerFeedback.OnPlaybackDone(object)");
    __this->SetPlayDirection(0);

    if (::g::Uno::Delegate::op_Inequality(__this->PlaybackDone1, NULL))
        uPtr(__this->PlaybackDone1)->InvokeVoid(__this);

    if (::g::Uno::Delegate::op_Equality(__this->_doneAction, NULL))
        return;

    uDelegate* da = __this->_doneAction;
    __this->_doneAction = NULL;

    if ((__this->_doneOn && uPtr(__this->_animState)->ProgressFullOn()) || (!__this->_doneOn && uPtr(__this->_animState)->ProgressFullOff()))
        uPtr(da)->InvokeVoid();
}

// private void Fuse.Animations.IPlayerFeedback.OnProgressUpdated(object s) :1759
void Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn(Trigger* __this, uObject* s)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Fuse.Animations.IPlayerFeedback.OnProgressUpdated(object)");
    ::g::Fuse::Triggers::Actions::TriggerAction* ret4;
    double prev = uPtr(__this->_animState)->PreviousProgress();
    double cur = uPtr(__this->_animState)->Progress();
    double diff = cur - prev;

    if (diff == 0.0)
        return;

    __this->OnProgressChanged();
    __this->SetPlayDirection((diff > 0.0) ? 1 : (diff < 0.0) ? -1 : 0);

    if (__this->_actions == NULL)
        return;

    int dir = (diff > 0.0) ? 0 : 1;

    for (int i = 0; i < uPtr(__this->_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_actions), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(action)->IsProgressTriggered())
            continue;

        float tp = uPtr(action)->ProgressWhen((float)uPtr(__this->_animState)->CurrentAnimatorsDuration());
        bool call = (dir == 0) ? (((double)tp >= prev) && ((double)tp < cur)) || ((tp == 1.0f) && (cur == 1.0)) : (((double)tp <= prev) && ((double)tp > cur)) || ((tp == 0.0f) && (cur == 0.0));

        if (call && ((action->Direction() == 2) || (action->Direction() == dir)))
            action->PerformFromNode(__this->Parent());
    }
}

// public bool get_HasActions() :1382
void Trigger__get_HasActions_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasActions();
}

// public bool get_HasAnimators() :1363
void Trigger__get_HasAnimators_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasAnimators();
}

// protected void InversePulse() :1648
void Trigger__InversePulse_fn(Trigger* __this)
{
    __this->InversePulse();
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() :1391
void Trigger__get_Nodes_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Nodes();
}

// protected virtual void OnNodeAdded(Fuse.Node n) :1398
void Trigger__OnNodeAdded_fn(Trigger* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnNodeAdded(Fuse.Node)");

    if (__this->IsRootingCompleted() && __this->_isStarted)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->Parent())->Children()), ::TYPES[52/*Uno.Collections.ICollection<Fuse.Node>*/]), n);
}

// protected void OnNodeRemoved(Fuse.Node n) :1404
void Trigger__OnNodeRemoved_fn(Trigger* __this, ::g::Fuse::Node* n)
{
    __this->OnNodeRemoved(n);
}

// internal override sealed void OnPreserveRootFrame() :1870
void Trigger__OnPreserveRootFrame_fn(Trigger* __this)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnPreserveRootFrame()");
    ::g::Fuse::Node__OnPreserveRootFrame_fn(__this);
    __this->_rootProgress = __this->Progress();
    __this->_rootPlayDirection = __this->_lastPlayDirection;
}

// protected virtual void OnProgressChanged() :1755
void Trigger__OnProgressChanged_fn(Trigger* __this)
{
}

// protected override void OnRooted() :1845
void Trigger__OnRooted_fn(Trigger* __this)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_rootFrame = ::g::Fuse::UpdateManager::FrameIndex();

    if (__this->IsPreservedRootFrame())
    {
        __this->BypassSeek(__this->_rootProgress, 0);

        if (__this->_rootPlayDirection != 0)
            __this->PlayEnd((__this->_rootPlayDirection > 0) ? true : false, __this->_doneAction);
    }
    else
    {
        __this->_lastPlayDirection = 0;
        __this->_doneAction = NULL;
        __this->_doneOn = false;

        if (__this->_startAtZero)
        {
            __this->Start();
            __this->EnsureState(0.0);
        }
    }
}

// protected override void OnUnrooted() :1877
void Trigger__OnUnrooted_fn(Trigger* __this)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnUnrooted()");
    __this->Stop(true);
    __this->CleanupState();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal generated void add_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) :1268
void Trigger__add_PlaybackDone_fn(Trigger* __this, uDelegate* value)
{
    __this->add_PlaybackDone(value);
}

// internal generated void remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) :1268
void Trigger__remove_PlaybackDone_fn(Trigger* __this, uDelegate* value)
{
    __this->remove_PlaybackDone(value);
}

// protected void PlayEnd(bool on, [Uno.Action done]) :1664
void Trigger__PlayEnd_fn(Trigger* __this, bool* on, uDelegate* done)
{
    __this->PlayEnd(*on, done);
}

// private void PlayOn() :1653
void Trigger__PlayOn_fn(Trigger* __this)
{
    __this->PlayOn();
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) :1796
void Trigger__PlayTo_fn(Trigger* __this, double* progress, int* variant)
{
    __this->PlayTo(*progress, *variant);
}

// protected double get_Progress() :1455
void Trigger__get_Progress_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// protected void Pulse() :1624
void Trigger__Pulse_fn(Trigger* __this)
{
    __this->Pulse();
}

// protected void RemoveContent(Fuse.Node target) :1434
void Trigger__RemoveContent_fn(Trigger* __this, ::g::Fuse::Node* target)
{
    __this->RemoveContent(target);
}

// protected void Seek(double progress, [Fuse.Animations.AnimationVariant direction]) :1809
void Trigger__Seek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->Seek(*progress, *direction);
}

// private void SeekImpl(double progress, Fuse.Animations.AnimationVariant direction, Fuse.Animations.TriggerAnimationState.SeekFlags flags) :1831
void Trigger__SeekImpl_fn(Trigger* __this, double* progress, int* direction, int* flags)
{
    __this->SeekImpl(*progress, *direction, *flags);
}

// private void SetDone(Uno.Action done, bool on) :1441
void Trigger__SetDone_fn(Trigger* __this, uDelegate* done, bool* on)
{
    __this->SetDone(done, *on);
}

// private void SetPlayDirection(int next) :1468
void Trigger__SetPlayDirection_fn(Trigger* __this, int* next)
{
    __this->SetPlayDirection(*next);
}

// private bool get_ShouldBypass() :1545
void Trigger__get_ShouldBypass_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->ShouldBypass();
}

// private bool get_ShouldIgnore() :1536
void Trigger__get_ShouldIgnore_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->ShouldIgnore();
}

// protected void Start() :1511
void Trigger__Start_fn(Trigger* __this)
{
    __this->Start();
}

// protected void Stop([bool force]) :1522
void Trigger__Stop_fn(Trigger* __this, bool* force)
{
    __this->Stop(*force);
}

// private void StopAction() :1617
void Trigger__StopAction_fn(Trigger* __this)
{
    __this->StopAction();
}

// public double get_StretchDuration() :1317
void Trigger__get_StretchDuration_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->StretchDuration();
}

// public void set_StretchDuration(double value) :1318
void Trigger__set_StretchDuration_fn(Trigger* __this, double* value)
{
    __this->StretchDuration(*value);
}

// public double get_TimeMultiplier() :1308
void Trigger__get_TimeMultiplier_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) :1309
void Trigger__set_TimeMultiplier_fn(Trigger* __this, double* value)
{
    __this->TimeMultiplier(*value);
}

// protected generated Trigger() [instance] :1254
void Trigger::ctor_3()
{
    uStackFrame __("Fuse.Triggers.Trigger", ".ctor()");
    ctor_2();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() [instance] :1373
uObject* Trigger::Actions()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Actions()");

    if (_actions == NULL)
        _actions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[57/*Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>*/]));

    return (uObject*)_actions;
}

// protected void Activate([Uno.Action done]) [instance] :1566
void Trigger::Activate(uDelegate* done)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Activate([Uno.Action])");

    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassActivate();
    else
        DirectActivate(done);
}

// protected void AddContent(Fuse.Node target) [instance] :1410
void Trigger::AddContent(::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Trigger", "AddContent(Fuse.Node)");
    int ret1;
    ::g::Fuse::Node* ret2;

    if ((_nodes == NULL) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[52/*Uno.Collections.ICollection<Fuse.Node>*/])) == 0))
        return;

    if (Parent() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[37/*"AddContent ...*/], this, ::STRINGS[11/*"/usr/local/...*/], 1417, ::STRINGS[38/*"AddContent"*/]);
        return;
    }

    int where = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[53/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), this, &ret1), ret1);

    if (where == -1)
    {
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[39/*"Could not l...*/], this), this, ::STRINGS[11/*"/usr/local/...*/], 1425, ::STRINGS[38/*"AddContent"*/]);
        return;
    }

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[52/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
        ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[55/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(where + i), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[55/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2));
}

// public Fuse.Animations.TriggerAnimation get_Animation() [instance] :1292
::g::Fuse::Animations::TriggerAnimation* Trigger::Animation()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Animation()");

    if (_animation == NULL)
        _animation = ::g::Fuse::Animations::TriggerAnimation::New1();

    return _animation;
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :1297
void Trigger::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_Animation(Fuse.Animations.TriggerAnimation)");
    _animation = value;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :1359
uObject* Trigger::Animators()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Animators()");
    return uPtr(Animation())->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() [instance] :1344
::g::Fuse::Animations::TriggerAnimation* Trigger::BackwardAnimation()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_BackwardAnimation()");
    return uPtr(Animation())->Backward();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) [instance] :1345
void Trigger::BackwardAnimation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_BackwardAnimation(Fuse.Animations.TriggerAnimation)");
    uPtr(Animation())->Backward(value);
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() [instance] :1281
int Trigger::Bypass()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Bypass()");
    return _Bypass;
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) [instance] :1281
void Trigger::Bypass(int value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_Bypass(Fuse.Triggers.TriggerBypassMode)");
    _Bypass = value;
}

// protected void BypassActivate() [instance] :1577
void Trigger::BypassActivate()
{
    uStackFrame __("Fuse.Triggers.Trigger", "BypassActivate()");
    BypassSeek(1.0, 0);
    PlayOn();
}

// protected void BypassDeactivate() [instance] :1611
void Trigger::BypassDeactivate()
{
    uStackFrame __("Fuse.Triggers.Trigger", "BypassDeactivate()");
    BypassSeek(0.0, 0);
    DirectDeactivate();
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :1825
void Trigger::BypassSeek(double progress, int direction)
{
    uStackFrame __("Fuse.Triggers.Trigger", "BypassSeek(double,[Fuse.Animations.AnimationVariant])");
    SeekImpl(progress, direction, 3);
}

// private void CleanupState() [instance] :1684
void Trigger::CleanupState()
{
    uStackFrame __("Fuse.Triggers.Trigger", "CleanupState()");

    if (_animState != NULL)
    {
        uPtr(_animState)->Dispose();
        _animState = NULL;
    }
}

// private void CreateState() [instance] :1693
void Trigger::CreateState()
{
    uStackFrame __("Fuse.Triggers.Trigger", "CreateState()");
    CleanupState();
    EnsureAnimationLength();
    _animState = uPtr(Animation())->CreateState(Parent());
    uPtr(_animState)->Feedback = (uObject*)this;
}

// public double get_CrossFadeDuration() [instance] :1354
double Trigger::CrossFadeDuration()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_CrossFadeDuration()");
    return uPtr(Animation())->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) [instance] :1355
void Trigger::CrossFadeDuration(double value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_CrossFadeDuration(double)");
    uPtr(Animation())->CrossFadeDuration(value);
}

// protected void Deactivate() [instance] :1594
void Trigger::Deactivate()
{
    uStackFrame __("Fuse.Triggers.Trigger", "Deactivate()");

    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassDeactivate();
    else
        DirectDeactivate();
}

// protected void DirectActivate([Uno.Action done]) [instance] :1584
void Trigger::DirectActivate(uDelegate* done)
{
    uStackFrame __("Fuse.Triggers.Trigger", "DirectActivate([Uno.Action])");
    PlayEnd(true, done);
}

// protected void DirectDeactivate() [instance] :1605
void Trigger::DirectDeactivate()
{
    uStackFrame __("Fuse.Triggers.Trigger", "DirectDeactivate()");
    PlayEnd(false, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Trigger__StopAction_fn, this));
}

// protected void DirectSeek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :1820
void Trigger::DirectSeek(double progress, int direction)
{
    uStackFrame __("Fuse.Triggers.Trigger", "DirectSeek(double,[Fuse.Animations.AnimationVariant])");
    SeekImpl(progress, direction, 1);
}

// private void EnsureAnimationLength() [instance] :1712
void Trigger::EnsureAnimationLength()
{
    uStackFrame __("Fuse.Triggers.Trigger", "EnsureAnimationLength()");
    ::g::Fuse::Triggers::Actions::TriggerAction* ret3;

    if (!HasActions())
        return;

    double animFore = uPtr(Animation())->GetAnimatorsDuration(0);
    double animBack = uPtr(Animation())->GetAnimatorsDuration(1);
    double actFore = 0.0;
    double actBack = 0.0;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret3), ret3);
        float when = uPtr(action)->Delay();

        if ((action->Direction() == 0) || (action->Direction() == 2))
            actFore = ::g::Uno::Math::Max((double)when, actFore);

        if ((action->Direction() == 1) || (action->Direction() == 2))
            actBack = ::g::Uno::Math::Max((double)when, actBack);
    }

    if ((actFore <= animFore) && (actBack <= animBack))
        return;

    ::g::Fuse::Animations::Nothing* n = ::g::Fuse::Animations::Nothing::New2();
    n->Delay(actFore);
    n->DelayBack(actBack);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), n);

    if (BackwardAnimation() != NULL)
    {
        n = ::g::Fuse::Animations::Nothing::New2();
        n->Delay(actBack);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(BackwardAnimation())->Animators()), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), n);
    }
}

// private bool EnsureState(double progress) [instance] :1702
bool Trigger::EnsureState(double progress)
{
    uStackFrame __("Fuse.Triggers.Trigger", "EnsureState(double)");

    if ((progress > 0.0) || _startAtZero)
    {
        if ((_animState == NULL) && (HasAnimators() || HasActions()))
            CreateState();
    }

    return _animState != NULL;
}

// public bool get_HasActions() [instance] :1382
bool Trigger::HasActions()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_HasActions()");
    return (_actions != NULL) && (uPtr(_actions)->Count() > 0);
}

// public bool get_HasAnimators() [instance] :1363
bool Trigger::HasAnimators()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_HasAnimators()");
    return (_animation != NULL) && uPtr(_animation)->HasAnimators();
}

// protected void InversePulse() [instance] :1648
void Trigger::InversePulse()
{
    uStackFrame __("Fuse.Triggers.Trigger", "InversePulse()");
    PlayEnd(false, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Trigger__PlayOn_fn, this));
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() [instance] :1391
uObject* Trigger::Nodes()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Nodes()");

    if (_nodes == NULL)
        _nodes = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[59/*Uno.Collections.ObservableList<Fuse.Node>*/], uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Node>*/], this, offsetof(Trigger_type, fp_OnNodeAdded)), uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Node>*/], (void*)Trigger__OnNodeRemoved_fn, this)));

    return _nodes;
}

// protected void OnNodeRemoved(Fuse.Node n) [instance] :1404
void Trigger::OnNodeRemoved(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnNodeRemoved(Fuse.Node)");

    if (IsRootingCompleted() && _isStarted)
        uPtr(Parent())->BeginRemoveChild(n, NULL);
}

// internal generated void add_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) [instance] :1268
void Trigger::add_PlaybackDone(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "add_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger>)");
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PlaybackDone1, value), ::TYPES[46/*Uno.Action<Fuse.Triggers.Trigger>*/]);
}

// internal generated void remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) [instance] :1268
void Trigger::remove_PlaybackDone(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger>)");
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PlaybackDone1, value), ::TYPES[46/*Uno.Action<Fuse.Triggers.Trigger>*/]);
}

// protected void PlayEnd(bool on, [Uno.Action done]) [instance] :1664
void Trigger::PlayEnd(bool on, uDelegate* done)
{
    uStackFrame __("Fuse.Triggers.Trigger", "PlayEnd(bool,[Uno.Action])");

    if (on)
        Start();

    SetDone(done, on);

    if (((on && (Progress() < 1.0)) || (!on && (Progress() > 0.0))) || (_lastPlayDirection != 0))
        SetPlayDirection(on ? 1 : -1);

    if ((!on && (Progress() <= 0.0)) && (_animState == NULL))
        uPtr(done)->InvokeVoid();
    else if (EnsureState((double)(on ? 1 : 0)))
        uPtr(_animState)->PlayEnd(on);
}

// private void PlayOn() [instance] :1653
void Trigger::PlayOn()
{
    uStackFrame __("Fuse.Triggers.Trigger", "PlayOn()");
    PlayEnd(true, NULL);
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) [instance] :1796
void Trigger::PlayTo(double progress, int variant)
{
    uStackFrame __("Fuse.Triggers.Trigger", "PlayTo(double,[Fuse.Animations.AnimationVariant])");

    if (EnsureState(progress))
        uPtr(_animState)->PlayToProgress(progress, variant, 1);
}

// protected double get_Progress() [instance] :1455
double Trigger::Progress()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Progress()");

    if (_animState != NULL)
        return uPtr(_animState)->Progress();

    return 0.0;
}

// protected void Pulse() [instance] :1624
void Trigger::Pulse()
{
    uStackFrame __("Fuse.Triggers.Trigger", "Pulse()");

    if (ShouldIgnore())
        return;

    SetPlayDirection(0);
    DirectActivate(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Trigger__DirectDeactivate_fn, this));
}

// protected void RemoveContent(Fuse.Node target) [instance] :1434
void Trigger::RemoveContent(::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Trigger", "RemoveContent(Fuse.Node)");
    ::g::Fuse::Node* ret5;

    if ((_nodes != NULL) && (Parent() != NULL))

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[52/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
            uPtr(Parent())->BeginRemoveChild((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[55/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret5), ret5), NULL);
}

// protected void Seek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :1809
void Trigger::Seek(double progress, int direction)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Seek(double,[Fuse.Animations.AnimationVariant])");

    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassSeek(progress, direction);
    else
        DirectSeek(progress, direction);
}

// private void SeekImpl(double progress, Fuse.Animations.AnimationVariant direction, Fuse.Animations.TriggerAnimationState.SeekFlags flags) [instance] :1831
void Trigger::SeekImpl(double progress, int direction, int flags)
{
    uStackFrame __("Fuse.Triggers.Trigger", "SeekImpl(double,Fuse.Animations.AnimationVariant,Fuse.Animations.TriggerAnimationState.SeekFlags)");

    if (progress > 0.0)
        Start();
    else
        Stop(false);

    if (EnsureState(progress))
        uPtr(_animState)->SeekProgress(progress, direction, flags);
}

// private void SetDone(Uno.Action done, bool on) [instance] :1441
void Trigger::SetDone(uDelegate* done, bool on)
{
    uStackFrame __("Fuse.Triggers.Trigger", "SetDone(Uno.Action,bool)");
    _doneOn = on;
    _doneAction = done;
}

// private void SetPlayDirection(int next) [instance] :1468
void Trigger::SetPlayDirection(int next)
{
    uStackFrame __("Fuse.Triggers.Trigger", "SetPlayDirection(int)");
    ::g::Fuse::Triggers::Actions::TriggerAction* ret6;

    if (next == _lastPlayDirection)
        return;

    _lastPlayDirection = next;

    if ((next == 0) || (_actions == NULL))
        return;

    int dir = (next > 0) ? 0 : 1;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret6), ret6);

        if (uPtr(action)->IsProgressTriggered())
            continue;

        if ((uPtr(action)->Direction() == dir) || (uPtr(action)->Direction() == 2))
            uPtr(action)->PerformFromNode(Parent());
    }
}

// private bool get_ShouldBypass() [instance] :1545
bool Trigger::ShouldBypass()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_ShouldBypass()");

    if (Bypass() == 1)
        return false;

    if (IsPreservedRootFrame() && (Bypass() != 2))
        return false;

    if (_rootFrame == ::g::Fuse::UpdateManager::FrameIndex())
        return true;

    return !IsRootingCompleted();
}

// private bool get_ShouldIgnore() [instance] :1536
bool Trigger::ShouldIgnore()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_ShouldIgnore()");
    return !IsRootingStarted();
}

// protected void Start() [instance] :1511
void Trigger::Start()
{
    uStackFrame __("Fuse.Triggers.Trigger", "Start()");

    if (!_isStarted)
    {
        if (!IsRootingStarted())
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[40/*"Trigger sta...*/], this)));

        _isStarted = true;
        AddContent(Parent());
    }
}

// protected void Stop([bool force]) [instance] :1522
void Trigger::Stop(bool force)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Stop([bool])");

    if (_startAtZero && !force)
        return;

    if (_isStarted)
    {
        RemoveContent(Parent());
        _isStarted = false;
    }
}

// private void StopAction() [instance] :1617
void Trigger::StopAction()
{
    uStackFrame __("Fuse.Triggers.Trigger", "StopAction()");
    Stop(false);
}

// public double get_StretchDuration() [instance] :1317
double Trigger::StretchDuration()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_StretchDuration()");
    return uPtr(Animation())->StretchDuration();
}

// public void set_StretchDuration(double value) [instance] :1318
void Trigger::StretchDuration(double value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_StretchDuration(double)");
    uPtr(Animation())->StretchDuration(value);
}

// public double get_TimeMultiplier() [instance] :1308
double Trigger::TimeMultiplier()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_TimeMultiplier()");
    return uPtr(Animation())->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) [instance] :1309
void Trigger::TimeMultiplier(double value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_TimeMultiplier(double)");
    uPtr(Animation())->TimeMultiplier(value);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public enum TriggerBypassMode :1208
uEnumType* TriggerBypassMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TriggerBypassMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Standard", 0LL,
        "Never", 1LL,
        "Rooting", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract class WhileBool :1898
// {
static void WhileBool_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface4),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface5),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface6));
    type->SetFields(33);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Value", NULL, (void*)WhileBool__get_Value1_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)WhileBool__set_Value1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Triggers::WhileValue_type* WhileBool_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 33;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WhileBool);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileBool", options);
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = WhileBool_build;
    type->interface5.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface5.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface5.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface5.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    type->interface6.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
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

// protected generated WhileBool() :1898
void WhileBool__ctor_6_fn(WhileBool* __this)
{
    __this->ctor_6();
}

// public new bool get_Value() :1902
void WhileBool__get_Value1_fn(WhileBool* __this, bool* __retval)
{
    *__retval = __this->Value1();
}

// public new void set_Value(bool value) :1903
void WhileBool__set_Value1_fn(WhileBool* __this, bool* value)
{
    __this->Value1(*value);
}

// protected generated WhileBool() [instance] :1898
void WhileBool::ctor_6()
{
    uStackFrame __("Fuse.Triggers.WhileBool", ".ctor()");
    ctor_5();
}

// public new bool get_Value() [instance] :1902
bool WhileBool::Value1()
{
    uStackFrame __("Fuse.Triggers.WhileBool", "get_Value()");
    bool ret1;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret1), ret1);
}

// public new void set_Value(bool value) [instance] :1903
void WhileBool::Value1(bool value)
{
    uStackFrame __("Fuse.Triggers.WhileBool", "set_Value(bool)");
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileCompleted :2287
// {
// static WhileCompleted() :2287
static void WhileCompleted__cctor_1_fn(uType* __type)
{
    WhileCompleted::_whileCompletedProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhileCompleted_build(uType* type)
{
    ::TYPES[61] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[52] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[55] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileCompleted::_whileCompletedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileCompleted__New2_fn, 0, true, WhileCompleted_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhileCompleted__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileCompleted);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileCompleted", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileCompleted_build;
    type->fp_ctor_ = (void*)WhileCompleted__New2_fn;
    type->fp_cctor_ = WhileCompleted__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileCompleted__OnRooted_fn;
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

// public generated WhileCompleted() :2287
void WhileCompleted__ctor_5_fn(WhileCompleted* __this)
{
    __this->ctor_5();
}

// private static bool IsCompleted(Fuse.Visual n) :2291
void WhileCompleted__IsCompleted_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhileCompleted::IsCompleted(n);
}

// public generated WhileCompleted New() :2287
void WhileCompleted__New2_fn(WhileCompleted** __retval)
{
    *__retval = WhileCompleted::New2();
}

// protected override sealed void OnRooted() :2312
void WhileCompleted__OnRooted_fn(WhileCompleted* __this)
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhileCompleted::IsCompleted(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool paused) :2298
void WhileCompleted__SetState_fn(::g::Fuse::Visual* n, bool* paused)
{
    WhileCompleted::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileCompleted::_whileCompletedProp_;

// public generated WhileCompleted() [instance] :2287
void WhileCompleted::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", ".ctor()");
    ctor_4();
}

// private static bool IsCompleted(Fuse.Visual n) [static] :2291
bool WhileCompleted::IsCompleted(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", "IsCompleted(Fuse.Visual)");
    WhileCompleted_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileCompleted::_whileCompletedProp());

    if (!uIs(v, ::TYPES[61/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[61/*bool*/], v);
}

// public generated WhileCompleted New() [static] :2287
WhileCompleted* WhileCompleted::New2()
{
    WhileCompleted* obj1 = (WhileCompleted*)uNew(WhileCompleted_typeof());
    obj1->ctor_5();
    return obj1;
}

// public static void SetState(Fuse.Visual n, bool paused) [static] :2298
void WhileCompleted::SetState(::g::Fuse::Visual* n, bool paused)
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", "SetState(Fuse.Visual,bool)");
    WhileCompleted_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhileCompleted::IsCompleted(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileCompleted::_whileCompletedProp(), uBox(::TYPES[61/*bool*/], paused));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[52/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhileCompleted* wl = uAs<WhileCompleted*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[55/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhileCompleted_typeof());

            if ((wl != NULL) && uPtr(wl)->IsRootingCompleted())
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/Triggers/$.uno
// -----------------------------------------------------------------------------

// public class WhileContainsText :8
// {
static void WhileContainsText_build(uType* type)
{
    ::STRINGS[41] = uString::Const("No TextInput or Source found for string");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.29.22/Triggers/$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[62] = ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[63] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Triggers::WhileContainsText, _source), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Triggers::WhileContainsText, _value), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)WhileContainsText__New2_fn, 0, true, WhileContainsText_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WhileContainsText__get_Source_fn, 0, false, ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), 0),
        new uFunction("set_Source", NULL, (void*)WhileContainsText__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof())));
}

::g::Fuse::Triggers::Trigger_type* WhileContainsText_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileContainsText);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileContainsText", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileContainsText_build;
    type->fp_ctor_ = (void*)WhileContainsText__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileContainsText__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileContainsText__OnUnrooted_fn;
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

// public generated WhileContainsText() :8
void WhileContainsText__ctor_5_fn(WhileContainsText* __this)
{
    __this->ctor_5();
}

// public generated WhileContainsText New() :8
void WhileContainsText__New2_fn(WhileContainsText** __retval)
{
    *__retval = WhileContainsText::New2();
}

// protected override sealed void OnRooted() :18
void WhileContainsText__OnRooted_fn(WhileContainsText* __this)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "OnRooted()");
    uString* ret2;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->Source() != NULL)
        __this->_value = __this->Source();
    else
        __this->_value = uAs<uObject*>(__this->Parent(), ::TYPES[62/*Fuse.Triggers.IValue<string>*/]);

    if (__this->_value != NULL)
    {
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_value), ::TYPES[62/*Fuse.Triggers.IValue<string>*/]), uDelegate::New(::TYPES[63/*Uno.UX.ValueChangedHandler<string>*/], (void*)WhileContainsText__OnValueChanged_fn, __this));
        __this->SetActive(!::g::Uno::String::IsNullOrEmpty((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_value), ::TYPES[62/*Fuse.Triggers.IValue<string>*/]), &ret2), ret2)));
    }
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[41/*"No TextInpu...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 33, ::STRINGS[5/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted() :37
void WhileContainsText__OnUnrooted_fn(WhileContainsText* __this)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "OnUnrooted()");

    if (__this->_value != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_value), ::TYPES[62/*Fuse.Triggers.IValue<string>*/]), uDelegate::New(::TYPES[63/*Uno.UX.ValueChangedHandler<string>*/], (void*)WhileContainsText__OnValueChanged_fn, __this));
        __this->_value = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :47
void WhileContainsText__OnValueChanged_fn(WhileContainsText* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// public Fuse.Triggers.IValue<string> get_Source() :13
void WhileContainsText__get_Source_fn(WhileContainsText* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IValue<string> value) :14
void WhileContainsText__set_Source_fn(WhileContainsText* __this, uObject* value)
{
    __this->Source(value);
}

// public generated WhileContainsText() [instance] :8
void WhileContainsText::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", ".ctor()");
    ctor_4();
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :47
void WhileContainsText::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "OnValueChanged(object,Uno.UX.ValueChangedArgs<string>)");
    uString* ret3;
    SetActive(!::g::Uno::String::IsNullOrEmpty((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(_value), ::TYPES[62/*Fuse.Triggers.IValue<string>*/]), &ret3), ret3)));
}

// public Fuse.Triggers.IValue<string> get_Source() [instance] :13
uObject* WhileContainsText::Source()
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<string> value) [instance] :14
void WhileContainsText::Source(uObject* value)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "set_Source(Fuse.Triggers.IValue<string>)");
    _source = value;
}

// public generated WhileContainsText New() [static] :8
WhileContainsText* WhileContainsText::New2()
{
    WhileContainsText* obj1 = (WhileContainsText*)uNew(WhileContainsText_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileDisabled :100
// {
static void WhileDisabled_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface4));
    type->SetFields(28);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileDisabled__New2_fn, 0, true, WhileDisabled_typeof(), 0));
}

::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileDisabled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type);
    type = (::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileDisabled", options);
    type->SetBase(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof());
    type->fp_build_ = WhileDisabled_build;
    type->fp_ctor_ = (void*)WhileDisabled__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileDisabled__get_IsActive_fn;
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

// public generated WhileDisabled() :100
void WhileDisabled__ctor_6_fn(WhileDisabled* __this)
{
    __this->ctor_6();
}

// protected override sealed bool get_IsActive() :104
void WhileDisabled__get_IsActive_fn(WhileDisabled* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileDisabled", "get_IsActive()");
    return *__retval = (__this->Parent() != NULL) ? !uPtr(__this->Parent())->IsContextEnabled() : false, void();
}

// public generated WhileDisabled New() :100
void WhileDisabled__New2_fn(WhileDisabled** __retval)
{
    *__retval = WhileDisabled::New2();
}

// public generated WhileDisabled() [instance] :100
void WhileDisabled::ctor_6()
{
    uStackFrame __("Fuse.Triggers.WhileDisabled", ".ctor()");
    ctor_5();
}

// public generated WhileDisabled New() [static] :100
WhileDisabled* WhileDisabled::New2()
{
    WhileDisabled* obj1 = (WhileDisabled*)uNew(WhileDisabled_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileEnabled :111
// {
static void WhileEnabled_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface4));
    type->SetFields(28);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEnabled__New2_fn, 0, true, WhileEnabled_typeof(), 0));
}

::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileEnabled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type);
    type = (::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileEnabled", options);
    type->SetBase(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof());
    type->fp_build_ = WhileEnabled_build;
    type->fp_ctor_ = (void*)WhileEnabled__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileEnabled__get_IsActive_fn;
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

// public generated WhileEnabled() :111
void WhileEnabled__ctor_6_fn(WhileEnabled* __this)
{
    __this->ctor_6();
}

// protected override sealed bool get_IsActive() :115
void WhileEnabled__get_IsActive_fn(WhileEnabled* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileEnabled", "get_IsActive()");
    return *__retval = (__this->Parent() != NULL) ? uPtr(__this->Parent())->IsContextEnabled() : true, void();
}

// public generated WhileEnabled New() :111
void WhileEnabled__New2_fn(WhileEnabled** __retval)
{
    *__retval = WhileEnabled::New2();
}

// public generated WhileEnabled() [instance] :111
void WhileEnabled::ctor_6()
{
    uStackFrame __("Fuse.Triggers.WhileEnabled", ".ctor()");
    ctor_5();
}

// public generated WhileEnabled New() [static] :111
WhileEnabled* WhileEnabled::New2()
{
    WhileEnabled* obj1 = (WhileEnabled*)uNew(WhileEnabled_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract class WhileEnabledDisabledTrigger :74
// {
static void WhileEnabledDisabledTrigger_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileEnabledDisabledTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileEnabledDisabledTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileEnabledDisabledTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileEnabledDisabledTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileEnabledDisabledTrigger_type, interface4));
    type->SetFields(28);
}

WhileEnabledDisabledTrigger_type* WhileEnabledDisabledTrigger_typeof()
{
    static uSStrong<WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileEnabledDisabledTrigger);
    options.TypeSize = sizeof(WhileEnabledDisabledTrigger_type);
    type = (WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileEnabledDisabledTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileEnabledDisabledTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileEnabledDisabledTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileEnabledDisabledTrigger__OnUnrooted_fn;
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

// internal WhileEnabledDisabledTrigger() :76
void WhileEnabledDisabledTrigger__ctor_5_fn(WhileEnabledDisabledTrigger* __this)
{
    __this->ctor_5();
}

// private void OnIsContextEnabledChanged(object sender, Uno.EventArgs args) :94
void WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn(WhileEnabledDisabledTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnIsContextEnabledChanged(sender, args);
}

// protected override sealed void OnRooted() :80
void WhileEnabledDisabledTrigger__OnRooted_fn(WhileEnabledDisabledTrigger* __this)
{
    uStackFrame __("Fuse.Triggers.WhileEnabledDisabledTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    uPtr(__this->Parent())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn, __this));
    __this->SetActive(__this->IsActive());
}

// protected override sealed void OnUnrooted() :88
void WhileEnabledDisabledTrigger__OnUnrooted_fn(WhileEnabledDisabledTrigger* __this)
{
    uStackFrame __("Fuse.Triggers.WhileEnabledDisabledTrigger", "OnUnrooted()");
    uPtr(__this->Parent())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// internal WhileEnabledDisabledTrigger() [instance] :76
void WhileEnabledDisabledTrigger::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileEnabledDisabledTrigger", ".ctor()");
    ctor_4();
}

// private void OnIsContextEnabledChanged(object sender, Uno.EventArgs args) [instance] :94
void WhileEnabledDisabledTrigger::OnIsContextEnabledChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileEnabledDisabledTrigger", "OnIsContextEnabledChanged(object,Uno.EventArgs)");
    SetActive(IsActive());
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileFailed :1928
// {
// static WhileFailed() :1928
static void WhileFailed__cctor_1_fn(uType* __type)
{
    WhileFailed::_whileFailedProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhileFailed_build(uType* type)
{
    ::STRINGS[42] = uString::Const("WhileFailed.Message");
    ::TYPES[61] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[52] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[55] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileFailed::_whileFailedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileFailed__New2_fn, 0, true, WhileFailed_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhileFailed__SetState_fn, 0, true, uVoid_typeof(), 3, ::g::Fuse::Visual_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileFailed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFailed", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileFailed_build;
    type->fp_ctor_ = (void*)WhileFailed__New2_fn;
    type->fp_cctor_ = WhileFailed__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileFailed__OnRooted_fn;
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

// public generated WhileFailed() :1928
void WhileFailed__ctor_5_fn(WhileFailed* __this)
{
    __this->ctor_5();
}

// private static bool IsFailed(Fuse.Visual n) :1932
void WhileFailed__IsFailed_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhileFailed::IsFailed(n);
}

// public generated WhileFailed New() :1928
void WhileFailed__New2_fn(WhileFailed** __retval)
{
    *__retval = WhileFailed::New2();
}

// protected override sealed void OnRooted() :1955
void WhileFailed__OnRooted_fn(WhileFailed* __this)
{
    uStackFrame __("Fuse.Triggers.WhileFailed", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhileFailed::IsFailed(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool failed, string message) :1939
void WhileFailed__SetState_fn(::g::Fuse::Visual* n, bool* failed, uString* message)
{
    WhileFailed::SetState(n, *failed, message);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileFailed::_whileFailedProp_;

// public generated WhileFailed() [instance] :1928
void WhileFailed::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileFailed", ".ctor()");
    ctor_4();
}

// private static bool IsFailed(Fuse.Visual n) [static] :1932
bool WhileFailed::IsFailed(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Triggers.WhileFailed", "IsFailed(Fuse.Visual)");
    WhileFailed_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileFailed::_whileFailedProp());

    if (!uIs(v, ::TYPES[61/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[61/*bool*/], v);
}

// public generated WhileFailed New() [static] :1928
WhileFailed* WhileFailed::New2()
{
    WhileFailed* obj1 = (WhileFailed*)uNew(WhileFailed_typeof());
    obj1->ctor_5();
    return obj1;
}

// public static void SetState(Fuse.Visual n, bool failed, string message) [static] :1939
void WhileFailed::SetState(::g::Fuse::Visual* n, bool failed, uString* message)
{
    uStackFrame __("Fuse.Triggers.WhileFailed", "SetState(Fuse.Visual,bool,string)");
    WhileFailed_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhileFailed::IsFailed(n);

    if (v != failed)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileFailed::_whileFailedProp(), uBox(::TYPES[61/*bool*/], failed));
        n->SetResource(::STRINGS[42/*"WhileFailed...*/], message);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[52/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhileFailed* wl = uAs<WhileFailed*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[55/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhileFailed_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(failed);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileFalse :1912
// {
static void WhileFalse_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface4),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface5),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface6));
    type->SetFields(33);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFalse__New2_fn, 0, true, WhileFalse_typeof(), 0));
}

::g::Fuse::Triggers::WhileValue_type* WhileFalse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 33;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WhileFalse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileFalse", options);
    type->SetBase(::g::Fuse::Triggers::WhileBool_typeof());
    type->fp_build_ = WhileFalse_build;
    type->fp_ctor_ = (void*)WhileFalse__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileFalse__get_IsOn_fn;
    type->interface5.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface5.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface5.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface5.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    type->interface6.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
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

// public generated WhileFalse() :1912
void WhileFalse__ctor_7_fn(WhileFalse* __this)
{
    __this->ctor_7();
}

// protected override sealed bool get_IsOn() :1914
void WhileFalse__get_IsOn_fn(WhileFalse* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileFalse", "get_IsOn()");
    return *__retval = !__this->Value1(), void();
}

// public generated WhileFalse New() :1912
void WhileFalse__New2_fn(WhileFalse** __retval)
{
    *__retval = WhileFalse::New2();
}

// public generated WhileFalse() [instance] :1912
void WhileFalse::ctor_7()
{
    uStackFrame __("Fuse.Triggers.WhileFalse", ".ctor()");
    ctor_6();
}

// public generated WhileFalse New() [static] :1912
WhileFalse* WhileFalse::New2()
{
    WhileFalse* obj1 = (WhileFalse*)uNew(WhileFalse_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileFloat :1974
// {
static void WhileFloat_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface4),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface5),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface6));
    type->SetFields(33,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileFloat, _compare), 0,
        WhileFloat__Range_typeof(), offsetof(::g::Fuse::Triggers::WhileFloat, _high), 0,
        WhileFloat__Range_typeof(), offsetof(::g::Fuse::Triggers::WhileFloat, _low), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_GreaterThan", NULL, (void*)WhileFloat__get_GreaterThan_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileFloat__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GreaterThanEqual", NULL, (void*)WhileFloat__get_GreaterThanEqual_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GreaterThanEqual", NULL, (void*)WhileFloat__set_GreaterThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileFloat__get_LessThan_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileFloat__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LessThanEqual", NULL, (void*)WhileFloat__get_LessThanEqual_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LessThanEqual", NULL, (void*)WhileFloat__set_LessThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileFloat__New2_fn, 0, true, WhileFloat_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)WhileFloat__get_Value1_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)WhileFloat__set_Value1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Triggers::WhileValue_type* WhileFloat_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 36;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WhileFloat);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileFloat", options);
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = WhileFloat_build;
    type->fp_ctor_ = (void*)WhileFloat__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileFloat__get_IsOn_fn;
    type->interface5.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface5.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface5.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface5.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    type->interface6.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
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

// public generated WhileFloat() :1974
void WhileFloat__ctor_6_fn(WhileFloat* __this)
{
    __this->ctor_6();
}

// public float get_GreaterThan() :2016
void WhileFloat__get_GreaterThan_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(float value) :2017
void WhileFloat__set_GreaterThan_fn(WhileFloat* __this, float* value)
{
    __this->GreaterThan(*value);
}

// public float get_GreaterThanEqual() :2027
void WhileFloat__get_GreaterThanEqual_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->GreaterThanEqual();
}

// public void set_GreaterThanEqual(float value) :2028
void WhileFloat__set_GreaterThanEqual_fn(WhileFloat* __this, float* value)
{
    __this->GreaterThanEqual(*value);
}

// protected override sealed bool get_IsOn() :2038
void WhileFloat__get_IsOn_fn(WhileFloat* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_IsOn()");

    if ((__this->_low == 1) && (__this->Value1() <= __this->_compare.X))
        return *__retval = false, void();

    if ((__this->_low == 2) && (__this->Value1() < __this->_compare.X))
        return *__retval = false, void();

    if ((__this->_high == 1) && (__this->Value1() >= __this->_compare.Y))
        return *__retval = false, void();

    if ((__this->_high == 2) && (__this->Value1() > __this->_compare.Y))
        return *__retval = false, void();

    return *__retval = true, void();
}

// public float get_LessThan() :1994
void WhileFloat__get_LessThan_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(float value) :1995
void WhileFloat__set_LessThan_fn(WhileFloat* __this, float* value)
{
    __this->LessThan(*value);
}

// public float get_LessThanEqual() :2005
void WhileFloat__get_LessThanEqual_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->LessThanEqual();
}

// public void set_LessThanEqual(float value) :2006
void WhileFloat__set_LessThanEqual_fn(WhileFloat* __this, float* value)
{
    __this->LessThanEqual(*value);
}

// public generated WhileFloat New() :1974
void WhileFloat__New2_fn(WhileFloat** __retval)
{
    *__retval = WhileFloat::New2();
}

// public new float get_Value() :1978
void WhileFloat__get_Value1_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->Value1();
}

// public new void set_Value(float value) :1979
void WhileFloat__set_Value1_fn(WhileFloat* __this, float* value)
{
    __this->Value1(*value);
}

// public generated WhileFloat() [instance] :1974
void WhileFloat::ctor_6()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", ".ctor()");
    ctor_5();
}

// public float get_GreaterThan() [instance] :2016
float WhileFloat::GreaterThan()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_GreaterThan()");
    return _compare.X;
}

// public void set_GreaterThan(float value) [instance] :2017
void WhileFloat::GreaterThan(float value)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "set_GreaterThan(float)");
    _compare.X = value;
    _low = 1;
    UpdateState();
}

// public float get_GreaterThanEqual() [instance] :2027
float WhileFloat::GreaterThanEqual()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_GreaterThanEqual()");
    return _compare.X;
}

// public void set_GreaterThanEqual(float value) [instance] :2028
void WhileFloat::GreaterThanEqual(float value)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "set_GreaterThanEqual(float)");
    _compare.X = value;
    _low = 2;
    UpdateState();
}

// public float get_LessThan() [instance] :1994
float WhileFloat::LessThan()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_LessThan()");
    return _compare.Y;
}

// public void set_LessThan(float value) [instance] :1995
void WhileFloat::LessThan(float value)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "set_LessThan(float)");
    _compare.Y = value;
    _high = 1;
    UpdateState();
}

// public float get_LessThanEqual() [instance] :2005
float WhileFloat::LessThanEqual()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_LessThanEqual()");
    return _compare.Y;
}

// public void set_LessThanEqual(float value) [instance] :2006
void WhileFloat::LessThanEqual(float value)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "set_LessThanEqual(float)");
    _compare.Y = value;
    _high = 2;
    UpdateState();
}

// public new float get_Value() [instance] :1978
float WhileFloat::Value1()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_Value()");
    float ret2;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret2), ret2);
}

// public new void set_Value(float value) [instance] :1979
void WhileFloat::Value1(float value)
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "set_Value(float)");
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}

// public generated WhileFloat New() [static] :1974
WhileFloat* WhileFloat::New2()
{
    WhileFloat* obj1 = (WhileFloat*)uNew(WhileFloat_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileFocused :2062
// {
static void WhileFocused_build(uType* type)
{
    ::TYPES[64] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[65] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFocused__New2_fn, 0, true, WhileFocused_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* WhileFocused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileFocused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFocused", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileFocused_build;
    type->fp_ctor_ = (void*)WhileFocused__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileFocused__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileFocused__OnUnrooted_fn;
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

// public generated WhileFocused() :2062
void WhileFocused__ctor_5_fn(WhileFocused* __this)
{
    __this->ctor_5();
}

// public generated WhileFocused New() :2062
void WhileFocused__New2_fn(WhileFocused** __retval)
{
    *__retval = WhileFocused::New2();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) :2079
void WhileFocused__OnGotFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) :2084
void WhileFocused__OnLostFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// protected override sealed void OnRooted() :2064
void WhileFocused__OnRooted_fn(WhileFocused* __this)
{
    uStackFrame __("Fuse.Triggers.WhileFocused", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[64/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocused__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[65/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocused__OnLostFocus_fn, __this));
    __this->SetActive(::g::Fuse::Input::Focus::FocusedVisual() == __this->Parent());
}

// protected override sealed void OnUnrooted() :2072
void WhileFocused__OnUnrooted_fn(WhileFocused* __this)
{
    uStackFrame __("Fuse.Triggers.WhileFocused", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[64/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocused__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[65/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocused__OnLostFocus_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileFocused() [instance] :2062
void WhileFocused::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileFocused", ".ctor()");
    ctor_4();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance] :2079
void WhileFocused::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileFocused", "OnGotFocus(object,Uno.EventArgs)");
    SetActive(true);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance] :2084
void WhileFocused::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileFocused", "OnLostFocus(object,Uno.EventArgs)");
    SetActive(false);
}

// public generated WhileFocused New() [static] :2062
WhileFocused* WhileFocused::New2()
{
    WhileFocused* obj1 = (WhileFocused*)uNew(WhileFocused_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileFocusWithin :2134
// {
static void WhileFocusWithin_build(uType* type)
{
    ::TYPES[64] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[65] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFocusWithin__New2_fn, 0, true, WhileFocusWithin_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* WhileFocusWithin_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileFocusWithin);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFocusWithin", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileFocusWithin_build;
    type->fp_ctor_ = (void*)WhileFocusWithin__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileFocusWithin__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileFocusWithin__OnUnrooted_fn;
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

// public generated WhileFocusWithin() :2134
void WhileFocusWithin__ctor_5_fn(WhileFocusWithin* __this)
{
    __this->ctor_5();
}

// private bool get_IsOn() :2159
void WhileFocusWithin__get_IsOn_fn(WhileFocusWithin* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated WhileFocusWithin New() :2134
void WhileFocusWithin__New2_fn(WhileFocusWithin** __retval)
{
    *__retval = WhileFocusWithin::New2();
}

// private void OnFocusChange(object sender, Uno.EventArgs args) :2152
void WhileFocusWithin__OnFocusChange_fn(WhileFocusWithin* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFocusChange(sender, args);
}

// protected override sealed void OnRooted() :2136
void WhileFocusWithin__OnRooted_fn(WhileFocusWithin* __this)
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[64/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[65/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    __this->SetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted() :2145
void WhileFocusWithin__OnUnrooted_fn(WhileFocusWithin* __this)
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[64/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[65/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileFocusWithin() [instance] :2134
void WhileFocusWithin::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", ".ctor()");
    ctor_4();
}

// private bool get_IsOn() [instance] :2159
bool WhileFocusWithin::IsOn()
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "get_IsOn()");
    return ::g::Fuse::Input::Focus::IsWithin(Parent());
}

// private void OnFocusChange(object sender, Uno.EventArgs args) [instance] :2152
void WhileFocusWithin::OnFocusChange(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "OnFocusChange(object,Uno.EventArgs)");
    SetActive(IsOn());
}

// public generated WhileFocusWithin New() [static] :2134
WhileFocusWithin* WhileFocusWithin::New2()
{
    WhileFocusWithin* obj1 = (WhileFocusWithin*)uNew(WhileFocusWithin_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// public sealed class WhileInteracting :52
// {
static void WhileInteracting_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::WhileInteracting, _source), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::WhileInteracting, _visual), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)WhileInteracting__New2_fn, 0, true, WhileInteracting_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WhileInteracting__get_Source_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)WhileInteracting__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhileInteracting_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileInteracting);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileInteracting", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileInteracting_build;
    type->fp_ctor_ = (void*)WhileInteracting__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileInteracting__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileInteracting__OnUnrooted_fn;
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

// public generated WhileInteracting() :52
void WhileInteracting__ctor_5_fn(WhileInteracting* __this)
{
    __this->ctor_5();
}

// public generated WhileInteracting New() :52
void WhileInteracting__New2_fn(WhileInteracting** __retval)
{
    *__retval = WhileInteracting::New2();
}

// private void OnInteractingChanged(object s, object a) :78
void WhileInteracting__OnInteractingChanged_fn(WhileInteracting* __this, uObject* s, uObject* a)
{
    __this->OnInteractingChanged(s, a);
}

// protected override sealed void OnRooted() :62
void WhileInteracting__OnRooted_fn(WhileInteracting* __this)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "OnRooted()");
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_visual = (ind1 = __this->_source, ((ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)__this->Parent()));
    uPtr(__this->_visual)->add_IsInteractingChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)WhileInteracting__OnInteractingChanged_fn, __this));
    __this->SetActive(uPtr(__this->_visual)->IsInteracting());
}

// protected override sealed void OnUnrooted() :71
void WhileInteracting__OnUnrooted_fn(WhileInteracting* __this)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "OnUnrooted()");
    uPtr(__this->_visual)->remove_IsInteractingChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)WhileInteracting__OnInteractingChanged_fn, __this));
    __this->_visual = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Visual get_Source() :57
void WhileInteracting__get_Source_fn(WhileInteracting* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Visual value) :58
void WhileInteracting__set_Source_fn(WhileInteracting* __this, ::g::Fuse::Visual* value)
{
    __this->Source(value);
}

// public generated WhileInteracting() [instance] :52
void WhileInteracting::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", ".ctor()");
    ctor_4();
}

// private void OnInteractingChanged(object s, object a) [instance] :78
void WhileInteracting::OnInteractingChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "OnInteractingChanged(object,object)");
    SetActive(uPtr(_visual)->IsInteracting());
}

// public Fuse.Visual get_Source() [instance] :57
::g::Fuse::Visual* WhileInteracting::Source()
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.Visual value) [instance] :58
void WhileInteracting::Source(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "set_Source(Fuse.Visual)");
    _source = value;
}

// public generated WhileInteracting New() [static] :52
WhileInteracting* WhileInteracting::New2()
{
    WhileInteracting* obj2 = (WhileInteracting*)uNew(WhileInteracting_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileKeyboardVisible :147
// {
// static WhileKeyboardVisible() :147
static void WhileKeyboardVisible__cctor_1_fn(uType* __type)
{
    WhileKeyboardVisible::Keyboard_ = (uObject*)WhileKeyboardVisible__RelativeToKeyboardMode::New1();
}

static void WhileKeyboardVisible_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[66] = ::g::Fuse::IViewport_typeof();
    ::TYPES[67] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::WhileKeyboardVisible, _baseHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::WhileKeyboardVisible, _threshold), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileKeyboardVisible::_deltaY_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Keyboard", 30));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileKeyboardVisible__New2_fn, 0, true, WhileKeyboardVisible_typeof(), 0),
        new uFunction("get_Threshold", NULL, (void*)WhileKeyboardVisible__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* WhileKeyboardVisible_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileKeyboardVisible);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileKeyboardVisible", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = WhileKeyboardVisible_build;
    type->fp_ctor_ = (void*)WhileKeyboardVisible__New2_fn;
    type->fp_cctor_ = WhileKeyboardVisible__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileKeyboardVisible__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileKeyboardVisible__OnUnrooted_fn;
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

// public generated WhileKeyboardVisible() :147
void WhileKeyboardVisible__ctor_4_fn(WhileKeyboardVisible* __this)
{
    __this->ctor_4();
}

// private float GetHeight(Uno.Rect r) :187
void WhileKeyboardVisible__GetHeight_fn(WhileKeyboardVisible* __this, ::g::Uno::Rect* r, float* __retval)
{
    *__retval = __this->GetHeight(*r);
}

// public generated WhileKeyboardVisible New() :147
void WhileKeyboardVisible__New2_fn(WhileKeyboardVisible** __retval)
{
    *__retval = WhileKeyboardVisible::New2();
}

// private void OnBottomBarResize(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) :194
void WhileKeyboardVisible__OnBottomBarResize_fn(WhileKeyboardVisible* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    __this->OnBottomBarResize(sender, args);
}

// protected override sealed void OnRooted() :158
void WhileKeyboardVisible__OnRooted_fn(WhileKeyboardVisible* __this)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Uno::Platform::SystemUI::add_BottomFrameWillResize(uDelegate::New(::TYPES[67/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)WhileKeyboardVisible__OnBottomBarResize_fn, __this));
    __this->_baseHeight = 0.0f;
}

// protected override sealed void OnUnrooted() :177
void WhileKeyboardVisible__OnUnrooted_fn(WhileKeyboardVisible* __this)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "OnUnrooted()");
    ::g::Uno::Platform::SystemUI::remove_BottomFrameWillResize(uDelegate::New(::TYPES[67/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)WhileKeyboardVisible__OnBottomBarResize_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public float get_Threshold() :154
void WhileKeyboardVisible__get_Threshold_fn(WhileKeyboardVisible* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

float WhileKeyboardVisible::_deltaY_;
uSStrong<uObject*> WhileKeyboardVisible::Keyboard_;

// public generated WhileKeyboardVisible() [instance] :147
void WhileKeyboardVisible::ctor_4()
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", ".ctor()");
    _threshold = 150.0f;
    ctor_3();
}

// private float GetHeight(Uno.Rect r) [instance] :187
float WhileKeyboardVisible::GetHeight(::g::Uno::Rect r)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "GetHeight(Uno.Rect)");
    return r.Bottom - r.Top;
}

// private void OnBottomBarResize(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) [instance] :194
void WhileKeyboardVisible::OnBottomBarResize(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "OnBottomBarResize(object,Uno.Platform.SystemUIWillResizeEventArgs)");
    float newHeight = GetHeight(uPtr(args)->EndFrame());
    ::g::Uno::Platform2::Display* display = ::g::Uno::Platform2::Display::MainDisplay();
    newHeight = ::g::Uno::Rect__Intersect(uPtr(display)->Frame(), uPtr(args)->EndFrame()).Size().Y;
    float density = 1.0f;
    uObject* vp = uPtr(Parent())->Viewport();

    if (vp != NULL)
        density = ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(vp), ::TYPES[66/*Fuse.IViewport*/]));

    float newDeltaY = (newHeight - _baseHeight) / density;

    if (newDeltaY > Threshold())
    {
        WhileKeyboardVisible::_deltaY() = newDeltaY;
        Activate(NULL);
    }
    else
        Deactivate();
}

// public float get_Threshold() [instance] :154
float WhileKeyboardVisible::Threshold()
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "get_Threshold()");
    return _threshold;
}

// public generated WhileKeyboardVisible New() [static] :147
WhileKeyboardVisible* WhileKeyboardVisible::New2()
{
    WhileKeyboardVisible* obj1 = (WhileKeyboardVisible*)uNew(WhileKeyboardVisible_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileLoading :2175
// {
// static WhileLoading() :2175
static void WhileLoading__cctor_1_fn(uType* __type)
{
    WhileLoading::_whileLoadingProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhileLoading_build(uType* type)
{
    ::TYPES[61] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[52] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[55] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileLoading::_whileLoadingProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileLoading__New2_fn, 0, true, WhileLoading_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhileLoading__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhileLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileLoading", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileLoading_build;
    type->fp_ctor_ = (void*)WhileLoading__New2_fn;
    type->fp_cctor_ = WhileLoading__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileLoading__OnRooted_fn;
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

// public generated WhileLoading() :2175
void WhileLoading__ctor_5_fn(WhileLoading* __this)
{
    __this->ctor_5();
}

// private static bool IsLoading(Fuse.Visual n) :2179
void WhileLoading__IsLoading_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhileLoading::IsLoading(n);
}

// public generated WhileLoading New() :2175
void WhileLoading__New2_fn(WhileLoading** __retval)
{
    *__retval = WhileLoading::New2();
}

// protected override sealed void OnRooted() :2204
void WhileLoading__OnRooted_fn(WhileLoading* __this)
{
    uStackFrame __("Fuse.Triggers.WhileLoading", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhileLoading::IsLoading(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool loading) :2186
void WhileLoading__SetState_fn(::g::Fuse::Visual* n, bool* loading)
{
    WhileLoading::SetState(n, *loading);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileLoading::_whileLoadingProp_;

// public generated WhileLoading() [instance] :2175
void WhileLoading::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileLoading", ".ctor()");
    ctor_4();
}

// private static bool IsLoading(Fuse.Visual n) [static] :2179
bool WhileLoading::IsLoading(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Triggers.WhileLoading", "IsLoading(Fuse.Visual)");
    WhileLoading_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileLoading::_whileLoadingProp());

    if (!uIs(v, ::TYPES[61/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[61/*bool*/], v);
}

// public generated WhileLoading New() [static] :2175
WhileLoading* WhileLoading::New2()
{
    WhileLoading* obj1 = (WhileLoading*)uNew(WhileLoading_typeof());
    obj1->ctor_5();
    return obj1;
}

// public static void SetState(Fuse.Visual n, bool loading) [static] :2186
void WhileLoading::SetState(::g::Fuse::Visual* n, bool loading)
{
    uStackFrame __("Fuse.Triggers.WhileLoading", "SetState(Fuse.Visual,bool)");
    WhileLoading_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhileLoading::IsLoading(n);

    if (v != loading)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileLoading::_whileLoadingProp(), uBox(::TYPES[61/*bool*/], loading));

        if (n->IsRootingCompleted())

            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[52/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
            {
                WhileLoading* wl = uAs<WhileLoading*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[55/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhileLoading_typeof());

                if (wl != NULL)
                    uPtr(wl)->SetActive(loading);
            }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileNotFocused :2090
// {
static void WhileNotFocused_build(uType* type)
{
    ::TYPES[64] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[65] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNotFocused__New2_fn, 0, true, WhileNotFocused_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* WhileNotFocused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileNotFocused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileNotFocused", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileNotFocused_build;
    type->fp_ctor_ = (void*)WhileNotFocused__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNotFocused__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNotFocused__OnUnrooted_fn;
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

// public generated WhileNotFocused() :2090
void WhileNotFocused__ctor_5_fn(WhileNotFocused* __this)
{
    __this->ctor_5();
}

// public generated WhileNotFocused New() :2090
void WhileNotFocused__New2_fn(WhileNotFocused** __retval)
{
    *__retval = WhileNotFocused::New2();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) :2107
void WhileNotFocused__OnGotFocus_fn(WhileNotFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) :2112
void WhileNotFocused__OnLostFocus_fn(WhileNotFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// protected override sealed void OnRooted() :2092
void WhileNotFocused__OnRooted_fn(WhileNotFocused* __this)
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[64/*Fuse.Input.FocusGainedHandler*/], (void*)WhileNotFocused__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[65/*Fuse.Input.FocusLostHandler*/], (void*)WhileNotFocused__OnLostFocus_fn, __this));
    __this->SetActive(::g::Fuse::Input::Focus::FocusedVisual() != __this->Parent());
}

// protected override sealed void OnUnrooted() :2100
void WhileNotFocused__OnUnrooted_fn(WhileNotFocused* __this)
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[64/*Fuse.Input.FocusGainedHandler*/], (void*)WhileNotFocused__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[65/*Fuse.Input.FocusLostHandler*/], (void*)WhileNotFocused__OnLostFocus_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileNotFocused() [instance] :2090
void WhileNotFocused::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", ".ctor()");
    ctor_4();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance] :2107
void WhileNotFocused::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", "OnGotFocus(object,Uno.EventArgs)");
    SetActive(false);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance] :2112
void WhileNotFocused::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", "OnLostFocus(object,Uno.EventArgs)");
    SetActive(true);
}

// public generated WhileNotFocused New() [static] :2090
WhileNotFocused* WhileNotFocused::New2()
{
    WhileNotFocused* obj1 = (WhileNotFocused*)uNew(WhileNotFocused_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.29.22/$.uno
// -----------------------------------------------------------------

// public sealed class WhilePageLoading :609
// {
static void WhilePageLoading_build(uType* type)
{
    ::STRINGS[8] = uString::Const("WebView");
    ::STRINGS[9] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.WebView/0.29.22/$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[19] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[68] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[21] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[1] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::Fuse::Triggers::WhilePageLoading, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhilePageLoading__New2_fn, 0, true, WhilePageLoading_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* WhilePageLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhilePageLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePageLoading", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhilePageLoading_build;
    type->fp_ctor_ = (void*)WhilePageLoading__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePageLoading__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhilePageLoading__OnUnrooted_fn;
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

// public generated WhilePageLoading() :609
void WhilePageLoading__ctor_5_fn(WhilePageLoading* __this)
{
    __this->ctor_5();
}

// public generated WhilePageLoading New() :609
void WhilePageLoading__New2_fn(WhilePageLoading** __retval)
{
    *__retval = WhilePageLoading::New2();
}

// private void OnProgressChanged(object s, object a) :638
void WhilePageLoading__OnProgressChanged1_fn(WhilePageLoading* __this, uObject* s, uObject* a)
{
    __this->OnProgressChanged1(s, a);
}

// protected override sealed void OnRooted() :613
void WhilePageLoading__OnRooted_fn(WhilePageLoading* __this)
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[19/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs< ::g::Fuse::Controls::WebView*>(__this->Parent(), ::TYPES[68/*Fuse.Controls.WebView*/]);
        uPtr(__this->_webView)->add_ProgressChanged(uDelegate::New(::TYPES[21/*Uno.UX.ValueChangedHandler<double>*/], (void*)WhilePageLoading__OnProgressChanged1_fn, __this));
        __this->SetActive(uPtr(__this->_webView)->Progress() != 1.0);
    }
    else
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[8/*"WebView"*/], __this->Parent(), __this, ::STRINGS[9/*"/usr/local/...*/], 624, ::STRINGS[5/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted() :628
void WhilePageLoading__OnUnrooted_fn(WhilePageLoading* __this)
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", "OnUnrooted()");

    if (__this->_webView != NULL)
    {
        uPtr(__this->_webView)->remove_ProgressChanged(uDelegate::New(::TYPES[21/*Uno.UX.ValueChangedHandler<double>*/], (void*)WhilePageLoading__OnProgressChanged1_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhilePageLoading() [instance] :609
void WhilePageLoading::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", ".ctor()");
    ctor_4();
}

// private void OnProgressChanged(object s, object a) [instance] :638
void WhilePageLoading::OnProgressChanged1(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", "OnProgressChanged(object,object)");
    SetActive(uPtr(_webView)->Progress() < 1.0);
}

// public generated WhilePageLoading New() [static] :609
WhilePageLoading* WhilePageLoading::New2()
{
    WhilePageLoading* obj1 = (WhilePageLoading*)uNew(WhilePageLoading_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhilePaused :2255
// {
// static WhilePaused() :2255
static void WhilePaused__cctor_1_fn(uType* __type)
{
    WhilePaused::_whilePausedProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhilePaused_build(uType* type)
{
    ::TYPES[61] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[52] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[55] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePaused::_whilePausedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhilePaused__New2_fn, 0, true, WhilePaused_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhilePaused__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhilePaused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePaused", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhilePaused_build;
    type->fp_ctor_ = (void*)WhilePaused__New2_fn;
    type->fp_cctor_ = WhilePaused__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePaused__OnRooted_fn;
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

// public generated WhilePaused() :2255
void WhilePaused__ctor_5_fn(WhilePaused* __this)
{
    __this->ctor_5();
}

// private static bool IsPaused(Fuse.Visual n) :2259
void WhilePaused__IsPaused_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhilePaused::IsPaused(n);
}

// public generated WhilePaused New() :2255
void WhilePaused__New2_fn(WhilePaused** __retval)
{
    *__retval = WhilePaused::New2();
}

// protected override sealed void OnRooted() :2280
void WhilePaused__OnRooted_fn(WhilePaused* __this)
{
    uStackFrame __("Fuse.Triggers.WhilePaused", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhilePaused::IsPaused(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool paused) :2266
void WhilePaused__SetState_fn(::g::Fuse::Visual* n, bool* paused)
{
    WhilePaused::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePaused::_whilePausedProp_;

// public generated WhilePaused() [instance] :2255
void WhilePaused::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhilePaused", ".ctor()");
    ctor_4();
}

// private static bool IsPaused(Fuse.Visual n) [static] :2259
bool WhilePaused::IsPaused(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Triggers.WhilePaused", "IsPaused(Fuse.Visual)");
    WhilePaused_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePaused::_whilePausedProp());

    if (!uIs(v, ::TYPES[61/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[61/*bool*/], v);
}

// public generated WhilePaused New() [static] :2255
WhilePaused* WhilePaused::New2()
{
    WhilePaused* obj1 = (WhilePaused*)uNew(WhilePaused_typeof());
    obj1->ctor_5();
    return obj1;
}

// public static void SetState(Fuse.Visual n, bool paused) [static] :2266
void WhilePaused::SetState(::g::Fuse::Visual* n, bool paused)
{
    uStackFrame __("Fuse.Triggers.WhilePaused", "SetState(Fuse.Visual,bool)");
    WhilePaused_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhilePaused::IsPaused(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePaused::_whilePausedProp(), uBox(::TYPES[61/*bool*/], paused));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[52/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhilePaused* wl = uAs<WhilePaused*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[55/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhilePaused_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhilePlaying :2223
// {
// static WhilePlaying() :2223
static void WhilePlaying__cctor_1_fn(uType* __type)
{
    WhilePlaying::_whilePlayingProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhilePlaying_build(uType* type)
{
    ::TYPES[61] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[52] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[55] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePlaying::_whilePlayingProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhilePlaying__New2_fn, 0, true, WhilePlaying_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhilePlaying__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhilePlaying);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePlaying", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhilePlaying_build;
    type->fp_ctor_ = (void*)WhilePlaying__New2_fn;
    type->fp_cctor_ = WhilePlaying__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePlaying__OnRooted_fn;
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

// public generated WhilePlaying() :2223
void WhilePlaying__ctor_5_fn(WhilePlaying* __this)
{
    __this->ctor_5();
}

// private static bool IsPlaying(Fuse.Visual n) :2227
void WhilePlaying__IsPlaying_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhilePlaying::IsPlaying(n);
}

// public generated WhilePlaying New() :2223
void WhilePlaying__New2_fn(WhilePlaying** __retval)
{
    *__retval = WhilePlaying::New2();
}

// protected override sealed void OnRooted() :2248
void WhilePlaying__OnRooted_fn(WhilePlaying* __this)
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhilePlaying::IsPlaying(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool playing) :2234
void WhilePlaying__SetState_fn(::g::Fuse::Visual* n, bool* playing)
{
    WhilePlaying::SetState(n, *playing);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePlaying::_whilePlayingProp_;

// public generated WhilePlaying() [instance] :2223
void WhilePlaying::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", ".ctor()");
    ctor_4();
}

// private static bool IsPlaying(Fuse.Visual n) [static] :2227
bool WhilePlaying::IsPlaying(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", "IsPlaying(Fuse.Visual)");
    WhilePlaying_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePlaying::_whilePlayingProp());

    if (!uIs(v, ::TYPES[61/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[61/*bool*/], v);
}

// public generated WhilePlaying New() [static] :2223
WhilePlaying* WhilePlaying::New2()
{
    WhilePlaying* obj1 = (WhilePlaying*)uNew(WhilePlaying_typeof());
    obj1->ctor_5();
    return obj1;
}

// public static void SetState(Fuse.Visual n, bool playing) [static] :2234
void WhilePlaying::SetState(::g::Fuse::Visual* n, bool playing)
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", "SetState(Fuse.Visual,bool)");
    WhilePlaying_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhilePlaying::IsPlaying(n);

    if (v != playing)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePlaying::_whilePlayingProp(), uBox(::TYPES[61/*bool*/], playing));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[52/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhilePlaying* wl = uAs<WhilePlaying*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[55/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhilePlaying_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(playing);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.29.22/Triggers/$.uno
// -----------------------------------------------------------------------------

// public sealed class WhileScrollable :300
// {
static void WhileScrollable_build(uType* type)
{
    ::TYPES[30] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[69] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileScrollable_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileScrollable_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileScrollable_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileScrollable_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileScrollable_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(WhileScrollable_type, interface5));
    type->SetFields(28,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Triggers::WhileScrollable, _scrollable), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Triggers::WhileScrollable, _source), 0,
        ::g::Fuse::Controls::ScrollDirections_typeof(), offsetof(::g::Fuse::Triggers::WhileScrollable, _ScrollDirections), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)WhileScrollable__New2_fn, 0, true, WhileScrollable_typeof(), 0),
        new uFunction("get_ScrollDirections", NULL, (void*)WhileScrollable__get_ScrollDirections_fn, 0, false, ::g::Fuse::Controls::ScrollDirections_typeof(), 0),
        new uFunction("set_ScrollDirections", NULL, (void*)WhileScrollable__set_ScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction("get_ScrollView", NULL, (void*)WhileScrollable__get_ScrollView_fn, 0, false, ::g::Fuse::Controls::ScrollView_typeof(), 0),
        new uFunction("set_ScrollView", NULL, (void*)WhileScrollable__set_ScrollView_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollView_typeof()));
}

WhileScrollable_type* WhileScrollable_typeof()
{
    static uSStrong<WhileScrollable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileScrollable);
    options.TypeSize = sizeof(WhileScrollable_type);
    type = (WhileScrollable_type*)uClassType::New("Fuse.Triggers.WhileScrollable", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileScrollable_build;
    type->fp_ctor_ = (void*)WhileScrollable__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileScrollable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileScrollable__OnUnrooted_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))WhileScrollable__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public generated WhileScrollable() :300
void WhileScrollable__ctor_5_fn(WhileScrollable* __this)
{
    __this->ctor_5();
}

// private bool get_IsOn() :345
void WhileScrollable__get_IsOn_fn(WhileScrollable* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated WhileScrollable New() :300
void WhileScrollable__New2_fn(WhileScrollable** __retval)
{
    *__retval = WhileScrollable::New2();
}

// protected override sealed void OnRooted() :312
void WhileScrollable__OnRooted_fn(WhileScrollable* __this)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_scrollable = __this->ScrollView();

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->AddPropertyListener((uObject*)__this);
        __this->SetActive(__this->IsOn());
    }
}

// protected override sealed void OnUnrooted() :323
void WhileScrollable__OnUnrooted_fn(WhileScrollable* __this)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "OnUnrooted()");

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->RemovePropertyListener((uObject*)__this);
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Controls.ScrollDirections get_ScrollDirections() :302
void WhileScrollable__get_ScrollDirections_fn(WhileScrollable* __this, int* __retval)
{
    *__retval = __this->ScrollDirections();
}

// public generated void set_ScrollDirections(Fuse.Controls.ScrollDirections value) :302
void WhileScrollable__set_ScrollDirections_fn(WhileScrollable* __this, int* value)
{
    __this->ScrollDirections(*value);
}

// public Fuse.Controls.ScrollView get_ScrollView() :308
void WhileScrollable__get_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->ScrollView();
}

// public void set_ScrollView(Fuse.Controls.ScrollView value) :309
void WhileScrollable__set_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->ScrollView(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :333
void WhileScrollable__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileScrollable* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");

    if (obj == __this->_scrollable)
        __this->SetActive(__this->IsOn());
}

// public generated WhileScrollable() [instance] :300
void WhileScrollable::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", ".ctor()");
    ctor_4();
}

// private bool get_IsOn() [instance] :345
bool WhileScrollable::IsOn()
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "get_IsOn()");
    ::g::Uno::Float2 p = uPtr(_scrollable)->ScrollPosition();
    ::g::Uno::Float2 mx = uPtr(_scrollable)->MaxScroll();
    ::g::Uno::Float2 mn = uPtr(_scrollable)->MinScroll();
    bool isOn = (((((ScrollDirections() & 1) == 1) && ((p.X - 1e-05f) > mn.X)) || (((ScrollDirections() & 2) == 2) && ((p.X + 1e-05f) < mx.X))) || (((ScrollDirections() & 4) == 4) && ((p.Y - 1e-05f) > mn.Y))) || (((ScrollDirections() & 8) == 8) && ((p.Y + 1e-05f) < mx.Y));
    return isOn;
}

// public generated Fuse.Controls.ScrollDirections get_ScrollDirections() [instance] :302
int WhileScrollable::ScrollDirections()
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "get_ScrollDirections()");
    return _ScrollDirections;
}

// public generated void set_ScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :302
void WhileScrollable::ScrollDirections(int value)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "set_ScrollDirections(Fuse.Controls.ScrollDirections)");
    _ScrollDirections = value;
}

// public Fuse.Controls.ScrollView get_ScrollView() [instance] :308
::g::Fuse::Controls::ScrollView* WhileScrollable::ScrollView()
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "get_ScrollView()");
    ::g::Fuse::Controls::ScrollView* ind1 = _source;
    return (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Controls::ScrollView*>(Parent(), ::TYPES[69/*Fuse.Controls.ScrollView*/]);
}

// public void set_ScrollView(Fuse.Controls.ScrollView value) [instance] :309
void WhileScrollable::ScrollView(::g::Fuse::Controls::ScrollView* value)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "set_ScrollView(Fuse.Controls.ScrollView)");
    _source = value;
}

// public generated WhileScrollable New() [static] :300
WhileScrollable* WhileScrollable::New2()
{
    WhileScrollable* obj2 = (WhileScrollable*)uNew(WhileScrollable_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract class WhileTrigger :2333
// {
static void WhileTrigger_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileTrigger, _Invert), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Invert", NULL, (void*)WhileTrigger__get_Invert_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Invert", NULL, (void*)WhileTrigger__set_Invert_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileTrigger", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = WhileTrigger_build;
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

// protected generated WhileTrigger() :2333
void WhileTrigger__ctor_4_fn(WhileTrigger* __this)
{
    __this->ctor_4();
}

// public generated bool get_Invert() :2335
void WhileTrigger__get_Invert_fn(WhileTrigger* __this, bool* __retval)
{
    *__retval = __this->Invert();
}

// public generated void set_Invert(bool value) :2335
void WhileTrigger__set_Invert_fn(WhileTrigger* __this, bool* value)
{
    __this->Invert(*value);
}

// protected void SetActive(bool on) :2337
void WhileTrigger__SetActive_fn(WhileTrigger* __this, bool* on)
{
    __this->SetActive(*on);
}

// protected generated WhileTrigger() [instance] :2333
void WhileTrigger::ctor_4()
{
    uStackFrame __("Fuse.Triggers.WhileTrigger", ".ctor()");
    ctor_3();
}

// public generated bool get_Invert() [instance] :2335
bool WhileTrigger::Invert()
{
    uStackFrame __("Fuse.Triggers.WhileTrigger", "get_Invert()");
    return _Invert;
}

// public generated void set_Invert(bool value) [instance] :2335
void WhileTrigger::Invert(bool value)
{
    uStackFrame __("Fuse.Triggers.WhileTrigger", "set_Invert(bool)");
    _Invert = value;
}

// protected void SetActive(bool on) [instance] :2337
void WhileTrigger::SetActive(bool on)
{
    uStackFrame __("Fuse.Triggers.WhileTrigger", "SetActive(bool)");

    if (on != Invert())
        Activate(NULL);
    else
        Deactivate();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public class WhileTrue :1907
// {
static void WhileTrue_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface4),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface5),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface6));
    type->SetFields(33);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileTrue__New2_fn, 0, true, WhileTrue_typeof(), 0));
}

::g::Fuse::Triggers::WhileValue_type* WhileTrue_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 33;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WhileTrue);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileTrue", options);
    type->SetBase(::g::Fuse::Triggers::WhileBool_typeof());
    type->fp_build_ = WhileTrue_build;
    type->fp_ctor_ = (void*)WhileTrue__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileTrue__get_IsOn_fn;
    type->interface5.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface5.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface5.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface5.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    type->interface6.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
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

// public generated WhileTrue() :1907
void WhileTrue__ctor_7_fn(WhileTrue* __this)
{
    __this->ctor_7();
}

// protected override sealed bool get_IsOn() :1909
void WhileTrue__get_IsOn_fn(WhileTrue* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileTrue", "get_IsOn()");
    return *__retval = __this->Value1(), void();
}

// public generated WhileTrue New() :1907
void WhileTrue__New2_fn(WhileTrue** __retval)
{
    *__retval = WhileTrue::New2();
}

// public generated WhileTrue() [instance] :1907
void WhileTrue::ctor_7()
{
    uStackFrame __("Fuse.Triggers.WhileTrue", ".ctor()");
    ctor_6();
}

// public generated WhileTrue New() [static] :1907
WhileTrue* WhileTrue::New2()
{
    WhileTrue* obj1 = (WhileTrue*)uNew(WhileTrue_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract class WhileValue<T> :2360
// {
static void WhileValue_build(uType* type)
{
    ::STRINGS[43] = uString::Const("`Pulse` on a `WhileValue` will be removed, create a `Timeline` instead.");
    ::STRINGS[11] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno");
    ::STRINGS[44] = uString::Const("Pulse");
    ::TYPES[70] = ::g::Fuse::Triggers::IValue_typeof();
    ::TYPES[26] = ::g::Fuse::Node_typeof();
    ::TYPES[71] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = uObject_typeof();
    type->SetPrecalc(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)),
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileValue_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileValue_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileValue_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileValue_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileValue_type, interface4),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(WhileValue_type, interface5),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(WhileValue_type, interface6));
    type->SetFields(28,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileValue, _hasValue), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, _obj), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, _source), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, ValueChanged1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("Pulse", NULL, (void*)WhileValue__Pulse1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WhileValue__get_Source_fn, 0, false, ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), 0),
        new uFunction("set_Source", NULL, (void*)WhileValue__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0))),
        new uFunction("get_Value", NULL, (void*)WhileValue__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)WhileValue__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("add_ValueChanged", NULL, (void*)WhileValue__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))),
        new uFunction("remove_ValueChanged", NULL, (void*)WhileValue__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))));
}

WhileValue_type* WhileValue_typeof()
{
    static uSStrong<WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 33;
    options.GenericCount = 1;
    options.InterfaceCount = 7;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhileValue);
    options.TypeSize = sizeof(WhileValue_type);
    type = (WhileValue_type*)uClassType::New("Fuse.Triggers.WhileValue`1", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileValue_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileValue__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileValue__OnUnrooted_fn;
    type->interface5.fp_get_Value = (void(*)(uObject*, uTRef))WhileValue__get_Value_fn;
    type->interface5.fp_set_Value = (void(*)(uObject*, void*))WhileValue__set_Value_fn;
    type->interface5.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))WhileValue__add_ValueChanged_fn;
    type->interface5.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))WhileValue__remove_ValueChanged_fn;
    type->interface6.fp_Pulse = (void(*)(uObject*))WhileValue__Pulse1_fn;
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

// protected generated WhileValue() :2360
void WhileValue__ctor_5_fn(WhileValue* __this)
{
    __this->ctor_5();
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) :2409
void WhileValue__FindValueNode_fn(uType* __type, ::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = WhileValue::FindValueNode(__type, n);
}

// protected override sealed void OnRooted() :2417
void WhileValue__OnRooted_fn(WhileValue* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "OnRooted()");
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_obj = (ind1 = __this->Source(), ((ind1 != NULL) ? ind1 : (uObject*)WhileValue::FindValueNode(WhileValue_typeof()->MakeType(__types[1]), __this->Parent())));

    if (__this->_obj != NULL)
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[2], (void*)WhileValue__OnValueChanged_fn, __this));

    __this->SetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted() :2425
void WhileValue__OnUnrooted_fn(WhileValue* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "OnUnrooted()");

    if (__this->_obj != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[2], (void*)WhileValue__OnValueChanged_fn, __this));
        __this->_obj = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) :2435
void WhileValue__OnValueChanged_fn(WhileValue* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    __this->OnValueChanged(s, a);
}

// public new void Pulse() :2393
void WhileValue__Pulse1_fn(WhileValue* __this)
{
    __this->Pulse1();
}

// public Fuse.Triggers.IValue<T> get_Source() :2387
void WhileValue__get_Source_fn(WhileValue* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IValue<T> value) :2388
void WhileValue__set_Source_fn(WhileValue* __this, uObject* value)
{
    __this->Source(value);
}

// protected void UpdateState() :2442
void WhileValue__UpdateState_fn(WhileValue* __this)
{
    __this->UpdateState();
}

// public T get_Value() :2366
void WhileValue__get_Value_fn(WhileValue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "get_Value()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_hasValue)
        return __retval.Store(__this->_value()), void();

    if (__this->_obj != NULL)
        return __retval.Store((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_obj), __types[1]), &ret2), ret2)), void();

    return __retval.Store(__this->_value()), void();
}

// public void set_Value(T value) :2372
void WhileValue__set_Value_fn(WhileValue* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "set_Value(T)");

    if (!__this->_hasValue || !::g::Uno::Object::Equals1(uBoxPtr(__types[0], __this->_value()), uBoxPtr(__types[0], value)))
    {
        __this->_hasValue = true;
        __this->_value() = value;
        __this->SetActive(__this->IsOn());
    }
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :2391
void WhileValue__add_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :2391
void WhileValue__remove_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// protected generated WhileValue() [instance] :2360
void WhileValue::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", ".ctor()");
    ctor_4();
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) [instance] :2435
void WhileValue::OnValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "OnValueChanged(object,Uno.UX.ValueChangedArgs<T>)");
    SetActive(IsOn());

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, a);
}

// public new void Pulse() [instance] :2393
void WhileValue::Pulse1()
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "Pulse()");

    if (!::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[43/*"`Pulse` on ...*/], this, ::STRINGS[11/*"/usr/local/...*/], 2397, ::STRINGS[44/*"Pulse"*/]);
        ::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_ = true;
    }

    if (IsOn() != Invert())
        InversePulse();
    else
        Pulse();
}

// public Fuse.Triggers.IValue<T> get_Source() [instance] :2387
uObject* WhileValue::Source()
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<T> value) [instance] :2388
void WhileValue::Source(uObject* value)
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "set_Source(Fuse.Triggers.IValue<T>)");
    _source = value;
}

// protected void UpdateState() [instance] :2442
void WhileValue::UpdateState()
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "UpdateState()");

    if (!IsRootingCompleted())
        return;

    SetActive(IsOn());
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :2391
void WhileValue::add_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "add_ValueChanged(Uno.UX.ValueChangedHandler<T>)");
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), __types[0]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :2391
void WhileValue::remove_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "remove_ValueChanged(Uno.UX.ValueChangedHandler<T>)");
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), __types[0]);
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) [static] :2409
uObject* WhileValue::FindValueNode(uType* __type, ::g::Fuse::Node* n)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "FindValueNode(Fuse.Node)");

    if (uIs(n, __types[0]))
        return (uObject*)n;

    if (uPtr(n)->ContextParent() != NULL)
        return WhileValue::FindValueNode(__type->MakeType(__types[1]), uPtr(n)->ContextParent());

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// internal static class WhileValueStatic :2355
// {
static void WhileValueStatic_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_, uFieldFlagsStatic);
}

uClassType* WhileValueStatic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.WhileValueStatic", options);
    type->fp_build_ = WhileValueStatic_build;
    return type;
}

bool WhileValueStatic::_deprecatedNote_;
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileVisible :2464
// {
static void WhileVisible_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileVisible__New2_fn, 0, true, WhileVisible_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* WhileVisible_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileVisible);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileVisible", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileVisible_build;
    type->fp_ctor_ = (void*)WhileVisible__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileVisible__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileVisible__OnUnrooted_fn;
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

// public generated WhileVisible() :2464
void WhileVisible__ctor_5_fn(WhileVisible* __this)
{
    __this->ctor_5();
}

// public generated WhileVisible New() :2464
void WhileVisible__New2_fn(WhileVisible** __retval)
{
    *__retval = WhileVisible::New2();
}

// private void OnIsVisibleChanged(object sender, Uno.EventArgs args) :2480
void WhileVisible__OnIsVisibleChanged_fn(WhileVisible* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnIsVisibleChanged(sender, args);
}

// protected override sealed void OnRooted() :2466
void WhileVisible__OnRooted_fn(WhileVisible* __this)
{
    uStackFrame __("Fuse.Triggers.WhileVisible", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    uPtr(__this->Parent())->add_IsVisibleChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)WhileVisible__OnIsVisibleChanged_fn, __this));
    __this->SetActive(uPtr(__this->Parent())->IsVisible());
}

// protected override sealed void OnUnrooted() :2474
void WhileVisible__OnUnrooted_fn(WhileVisible* __this)
{
    uStackFrame __("Fuse.Triggers.WhileVisible", "OnUnrooted()");
    uPtr(__this->Parent())->remove_IsVisibleChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)WhileVisible__OnIsVisibleChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileVisible() [instance] :2464
void WhileVisible::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WhileVisible", ".ctor()");
    ctor_4();
}

// private void OnIsVisibleChanged(object sender, Uno.EventArgs args) [instance] :2480
void WhileVisible::OnIsVisibleChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileVisible", "OnIsVisibleChanged(object,Uno.EventArgs)");
    SetActive(uPtr(Parent())->IsVisible());
}

// public generated WhileVisible New() [static] :2464
WhileVisible* WhileVisible::New2()
{
    WhileVisible* obj1 = (WhileVisible*)uNew(WhileVisible_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract class WhileWindowAspect :2572
// {
static void WhileWindowAspect_build(uType* type)
{
    ::TYPES[66] = ::g::Fuse::IViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface4));
    type->SetFields(29);
}

::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowAspect_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileWindowAspect);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowAspect", options);
    type->SetBase(::g::Fuse::Triggers::WindowSizeTrigger_typeof());
    type->fp_build_ = WhileWindowAspect_build;
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

// protected generated WhileWindowAspect() :2572
void WhileWindowAspect__ctor_6_fn(WhileWindowAspect* __this)
{
    __this->ctor_6();
}

// protected float get_Aspect() :2575
void WhileWindowAspect__get_Aspect_fn(WhileWindowAspect* __this, float* __retval)
{
    *__retval = __this->Aspect();
}

// protected generated WhileWindowAspect() [instance] :2572
void WhileWindowAspect::ctor_6()
{
    uStackFrame __("Fuse.Triggers.WhileWindowAspect", ".ctor()");
    ctor_5();
}

// protected float get_Aspect() [instance] :2575
float WhileWindowAspect::Aspect()
{
    uStackFrame __("Fuse.Triggers.WhileWindowAspect", "get_Aspect()");

    if (Viewport() == NULL)
        return 0.5f;

    ::g::Uno::Float2 sz = ::g::Fuse::IViewport::Size(uInterface(uPtr(Viewport()), ::TYPES[66/*Fuse.IViewport*/]));
    return sz.X / sz.Y;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileWindowLandscape :2584
// {
static void WhileWindowLandscape_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface4));
    type->SetFields(29);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileWindowLandscape__New2_fn, 0, true, WhileWindowLandscape_typeof(), 0));
}

::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowLandscape_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileWindowLandscape);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowLandscape", options);
    type->SetBase(::g::Fuse::Triggers::WhileWindowAspect_typeof());
    type->fp_build_ = WhileWindowLandscape_build;
    type->fp_ctor_ = (void*)WhileWindowLandscape__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowLandscape__get_IsActive_fn;
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

// public generated WhileWindowLandscape() :2584
void WhileWindowLandscape__ctor_7_fn(WhileWindowLandscape* __this)
{
    __this->ctor_7();
}

// protected override sealed bool get_IsActive() :2586
void WhileWindowLandscape__get_IsActive_fn(WhileWindowLandscape* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileWindowLandscape", "get_IsActive()");
    return *__retval = __this->Aspect() > 1.0f, void();
}

// public generated WhileWindowLandscape New() :2584
void WhileWindowLandscape__New2_fn(WhileWindowLandscape** __retval)
{
    *__retval = WhileWindowLandscape::New2();
}

// public generated WhileWindowLandscape() [instance] :2584
void WhileWindowLandscape::ctor_7()
{
    uStackFrame __("Fuse.Triggers.WhileWindowLandscape", ".ctor()");
    ctor_6();
}

// public generated WhileWindowLandscape New() [static] :2584
WhileWindowLandscape* WhileWindowLandscape::New2()
{
    WhileWindowLandscape* obj1 = (WhileWindowLandscape*)uNew(WhileWindowLandscape_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileWindowPortrait :2589
// {
static void WhileWindowPortrait_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface4));
    type->SetFields(29);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileWindowPortrait__New2_fn, 0, true, WhileWindowPortrait_typeof(), 0));
}

::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowPortrait_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileWindowPortrait);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowPortrait", options);
    type->SetBase(::g::Fuse::Triggers::WhileWindowAspect_typeof());
    type->fp_build_ = WhileWindowPortrait_build;
    type->fp_ctor_ = (void*)WhileWindowPortrait__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowPortrait__get_IsActive_fn;
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

// public generated WhileWindowPortrait() :2589
void WhileWindowPortrait__ctor_7_fn(WhileWindowPortrait* __this)
{
    __this->ctor_7();
}

// protected override sealed bool get_IsActive() :2591
void WhileWindowPortrait__get_IsActive_fn(WhileWindowPortrait* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileWindowPortrait", "get_IsActive()");
    return *__retval = __this->Aspect() <= 1.0f, void();
}

// public generated WhileWindowPortrait New() :2589
void WhileWindowPortrait__New2_fn(WhileWindowPortrait** __retval)
{
    *__retval = WhileWindowPortrait::New2();
}

// public generated WhileWindowPortrait() [instance] :2589
void WhileWindowPortrait::ctor_7()
{
    uStackFrame __("Fuse.Triggers.WhileWindowPortrait", ".ctor()");
    ctor_6();
}

// public generated WhileWindowPortrait New() [static] :2589
WhileWindowPortrait* WhileWindowPortrait::New2()
{
    WhileWindowPortrait* obj1 = (WhileWindowPortrait*)uNew(WhileWindowPortrait_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public sealed class WhileWindowSize :2535
// {
static void WhileWindowSize_build(uType* type)
{
    ::TYPES[66] = ::g::Fuse::IViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface4));
    type->SetFields(29,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileWindowSize, _EqualTo), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileWindowSize, _GreaterThan), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileWindowSize, _LessThan), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_EqualTo", NULL, (void*)WhileWindowSize__get_EqualTo_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileWindowSize__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileWindowSize__get_GreaterThan_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileWindowSize__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileWindowSize__get_LessThan_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileWindowSize__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileWindowSize__New2_fn, 0, true, WhileWindowSize_typeof(), 0));
}

::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowSize_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileWindowSize);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowSize", options);
    type->SetBase(::g::Fuse::Triggers::WindowSizeTrigger_typeof());
    type->fp_build_ = WhileWindowSize_build;
    type->fp_ctor_ = (void*)WhileWindowSize__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowSize__get_IsActive_fn;
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

// public generated WhileWindowSize() :2535
void WhileWindowSize__ctor_6_fn(WhileWindowSize* __this)
{
    __this->ctor_6();
}

// public generated float2 get_EqualTo() :2540
void WhileWindowSize__get_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EqualTo();
}

// public generated void set_EqualTo(float2 value) :2540
void WhileWindowSize__set_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->EqualTo(*value);
}

// public generated float2 get_GreaterThan() :2538
void WhileWindowSize__get_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GreaterThan();
}

// public generated void set_GreaterThan(float2 value) :2538
void WhileWindowSize__set_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->GreaterThan(*value);
}

// protected override sealed bool get_IsActive() :2544
void WhileWindowSize__get_IsActive_fn(WhileWindowSize* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "get_IsActive()");

    if (__this->Viewport() == NULL)
        return *__retval = false, void();

    ::g::Uno::Float2 sz = ::g::Fuse::IViewport::Size(uInterface(uPtr(__this->Viewport()), ::TYPES[66/*Fuse.IViewport*/]));

    if ((__this->GreaterThan().X > 0.0f) && (__this->GreaterThan().Y > 0.0f))
    {
        if ((sz.X < __this->GreaterThan().X) || (sz.Y < __this->GreaterThan().Y))
            return *__retval = false, void();
    }

    if ((__this->LessThan().X > 0.0f) && (__this->LessThan().Y > 0.0f))
    {
        if ((sz.X > __this->LessThan().X) || (sz.Y > __this->LessThan().Y))
            return *__retval = false, void();
    }

    if ((__this->EqualTo().X > 0.0f) && (__this->EqualTo().Y > 0.0f))
    {
        if ((sz.X != __this->EqualTo().X) || (sz.Y != __this->EqualTo().Y))
            return *__retval = false, void();
    }

    return *__retval = true, void();
}

// public generated float2 get_LessThan() :2539
void WhileWindowSize__get_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LessThan();
}

// public generated void set_LessThan(float2 value) :2539
void WhileWindowSize__set_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->LessThan(*value);
}

// public generated WhileWindowSize New() :2535
void WhileWindowSize__New2_fn(WhileWindowSize** __retval)
{
    *__retval = WhileWindowSize::New2();
}

// public generated WhileWindowSize() [instance] :2535
void WhileWindowSize::ctor_6()
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", ".ctor()");
    ctor_5();
}

// public generated float2 get_EqualTo() [instance] :2540
::g::Uno::Float2 WhileWindowSize::EqualTo()
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "get_EqualTo()");
    return _EqualTo;
}

// public generated void set_EqualTo(float2 value) [instance] :2540
void WhileWindowSize::EqualTo(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "set_EqualTo(float2)");
    _EqualTo = value;
}

// public generated float2 get_GreaterThan() [instance] :2538
::g::Uno::Float2 WhileWindowSize::GreaterThan()
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "get_GreaterThan()");
    return _GreaterThan;
}

// public generated void set_GreaterThan(float2 value) [instance] :2538
void WhileWindowSize::GreaterThan(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "set_GreaterThan(float2)");
    _GreaterThan = value;
}

// public generated float2 get_LessThan() [instance] :2539
::g::Uno::Float2 WhileWindowSize::LessThan()
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "get_LessThan()");
    return _LessThan;
}

// public generated void set_LessThan(float2 value) [instance] :2539
void WhileWindowSize::LessThan(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "set_LessThan(float2)");
    _LessThan = value;
}

// public generated WhileWindowSize New() [static] :2535
WhileWindowSize* WhileWindowSize::New2()
{
    WhileWindowSize* obj1 = (WhileWindowSize*)uNew(WhileWindowSize_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.29.22/$.uno
// ---------------------------------------------------------

// public abstract class WindowSizeTrigger :2494
// {
static void WindowSizeTrigger_build(uType* type)
{
    ::TYPES[66] = ::g::Fuse::IViewport_typeof();
    ::TYPES[72] = ::g::Fuse::Visual_typeof()->MakeMethod(1, ::g::Fuse::RootViewport_typeof());
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WindowSizeTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WindowSizeTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WindowSizeTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WindowSizeTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WindowSizeTrigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger, _Viewport), 0);
}

WindowSizeTrigger_type* WindowSizeTrigger_typeof()
{
    static uSStrong<WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WindowSizeTrigger);
    options.TypeSize = sizeof(WindowSizeTrigger_type);
    type = (WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WindowSizeTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WindowSizeTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WindowSizeTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WindowSizeTrigger__OnUnrooted_fn;
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

// protected generated WindowSizeTrigger() :2494
void WindowSizeTrigger__ctor_5_fn(WindowSizeTrigger* __this)
{
    __this->ctor_5();
}

// private void OnResize(object sender, Uno.EventArgs args) :2526
void WindowSizeTrigger__OnResize_fn(WindowSizeTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnResize(sender, args);
}

// protected override sealed void OnRooted() :2499
void WindowSizeTrigger__OnRooted_fn(WindowSizeTrigger* __this)
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "OnRooted()");
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Viewport((ind1 = uAs<uObject*>((::g::Fuse::RootViewport*)uPtr(__this->Parent())->FindByType(::TYPES[72/*Fuse.Visual.FindByType<Fuse.RootViewport>*/]), ::TYPES[66/*Fuse.IViewport*/]), (ind1 != NULL) ? ind1 : (uObject*)uPtr(__this->Parent())->Viewport()));
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->add_FrameChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)WindowSizeTrigger__OnResize_fn, __this));
    __this->SetActive(__this->IsActive());
}

// protected override sealed void OnUnrooted() :2514
void WindowSizeTrigger__OnUnrooted_fn(WindowSizeTrigger* __this)
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "OnUnrooted()");
    __this->Viewport(NULL);
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->remove_FrameChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)WindowSizeTrigger__OnResize_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated Fuse.IViewport get_Viewport() :2497
void WindowSizeTrigger__get_Viewport_fn(WindowSizeTrigger* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// private generated void set_Viewport(Fuse.IViewport value) :2497
void WindowSizeTrigger__set_Viewport_fn(WindowSizeTrigger* __this, uObject* value)
{
    __this->Viewport(value);
}

// protected generated WindowSizeTrigger() [instance] :2494
void WindowSizeTrigger::ctor_5()
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", ".ctor()");
    ctor_4();
}

// private void OnResize(object sender, Uno.EventArgs args) [instance] :2526
void WindowSizeTrigger::OnResize(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "OnResize(object,Uno.EventArgs)");

    if (Viewport() != NULL)
        SetActive(IsActive());
}

// protected generated Fuse.IViewport get_Viewport() [instance] :2497
uObject* WindowSizeTrigger::Viewport()
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "get_Viewport()");
    return _Viewport;
}

// private generated void set_Viewport(Fuse.IViewport value) [instance] :2497
void WindowSizeTrigger::Viewport(uObject* value)
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "set_Viewport(Fuse.IViewport)");
    _Viewport = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.29.22/Triggers/$.uno
// ------------------------------------------------------------------

// private sealed class LayoutTransition.WorldPositionChangeMode :32
// {
static void LayoutTransition__WorldPositionChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface1));
}

LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__WorldPositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__WorldPositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__WorldPositionChangeMode_type);
    type = (LayoutTransition__WorldPositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", options);
    type->fp_build_ = LayoutTransition__WorldPositionChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__WorldPositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__WorldPositionChangeMode__get_Flags_fn;
    return type;
}

// public generated WorldPositionChangeMode() :32
void LayoutTransition__WorldPositionChangeMode__ctor__fn(LayoutTransition__WorldPositionChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :38
void LayoutTransition__WorldPositionChangeMode__get_Flags_fn(LayoutTransition__WorldPositionChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :34
void LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn(LayoutTransition__WorldPositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated WorldPositionChangeMode New() :32
void LayoutTransition__WorldPositionChangeMode__New1_fn(LayoutTransition__WorldPositionChangeMode** __retval)
{
    *__retval = LayoutTransition__WorldPositionChangeMode::New1();
}

// public generated WorldPositionChangeMode() [instance] :32
void LayoutTransition__WorldPositionChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :38
int LayoutTransition__WorldPositionChangeMode::Flags()
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", "get_Flags()");
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :34
::g::Uno::Float3 LayoutTransition__WorldPositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", "GetAbsVector(Fuse.Translation)");
    return ::g::Uno::Float3__op_Multiply2(::g::Fuse::Triggers::LayoutTransition::GetWorldPositionChange(uPtr(t)->RelativeNode()), uPtr(t)->Vector());
}

// public generated WorldPositionChangeMode New() [static] :32
LayoutTransition__WorldPositionChangeMode* LayoutTransition__WorldPositionChangeMode::New1()
{
    LayoutTransition__WorldPositionChangeMode* obj1 = (LayoutTransition__WorldPositionChangeMode*)uNew(LayoutTransition__WorldPositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Triggers
