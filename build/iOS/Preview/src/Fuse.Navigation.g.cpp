// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.NavigationMotion.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.AllowedNavigationDirections.h>
#include <Fuse.Navigation.BackButtonAction.h>
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
#include <Fuse.Navigation.DeactivatingAnimation.h>
#include <Fuse.Navigation.DirectNavigation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.EndSeekArgs.h>
#include <Fuse.Navigation.EnterExitAnimation.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Navigation.ExplicitNavigation.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.GoForward.h>
#include <Fuse.Navigation.HierarchicalNavigation.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.IPagePropertyListener.h>
#include <Fuse.Navigation.IPageResourceBinding.h>
#include <Fuse.Navigation.IRouterOutlet.h>
#include <Fuse.Navigation.LinearNavigation.h>
#include <Fuse.Navigation.NavigatedArgs.h>
#include <Fuse.Navigation.NavigatedHandler.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.Navigation.h>
#include <Fuse.Navigation.NavigationAnimation.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationDirection.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.NavigationGotoMode.h>
#include <Fuse.Navigation.NavigationHandler.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.NavigationPageCountHandler.h>
#include <Fuse.Navigation.NavigationPageProgressHandler.h>
#include <Fuse.Navigation.NavigationPageProperty.h>
#include <Fuse.Navigation.NavigationPageProxy.h>
#include <Fuse.Navigation.NavigationPageState.h>
#include <Fuse.Navigation.NavigationState.h>
#include <Fuse.Navigation.NavigationStateArgs.h>
#include <Fuse.Navigation.NavigationStateHandler.h>
#include <Fuse.Navigation.NavigationTriggerAction.h>
#include <Fuse.Navigation.NavTriggerUtil.h>
#include <Fuse.Navigation.OutletType.h>
#include <Fuse.Navigation.PageResourceBinding-1.h>
#include <Fuse.Navigation.Route.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.RoutingOperation.h>
#include <Fuse.Navigation.RoutingResult.h>
#include <Fuse.Navigation.SnapTo.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.NavigationStructure.h>
#include <Fuse.Navigation.SwipeDirection.h>
#include <Fuse.Navigation.SwipeNavigate.h>
#include <Fuse.Navigation.UpdateSeekArgs.h>
#include <Fuse.Navigation.VisualNavigation.h>
#include <Fuse.Navigation.VisualNavigation.PageData.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileCanGoBack.h>
#include <Fuse.Navigation.WhileCanGoForward.h>
#include <Fuse.Navigation.WhileHistoryTrigger.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Navigation.WhileInEnterState.h>
#include <Fuse.Navigation.WhileInExitState.h>
#include <Fuse.Navigation.WhileNavigating.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.Json.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[58];
static uType* TYPES[61];

namespace g{
namespace Fuse{
namespace Navigation{

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class ActivatingAnimation :684
// {
static void ActivatingAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(29);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ActivatingAnimation__New2_fn, 0, true, ActivatingAnimation_typeof(), 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ActivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ActivatingAnimation", options);
    type->SetBase(::g::Fuse::Navigation::NavigationAnimation_typeof());
    type->fp_build_ = ActivatingAnimation_build;
    type->fp_ctor_ = (void*)ActivatingAnimation__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))ActivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))ActivatingAnimation__OnNavigationStateChanged_fn;
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

// public generated ActivatingAnimation() :684
void ActivatingAnimation__ctor_5_fn(ActivatingAnimation* __this)
{
    __this->ctor_5();
}

// protected override sealed void ForceUpdate() :686
void ActivatingAnimation__ForceUpdate_fn(ActivatingAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.ActivatingAnimation", "ForceUpdate()");
    __this->Seek(__this->InvertProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress), 0);
}

// private double InvertProgress(double p) :691
void ActivatingAnimation__InvertProgress_fn(ActivatingAnimation* __this, double* p, double* __retval)
{
    *__retval = __this->InvertProgress(*p);
}

// public generated ActivatingAnimation New() :684
void ActivatingAnimation__New2_fn(ActivatingAnimation** __retval)
{
    *__retval = ActivatingAnimation::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :696
void ActivatingAnimation__OnNavigationStateChanged_fn(ActivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.ActivatingAnimation", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.Progress) < ::g::Uno::Math::Abs1(ps.PreviousProgress)) ? 0 : 1;
    __this->GoProgress(__this->InvertProgress((double)(__this->Scale() * ps.Progress)), d, state);
}

// public generated ActivatingAnimation() [instance] :684
void ActivatingAnimation::ctor_5()
{
    uStackFrame __("Fuse.Navigation.ActivatingAnimation", ".ctor()");
    ctor_4();
}

// private double InvertProgress(double p) [instance] :691
double ActivatingAnimation::InvertProgress(double p)
{
    uStackFrame __("Fuse.Navigation.ActivatingAnimation", "InvertProgress(double)");
    return 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(p));
}

// public generated ActivatingAnimation New() [static] :684
ActivatingAnimation* ActivatingAnimation::New2()
{
    ActivatingAnimation* obj1 = (ActivatingAnimation*)uNew(ActivatingAnimation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public enum AllowedNavigationDirections :2425
uEnumType* AllowedNavigationDirections_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.AllowedNavigationDirections", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 1LL,
        "Backward", 2LL,
        "Both", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public enum BackButtonAction :1470
uEnumType* BackButtonAction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.BackButtonAction", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "GoBack", 0LL,
        "None", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public abstract class BackForwardNavigationTriggerAction :2846
// {
static void BackForwardNavigationTriggerAction_build(uType* type)
{
    ::STRINGS[0] = uString::Const("No Navigation context was found");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = uObject_typeof();
    type->SetFields(8,
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction, _NavigationContext), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_NavigationContext", NULL, (void*)BackForwardNavigationTriggerAction__get_NavigationContext_fn, 0, false, ::g::Fuse::Navigation::IBaseNavigation_typeof(), 0),
        new uFunction("set_NavigationContext", NULL, (void*)BackForwardNavigationTriggerAction__set_NavigationContext_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::IBaseNavigation_typeof()));
}

BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof()
{
    static uSStrong<BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(BackForwardNavigationTriggerAction);
    options.TypeSize = sizeof(BackForwardNavigationTriggerAction_type);
    type = (BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.BackForwardNavigationTriggerAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = BackForwardNavigationTriggerAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BackForwardNavigationTriggerAction__Perform_fn;
    return type;
}

// protected generated BackForwardNavigationTriggerAction() :2846
void BackForwardNavigationTriggerAction__ctor_2_fn(BackForwardNavigationTriggerAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() :2849
void BackForwardNavigationTriggerAction__get_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) :2849
void BackForwardNavigationTriggerAction__set_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :2851
void BackForwardNavigationTriggerAction__Perform_fn(BackForwardNavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.BackForwardNavigationTriggerAction", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    uObject* ind1 = __this->NavigationContext();
    uObject* nav = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(v);

    if (nav != NULL)
        __this->Perform1(nav, n);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"No Navigati...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 2861, ::STRINGS[2/*"Perform"*/]);
}

// protected generated BackForwardNavigationTriggerAction() [instance] :2846
void BackForwardNavigationTriggerAction::ctor_2()
{
    uStackFrame __("Fuse.Navigation.BackForwardNavigationTriggerAction", ".ctor()");
    ctor_1();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() [instance] :2849
uObject* BackForwardNavigationTriggerAction::NavigationContext()
{
    uStackFrame __("Fuse.Navigation.BackForwardNavigationTriggerAction", "get_NavigationContext()");
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) [instance] :2849
void BackForwardNavigationTriggerAction::NavigationContext(uObject* value)
{
    uStackFrame __("Fuse.Navigation.BackForwardNavigationTriggerAction", "set_NavigationContext(Fuse.Navigation.IBaseNavigation)");
    _NavigationContext = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class DeactivatingAnimation :711
// {
static void DeactivatingAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(29);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DeactivatingAnimation__New2_fn, 0, true, DeactivatingAnimation_typeof(), 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DeactivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.DeactivatingAnimation", options);
    type->SetBase(::g::Fuse::Navigation::NavigationAnimation_typeof());
    type->fp_build_ = DeactivatingAnimation_build;
    type->fp_ctor_ = (void*)DeactivatingAnimation__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))DeactivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))DeactivatingAnimation__OnNavigationStateChanged_fn;
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

// public generated DeactivatingAnimation() :711
void DeactivatingAnimation__ctor_5_fn(DeactivatingAnimation* __this)
{
    __this->ctor_5();
}

// protected override sealed void ForceUpdate() :713
void DeactivatingAnimation__ForceUpdate_fn(DeactivatingAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.DeactivatingAnimation", "ForceUpdate()");
    __this->Seek((double)::g::Uno::Math::Abs1(::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress), 0);
}

// public generated DeactivatingAnimation New() :711
void DeactivatingAnimation__New2_fn(DeactivatingAnimation** __retval)
{
    *__retval = DeactivatingAnimation::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :718
void DeactivatingAnimation__OnNavigationStateChanged_fn(DeactivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.DeactivatingAnimation", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.Progress) > ::g::Uno::Math::Abs1(ps.PreviousProgress)) ? 0 : 1;
    __this->GoProgress((double)(__this->Scale() * ::g::Uno::Math::Abs1(ps.Progress)), d, state);
}

// public generated DeactivatingAnimation() [instance] :711
void DeactivatingAnimation::ctor_5()
{
    uStackFrame __("Fuse.Navigation.DeactivatingAnimation", ".ctor()");
    ctor_4();
}

// public generated DeactivatingAnimation New() [static] :711
DeactivatingAnimation* DeactivatingAnimation::New2()
{
    DeactivatingAnimation* obj1 = (DeactivatingAnimation*)uNew(DeactivatingAnimation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class DirectNavigation :12
// {
static void DirectNavigation_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Unexpected null page");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[4] = uString::Const("SetProgressState");
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof());
    ::TYPES[5] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(19,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::DirectNavigation, _active), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DirectNavigation__New2_fn, 0, true, DirectNavigation_typeof(), 0));
}

::g::Fuse::Navigation::VisualNavigation_type* DirectNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(DirectNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.DirectNavigation", options);
    type->SetBase(::g::Fuse::Navigation::VisualNavigation_typeof());
    type->fp_build_ = DirectNavigation_build;
    type->fp_ctor_ = (void*)DirectNavigation__New2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))DirectNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))DirectNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))DirectNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DirectNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DirectNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DirectNavigation__OnRooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))DirectNavigation__get_PageProgress_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::VisualNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))DirectNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))DirectNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
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

// public generated DirectNavigation() :12
void DirectNavigation__ctor_4_fn(DirectNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :64
void DirectNavigation__get_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "get_Active()");
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :65
void DirectNavigation__set_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "set_Active(Fuse.Visual)");
    __this->TransitionTo(value, false);
}

// public override sealed void Goto(Fuse.Visual visual, Fuse.Navigation.NavigationGotoMode mode) :33
void DirectNavigation__Goto_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, int* mode)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "Goto(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    int mode_ = *mode;
    __this->TransitionTo(visual, mode_ == 2);
}

// public generated DirectNavigation New() :12
void DirectNavigation__New2_fn(DirectNavigation** __retval)
{
    *__retval = DirectNavigation::New2();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :20
void DirectNavigation__OnChildAddedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    __this->UpdateState(true);
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :26
void DirectNavigation__OnChildRemovedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);

    if (__this->_active == child)
        __this->Goto(NULL, 0);
}

// protected override sealed void OnRooted() :14
void DirectNavigation__OnRooted_fn(DirectNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "OnRooted()");
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);
    __this->UpdateState(true);
}

// public override sealed double get_PageProgress() :86
void DirectNavigation__get_PageProgress_fn(DirectNavigation* __this, double* __retval)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "get_PageProgress()");

    if (__this->_active == NULL)
        return *__retval = -1.0, void();

    return *__retval = 0.0, void();
}

// private void SetProgressState(Fuse.Visual elm, int progress) :71
void DirectNavigation__SetProgressState_fn(DirectNavigation* __this, ::g::Fuse::Visual* elm, int* progress)
{
    __this->SetProgressState(elm, *progress);
}

// private void TransitionTo(Fuse.Visual visual, bool bypass) :38
void DirectNavigation__TransitionTo_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, bool* bypass)
{
    __this->TransitionTo(visual, *bypass);
}

// private void UpdateState(bool bypass) :48
void DirectNavigation__UpdateState_fn(DirectNavigation* __this, bool* bypass)
{
    __this->UpdateState(*bypass);
}

// public generated DirectNavigation() [instance] :12
void DirectNavigation::ctor_4()
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", ".ctor()");
    ctor_3();
}

// private void SetProgressState(Fuse.Visual elm, int progress) [instance] :71
void DirectNavigation::SetProgressState(::g::Fuse::Visual* elm, int progress)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "SetProgressState(Fuse.Visual,int)");
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = GetPageData(elm);

    if (pd == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[3/*"Unexpected ...*/], elm, ::STRINGS[1/*"/usr/local/...*/], 76, ::STRINGS[4/*"SetProgress...*/]);
        return;
    }

    uPtr(pd)->PreviousProgress = uPtr(pd)->Progress;
    pd->Progress = (float)progress;
}

// private void TransitionTo(Fuse.Visual visual, bool bypass) [instance] :38
void DirectNavigation::TransitionTo(::g::Fuse::Visual* visual, bool bypass)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "TransitionTo(Fuse.Visual,bool)");
    ::g::Fuse::Visual* oldActive = _active;
    _active = visual;
    UpdateState(bypass);

    if (oldActive != _active)
        OnNavigated(_active);
}

// private void UpdateState(bool bypass) [instance] :48
void DirectNavigation::UpdateState(bool bypass)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "UpdateState(bool)");
    ::g::Fuse::Navigation::VisualNavigation__PageData* ret2;

    for (int t = 0; t < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Pages()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Navigation.VisualNavigation.PageData>*/])); t++)
    {
        ::g::Fuse::Visual* c = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Pages()), ::TYPES[5/*Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData>*/]), uCRef<int>(t), &ret2), ret2))->Visual();
        bool active = _active == c;
        int newProgress = active ? 0 : -1;
        SetProgressState(c, newProgress);
    }

    OnPageProgressChanged1(bypass ? 1 : 0);
}

// public generated DirectNavigation New() [static] :12
DirectNavigation* DirectNavigation::New2()
{
    DirectNavigation* obj1 = (DirectNavigation*)uNew(DirectNavigation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class EdgeNavigation :118
// {
// static EdgeNavigation() :118
static void EdgeNavigation__cctor_2_fn(uType* __type)
{
    EdgeNavigation::_edgeHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void EdgeNavigation_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Unexpected message");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[6] = uString::Const("Element");
    ::STRINGS[7] = uString::Const("OnRooted");
    ::STRINGS[8] = uString::Const("EdgeNavigation must be rooted in an Element");
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof());
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof());
    ::TYPES[5] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof());
    ::TYPES[8] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Fuse::Gestures::Edge_typeof();
    ::TYPES[10] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof());
    ::TYPES[12] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof());
    ::TYPES[13] = ::g::Fuse::Navigation::NavigationEdge_typeof();
    ::TYPES[14] = ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof();
    ::TYPES[2] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(19,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::EdgeNavigation, _active), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Fuse::Navigation::EdgeNavigation, _mains), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::EdgeNavigation, _maxProgress), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof()), offsetof(::g::Fuse::Navigation::EdgeNavigation, _swipers), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::EdgeNavigation::_edgeHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("GetEdge", NULL, (void*)EdgeNavigation__GetEdge_fn, 0, true, ::g::Fuse::Navigation::NavigationEdge_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction(".ctor", NULL, (void*)EdgeNavigation__New2_fn, 0, true, EdgeNavigation_typeof(), 0),
        new uFunction("ResetEdge", NULL, (void*)EdgeNavigation__ResetEdge_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("SetEdge", NULL, (void*)EdgeNavigation__SetEdge_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Navigation::NavigationEdge_typeof()));
}

::g::Fuse::Navigation::VisualNavigation_type* EdgeNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 24;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(EdgeNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.EdgeNavigation", options);
    type->SetBase(::g::Fuse::Navigation::VisualNavigation_typeof());
    type->fp_build_ = EdgeNavigation_build;
    type->fp_ctor_ = (void*)EdgeNavigation__New2_fn;
    type->fp_cctor_ = EdgeNavigation__cctor_2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))EdgeNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))EdgeNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))EdgeNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))EdgeNavigation__GoBack_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))EdgeNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))EdgeNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))EdgeNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))EdgeNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))EdgeNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))EdgeNavigation__get_PageProgress_fn;
    type->fp_Toggle = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))EdgeNavigation__Toggle_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))EdgeNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))EdgeNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))EdgeNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))EdgeNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))EdgeNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
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

// public generated EdgeNavigation() :118
void EdgeNavigation__ctor_4_fn(EdgeNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :167
void EdgeNavigation__get_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "get_Active()");
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :171
void EdgeNavigation__set_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "set_Active(Fuse.Visual)");
    __this->Goto(value, 0);
}

// public override sealed bool get_CanGoBack() :308
void EdgeNavigation__get_CanGoBack_fn(EdgeNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "get_CanGoBack()");
    return *__retval = __this->IsAnyPanelActive(), void();
}

// private void CheckChildren() :222
void EdgeNavigation__CheckChildren_fn(EdgeNavigation* __this)
{
    __this->CheckChildren();
}

// private void ClearChildren() :211
void EdgeNavigation__ClearChildren_fn(EdgeNavigation* __this)
{
    __this->ClearChildren();
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Visual elm) :129
void EdgeNavigation__GetEdge_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = EdgeNavigation::GetEdge(elm);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :315
void EdgeNavigation__GetPageState_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "GetPageState(Fuse.Visual)");
    ::g::Fuse::Navigation::NavigationPageState collection8;
    ::g::Fuse::Navigation::NavigationPageState collection9;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret13;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum7 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret13), ret13); enum7.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum7.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == page)
            return *__retval = (collection8 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection8.Progress = (1.0f - (float)uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress()), collection8.PreviousProgress = 0.0f, collection8), void();
    }

    collection9 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection9.Progress = (float)-__this->_maxProgress;
    collection9.PreviousProgress = 0.0f;
    return *__retval = collection9, void();
}

// public override sealed void GoBack() :302
void EdgeNavigation__GoBack_fn(EdgeNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "GoBack()");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret14;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum6 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret14), ret14); enum6.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum6.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
    }
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :143
void EdgeNavigation__Goto_fn(EdgeNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "Goto(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret15;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret15), ret15); enum1.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum1.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == element)
            uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Enable();
        else
            uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
    }

    __this->_active = element;
}

// internal bool IsAnyPanelActive() :292
void EdgeNavigation__IsAnyPanelActive_fn(EdgeNavigation* __this, bool* __retval)
{
    *__retval = __this->IsAnyPanelActive();
}

// internal bool IsDismissPoint(float2 windowPoint) :280
void EdgeNavigation__IsDismissPoint_fn(EdgeNavigation* __this, ::g::Uno::Float2* windowPoint, bool* __retval)
{
    *__retval = __this->IsDismissPoint(*windowPoint);
}

// public generated EdgeNavigation New() :118
void EdgeNavigation__New2_fn(EdgeNavigation** __retval)
{
    *__retval = EdgeNavigation::New2();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :196
void EdgeNavigation__OnChildAddedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    __this->CheckChildren();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :202
void EdgeNavigation__OnChildRemovedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    __this->CheckChildren();
}

// private void OnProgressChanged(object s, double progress) :253
void EdgeNavigation__OnProgressChanged_fn(EdgeNavigation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged(s, *progress);
}

// protected override sealed void OnRooted() :177
void EdgeNavigation__OnRooted_fn(EdgeNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnRooted()");
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if (!uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[8/*Fuse.Elements.Element*/]))
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[6/*"Element"*/], __this->Parent(), __this, ::STRINGS[1/*"/usr/local/...*/], 182, ::STRINGS[7/*"OnRooted"*/]);
        U_THROW(::g::Uno::Exception::New2(::STRINGS[8/*"EdgeNavigat...*/]));
    }

    __this->CheckChildren();
}

// protected override sealed void OnUnrooted() :190
void EdgeNavigation__OnUnrooted_fn(EdgeNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnUnrooted()");
    __this->ClearChildren();
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// public override sealed double get_PageProgress() :312
void EdgeNavigation__get_PageProgress_fn(EdgeNavigation* __this, double* __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "get_PageProgress()");
    return *__retval = (double)__this->GetPageIndex(__this->_active), void();
}

// public static void ResetEdge(Fuse.Visual elm) :138
void EdgeNavigation__ResetEdge_fn(::g::Fuse::Visual* elm)
{
    EdgeNavigation::ResetEdge(elm);
}

// public static void SetEdge(Fuse.Visual elm, Fuse.Navigation.NavigationEdge edge) :123
void EdgeNavigation__SetEdge_fn(::g::Fuse::Visual* elm, int* edge)
{
    EdgeNavigation::SetEdge(elm, *edge);
}

// public override sealed void Toggle(Fuse.Visual page) :156
void EdgeNavigation__Toggle_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "Toggle(Fuse.Visual)");

    if (__this->Active() == page)
        __this->Active(NULL);
    else
        __this->Active(page);
}

uSStrong< ::g::Fuse::PropertyHandle*> EdgeNavigation::_edgeHandle_;

// public generated EdgeNavigation() [instance] :118
void EdgeNavigation::ctor_4()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", ".ctor()");
    _swipers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]));
    _mains = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<Fuse.Visual>*/]));
    ctor_3();
}

// private void CheckChildren() [instance] :222
void EdgeNavigation::CheckChildren()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "CheckChildren()");
    ::g::Fuse::Navigation::VisualNavigation__PageData* ret11;
    ClearChildren();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Pages()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Navigation.VisualNavigation.PageData>*/])); i++)
    {
        ::g::Fuse::Visual* nodeChild = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Pages()), ::TYPES[5/*Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData>*/]), uCRef<int>(i), &ret11), ret11))->Visual();
        ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(nodeChild, ::TYPES[8/*Fuse.Elements.Element*/]);
        int edge = (element == NULL) ? 4 : EdgeNavigation::GetEdge(element);

        if (edge == 4)
            ::g::Uno::Collections::List__Add_fn(uPtr(_mains), nodeChild);
        else
        {
            ::g::Fuse::Gestures::Internal::EdgeSwiper* s = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
            s->Edge(edge);
            s->Target(element);
            s->add_ProgressChanged(uDelegate::New(::TYPES[10/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
            s->Rooted(uAs< ::g::Fuse::Elements::Element*>(Parent(), ::TYPES[8/*Fuse.Elements.Element*/]));
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_swipers), uCRef<int>(edge), s);
        }
    }

    OnPageProgressChanged1(1);
}

// private void ClearChildren() [instance] :211
void EdgeNavigation::ClearChildren()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "ClearChildren()");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret12;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret12), ret12); enum2.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > s = enum2.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        uPtr(s.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->remove_ProgressChanged(uDelegate::New(::TYPES[10/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
        uPtr(s.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Unrooted();
    }

    uPtr(_swipers)->Clear();
    uPtr(_mains)->Clear();
}

// internal bool IsAnyPanelActive() [instance] :292
bool EdgeNavigation::IsAnyPanelActive()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "IsAnyPanelActive()");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret16;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum5 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret16), ret16); enum5.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum5.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > 0.0)
            return true;
    }

    return false;
}

// internal bool IsDismissPoint(float2 windowPoint) [instance] :280
bool EdgeNavigation::IsDismissPoint(::g::Uno::Float2 windowPoint)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "IsDismissPoint(float2)");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret17;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret17), ret17); enum4.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum4.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        ::g::Uno::Float2 local = uPtr(uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target())->WindowToLocal(windowPoint);

        if (uPtr(uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target())->IsPointInside(local))
            return false;
    }

    return true;
}

// private void OnProgressChanged(object s, double progress) [instance] :253
void EdgeNavigation::OnProgressChanged(uObject* s, double progress)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnProgressChanged(object,double)");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret18;
    ::g::Fuse::Gestures::Internal::EdgeSwiper* swiper = uAs< ::g::Fuse::Gestures::Internal::EdgeSwiper*>(s, ::TYPES[14/*Fuse.Gestures.Internal.EdgeSwiper*/]);
    ::g::Fuse::Elements::Element* panel = uPtr(swiper)->Target();

    if ((panel == NULL) || (swiper == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Unexpected ...*/], 1, ::STRINGS[1/*"/usr/local/...*/], 259);
        return;
    }

    ::g::Fuse::Visual* maxPage = NULL;
    _maxProgress = 0.0;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum3 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret18), ret18); enum3.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum3.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > _maxProgress)
        {
            maxPage = uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target();
            _maxProgress = uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress();
        }
    }

    _active = maxPage;
    OnPageProgressChanged1(2);
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Visual elm) [static] :129
int EdgeNavigation::GetEdge(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "GetEdge(Fuse.Visual)");
    EdgeNavigation_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(elm)->Properties())->TryGet(EdgeNavigation::_edgeHandle(), &res))
        return uUnbox<int>(::TYPES[13/*Fuse.Navigation.NavigationEdge*/], res);

    return 4;
}

// public generated EdgeNavigation New() [static] :118
EdgeNavigation* EdgeNavigation::New2()
{
    EdgeNavigation* obj10 = (EdgeNavigation*)uNew(EdgeNavigation_typeof());
    obj10->ctor_4();
    return obj10;
}

// public static void ResetEdge(Fuse.Visual elm) [static] :138
void EdgeNavigation::ResetEdge(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "ResetEdge(Fuse.Visual)");
    EdgeNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(EdgeNavigation::_edgeHandle());
}

// public static void SetEdge(Fuse.Visual elm, Fuse.Navigation.NavigationEdge edge) [static] :123
void EdgeNavigation::SetEdge(::g::Fuse::Visual* elm, int edge)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "SetEdge(Fuse.Visual,Fuse.Navigation.NavigationEdge)");
    EdgeNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(EdgeNavigation::_edgeHandle(), uBox<int>(::TYPES[13/*Fuse.Navigation.NavigationEdge*/], edge));
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal sealed class EndSeekArgs :2399
// {
static void EndSeekArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::SnapTo_typeof(), offsetof(::g::Fuse::Navigation::EndSeekArgs, _SnapTo), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::EndSeekArgs, _Velocity), 0);
}

uType* EndSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EndSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.EndSeekArgs", options);
    type->fp_build_ = EndSeekArgs_build;
    return type;
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo, [float velocity]) :2404
void EndSeekArgs__ctor__fn(EndSeekArgs* __this, int* snapTo, float* velocity)
{
    __this->ctor_(*snapTo, *velocity);
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo, [float velocity]) :2404
void EndSeekArgs__New1_fn(int* snapTo, float* velocity, EndSeekArgs** __retval)
{
    *__retval = EndSeekArgs::New1(*snapTo, *velocity);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() :2402
void EndSeekArgs__get_SnapTo_fn(EndSeekArgs* __this, int* __retval)
{
    *__retval = __this->SnapTo();
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) :2402
void EndSeekArgs__set_SnapTo_fn(EndSeekArgs* __this, int* value)
{
    __this->SnapTo(*value);
}

// public generated float get_Velocity() :2401
void EndSeekArgs__get_Velocity_fn(EndSeekArgs* __this, float* __retval)
{
    *__retval = __this->Velocity();
}

// private generated void set_Velocity(float value) :2401
void EndSeekArgs__set_Velocity_fn(EndSeekArgs* __this, float* value)
{
    __this->Velocity(*value);
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo, [float velocity]) [instance] :2404
void EndSeekArgs::ctor_(int snapTo, float velocity)
{
    uStackFrame __("Fuse.Navigation.EndSeekArgs", ".ctor(Fuse.Navigation.SnapTo,[float])");
    SnapTo(snapTo);
    Velocity(velocity);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() [instance] :2402
int EndSeekArgs::SnapTo()
{
    uStackFrame __("Fuse.Navigation.EndSeekArgs", "get_SnapTo()");
    return _SnapTo;
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) [instance] :2402
void EndSeekArgs::SnapTo(int value)
{
    uStackFrame __("Fuse.Navigation.EndSeekArgs", "set_SnapTo(Fuse.Navigation.SnapTo)");
    _SnapTo = value;
}

// public generated float get_Velocity() [instance] :2401
float EndSeekArgs::Velocity()
{
    uStackFrame __("Fuse.Navigation.EndSeekArgs", "get_Velocity()");
    return _Velocity;
}

// private generated void set_Velocity(float value) [instance] :2401
void EndSeekArgs::Velocity(float value)
{
    uStackFrame __("Fuse.Navigation.EndSeekArgs", "set_Velocity(float)");
    _Velocity = value;
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo, [float velocity]) [static] :2404
EndSeekArgs* EndSeekArgs::New1(int snapTo, float velocity)
{
    EndSeekArgs* obj1 = (EndSeekArgs*)uNew(EndSeekArgs_typeof());
    obj1->ctor_(snapTo, velocity);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public abstract class EnterExitAnimation :620
// {
static void EnterExitAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(29,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::EnterExitAnimation, NegativeProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::EnterExitAnimation, PositiveProgress), 0);
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(EnterExitAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnterExitAnimation", options);
    type->SetBase(::g::Fuse::Navigation::NavigationAnimation_typeof());
    type->fp_build_ = EnterExitAnimation_build;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))EnterExitAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))EnterExitAnimation__OnNavigationStateChanged_fn;
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

// protected generated EnterExitAnimation() :620
void EnterExitAnimation__ctor_5_fn(EnterExitAnimation* __this)
{
    __this->ctor_5();
}

// protected override sealed void ForceUpdate() :622
void EnterExitAnimation__ForceUpdate_fn(EnterExitAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.EnterExitAnimation", "ForceUpdate()");
    float p = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress;

    if (__this->IsMatch((double)p))
        __this->Seek((double)::g::Uno::Math::Abs1(p), 0);
}

// private bool IsMatch(double progress) :629
void EnterExitAnimation__IsMatch_fn(EnterExitAnimation* __this, double* progress, bool* __retval)
{
    *__retval = __this->IsMatch(*progress);
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :637
void EnterExitAnimation__OnNavigationStateChanged_fn(EnterExitAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.EnterExitAnimation", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.PreviousProgress) < ::g::Uno::Math::Abs1(ps.Progress)) ? 0 : 1;

    if (!__this->IsMatch((double)ps.Progress))
    {
        __this->Seek(0.0, d);
        return;
    }

    __this->GoProgress((double)(__this->Scale() * ::g::Uno::Math::Abs1(ps.Progress)), d, state);
}

// protected generated EnterExitAnimation() [instance] :620
void EnterExitAnimation::ctor_5()
{
    uStackFrame __("Fuse.Navigation.EnterExitAnimation", ".ctor()");
    ctor_4();
}

// private bool IsMatch(double progress) [instance] :629
bool EnterExitAnimation::IsMatch(double progress)
{
    uStackFrame __("Fuse.Navigation.EnterExitAnimation", "IsMatch(double)");
    return (PositiveProgress && (progress >= 0.0)) || (NegativeProgress && (progress <= 0.0));
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public class EnteringAnimation :660
// {
static void EnteringAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(31);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EnteringAnimation__New2_fn, 0, true, EnteringAnimation_typeof(), 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(EnteringAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnteringAnimation", options);
    type->SetBase(::g::Fuse::Navigation::EnterExitAnimation_typeof());
    type->fp_build_ = EnteringAnimation_build;
    type->fp_ctor_ = (void*)EnteringAnimation__New2_fn;
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

// public EnteringAnimation() :662
void EnteringAnimation__ctor_6_fn(EnteringAnimation* __this)
{
    __this->ctor_6();
}

// public EnteringAnimation New() :662
void EnteringAnimation__New2_fn(EnteringAnimation** __retval)
{
    *__retval = EnteringAnimation::New2();
}

// public EnteringAnimation() [instance] :662
void EnteringAnimation::ctor_6()
{
    uStackFrame __("Fuse.Navigation.EnteringAnimation", ".ctor()");
    ctor_5();
    PositiveProgress = true;
}

// public EnteringAnimation New() [static] :662
EnteringAnimation* EnteringAnimation::New2()
{
    EnteringAnimation* obj1 = (EnteringAnimation*)uNew(EnteringAnimation_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public class ExitingAnimation :652
// {
static void ExitingAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(31);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExitingAnimation__New2_fn, 0, true, ExitingAnimation_typeof(), 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ExitingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ExitingAnimation", options);
    type->SetBase(::g::Fuse::Navigation::EnterExitAnimation_typeof());
    type->fp_build_ = ExitingAnimation_build;
    type->fp_ctor_ = (void*)ExitingAnimation__New2_fn;
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

// public ExitingAnimation() :654
void ExitingAnimation__ctor_6_fn(ExitingAnimation* __this)
{
    __this->ctor_6();
}

// public ExitingAnimation New() :654
void ExitingAnimation__New2_fn(ExitingAnimation** __retval)
{
    *__retval = ExitingAnimation::New2();
}

// public ExitingAnimation() [instance] :654
void ExitingAnimation::ctor_6()
{
    uStackFrame __("Fuse.Navigation.ExitingAnimation", ".ctor()");
    ctor_5();
    NegativeProgress = true;
}

// public ExitingAnimation New() [static] :654
ExitingAnimation* ExitingAnimation::New2()
{
    ExitingAnimation* obj1 = (ExitingAnimation*)uNew(ExitingAnimation_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal sealed class ExplicitNavigation :341
// {
static void ExplicitNavigation_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(19,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::ExplicitNavigation, _active), 0);
}

::g::Fuse::Navigation::VisualNavigation_type* ExplicitNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ExplicitNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.ExplicitNavigation", options);
    type->SetBase(::g::Fuse::Navigation::VisualNavigation_typeof());
    type->fp_build_ = ExplicitNavigation_build;
    type->fp_ctor_ = (void*)ExplicitNavigation__New2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))ExplicitNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))ExplicitNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))ExplicitNavigation__Goto_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))ExplicitNavigation__get_PageProgress_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::VisualNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))ExplicitNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))ExplicitNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
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

// public generated ExplicitNavigation() :341
void ExplicitNavigation__ctor_4_fn(ExplicitNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :354
void ExplicitNavigation__get_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "get_Active()");
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :355
void ExplicitNavigation__set_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "set_Active(Fuse.Visual)");

    if (__this->_active != value)
    {
        __this->_active = value;
        __this->OnNavigated(__this->_active);
    }
}

// public override sealed void Goto(Fuse.Visual visual, Fuse.Navigation.NavigationGotoMode mode) :343
void ExplicitNavigation__Goto_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* visual, int* mode)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "Goto(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    int mode_ = *mode;
    __this->SetPageProgress(visual, 0.0f, false);
    __this->Active(visual);
    __this->OnPageProgressChanged1((mode_ == 2) ? 1 : 0);
}

// public generated ExplicitNavigation New() :341
void ExplicitNavigation__New2_fn(ExplicitNavigation** __retval)
{
    *__retval = ExplicitNavigation::New2();
}

// public override sealed double get_PageProgress() :367
void ExplicitNavigation__get_PageProgress_fn(ExplicitNavigation* __this, double* __retval)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "get_PageProgress()");
    return *__retval = 0.0, void();
}

// public void SetPageProgress(Fuse.Visual page, float progress, [bool update]) :381
void ExplicitNavigation__SetPageProgress_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, bool* update)
{
    __this->SetPageProgress(page, *progress, *update);
}

// public void SetPageProgress(Fuse.Visual page, float progress, float previous, [bool update]) :370
void ExplicitNavigation__SetPageProgress1_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update)
{
    __this->SetPageProgress1(page, *progress, *previous, *update);
}

// public void UpdateProgress(Fuse.Navigation.NavigationMode mode) :392
void ExplicitNavigation__UpdateProgress_fn(ExplicitNavigation* __this, int* mode)
{
    __this->UpdateProgress(*mode);
}

// public generated ExplicitNavigation() [instance] :341
void ExplicitNavigation::ctor_4()
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", ".ctor()");
    ctor_3();
}

// public void SetPageProgress(Fuse.Visual page, float progress, [bool update]) [instance] :381
void ExplicitNavigation::SetPageProgress(::g::Fuse::Visual* page, float progress, bool update)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "SetPageProgress(Fuse.Visual,float,[bool])");
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = GetPageData(page);

    if (pd == NULL)
        return;

    uPtr(pd)->PreviousProgress = uPtr(pd)->Progress;
    pd->Progress = progress;

    if (update)
        OnPageProgressChanged1(0);
}

// public void SetPageProgress(Fuse.Visual page, float progress, float previous, [bool update]) [instance] :370
void ExplicitNavigation::SetPageProgress1(::g::Fuse::Visual* page, float progress, float previous, bool update)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "SetPageProgress(Fuse.Visual,float,float,[bool])");
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = GetPageData(page);

    if (pd == NULL)
        return;

    uPtr(pd)->PreviousProgress = previous;
    pd->Progress = progress;

    if (update)
        OnPageProgressChanged1(0);
}

// public void UpdateProgress(Fuse.Navigation.NavigationMode mode) [instance] :392
void ExplicitNavigation::UpdateProgress(int mode)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "UpdateProgress(Fuse.Navigation.NavigationMode)");
    OnPageProgressChanged1(mode);
}

// public generated ExplicitNavigation New() [static] :341
ExplicitNavigation* ExplicitNavigation::New2()
{
    ExplicitNavigation* obj1 = (ExplicitNavigation*)uNew(ExplicitNavigation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class GoBack :2868
// {
static void GoBack_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GoBack__New2_fn, 0, true, GoBack_typeof(), 0));
}

::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(GoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoBack", options);
    type->SetBase(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof());
    type->fp_build_ = GoBack_build;
    type->fp_ctor_ = (void*)GoBack__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoBack__Perform1_fn;
    return type;
}

// public generated GoBack() :2868
void GoBack__ctor_3_fn(GoBack* __this)
{
    __this->ctor_3();
}

// public generated GoBack New() :2868
void GoBack__New2_fn(GoBack** __retval)
{
    *__retval = GoBack::New2();
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :2870
void GoBack__Perform1_fn(GoBack* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Navigation.GoBack", "Perform(Fuse.Navigation.IBaseNavigation,Fuse.Node)");

    if (::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(ctx), ::TYPES[15/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoBack(uInterface(uPtr(ctx), ::TYPES[15/*Fuse.Navigation.IBaseNavigation*/]));
}

// public generated GoBack() [instance] :2868
void GoBack::ctor_3()
{
    uStackFrame __("Fuse.Navigation.GoBack", ".ctor()");
    ctor_2();
}

// public generated GoBack New() [static] :2868
GoBack* GoBack::New2()
{
    GoBack* obj1 = (GoBack*)uNew(GoBack_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class GoForward :2877
// {
static void GoForward_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GoForward__New2_fn, 0, true, GoForward_typeof(), 0));
}

::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(GoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoForward", options);
    type->SetBase(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof());
    type->fp_build_ = GoForward_build;
    type->fp_ctor_ = (void*)GoForward__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoForward__Perform1_fn;
    return type;
}

// public generated GoForward() :2877
void GoForward__ctor_3_fn(GoForward* __this)
{
    __this->ctor_3();
}

// public generated GoForward New() :2877
void GoForward__New2_fn(GoForward** __retval)
{
    *__retval = GoForward::New2();
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :2880
void GoForward__Perform1_fn(GoForward* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Navigation.GoForward", "Perform(Fuse.Navigation.IBaseNavigation,Fuse.Node)");

    if (::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(ctx), ::TYPES[15/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoForward(uInterface(uPtr(ctx), ::TYPES[15/*Fuse.Navigation.IBaseNavigation*/]));
}

// public generated GoForward() [instance] :2877
void GoForward::ctor_3()
{
    uStackFrame __("Fuse.Navigation.GoForward", ".ctor()");
    ctor_2();
}

// public generated GoForward New() [static] :2877
GoForward* GoForward::New2()
{
    GoForward* obj1 = (GoForward*)uNew(GoForward_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class HierarchicalNavigation :2332
// {
static void HierarchicalNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(29);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)HierarchicalNavigation__New2_fn, 0, true, HierarchicalNavigation_typeof(), 0),
        new uFunction("get_ReuseExistingVisual", NULL, (void*)HierarchicalNavigation__get_ReuseExistingVisual_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ReuseExistingVisual", NULL, (void*)HierarchicalNavigation__set_ReuseExistingVisual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Navigation::VisualNavigation_type* HierarchicalNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(HierarchicalNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.HierarchicalNavigation", options);
    type->SetBase(::g::Fuse::Navigation::StructuredNavigation_typeof());
    type->fp_build_ = HierarchicalNavigation_build;
    type->fp_ctor_ = (void*)HierarchicalNavigation__New2_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::StructuredNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))::g::Fuse::Navigation::StructuredNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))::g::Fuse::Navigation::StructuredNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
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

// public HierarchicalNavigation() :2334
void HierarchicalNavigation__ctor_5_fn(HierarchicalNavigation* __this)
{
    __this->ctor_5();
}

// public HierarchicalNavigation New() :2334
void HierarchicalNavigation__New2_fn(HierarchicalNavigation** __retval)
{
    *__retval = HierarchicalNavigation::New2();
}

// public bool get_ReuseExistingVisual() :2340
void HierarchicalNavigation__get_ReuseExistingVisual_fn(HierarchicalNavigation* __this, bool* __retval)
{
    *__retval = __this->ReuseExistingVisual();
}

// public void set_ReuseExistingVisual(bool value) :2341
void HierarchicalNavigation__set_ReuseExistingVisual_fn(HierarchicalNavigation* __this, bool* value)
{
    __this->ReuseExistingVisual(*value);
}

// public HierarchicalNavigation() [instance] :2334
void HierarchicalNavigation::ctor_5()
{
    uStackFrame __("Fuse.Navigation.HierarchicalNavigation", ".ctor()");
    ctor_4(1);
}

// public bool get_ReuseExistingVisual() [instance] :2340
bool HierarchicalNavigation::ReuseExistingVisual()
{
    uStackFrame __("Fuse.Navigation.HierarchicalNavigation", "get_ReuseExistingVisual()");
    return _reuseExistingVisual;
}

// public void set_ReuseExistingVisual(bool value) [instance] :2341
void HierarchicalNavigation::ReuseExistingVisual(bool value)
{
    uStackFrame __("Fuse.Navigation.HierarchicalNavigation", "set_ReuseExistingVisual(bool)");
    _reuseExistingVisual = value;
}

// public HierarchicalNavigation New() [static] :2334
HierarchicalNavigation* HierarchicalNavigation::New2()
{
    HierarchicalNavigation* obj1 = (HierarchicalNavigation*)uNew(HierarchicalNavigation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public delegate void HistoryChangedHandler(object sender) :440
uDelegateType* HistoryChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.HistoryChangedHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public abstract interface IBaseNavigation :444
// {
uInterfaceType* IBaseNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IBaseNavigation", 0, 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_CanGoBack", NULL, NULL, offsetof(IBaseNavigation, fp_get_CanGoBack), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, NULL, offsetof(IBaseNavigation, fp_get_CanGoForward), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("GoBack", NULL, NULL, offsetof(IBaseNavigation, fp_GoBack), false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, NULL, offsetof(IBaseNavigation, fp_GoForward), false, uVoid_typeof(), 0),
        new uFunction("add_HistoryChanged", NULL, NULL, offsetof(IBaseNavigation, fp_add_HistoryChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, NULL, offsetof(IBaseNavigation, fp_remove_HistoryChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public abstract interface INavigation :459
// {
uInterfaceType* INavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigation", 0, 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_ActivePage", NULL, NULL, offsetof(INavigation, fp_get_ActivePage), false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("GetPage", NULL, NULL, offsetof(INavigation, fp_GetPage), false, ::g::Fuse::Visual_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetPageState", NULL, NULL, offsetof(INavigation, fp_GetPageState), false, ::g::Fuse::Navigation::NavigationPageState_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Goto", NULL, NULL, offsetof(INavigation, fp_Goto), false, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("add_Navigated", NULL, NULL, offsetof(INavigation, fp_add_Navigated), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("remove_Navigated", NULL, NULL, offsetof(INavigation, fp_remove_Navigated), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("get_PageCount", NULL, NULL, offsetof(INavigation, fp_get_PageCount), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("add_PageCountChanged", NULL, NULL, offsetof(INavigation, fp_add_PageCountChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("remove_PageCountChanged", NULL, NULL, offsetof(INavigation, fp_remove_PageCountChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("get_PageProgress", NULL, NULL, offsetof(INavigation, fp_get_PageProgress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_PageProgressChanged", NULL, NULL, offsetof(INavigation, fp_add_PageProgressChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationHandler_typeof()),
        new uFunction("remove_PageProgressChanged", NULL, NULL, offsetof(INavigation, fp_remove_PageProgressChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationHandler_typeof()),
        new uFunction("Toggle", NULL, NULL, offsetof(INavigation, fp_Toggle), false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal abstract interface IPagePropertyListener :1279
// {
uInterfaceType* IPagePropertyListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPagePropertyListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal abstract interface IPageResourceBinding :1117
// {
uInterfaceType* IPageResourceBinding_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPageResourceBinding", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public abstract interface IRouterOutlet :515
// {
uInterfaceType* IRouterOutlet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IRouterOutlet", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("GetCurrent", NULL, NULL, offsetof(IRouterOutlet, fp_GetCurrent), false, uVoid_typeof(), 3, ::g::Uno::String_typeof()->ByRef(), ::g::Uno::String_typeof()->ByRef(), ::g::Fuse::Visual_typeof()->ByRef()),
        new uFunction("Goto", NULL, NULL, offsetof(IRouterOutlet, fp_Goto), false, ::g::Fuse::Navigation::RoutingResult_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof(), ::g::Fuse::Navigation::RoutingOperation_typeof()),
        new uFunction("get_Type", NULL, NULL, offsetof(IRouterOutlet, fp_get_Type), false, ::g::Fuse::Navigation::OutletType_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class LinearNavigation :2325
// {
static void LinearNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(29);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LinearNavigation__New2_fn, 0, true, LinearNavigation_typeof(), 0));
}

::g::Fuse::Navigation::VisualNavigation_type* LinearNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(LinearNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.LinearNavigation", options);
    type->SetBase(::g::Fuse::Navigation::StructuredNavigation_typeof());
    type->fp_build_ = LinearNavigation_build;
    type->fp_ctor_ = (void*)LinearNavigation__New2_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::StructuredNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))::g::Fuse::Navigation::StructuredNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))::g::Fuse::Navigation::StructuredNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
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

// public LinearNavigation() :2327
void LinearNavigation__ctor_5_fn(LinearNavigation* __this)
{
    __this->ctor_5();
}

// public LinearNavigation New() :2327
void LinearNavigation__New2_fn(LinearNavigation** __retval)
{
    *__retval = LinearNavigation::New2();
}

// public LinearNavigation() [instance] :2327
void LinearNavigation::ctor_5()
{
    uStackFrame __("Fuse.Navigation.LinearNavigation", ".ctor()");
    ctor_4(0);
}

// public LinearNavigation New() [static] :2327
LinearNavigation* LinearNavigation::New2()
{
    LinearNavigation* obj1 = (LinearNavigation*)uNew(LinearNavigation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class NavigatedArgs :423
// {
static void NavigatedArgs_build(uType* type)
{
    ::STRINGS[9] = uString::Const("name");
    ::STRINGS[10] = uString::Const("");
    ::TYPES[16] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(NavigatedArgs_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigatedArgs, _NewVisual), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NavigatedArgs__New2_fn, 0, true, NavigatedArgs_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_NewVisual", NULL, (void*)NavigatedArgs__get_NewVisual_fn, 0, false, ::g::Fuse::Visual_typeof(), 0));
}

NavigatedArgs_type* NavigatedArgs_typeof()
{
    static uSStrong<NavigatedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NavigatedArgs);
    options.TypeSize = sizeof(NavigatedArgs_type);
    type = (NavigatedArgs_type*)uClassType::New("Fuse.Navigation.NavigatedArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_build_ = NavigatedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))NavigatedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public NavigatedArgs(Fuse.Visual newVisual) :427
void NavigatedArgs__ctor_1_fn(NavigatedArgs* __this, ::g::Fuse::Visual* newVisual)
{
    __this->ctor_1(newVisual);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :432
void NavigatedArgs__FuseScriptingIScriptEventSerialize_fn(NavigatedArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Navigation.NavigatedArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->NewVisual())->Name()), NULL))
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[16/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[9/*"name"*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->NewVisual())->Name()));
    else
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(s, ::TYPES[16/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[9/*"name"*/], ::STRINGS[10/*""*/]);
}

// public NavigatedArgs New(Fuse.Visual newVisual) :427
void NavigatedArgs__New2_fn(::g::Fuse::Visual* newVisual, NavigatedArgs** __retval)
{
    *__retval = NavigatedArgs::New2(newVisual);
}

// public generated Fuse.Visual get_NewVisual() :425
void NavigatedArgs__get_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->NewVisual();
}

// private generated void set_NewVisual(Fuse.Visual value) :425
void NavigatedArgs__set_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual* value)
{
    __this->NewVisual(value);
}

// public NavigatedArgs(Fuse.Visual newVisual) [instance] :427
void NavigatedArgs::ctor_1(::g::Fuse::Visual* newVisual)
{
    uStackFrame __("Fuse.Navigation.NavigatedArgs", ".ctor(Fuse.Visual)");
    ctor_();
    NewVisual(newVisual);
}

// public generated Fuse.Visual get_NewVisual() [instance] :425
::g::Fuse::Visual* NavigatedArgs::NewVisual()
{
    uStackFrame __("Fuse.Navigation.NavigatedArgs", "get_NewVisual()");
    return _NewVisual;
}

// private generated void set_NewVisual(Fuse.Visual value) [instance] :425
void NavigatedArgs::NewVisual(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.NavigatedArgs", "set_NewVisual(Fuse.Visual)");
    _NewVisual = value;
}

// public NavigatedArgs New(Fuse.Visual newVisual) [static] :427
NavigatedArgs* NavigatedArgs::New2(::g::Fuse::Visual* newVisual)
{
    NavigatedArgs* obj1 = (NavigatedArgs*)uNew(NavigatedArgs_typeof());
    obj1->ctor_1(newVisual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public delegate void NavigatedHandler(object sender, Fuse.Navigation.NavigatedArgs args) :439
uDelegateType* NavigatedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigatedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigatedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class NavigateTo :2811
// {
static void NavigateTo_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Navigation::NavigationGotoMode_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _Bypass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _ClearForwardHistory), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Bypass", NULL, (void*)NavigateTo__get_Bypass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)NavigateTo__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ClearForwardHistory", NULL, (void*)NavigateTo__get_ClearForwardHistory_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ClearForwardHistory", NULL, (void*)NavigateTo__set_ClearForwardHistory_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)NavigateTo__New2_fn, 0, true, NavigateTo_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)NavigateTo__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)NavigateTo__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(NavigateTo);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateTo", options);
    type->SetBase(::g::Fuse::Navigation::NavigationTriggerAction_typeof());
    type->fp_build_ = NavigateTo_build;
    type->fp_ctor_ = (void*)NavigateTo__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateTo__Perform1_fn;
    return type;
}

// public generated NavigateTo() :2811
void NavigateTo__ctor_3_fn(NavigateTo* __this)
{
    __this->ctor_3();
}

// public generated bool get_Bypass() :2815
void NavigateTo__get_Bypass_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :2815
void NavigateTo__set_Bypass_fn(NavigateTo* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated bool get_ClearForwardHistory() :2817
void NavigateTo__get_ClearForwardHistory_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->ClearForwardHistory();
}

// public generated void set_ClearForwardHistory(bool value) :2817
void NavigateTo__set_ClearForwardHistory_fn(NavigateTo* __this, bool* value)
{
    __this->ClearForwardHistory(*value);
}

// public generated NavigateTo New() :2811
void NavigateTo__New2_fn(NavigateTo** __retval)
{
    *__retval = NavigateTo::New2();
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :2819
void NavigateTo__Perform1_fn(NavigateTo* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.NavigateTo", "Perform(Fuse.Navigation.INavigation,Fuse.Node)");
    int mode = __this->Bypass() ? 2 : 0;

    if (__this->ClearForwardHistory())
        mode = mode | 4;

    if (__this->Target() != NULL)
        ::g::Fuse::Navigation::INavigation::Goto(uInterface(uPtr(ctx), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->Target(), mode);
}

// public generated Fuse.Visual get_Target() :2813
void NavigateTo__get_Target_fn(NavigateTo* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :2813
void NavigateTo__set_Target_fn(NavigateTo* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated NavigateTo() [instance] :2811
void NavigateTo::ctor_3()
{
    uStackFrame __("Fuse.Navigation.NavigateTo", ".ctor()");
    ctor_2();
}

// public generated bool get_Bypass() [instance] :2815
bool NavigateTo::Bypass()
{
    uStackFrame __("Fuse.Navigation.NavigateTo", "get_Bypass()");
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :2815
void NavigateTo::Bypass(bool value)
{
    uStackFrame __("Fuse.Navigation.NavigateTo", "set_Bypass(bool)");
    _Bypass = value;
}

// public generated bool get_ClearForwardHistory() [instance] :2817
bool NavigateTo::ClearForwardHistory()
{
    uStackFrame __("Fuse.Navigation.NavigateTo", "get_ClearForwardHistory()");
    return _ClearForwardHistory;
}

// public generated void set_ClearForwardHistory(bool value) [instance] :2817
void NavigateTo::ClearForwardHistory(bool value)
{
    uStackFrame __("Fuse.Navigation.NavigateTo", "set_ClearForwardHistory(bool)");
    _ClearForwardHistory = value;
}

// public generated Fuse.Visual get_Target() [instance] :2813
::g::Fuse::Visual* NavigateTo::Target()
{
    uStackFrame __("Fuse.Navigation.NavigateTo", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :2813
void NavigateTo::Target(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.NavigateTo", "set_Target(Fuse.Visual)");
    _Target = value;
}

// public generated NavigateTo New() [static] :2811
NavigateTo* NavigateTo::New2()
{
    NavigateTo* obj1 = (NavigateTo*)uNew(NavigateTo_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class NavigateToggle :2829
// {
static void NavigateToggle_build(uType* type)
{
    ::STRINGS[11] = uString::Const("No Page was found");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[2] = uObject_typeof();
    type->SetFields(9,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigateToggle, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)NavigateToggle__New2_fn, 0, true, NavigateToggle_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)NavigateToggle__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)NavigateToggle__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(NavigateToggle);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateToggle", options);
    type->SetBase(::g::Fuse::Navigation::NavigationTriggerAction_typeof());
    type->fp_build_ = NavigateToggle_build;
    type->fp_ctor_ = (void*)NavigateToggle__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateToggle__Perform1_fn;
    return type;
}

// public generated NavigateToggle() :2829
void NavigateToggle__ctor_3_fn(NavigateToggle* __this)
{
    __this->ctor_3();
}

// public generated NavigateToggle New() :2829
void NavigateToggle__New2_fn(NavigateToggle** __retval)
{
    *__retval = NavigateToggle::New2();
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :2833
void NavigateToggle__Perform1_fn(NavigateToggle* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.NavigateToggle", "Perform(Fuse.Navigation.INavigation,Fuse.Node)");
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    ::g::Fuse::Visual* page = ::g::Fuse::Navigation::Navigation::TryFindPage((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : v));

    if (page != NULL)
        ::g::Fuse::Navigation::INavigation::Toggle(uInterface(uPtr(ctx), ::TYPES[0/*Fuse.Navigation.INavigation*/]), page);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[11/*"No Page was...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 2842, ::STRINGS[2/*"Perform"*/]);
}

// public generated Fuse.Visual get_Target() :2831
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :2831
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated NavigateToggle() [instance] :2829
void NavigateToggle::ctor_3()
{
    uStackFrame __("Fuse.Navigation.NavigateToggle", ".ctor()");
    ctor_2();
}

// public generated Fuse.Visual get_Target() [instance] :2831
::g::Fuse::Visual* NavigateToggle::Target()
{
    uStackFrame __("Fuse.Navigation.NavigateToggle", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :2831
void NavigateToggle::Target(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.NavigateToggle", "set_Target(Fuse.Visual)");
    _Target = value;
}

// public generated NavigateToggle New() [static] :2829
NavigateToggle* NavigateToggle::New2()
{
    NavigateToggle* obj2 = (NavigateToggle*)uNew(NavigateToggle_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public interfacemodifiers class Navigation :780
// {
// static Navigation() :780
static void Navigation__cctor__fn(uType* __type)
{
    Navigation::_navigationStateHandler_ = ::g::Fuse::Properties::CreateHandle();
    Navigation::_contextHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Navigation_build(uType* type)
{
    ::STRINGS[12] = uString::Const("TryFindBaseNavigation requires rooting to have started");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[13] = uString::Const("TryFindBaseNavigation");
    ::STRINGS[14] = uString::Const("TryFindPage requires rooting to have started");
    ::STRINGS[15] = uString::Const("TryFindPage");
    ::STRINGS[16] = uString::Const("`Page` set to a value that is not within an navigation");
    ::TYPES[2] = uObject_typeof();
    ::TYPES[15] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[19] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[20] = ::g::Fuse::Navigation::NavigationStateHandler_typeof();
    ::TYPES[21] = ::g::Fuse::Navigation::NavigationStateArgs_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[22] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array());
    ::TYPES[23] = uObject_typeof()->Array();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_contextHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_navigationStateHandler_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("GetNavigationNavigation", NULL, (void*)Navigation__GetNavigationNavigation_fn, 0, true, ::g::Fuse::Navigation::IBaseNavigation_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("IsPage", NULL, (void*)Navigation__IsPage_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetNavigationNavigation", NULL, (void*)Navigation__ResetNavigationNavigation_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("SetNavigationNavigation", NULL, (void*)Navigation__SetNavigationNavigation_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Navigation::IBaseNavigation_typeof()),
        new uFunction("TryFind", NULL, (void*)Navigation__TryFind_fn, 0, true, ::g::Fuse::Navigation::INavigation_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("TryFindBaseNavigation", NULL, (void*)Navigation__TryFindBaseNavigation_fn, 0, true, ::g::Fuse::Navigation::IBaseNavigation_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("TryFindPage", NULL, (void*)Navigation__TryFindPage_fn, 0, true, ::g::Fuse::Visual_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

uType* Navigation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Navigation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Navigation", options);
    type->fp_build_ = Navigation_build;
    type->fp_cctor_ = Navigation__cctor__fn;
    return type;
}

// protected generated Navigation() :780
void Navigation__ctor__fn(Navigation* __this)
{
    __this->ctor_();
}

// internal static void AddStateHandler(Fuse.Visual visual, Fuse.Navigation.NavigationStateHandler handler) :793
void Navigation__AddStateHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Navigation::AddStateHandler(visual, handler);
}

// internal static Fuse.Navigation.IBaseNavigation GetLocalNavigation(Fuse.Visual node) :838
void Navigation__GetLocalNavigation_fn(::g::Fuse::Visual* node, uObject** __retval)
{
    *__retval = Navigation::GetLocalNavigation(node);
}

// public static Fuse.Navigation.IBaseNavigation GetNavigationNavigation(Fuse.Visual n) :971
void Navigation__GetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject** __retval)
{
    *__retval = Navigation::GetNavigationNavigation(n);
}

// private static void InvokeState(object handler, object[] state) :808
void Navigation__InvokeState_fn(uObject* handler, uArray* state)
{
    Navigation::InvokeState(handler, state);
}

// public static bool IsPage(Fuse.Node n) :985
void Navigation__IsPage_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Navigation::IsPage(n);
}

// internal static void NotifyNavigationState(Fuse.Visual n, Fuse.Navigation.NavigationStateArgs state) :803
void Navigation__NotifyNavigationState_fn(::g::Fuse::Visual* n, ::g::Fuse::Navigation::NavigationStateArgs* state)
{
    Navigation::NotifyNavigationState(n, state);
}

// internal static void RemoveStateHandler(Fuse.Visual visual, Fuse.Navigation.NavigationStateHandler handler) :798
void Navigation__RemoveStateHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Navigation::RemoveStateHandler(visual, handler);
}

// public static void ResetNavigationNavigation(Fuse.Visual n) :980
void Navigation__ResetNavigationNavigation_fn(::g::Fuse::Visual* n)
{
    Navigation::ResetNavigationNavigation(n);
}

// public static void SetNavigationNavigation(Fuse.Visual n, Fuse.Navigation.IBaseNavigation ctx) :965
void Navigation__SetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject* ctx)
{
    Navigation::SetNavigationNavigation(n, ctx);
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Visual node) :857
void Navigation__TryFind_fn(::g::Fuse::Visual* node, uObject** __retval)
{
    *__retval = Navigation::TryFind(node);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Visual node) :864
void Navigation__TryFindBaseNavigation_fn(::g::Fuse::Visual* node, uObject** __retval)
{
    *__retval = Navigation::TryFindBaseNavigation(node);
}

// public static Fuse.Visual TryFindPage(Fuse.Visual node) :887
void Navigation__TryFindPage_fn(::g::Fuse::Visual* node, ::g::Fuse::Visual** __retval)
{
    *__retval = Navigation::TryFindPage(node);
}

// internal static Fuse.Visual TryFindPage(Fuse.Visual node, Fuse.Navigation.INavigation& nav, Fuse.Visual& pageBind) :908
void Navigation__TryFindPage1_fn(::g::Fuse::Visual* node, uObject** nav, ::g::Fuse::Visual** pageBind, ::g::Fuse::Visual** __retval)
{
    *__retval = Navigation::TryFindPage1(node, nav, pageBind);
}

uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_contextHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_navigationStateHandler_;

// protected generated Navigation() [instance] :780
void Navigation::ctor_()
{
}

// internal static void AddStateHandler(Fuse.Visual visual, Fuse.Navigation.NavigationStateHandler handler) [static] :793
void Navigation::AddStateHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Navigation", "AddStateHandler(Fuse.Visual,Fuse.Navigation.NavigationStateHandler)");
    Navigation_typeof()->Init();
    uPtr(uPtr(visual)->Properties())->AddToList(Navigation::_navigationStateHandler(), handler);
}

// internal static Fuse.Navigation.IBaseNavigation GetLocalNavigation(Fuse.Visual node) [static] :838
uObject* Navigation::GetLocalNavigation(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Navigation.Navigation", "GetLocalNavigation(Fuse.Visual)");
    Navigation_typeof()->Init();
    ::g::Fuse::Node* ret1;
    uObject* n = Navigation::GetNavigationNavigation(node);

    if (n != NULL)
        return n;

    uObject* t = uAs<uObject*>(node, ::TYPES[15/*Fuse.Navigation.IBaseNavigation*/]);

    if (t != NULL)
        return t;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(node)->Children()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        uObject* c = uAs<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(node)->Children()), ::TYPES[19/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret1), ret1), ::TYPES[15/*Fuse.Navigation.IBaseNavigation*/]);

        if ((c != NULL) && !uIs(c, ::TYPES[1/*Fuse.Visual*/]))
            return c;
    }

    return NULL;
}

// public static Fuse.Navigation.IBaseNavigation GetNavigationNavigation(Fuse.Visual n) [static] :971
uObject* Navigation::GetNavigationNavigation(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.Navigation", "GetNavigationNavigation(Fuse.Visual)");
    Navigation_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Navigation::_contextHandle(), &v))
        return (uObject*)v;

    return NULL;
}

// private static void InvokeState(object handler, object[] state) [static] :808
void Navigation::InvokeState(uObject* handler, uArray* state)
{
    uStackFrame __("Fuse.Navigation.Navigation", "InvokeState(object,object[])");
    Navigation_typeof()->Init();
    uDelegate* h = uCast<uDelegate*>(handler, ::TYPES[20/*Fuse.Navigation.NavigationStateHandler*/]);
    ::g::Fuse::Visual* n = uCast< ::g::Fuse::Visual*>(uPtr(state)->Strong<uObject*>(0), ::TYPES[1/*Fuse.Visual*/]);
    ::g::Fuse::Navigation::NavigationStateArgs* s = uCast< ::g::Fuse::Navigation::NavigationStateArgs*>(state->Strong<uObject*>(1), ::TYPES[21/*Fuse.Navigation.NavigationStateArgs*/]);
    uPtr(h)->Invoke(2, n, s);
}

// public static bool IsPage(Fuse.Node n) [static] :985
bool Navigation::IsPage(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.Navigation", "IsPage(Fuse.Node)");
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    return uPtr(v)->LayoutRole() == 0;
}

// internal static void NotifyNavigationState(Fuse.Visual n, Fuse.Navigation.NavigationStateArgs state) [static] :803
void Navigation::NotifyNavigationState(::g::Fuse::Visual* n, ::g::Fuse::Navigation::NavigationStateArgs* state)
{
    uStackFrame __("Fuse.Navigation.Navigation", "NotifyNavigationState(Fuse.Visual,Fuse.Navigation.NavigationStateArgs)");
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->ForeachInList(Navigation::_navigationStateHandler(), uDelegate::New(::TYPES[22/*Uno.Action<object, object[]>*/], (void*)Navigation__InvokeState_fn), uArray::Init<uObject*>(::TYPES[23/*object[]*/], 2, n, state));
}

// internal static void RemoveStateHandler(Fuse.Visual visual, Fuse.Navigation.NavigationStateHandler handler) [static] :798
void Navigation::RemoveStateHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Navigation", "RemoveStateHandler(Fuse.Visual,Fuse.Navigation.NavigationStateHandler)");
    Navigation_typeof()->Init();
    uPtr(uPtr(visual)->Properties())->RemoveFromList(Navigation::_navigationStateHandler(), handler);
}

// public static void ResetNavigationNavigation(Fuse.Visual n) [static] :980
void Navigation::ResetNavigationNavigation(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.Navigation", "ResetNavigationNavigation(Fuse.Visual)");
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(Navigation::_contextHandle());
}

// public static void SetNavigationNavigation(Fuse.Visual n, Fuse.Navigation.IBaseNavigation ctx) [static] :965
void Navigation::SetNavigationNavigation(::g::Fuse::Visual* n, uObject* ctx)
{
    uStackFrame __("Fuse.Navigation.Navigation", "SetNavigationNavigation(Fuse.Visual,Fuse.Navigation.IBaseNavigation)");
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Navigation::_contextHandle(), ctx);
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Visual node) [static] :857
uObject* Navigation::TryFind(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFind(Fuse.Visual)");
    Navigation_typeof()->Init();
    return uAs<uObject*>(Navigation::TryFindBaseNavigation(node), ::TYPES[0/*Fuse.Navigation.INavigation*/]);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Visual node) [static] :864
uObject* Navigation::TryFindBaseNavigation(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindBaseNavigation(Fuse.Visual)");
    Navigation_typeof()->Init();

    if (!uPtr(node)->IsRootingStarted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[12/*"TryFindBase...*/], node, ::STRINGS[1/*"/usr/local/...*/], 868, ::STRINGS[13/*"TryFindBase...*/]);
        return NULL;
    }

    while (node != NULL)
    {
        uObject* n = Navigation::GetLocalNavigation(node);

        if (n != NULL)
            return n;

        node = uPtr(node)->ContextParent();
    }

    return NULL;
}

// public static Fuse.Visual TryFindPage(Fuse.Visual node) [static] :887
::g::Fuse::Visual* Navigation::TryFindPage(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindPage(Fuse.Visual)");
    Navigation_typeof()->Init();
    uObject* nav;
    ::g::Fuse::Visual* bind;
    return Navigation::TryFindPage1(node, &nav, &bind);
}

// internal static Fuse.Visual TryFindPage(Fuse.Visual node, Fuse.Navigation.INavigation& nav, Fuse.Visual& pageBind) [static] :908
::g::Fuse::Visual* Navigation::TryFindPage1(::g::Fuse::Visual* node, uObject** nav, ::g::Fuse::Visual** pageBind)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindPage(Fuse.Visual,Fuse.Navigation.INavigation&,Fuse.Visual&)");
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* prev = node;
    *nav = NULL;
    *pageBind = NULL;

    if (!uPtr(node)->IsRootingStarted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[14/*"TryFindPage...*/], node, ::STRINGS[1/*"/usr/local/...*/], 916, ::STRINGS[15/*"TryFindPage"*/]);
        return NULL;
    }

    bool first = true;

    while (node != NULL)
    {
        ::g::Fuse::Visual* p = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(node);

        if (p != NULL)
        {
            *pageBind = node;

            if (uPtr(p)->IsRootingStarted())
            {
                *nav = Navigation::TryFind(p);

                if (*nav == NULL)
                {
                    ::g::Fuse::Diagnostics::UserWarning(::STRINGS[16/*"`Page` set ...*/], p, ::STRINGS[1/*"/usr/local/...*/], 934, ::STRINGS[15/*"TryFindPage"*/]);
                    return NULL;
                }
            }

            return p;
        }

        if (!first)
        {
            uObject* n = Navigation::GetLocalNavigation(node);

            if (n != NULL)
            {
                *nav = uAs<uObject*>(n, ::TYPES[0/*Fuse.Navigation.INavigation*/]);

                if (*nav == NULL)
                    return NULL;

                return prev;
            }
        }

        first = false;
        prev = node;
        node = uPtr(node)->ContextParent();
    }

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public abstract class NavigationAnimation :563
// {
static void NavigationAnimation_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[24] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(NavigationAnimation_type, interface4));
    type->SetFields(27,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _scale), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Scale", NULL, (void*)NavigationAnimation__get_Scale_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Scale", NULL, (void*)NavigationAnimation__set_Scale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

NavigationAnimation_type* NavigationAnimation_typeof()
{
    static uSStrong<NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(NavigationAnimation);
    options.TypeSize = sizeof(NavigationAnimation_type);
    type = (NavigationAnimation_type*)uClassType::New("Fuse.Navigation.NavigationAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = NavigationAnimation_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))NavigationAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))NavigationAnimation__OnUnrooted_fn;
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

// internal NavigationAnimation() :565
void NavigationAnimation__ctor_4_fn(NavigationAnimation* __this)
{
    __this->ctor_4();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) :606
void NavigationAnimation__GoProgress_fn(NavigationAnimation* __this, double* p, int* variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(*p, *variant, state);
}

// protected Fuse.Navigation.INavigation get_NavContext() :568
void NavigationAnimation__get_NavContext_fn(NavigationAnimation* __this, uObject** __retval)
{
    *__retval = __this->NavContext();
}

// private void NavReady() :578
void NavigationAnimation__NavReady_fn(NavigationAnimation* __this)
{
    __this->NavReady();
}

// private void NavUnready() :591
void NavigationAnimation__NavUnready_fn(NavigationAnimation* __this)
{
    __this->NavUnready();
}

// protected override sealed void OnRooted() :571
void NavigationAnimation__OnRooted_fn(NavigationAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::NavigationPageProxy::New1(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationAnimation__NavReady_fn, __this), uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationAnimation__NavUnready_fn, __this));
    uPtr(__this->_proxy)->Rooted(__this->Parent());
}

// protected override sealed void OnUnrooted() :584
void NavigationAnimation__OnUnrooted_fn(NavigationAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "OnUnrooted()");
    uPtr(__this->_proxy)->Unrooted();
    __this->_proxy = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected Fuse.Visual get_PageContext() :567
void NavigationAnimation__get_PageContext_fn(NavigationAnimation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->PageContext();
}

// public float get_Scale() :602
void NavigationAnimation__get_Scale_fn(NavigationAnimation* __this, float* __retval)
{
    *__retval = __this->Scale();
}

// public void set_Scale(float value) :603
void NavigationAnimation__set_Scale_fn(NavigationAnimation* __this, float* value)
{
    __this->Scale(*value);
}

// internal NavigationAnimation() [instance] :565
void NavigationAnimation::ctor_4()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", ".ctor()");
    _scale = 1.0f;
    ctor_3();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) [instance] :606
void NavigationAnimation::GoProgress(double p, int variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "GoProgress(double,Fuse.Animations.AnimationVariant,Fuse.Navigation.NavigationArgs)");

    if (uPtr(state)->Mode() == 0)
        PlayTo(p, variant);
    else if (uPtr(state)->Mode() == 2)
        DirectSeek(p, variant);
    else
        BypassSeek(p, variant);
}

// protected Fuse.Navigation.INavigation get_NavContext() [instance] :568
uObject* NavigationAnimation::NavContext()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "get_NavContext()");
    return uPtr(_proxy)->Navigation();
}

// private void NavReady() [instance] :578
void NavigationAnimation::NavReady()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "NavReady()");
    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[24/*Fuse.Navigation.NavigationHandler*/], this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
    ForceUpdate();
}

// private void NavUnready() [instance] :591
void NavigationAnimation::NavUnready()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "NavUnready()");
    ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[24/*Fuse.Navigation.NavigationHandler*/], this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
}

// protected Fuse.Visual get_PageContext() [instance] :567
::g::Fuse::Visual* NavigationAnimation::PageContext()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "get_PageContext()");
    return uPtr(_proxy)->Page();
}

// public float get_Scale() [instance] :602
float NavigationAnimation::Scale()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "get_Scale()");
    return _scale;
}

// public void set_Scale(float value) [instance] :603
void NavigationAnimation::Scale(float value)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "set_Scale(float)");
    _scale = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class NavigationArgs :750
// {
static void NavigationArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationMode_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _Mode), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _PreviousProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _Progress), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Mode", NULL, (void*)NavigationArgs__get_Mode_fn, 0, false, ::g::Fuse::Navigation::NavigationMode_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NavigationArgs__New2_fn, 0, true, NavigationArgs_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Fuse::Navigation::NavigationMode_typeof()),
        new uFunction("get_PreviousProgress", NULL, (void*)NavigationArgs__get_PreviousProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Progress", NULL, (void*)NavigationArgs__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

uType* NavigationArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NavigationArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_build_ = NavigationArgs_build;
    return type;
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :756
void NavigationArgs__ctor_1_fn(NavigationArgs* __this, double* progress, double* prevProgress, int* mode)
{
    __this->ctor_1(*progress, *prevProgress, *mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() :752
void NavigationArgs__get_Mode_fn(NavigationArgs* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) :752
void NavigationArgs__set_Mode_fn(NavigationArgs* __this, int* value)
{
    __this->Mode(*value);
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :756
void NavigationArgs__New2_fn(double* progress, double* prevProgress, int* mode, NavigationArgs** __retval)
{
    *__retval = NavigationArgs::New2(*progress, *prevProgress, *mode);
}

// public generated double get_PreviousProgress() :754
void NavigationArgs__get_PreviousProgress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// private generated void set_PreviousProgress(double value) :754
void NavigationArgs__set_PreviousProgress_fn(NavigationArgs* __this, double* value)
{
    __this->PreviousProgress(*value);
}

// public generated double get_Progress() :753
void NavigationArgs__get_Progress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private generated void set_Progress(double value) :753
void NavigationArgs__set_Progress_fn(NavigationArgs* __this, double* value)
{
    __this->Progress(*value);
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [instance] :756
void NavigationArgs::ctor_1(double progress, double prevProgress, int mode)
{
    uStackFrame __("Fuse.Navigation.NavigationArgs", ".ctor(double,double,[Fuse.Navigation.NavigationMode])");
    ctor_();
    Progress(progress);
    PreviousProgress(prevProgress);
    Mode(mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() [instance] :752
int NavigationArgs::Mode()
{
    uStackFrame __("Fuse.Navigation.NavigationArgs", "get_Mode()");
    return _Mode;
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) [instance] :752
void NavigationArgs::Mode(int value)
{
    uStackFrame __("Fuse.Navigation.NavigationArgs", "set_Mode(Fuse.Navigation.NavigationMode)");
    _Mode = value;
}

// public generated double get_PreviousProgress() [instance] :754
double NavigationArgs::PreviousProgress()
{
    uStackFrame __("Fuse.Navigation.NavigationArgs", "get_PreviousProgress()");
    return _PreviousProgress;
}

// private generated void set_PreviousProgress(double value) [instance] :754
void NavigationArgs::PreviousProgress(double value)
{
    uStackFrame __("Fuse.Navigation.NavigationArgs", "set_PreviousProgress(double)");
    _PreviousProgress = value;
}

// public generated double get_Progress() [instance] :753
double NavigationArgs::Progress()
{
    uStackFrame __("Fuse.Navigation.NavigationArgs", "get_Progress()");
    return _Progress;
}

// private generated void set_Progress(double value) [instance] :753
void NavigationArgs::Progress(double value)
{
    uStackFrame __("Fuse.Navigation.NavigationArgs", "set_Progress(double)");
    _Progress = value;
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [static] :756
NavigationArgs* NavigationArgs::New2(double progress, double prevProgress, int mode)
{
    NavigationArgs* obj1 = (NavigationArgs*)uNew(NavigationArgs_typeof());
    obj1->ctor_1(progress, prevProgress, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public enum NavigationDirection :409
uEnumType* NavigationDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public enum NavigationEdge :109
uEnumType* NavigationEdge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationEdge", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "None", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public enum NavigationGotoMode :415
uEnumType* NavigationGotoMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationGotoMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Transition", 0LL,
        "Bypass", 2LL,
        "ClearForwardHistory", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public delegate void NavigationHandler(object sender, Fuse.Navigation.NavigationArgs state) :765
uDelegateType* NavigationHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public enum NavigationMode :743
uEnumType* NavigationMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Switch", 0LL,
        "Bypass", 1LL,
        "Seek", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public delegate void NavigationPageCountHandler(object sender) :441
uDelegateType* NavigationPageCountHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageCountHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public delegate void NavigationPageProgressHandler(object sender, double Current, double Previous) :442
uDelegateType* NavigationPageProgressHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageProgressHandler", 3, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public static class NavigationPageProperty :1284
// {
// static NavigationPageProperty() :1284
static void NavigationPageProperty__cctor__fn(uType* __type)
{
    NavigationPageProperty::_pageProperty_ = ::g::Fuse::Properties::CreateHandle();
    NavigationPageProperty::RootedBindings_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[26/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/]));
    NavigationPageProperty::_watchers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[27/*Uno.Collections.Dictionary<Fuse.Visual, Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>>*/]));
}

static void NavigationPageProperty_build(uType* type)
{
    ::TYPES[26] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof());
    ::TYPES[27] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Visual_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof()));
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[28] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[29] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof());
    ::TYPES[30] = ::g::Fuse::Navigation::IPageResourceBinding_typeof();
    ::TYPES[31] = ::g::Fuse::Navigation::IPagePropertyListener_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::_pageProperty_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Visual_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof())), (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::_watchers_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof()), (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::RootedBindings_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetNavigationPage", NULL, (void*)NavigationPageProperty__GetNavigationPage_fn, 0, true, ::g::Fuse::Visual_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("ResetNavigationPage", NULL, (void*)NavigationPageProperty__ResetNavigationPage_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("SetNavigationPage", NULL, (void*)NavigationPageProperty__SetNavigationPage_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Visual_typeof()));
}

uClassType* NavigationPageProperty_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavigationPageProperty", options);
    type->fp_build_ = NavigationPageProperty_build;
    type->fp_cctor_ = NavigationPageProperty__cctor__fn;
    return type;
}

// internal static void AddPageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) :1307
void NavigationPageProperty__AddPageWatcher_fn(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty::AddPageWatcher(where, callback);
}

// public static Fuse.Visual GetNavigationPage(Fuse.Visual n) :1361
void NavigationPageProperty__GetNavigationPage_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual** __retval)
{
    *__retval = NavigationPageProperty::GetNavigationPage(n);
}

// private static Uno.Collections.List<Fuse.Navigation.IPagePropertyListener> GetWatcherList(Fuse.Visual where, [bool optional]) :1293
void NavigationPageProperty__GetWatcherList_fn(::g::Fuse::Visual* where, bool* optional, ::g::Uno::Collections::List** __retval)
{
    *__retval = NavigationPageProperty::GetWatcherList(where, *optional);
}

// internal static void RemovePageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) :1312
void NavigationPageProperty__RemovePageWatcher_fn(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty::RemovePageWatcher(where, callback);
}

// public static void ResetNavigationPage(Fuse.Visual n) :1370
void NavigationPageProperty__ResetNavigationPage_fn(::g::Fuse::Visual* n)
{
    NavigationPageProperty::ResetNavigationPage(n);
}

// public static void SetNavigationPage(Fuse.Visual n, Fuse.Visual page) :1324
void NavigationPageProperty__SetNavigationPage_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual* page)
{
    NavigationPageProperty::SetNavigationPage(n, page);
}

// private static void UpdateListeners(Fuse.Visual node) :1334
void NavigationPageProperty__UpdateListeners_fn(::g::Fuse::Visual* node)
{
    NavigationPageProperty::UpdateListeners(node);
}

uSStrong< ::g::Fuse::PropertyHandle*> NavigationPageProperty::_pageProperty_;
uSStrong< ::g::Uno::Collections::Dictionary*> NavigationPageProperty::_watchers_;
uSStrong< ::g::Uno::Collections::List*> NavigationPageProperty::RootedBindings_;

// internal static void AddPageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) [static] :1307
void NavigationPageProperty::AddPageWatcher(::g::Fuse::Visual* where, uObject* callback)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "AddPageWatcher(Fuse.Visual,Fuse.Navigation.IPagePropertyListener)");
    NavigationPageProperty_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(NavigationPageProperty::GetWatcherList(where, false)), callback);
}

// public static Fuse.Visual GetNavigationPage(Fuse.Visual n) [static] :1361
::g::Fuse::Visual* NavigationPageProperty::GetNavigationPage(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "GetNavigationPage(Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(NavigationPageProperty::_pageProperty(), &v))
        return uCast< ::g::Fuse::Visual*>(v, ::TYPES[1/*Fuse.Visual*/]);

    return NULL;
}

// private static Uno.Collections.List<Fuse.Navigation.IPagePropertyListener> GetWatcherList(Fuse.Visual where, [bool optional]) [static] :1293
::g::Uno::Collections::List* NavigationPageProperty::GetWatcherList(::g::Fuse::Visual* where, bool optional)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "GetWatcherList(Fuse.Visual,[bool])");
    NavigationPageProperty_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* o;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NavigationPageProperty::_watchers()), where, (void**)(&o), &ret2), ret2))
        return o;

    if (optional)
        return NULL;

    ::g::Uno::Collections::List* q = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[28/*Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>*/]);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NavigationPageProperty::_watchers()), where, q);
    return q;
}

// internal static void RemovePageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) [static] :1312
void NavigationPageProperty::RemovePageWatcher(::g::Fuse::Visual* where, uObject* callback)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "RemovePageWatcher(Fuse.Visual,Fuse.Navigation.IPagePropertyListener)");
    NavigationPageProperty_typeof()->Init();
    bool ret3;
    bool ret4;
    ::g::Uno::Collections::List* list = NavigationPageProperty::GetWatcherList(where, true);

    if (list == NULL)
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(list), callback, &ret3);

    if (list->Count() == 0)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NavigationPageProperty::_watchers()), where, &ret4);
}

// public static void ResetNavigationPage(Fuse.Visual n) [static] :1370
void NavigationPageProperty::ResetNavigationPage(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "ResetNavigationPage(Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(NavigationPageProperty::_pageProperty());
    NavigationPageProperty::UpdateListeners(n);
}

// public static void SetNavigationPage(Fuse.Visual n, Fuse.Visual page) [static] :1324
void NavigationPageProperty::SetNavigationPage(::g::Fuse::Visual* n, ::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "SetNavigationPage(Fuse.Visual,Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    ::g::Fuse::Visual* old = NavigationPageProperty::GetNavigationPage(n);

    if (old == page)
        return;

    uPtr(uPtr(n)->Properties())->Set(NavigationPageProperty::_pageProperty(), page);
    NavigationPageProperty::UpdateListeners(n);
}

// private static void UpdateListeners(Fuse.Visual node) [static] :1334
void NavigationPageProperty::UpdateListeners(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "UpdateListeners(Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret5;
    uObject* ret6;
    uObject* ret7;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(NavigationPageProperty::RootedBindings()), &ret5), ret5); enum1.MoveNext(::TYPES[29/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]); )
    {
        uObject* binding = enum1.Current(::TYPES[29/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]);
        ::g::Fuse::Navigation::IPageResourceBinding::UpdateSource(uInterface(uPtr(binding), ::TYPES[30/*Fuse.Navigation.IPageResourceBinding*/]));
    }

    while (node != NULL)
    {
        ::g::Uno::Collections::List* list = NavigationPageProperty::GetWatcherList(node, true);

        if (list != NULL)
        {
            ::g::Uno::Collections::List* dup = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[28/*Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>*/]);

            for (int i = 0; i < uPtr(list)->Count(); ++i)
                ::g::Uno::Collections::List__Add_fn(dup, (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret6), ret6));

            for (int i1 = 0; i1 < dup->Count(); ++i1)
                ::g::Fuse::Navigation::IPagePropertyListener::PageChanged(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(dup, uCRef<int>(i1), &ret7), ret7)), ::TYPES[31/*Fuse.Navigation.IPagePropertyListener*/]), node);
        }

        node = uPtr(node)->Parent();
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class NavigationPageProxy :997
// {
static void NavigationPageProxy_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Got an undesired ready event");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[18] = uString::Const("OnPageRootingCompleted");
    ::STRINGS[19] = uString::Const("Attempting rooting to null source");
    ::STRINGS[20] = uString::Const("Rooted");
    ::STRINGS[21] = uString::Const("Something went wrong locating a Navigator");
    ::TYPES[2] = uObject_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[31] = ::g::Fuse::Navigation::IPagePropertyListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::IPagePropertyListener_typeof(), offsetof(NavigationPageProxy_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _navigation), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _pageBind), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _ready), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _source), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _unready), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _waitRootingCompleted), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _Page), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Navigation", NULL, (void*)NavigationPageProxy__get_Navigation_fn, 0, false, ::g::Fuse::Navigation::INavigation_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NavigationPageProxy__New1_fn, 0, true, NavigationPageProxy_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Uno::Action_typeof()),
        new uFunction("get_Page", NULL, (void*)NavigationPageProxy__get_Page_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("Rooted", NULL, (void*)NavigationPageProxy__Rooted_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Unrooted", NULL, (void*)NavigationPageProxy__Unrooted_fn, 0, false, uVoid_typeof(), 0));
}

NavigationPageProxy_type* NavigationPageProxy_typeof()
{
    static uSStrong<NavigationPageProxy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NavigationPageProxy);
    options.TypeSize = sizeof(NavigationPageProxy_type);
    type = (NavigationPageProxy_type*)uClassType::New("Fuse.Navigation.NavigationPageProxy", options);
    type->fp_build_ = NavigationPageProxy_build;
    type->interface0.fp_PageChanged = (void(*)(uObject*, ::g::Fuse::Visual*))NavigationPageProxy__FuseNavigationIPagePropertyListenerPageChanged_fn;
    return type;
}

// public NavigationPageProxy(Uno.Action ready, Uno.Action unready) :1013
void NavigationPageProxy__ctor__fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready)
{
    __this->ctor_(ready, unready);
}

// private void Fuse.Navigation.IPagePropertyListener.PageChanged(Fuse.Visual n) :1091
void NavigationPageProxy__FuseNavigationIPagePropertyListenerPageChanged_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Fuse.Navigation.IPagePropertyListener.PageChanged(Fuse.Visual)");
    ::g::Fuse::Visual* page = ::g::Fuse::Navigation::Navigation::TryFindPage(__this->_source);

    if (page != __this->Page())
    {
        ::g::Fuse::Visual* source = __this->_source;
        __this->Unrooted();
        __this->Rooted(source);
    }
}

// public Fuse.Navigation.INavigation get_Navigation() :1006
void NavigationPageProxy__get_Navigation_fn(NavigationPageProxy* __this, uObject** __retval)
{
    *__retval = __this->Navigation();
}

// public NavigationPageProxy New(Uno.Action ready, Uno.Action unready) :1013
void NavigationPageProxy__New1_fn(uDelegate* ready, uDelegate* unready, NavigationPageProxy** __retval)
{
    *__retval = NavigationPageProxy::New1(ready, unready);
}

// private void OnPageRootingCompleted() :1054
void NavigationPageProxy__OnPageRootingCompleted_fn(NavigationPageProxy* __this)
{
    __this->OnPageRootingCompleted();
}

// public generated Fuse.Visual get_Page() :1003
void NavigationPageProxy__get_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Page();
}

// private generated void set_Page(Fuse.Visual value) :1003
void NavigationPageProxy__set_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* value)
{
    __this->Page(value);
}

// public void Rooted(Fuse.Visual source) :1019
void NavigationPageProxy__Rooted_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source)
{
    __this->Rooted(source);
}

// public void Unrooted() :1068
void NavigationPageProxy__Unrooted_fn(NavigationPageProxy* __this)
{
    __this->Unrooted();
}

// public NavigationPageProxy(Uno.Action ready, Uno.Action unready) [instance] :1013
void NavigationPageProxy::ctor_(uDelegate* ready, uDelegate* unready)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", ".ctor(Uno.Action,Uno.Action)");
    _ready = ready;
    _unready = unready;
}

// public Fuse.Navigation.INavigation get_Navigation() [instance] :1006
uObject* NavigationPageProxy::Navigation()
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "get_Navigation()");
    return _navigation;
}

// private void OnPageRootingCompleted() [instance] :1054
void NavigationPageProxy::OnPageRootingCompleted()
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "OnPageRootingCompleted()");

    if ((!_waitRootingCompleted || (Page() == NULL)) || (_source == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[17/*"Got an unde...*/], this, ::STRINGS[1/*"/usr/local/...*/], 1058, ::STRINGS[18/*"OnPageRooti...*/]);
        return;
    }

    uPtr(Page())->remove_RootingCompleted(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
    _waitRootingCompleted = false;
    Rooted(_source);
}

// public generated Fuse.Visual get_Page() [instance] :1003
::g::Fuse::Visual* NavigationPageProxy::Page()
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "get_Page()");
    return _Page;
}

// private generated void set_Page(Fuse.Visual value) [instance] :1003
void NavigationPageProxy::Page(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "set_Page(Fuse.Visual)");
    _Page = value;
}

// public void Rooted(Fuse.Visual source) [instance] :1019
void NavigationPageProxy::Rooted(::g::Fuse::Visual* source)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Rooted(Fuse.Visual)");
    _source = source;

    if (_source == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[19/*"Attempting ...*/], this, ::STRINGS[1/*"/usr/local/...*/], 1024, ::STRINGS[20/*"Rooted"*/]);
        return;
    }

    Page(::g::Fuse::Navigation::Navigation::TryFindPage1(_source, &_navigation, &_pageBind));

    if (Page() == NULL)
        return;

    if (!uPtr(Page())->IsRootingStarted())
    {
        uPtr(Page())->add_RootingCompleted(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
        _waitRootingCompleted = true;
        _navigation = NULL;
        _pageBind = NULL;
        return;
    }

    if (_navigation == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[21/*"Something w...*/], this, ::STRINGS[1/*"/usr/local/...*/], 1045, ::STRINGS[20/*"Rooted"*/]);
        return;
    }

    if (_pageBind != NULL)
        ::g::Fuse::Navigation::NavigationPageProperty::AddPageWatcher(_pageBind, (uObject*)this);

    uPtr(_ready)->InvokeVoid();
}

// public void Unrooted() [instance] :1068
void NavigationPageProxy::Unrooted()
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Unrooted()");

    if (Page() != NULL)
    {
        if (_navigation != NULL)
            uPtr(_unready)->InvokeVoid();

        if (_waitRootingCompleted)
        {
            uPtr(Page())->remove_RootingCompleted(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
            _waitRootingCompleted = false;
        }
    }

    if (_pageBind != NULL)
        ::g::Fuse::Navigation::NavigationPageProperty::RemovePageWatcher(_pageBind, (uObject*)this);

    Page(NULL);
    _navigation = NULL;
    _source = NULL;
}

// public NavigationPageProxy New(Uno.Action ready, Uno.Action unready) [static] :1013
NavigationPageProxy* NavigationPageProxy::New1(uDelegate* ready, uDelegate* unready)
{
    NavigationPageProxy* obj1 = (NavigationPageProxy*)uNew(NavigationPageProxy_typeof());
    obj1->ctor_(ready, unready);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public struct NavigationPageState :453
// {
static void NavigationPageState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageState, Progress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageState, PreviousProgress), 0);
    type->Reflection.SetFields(2,
        new uField("PreviousProgress", 1),
        new uField("Progress", 0));
}

uStructType* NavigationPageState_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(NavigationPageState);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Navigation.NavigationPageState", options);
    type->fp_build_ = NavigationPageState_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal enum NavigationState :767
uEnumType* NavigationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Seek", 1LL,
        "Transition", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal sealed class NavigationStateArgs :773
// {
static void NavigationStateArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationState_typeof(), offsetof(::g::Fuse::Navigation::NavigationStateArgs, _State), 0);
}

uType* NavigationStateArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NavigationStateArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationStateArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_build_ = NavigationStateArgs_build;
    type->fp_ctor_ = (void*)NavigationStateArgs__New2_fn;
    return type;
}

// public generated NavigationStateArgs() :773
void NavigationStateArgs__ctor_1_fn(NavigationStateArgs* __this)
{
    __this->ctor_1();
}

// public generated NavigationStateArgs New() :773
void NavigationStateArgs__New2_fn(NavigationStateArgs** __retval)
{
    *__retval = NavigationStateArgs::New2();
}

// public generated Fuse.Navigation.NavigationState get_State() :775
void NavigationStateArgs__get_State_fn(NavigationStateArgs* __this, int* __retval)
{
    *__retval = __this->State();
}

// public generated void set_State(Fuse.Navigation.NavigationState value) :775
void NavigationStateArgs__set_State_fn(NavigationStateArgs* __this, int* value)
{
    __this->State(*value);
}

// public generated NavigationStateArgs() [instance] :773
void NavigationStateArgs::ctor_1()
{
    uStackFrame __("Fuse.Navigation.NavigationStateArgs", ".ctor()");
    ctor_();
}

// public generated Fuse.Navigation.NavigationState get_State() [instance] :775
int NavigationStateArgs::State()
{
    uStackFrame __("Fuse.Navigation.NavigationStateArgs", "get_State()");
    return _State;
}

// public generated void set_State(Fuse.Navigation.NavigationState value) [instance] :775
void NavigationStateArgs::State(int value)
{
    uStackFrame __("Fuse.Navigation.NavigationStateArgs", "set_State(Fuse.Navigation.NavigationState)");
    _State = value;
}

// public generated NavigationStateArgs New() [static] :773
NavigationStateArgs* NavigationStateArgs::New2()
{
    NavigationStateArgs* obj1 = (NavigationStateArgs*)uNew(NavigationStateArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal delegate void NavigationStateHandler(object page, Fuse.Navigation.NavigationStateArgs args) :778
uDelegateType* NavigationStateHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationStateHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationStateArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal enum StructuredNavigation.NavigationStructure :1862
uEnumType* StructuredNavigation__NavigationStructure_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.StructuredNavigation.NavigationStructure", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Linear", 0LL,
        "Hierarchical", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public abstract class NavigationTriggerAction :2790
// {
static void NavigationTriggerAction_build(uType* type)
{
    ::STRINGS[22] = uString::Const("No navigation context was found");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = uObject_typeof();
    type->SetFields(8,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::NavigationTriggerAction, _NavigationContext), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_NavigationContext", NULL, (void*)NavigationTriggerAction__get_NavigationContext_fn, 0, false, ::g::Fuse::Navigation::INavigation_typeof(), 0),
        new uFunction("set_NavigationContext", NULL, (void*)NavigationTriggerAction__set_NavigationContext_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::INavigation_typeof()));
}

NavigationTriggerAction_type* NavigationTriggerAction_typeof()
{
    static uSStrong<NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(NavigationTriggerAction);
    options.TypeSize = sizeof(NavigationTriggerAction_type);
    type = (NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigationTriggerAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = NavigationTriggerAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))NavigationTriggerAction__Perform_fn;
    return type;
}

// protected generated NavigationTriggerAction() :2790
void NavigationTriggerAction__ctor_2_fn(NavigationTriggerAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() :2792
void NavigationTriggerAction__get_NavigationContext_fn(NavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) :2792
void NavigationTriggerAction__set_NavigationContext_fn(NavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :2794
void NavigationTriggerAction__Perform_fn(NavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.NavigationTriggerAction", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    uObject* ind1 = __this->NavigationContext();
    uObject* ctx = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFind(v);

    if (ctx == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[22/*"No navigati...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 2802, ::STRINGS[2/*"Perform"*/]);
        return;
    }

    __this->Perform1(ctx, n);
}

// protected generated NavigationTriggerAction() [instance] :2790
void NavigationTriggerAction::ctor_2()
{
    uStackFrame __("Fuse.Navigation.NavigationTriggerAction", ".ctor()");
    ctor_1();
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() [instance] :2792
uObject* NavigationTriggerAction::NavigationContext()
{
    uStackFrame __("Fuse.Navigation.NavigationTriggerAction", "get_NavigationContext()");
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) [instance] :2792
void NavigationTriggerAction::NavigationContext(uObject* value)
{
    uStackFrame __("Fuse.Navigation.NavigationTriggerAction", "set_NavigationContext(Fuse.Navigation.INavigation)");
    _NavigationContext = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal static class NavTriggerUtil :548
// {
static void NavTriggerUtil_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Int_typeof();
}

uClassType* NavTriggerUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavTriggerUtil", options);
    type->fp_build_ = NavTriggerUtil_build;
    return type;
}

// public static bool CrossesZero(double a, double b) :550
void NavTriggerUtil__CrossesZero_fn(double* a, double* b, bool* __retval)
{
    *__retval = NavTriggerUtil::CrossesZero(*a, *b);
}

// public static Fuse.Animations.AnimationVariant Opposite(Fuse.Animations.AnimationVariant v) :556
void NavTriggerUtil__Opposite_fn(int* v, int* __retval)
{
    *__retval = NavTriggerUtil::Opposite(*v);
}

// public static bool CrossesZero(double a, double b) [static] :550
bool NavTriggerUtil::CrossesZero(double a, double b)
{
    uStackFrame __("Fuse.Navigation.NavTriggerUtil", "CrossesZero(double,double)");
    return ((a < 0.0) && (b > 0.0)) || ((a > 0.0) && (b < 0.0));
}

// public static Fuse.Animations.AnimationVariant Opposite(Fuse.Animations.AnimationVariant v) [static] :556
int NavTriggerUtil::Opposite(int v)
{
    uStackFrame __("Fuse.Navigation.NavTriggerUtil", "Opposite(Fuse.Animations.AnimationVariant)");
    return (v == 0) ? 1 : 0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public enum OutletType :490
uEnumType* OutletType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.OutletType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Outlet", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class VisualNavigation.PageData :2987
// {
static void VisualNavigation__PageData_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, Index), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, PreviousProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, Progress), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, _Visual), 0);
    type->Reflection.SetFields(3,
        new uField("Index", 0),
        new uField("PreviousProgress", 1),
        new uField("Progress", 2));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)VisualNavigation__PageData__New1_fn, 0, true, VisualNavigation__PageData_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Visual", NULL, (void*)VisualNavigation__PageData__get_Visual_fn, 0, false, ::g::Fuse::Visual_typeof(), 0));
}

uType* VisualNavigation__PageData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(VisualNavigation__PageData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.VisualNavigation.PageData", options);
    type->fp_build_ = VisualNavigation__PageData_build;
    return type;
}

// public PageData(Fuse.Visual visual) :2995
void VisualNavigation__PageData__ctor__fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_(visual);
}

// public PageData New(Fuse.Visual visual) :2995
void VisualNavigation__PageData__New1_fn(::g::Fuse::Visual* visual, VisualNavigation__PageData** __retval)
{
    *__retval = VisualNavigation__PageData::New1(visual);
}

// public generated Fuse.Visual get_Visual() :2989
void VisualNavigation__PageData__get_Visual_fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :2989
void VisualNavigation__PageData__set_Visual_fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public PageData(Fuse.Visual visual) [instance] :2995
void VisualNavigation__PageData::ctor_(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation.PageData", ".ctor(Fuse.Visual)");
    Visual(visual);
}

// public generated Fuse.Visual get_Visual() [instance] :2989
::g::Fuse::Visual* VisualNavigation__PageData::Visual()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation.PageData", "get_Visual()");
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :2989
void VisualNavigation__PageData::Visual(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation.PageData", "set_Visual(Fuse.Visual)");
    _Visual = value;
}

// public PageData New(Fuse.Visual visual) [static] :2995
VisualNavigation__PageData* VisualNavigation__PageData::New1(::g::Fuse::Visual* visual)
{
    VisualNavigation__PageData* obj1 = (VisualNavigation__PageData*)uNew(VisualNavigation__PageData_typeof());
    obj1->ctor_(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class PageResourceBinding<T> :1124
// {
static void PageResourceBinding_build(uType* type)
{
    ::STRINGS[23] = uString::Const("target");
    ::STRINGS[24] = uString::Const("Visual");
    ::STRINGS[25] = uString::Const("Node");
    ::TYPES[32] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[30] = ::g::Fuse::Navigation::IPageResourceBinding_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[33] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(PageResourceBinding_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PageResourceBinding_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(PageResourceBinding_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(PageResourceBinding_type, interface3),
        ::g::Fuse::Navigation::IPageResourceBinding_typeof(), offsetof(PageResourceBinding_type, interface4));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _allowNull), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _currentPage), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _hasDefault), 0,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _nav), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _Key), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Navigation::PageResourceBinding, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_AllowNull", NULL, (void*)PageResourceBinding__get_AllowNull_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowNull", NULL, (void*)PageResourceBinding__set_AllowNull_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Default", NULL, (void*)PageResourceBinding__get_Default_fn, 0, false, type->T(0), 0),
        new uFunction("set_Default", NULL, (void*)PageResourceBinding__set_Default_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Key", NULL, (void*)PageResourceBinding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", type, (void*)PageResourceBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)PageResourceBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), 0));
}

PageResourceBinding_type* PageResourceBinding_typeof()
{
    static uSStrong<PageResourceBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(PageResourceBinding);
    options.TypeSize = sizeof(PageResourceBinding_type);
    type = (PageResourceBinding_type*)uClassType::New("Fuse.Navigation.PageResourceBinding`1", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = PageResourceBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageResourceBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageResourceBinding__OnUnrooted_fn;
    type->interface4.fp_UpdateSource = (void(*)(uObject*))PageResourceBinding__FuseNavigationIPageResourceBindingUpdateSource_fn;
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

// public PageResourceBinding(Uno.UX.Property<T> target, string key) :1156
void PageResourceBinding__ctor_3_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_3(target, key);
}

// private bool Acceptor(object obj) :1273
void PageResourceBinding__Acceptor_fn(PageResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public bool get_AllowNull() :1147
void PageResourceBinding__get_AllowNull_fn(PageResourceBinding* __this, bool* __retval)
{
    *__retval = __this->AllowNull();
}

// public void set_AllowNull(bool value) :1148
void PageResourceBinding__set_AllowNull_fn(PageResourceBinding* __this, bool* value)
{
    __this->AllowNull(*value);
}

// public T get_Default() :1136
void PageResourceBinding__get_Default_fn(PageResourceBinding* __this, uTRef __retval)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "get_Default()");
    return __retval.Store(__this->_default()), void();
}

// public void set_Default(T value) :1137
void PageResourceBinding__set_Default_fn(PageResourceBinding* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "set_Default(T)");
    __this->_default() = value;
    __this->_hasDefault = true;
}

// private void Fuse.Navigation.IPageResourceBinding.UpdateSource() :1195
void PageResourceBinding__FuseNavigationIPageResourceBindingUpdateSource_fn(PageResourceBinding* __this)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "Fuse.Navigation.IPageResourceBinding.UpdateSource()");
    __this->UpdateSource();
}

// private void GotoPage(Fuse.Visual page) :1243
void PageResourceBinding__GotoPage_fn(PageResourceBinding* __this, ::g::Fuse::Visual* page)
{
    __this->GotoPage(page);
}

// public generated string get_Key() :1130
void PageResourceBinding__get_Key_fn(PageResourceBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :1130
void PageResourceBinding__set_Key_fn(PageResourceBinding* __this, uString* value)
{
    __this->Key(value);
}

// private object get_LocalObject() :1218
void PageResourceBinding__get_LocalObject_fn(PageResourceBinding* __this, uObject** __retval)
{
    *__retval = __this->LocalObject();
}

// public PageResourceBinding New(Uno.UX.Property<T> target, string key) :1156
void PageResourceBinding__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, PageResourceBinding** __retval)
{
    *__retval = PageResourceBinding::New2(__type, target, key);
}

// private void OnChanged() :1252
void PageResourceBinding__OnChanged_fn(PageResourceBinding* __this)
{
    __this->OnChanged();
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) :1238
void PageResourceBinding__OnNavigated_fn(PageResourceBinding* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    __this->OnNavigated(s, args);
}

// protected override sealed void OnRooted() :1166
void PageResourceBinding__OnRooted_fn(PageResourceBinding* __this)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Uno::Collections::List__Add_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)__this);
    __this->UpdateSource();
}

// protected override sealed void OnUnrooted() :1207
void PageResourceBinding__OnUnrooted_fn(PageResourceBinding* __this)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnUnrooted()");
    bool ret2;
    __this->ReleaseCurrent();
    ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)__this, &ret2);
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseCurrent() :1197
void PageResourceBinding__ReleaseCurrent_fn(PageResourceBinding* __this)
{
    __this->ReleaseCurrent();
}

// public generated Uno.UX.Property<T> get_Target() :1127
void PageResourceBinding__get_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :1127
void PageResourceBinding__set_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void UpdateSource() :1175
void PageResourceBinding__UpdateSource_fn(PageResourceBinding* __this)
{
    __this->UpdateSource();
}

// public PageResourceBinding(Uno.UX.Property<T> target, string key) [instance] :1156
void PageResourceBinding::ctor_3(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_2();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[23/*"target"*/]));

    Target(target);
    Key(key);
}

// private bool Acceptor(object obj) [instance] :1273
bool PageResourceBinding::Acceptor(uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "Acceptor(object)");
    return uIs(obj, __types[0]);
}

// public bool get_AllowNull() [instance] :1147
bool PageResourceBinding::AllowNull()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "get_AllowNull()");
    return _allowNull;
}

// public void set_AllowNull(bool value) [instance] :1148
void PageResourceBinding::AllowNull(bool value)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "set_AllowNull(bool)");
    _allowNull = true;
    _hasDefault = true;
}

// private void GotoPage(Fuse.Visual page) [instance] :1243
void PageResourceBinding::GotoPage(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "GotoPage(Fuse.Visual)");

    if (page == _currentPage)
        return;

    _currentPage = page;
    OnChanged();
}

// public generated string get_Key() [instance] :1130
uString* PageResourceBinding::Key()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "get_Key()");
    return _Key;
}

// private generated void set_Key(string value) [instance] :1130
void PageResourceBinding::Key(uString* value)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "set_Key(string)");
    _Key = value;
}

// private object get_LocalObject() [instance] :1218
uObject* PageResourceBinding::LocalObject()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "get_LocalObject()");
    ::g::Fuse::Visual* n = Parent();

    while (n != NULL)
    {
        ::g::Fuse::Visual* page = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(n);

        if (page != NULL)
            return page;

        uObject* navi = ::g::Fuse::Navigation::Navigation::GetLocalNavigation(n);

        if (navi != NULL)
            return navi;

        n = uPtr(n)->ContextParent();
    }

    return NULL;
}

// private void OnChanged() [instance] :1252
void PageResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnChanged()");
    ::g::Fuse::Visual* page = _currentPage;

    if (page != NULL)
    {
        if ((::g::Uno::String::op_Equality(Key(), ::STRINGS[24/*"Visual"*/]) || ::g::Uno::String::op_Equality(Key(), ::STRINGS[25/*"Node"*/])) && uIs(page, __types[0]))
            uPtr(Target())->Set_ex(uUnboxAny(__types[0], page), NULL);
        else
        {
            uObject* resource;

            if (uPtr(page)->TryGetResource(Key(), uDelegate::New(::TYPES[32/*Uno.Predicate<object>*/], (void*)PageResourceBinding__Acceptor_fn, this), &resource))
                uPtr(Target())->Set_ex(uUnboxAny(__types[0], resource), NULL);
            else if (_hasDefault)
                uPtr(Target())->Set_ex(_default(), NULL);
        }
    }
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) [instance] :1238
void PageResourceBinding::OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnNavigated(object,Fuse.Navigation.NavigatedArgs)");
    GotoPage(uPtr(args)->NewVisual());
}

// private void ReleaseCurrent() [instance] :1197
void PageResourceBinding::ReleaseCurrent()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "ReleaseCurrent()");

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_Navigated(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[33/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        _nav = NULL;
    }

    _currentPage = NULL;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :1127
::g::Uno::UX::Property1* PageResourceBinding::Target()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :1127
void PageResourceBinding::Target(::g::Uno::UX::Property1* value)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// private void UpdateSource() [instance] :1175
void PageResourceBinding::UpdateSource()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "UpdateSource()");
    uObject* local = LocalObject();

    if ((local == _nav) || (local == _currentPage))
        return;

    ReleaseCurrent();
    _nav = uAs<uObject*>(local, ::TYPES[0/*Fuse.Navigation.INavigation*/]);
    _currentPage = uAs< ::g::Fuse::Visual*>(local, ::TYPES[1/*Fuse.Visual*/]);

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::add_Navigated(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[33/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        GotoPage(::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/])));
    }
    else
        OnChanged();
}

// public PageResourceBinding New(Uno.UX.Property<T> target, string key) [static] :1156
PageResourceBinding* PageResourceBinding::New2(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    PageResourceBinding* obj1 = (PageResourceBinding*)uNew(__type);
    obj1->ctor_3(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class Route :1782
// {
static void Route_build(uType* type)
{
    ::STRINGS[26] = uString::Const("?");
    ::STRINGS[27] = uString::Const("/");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::Route, Parameter), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::Route, Path), 0,
        Route_typeof(), offsetof(::g::Fuse::Navigation::Route, SubRoute), 0);
    type->Reflection.SetFields(3,
        new uField("Parameter", 0),
        new uField("Path", 1),
        new uField("SubRoute", 2));
    type->Reflection.SetFunctions(2,
        new uFunction("get_Length", NULL, (void*)Route__get_Length_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Route__New1_fn, 0, true, Route_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), Route_typeof()));
}

uType* Route_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Route);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Route", options);
    type->fp_build_ = Route_build;
    return type;
}

// public Route(string path, [string parameter], [Fuse.Navigation.Route subRoute]) :1799
void Route__ctor__fn(Route* __this, uString* path, uString* parameter, Route* subRoute)
{
    __this->ctor_(path, parameter, subRoute);
}

// internal string Format() :1834
void Route__Format_fn(Route* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// public int get_Length() :1809
void Route__get_Length_fn(Route* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public Route New(string path, [string parameter], [Fuse.Navigation.Route subRoute]) :1799
void Route__New1_fn(uString* path, uString* parameter, Route* subRoute, Route** __retval)
{
    *__retval = Route::New1(path, parameter, subRoute);
}

// internal Fuse.Navigation.Route Up() :1822
void Route__Up_fn(Route* __this, Route** __retval)
{
    *__retval = __this->Up();
}

// public Route(string path, [string parameter], [Fuse.Navigation.Route subRoute]) [instance] :1799
void Route::ctor_(uString* path, uString* parameter, Route* subRoute)
{
    uStackFrame __("Fuse.Navigation.Route", ".ctor(string,[string],[Fuse.Navigation.Route])");
    Path = path;
    Parameter = parameter;
    SubRoute = subRoute;
}

// internal string Format() [instance] :1834
uString* Route::Format()
{
    uStackFrame __("Fuse.Navigation.Route", "Format()");
    uString* q = Path;

    if (::g::Uno::String::op_Inequality(Parameter, NULL))
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::STRINGS[26/*"?"*/], Parameter));

    if (SubRoute != NULL)
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::STRINGS[27/*"/"*/], uPtr(SubRoute)->Format()));

    return q;
}

// public int get_Length() [instance] :1809
int Route::Length()
{
    uStackFrame __("Fuse.Navigation.Route", "get_Length()");

    if (SubRoute == NULL)
        return 1;
    else
        return uPtr(SubRoute)->Length() + 1;
}

// internal Fuse.Navigation.Route Up() [instance] :1822
Route* Route::Up()
{
    uStackFrame __("Fuse.Navigation.Route", "Up()");

    if (SubRoute == NULL)
        return this;
    else if (uPtr(SubRoute)->SubRoute == NULL)
        return Route::New1(Path, Parameter, NULL);

    return Route::New1(Path, Parameter, uPtr(SubRoute)->Up());
}

// public Route New(string path, [string parameter], [Fuse.Navigation.Route subRoute]) [static] :1799
Route* Route::New1(uString* path, uString* parameter, Route* subRoute)
{
    Route* obj1 = (Route*)uNew(Route_typeof());
    obj1->ctor_(path, parameter, subRoute);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public partial sealed class Router :1385
// {
// static Router() :1387
static void Router__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(Router_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMethod*>(::TYPES[35/*Fuse.Scripting.ScriptMethod[]*/], 3, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[28/*"goto"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Navigation.Router, object[]>*/], (void*)Router__Goto1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[29/*"push"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Navigation.Router, object[]>*/], (void*)Router__Push1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[30/*"goBack"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Navigation.Router, object[]>*/], (void*)Router__GoBack1_fn), 2)));
}

static void Router_build(uType* type)
{
    ::STRINGS[28] = uString::Const("goto");
    ::STRINGS[29] = uString::Const("push");
    ::STRINGS[30] = uString::Const("goBack");
    ::STRINGS[31] = uString::Const("GoBack takes no parameters");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[32] = uString::Const("GoBack");
    ::STRINGS[33] = uString::Const("Router.goto(): invalid route provided");
    ::STRINGS[34] = uString::Const("Goto");
    ::STRINGS[35] = uString::Const("Cannot pop() - history is empty");
    ::STRINGS[36] = uString::Const("Pop");
    ::STRINGS[37] = uString::Const("Unable to navigate to route: ");
    ::STRINGS[38] = uString::Const("SetRoute");
    ::STRINGS[39] = uString::Const("No router outlet found to handle route: ");
    ::STRINGS[40] = uString::Const("SetRouteImpl");
    ::STRINGS[41] = uString::Const("SubRoute requested but outlet has no active path: ");
    ::TYPES[34] = ::g::Uno::Type_typeof();
    ::TYPES[35] = ::g::Fuse::Scripting::ScriptMethod_typeof()->Array();
    ::TYPES[36] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[37] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(Router_typeof());
    ::TYPES[38] = ::g::Uno::Action2_typeof()->MakeType(Router_typeof(), uObject_typeof()->Array());
    ::TYPES[39] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::Route_typeof());
    ::TYPES[40] = ::g::Fuse::Navigation::IRouterOutlet_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[19] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[41] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[42] = ::g::Uno::Delegate_typeof();
    ::TYPES[43] = ::g::Fuse::Input::KeyPressedHandler_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[44] = ::g::Uno::String_typeof();
    ::TYPES[45] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Router_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Router_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Router_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Router_type, interface3),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(Router_type, interface4));
    type->SetFields(13,
        ::g::Fuse::Navigation::BackButtonAction_typeof(), offsetof(::g::Fuse::Navigation::Router, _backButtonAction), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::Route_typeof()), offsetof(::g::Fuse::Navigation::Router, _history), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::Router, _isMasterRouter), 0,
        ::g::Fuse::Navigation::HistoryChangedHandler_typeof(), offsetof(::g::Fuse::Navigation::Router, HistoryChanged1), 0,
        ::g::Fuse::Navigation::Route_typeof(), (uintptr_t)&::g::Fuse::Navigation::Router::_masterCurrent_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::Route_typeof()), (uintptr_t)&::g::Fuse::Navigation::Router::_masterHistory_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(12,
        new uFunction("get_BackButtonAction", NULL, (void*)Router__get_BackButtonAction_fn, 0, false, ::g::Fuse::Navigation::BackButtonAction_typeof(), 0),
        new uFunction("set_BackButtonAction", NULL, (void*)Router__set_BackButtonAction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::BackButtonAction_typeof()),
        new uFunction("get_CanGoBack", NULL, (void*)Router__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("GetCurrentRoute", NULL, (void*)Router__GetCurrentRoute_fn, 0, false, ::g::Fuse::Navigation::Route_typeof(), 0),
        new uFunction("GoBack", NULL, (void*)Router__GoBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Goto", NULL, (void*)Router__Goto_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::Route_typeof()),
        new uFunction("add_HistoryChanged", NULL, (void*)Router__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, (void*)Router__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("get_IsMasterRouter", NULL, (void*)Router__get_IsMasterRouter_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsMasterRouter", NULL, (void*)Router__set_IsMasterRouter_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Router__New2_fn, 0, true, Router_typeof(), 0),
        new uFunction("Push", NULL, (void*)Router__Push_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::Route_typeof()));
}

Router_type* Router_typeof()
{
    static uSStrong<Router_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Router);
    options.TypeSize = sizeof(Router_type);
    type = (Router_type*)uClassType::New("Fuse.Navigation.Router", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_build_ = Router_build;
    type->fp_ctor_ = (void*)Router__New2_fn;
    type->fp_cctor_ = Router__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Router__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Router__OnUnrooted_fn;
    type->interface4.fp_GoForward = (void(*)(uObject*))Router__FuseNavigationIBaseNavigationGoForward_fn;
    type->interface4.fp_get_CanGoForward = (void(*)(uObject*, bool*))Router__FuseNavigationIBaseNavigationget_CanGoForward_fn;
    type->interface4.fp_GoBack = (void(*)(uObject*))Router__GoBack_fn;
    type->interface4.fp_get_CanGoBack = (void(*)(uObject*, bool*))Router__get_CanGoBack_fn;
    type->interface4.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))Router__add_HistoryChanged_fn;
    type->interface4.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))Router__remove_HistoryChanged_fn;
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

// public generated Router() :1385
void Router__ctor_2_fn(Router* __this)
{
    __this->ctor_2();
}

// public Fuse.Navigation.BackButtonAction get_BackButtonAction() :1547
void Router__get_BackButtonAction_fn(Router* __this, int* __retval)
{
    *__retval = __this->BackButtonAction();
}

// public void set_BackButtonAction(Fuse.Navigation.BackButtonAction value) :1548
void Router__set_BackButtonAction_fn(Router* __this, int* value)
{
    __this->BackButtonAction(*value);
}

// public bool get_CanGoBack() :1601
void Router__get_CanGoBack_fn(Router* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// private static Fuse.Navigation.IRouterOutlet FindOutlet(Fuse.Node active) :1734
void Router__FindOutlet_fn(::g::Fuse::Node* active, uObject** __retval)
{
    *__retval = Router::FindOutlet(active);
}

// private bool Fuse.Navigation.IBaseNavigation.get_CanGoForward() :1752
void Router__FuseNavigationIBaseNavigationget_CanGoForward_fn(Router* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.Router", "Fuse.Navigation.IBaseNavigation.get_CanGoForward()");
    return *__retval = false, void();
}

// private void Fuse.Navigation.IBaseNavigation.GoForward() :1751
void Router__FuseNavigationIBaseNavigationGoForward_fn(Router* __this)
{
}

// private Fuse.Navigation.Route GetCurrent(Fuse.Visual active) :1719
void Router__GetCurrent_fn(Router* __this, ::g::Fuse::Visual* active, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetCurrent(active);
}

// public Fuse.Navigation.Route GetCurrentRoute() :1564
void Router__GetCurrentRoute_fn(Router* __this, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetCurrentRoute();
}

// public void GoBack() :1593
void Router__GoBack_fn(Router* __this)
{
    __this->GoBack();
}

// private static void GoBack(Fuse.Navigation.Router r, object[] args) :1440
void Router__GoBack1_fn(Router* r, uArray* args)
{
    Router::GoBack1(r, args);
}

// public void Goto(Fuse.Navigation.Route route) :1570
void Router__Goto_fn(Router* __this, ::g::Fuse::Navigation::Route* route)
{
    __this->Goto(route);
}

// private static void Goto(Fuse.Navigation.Router r, object[] args) :1409
void Router__Goto1_fn(Router* r, uArray* args)
{
    Router::Goto1(r, args);
}

// private void GotoMasterRoute() :1558
void Router__GotoMasterRoute_fn(Router* __this)
{
    __this->GotoMasterRoute();
}

// private void GoUp() :1613
void Router__GoUp_fn(Router* __this)
{
    __this->GoUp();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :1754
void Router__add_HistoryChanged_fn(Router* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :1754
void Router__remove_HistoryChanged_fn(Router* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// public bool get_IsMasterRouter() :1528
void Router__get_IsMasterRouter_fn(Router* __this, bool* __retval)
{
    *__retval = __this->IsMasterRouter();
}

// public void set_IsMasterRouter(bool value) :1529
void Router__set_IsMasterRouter_fn(Router* __this, bool* value)
{
    __this->IsMasterRouter(*value);
}

// public generated Router New() :1385
void Router__New2_fn(Router** __retval)
{
    *__retval = Router::New2();
}

// private void OnHistoryChanged(Fuse.Navigation.Route current) :1755
void Router__OnHistoryChanged_fn(Router* __this, ::g::Fuse::Navigation::Route* current)
{
    __this->OnHistoryChanged(current);
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) :1532
void Router__OnKeyPressed_fn(Router* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    __this->OnKeyPressed(sender, args);
}

// protected override sealed void OnRooted() :1498
void Router__OnRooted_fn(Router* __this)
{
    uStackFrame __("Fuse.Navigation.Router", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->_history)->Clear();
    ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[43/*Fuse.Input.KeyPressedHandler*/], (void*)Router__OnKeyPressed_fn, __this));

    if (__this->IsMasterRouter())
    {
        if (Router::_masterHistory() != NULL)
            __this->_history = Router::_masterHistory();
        else
            Router::_masterHistory() = __this->_history;

        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)Router__GotoMasterRoute_fn, __this), -1, 0);
    }
}

// protected override sealed void OnUnrooted() :1516
void Router__OnUnrooted_fn(Router* __this)
{
    uStackFrame __("Fuse.Navigation.Router", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[43/*Fuse.Input.KeyPressedHandler*/], (void*)Router__OnKeyPressed_fn, __this));
}

// private void OnUpFromRoot() :1628
void Router__OnUpFromRoot_fn(Router* __this)
{
    __this->OnUpFromRoot();
}

// private static Fuse.Navigation.Route ParseRoute(object[] args, [int pos]) :1450
void Router__ParseRoute_fn(uArray* args, int* pos, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = Router::ParseRoute(args, *pos);
}

// private void Pop() :1634
void Router__Pop_fn(Router* __this)
{
    __this->Pop();
}

// public void Push(Fuse.Navigation.Route route) :1578
void Router__Push_fn(Router* __this, ::g::Fuse::Navigation::Route* route)
{
    __this->Push(route);
}

// private static void Push(Fuse.Navigation.Router r, object[] args) :1428
void Router__Push1_fn(Router* r, uArray* args)
{
    Router::Push1(r, args);
}

// private Fuse.Navigation.Route SetRoute(Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, [bool userRequest]) :1650
void Router__SetRoute_fn(Router* __this, ::g::Fuse::Navigation::Route* r, int* gotoMode, int* operation, bool* userRequest, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->SetRoute(r, *gotoMode, *operation, *userRequest);
}

// private Fuse.Navigation.Route SetRouteImpl(Fuse.Visual root, Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation) :1673
void Router__SetRouteImpl_fn(Router* __this, ::g::Fuse::Visual* root, ::g::Fuse::Navigation::Route* r, int* gotoMode, int* operation, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->SetRouteImpl(root, r, *gotoMode, *operation);
}

uSStrong< ::g::Fuse::Navigation::Route*> Router::_masterCurrent_;
uSStrong< ::g::Uno::Collections::List*> Router::_masterHistory_;

// public generated Router() [instance] :1385
void Router::ctor_2()
{
    uStackFrame __("Fuse.Navigation.Router", ".ctor()");
    _isMasterRouter = true;
    _history = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[39/*Uno.Collections.List<Fuse.Navigation.Route>*/]));
    ctor_1();
}

// public Fuse.Navigation.BackButtonAction get_BackButtonAction() [instance] :1547
int Router::BackButtonAction()
{
    uStackFrame __("Fuse.Navigation.Router", "get_BackButtonAction()");
    return _backButtonAction;
}

// public void set_BackButtonAction(Fuse.Navigation.BackButtonAction value) [instance] :1548
void Router::BackButtonAction(int value)
{
    uStackFrame __("Fuse.Navigation.Router", "set_BackButtonAction(Fuse.Navigation.BackButtonAction)");
    _backButtonAction = value;
}

// public bool get_CanGoBack() [instance] :1601
bool Router::CanGoBack()
{
    uStackFrame __("Fuse.Navigation.Router", "get_CanGoBack()");
    return uPtr(_history)->Count() > 0;
}

// private Fuse.Navigation.Route GetCurrent(Fuse.Visual active) [instance] :1719
::g::Fuse::Navigation::Route* Router::GetCurrent(::g::Fuse::Visual* active)
{
    uStackFrame __("Fuse.Navigation.Router", "GetCurrent(Fuse.Visual)");

    if (active == NULL)
        return NULL;

    uObject* outlet = Router::FindOutlet(active);

    if (outlet == NULL)
        return NULL;

    uString* opath;
    uString* oparameter;
    ::g::Fuse::Navigation::IRouterOutlet::GetCurrent(uInterface(uPtr(outlet), ::TYPES[40/*Fuse.Navigation.IRouterOutlet*/]), &opath, &oparameter, &active);
    return ::g::Fuse::Navigation::Route::New1(opath, oparameter, GetCurrent(active));
}

// public Fuse.Navigation.Route GetCurrentRoute() [instance] :1564
::g::Fuse::Navigation::Route* Router::GetCurrentRoute()
{
    uStackFrame __("Fuse.Navigation.Router", "GetCurrentRoute()");
    return GetCurrent(Parent());
}

// public void GoBack() [instance] :1593
void Router::GoBack()
{
    uStackFrame __("Fuse.Navigation.Router", "GoBack()");

    if (uPtr(_history)->Count() > 0)
        Pop();
    else
        GoUp();
}

// public void Goto(Fuse.Navigation.Route route) [instance] :1570
void Router::Goto(::g::Fuse::Navigation::Route* route)
{
    uStackFrame __("Fuse.Navigation.Router", "Goto(Fuse.Navigation.Route)");
    uPtr(_history)->Clear();
    ::g::Fuse::Navigation::Route* c = SetRoute(route, 0, 0, true);
    OnHistoryChanged(c);
}

// private void GotoMasterRoute() [instance] :1558
void Router::GotoMasterRoute()
{
    uStackFrame __("Fuse.Navigation.Router", "GotoMasterRoute()");

    if (Router::_masterCurrent() != NULL)
        SetRoute(Router::_masterCurrent(), 2, 0, false);
}

// private void GoUp() [instance] :1613
void Router::GoUp()
{
    uStackFrame __("Fuse.Navigation.Router", "GoUp()");
    ::g::Fuse::Navigation::Route* cur = GetCurrentRoute();
    ::g::Fuse::Navigation::Route* up = uPtr(cur)->Up();

    if (up == cur)
        OnUpFromRoot();
    else
    {
        ::g::Fuse::Navigation::Route* c = SetRoute(up, 0, 2, true);
        OnHistoryChanged(c);
    }
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :1754
void Router::add_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.Router", "add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[45/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :1754
void Router::remove_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.Router", "remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[45/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public bool get_IsMasterRouter() [instance] :1528
bool Router::IsMasterRouter()
{
    uStackFrame __("Fuse.Navigation.Router", "get_IsMasterRouter()");
    return _isMasterRouter;
}

// public void set_IsMasterRouter(bool value) [instance] :1529
void Router::IsMasterRouter(bool value)
{
    uStackFrame __("Fuse.Navigation.Router", "set_IsMasterRouter(bool)");
    _isMasterRouter = value;
}

// private void OnHistoryChanged(Fuse.Navigation.Route current) [instance] :1755
void Router::OnHistoryChanged(::g::Fuse::Navigation::Route* current)
{
    uStackFrame __("Fuse.Navigation.Router", "OnHistoryChanged(Fuse.Navigation.Route)");

    if (current == NULL)
        current = GetCurrentRoute();

    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);

    if (IsMasterRouter())
        Router::_masterCurrent() = current;
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) [instance] :1532
void Router::OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    uStackFrame __("Fuse.Navigation.Router", "OnKeyPressed(object,Fuse.Input.KeyEventArgs)");

    if (uPtr(args)->Key() == 201)
    {
        if (BackButtonAction() == 0)
            GoBack();
    }
}

// private void OnUpFromRoot() [instance] :1628
void Router::OnUpFromRoot()
{
}

// private void Pop() [instance] :1634
void Router::Pop()
{
    uStackFrame __("Fuse.Navigation.Router", "Pop()");
    ::g::Fuse::Navigation::Route* ret3;

    if (uPtr(_history)->Count() == 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[35/*"Cannot pop(...*/], this, ::STRINGS[1/*"/usr/local/...*/], 1638, ::STRINGS[36/*"Pop"*/]);
        return;
    }

    ::g::Fuse::Navigation::Route* route = (::g::Uno::Collections::List__get_Item_fn(uPtr(_history), uCRef<int>(uPtr(_history)->Count() - 1), &ret3), ret3);
    uPtr(_history)->RemoveAt(uPtr(_history)->Count() - 1);
    ::g::Fuse::Navigation::Route* c = SetRoute(route, 0, 2, true);
    OnHistoryChanged(c);
}

// public void Push(Fuse.Navigation.Route route) [instance] :1578
void Router::Push(::g::Fuse::Navigation::Route* route)
{
    uStackFrame __("Fuse.Navigation.Router", "Push(Fuse.Navigation.Route)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_history), GetCurrentRoute());
    ::g::Fuse::Navigation::Route* c = SetRoute(route, 0, 1, true);
    OnHistoryChanged(c);
}

// private Fuse.Navigation.Route SetRoute(Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, [bool userRequest]) [instance] :1650
::g::Fuse::Navigation::Route* Router::SetRoute(::g::Fuse::Navigation::Route* r, int gotoMode, int operation, bool userRequest)
{
    uStackFrame __("Fuse.Navigation.Router", "SetRoute(Fuse.Navigation.Route,Fuse.Navigation.NavigationGotoMode,Fuse.Navigation.RoutingOperation,[bool])");
    ::g::Fuse::Navigation::Route* current = GetCurrentRoute();
    ::g::Fuse::Navigation::Route* outR = SetRouteImpl(Parent(), r, gotoMode, operation);

    if (outR == NULL)
    {
        uString* msg = ::g::Uno::String::op_Addition2(::STRINGS[37/*"Unable to n...*/], uPtr(r)->Format());

        if (userRequest)
            ::g::Fuse::Diagnostics::UserError(msg, this, ::STRINGS[1/*"/usr/local/...*/], 1660, ::STRINGS[38/*"SetRoute"*/]);
        else
            ::g::Fuse::Diagnostics::InternalError(msg, this, ::STRINGS[1/*"/usr/local/...*/], 1662, ::STRINGS[38/*"SetRoute"*/]);

        uPtr(_history)->Clear();
        ::g::Fuse::Navigation::Route* c = SetRouteImpl(Parent(), current, 2, 0);
        OnHistoryChanged(c);
        return NULL;
    }

    return outR;
}

// private Fuse.Navigation.Route SetRouteImpl(Fuse.Visual root, Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation) [instance] :1673
::g::Fuse::Navigation::Route* Router::SetRouteImpl(::g::Fuse::Visual* root, ::g::Fuse::Navigation::Route* r, int gotoMode, int operation)
{
    uStackFrame __("Fuse.Navigation.Router", "SetRouteImpl(Fuse.Visual,Fuse.Navigation.Route,Fuse.Navigation.NavigationGotoMode,Fuse.Navigation.RoutingOperation)");
    uObject* outlet = Router::FindOutlet(root);

    if (outlet == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[39/*"No router o...*/], r), this, ::STRINGS[1/*"/usr/local/...*/], 1679, ::STRINGS[40/*"SetRouteImpl"*/]);
        return NULL;
    }

    int didTransition = ::g::Fuse::Navigation::IRouterOutlet::Goto(uInterface(uPtr(outlet), ::TYPES[40/*Fuse.Navigation.IRouterOutlet*/]), uPtr(r)->Path, uPtr(r)->Parameter, gotoMode, operation);

    if (didTransition == 3)
        return NULL;

    if (didTransition == 2)
        gotoMode = 2;

    ::g::Fuse::Visual* active;
    uString* opath;
    uString* oparameter;
    ::g::Fuse::Navigation::IRouterOutlet::GetCurrent(uInterface(outlet, ::TYPES[40/*Fuse.Navigation.IRouterOutlet*/]), &opath, &oparameter, &active);
    ::g::Fuse::Navigation::Route* outSubRoute = NULL;

    if (r->SubRoute != NULL)
    {
        if (active == NULL)
        {
            ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[41/*"SubRoute re...*/], r), this, ::STRINGS[1/*"/usr/local/...*/], 1701, ::STRINGS[40/*"SetRouteImpl"*/]);
            return NULL;
        }
        else
        {
            outSubRoute = SetRouteImpl(active, uPtr(r)->SubRoute, gotoMode, operation);

            if (outSubRoute == NULL)
                return NULL;
        }
    }
    else
        outSubRoute = GetCurrent(active);

    return ::g::Fuse::Navigation::Route::New1(opath, oparameter, outSubRoute);
}

// private static Fuse.Navigation.IRouterOutlet FindOutlet(Fuse.Node active) [static] :1734
uObject* Router::FindOutlet(::g::Fuse::Node* active)
{
    uStackFrame __("Fuse.Navigation.Router", "FindOutlet(Fuse.Node)");
    Router_typeof()->Init();
    ::g::Fuse::Node* ret2;
    uObject* ro = uAs<uObject*>(active, ::TYPES[40/*Fuse.Navigation.IRouterOutlet*/]);

    if ((ro != NULL) && ((::g::Fuse::Navigation::IRouterOutlet::Type(uInterface(uPtr(ro), ::TYPES[40/*Fuse.Navigation.IRouterOutlet*/])) & 2) == 2))
        return ro;

    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(active, ::TYPES[1/*Fuse.Visual*/]);

    if (v != NULL)

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            ro = Router::FindOutlet((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[19/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2));

            if (ro != NULL)
                return ro;
        }

    return NULL;
}

// private static void GoBack(Fuse.Navigation.Router r, object[] args) [static] :1440
void Router::GoBack1(Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "GoBack(Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[31/*"GoBack take...*/], r, ::STRINGS[1/*"/usr/local/...*/], 1444, ::STRINGS[32/*"GoBack"*/]);
        return;
    }

    uPtr(r)->GoBack();
}

// private static void Goto(Fuse.Navigation.Router r, object[] args) [static] :1409
void Router::Goto1(Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "Goto(Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();
    ::g::Fuse::Navigation::Route* where = Router::ParseRoute(args, 0);

    if (where != NULL)
        uPtr(r)->Goto(where);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[33/*"Router.goto...*/], r, ::STRINGS[1/*"/usr/local/...*/], 1418, ::STRINGS[34/*"Goto"*/]);
}

// public generated Router New() [static] :1385
Router* Router::New2()
{
    Router* obj1 = (Router*)uNew(Router_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Fuse.Navigation.Route ParseRoute(object[] args, [int pos]) [static] :1450
::g::Fuse::Navigation::Route* Router::ParseRoute(uArray* args, int pos)
{
    uStackFrame __("Fuse.Navigation.Router", "ParseRoute(object[],[int])");
    Router_typeof()->Init();

    if (uPtr(args)->Length() <= pos)
        return NULL;

    if (uPtr(args)->Length() <= (pos + 1))
        return ::g::Fuse::Navigation::Route::New1(uAs<uString*>(uPtr(args)->Strong<uObject*>(pos), ::TYPES[44/*string*/]), NULL, NULL);

    uString* path = uAs<uString*>(uPtr(args)->Strong<uObject*>(pos), ::TYPES[44/*string*/]);
    uString* parameter = ::g::Fuse::Scripting::Json::Stringify(args->Strong<uObject*>(pos + 1), true);
    return ::g::Fuse::Navigation::Route::New1(path, parameter, Router::ParseRoute(args, pos + 2));
}

// private static void Push(Fuse.Navigation.Router r, object[] args) [static] :1428
void Router::Push1(Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "Push(Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();
    ::g::Fuse::Navigation::Route* where = Router::ParseRoute(args, 0);
    uPtr(r)->Push(where);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public enum RoutingOperation :482
uEnumType* RoutingOperation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutingOperation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Goto", 0LL,
        "Push", 1LL,
        "Pop", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public enum RoutingResult :502
uEnumType* RoutingResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutingResult", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "NoChange", 0LL,
        "MinorChange", 1LL,
        "Change", 2LL,
        "Invalid", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal enum SnapTo :2392
uEnumType* SnapTo_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SnapTo", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 0LL,
        "Current", 1LL,
        "Backward", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public interfacemodifiers class StructuredNavigation :1860
// {
static void StructuredNavigation_build(uType* type)
{
    ::STRINGS[42] = uString::Const("Attempting to navigate to element with different parent");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[43] = uString::Const("GotoImpl");
    ::STRINGS[44] = uString::Const("Updated called without a region");
    ::STRINGS[45] = uString::Const("OnUpdated");
    ::STRINGS[46] = uString::Const("Seek being called on an unrooted navigation");
    ::STRINGS[47] = uString::Const("Seek");
    ::STRINGS[48] = uString::Const("Use a `NavigationMotion` and the `GotoDuration` property instead of `Navigation.Duration`");
    ::STRINGS[49] = uString::Const("set_Duration");
    ::STRINGS[50] = uString::Const("Use a `NavigationMotion` and the `GotoEasing` property instead of `Navigation.Easing`");
    ::STRINGS[51] = uString::Const("set_Easing");
    ::STRINGS[52] = uString::Const("Motion should not be changed post-rooting");
    ::STRINGS[53] = uString::Const("set_Motion");
    ::TYPES[46] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[47] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[41] = ::g::Fuse::Node_typeof();
    ::TYPES[48] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[49] = ::g::Fuse::Motion::MotionConfig_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(19,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _active), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _hasUpdated), 0,
        ::g::Fuse::Motion::MotionConfig_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _motion), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _prevProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _progress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _queueClearForwardHistory), 0,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _region), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _reuseExistingVisual), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _seekBase), 0,
        StructuredNavigation__NavigationStructure_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _Mode), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Duration", NULL, (void*)StructuredNavigation__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)StructuredNavigation__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Easing", NULL, (void*)StructuredNavigation__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)StructuredNavigation__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("GotoImpl", NULL, (void*)StructuredNavigation__GotoImpl_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("get_Motion", NULL, (void*)StructuredNavigation__get_Motion_fn, 0, false, ::g::Fuse::Motion::MotionConfig_typeof(), 0),
        new uFunction("set_Motion", NULL, (void*)StructuredNavigation__set_Motion_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionConfig_typeof()),
        new uFunction("get_Progress", NULL, (void*)StructuredNavigation__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_SeekRange", NULL, (void*)StructuredNavigation__get_SeekRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0));
}

::g::Fuse::Navigation::VisualNavigation_type* StructuredNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(StructuredNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.StructuredNavigation", options);
    type->SetBase(::g::Fuse::Navigation::VisualNavigation_typeof());
    type->fp_build_ = StructuredNavigation_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))StructuredNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))StructuredNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))StructuredNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))StructuredNavigation__GoBack_fn;
    type->fp_GoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*))StructuredNavigation__GoForward_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))StructuredNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StructuredNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StructuredNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))StructuredNavigation__get_PageProgress_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))StructuredNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))StructuredNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))StructuredNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))StructuredNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))StructuredNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
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

// internal StructuredNavigation(Fuse.Navigation.StructuredNavigation.NavigationStructure mode) :1872
void StructuredNavigation__ctor_4_fn(StructuredNavigation* __this, int* mode)
{
    __this->ctor_4(*mode);
}

// public override sealed Fuse.Visual get_Active() :2203
void StructuredNavigation__get_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Active()");
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :2204
void StructuredNavigation__set_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Active(Fuse.Visual)");
    __this->Goto(value, 0);
}

// private void AnimationDone() :2186
void StructuredNavigation__AnimationDone_fn(StructuredNavigation* __this)
{
    __this->AnimationDone();
}

// private Fuse.Visual get_Back() :2305
void StructuredNavigation__get_Back_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Back();
}

// internal void BeginSeek() :2211
void StructuredNavigation__BeginSeek_fn(StructuredNavigation* __this)
{
    __this->BeginSeek();
}

// public override sealed bool get_CanGoBack() :2111
void StructuredNavigation__get_CanGoBack_fn(StructuredNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_CanGoBack()");
    return *__retval = __this->HasPages() && (__this->_active != __this->Back()), void();
}

// public override sealed bool get_CanGoForward() :2103
void StructuredNavigation__get_CanGoForward_fn(StructuredNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_CanGoForward()");
    return *__retval = __this->HasPages() && (__this->_active != __this->Front()), void();
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) :2085
void StructuredNavigation__ChangeProgress_fn(StructuredNavigation* __this, float* prev, float* next, int* mode)
{
    __this->ChangeProgress(*prev, *next, *mode);
}

// private void CheckNeedUpdate([bool off]) :2021
void StructuredNavigation__CheckNeedUpdate_fn(StructuredNavigation* __this, bool* off)
{
    __this->CheckNeedUpdate(*off);
}

// private int ClampProgress(int progress) :2293
void StructuredNavigation__ClampProgress1_fn(StructuredNavigation* __this, int* progress, int* __retval)
{
    *__retval = __this->ClampProgress1(*progress);
}

// private void ClearForwardHistory() :2275
void StructuredNavigation__ClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->ClearForwardHistory();
}

// public double get_Duration() :2141
void StructuredNavigation__get_Duration_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :2142
void StructuredNavigation__set_Duration_fn(StructuredNavigation* __this, double* value)
{
    __this->Duration(*value);
}

// public Fuse.Animations.Easing get_Easing() :2132
void StructuredNavigation__get_Easing_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :2133
void StructuredNavigation__set_Easing_fn(StructuredNavigation* __this, int* value)
{
    __this->Easing(*value);
}

// internal void EndSeek(Fuse.Navigation.EndSeekArgs args) :2246
void StructuredNavigation__EndSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args)
{
    __this->EndSeek(args);
}

// private Fuse.Visual get_Front() :2310
void StructuredNavigation__get_Front_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Front();
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :2091
void StructuredNavigation__GetPageState_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GetPageState(Fuse.Visual)");
    ::g::Fuse::Navigation::NavigationPageState collection3;
    ::g::Fuse::Navigation::NavigationPageState collection4;
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
        return *__retval = (collection3 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection3.Progress = 0.0f, collection3.PreviousProgress = 0.0f, collection3), void();

    collection4 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection4.Progress = ((float)__this->Progress() - (float)uPtr(pd)->Index);
    collection4.PreviousProgress = (__this->_prevProgress - (float)uPtr(pd)->Index);
    return *__retval = collection4, void();
}

// public override sealed void GoBack() :2123
void StructuredNavigation__GoBack_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GoBack()");

    if (__this->CanGoBack())
        __this->TransitionToChild(__this->Previous(), false, false);
}

// public override sealed void GoForward() :2117
void StructuredNavigation__GoForward_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GoForward()");

    if (__this->CanGoForward())
        __this->TransitionToChild(__this->Next(), false, false);
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :1933
void StructuredNavigation__Goto_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "Goto(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    int mode_ = *mode;

    if (__this->Parent() == NULL)
    {
        __this->_active = element;
        return;
    }

    if (element == __this->_active)
        return;

    __this->GotoImpl(element, mode_);
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :1948
void StructuredNavigation__GotoImpl_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    __this->GotoImpl(element, *mode);
}

// private int get_MaxIndex() :2300
void StructuredNavigation__get_MaxIndex_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->MaxIndex();
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() :1870
void StructuredNavigation__get_Mode_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) :1870
void StructuredNavigation__set_Mode_fn(StructuredNavigation* __this, int* value)
{
    __this->Mode(*value);
}

// public Fuse.Motion.MotionConfig get_Motion() :1881
void StructuredNavigation__get_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.MotionConfig value) :1887
void StructuredNavigation__set_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig* value)
{
    __this->Motion(value);
}

// private Fuse.Visual get_Next() :2320
void StructuredNavigation__get_Next_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Next();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :2149
void StructuredNavigation__OnChildAddedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active != NULL)
        __this->SetProgress((float)__this->GetPageIndex(__this->_active));

    if (__this->_active == NULL)
        __this->_active = v;

    __this->OnHistoryChanged();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :2165
void StructuredNavigation__OnChildRemovedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active == child)
        __this->_active = NULL;

    __this->OnHistoryChanged();
    __this->ChangeProgress((float)__this->Progress(), (float)__this->Progress(), 1);
}

// protected override sealed void OnRooted() :1897
void StructuredNavigation__OnRooted_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnRooted()");
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if (((__this->_active != NULL) && (uPtr(__this->_active)->Parent() != NULL)) && (__this->Parent() != uPtr(__this->_active)->Parent()))
        __this->_active = NULL;

    if ((__this->PageCount() > 0) && (__this->_active == NULL))
        __this->_active = __this->GetPage(0);

    if (__this->_active != NULL)
        __this->GotoImpl(__this->_active, 2);

    __this->_region = uPtr(__this->Motion())->AcquireSimulation();
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[48/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__New2(__this->_progress, 0.0f)));
}

// protected override sealed void OnUnrooted() :1915
void StructuredNavigation__OnUnrooted_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnUnrooted()");
    ::g::Uno::Float2 ret10;

    if (__this->_region != NULL)
    {
        __this->_progress = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[48/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret10), ret10).X;
        __this->_region = NULL;
        uPtr(__this->Motion())->ReleaseSimulation();
    }

    __this->CheckNeedUpdate(true);
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// private void OnUpdated() :2040
void StructuredNavigation__OnUpdated_fn(StructuredNavigation* __this)
{
    __this->OnUpdated();
}

// public override sealed double get_PageProgress() :1930
void StructuredNavigation__get_PageProgress_fn(StructuredNavigation* __this, double* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_PageProgress()");
    return *__retval = __this->Progress(), void();
}

// private Fuse.Visual get_Previous() :2315
void StructuredNavigation__get_Previous_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Previous();
}

// public double get_Progress() :2182
void StructuredNavigation__get_Progress_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private void ResetRegionLimits() :2059
void StructuredNavigation__ResetRegionLimits_fn(StructuredNavigation* __this)
{
    __this->ResetRegionLimits();
}

// internal void Seek(Fuse.Navigation.UpdateSeekArgs args) :2232
void StructuredNavigation__Seek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args)
{
    __this->Seek(args);
}

// public float2 get_SeekRange() :2229
void StructuredNavigation__get_SeekRange_fn(StructuredNavigation* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SeekRange();
}

// private void SetProgress(float value) :2065
void StructuredNavigation__SetProgress_fn(StructuredNavigation* __this, float* value)
{
    __this->SetProgress(*value);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) :1992
void StructuredNavigation__TransitionToChild_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, bool* bypass, bool* clamp, bool* __retval)
{
    *__retval = __this->TransitionToChild(element, *bypass, *clamp);
}

// internal StructuredNavigation(Fuse.Navigation.StructuredNavigation.NavigationStructure mode) [instance] :1872
void StructuredNavigation::ctor_4(int mode)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", ".ctor(Fuse.Navigation.StructuredNavigation.NavigationStructure)");
    _reuseExistingVisual = true;
    ctor_3();
    Mode(mode);
}

// private void AnimationDone() [instance] :2186
void StructuredNavigation::AnimationDone()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "AnimationDone()");
    ::g::Fuse::Navigation::NavigationStateArgs* collection5;

    if (_queueClearForwardHistory)
    {
        ClearForwardHistory();
        _queueClearForwardHistory = false;
    }

    OnNavigated(_active);
    OnHistoryChanged();
    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(Parent(), (collection5 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection5)->State(0), 0, collection5));
}

// private Fuse.Visual get_Back() [instance] :2305
::g::Fuse::Visual* StructuredNavigation::Back()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Back()");
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(MaxIndex()) : NULL;
}

// internal void BeginSeek() [instance] :2211
void StructuredNavigation::BeginSeek()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "BeginSeek()");
    ::g::Fuse::Navigation::NavigationStateArgs* collection6;
    _seekBase = (float)Progress();

    if (_region != NULL)
    {
        ResetRegionLimits();
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(_region), ::TYPES[46/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
    }

    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(Parent(), (collection6 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection6)->State(1), 1, collection6));
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) [instance] :2085
void StructuredNavigation::ChangeProgress(float prev, float next, int mode)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "ChangeProgress(float,float,Fuse.Navigation.NavigationMode)");
    _prevProgress = prev;
    OnPageProgressChanged((double)next, (double)prev, mode);
}

// private void CheckNeedUpdate([bool off]) [instance] :2021
void StructuredNavigation::CheckNeedUpdate(bool off)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "CheckNeedUpdate([bool])");
    bool needUpdated = (_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[47/*Fuse.Motion.Simulation.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)StructuredNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        AnimationDone();
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)StructuredNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// private int ClampProgress(int progress) [instance] :2293
int StructuredNavigation::ClampProgress1(int progress)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "ClampProgress(int)");
    return ::g::Uno::Math::Clamp8(progress, 0, MaxIndex());
}

// private void ClearForwardHistory() [instance] :2275
void StructuredNavigation::ClearForwardHistory()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "ClearForwardHistory()");
    bool ret7;

    if (HasPages() && (_active != Front()))
    {
        int target = GetPageIndex(_active);

        for (int i = target - 1; i >= 0; i--)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Node>*/]), GetPage(i), &ret7);
    }

    OnHistoryChanged();
}

// public double get_Duration() [instance] :2141
double StructuredNavigation::Duration()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Duration()");
    return (double)uPtr(Motion())->GotoDuration();
}

// public void set_Duration(double value) [instance] :2142
void StructuredNavigation::Duration(double value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Duration(double)");
    uPtr(Motion())->GotoDuration((float)value);
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[48/*"Use a `Navi...*/], this, ::STRINGS[1/*"/usr/local/...*/], 2145, ::STRINGS[49/*"set_Duration"*/]);
}

// public Fuse.Animations.Easing get_Easing() [instance] :2132
int StructuredNavigation::Easing()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Easing()");
    return uPtr(Motion())->GotoEasing();
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :2133
void StructuredNavigation::Easing(int value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Easing(Fuse.Animations.Easing)");
    uPtr(Motion())->GotoEasing(value);
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[50/*"Use a `Navi...*/], this, ::STRINGS[1/*"/usr/local/...*/], 2136, ::STRINGS[51/*"set_Easing"*/]);
}

// internal void EndSeek(Fuse.Navigation.EndSeekArgs args) [instance] :2246
void StructuredNavigation::EndSeek(::g::Fuse::Navigation::EndSeekArgs* args)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "EndSeek(Fuse.Navigation.EndSeekArgs)");
    ::g::Uno::Float2 ret8;
    int targetIndex = 0;

    switch (uPtr(args)->SnapTo())
    {
        case 0:
        {
            targetIndex = ClampProgress1((int)::g::Uno::Math::Floor(Progress()));
            break;
        }
        case 2:
        {
            targetIndex = ClampProgress1((int)::g::Uno::Math::Ceil(Progress()));
            break;
        }
        case 1:
        {
            double diff = Progress() - ::g::Uno::Math::Floor(Progress());
            targetIndex = ClampProgress1((diff > 0.5) ? (int)::g::Uno::Math::Ceil(Progress()) : (int)::g::Uno::Math::Floor(Progress()));
            break;
        }
    }

    if (_region != NULL)
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[46/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(uPtr(args)->Velocity(), 0.0f));

    if (!TransitionToChild(GetPage(targetIndex), false, true))
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(_region), ::TYPES[46/*Fuse.Motion.Simulation.BoundedRegion2D*/]), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[48/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret8), ret8));
}

// private Fuse.Visual get_Front() [instance] :2310
::g::Fuse::Visual* StructuredNavigation::Front()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Front()");
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(0) : NULL;
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) [instance] :1948
void StructuredNavigation::GotoImpl(::g::Fuse::Visual* element, int mode)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GotoImpl(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    bool ret9;

    if ((uPtr(element)->Parent() != NULL) && (uPtr(element)->Parent() != Parent()))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[42/*"Attempting ...*/], element, ::STRINGS[1/*"/usr/local/...*/], 1953, ::STRINGS[43/*"GotoImpl"*/]);
        _active = NULL;
        return;
    }

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Node>*/]), element, &ret9), ret9))
    {
        if (Mode() == 1)
        {
            ClearForwardHistory();
            ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[19/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(0), element);
        }
        else
            return;
    }
    else if (!_reuseExistingVisual)
    {
        if (Mode() == 1)
        {
            double diff = Progress() - (double)GetPageIndex(_active);
            uPtr(Parent())->BeginRemoveChild(element, NULL);
            SetProgress((float)((double)GetPageIndex(_active) + diff));
            ClearForwardHistory();
            ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[19/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(0), element);
        }
    }

    TransitionToChild(element, (mode & 2) == 2, false);

    if ((mode & 4) == 4)
        _queueClearForwardHistory = true;

    OnHistoryChanged();
}

// private int get_MaxIndex() [instance] :2300
int StructuredNavigation::MaxIndex()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_MaxIndex()");
    return PageCount() - 1;
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() [instance] :1870
int StructuredNavigation::Mode()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Mode()");
    return _Mode;
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) [instance] :1870
void StructuredNavigation::Mode(int value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure)");
    _Mode = value;
}

// public Fuse.Motion.MotionConfig get_Motion() [instance] :1881
::g::Fuse::Motion::MotionConfig* StructuredNavigation::Motion()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Motion()");

    if (_motion == NULL)
        _motion = ::g::Fuse::Motion::NavigationMotion::New2();

    return _motion;
}

// public void set_Motion(Fuse.Motion.MotionConfig value) [instance] :1887
void StructuredNavigation::Motion(::g::Fuse::Motion::MotionConfig* value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Motion(Fuse.Motion.MotionConfig)");
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(::STRINGS[52/*"Motion shou...*/], this, ::STRINGS[1/*"/usr/local/...*/], 1891, ::STRINGS[53/*"set_Motion"*/]);
}

// private Fuse.Visual get_Next() [instance] :2320
::g::Fuse::Visual* StructuredNavigation::Next()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Next()");
    return GetPage(GetPageIndex(_active) - 1);
}

// private void OnUpdated() [instance] :2040
void StructuredNavigation::OnUpdated()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnUpdated()");
    ::g::Uno::Float2 ret11;
    ::g::Uno::Float2 ret12;

    if (_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[44/*"Updated cal...*/], this, ::STRINGS[1/*"/usr/local/...*/], 2044, ::STRINGS[45/*"OnUpdated"*/]);
        return;
    }

    float prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[48/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret11), ret11).X;
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::TYPES[47/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[48/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret12), ret12).X, 2);
    CheckNeedUpdate(true);
}

// private Fuse.Visual get_Previous() [instance] :2315
::g::Fuse::Visual* StructuredNavigation::Previous()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Previous()");
    return GetPage(GetPageIndex(_active) + 1);
}

// public double get_Progress() [instance] :2182
double StructuredNavigation::Progress()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Progress()");
    ::g::Uno::Float2 ret16;
    return (double)((_region == NULL) ? _progress : (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[48/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret16), ret16).X);
}

// private void ResetRegionLimits() [instance] :2059
void StructuredNavigation::ResetRegionLimits()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "ResetRegionLimits()");
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::TYPES[46/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2((float)MaxIndex(), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::TYPES[46/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
}

// internal void Seek(Fuse.Navigation.UpdateSeekArgs args) [instance] :2232
void StructuredNavigation::Seek(::g::Fuse::Navigation::UpdateSeekArgs* args)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "Seek(Fuse.Navigation.UpdateSeekArgs)");
    ::g::Uno::Float2 ret13;

    if (_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[46/*"Seek being ...*/], this, ::STRINGS[1/*"/usr/local/...*/], 2236, ::STRINGS[47/*"Seek"*/]);
        return;
    }

    float prev = (float)Progress();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::TYPES[46/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(uPtr(args)->RelativeDelta(), 0.0f));
    ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[48/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret13), ret13).X, 2);
    CheckNeedUpdate(false);
}

// public float2 get_SeekRange() [instance] :2229
::g::Uno::Float2 StructuredNavigation::SeekRange()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_SeekRange()");
    return ::g::Uno::Float2__New2(-_seekBase, (float)MaxIndex() - _seekBase);
}

// private void SetProgress(float value) [instance] :2065
void StructuredNavigation::SetProgress(float value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "SetProgress(float)");
    ::g::Uno::Float2 ret14;
    ::g::Uno::Float2 ret15;
    float prev;

    if (_region != NULL)
    {
        ResetRegionLimits();
        prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[48/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret14), ret14).X;
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[48/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__New2(value, 0.0f)));
        value = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[48/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret15), ret15).X;
    }
    else
    {
        prev = _progress;
        _progress = value;
    }

    ChangeProgress(prev, value, 1);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) [instance] :1992
bool StructuredNavigation::TransitionToChild(::g::Fuse::Visual* element, bool bypass, bool clamp)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "TransitionToChild(Fuse.Visual,[bool],[bool])");
    ::g::Fuse::Navigation::NavigationStateArgs* collection1;
    ::g::Fuse::Navigation::NavigationStateArgs* collection2;
    float targetProgress = (float)GetPageIndex(element);
    _active = element;

    if (bypass || !IsRootingCompleted())
    {
        SetProgress(targetProgress);
        OnNavigated(element);
        return false;
    }

    if (Progress() == (double)targetProgress)
    {
        ::g::Fuse::Navigation::Navigation::NotifyNavigationState(Parent(), (collection1 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection1)->State(0), 0, collection1));
        return false;
    }

    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(Parent(), (collection2 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection2)->State(2), 2, collection2));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::TYPES[46/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(targetProgress, 0.0f));
    CheckNeedUpdate(false);
    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public enum SwipeDirection :2414
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Right", 0LL,
        "Left", 1LL,
        "Down", 2LL,
        "Up", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class SwipeNavigate :2435
// {
// static SwipeNavigate() :2435
static void SwipeNavigate__cctor_1_fn(uType* __type)
{
    SwipeNavigate::elasticDecay_ = 0.015f;
    SwipeNavigate::elasticScale_ = 0.4f;
}

static void SwipeNavigate_build(uType* type)
{
    ::STRINGS[54] = uString::Const("SwipeNavigate: failed to find suitable Navigation object");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::TYPES[50] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[51] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[52] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[53] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[54] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[55] = ::g::Fuse::Visual_typeof()->MakeMethod(1, ::g::Fuse::Navigation::StructuredNavigation_typeof());
    ::TYPES[8] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _currentCoord), 0,
        ::g::Fuse::Navigation::StructuredNavigation_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _currentNavigation), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _down), 0,
        ::g::Fuse::Navigation::SwipeDirection_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _forwardDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _hasMaxPages), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _horizontalGesture), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _lengthNode), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _maxPages), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _prevDistance), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _startTime), 0,
        ::g::Fuse::Navigation::AllowedNavigationDirections_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _swipeAllow), 0,
        ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Navigation::SwipeNavigate, _velocity), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _verticalGesture), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _VelocityThreshold), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Navigation::SwipeNavigate::elasticDecay_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Navigation::SwipeNavigate::elasticScale_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("get_AllowedDirections", NULL, (void*)SwipeNavigate__get_AllowedDirections_fn, 0, false, ::g::Fuse::Navigation::AllowedNavigationDirections_typeof(), 0),
        new uFunction("set_AllowedDirections", NULL, (void*)SwipeNavigate__set_AllowedDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::AllowedNavigationDirections_typeof()),
        new uFunction("get_ForwardDirection", NULL, (void*)SwipeNavigate__get_ForwardDirection_fn, 0, false, ::g::Fuse::Navigation::SwipeDirection_typeof(), 0),
        new uFunction("set_ForwardDirection", NULL, (void*)SwipeNavigate__set_ForwardDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::SwipeDirection_typeof()),
        new uFunction("get_LengthNode", NULL, (void*)SwipeNavigate__get_LengthNode_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_LengthNode", NULL, (void*)SwipeNavigate__set_LengthNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("get_MaxPages", NULL, (void*)SwipeNavigate__get_MaxPages_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MaxPages", NULL, (void*)SwipeNavigate__set_MaxPages_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)SwipeNavigate__New2_fn, 0, true, SwipeNavigate_typeof(), 0),
        new uFunction("get_SwipeDirection", NULL, (void*)SwipeNavigate__get_SwipeDirection_fn, 0, false, ::g::Fuse::Navigation::SwipeDirection_typeof(), 0),
        new uFunction("set_SwipeDirection", NULL, (void*)SwipeNavigate__set_SwipeDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::SwipeDirection_typeof()),
        new uFunction("get_VelocityThreshold", NULL, (void*)SwipeNavigate__get_VelocityThreshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_VelocityThreshold", NULL, (void*)SwipeNavigate__set_VelocityThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Node_type* SwipeNavigate_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(SwipeNavigate);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Navigation.SwipeNavigate", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = SwipeNavigate_build;
    type->fp_ctor_ = (void*)SwipeNavigate__New2_fn;
    type->fp_cctor_ = SwipeNavigate__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeNavigate__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeNavigate__OnUnrooted_fn;
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

// public SwipeNavigate() :2554
void SwipeNavigate__ctor_3_fn(SwipeNavigate* __this)
{
    __this->ctor_3();
}

// public Fuse.Navigation.AllowedNavigationDirections get_AllowedDirections() :2701
void SwipeNavigate__get_AllowedDirections_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->AllowedDirections();
}

// public void set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections value) :2702
void SwipeNavigate__set_AllowedDirections_fn(SwipeNavigate* __this, int* value)
{
    __this->AllowedDirections(*value);
}

// private Fuse.Navigation.SnapTo DetermineSnap() :2761
void SwipeNavigate__DetermineSnap_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->DetermineSnap();
}

// private float2 get_Distance() :2670
void SwipeNavigate__get_Distance_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Distance();
}

// private double get_ElapsedTime() :2675
void SwipeNavigate__get_ElapsedTime_fn(SwipeNavigate* __this, double* __retval)
{
    *__retval = __this->ElapsedTime();
}

// public Fuse.Navigation.SwipeDirection get_ForwardDirection() :2478
void SwipeNavigate__get_ForwardDirection_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->ForwardDirection();
}

// public void set_ForwardDirection(Fuse.Navigation.SwipeDirection value) :2479
void SwipeNavigate__set_ForwardDirection_fn(SwipeNavigate* __this, int* value)
{
    __this->ForwardDirection(*value);
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() :2705
void SwipeNavigate__GetNavigationArgs_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::UpdateSeekArgs** __retval)
{
    *__retval = __this->GetNavigationArgs();
}

// private Fuse.Navigation.SwipeDirection Invert(Fuse.Navigation.SwipeDirection sd) :2492
void SwipeNavigate__Invert_fn(SwipeNavigate* __this, int* sd, int* __retval)
{
    *__retval = __this->Invert(*sd);
}

// private bool get_IsHorizontal() :2535
void SwipeNavigate__get_IsHorizontal_fn(SwipeNavigate* __this, bool* __retval)
{
    *__retval = __this->IsHorizontal();
}

// public Fuse.Elements.Element get_LengthNode() :2514
void SwipeNavigate__get_LengthNode_fn(SwipeNavigate* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value) :2515
void SwipeNavigate__set_LengthNode_fn(SwipeNavigate* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public float get_MaxPages() :2527
void SwipeNavigate__get_MaxPages_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->MaxPages();
}

// public void set_MaxPages(float value) :2528
void SwipeNavigate__set_MaxPages_fn(SwipeNavigate* __this, float* value)
{
    __this->MaxPages(*value);
}

// private Fuse.Navigation.StructuredNavigation get_Navigation() :2447
void SwipeNavigate__get_Navigation_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::StructuredNavigation** __retval)
{
    *__retval = __this->Navigation();
}

// public SwipeNavigate New() :2554
void SwipeNavigate__New2_fn(SwipeNavigate** __retval)
{
    *__retval = SwipeNavigate::New2();
}

// private void OnLostCapture() :2561
void SwipeNavigate__OnLostCapture_fn(SwipeNavigate* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :2592
void SwipeNavigate__OnPointerMoved_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :2573
void SwipeNavigate__OnPointerPressed_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :2630
void SwipeNavigate__OnPointerReleased_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// protected override sealed void OnRooted() :2453
void SwipeNavigate__OnRooted_fn(SwipeNavigate* __this)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[52/*Fuse.Input.PointerPressedHandler*/], (void*)SwipeNavigate__OnPointerPressed_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->Parent(), uDelegate::New(::TYPES[53/*Fuse.Input.PointerMovedHandler*/], (void*)SwipeNavigate__OnPointerMoved_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[54/*Fuse.Input.PointerReleasedHandler*/], (void*)SwipeNavigate__OnPointerReleased_fn, __this));
}

// protected override sealed void OnUnrooted() :2462
void SwipeNavigate__OnUnrooted_fn(SwipeNavigate* __this)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[52/*Fuse.Input.PointerPressedHandler*/], (void*)SwipeNavigate__OnPointerPressed_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->Parent(), uDelegate::New(::TYPES[53/*Fuse.Input.PointerMovedHandler*/], (void*)SwipeNavigate__OnPointerMoved_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[54/*Fuse.Input.PointerReleasedHandler*/], (void*)SwipeNavigate__OnPointerReleased_fn, __this));
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private float get_ProgressVelocity() :2680
void SwipeNavigate__get_ProgressVelocity_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->ProgressVelocity();
}

// private float2 get_Scale() :2657
void SwipeNavigate__get_Scale_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Scale();
}

// public Fuse.Navigation.SwipeDirection get_SwipeDirection() :2488
void SwipeNavigate__get_SwipeDirection_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->SwipeDirection();
}

// public void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) :2489
void SwipeNavigate__set_SwipeDirection_fn(SwipeNavigate* __this, int* value)
{
    __this->SwipeDirection(*value);
}

// private static Fuse.Navigation.StructuredNavigation TryFindNavigation(Fuse.Visual parent) :2438
void SwipeNavigate__TryFindNavigation_fn(::g::Fuse::Visual* parent, ::g::Fuse::Navigation::StructuredNavigation** __retval)
{
    *__retval = SwipeNavigate::TryFindNavigation(parent);
}

// public generated float get_VelocityThreshold() :2504
void SwipeNavigate__get_VelocityThreshold_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->VelocityThreshold();
}

// public generated void set_VelocityThreshold(float value) :2504
void SwipeNavigate__set_VelocityThreshold_fn(SwipeNavigate* __this, float* value)
{
    __this->VelocityThreshold(*value);
}

float SwipeNavigate::elasticDecay_;
float SwipeNavigate::elasticScale_;

// public SwipeNavigate() [instance] :2554
void SwipeNavigate::ctor_3()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", ".ctor()");
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[50/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
    _forwardDirection = 1;
    _horizontalGesture = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[51/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(75.0f, 105.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-75.0f, -105.0f)));
    _verticalGesture = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[51/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-15.0f, 15.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-165.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(165.0f, 180.0f)));
    _down = -1;
    _swipeAllow = 3;
    ctor_2();
    VelocityThreshold(300.0f);
}

// public Fuse.Navigation.AllowedNavigationDirections get_AllowedDirections() [instance] :2701
int SwipeNavigate::AllowedDirections()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_AllowedDirections()");
    return _swipeAllow;
}

// public void set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections value) [instance] :2702
void SwipeNavigate::AllowedDirections(int value)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections)");
    _swipeAllow = value;
}

// private Fuse.Navigation.SnapTo DetermineSnap() [instance] :2761
int SwipeNavigate::DetermineSnap()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "DetermineSnap()");
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 ret3;
    float diff = IsHorizontal() ? (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret2), ret2).X : (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3).Y;

    if ((ForwardDirection() == 0) || (ForwardDirection() == 2))
        diff = -diff;

    int q = 1;

    if ((diff < -VelocityThreshold()) && ((AllowedDirections() & 1) == 1))
        q = 0;

    if ((diff > VelocityThreshold()) && ((AllowedDirections() & 2) == 2))
        q = 2;

    return q;
}

// private float2 get_Distance() [instance] :2670
::g::Uno::Float2 SwipeNavigate::Distance()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_Distance()");
    return ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
}

// private double get_ElapsedTime() [instance] :2675
double SwipeNavigate::ElapsedTime()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_ElapsedTime()");
    return ::g::Fuse::Time::FrameTime() - _startTime;
}

// public Fuse.Navigation.SwipeDirection get_ForwardDirection() [instance] :2478
int SwipeNavigate::ForwardDirection()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_ForwardDirection()");
    return _forwardDirection;
}

// public void set_ForwardDirection(Fuse.Navigation.SwipeDirection value) [instance] :2479
void SwipeNavigate::ForwardDirection(int value)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "set_ForwardDirection(Fuse.Navigation.SwipeDirection)");
    _forwardDirection = value;
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() [instance] :2705
::g::Fuse::Navigation::UpdateSeekArgs* SwipeNavigate::GetNavigationArgs()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "GetNavigationArgs()");
    float distance;
    float scale;

    if (IsHorizontal())
    {
        distance = Distance().X;
        scale = Scale().X;
    }
    else
    {
        distance = Distance().Y;
        scale = Scale().Y;
    }

    if ((ForwardDirection() == 0) || (ForwardDirection() == 2))
        distance = -distance;

    float rel = distance / scale;

    if (!((AllowedDirections() & 2) == 2))
        rel = ::g::Uno::Math::Min1(0.0f, rel);

    if (!((AllowedDirections() & 1) == 1))
        rel = ::g::Uno::Math::Max1(0.0f, rel);

    if (_hasMaxPages)
        rel = ::g::Uno::Math::Clamp1(rel, -_maxPages, _maxPages);

    float clampDistance = rel * scale;
    float delta = clampDistance - _prevDistance;
    _prevDistance = clampDistance;
    return ::g::Fuse::Navigation::UpdateSeekArgs::New1(delta, clampDistance, scale, ElapsedTime());
}

// private Fuse.Navigation.SwipeDirection Invert(Fuse.Navigation.SwipeDirection sd) [instance] :2492
int SwipeNavigate::Invert(int sd)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "Invert(Fuse.Navigation.SwipeDirection)");

    switch (sd)
    {
        case 1:
            return 0;
        case 0:
            return 1;
        case 3:
            return 2;
        case 2:
            return 3;
    }

    return 1;
}

// private bool get_IsHorizontal() [instance] :2535
bool SwipeNavigate::IsHorizontal()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_IsHorizontal()");
    return (ForwardDirection() == 1) || (ForwardDirection() == 0);
}

// public Fuse.Elements.Element get_LengthNode() [instance] :2514
::g::Fuse::Elements::Element* SwipeNavigate::LengthNode()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_LengthNode()");
    return _lengthNode;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance] :2515
void SwipeNavigate::LengthNode(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "set_LengthNode(Fuse.Elements.Element)");
    _lengthNode = value;
}

// public float get_MaxPages() [instance] :2527
float SwipeNavigate::MaxPages()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_MaxPages()");
    return _maxPages;
}

// public void set_MaxPages(float value) [instance] :2528
void SwipeNavigate::MaxPages(float value)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "set_MaxPages(float)");
    _hasMaxPages = true;
    _maxPages = value;
}

// private Fuse.Navigation.StructuredNavigation get_Navigation() [instance] :2447
::g::Fuse::Navigation::StructuredNavigation* SwipeNavigate::Navigation()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_Navigation()");
    return SwipeNavigate::TryFindNavigation(Parent());
}

// private void OnLostCapture() [instance] :2561
void SwipeNavigate::OnLostCapture()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnLostCapture()");
    _down = -1;

    if (_currentNavigation != NULL)
    {
        if (uPtr(_currentNavigation)->IsRootingCompleted())
            uPtr(_currentNavigation)->EndSeek(::g::Fuse::Navigation::EndSeekArgs::New1(1, 0.0f));

        _currentNavigation = NULL;
    }
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :2592
void SwipeNavigate::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    if (_currentNavigation == NULL)
        return;

    _currentCoord = uPtr(args)->WindowPoint();
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSampleTime_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef(args->Timestamp()), uCRef<int>(args->IsHardCapturedTo(this) ? 0 : 1));

    if (args->IsHardCapturedTo(this))
        uPtr(_currentNavigation)->Seek(GetNavigationArgs());
    else
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
        bool withinBounds = IsHorizontal() ? uPtr(_horizontalGesture)->IsWithinBounds(diff) : uPtr(_verticalGesture)->IsWithinBounds(diff);

        if (withinBounds)
        {
            _startCoord = (_currentCoord = uPtr(args)->WindowPoint());
            _prevDistance = 0.0f;
            _startTime = ::g::Fuse::Time::FrameTime();

            if (args->TryHardCapture(this, uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)SwipeNavigate__OnLostCapture_fn, this), NULL))
                uPtr(_currentNavigation)->BeginSeek();
            else
                OnLostCapture();
        }
    }
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :2573
void SwipeNavigate::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");
    _currentNavigation = Navigation();

    if (_currentNavigation == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[54/*"SwipeNaviga...*/], 1, ::STRINGS[1/*"/usr/local/...*/], 2578);
        return;
    }

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)SwipeNavigate__OnLostCapture_fn, this), NULL))
    {
        _down = uPtr(args)->PointIndex();
        _startCoord = (_currentCoord = args->WindowPoint());
        _prevDistance = 0.0f;
        _startTime = ::g::Fuse::Time::FrameTime();
        ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(_startCoord), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(args->Timestamp()));
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :2630
void SwipeNavigate::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");
    _currentCoord = uPtr(args)->WindowPoint();
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSampleTime_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef(args->Timestamp()), uCRef<int>(2));
    _down = -1;

    if (_currentNavigation == NULL)
        return;

    if (args->IsHardCapturedTo(this))
    {
        uPtr(_currentNavigation)->EndSeek(::g::Fuse::Navigation::EndSeekArgs::New1(DetermineSnap(), ProgressVelocity()));
        uPtr(args)->ReleaseHardCapture(this);
    }
    else
    {
        if (uPtr(args)->IsSoftCapturedTo(this))
            uPtr(args)->ReleaseSoftCapture(this);
    }

    _currentNavigation = NULL;
}

// private float get_ProgressVelocity() [instance] :2680
float SwipeNavigate::ProgressVelocity()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_ProgressVelocity()");
    ::g::Uno::Float2 ret4;
    ::g::Uno::Float2 ret5;
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 ret7;

    switch (SwipeDirection())
    {
        case 1:
            return -(::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret4), ret4).X / Scale().X;
        case 0:
            return (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret5), ret5).X / Scale().X;
        case 3:
            return -(::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret6), ret6).Y / Scale().Y;
        case 2:
            return (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret7), ret7).Y / Scale().Y;
    }

    return 0.0f;
}

// private float2 get_Scale() [instance] :2657
::g::Uno::Float2 SwipeNavigate::Scale()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_Scale()");

    if (_lengthNode != NULL)
        return uPtr(_lengthNode)->ActualSize();

    ::g::Fuse::Elements::Element* e = uAs< ::g::Fuse::Elements::Element*>(uPtr(_currentNavigation)->Parent(), ::TYPES[8/*Fuse.Elements.Element*/]);

    if (e == NULL)
        return ::g::Uno::Float2__New1(1.0f);

    return uPtr(e)->ActualSize();
}

// public Fuse.Navigation.SwipeDirection get_SwipeDirection() [instance] :2488
int SwipeNavigate::SwipeDirection()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_SwipeDirection()");
    return Invert(ForwardDirection());
}

// public void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) [instance] :2489
void SwipeNavigate::SwipeDirection(int value)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "set_SwipeDirection(Fuse.Navigation.SwipeDirection)");
    ForwardDirection(Invert(value));
}

// public generated float get_VelocityThreshold() [instance] :2504
float SwipeNavigate::VelocityThreshold()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_VelocityThreshold()");
    return _VelocityThreshold;
}

// public generated void set_VelocityThreshold(float value) [instance] :2504
void SwipeNavigate::VelocityThreshold(float value)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "set_VelocityThreshold(float)");
    _VelocityThreshold = value;
}

// public SwipeNavigate New() [static] :2554
SwipeNavigate* SwipeNavigate::New2()
{
    SwipeNavigate* obj1 = (SwipeNavigate*)uNew(SwipeNavigate_typeof());
    obj1->ctor_3();
    return obj1;
}

// private static Fuse.Navigation.StructuredNavigation TryFindNavigation(Fuse.Visual parent) [static] :2438
::g::Fuse::Navigation::StructuredNavigation* SwipeNavigate::TryFindNavigation(::g::Fuse::Visual* parent)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "TryFindNavigation(Fuse.Visual)");
    SwipeNavigate_typeof()->Init();
    return (parent != NULL) ? (::g::Fuse::Navigation::StructuredNavigation*)uPtr(parent)->FirstChild(::TYPES[55/*Fuse.Visual.FirstChild<Fuse.Navigation.StructuredNavigation>*/]) : (::g::Fuse::Navigation::StructuredNavigation*)SwipeNavigate::TryFindNavigation(uPtr(parent)->ContextParent());
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// internal sealed class UpdateSeekArgs :2361
// {
static void UpdateSeekArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _scale), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _time), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _Delta), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _Distance), 0);
}

uType* UpdateSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UpdateSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.UpdateSeekArgs", options);
    type->fp_build_ = UpdateSeekArgs_build;
    return type;
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) :2379
void UpdateSeekArgs__ctor__fn(UpdateSeekArgs* __this, float* delta, float* distance, float* scale, double* time)
{
    __this->ctor_(*delta, *distance, *scale, *time);
}

// public generated float get_Delta() :2363
void UpdateSeekArgs__get_Delta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Delta();
}

// private generated void set_Delta(float value) :2363
void UpdateSeekArgs__set_Delta_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Delta(*value);
}

// public generated float get_Distance() :2364
void UpdateSeekArgs__get_Distance_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// private generated void set_Distance(float value) :2364
void UpdateSeekArgs__set_Distance_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Distance(*value);
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) :2379
void UpdateSeekArgs__New1_fn(float* delta, float* distance, float* scale, double* time, UpdateSeekArgs** __retval)
{
    *__retval = UpdateSeekArgs::New1(*delta, *distance, *scale, *time);
}

// public float get_RelativeDelta() :2368
void UpdateSeekArgs__get_RelativeDelta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->RelativeDelta();
}

// public float get_RelativeDistance() :2373
void UpdateSeekArgs__get_RelativeDistance_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->RelativeDistance();
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) [instance] :2379
void UpdateSeekArgs::ctor_(float delta, float distance, float scale, double time)
{
    uStackFrame __("Fuse.Navigation.UpdateSeekArgs", ".ctor(float,float,float,double)");
    Delta(delta);
    Distance(distance);
    _scale = scale;
    _time = time;
}

// public generated float get_Delta() [instance] :2363
float UpdateSeekArgs::Delta()
{
    uStackFrame __("Fuse.Navigation.UpdateSeekArgs", "get_Delta()");
    return _Delta;
}

// private generated void set_Delta(float value) [instance] :2363
void UpdateSeekArgs::Delta(float value)
{
    uStackFrame __("Fuse.Navigation.UpdateSeekArgs", "set_Delta(float)");
    _Delta = value;
}

// public generated float get_Distance() [instance] :2364
float UpdateSeekArgs::Distance()
{
    uStackFrame __("Fuse.Navigation.UpdateSeekArgs", "get_Distance()");
    return _Distance;
}

// private generated void set_Distance(float value) [instance] :2364
void UpdateSeekArgs::Distance(float value)
{
    uStackFrame __("Fuse.Navigation.UpdateSeekArgs", "set_Distance(float)");
    _Distance = value;
}

// public float get_RelativeDelta() [instance] :2368
float UpdateSeekArgs::RelativeDelta()
{
    uStackFrame __("Fuse.Navigation.UpdateSeekArgs", "get_RelativeDelta()");
    return Delta() / _scale;
}

// public float get_RelativeDistance() [instance] :2373
float UpdateSeekArgs::RelativeDistance()
{
    uStackFrame __("Fuse.Navigation.UpdateSeekArgs", "get_RelativeDistance()");
    return Distance() / _scale;
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) [static] :2379
UpdateSeekArgs* UpdateSeekArgs::New1(float delta, float distance, float scale, double time)
{
    UpdateSeekArgs* obj1 = (UpdateSeekArgs*)uNew(UpdateSeekArgs_typeof());
    obj1->ctor_(delta, distance, scale, time);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public interfacemodifiers class VisualNavigation :2903
// {
// static VisualNavigation() :2905
static void VisualNavigation__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(VisualNavigation_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMethod*>(::TYPES[35/*Fuse.Scripting.ScriptMethod[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[56/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.VisualNavigation>*/], ::STRINGS[28/*"goto"*/], uDelegate::New(::TYPES[57/*Uno.Action<Fuse.Navigation.VisualNavigation, object[]>*/], (void*)VisualNavigation__gotoNode_fn), 2)));
}

static void VisualNavigation_build(uType* type)
{
    ::STRINGS[28] = uString::Const("goto");
    ::STRINGS[55] = uString::Const("Navigation.goto() : Argument must be a node object");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[56] = uString::Const("gotoNode");
    ::TYPES[34] = ::g::Uno::Type_typeof();
    ::TYPES[35] = ::g::Fuse::Scripting::ScriptMethod_typeof()->Array();
    ::TYPES[36] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[56] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(VisualNavigation_typeof());
    ::TYPES[57] = ::g::Uno::Action2_typeof()->MakeType(VisualNavigation_typeof(), uObject_typeof()->Array());
    ::TYPES[58] = ::g::Uno::Collections::List_typeof()->MakeType(VisualNavigation__PageData_typeof());
    ::TYPES[59] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Visual_typeof(), VisualNavigation__PageData_typeof());
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[42] = ::g::Uno::Delegate_typeof();
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[19] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[41] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Uno::Collections::IList_typeof()->MakeType(VisualNavigation__PageData_typeof());
    ::TYPES[45] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    ::TYPES[33] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[60] = ::g::Fuse::Navigation::NavigationPageCountHandler_typeof();
    ::TYPES[24] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(VisualNavigation_type, interface6));
    type->SetFields(13,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Visual_typeof(), VisualNavigation__PageData_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation, _pageMap), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(VisualNavigation__PageData_typeof()), offsetof(::g::Fuse::Navigation::VisualNavigation, _pages), 0,
        ::g::Fuse::Navigation::HistoryChangedHandler_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation, HistoryChanged1), 0,
        ::g::Fuse::Navigation::NavigatedHandler_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation, Navigated1), 0,
        ::g::Fuse::Navigation::NavigationPageCountHandler_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation, PageCountChanged1), 0,
        ::g::Fuse::Navigation::NavigationHandler_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation, PageProgressChanged1), 0);
    type->Reflection.SetFunctions(24,
        new uFunction("get_Active", NULL, NULL, offsetof(VisualNavigation_type, fp_get_Active), false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Active", NULL, NULL, offsetof(VisualNavigation_type, fp_set_Active), false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_ActivePage", NULL, (void*)VisualNavigation__get_ActivePage_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("get_CanGoBack", NULL, NULL, offsetof(VisualNavigation_type, fp_get_CanGoBack), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, NULL, offsetof(VisualNavigation_type, fp_get_CanGoForward), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ClearHistory", NULL, (void*)VisualNavigation__ClearHistory_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GetPage", NULL, (void*)VisualNavigation__GetPage_fn, 0, false, ::g::Fuse::Visual_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetPageState", NULL, NULL, offsetof(VisualNavigation_type, fp_GetPageState), false, ::g::Fuse::Navigation::NavigationPageState_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GoBack", NULL, NULL, offsetof(VisualNavigation_type, fp_GoBack), false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, NULL, offsetof(VisualNavigation_type, fp_GoForward), false, uVoid_typeof(), 0),
        new uFunction("Goto", NULL, NULL, offsetof(VisualNavigation_type, fp_Goto), false, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("add_HistoryChanged", NULL, (void*)VisualNavigation__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, (void*)VisualNavigation__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("add_Navigated", NULL, (void*)VisualNavigation__add_Navigated_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("remove_Navigated", NULL, (void*)VisualNavigation__remove_Navigated_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("OnChildAddedWhileRooted", NULL, NULL, offsetof(VisualNavigation_type, fp_OnChildAddedWhileRooted), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("OnChildRemovedWhileRooted", NULL, NULL, offsetof(VisualNavigation_type, fp_OnChildRemovedWhileRooted), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_PageCount", NULL, (void*)VisualNavigation__get_PageCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("add_PageCountChanged", NULL, (void*)VisualNavigation__add_PageCountChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("remove_PageCountChanged", NULL, (void*)VisualNavigation__remove_PageCountChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("get_PageProgress", NULL, NULL, offsetof(VisualNavigation_type, fp_get_PageProgress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_PageProgressChanged", NULL, (void*)VisualNavigation__add_PageProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationHandler_typeof()),
        new uFunction("remove_PageProgressChanged", NULL, (void*)VisualNavigation__remove_PageProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationHandler_typeof()),
        new uFunction("Toggle", NULL, NULL, offsetof(VisualNavigation_type, fp_Toggle), false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

VisualNavigation_type* VisualNavigation_typeof()
{
    static uSStrong<VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(VisualNavigation);
    options.TypeSize = sizeof(VisualNavigation_type);
    type = (VisualNavigation_type*)uClassType::New("Fuse.Navigation.VisualNavigation", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = VisualNavigation_build;
    type->fp_cctor_ = VisualNavigation__cctor_1_fn;
    type->fp_get_CanGoBack = VisualNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = VisualNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = VisualNavigation__GetPageState_fn;
    type->fp_GoBack = VisualNavigation__GoBack_fn;
    type->fp_GoForward = VisualNavigation__GoForward_fn;
    type->fp_OnChildAddedWhileRooted = VisualNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))VisualNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))VisualNavigation__OnUnrooted_fn;
    type->fp_Toggle = VisualNavigation__Toggle_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))VisualNavigation__GetPageState_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_Navigated_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))VisualNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))VisualNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))VisualNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_HistoryChanged_fn;
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

// internal VisualNavigation() :2925
void VisualNavigation__ctor_3_fn(VisualNavigation* __this)
{
    __this->ctor_3();
}

// public Fuse.Visual get_ActivePage() :3090
void VisualNavigation__get_ActivePage_fn(VisualNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->ActivePage();
}

// public virtual bool get_CanGoBack() :2983
void VisualNavigation__get_CanGoBack_fn(VisualNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_CanGoBack()");
    return *__retval = false, void();
}

// public virtual bool get_CanGoForward() :2984
void VisualNavigation__get_CanGoForward_fn(VisualNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_CanGoForward()");
    return *__retval = false, void();
}

// public void ClearHistory() :2985
void VisualNavigation__ClearHistory_fn(VisualNavigation* __this)
{
    __this->ClearHistory();
}

// public Fuse.Visual GetPage(int index) :3083
void VisualNavigation__GetPage_fn(VisualNavigation* __this, int* index, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->GetPage(*index);
}

// protected Fuse.Navigation.VisualNavigation.PageData GetPageData(Fuse.Visual page) :3006
void VisualNavigation__GetPageData_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, VisualNavigation__PageData** __retval)
{
    *__retval = __this->GetPageData(page);
}

// protected int GetPageIndex(Fuse.Visual child) :3097
void VisualNavigation__GetPageIndex_fn(VisualNavigation* __this, ::g::Fuse::Visual* child, int* __retval)
{
    *__retval = __this->GetPageIndex(child);
}

// public virtual Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :2932
void VisualNavigation__GetPageState_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPageState(Fuse.Visual)");
    ::g::Fuse::Navigation::NavigationPageState collection1;
    ::g::Fuse::Navigation::NavigationPageState collection2;
    VisualNavigation__PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
        return *__retval = (collection1 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection1.Progress = 0.0f, collection1.PreviousProgress = 0.0f, collection1), void();

    collection2 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection2.Progress = uPtr(pd)->Progress;
    collection2.PreviousProgress = uPtr(pd)->PreviousProgress;
    return *__retval = collection2, void();
}

// public virtual void GoBack() :2982
void VisualNavigation__GoBack_fn(VisualNavigation* __this)
{
}

// public virtual void GoForward() :2981
void VisualNavigation__GoForward_fn(VisualNavigation* __this)
{
}

// private static void gotoNode(Fuse.Navigation.VisualNavigation nav, object[] args) :2918
void VisualNavigation__gotoNode_fn(VisualNavigation* nav, uArray* args)
{
    VisualNavigation::gotoNode(nav, args);
}

// protected bool get_HasPages() :3094
void VisualNavigation__get_HasPages_fn(VisualNavigation* __this, bool* __retval)
{
    *__retval = __this->HasPages();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :2973
void VisualNavigation__add_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :2973
void VisualNavigation__remove_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) :2962
void VisualNavigation__add_Navigated_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_Navigated(value);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) :2962
void VisualNavigation__remove_Navigated_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_Navigated(value);
}

// public virtual void OnChildAddedWhileRooted(Fuse.Node child) :3057
void VisualNavigation__OnChildAddedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    __this->UpdatePages();
}

// public virtual void OnChildRemovedWhileRooted(Fuse.Node child) :3066
void VisualNavigation__OnChildRemovedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    bool ret5;
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_pageMap), v, &ret5);
    __this->UpdatePages();
}

// protected void OnHistoryChanged() :2975
void VisualNavigation__OnHistoryChanged_fn(VisualNavigation* __this)
{
    __this->OnHistoryChanged();
}

// protected void OnNavigated(Fuse.Visual newElement) :2964
void VisualNavigation__OnNavigated_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement)
{
    __this->OnNavigated(newElement);
}

// protected void OnPageCountChanged() :2943
void VisualNavigation__OnPageCountChanged_fn(VisualNavigation* __this)
{
    __this->OnPageCountChanged();
}

// protected void OnPageProgressChanged(double current, double prev, Fuse.Navigation.NavigationMode mode) :2956
void VisualNavigation__OnPageProgressChanged_fn(VisualNavigation* __this, double* current, double* prev, int* mode)
{
    __this->OnPageProgressChanged(*current, *prev, *mode);
}

// protected void OnPageProgressChanged(Fuse.Navigation.NavigationMode mode) :2951
void VisualNavigation__OnPageProgressChanged1_fn(VisualNavigation* __this, int* mode)
{
    __this->OnPageProgressChanged1(*mode);
}

// protected override void OnRooted() :3017
void VisualNavigation__OnRooted_fn(VisualNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->_pageMap)->Clear();
    __this->UpdatePages();
}

// protected override void OnUnrooted() :3050
void VisualNavigation__OnUnrooted_fn(VisualNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnUnrooted()");
    uPtr(__this->_pages)->Clear();
    uPtr(__this->_pageMap)->Clear();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public int get_PageCount() :3080
void VisualNavigation__get_PageCount_fn(VisualNavigation* __this, int* __retval)
{
    *__retval = __this->PageCount();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :2941
void VisualNavigation__add_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_PageCountChanged(value);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :2941
void VisualNavigation__remove_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_PageCountChanged(value);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationHandler value) :2949
void VisualNavigation__add_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_PageProgressChanged(value);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationHandler value) :2949
void VisualNavigation__remove_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_PageProgressChanged(value);
}

// protected internal Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData> get_Pages() :3004
void VisualNavigation__get_Pages_fn(VisualNavigation* __this, uObject** __retval)
{
    *__retval = __this->Pages();
}

// public virtual void Toggle(Fuse.Visual page) :2929
void VisualNavigation__Toggle_fn(VisualNavigation* __this, ::g::Fuse::Visual* page)
{
}

// private void UpdatePages() :3024
void VisualNavigation__UpdatePages_fn(VisualNavigation* __this)
{
    __this->UpdatePages();
}

// internal VisualNavigation() [instance] :2925
void VisualNavigation::ctor_3()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", ".ctor()");
    _pages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[58/*Uno.Collections.List<Fuse.Navigation.VisualNavigation.PageData>*/]));
    _pageMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[59/*Uno.Collections.Dictionary<Fuse.Visual, Fuse.Navigation.VisualNavigation.PageData>*/]));
    ctor_2();
}

// public Fuse.Visual get_ActivePage() [instance] :3090
::g::Fuse::Visual* VisualNavigation::ActivePage()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_ActivePage()");
    return Active();
}

// public void ClearHistory() [instance] :2985
void VisualNavigation::ClearHistory()
{
}

// public Fuse.Visual GetPage(int index) [instance] :3083
::g::Fuse::Visual* VisualNavigation::GetPage(int index)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPage(int)");
    VisualNavigation__PageData* ret3;

    if ((index < 0) || (index >= uPtr(_pages)->Count()))
        return NULL;

    return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_pages), uCRef<int>(index), &ret3), ret3))->Visual();
}

// protected Fuse.Navigation.VisualNavigation.PageData GetPageData(Fuse.Visual page) [instance] :3006
VisualNavigation__PageData* VisualNavigation::GetPageData(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPageData(Fuse.Visual)");
    bool ret4;

    if (page == NULL)
        return NULL;

    VisualNavigation__PageData* pd;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_pageMap), page, (void**)(&pd), &ret4), ret4))
        return NULL;

    return pd;
}

// protected int GetPageIndex(Fuse.Visual child) [instance] :3097
int VisualNavigation::GetPageIndex(::g::Fuse::Visual* child)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPageIndex(Fuse.Visual)");
    VisualNavigation__PageData* pd = GetPageData(child);

    if (pd == NULL)
        return -1;

    return uPtr(pd)->Index;
}

// protected bool get_HasPages() [instance] :3094
bool VisualNavigation::HasPages()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_HasPages()");
    return uPtr(_pages)->Count() > 0;
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :2973
void VisualNavigation::add_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[45/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :2973
void VisualNavigation::remove_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[45/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :2962
void VisualNavigation::add_Navigated(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_Navigated(Fuse.Navigation.NavigatedHandler)");
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Navigated1, value), ::TYPES[33/*Fuse.Navigation.NavigatedHandler*/]);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :2962
void VisualNavigation::remove_Navigated(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_Navigated(Fuse.Navigation.NavigatedHandler)");
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Navigated1, value), ::TYPES[33/*Fuse.Navigation.NavigatedHandler*/]);
}

// protected void OnHistoryChanged() [instance] :2975
void VisualNavigation::OnHistoryChanged()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnHistoryChanged()");

    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);
}

// protected void OnNavigated(Fuse.Visual newElement) [instance] :2964
void VisualNavigation::OnNavigated(::g::Fuse::Visual* newElement)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnNavigated(Fuse.Visual)");
    uDelegate* handler = Navigated1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Fuse::Navigation::NavigatedArgs*)::g::Fuse::Navigation::NavigatedArgs::New2(newElement));
}

// protected void OnPageCountChanged() [instance] :2943
void VisualNavigation::OnPageCountChanged()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnPageCountChanged()");

    if (::g::Uno::Delegate::op_Inequality(PageCountChanged1, NULL))
        uPtr(PageCountChanged1)->InvokeVoid(this);
}

// protected void OnPageProgressChanged(double current, double prev, Fuse.Navigation.NavigationMode mode) [instance] :2956
void VisualNavigation::OnPageProgressChanged(double current, double prev, int mode)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnPageProgressChanged(double,double,Fuse.Navigation.NavigationMode)");

    if (::g::Uno::Delegate::op_Inequality(PageProgressChanged1, NULL))
        uPtr(PageProgressChanged1)->Invoke(2, this, (::g::Fuse::Navigation::NavigationArgs*)::g::Fuse::Navigation::NavigationArgs::New2(current, prev, mode));
}

// protected void OnPageProgressChanged(Fuse.Navigation.NavigationMode mode) [instance] :2951
void VisualNavigation::OnPageProgressChanged1(int mode)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnPageProgressChanged(Fuse.Navigation.NavigationMode)");
    OnPageProgressChanged(0.0, 0.0, mode);
}

// public int get_PageCount() [instance] :3080
int VisualNavigation::PageCount()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_PageCount()");
    return uPtr(_pages)->Count();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :2941
void VisualNavigation::add_PageCountChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler)");
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageCountChanged1, value), ::TYPES[60/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :2941
void VisualNavigation::remove_PageCountChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler)");
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageCountChanged1, value), ::TYPES[60/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationHandler value) [instance] :2949
void VisualNavigation::add_PageProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_PageProgressChanged(Fuse.Navigation.NavigationHandler)");
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageProgressChanged1, value), ::TYPES[24/*Fuse.Navigation.NavigationHandler*/]);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationHandler value) [instance] :2949
void VisualNavigation::remove_PageProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_PageProgressChanged(Fuse.Navigation.NavigationHandler)");
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageProgressChanged1, value), ::TYPES[24/*Fuse.Navigation.NavigationHandler*/]);
}

// protected internal Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData> get_Pages() [instance] :3004
uObject* VisualNavigation::Pages()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_Pages()");
    return (uObject*)_pages;
}

// private void UpdatePages() [instance] :3024
void VisualNavigation::UpdatePages()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "UpdatePages()");
    ::g::Fuse::Node* ret6;
    bool ret7;
    uPtr(_pages)->Clear();
    int c = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* x = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[19/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret6), ret6), ::TYPES[1/*Fuse.Visual*/]);

        if (!::g::Fuse::Navigation::Navigation::IsPage(x))
            continue;

        VisualNavigation__PageData* pd;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_pageMap), x, (void**)(&pd), &ret7), ret7))
        {
            pd = VisualNavigation__PageData::New1(x);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_pageMap), x, pd);
        }

        uPtr(pd)->Index = c;
        ::g::Uno::Collections::List__Add_fn(uPtr(_pages), pd);
        c++;
    }

    OnPageCountChanged();
}

// private static void gotoNode(Fuse.Navigation.VisualNavigation nav, object[] args) [static] :2918
void VisualNavigation::gotoNode(VisualNavigation* nav, uArray* args)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "gotoNode(Fuse.Navigation.VisualNavigation,object[])");
    VisualNavigation_typeof()->Init();
    ::g::Fuse::Visual* target = uAs< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*Fuse.Visual*/]);

    if (target != NULL)
        uPtr(nav)->Goto(target, 0);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[55/*"Navigation....*/], nav, ::STRINGS[1/*"/usr/local/...*/], 2922, ::STRINGS[56/*"gotoNode"*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class WhileActive :3276
// {
static void WhileActive_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(32);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileActive__New2_fn, 0, true, WhileActive_typeof(), 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileActive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileActive", options);
    type->SetBase(::g::Fuse::Navigation::WhileNavigationTrigger_typeof());
    type->fp_build_ = WhileActive_build;
    type->fp_ctor_ = (void*)WhileActive__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileActive__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileActive__OnNavigationStateChanged_fn;
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

// public generated WhileActive() :3276
void WhileActive__ctor_6_fn(WhileActive* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :3278
void WhileActive__ForceUpdate_fn(WhileActive* __this)
{
    uStackFrame __("Fuse.Navigation.WhileActive", "ForceUpdate()");
    __this->GoProgress(__this->InvertProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// private double InvertProgress(double p) :3283
void WhileActive__InvertProgress_fn(WhileActive* __this, double* p, double* __retval)
{
    *__retval = __this->InvertProgress(*p);
}

// public generated WhileActive New() :3276
void WhileActive__New2_fn(WhileActive** __retval)
{
    *__retval = WhileActive::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :3288
void WhileActive__OnNavigationStateChanged_fn(WhileActive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.WhileActive", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    __this->GoProgress(__this->InvertProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// public generated WhileActive() [instance] :3276
void WhileActive::ctor_6()
{
    uStackFrame __("Fuse.Navigation.WhileActive", ".ctor()");
    ctor_5();
}

// private double InvertProgress(double p) [instance] :3283
double WhileActive::InvertProgress(double p)
{
    uStackFrame __("Fuse.Navigation.WhileActive", "InvertProgress(double)");
    return 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(p));
}

// public generated WhileActive New() [static] :3276
WhileActive* WhileActive::New2()
{
    WhileActive* obj1 = (WhileActive*)uNew(WhileActive_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class WhileCanGoBack :3156
// {
static void WhileCanGoBack_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface4));
    type->SetFields(29);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileCanGoBack__New2_fn, 0, true, WhileCanGoBack_typeof(), 0));
}

::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileCanGoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileHistoryTrigger_type);
    type = (::g::Fuse::Navigation::WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileCanGoBack", options);
    type->SetBase(::g::Fuse::Navigation::WhileHistoryTrigger_typeof());
    type->fp_build_ = WhileCanGoBack_build;
    type->fp_ctor_ = (void*)WhileCanGoBack__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*))WhileCanGoBack__get_IsOn_fn;
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

// public generated WhileCanGoBack() :3156
void WhileCanGoBack__ctor_6_fn(WhileCanGoBack* __this)
{
    __this->ctor_6();
}

// protected override sealed bool get_IsOn() :3158
void WhileCanGoBack__get_IsOn_fn(WhileCanGoBack* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.WhileCanGoBack", "get_IsOn()");
    return *__retval = ::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(__this->NavigationContext()), ::TYPES[15/*Fuse.Navigation.IBaseNavigation*/])), void();
}

// public generated WhileCanGoBack New() :3156
void WhileCanGoBack__New2_fn(WhileCanGoBack** __retval)
{
    *__retval = WhileCanGoBack::New2();
}

// public generated WhileCanGoBack() [instance] :3156
void WhileCanGoBack::ctor_6()
{
    uStackFrame __("Fuse.Navigation.WhileCanGoBack", ".ctor()");
    ctor_5();
}

// public generated WhileCanGoBack New() [static] :3156
WhileCanGoBack* WhileCanGoBack::New2()
{
    WhileCanGoBack* obj1 = (WhileCanGoBack*)uNew(WhileCanGoBack_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class WhileCanGoForward :3161
// {
static void WhileCanGoForward_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface4));
    type->SetFields(29);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileCanGoForward__New2_fn, 0, true, WhileCanGoForward_typeof(), 0));
}

::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileCanGoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileHistoryTrigger_type);
    type = (::g::Fuse::Navigation::WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileCanGoForward", options);
    type->SetBase(::g::Fuse::Navigation::WhileHistoryTrigger_typeof());
    type->fp_build_ = WhileCanGoForward_build;
    type->fp_ctor_ = (void*)WhileCanGoForward__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*))WhileCanGoForward__get_IsOn_fn;
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

// public generated WhileCanGoForward() :3161
void WhileCanGoForward__ctor_6_fn(WhileCanGoForward* __this)
{
    __this->ctor_6();
}

// protected override sealed bool get_IsOn() :3163
void WhileCanGoForward__get_IsOn_fn(WhileCanGoForward* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.WhileCanGoForward", "get_IsOn()");
    return *__retval = ::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(__this->NavigationContext()), ::TYPES[15/*Fuse.Navigation.IBaseNavigation*/])), void();
}

// public generated WhileCanGoForward New() :3161
void WhileCanGoForward__New2_fn(WhileCanGoForward** __retval)
{
    *__retval = WhileCanGoForward::New2();
}

// public generated WhileCanGoForward() [instance] :3161
void WhileCanGoForward::ctor_6()
{
    uStackFrame __("Fuse.Navigation.WhileCanGoForward", ".ctor()");
    ctor_5();
}

// public generated WhileCanGoForward New() [static] :3161
WhileCanGoForward* WhileCanGoForward::New2()
{
    WhileCanGoForward* obj1 = (WhileCanGoForward*)uNew(WhileCanGoForward_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public abstract class WhileHistoryTrigger :3117
// {
static void WhileHistoryTrigger_build(uType* type)
{
    ::STRINGS[57] = uString::Const("WhileHistoryTrigger requires a Navigation context");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno");
    ::STRINGS[7] = uString::Const("OnRooted");
    ::TYPES[2] = uObject_typeof();
    ::TYPES[15] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[45] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileHistoryTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileHistoryTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileHistoryTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileHistoryTrigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger, _context), 0);
}

WhileHistoryTrigger_type* WhileHistoryTrigger_typeof()
{
    static uSStrong<WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileHistoryTrigger);
    options.TypeSize = sizeof(WhileHistoryTrigger_type);
    type = (WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileHistoryTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileHistoryTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileHistoryTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileHistoryTrigger__OnUnrooted_fn;
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

// protected generated WhileHistoryTrigger() :3117
void WhileHistoryTrigger__ctor_5_fn(WhileHistoryTrigger* __this)
{
    __this->ctor_5();
}

// protected Fuse.Navigation.IBaseNavigation get_NavigationContext() :3120
void WhileHistoryTrigger__get_NavigationContext_fn(WhileHistoryTrigger* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// protected void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) :3120
void WhileHistoryTrigger__set_NavigationContext_fn(WhileHistoryTrigger* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// private void OnHistoryChanged(object sender) :3148
void WhileHistoryTrigger__OnHistoryChanged_fn(WhileHistoryTrigger* __this, uObject* sender)
{
    __this->OnHistoryChanged(sender);
}

// protected override sealed void OnRooted() :3122
void WhileHistoryTrigger__OnRooted_fn(WhileHistoryTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileHistoryTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->NavigationContext() == NULL)
        __this->NavigationContext(::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(__this->Parent()));

    if (__this->NavigationContext() == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[57/*"WhileHistor...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 3131, ::STRINGS[7/*"OnRooted"*/]);
        return;
    }

    __this->SetActive(__this->IsOn());
    ::g::Fuse::Navigation::IBaseNavigation::add_HistoryChanged(uInterface(uPtr(__this->NavigationContext()), ::TYPES[15/*Fuse.Navigation.IBaseNavigation*/]), uDelegate::New(::TYPES[45/*Fuse.Navigation.HistoryChangedHandler*/], (void*)WhileHistoryTrigger__OnHistoryChanged_fn, __this));
}

// protected override sealed void OnUnrooted() :3138
void WhileHistoryTrigger__OnUnrooted_fn(WhileHistoryTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileHistoryTrigger", "OnUnrooted()");

    if (__this->NavigationContext() != NULL)
    {
        ::g::Fuse::Navigation::IBaseNavigation::remove_HistoryChanged(uInterface(uPtr(__this->NavigationContext()), ::TYPES[15/*Fuse.Navigation.IBaseNavigation*/]), uDelegate::New(::TYPES[45/*Fuse.Navigation.HistoryChangedHandler*/], (void*)WhileHistoryTrigger__OnHistoryChanged_fn, __this));
        __this->NavigationContext(NULL);
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated WhileHistoryTrigger() [instance] :3117
void WhileHistoryTrigger::ctor_5()
{
    uStackFrame __("Fuse.Navigation.WhileHistoryTrigger", ".ctor()");
    ctor_4();
}

// protected Fuse.Navigation.IBaseNavigation get_NavigationContext() [instance] :3120
uObject* WhileHistoryTrigger::NavigationContext()
{
    uStackFrame __("Fuse.Navigation.WhileHistoryTrigger", "get_NavigationContext()");
    return _context;
}

// protected void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) [instance] :3120
void WhileHistoryTrigger::NavigationContext(uObject* value)
{
    uStackFrame __("Fuse.Navigation.WhileHistoryTrigger", "set_NavigationContext(Fuse.Navigation.IBaseNavigation)");
    _context = value;
}

// private void OnHistoryChanged(object sender) [instance] :3148
void WhileHistoryTrigger::OnHistoryChanged(uObject* sender)
{
    uStackFrame __("Fuse.Navigation.WhileHistoryTrigger", "OnHistoryChanged(object)");
    SetActive(IsOn());
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class WhileInactive :3294
// {
static void WhileInactive_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(32);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInactive__New2_fn, 0, true, WhileInactive_typeof(), 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileInactive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInactive", options);
    type->SetBase(::g::Fuse::Navigation::WhileNavigationTrigger_typeof());
    type->fp_build_ = WhileInactive_build;
    type->fp_ctor_ = (void*)WhileInactive__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInactive__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInactive__OnNavigationStateChanged_fn;
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

// public generated WhileInactive() :3294
void WhileInactive__ctor_6_fn(WhileInactive* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :3296
void WhileInactive__ForceUpdate_fn(WhileInactive* __this)
{
    uStackFrame __("Fuse.Navigation.WhileInactive", "ForceUpdate()");
    __this->GoProgress((double)::g::Uno::Math::Abs1(::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// public generated WhileInactive New() :3294
void WhileInactive__New2_fn(WhileInactive** __retval)
{
    *__retval = WhileInactive::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :3301
void WhileInactive__OnNavigationStateChanged_fn(WhileInactive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.WhileInactive", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    __this->GoProgress((double)::g::Uno::Math::Abs1(::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// public generated WhileInactive() [instance] :3294
void WhileInactive::ctor_6()
{
    uStackFrame __("Fuse.Navigation.WhileInactive", ".ctor()");
    ctor_5();
}

// public generated WhileInactive New() [static] :3294
WhileInactive* WhileInactive::New2()
{
    WhileInactive* obj1 = (WhileInactive*)uNew(WhileInactive_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class WhileInEnterState :3320
// {
static void WhileInEnterState_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(32);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInEnterState__New2_fn, 0, true, WhileInEnterState_typeof(), 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileInEnterState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInEnterState", options);
    type->SetBase(::g::Fuse::Navigation::WhileNavigationTrigger_typeof());
    type->fp_build_ = WhileInEnterState_build;
    type->fp_ctor_ = (void*)WhileInEnterState__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInEnterState__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInEnterState__OnNavigationStateChanged_fn;
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

// public generated WhileInEnterState() :3320
void WhileInEnterState__ctor_6_fn(WhileInEnterState* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :3322
void WhileInEnterState__ForceUpdate_fn(WhileInEnterState* __this)
{
    uStackFrame __("Fuse.Navigation.WhileInEnterState", "ForceUpdate()");
    __this->GoProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress);
}

// public generated WhileInEnterState New() :3320
void WhileInEnterState__New2_fn(WhileInEnterState** __retval)
{
    *__retval = WhileInEnterState::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :3327
void WhileInEnterState__OnNavigationStateChanged_fn(WhileInEnterState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.WhileInEnterState", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    float p = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress;
    __this->GoProgress((double)p);
}

// public generated WhileInEnterState() [instance] :3320
void WhileInEnterState::ctor_6()
{
    uStackFrame __("Fuse.Navigation.WhileInEnterState", ".ctor()");
    ctor_5();
}

// public generated WhileInEnterState New() [static] :3320
WhileInEnterState* WhileInEnterState::New2()
{
    WhileInEnterState* obj1 = (WhileInEnterState*)uNew(WhileInEnterState_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class WhileInExitState :3307
// {
static void WhileInExitState_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(32);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInExitState__New2_fn, 0, true, WhileInExitState_typeof(), 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileInExitState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInExitState", options);
    type->SetBase(::g::Fuse::Navigation::WhileNavigationTrigger_typeof());
    type->fp_build_ = WhileInExitState_build;
    type->fp_ctor_ = (void*)WhileInExitState__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInExitState__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInExitState__OnNavigationStateChanged_fn;
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

// public generated WhileInExitState() :3307
void WhileInExitState__ctor_6_fn(WhileInExitState* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :3309
void WhileInExitState__ForceUpdate_fn(WhileInExitState* __this)
{
    uStackFrame __("Fuse.Navigation.WhileInExitState", "ForceUpdate()");
    __this->GoProgress((double)-::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress);
}

// public generated WhileInExitState New() :3307
void WhileInExitState__New2_fn(WhileInExitState** __retval)
{
    *__retval = WhileInExitState::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :3314
void WhileInExitState__OnNavigationStateChanged_fn(WhileInExitState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.WhileInExitState", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    __this->GoProgress((double)-::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress);
}

// public generated WhileInExitState() [instance] :3307
void WhileInExitState::ctor_6()
{
    uStackFrame __("Fuse.Navigation.WhileInExitState", ".ctor()");
    ctor_5();
}

// public generated WhileInExitState New() [static] :3307
WhileInExitState* WhileInExitState::New2()
{
    WhileInExitState* obj1 = (WhileInExitState*)uNew(WhileInExitState_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public sealed class WhileNavigating :3176
// {
static void WhileNavigating_build(uType* type)
{
    ::TYPES[20] = ::g::Fuse::Navigation::NavigationStateHandler_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNavigating__New2_fn, 0, true, WhileNavigating_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 27;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileNavigating);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Navigation.WhileNavigating", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = WhileNavigating_build;
    type->fp_ctor_ = (void*)WhileNavigating__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNavigating__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNavigating__OnUnrooted_fn;
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

// public generated WhileNavigating() :3176
void WhileNavigating__ctor_4_fn(WhileNavigating* __this)
{
    __this->ctor_4();
}

// public generated WhileNavigating New() :3176
void WhileNavigating__New2_fn(WhileNavigating** __retval)
{
    *__retval = WhileNavigating::New2();
}

// protected override sealed void OnRooted() :3178
void WhileNavigating__OnRooted_fn(WhileNavigating* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigating", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::Navigation::Navigation::AddStateHandler(__this->Parent(), uDelegate::New(::TYPES[20/*Fuse.Navigation.NavigationStateHandler*/], (void*)WhileNavigating__OnStateChange_fn, __this));
}

// private void OnStateChange(object s, Fuse.Navigation.NavigationStateArgs args) :3190
void WhileNavigating__OnStateChange_fn(WhileNavigating* __this, uObject* s, ::g::Fuse::Navigation::NavigationStateArgs* args)
{
    __this->OnStateChange(s, args);
}

// protected override sealed void OnUnrooted() :3184
void WhileNavigating__OnUnrooted_fn(WhileNavigating* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigating", "OnUnrooted()");
    ::g::Fuse::Navigation::Navigation::RemoveStateHandler(__this->Parent(), uDelegate::New(::TYPES[20/*Fuse.Navigation.NavigationStateHandler*/], (void*)WhileNavigating__OnStateChange_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileNavigating() [instance] :3176
void WhileNavigating::ctor_4()
{
    uStackFrame __("Fuse.Navigation.WhileNavigating", ".ctor()");
    ctor_3();
}

// private void OnStateChange(object s, Fuse.Navigation.NavigationStateArgs args) [instance] :3190
void WhileNavigating::OnStateChange(uObject* s, ::g::Fuse::Navigation::NavigationStateArgs* args)
{
    uStackFrame __("Fuse.Navigation.WhileNavigating", "OnStateChange(object,Fuse.Navigation.NavigationStateArgs)");

    if (uPtr(args)->State() != 0)
        Activate(NULL);
    else
        Deactivate();
}

// public generated WhileNavigating New() [static] :3176
WhileNavigating* WhileNavigating::New2()
{
    WhileNavigating* obj1 = (WhileNavigating*)uNew(WhileNavigating_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/0.29.22/$.uno
// -----------------------------------------------------------

// public abstract class WhileNavigationTrigger :3212
// {
static void WhileNavigationTrigger_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[24] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileNavigationTrigger_type, interface4));
    type->SetFields(28,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _hasLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _limit), 0,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _threshold), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Limit", NULL, (void*)WhileNavigationTrigger__get_Limit_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Limit", NULL, (void*)WhileNavigationTrigger__set_Limit_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Threshold", NULL, (void*)WhileNavigationTrigger__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)WhileNavigationTrigger__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

WhileNavigationTrigger_type* WhileNavigationTrigger_typeof()
{
    static uSStrong<WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileNavigationTrigger);
    options.TypeSize = sizeof(WhileNavigationTrigger_type);
    type = (WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileNavigationTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_build_ = WhileNavigationTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNavigationTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNavigationTrigger__OnUnrooted_fn;
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

// internal WhileNavigationTrigger() :3214
void WhileNavigationTrigger__ctor_5_fn(WhileNavigationTrigger* __this)
{
    __this->ctor_5();
}

// internal void GoProgress(double progress) :3267
void WhileNavigationTrigger__GoProgress_fn(WhileNavigationTrigger* __this, double* progress)
{
    __this->GoProgress(*progress);
}

// public float get_Limit() :3227
void WhileNavigationTrigger__get_Limit_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Limit();
}

// public void set_Limit(float value) :3228
void WhileNavigationTrigger__set_Limit_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Limit(*value);
}

// protected Fuse.Navigation.INavigation get_NavContext() :3236
void WhileNavigationTrigger__get_NavContext_fn(WhileNavigationTrigger* __this, uObject** __retval)
{
    *__retval = __this->NavContext();
}

// private void NavReady() :3246
void WhileNavigationTrigger__NavReady_fn(WhileNavigationTrigger* __this)
{
    __this->NavReady();
}

// private void NavUnready() :3259
void WhileNavigationTrigger__NavUnready_fn(WhileNavigationTrigger* __this)
{
    __this->NavUnready();
}

// protected override sealed void OnRooted() :3239
void WhileNavigationTrigger__OnRooted_fn(WhileNavigationTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::NavigationPageProxy::New1(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)WhileNavigationTrigger__NavReady_fn, __this), uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)WhileNavigationTrigger__NavUnready_fn, __this));
    uPtr(__this->_proxy)->Rooted(__this->Parent());
}

// protected override sealed void OnUnrooted() :3252
void WhileNavigationTrigger__OnUnrooted_fn(WhileNavigationTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "OnUnrooted()");
    uPtr(__this->_proxy)->Unrooted();
    __this->_proxy = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected Fuse.Visual get_PageContext() :3235
void WhileNavigationTrigger__get_PageContext_fn(WhileNavigationTrigger* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->PageContext();
}

// public float get_Threshold() :3219
void WhileNavigationTrigger__get_Threshold_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public void set_Threshold(float value) :3220
void WhileNavigationTrigger__set_Threshold_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Threshold(*value);
}

// internal WhileNavigationTrigger() [instance] :3214
void WhileNavigationTrigger::ctor_5()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", ".ctor()");
    _threshold = 1.0f;
    ctor_4();
}

// internal void GoProgress(double progress) [instance] :3267
void WhileNavigationTrigger::GoProgress(double progress)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "GoProgress(double)");
    bool set = progress >= (double)Threshold();

    if (_hasLimit)
        set = set && (progress <= (double)Limit());

    SetActive(set);
}

// public float get_Limit() [instance] :3227
float WhileNavigationTrigger::Limit()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "get_Limit()");
    return _limit;
}

// public void set_Limit(float value) [instance] :3228
void WhileNavigationTrigger::Limit(float value)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "set_Limit(float)");
    _limit = value;
    _hasLimit = true;
}

// protected Fuse.Navigation.INavigation get_NavContext() [instance] :3236
uObject* WhileNavigationTrigger::NavContext()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "get_NavContext()");
    return uPtr(_proxy)->Navigation();
}

// private void NavReady() [instance] :3246
void WhileNavigationTrigger::NavReady()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "NavReady()");
    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[24/*Fuse.Navigation.NavigationHandler*/], this, offsetof(WhileNavigationTrigger_type, fp_OnNavigationStateChanged)));
    ForceUpdate();
}

// private void NavUnready() [instance] :3259
void WhileNavigationTrigger::NavUnready()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "NavUnready()");
    ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[24/*Fuse.Navigation.NavigationHandler*/], this, offsetof(WhileNavigationTrigger_type, fp_OnNavigationStateChanged)));
}

// protected Fuse.Visual get_PageContext() [instance] :3235
::g::Fuse::Visual* WhileNavigationTrigger::PageContext()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "get_PageContext()");
    return uPtr(_proxy)->Page();
}

// public float get_Threshold() [instance] :3219
float WhileNavigationTrigger::Threshold()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "get_Threshold()");
    return _threshold;
}

// public void set_Threshold(float value) [instance] :3220
void WhileNavigationTrigger::Threshold(float value)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "set_Threshold(float)");
    _threshold = value;
}
// }

}}} // ::g::Fuse::Navigation
