// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIViewController
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIViewController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIViewController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSBundle.h>
#include <iOS.Foundation.NSCoder.h>
#include <iOS.Foundation.NSExtensionContext.h>
#include <iOS.UIKit.IUILayoutSupport.h>
#include <iOS.UIKit.IUIViewControllerTransitionCoordinator.h>
#include <iOS.UIKit.IUIViewControllerTransitioningDelegate.h>
#include <iOS.UIKit.UIBarButtonItem.h>
#include <iOS.UIKit.UIInterfaceOrientation.h>
#include <iOS.UIKit.UIModalPresentationStyle.h>
#include <iOS.UIKit.UIModalTransitionStyle.h>
#include <iOS.UIKit.UINavigationController.h>
#include <iOS.UIKit.UINavigationItem.h>
#include <iOS.UIKit.UIPopoverPresentationController.h>
#include <iOS.UIKit.UIPresentationController.h>
#include <iOS.UIKit.UIRectEdge.h>
#include <iOS.UIKit.UISearchDisplayController.h>
#include <iOS.UIKit.UISplitViewController.h>
#include <iOS.UIKit.UIStatusBarAnimation.h>
#include <iOS.UIKit.UIStatusBarStyle.h>
#include <iOS.UIKit.UIStoryboard.h>
#include <iOS.UIKit.UIStoryboardSegue.h>
#include <iOS.UIKit.UITabBarController.h>
#include <iOS.UIKit.UITabBarItem.h>
#include <iOS.UIKit.UITraitCollection.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.UIKit.UIViewController.h>
#include <ObjC.ID.h>
#include <ObjC.Selector.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.String.h>
#include <Uno.ULong.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIViewController :87336
// {
static void UIViewController_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIViewController_type, interface0),
        ::g::iOS::UIKit::IUIContentContainer_typeof(), offsetof(UIViewController_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(199,
        new uFunction("_attemptRotationToDeviceOrientation", NULL, (void*)UIViewController___attemptRotationToDeviceOrientation_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("addChildViewController", NULL, (void*)UIViewController__addChildViewController_fn, 0, false, uVoid_typeof(), 1, UIViewController_typeof()),
        new uFunction("applicationFinishedRestoringState", NULL, (void*)UIViewController__applicationFinishedRestoringState_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("automaticallyAdjustsScrollViewInsets", NULL, (void*)UIViewController__automaticallyAdjustsScrollViewInsets_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_AutomaticallyAdjustsScrollViewInsets", NULL, (void*)UIViewController__get_AutomaticallyAdjustsScrollViewInsets_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AutomaticallyAdjustsScrollViewInsets", NULL, (void*)UIViewController__set_AutomaticallyAdjustsScrollViewInsets_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers", NULL, (void*)UIViewController__automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("beginAppearanceTransitionAnimated", NULL, (void*)UIViewController__beginAppearanceTransitionAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("bottomLayoutGuide", NULL, (void*)UIViewController__bottomLayoutGuide_fn, 0, false, ::g::iOS::UIKit::IUILayoutSupport_typeof(), 0),
        new uFunction("get_BottomLayoutGuide", NULL, (void*)UIViewController__get_BottomLayoutGuide_fn, 0, false, ::g::iOS::UIKit::IUILayoutSupport_typeof(), 0),
        new uFunction("canPerformUnwindSegueActionFromViewControllerWithSender", NULL, (void*)UIViewController__canPerformUnwindSegueActionFromViewControllerWithSender_fn, 0, false, ::g::Uno::Bool_typeof(), 3, ::g::ObjC::Selector_typeof(), UIViewController_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("childViewControllerForStatusBarHidden", NULL, (void*)UIViewController__childViewControllerForStatusBarHidden_fn, 0, false, UIViewController_typeof(), 0),
        new uFunction("childViewControllerForStatusBarStyle", NULL, (void*)UIViewController__childViewControllerForStatusBarStyle_fn, 0, false, UIViewController_typeof(), 0),
        new uFunction("childViewControllers", NULL, (void*)UIViewController__childViewControllers_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("get_ChildViewControllers", NULL, (void*)UIViewController__get_ChildViewControllers_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("collapseSecondaryViewControllerForSplitViewController", NULL, (void*)UIViewController__collapseSecondaryViewControllerForSplitViewController_fn, 0, false, uVoid_typeof(), 2, UIViewController_typeof(), ::g::iOS::UIKit::UISplitViewController_typeof()),
        new uFunction("contentSizeForViewInPopover", NULL, (void*)UIViewController__contentSizeForViewInPopover_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("get_ContentSizeForViewInPopover", NULL, (void*)UIViewController__get_ContentSizeForViewInPopover_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("set_ContentSizeForViewInPopover", NULL, (void*)UIViewController__set_ContentSizeForViewInPopover_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("decodeRestorableStateWithCoder", NULL, (void*)UIViewController__decodeRestorableStateWithCoder_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSCoder_typeof()),
        new uFunction("definesPresentationContext", NULL, (void*)UIViewController__definesPresentationContext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_DefinesPresentationContext", NULL, (void*)UIViewController__get_DefinesPresentationContext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_DefinesPresentationContext", NULL, (void*)UIViewController__set_DefinesPresentationContext_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("didAnimateFirstHalfOfRotationToInterfaceOrientation", NULL, (void*)UIViewController__didAnimateFirstHalfOfRotationToInterfaceOrientation_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIInterfaceOrientation_typeof()),
        new uFunction("didMoveToParentViewController", NULL, (void*)UIViewController__didMoveToParentViewController_fn, 0, false, uVoid_typeof(), 1, UIViewController_typeof()),
        new uFunction("didReceiveMemoryWarning", NULL, (void*)UIViewController__didReceiveMemoryWarning_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("didRotateFromInterfaceOrientation", NULL, (void*)UIViewController__didRotateFromInterfaceOrientation_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIInterfaceOrientation_typeof()),
        new uFunction("disablesAutomaticKeyboardDismissal", NULL, (void*)UIViewController__disablesAutomaticKeyboardDismissal_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("dismissModalViewControllerAnimated", NULL, (void*)UIViewController__dismissModalViewControllerAnimated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("edgesForExtendedLayout", NULL, (void*)UIViewController__edgesForExtendedLayout_fn, 0, false, ::g::iOS::UIKit::UIRectEdge_typeof(), 0),
        new uFunction("get_EdgesForExtendedLayout", NULL, (void*)UIViewController__get_EdgesForExtendedLayout_fn, 0, false, ::g::iOS::UIKit::UIRectEdge_typeof(), 0),
        new uFunction("set_EdgesForExtendedLayout", NULL, (void*)UIViewController__set_EdgesForExtendedLayout_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIRectEdge_typeof()),
        new uFunction("editButtonItem", NULL, (void*)UIViewController__editButtonItem_fn, 0, false, ::g::iOS::UIKit::UIBarButtonItem_typeof(), 0),
        new uFunction("get_Editing", NULL, (void*)UIViewController__get_Editing_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Editing", NULL, (void*)UIViewController__set_Editing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("encodeRestorableStateWithCoder", NULL, (void*)UIViewController__encodeRestorableStateWithCoder_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSCoder_typeof()),
        new uFunction("encodeWithCoder", NULL, (void*)UIViewController__encodeWithCoder_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSCoder_typeof()),
        new uFunction("endAppearanceTransition", NULL, (void*)UIViewController__endAppearanceTransition_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("extendedLayoutIncludesOpaqueBars", NULL, (void*)UIViewController__extendedLayoutIncludesOpaqueBars_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ExtendedLayoutIncludesOpaqueBars", NULL, (void*)UIViewController__get_ExtendedLayoutIncludesOpaqueBars_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ExtendedLayoutIncludesOpaqueBars", NULL, (void*)UIViewController__set_ExtendedLayoutIncludesOpaqueBars_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("extensionContext", NULL, (void*)UIViewController__extensionContext_fn, 0, false, ::g::iOS::Foundation::NSExtensionContext_typeof(), 0),
        new uFunction("get_ExtensionContext", NULL, (void*)UIViewController__get_ExtensionContext_fn, 0, false, ::g::iOS::Foundation::NSExtensionContext_typeof(), 0),
        new uFunction("hidesBottomBarWhenPushed", NULL, (void*)UIViewController__hidesBottomBarWhenPushed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HidesBottomBarWhenPushed", NULL, (void*)UIViewController__get_HidesBottomBarWhenPushed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_HidesBottomBarWhenPushed", NULL, (void*)UIViewController__set_HidesBottomBarWhenPushed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("initWithCoder", NULL, (void*)UIViewController__initWithCoder_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSCoder_typeof()),
        new uFunction("initWithNibNameBundle", NULL, (void*)UIViewController__initWithNibNameBundle_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::iOS::Foundation::NSBundle_typeof()),
        new uFunction("interfaceOrientation", NULL, (void*)UIViewController__interfaceOrientation_fn, 0, false, ::g::iOS::UIKit::UIInterfaceOrientation_typeof(), 0),
        new uFunction("get_InterfaceOrientation", NULL, (void*)UIViewController__get_InterfaceOrientation_fn, 0, false, ::g::iOS::UIKit::UIInterfaceOrientation_typeof(), 0),
        new uFunction("isBeingDismissed", NULL, (void*)UIViewController__isBeingDismissed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isBeingPresented", NULL, (void*)UIViewController__isBeingPresented_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isEditing", NULL, (void*)UIViewController__isEditing_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isModalInPopover", NULL, (void*)UIViewController__isModalInPopover_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isMovingFromParentViewController", NULL, (void*)UIViewController__isMovingFromParentViewController_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isMovingToParentViewController", NULL, (void*)UIViewController__isMovingToParentViewController_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isViewLoaded", NULL, (void*)UIViewController__isViewLoaded_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("loadView", NULL, NULL, offsetof(UIViewController_type, fp_loadView), false, uVoid_typeof(), 0),
        new uFunction("get_ModalInPopover", NULL, (void*)UIViewController__get_ModalInPopover_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ModalInPopover", NULL, (void*)UIViewController__set_ModalInPopover_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("modalPresentationCapturesStatusBarAppearance", NULL, (void*)UIViewController__modalPresentationCapturesStatusBarAppearance_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ModalPresentationCapturesStatusBarAppearance", NULL, (void*)UIViewController__get_ModalPresentationCapturesStatusBarAppearance_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ModalPresentationCapturesStatusBarAppearance", NULL, (void*)UIViewController__set_ModalPresentationCapturesStatusBarAppearance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("modalPresentationStyle", NULL, (void*)UIViewController__modalPresentationStyle_fn, 0, false, ::g::iOS::UIKit::UIModalPresentationStyle_typeof(), 0),
        new uFunction("get_ModalPresentationStyle", NULL, (void*)UIViewController__get_ModalPresentationStyle_fn, 0, false, ::g::iOS::UIKit::UIModalPresentationStyle_typeof(), 0),
        new uFunction("set_ModalPresentationStyle", NULL, (void*)UIViewController__set_ModalPresentationStyle_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIModalPresentationStyle_typeof()),
        new uFunction("modalTransitionStyle", NULL, (void*)UIViewController__modalTransitionStyle_fn, 0, false, ::g::iOS::UIKit::UIModalTransitionStyle_typeof(), 0),
        new uFunction("get_ModalTransitionStyle", NULL, (void*)UIViewController__get_ModalTransitionStyle_fn, 0, false, ::g::iOS::UIKit::UIModalTransitionStyle_typeof(), 0),
        new uFunction("set_ModalTransitionStyle", NULL, (void*)UIViewController__set_ModalTransitionStyle_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIModalTransitionStyle_typeof()),
        new uFunction("modalViewController", NULL, (void*)UIViewController__modalViewController_fn, 0, false, UIViewController_typeof(), 0),
        new uFunction("get_ModalViewController", NULL, (void*)UIViewController__get_ModalViewController_fn, 0, false, UIViewController_typeof(), 0),
        new uFunction("navigationController", NULL, (void*)UIViewController__navigationController_fn, 0, false, ::g::iOS::UIKit::UINavigationController_typeof(), 0),
        new uFunction("get_NavigationController", NULL, (void*)UIViewController__get_NavigationController_fn, 0, false, ::g::iOS::UIKit::UINavigationController_typeof(), 0),
        new uFunction("navigationItem", NULL, (void*)UIViewController__navigationItem_fn, 0, false, ::g::iOS::UIKit::UINavigationItem_typeof(), 0),
        new uFunction("get_NavigationItem", NULL, (void*)UIViewController__get_NavigationItem_fn, 0, false, ::g::iOS::UIKit::UINavigationItem_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UIViewController__New7_fn, 0, true, UIViewController_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UIViewController__New8_fn, 0, true, UIViewController_typeof(), 1, ::g::ObjC::ID_typeof()),
        new uFunction("nibBundle", NULL, (void*)UIViewController__nibBundle_fn, 0, false, ::g::iOS::Foundation::NSBundle_typeof(), 0),
        new uFunction("get_NibBundle", NULL, (void*)UIViewController__get_NibBundle_fn, 0, false, ::g::iOS::Foundation::NSBundle_typeof(), 0),
        new uFunction("nibName", NULL, (void*)UIViewController__nibName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_NibName", NULL, (void*)UIViewController__get_NibName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("overrideTraitCollectionForChildViewController", NULL, (void*)UIViewController__overrideTraitCollectionForChildViewController_fn, 0, false, ::g::iOS::UIKit::UITraitCollection_typeof(), 1, UIViewController_typeof()),
        new uFunction("parentViewController", NULL, (void*)UIViewController__parentViewController_fn, 0, false, UIViewController_typeof(), 0),
        new uFunction("get_ParentViewController", NULL, (void*)UIViewController__get_ParentViewController_fn, 0, false, UIViewController_typeof(), 0),
        new uFunction("performSegueWithIdentifierSender", NULL, (void*)UIViewController__performSegueWithIdentifierSender_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("popoverPresentationController", NULL, (void*)UIViewController__popoverPresentationController_fn, 0, false, ::g::iOS::UIKit::UIPopoverPresentationController_typeof(), 0),
        new uFunction("get_PopoverPresentationController", NULL, (void*)UIViewController__get_PopoverPresentationController_fn, 0, false, ::g::iOS::UIKit::UIPopoverPresentationController_typeof(), 0),
        new uFunction("preferredContentSize", NULL, (void*)UIViewController__preferredContentSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("get_PreferredContentSize", NULL, (void*)UIViewController__get_PreferredContentSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("set_PreferredContentSize", NULL, (void*)UIViewController__set_PreferredContentSize_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("preferredContentSizeDidChangeForChildContentContainer", NULL, (void*)UIViewController__preferredContentSizeDidChangeForChildContentContainer_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIContentContainer_typeof()),
        new uFunction("preferredInterfaceOrientationForPresentation", NULL, (void*)UIViewController__preferredInterfaceOrientationForPresentation_fn, 0, false, ::g::iOS::UIKit::UIInterfaceOrientation_typeof(), 0),
        new uFunction("preferredStatusBarStyle", NULL, (void*)UIViewController__preferredStatusBarStyle_fn, 0, false, ::g::iOS::UIKit::UIStatusBarStyle_typeof(), 0),
        new uFunction("preferredStatusBarUpdateAnimation", NULL, (void*)UIViewController__preferredStatusBarUpdateAnimation_fn, 0, false, ::g::iOS::UIKit::UIStatusBarAnimation_typeof(), 0),
        new uFunction("prefersStatusBarHidden", NULL, (void*)UIViewController__prefersStatusBarHidden_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("prepareForSegueSender", NULL, (void*)UIViewController__prepareForSegueSender_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIStoryboardSegue_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("presentationController", NULL, (void*)UIViewController__presentationController_fn, 0, false, ::g::iOS::UIKit::UIPresentationController_typeof(), 0),
        new uFunction("get_PresentationController", NULL, (void*)UIViewController__get_PresentationController_fn, 0, false, ::g::iOS::UIKit::UIPresentationController_typeof(), 0),
        new uFunction("presentedViewController", NULL, (void*)UIViewController__presentedViewController_fn, 0, false, UIViewController_typeof(), 0),
        new uFunction("get_PresentedViewController", NULL, (void*)UIViewController__get_PresentedViewController_fn, 0, false, UIViewController_typeof(), 0),
        new uFunction("presentingViewController", NULL, (void*)UIViewController__presentingViewController_fn, 0, false, UIViewController_typeof(), 0),
        new uFunction("get_PresentingViewController", NULL, (void*)UIViewController__get_PresentingViewController_fn, 0, false, UIViewController_typeof(), 0),
        new uFunction("presentModalViewControllerAnimated", NULL, (void*)UIViewController__presentModalViewControllerAnimated_fn, 0, false, uVoid_typeof(), 2, UIViewController_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("providesPresentationContextTransitionStyle", NULL, (void*)UIViewController__providesPresentationContextTransitionStyle_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ProvidesPresentationContextTransitionStyle", NULL, (void*)UIViewController__get_ProvidesPresentationContextTransitionStyle_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ProvidesPresentationContextTransitionStyle", NULL, (void*)UIViewController__set_ProvidesPresentationContextTransitionStyle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("removeFromParentViewController", NULL, (void*)UIViewController__removeFromParentViewController_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("restorationIdentifier", NULL, (void*)UIViewController__restorationIdentifier_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_RestorationIdentifier", NULL, (void*)UIViewController__get_RestorationIdentifier_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_RestorationIdentifier", NULL, (void*)UIViewController__set_RestorationIdentifier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("rotatingFooterView", NULL, (void*)UIViewController__rotatingFooterView_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("rotatingHeaderView", NULL, (void*)UIViewController__rotatingHeaderView_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("searchDisplayController", NULL, (void*)UIViewController__searchDisplayController_fn, 0, false, ::g::iOS::UIKit::UISearchDisplayController_typeof(), 0),
        new uFunction("get_SearchDisplayController", NULL, (void*)UIViewController__get_SearchDisplayController_fn, 0, false, ::g::iOS::UIKit::UISearchDisplayController_typeof(), 0),
        new uFunction("segueForUnwindingToViewControllerFromViewControllerIdentifier", NULL, (void*)UIViewController__segueForUnwindingToViewControllerFromViewControllerIdentifier_fn, 0, false, ::g::iOS::UIKit::UIStoryboardSegue_typeof(), 3, UIViewController_typeof(), UIViewController_typeof(), ::g::Uno::String_typeof()),
        new uFunction("separateSecondaryViewControllerForSplitViewController", NULL, (void*)UIViewController__separateSecondaryViewControllerForSplitViewController_fn, 0, false, UIViewController_typeof(), 1, ::g::iOS::UIKit::UISplitViewController_typeof()),
        new uFunction("setAutomaticallyAdjustsScrollViewInsets", NULL, (void*)UIViewController__setAutomaticallyAdjustsScrollViewInsets_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setContentSizeForViewInPopover", NULL, (void*)UIViewController__setContentSizeForViewInPopover_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("setDefinesPresentationContext", NULL, (void*)UIViewController__setDefinesPresentationContext_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setEdgesForExtendedLayout", NULL, (void*)UIViewController__setEdgesForExtendedLayout_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIRectEdge_typeof()),
        new uFunction("setEditing", NULL, (void*)UIViewController__setEditing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setEditingAnimated", NULL, (void*)UIViewController__setEditingAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setExtendedLayoutIncludesOpaqueBars", NULL, (void*)UIViewController__setExtendedLayoutIncludesOpaqueBars_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setHidesBottomBarWhenPushed", NULL, (void*)UIViewController__setHidesBottomBarWhenPushed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setModalInPopover", NULL, (void*)UIViewController__setModalInPopover_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setModalPresentationCapturesStatusBarAppearance", NULL, (void*)UIViewController__setModalPresentationCapturesStatusBarAppearance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setModalPresentationStyle", NULL, (void*)UIViewController__setModalPresentationStyle_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIModalPresentationStyle_typeof()),
        new uFunction("setModalTransitionStyle", NULL, (void*)UIViewController__setModalTransitionStyle_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIModalTransitionStyle_typeof()),
        new uFunction("setNeedsStatusBarAppearanceUpdate", NULL, (void*)UIViewController__setNeedsStatusBarAppearanceUpdate_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("setOverrideTraitCollectionForChildViewController", NULL, (void*)UIViewController__setOverrideTraitCollectionForChildViewController_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UITraitCollection_typeof(), UIViewController_typeof()),
        new uFunction("setPreferredContentSize", NULL, (void*)UIViewController__setPreferredContentSize_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("setProvidesPresentationContextTransitionStyle", NULL, (void*)UIViewController__setProvidesPresentationContextTransitionStyle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setRestorationIdentifier", NULL, (void*)UIViewController__setRestorationIdentifier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("setTabBarItem", NULL, (void*)UIViewController__setTabBarItem_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UITabBarItem_typeof()),
        new uFunction("setTitle", NULL, (void*)UIViewController__setTitle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("setToolbarItems", NULL, (void*)UIViewController__setToolbarItems_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("setToolbarItemsAnimated", NULL, (void*)UIViewController__setToolbarItemsAnimated_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::Foundation::NSArray_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setTransitioningDelegate", NULL, (void*)UIViewController__setTransitioningDelegate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()),
        new uFunction("setView", NULL, (void*)UIViewController__setView_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIView_typeof()),
        new uFunction("setWantsFullScreenLayout", NULL, (void*)UIViewController__setWantsFullScreenLayout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("shouldAutomaticallyForwardAppearanceMethods", NULL, (void*)UIViewController__shouldAutomaticallyForwardAppearanceMethods_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("shouldAutomaticallyForwardRotationMethods", NULL, (void*)UIViewController__shouldAutomaticallyForwardRotationMethods_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("shouldAutorotate", NULL, (void*)UIViewController__shouldAutorotate_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("shouldAutorotateToInterfaceOrientation", NULL, (void*)UIViewController__shouldAutorotateToInterfaceOrientation_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::iOS::UIKit::UIInterfaceOrientation_typeof()),
        new uFunction("shouldPerformSegueWithIdentifierSender", NULL, (void*)UIViewController__shouldPerformSegueWithIdentifierSender_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("showDetailViewControllerSender", NULL, NULL, offsetof(UIViewController_type, fp_showDetailViewControllerSender), false, uVoid_typeof(), 2, UIViewController_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("showViewControllerSender", NULL, NULL, offsetof(UIViewController_type, fp_showViewControllerSender), false, uVoid_typeof(), 2, UIViewController_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("sizeForChildContentContainerWithParentContainerSize", NULL, (void*)UIViewController__sizeForChildContentContainerWithParentContainerSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 2, ::g::iOS::UIKit::IUIContentContainer_typeof(), ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("splitViewController", NULL, (void*)UIViewController__splitViewController_fn, 0, false, ::g::iOS::UIKit::UISplitViewController_typeof(), 0),
        new uFunction("get_SplitViewController", NULL, (void*)UIViewController__get_SplitViewController_fn, 0, false, ::g::iOS::UIKit::UISplitViewController_typeof(), 0),
        new uFunction("storyboard", NULL, (void*)UIViewController__storyboard_fn, 0, false, ::g::iOS::UIKit::UIStoryboard_typeof(), 0),
        new uFunction("get_Storyboard", NULL, (void*)UIViewController__get_Storyboard_fn, 0, false, ::g::iOS::UIKit::UIStoryboard_typeof(), 0),
        new uFunction("supportedInterfaceOrientations", NULL, (void*)UIViewController__supportedInterfaceOrientations_fn, 0, false, ::g::Uno::ULong_typeof(), 0),
        new uFunction("systemLayoutFittingSizeDidChangeForChildContentContainer", NULL, (void*)UIViewController__systemLayoutFittingSizeDidChangeForChildContentContainer_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIContentContainer_typeof()),
        new uFunction("tabBarController", NULL, (void*)UIViewController__tabBarController_fn, 0, false, ::g::iOS::UIKit::UITabBarController_typeof(), 0),
        new uFunction("get_TabBarController", NULL, (void*)UIViewController__get_TabBarController_fn, 0, false, ::g::iOS::UIKit::UITabBarController_typeof(), 0),
        new uFunction("tabBarItem", NULL, (void*)UIViewController__tabBarItem_fn, 0, false, ::g::iOS::UIKit::UITabBarItem_typeof(), 0),
        new uFunction("get_TabBarItem", NULL, (void*)UIViewController__get_TabBarItem_fn, 0, false, ::g::iOS::UIKit::UITabBarItem_typeof(), 0),
        new uFunction("set_TabBarItem", NULL, (void*)UIViewController__set_TabBarItem_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UITabBarItem_typeof()),
        new uFunction("targetViewControllerForActionSender", NULL, (void*)UIViewController__targetViewControllerForActionSender_fn, 0, false, UIViewController_typeof(), 2, ::g::ObjC::Selector_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("title", NULL, (void*)UIViewController__title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Title", NULL, (void*)UIViewController__get_Title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Title", NULL, (void*)UIViewController__set_Title_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("toolbarItems", NULL, (void*)UIViewController__toolbarItems_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("get_ToolbarItems", NULL, (void*)UIViewController__get_ToolbarItems_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("set_ToolbarItems", NULL, (void*)UIViewController__set_ToolbarItems_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("topLayoutGuide", NULL, (void*)UIViewController__topLayoutGuide_fn, 0, false, ::g::iOS::UIKit::IUILayoutSupport_typeof(), 0),
        new uFunction("get_TopLayoutGuide", NULL, (void*)UIViewController__get_TopLayoutGuide_fn, 0, false, ::g::iOS::UIKit::IUILayoutSupport_typeof(), 0),
        new uFunction("traitCollection", NULL, (void*)UIViewController__traitCollection_fn, 0, false, ::g::iOS::UIKit::UITraitCollection_typeof(), 0),
        new uFunction("get_TraitCollection", NULL, (void*)UIViewController__get_TraitCollection_fn, 0, false, ::g::iOS::UIKit::UITraitCollection_typeof(), 0),
        new uFunction("traitCollectionDidChange", NULL, (void*)UIViewController__traitCollectionDidChange_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UITraitCollection_typeof()),
        new uFunction("transitionCoordinator", NULL, (void*)UIViewController__transitionCoordinator_fn, 0, false, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof(), 0),
        new uFunction("transitioningDelegate", NULL, (void*)UIViewController__transitioningDelegate_fn, 0, false, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof(), 0),
        new uFunction("get_TransitioningDelegate", NULL, (void*)UIViewController__get_TransitioningDelegate_fn, 0, false, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof(), 0),
        new uFunction("set_TransitioningDelegate", NULL, (void*)UIViewController__set_TransitioningDelegate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()),
        new uFunction("updateViewConstraints", NULL, (void*)UIViewController__updateViewConstraints_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("view", NULL, (void*)UIViewController__view_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("get_View", NULL, (void*)UIViewController__get_View_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("set_View", NULL, (void*)UIViewController__set_View_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIView_typeof()),
        new uFunction("viewControllerForUnwindSegueActionFromViewControllerWithSender", NULL, (void*)UIViewController__viewControllerForUnwindSegueActionFromViewControllerWithSender_fn, 0, false, UIViewController_typeof(), 3, ::g::ObjC::Selector_typeof(), UIViewController_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("viewDidAppear", NULL, NULL, offsetof(UIViewController_type, fp_viewDidAppear), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("viewDidDisappear", NULL, (void*)UIViewController__viewDidDisappear_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("viewDidLayoutSubviews", NULL, (void*)UIViewController__viewDidLayoutSubviews_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("viewDidLoad", NULL, (void*)UIViewController__viewDidLoad_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("viewDidUnload", NULL, (void*)UIViewController__viewDidUnload_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("viewWillAppear", NULL, (void*)UIViewController__viewWillAppear_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("viewWillDisappear", NULL, (void*)UIViewController__viewWillDisappear_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("viewWillLayoutSubviews", NULL, (void*)UIViewController__viewWillLayoutSubviews_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("viewWillTransitionToSizeWithTransitionCoordinator", NULL, (void*)UIViewController__viewWillTransitionToSizeWithTransitionCoordinator_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::CoreGraphics::CGSize_typeof(), ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()),
        new uFunction("viewWillUnload", NULL, (void*)UIViewController__viewWillUnload_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("wantsFullScreenLayout", NULL, (void*)UIViewController__wantsFullScreenLayout_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_WantsFullScreenLayout", NULL, (void*)UIViewController__get_WantsFullScreenLayout_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_WantsFullScreenLayout", NULL, (void*)UIViewController__set_WantsFullScreenLayout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("willAnimateFirstHalfOfRotationToInterfaceOrientationDuration", NULL, (void*)UIViewController__willAnimateFirstHalfOfRotationToInterfaceOrientationDuration_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIInterfaceOrientation_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("willAnimateRotationToInterfaceOrientationDuration", NULL, (void*)UIViewController__willAnimateRotationToInterfaceOrientationDuration_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIInterfaceOrientation_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration", NULL, (void*)UIViewController__willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIInterfaceOrientation_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("willMoveToParentViewController", NULL, (void*)UIViewController__willMoveToParentViewController_fn, 0, false, uVoid_typeof(), 1, UIViewController_typeof()),
        new uFunction("willRotateToInterfaceOrientationDuration", NULL, (void*)UIViewController__willRotateToInterfaceOrientationDuration_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIInterfaceOrientation_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("willTransitionToTraitCollectionWithTransitionCoordinator", NULL, (void*)UIViewController__willTransitionToTraitCollectionWithTransitionCoordinator_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UITraitCollection_typeof(), ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

UIViewController_type* UIViewController_typeof()
{
    static uSStrong<UIViewController_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIViewController);
    options.TypeSize = sizeof(UIViewController_type);
    type = (UIViewController_type*)uClassType::New("iOS.UIKit.UIViewController", options);
    type->SetBase(::g::iOS::UIKit::UIResponder_typeof());
    type->fp_build_ = UIViewController_build;
    type->fp_ctor_ = (void*)UIViewController__New7_fn;
    type->fp_loadView = UIViewController__loadView_fn;
    type->fp_showDetailViewControllerSender = UIViewController__showDetailViewControllerSender_fn;
    type->fp_showViewControllerSender = UIViewController__showViewControllerSender_fn;
    type->fp_viewDidAppear = UIViewController__viewDidAppear_fn;
    type->interface1.fp_preferredContentSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))UIViewController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_systemLayoutFittingSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))UIViewController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_sizeForChildContentContainerWithParentContainerSize = (void(*)(uObject*, uObject*, ::g::iOS::CoreGraphics::CGSize*, ::g::iOS::CoreGraphics::CGSize*))UIViewController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn;
    type->interface1.fp_viewWillTransitionToSizeWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*, uObject*))UIViewController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn;
    type->interface1.fp_willTransitionToTraitCollectionWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::UIKit::UITraitCollection*, uObject*))UIViewController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn;
    type->interface1.fp_preferredContentSize = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*))UIViewController__preferredContentSize_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public UIViewController() :87339
void UIViewController__ctor_6_fn(UIViewController* __this)
{
    __this->ctor_6();
}

// public UIViewController(ObjC.ID __id) :87341
void UIViewController__ctor_7_fn(UIViewController* __this, ::id* __id1)
{
    __this->ctor_7(*__id1);
}

// public static extern void _attemptRotationToDeviceOrientation() :87909
void UIViewController___attemptRotationToDeviceOrientation_fn()
{
    UIViewController::_attemptRotationToDeviceOrientation();
}

// public extern void addChildViewController(iOS.UIKit.UIViewController childController) :87867
void UIViewController__addChildViewController_fn(UIViewController* __this, UIViewController* childController_)
{
    __this->addChildViewController(childController_);
}

// public extern void applicationFinishedRestoringState() :87843
void UIViewController__applicationFinishedRestoringState_fn(UIViewController* __this)
{
    __this->applicationFinishedRestoringState();
}

// public extern bool automaticallyAdjustsScrollViewInsets() :87747
void UIViewController__automaticallyAdjustsScrollViewInsets_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->automaticallyAdjustsScrollViewInsets();
}

// public bool get_AutomaticallyAdjustsScrollViewInsets() :87443
void UIViewController__get_AutomaticallyAdjustsScrollViewInsets_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->AutomaticallyAdjustsScrollViewInsets();
}

// public void set_AutomaticallyAdjustsScrollViewInsets(bool value) :87444
void UIViewController__set_AutomaticallyAdjustsScrollViewInsets_fn(UIViewController* __this, bool* value)
{
    __this->AutomaticallyAdjustsScrollViewInsets(*value);
}

// public extern bool automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers() :87852
void UIViewController__automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers();
}

// public extern void beginAppearanceTransitionAnimated(bool isAppearing, bool animated) :87873
void UIViewController__beginAppearanceTransitionAnimated_fn(UIViewController* __this, bool* isAppearing_, bool* animated_)
{
    __this->beginAppearanceTransitionAnimated(*isAppearing_, *animated_);
}

// public extern iOS.UIKit.IUILayoutSupport bottomLayoutGuide() :87825
void UIViewController__bottomLayoutGuide_fn(UIViewController* __this, uObject** __retval)
{
    *__retval = __this->bottomLayoutGuide();
}

// public iOS.UIKit.IUILayoutSupport get_BottomLayoutGuide() :87525
void UIViewController__get_BottomLayoutGuide_fn(UIViewController* __this, uObject** __retval)
{
    *__retval = __this->BottomLayoutGuide();
}

// public extern bool canPerformUnwindSegueActionFromViewControllerWithSender(ObjC.Selector action, iOS.UIKit.UIViewController fromViewController, ObjC.ID sender) :87594
void UIViewController__canPerformUnwindSegueActionFromViewControllerWithSender_fn(UIViewController* __this, uObjC::Selector* action_, UIViewController* fromViewController_, ::id* sender_, bool* __retval)
{
    *__retval = __this->canPerformUnwindSegueActionFromViewControllerWithSender(*action_, fromViewController_, *sender_);
}

// public extern iOS.UIKit.UIViewController childViewControllerForStatusBarHidden() :87882
void UIViewController__childViewControllerForStatusBarHidden_fn(UIViewController* __this, UIViewController** __retval)
{
    *__retval = __this->childViewControllerForStatusBarHidden();
}

// public extern iOS.UIKit.UIViewController childViewControllerForStatusBarStyle() :87879
void UIViewController__childViewControllerForStatusBarStyle_fn(UIViewController* __this, UIViewController** __retval)
{
    *__retval = __this->childViewControllerForStatusBarStyle();
}

// public extern iOS.Foundation.NSArray childViewControllers() :87891
void UIViewController__childViewControllers_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->childViewControllers();
}

// public iOS.Foundation.NSArray get_ChildViewControllers() :87542
void UIViewController__get_ChildViewControllers_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->ChildViewControllers();
}

// public extern void collapseSecondaryViewControllerForSplitViewController(iOS.UIKit.UIViewController secondaryViewController, iOS.UIKit.UISplitViewController splitViewController) :87768
void UIViewController__collapseSecondaryViewControllerForSplitViewController_fn(UIViewController* __this, UIViewController* secondaryViewController_, ::g::iOS::UIKit::UISplitViewController* splitViewController_)
{
    __this->collapseSecondaryViewControllerForSplitViewController(secondaryViewController_, splitViewController_);
}

// public extern iOS.CoreGraphics.CGSize contentSizeForViewInPopover() :87786
void UIViewController__contentSizeForViewInPopover_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->contentSizeForViewInPopover();
}

// public iOS.CoreGraphics.CGSize get_ContentSizeForViewInPopover() :87477
void UIViewController__get_ContentSizeForViewInPopover_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->ContentSizeForViewInPopover();
}

// public void set_ContentSizeForViewInPopover(iOS.CoreGraphics.CGSize value) :87478
void UIViewController__set_ContentSizeForViewInPopover_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* value)
{
    __this->ContentSizeForViewInPopover(*value);
}

// public extern void decodeRestorableStateWithCoder(iOS.Foundation.NSCoder coder) :87840
void UIViewController__decodeRestorableStateWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* coder_)
{
    __this->decodeRestorableStateWithCoder(coder_);
}

// public extern bool definesPresentationContext() :87699
void UIViewController__definesPresentationContext_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->definesPresentationContext();
}

// public bool get_DefinesPresentationContext() :87395
void UIViewController__get_DefinesPresentationContext_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->DefinesPresentationContext();
}

// public void set_DefinesPresentationContext(bool value) :87396
void UIViewController__set_DefinesPresentationContext_fn(UIViewController* __this, bool* value)
{
    __this->DefinesPresentationContext(*value);
}

// public extern void didAnimateFirstHalfOfRotationToInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation toInterfaceOrientation) :87942
void UIViewController__didAnimateFirstHalfOfRotationToInterfaceOrientation_fn(UIViewController* __this, int* toInterfaceOrientation_)
{
    __this->didAnimateFirstHalfOfRotationToInterfaceOrientation(*toInterfaceOrientation_);
}

// public extern void didMoveToParentViewController(iOS.UIKit.UIViewController parent) :87864
void UIViewController__didMoveToParentViewController_fn(UIViewController* __this, UIViewController* parent_)
{
    __this->didMoveToParentViewController(parent_);
}

// public extern void didReceiveMemoryWarning() :87621
void UIViewController__didReceiveMemoryWarning_fn(UIViewController* __this)
{
    __this->didReceiveMemoryWarning();
}

// public extern void didRotateFromInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation fromInterfaceOrientation) :87933
void UIViewController__didRotateFromInterfaceOrientation_fn(UIViewController* __this, int* fromInterfaceOrientation_)
{
    __this->didRotateFromInterfaceOrientation(*fromInterfaceOrientation_);
}

// public extern bool disablesAutomaticKeyboardDismissal() :87642
void UIViewController__disablesAutomaticKeyboardDismissal_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->disablesAutomaticKeyboardDismissal();
}

// public extern void dismissModalViewControllerAnimated(bool animated) :87639
void UIViewController__dismissModalViewControllerAnimated_fn(UIViewController* __this, bool* animated_)
{
    __this->dismissModalViewControllerAnimated(*animated_);
}

// public extern iOS.UIKit.UIRectEdge edgesForExtendedLayout() :87735
void UIViewController__edgesForExtendedLayout_fn(UIViewController* __this, uint32_t* __retval)
{
    *__retval = __this->edgesForExtendedLayout();
}

// public iOS.UIKit.UIRectEdge get_EdgesForExtendedLayout() :87431
void UIViewController__get_EdgesForExtendedLayout_fn(UIViewController* __this, uint32_t* __retval)
{
    *__retval = __this->EdgesForExtendedLayout();
}

// public void set_EdgesForExtendedLayout(iOS.UIKit.UIRectEdge value) :87432
void UIViewController__set_EdgesForExtendedLayout_fn(UIViewController* __this, uint32_t* value)
{
    __this->EdgesForExtendedLayout(*value);
}

// public extern iOS.UIKit.UIBarButtonItem editButtonItem() :87900
void UIViewController__editButtonItem_fn(UIViewController* __this, ::g::iOS::UIKit::UIBarButtonItem** __retval)
{
    *__retval = __this->editButtonItem();
}

// public bool get_Editing() :87552
void UIViewController__get_Editing_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->Editing();
}

// public void set_Editing(bool value) :87553
void UIViewController__set_Editing_fn(UIViewController* __this, bool* value)
{
    __this->Editing(*value);
}

// public extern void encodeRestorableStateWithCoder(iOS.Foundation.NSCoder coder) :87837
void UIViewController__encodeRestorableStateWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* coder_)
{
    __this->encodeRestorableStateWithCoder(coder_);
}

// public extern void encodeWithCoder(iOS.Foundation.NSCoder aCoder) :87951
void UIViewController__encodeWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* aCoder_)
{
    __this->encodeWithCoder(aCoder_);
}

// public extern void endAppearanceTransition() :87876
void UIViewController__endAppearanceTransition_fn(UIViewController* __this)
{
    __this->endAppearanceTransition();
}

// public extern bool extendedLayoutIncludesOpaqueBars() :87741
void UIViewController__extendedLayoutIncludesOpaqueBars_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->extendedLayoutIncludesOpaqueBars();
}

// public bool get_ExtendedLayoutIncludesOpaqueBars() :87437
void UIViewController__get_ExtendedLayoutIncludesOpaqueBars_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->ExtendedLayoutIncludesOpaqueBars();
}

// public void set_ExtendedLayoutIncludesOpaqueBars(bool value) :87438
void UIViewController__set_ExtendedLayoutIncludesOpaqueBars_fn(UIViewController* __this, bool* value)
{
    __this->ExtendedLayoutIncludesOpaqueBars(*value);
}

// public extern iOS.Foundation.NSExtensionContext extensionContext() :87819
void UIViewController__extensionContext_fn(UIViewController* __this, ::g::iOS::Foundation::NSExtensionContext** __retval)
{
    *__retval = __this->extensionContext();
}

// public iOS.Foundation.NSExtensionContext get_ExtensionContext() :87515
void UIViewController__get_ExtensionContext_fn(UIViewController* __this, ::g::iOS::Foundation::NSExtensionContext** __retval)
{
    *__retval = __this->ExtensionContext();
}

// public extern bool hidesBottomBarWhenPushed() :87804
void UIViewController__hidesBottomBarWhenPushed_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->hidesBottomBarWhenPushed();
}

// public bool get_HidesBottomBarWhenPushed() :87494
void UIViewController__get_HidesBottomBarWhenPushed_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->HidesBottomBarWhenPushed();
}

// public void set_HidesBottomBarWhenPushed(bool value) :87495
void UIViewController__set_HidesBottomBarWhenPushed_fn(UIViewController* __this, bool* value)
{
    __this->HidesBottomBarWhenPushed(*value);
}

// public extern void initWithCoder(iOS.Foundation.NSCoder aDecoder) :87954
void UIViewController__initWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* aDecoder_)
{
    __this->initWithCoder(aDecoder_);
}

// public extern void initWithNibNameBundle(string nibNameOrNil, iOS.Foundation.NSBundle nibBundleOrNil) :87567
void UIViewController__initWithNibNameBundle_fn(UIViewController* __this, uString* nibNameOrNil_, ::g::iOS::Foundation::NSBundle* nibBundleOrNil_)
{
    __this->initWithNibNameBundle(nibNameOrNil_, nibBundleOrNil_);
}

// public extern iOS.UIKit.UIInterfaceOrientation interfaceOrientation() :87948
void UIViewController__interfaceOrientation_fn(UIViewController* __this, int* __retval)
{
    *__retval = __this->interfaceOrientation();
}

// public iOS.UIKit.UIInterfaceOrientation get_InterfaceOrientation() :87558
void UIViewController__get_InterfaceOrientation_fn(UIViewController* __this, int* __retval)
{
    *__retval = __this->InterfaceOrientation();
}

// public void iOS.Foundation.INSCoding.encodeWithCoder(iOS.Foundation.NSCoder aCoder) :87977
void UIViewController__iOSFoundationINSCodingencodeWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* aCoder)
{
    uStackFrame __("iOS.UIKit.UIViewController", "iOS.Foundation.INSCoding.encodeWithCoder(iOS.Foundation.NSCoder)");
    __this->encodeWithCoder(aCoder);
}

// public void iOS.Foundation.INSCoding.initWithCoder(iOS.Foundation.NSCoder aDecoder) :87979
void UIViewController__iOSFoundationINSCodinginitWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* aDecoder)
{
    uStackFrame __("iOS.UIKit.UIViewController", "iOS.Foundation.INSCoding.initWithCoder(iOS.Foundation.NSCoder)");
    __this->initWithCoder(aDecoder);
}

// public void iOS.UIKit.IUIContentContainer.preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) :87983
void UIViewController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn(UIViewController* __this, uObject* container)
{
    uStackFrame __("iOS.UIKit.UIViewController", "iOS.UIKit.IUIContentContainer.preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer)");
    __this->preferredContentSizeDidChangeForChildContentContainer(container);
}

// public iOS.CoreGraphics.CGSize iOS.UIKit.IUIContentContainer.sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer container, iOS.CoreGraphics.CGSize parentSize) :87987
void UIViewController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn(UIViewController* __this, uObject* container, ::g::iOS::CoreGraphics::CGSize* parentSize, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    uStackFrame __("iOS.UIKit.UIViewController", "iOS.UIKit.IUIContentContainer.sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer,iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize parentSize_ = *parentSize;
    return *__retval = __this->sizeForChildContentContainerWithParentContainerSize(container, parentSize_), void();
}

// public void iOS.UIKit.IUIContentContainer.systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) :87985
void UIViewController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn(UIViewController* __this, uObject* container)
{
    uStackFrame __("iOS.UIKit.UIViewController", "iOS.UIKit.IUIContentContainer.systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer)");
    __this->systemLayoutFittingSizeDidChangeForChildContentContainer(container);
}

// public void iOS.UIKit.IUIContentContainer.viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize size, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) :87989
void UIViewController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* size, uObject* coordinator)
{
    uStackFrame __("iOS.UIKit.UIViewController", "iOS.UIKit.IUIContentContainer.viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize,iOS.UIKit.IUIViewControllerTransitionCoordinator)");
    ::g::iOS::CoreGraphics::CGSize size_ = *size;
    __this->viewWillTransitionToSizeWithTransitionCoordinator(size_, coordinator);
}

// public void iOS.UIKit.IUIContentContainer.willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection newCollection, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) :87991
void UIViewController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection* newCollection, uObject* coordinator)
{
    uStackFrame __("iOS.UIKit.UIViewController", "iOS.UIKit.IUIContentContainer.willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection,iOS.UIKit.IUIViewControllerTransitionCoordinator)");
    __this->willTransitionToTraitCollectionWithTransitionCoordinator(newCollection, coordinator);
}

// public void iOS.UIKit.IUITraitEnvironment.traitCollectionDidChange(iOS.UIKit.UITraitCollection previousTraitCollection) :87981
void UIViewController__iOSUIKitIUITraitEnvironmenttraitCollectionDidChange_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection* previousTraitCollection)
{
    uStackFrame __("iOS.UIKit.UIViewController", "iOS.UIKit.IUITraitEnvironment.traitCollectionDidChange(iOS.UIKit.UITraitCollection)");
    __this->traitCollectionDidChange(previousTraitCollection);
}

// public extern bool isBeingDismissed() :87627
void UIViewController__isBeingDismissed_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->isBeingDismissed();
}

// public extern bool isBeingPresented() :87624
void UIViewController__isBeingPresented_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->isBeingPresented();
}

// public extern bool isEditing() :87903
void UIViewController__isEditing_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->isEditing();
}

// public extern bool isModalInPopover() :87780
void UIViewController__isModalInPopover_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->isModalInPopover();
}

// public extern bool isMovingFromParentViewController() :87633
void UIViewController__isMovingFromParentViewController_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->isMovingFromParentViewController();
}

// public extern bool isMovingToParentViewController() :87630
void UIViewController__isMovingToParentViewController_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->isMovingToParentViewController();
}

// public extern bool isViewLoaded() :87582
void UIViewController__isViewLoaded_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->isViewLoaded();
}

// public virtual extern void loadView() :87570
void UIViewController__loadView_fn(UIViewController* __this)
{
    uStackFrame __("iOS.UIKit.UIViewController", "loadView()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(loadView));
}

// public bool get_ModalInPopover() :87471
void UIViewController__get_ModalInPopover_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->ModalInPopover();
}

// public void set_ModalInPopover(bool value) :87472
void UIViewController__set_ModalInPopover_fn(UIViewController* __this, bool* value)
{
    __this->ModalInPopover(*value);
}

// public extern bool modalPresentationCapturesStatusBarAppearance() :87723
void UIViewController__modalPresentationCapturesStatusBarAppearance_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->modalPresentationCapturesStatusBarAppearance();
}

// public bool get_ModalPresentationCapturesStatusBarAppearance() :87419
void UIViewController__get_ModalPresentationCapturesStatusBarAppearance_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->ModalPresentationCapturesStatusBarAppearance();
}

// public void set_ModalPresentationCapturesStatusBarAppearance(bool value) :87420
void UIViewController__set_ModalPresentationCapturesStatusBarAppearance_fn(UIViewController* __this, bool* value)
{
    __this->ModalPresentationCapturesStatusBarAppearance(*value);
}

// public extern iOS.UIKit.UIModalPresentationStyle modalPresentationStyle() :87717
void UIViewController__modalPresentationStyle_fn(UIViewController* __this, int* __retval)
{
    *__retval = __this->modalPresentationStyle();
}

// public iOS.UIKit.UIModalPresentationStyle get_ModalPresentationStyle() :87413
void UIViewController__get_ModalPresentationStyle_fn(UIViewController* __this, int* __retval)
{
    *__retval = __this->ModalPresentationStyle();
}

// public void set_ModalPresentationStyle(iOS.UIKit.UIModalPresentationStyle value) :87414
void UIViewController__set_ModalPresentationStyle_fn(UIViewController* __this, int* value)
{
    __this->ModalPresentationStyle(*value);
}

// public extern iOS.UIKit.UIModalTransitionStyle modalTransitionStyle() :87711
void UIViewController__modalTransitionStyle_fn(UIViewController* __this, int* __retval)
{
    *__retval = __this->modalTransitionStyle();
}

// public iOS.UIKit.UIModalTransitionStyle get_ModalTransitionStyle() :87407
void UIViewController__get_ModalTransitionStyle_fn(UIViewController* __this, int* __retval)
{
    *__retval = __this->ModalTransitionStyle();
}

// public void set_ModalTransitionStyle(iOS.UIKit.UIModalTransitionStyle value) :87408
void UIViewController__set_ModalTransitionStyle_fn(UIViewController* __this, int* value)
{
    __this->ModalTransitionStyle(*value);
}

// public extern iOS.UIKit.UIViewController modalViewController() :87690
void UIViewController__modalViewController_fn(UIViewController* __this, UIViewController** __retval)
{
    *__retval = __this->modalViewController();
}

// public iOS.UIKit.UIViewController get_ModalViewController() :87380
void UIViewController__get_ModalViewController_fn(UIViewController* __this, UIViewController** __retval)
{
    *__retval = __this->ModalViewController();
}

// public extern iOS.UIKit.UINavigationController navigationController() :87810
void UIViewController__navigationController_fn(UIViewController* __this, ::g::iOS::UIKit::UINavigationController** __retval)
{
    *__retval = __this->navigationController();
}

// public iOS.UIKit.UINavigationController get_NavigationController() :87500
void UIViewController__get_NavigationController_fn(UIViewController* __this, ::g::iOS::UIKit::UINavigationController** __retval)
{
    *__retval = __this->NavigationController();
}

// public extern iOS.UIKit.UINavigationItem navigationItem() :87801
void UIViewController__navigationItem_fn(UIViewController* __this, ::g::iOS::UIKit::UINavigationItem** __retval)
{
    *__retval = __this->navigationItem();
}

// public iOS.UIKit.UINavigationItem get_NavigationItem() :87489
void UIViewController__get_NavigationItem_fn(UIViewController* __this, ::g::iOS::UIKit::UINavigationItem** __retval)
{
    *__retval = __this->NavigationItem();
}

// public UIViewController New() :87339
void UIViewController__New7_fn(UIViewController** __retval)
{
    *__retval = UIViewController::New7();
}

// public UIViewController New(ObjC.ID __id) :87341
void UIViewController__New8_fn(::id* __id1, UIViewController** __retval)
{
    *__retval = UIViewController::New8(*__id1);
}

// public extern iOS.Foundation.NSBundle nibBundle() :87675
void UIViewController__nibBundle_fn(UIViewController* __this, ::g::iOS::Foundation::NSBundle** __retval)
{
    *__retval = __this->nibBundle();
}

// public iOS.Foundation.NSBundle get_NibBundle() :87359
void UIViewController__get_NibBundle_fn(UIViewController* __this, ::g::iOS::Foundation::NSBundle** __retval)
{
    *__retval = __this->NibBundle();
}

// public extern string nibName() :87672
void UIViewController__nibName_fn(UIViewController* __this, uString** __retval)
{
    *__retval = __this->nibName();
}

// public string get_NibName() :87354
void UIViewController__get_NibName_fn(UIViewController* __this, uString** __retval)
{
    *__retval = __this->NibName();
}

// public extern iOS.UIKit.UITraitCollection overrideTraitCollectionForChildViewController(iOS.UIKit.UIViewController childViewController) :87888
void UIViewController__overrideTraitCollectionForChildViewController_fn(UIViewController* __this, UIViewController* childViewController_, ::g::iOS::UIKit::UITraitCollection** __retval)
{
    *__retval = __this->overrideTraitCollectionForChildViewController(childViewController_);
}

// public extern iOS.UIKit.UIViewController parentViewController() :87687
void UIViewController__parentViewController_fn(UIViewController* __this, UIViewController** __retval)
{
    *__retval = __this->parentViewController();
}

// public iOS.UIKit.UIViewController get_ParentViewController() :87375
void UIViewController__get_ParentViewController_fn(UIViewController* __this, UIViewController** __retval)
{
    *__retval = __this->ParentViewController();
}

// public extern void performSegueWithIdentifierSender(string identifier, ObjC.ID sender) :87585
void UIViewController__performSegueWithIdentifierSender_fn(UIViewController* __this, uString* identifier_, ::id* sender_)
{
    __this->performSegueWithIdentifierSender(identifier_, *sender_);
}

// public extern iOS.UIKit.UIPopoverPresentationController popoverPresentationController() :87816
void UIViewController__popoverPresentationController_fn(UIViewController* __this, ::g::iOS::UIKit::UIPopoverPresentationController** __retval)
{
    *__retval = __this->popoverPresentationController();
}

// public iOS.UIKit.UIPopoverPresentationController get_PopoverPresentationController() :87510
void UIViewController__get_PopoverPresentationController_fn(UIViewController* __this, ::g::iOS::UIKit::UIPopoverPresentationController** __retval)
{
    *__retval = __this->PopoverPresentationController();
}

// public extern iOS.CoreGraphics.CGSize preferredContentSize() :87753
void UIViewController__preferredContentSize_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->preferredContentSize();
}

// public iOS.CoreGraphics.CGSize get_PreferredContentSize() :87449
void UIViewController__get_PreferredContentSize_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->PreferredContentSize();
}

// public void set_PreferredContentSize(iOS.CoreGraphics.CGSize value) :87450
void UIViewController__set_PreferredContentSize_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* value)
{
    __this->PreferredContentSize(*value);
}

// public extern void preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) :87963
void UIViewController__preferredContentSizeDidChangeForChildContentContainer_fn(UIViewController* __this, uObject* container_)
{
    __this->preferredContentSizeDidChangeForChildContentContainer(container_);
}

// public extern iOS.UIKit.UIInterfaceOrientation preferredInterfaceOrientationForPresentation() :87921
void UIViewController__preferredInterfaceOrientationForPresentation_fn(UIViewController* __this, int* __retval)
{
    *__retval = __this->preferredInterfaceOrientationForPresentation();
}

// public extern iOS.UIKit.UIStatusBarStyle preferredStatusBarStyle() :87645
void UIViewController__preferredStatusBarStyle_fn(UIViewController* __this, int* __retval)
{
    *__retval = __this->preferredStatusBarStyle();
}

// public extern iOS.UIKit.UIStatusBarAnimation preferredStatusBarUpdateAnimation() :87651
void UIViewController__preferredStatusBarUpdateAnimation_fn(UIViewController* __this, int* __retval)
{
    *__retval = __this->preferredStatusBarUpdateAnimation();
}

// public extern bool prefersStatusBarHidden() :87648
void UIViewController__prefersStatusBarHidden_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->prefersStatusBarHidden();
}

// public extern void prepareForSegueSender(iOS.UIKit.UIStoryboardSegue segue, ObjC.ID sender) :87591
void UIViewController__prepareForSegueSender_fn(UIViewController* __this, ::g::iOS::UIKit::UIStoryboardSegue* segue_, ::id* sender_)
{
    __this->prepareForSegueSender(segue_, *sender_);
}

// public extern iOS.UIKit.UIPresentationController presentationController() :87813
void UIViewController__presentationController_fn(UIViewController* __this, ::g::iOS::UIKit::UIPresentationController** __retval)
{
    *__retval = __this->presentationController();
}

// public iOS.UIKit.UIPresentationController get_PresentationController() :87505
void UIViewController__get_PresentationController_fn(UIViewController* __this, ::g::iOS::UIKit::UIPresentationController** __retval)
{
    *__retval = __this->PresentationController();
}

// public extern iOS.UIKit.UIViewController presentedViewController() :87693
void UIViewController__presentedViewController_fn(UIViewController* __this, UIViewController** __retval)
{
    *__retval = __this->presentedViewController();
}

// public iOS.UIKit.UIViewController get_PresentedViewController() :87385
void UIViewController__get_PresentedViewController_fn(UIViewController* __this, UIViewController** __retval)
{
    *__retval = __this->PresentedViewController();
}

// public extern iOS.UIKit.UIViewController presentingViewController() :87696
void UIViewController__presentingViewController_fn(UIViewController* __this, UIViewController** __retval)
{
    *__retval = __this->presentingViewController();
}

// public iOS.UIKit.UIViewController get_PresentingViewController() :87390
void UIViewController__get_PresentingViewController_fn(UIViewController* __this, UIViewController** __retval)
{
    *__retval = __this->PresentingViewController();
}

// public extern void presentModalViewControllerAnimated(iOS.UIKit.UIViewController modalViewController, bool animated) :87636
void UIViewController__presentModalViewControllerAnimated_fn(UIViewController* __this, UIViewController* modalViewController_, bool* animated_)
{
    __this->presentModalViewControllerAnimated(modalViewController_, *animated_);
}

// public extern bool providesPresentationContextTransitionStyle() :87705
void UIViewController__providesPresentationContextTransitionStyle_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->providesPresentationContextTransitionStyle();
}

// public bool get_ProvidesPresentationContextTransitionStyle() :87401
void UIViewController__get_ProvidesPresentationContextTransitionStyle_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->ProvidesPresentationContextTransitionStyle();
}

// public void set_ProvidesPresentationContextTransitionStyle(bool value) :87402
void UIViewController__set_ProvidesPresentationContextTransitionStyle_fn(UIViewController* __this, bool* value)
{
    __this->ProvidesPresentationContextTransitionStyle(*value);
}

// public extern void removeFromParentViewController() :87870
void UIViewController__removeFromParentViewController_fn(UIViewController* __this)
{
    __this->removeFromParentViewController();
}

// public extern string restorationIdentifier() :87846
void UIViewController__restorationIdentifier_fn(UIViewController* __this, uString** __retval)
{
    *__retval = __this->restorationIdentifier();
}

// public string get_RestorationIdentifier() :87536
void UIViewController__get_RestorationIdentifier_fn(UIViewController* __this, uString** __retval)
{
    *__retval = __this->RestorationIdentifier();
}

// public void set_RestorationIdentifier(string value) :87537
void UIViewController__set_RestorationIdentifier_fn(UIViewController* __this, uString* value)
{
    __this->RestorationIdentifier(value);
}

// public extern iOS.UIKit.UIView rotatingFooterView() :87927
void UIViewController__rotatingFooterView_fn(UIViewController* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->rotatingFooterView();
}

// public extern iOS.UIKit.UIView rotatingHeaderView() :87924
void UIViewController__rotatingHeaderView_fn(UIViewController* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->rotatingHeaderView();
}

// public extern iOS.UIKit.UISearchDisplayController searchDisplayController() :87894
void UIViewController__searchDisplayController_fn(UIViewController* __this, ::g::iOS::UIKit::UISearchDisplayController** __retval)
{
    *__retval = __this->searchDisplayController();
}

// public iOS.UIKit.UISearchDisplayController get_SearchDisplayController() :87547
void UIViewController__get_SearchDisplayController_fn(UIViewController* __this, ::g::iOS::UIKit::UISearchDisplayController** __retval)
{
    *__retval = __this->SearchDisplayController();
}

// public extern iOS.UIKit.UIStoryboardSegue segueForUnwindingToViewControllerFromViewControllerIdentifier(iOS.UIKit.UIViewController toViewController, iOS.UIKit.UIViewController fromViewController, string identifier) :87600
void UIViewController__segueForUnwindingToViewControllerFromViewControllerIdentifier_fn(UIViewController* __this, UIViewController* toViewController_, UIViewController* fromViewController_, uString* identifier_, ::g::iOS::UIKit::UIStoryboardSegue** __retval)
{
    *__retval = __this->segueForUnwindingToViewControllerFromViewControllerIdentifier(toViewController_, fromViewController_, identifier_);
}

// public extern iOS.UIKit.UIViewController separateSecondaryViewControllerForSplitViewController(iOS.UIKit.UISplitViewController splitViewController) :87771
void UIViewController__separateSecondaryViewControllerForSplitViewController_fn(UIViewController* __this, ::g::iOS::UIKit::UISplitViewController* splitViewController_, UIViewController** __retval)
{
    *__retval = __this->separateSecondaryViewControllerForSplitViewController(splitViewController_);
}

// public extern void setAutomaticallyAdjustsScrollViewInsets(bool automaticallyAdjustsScrollViewInsets) :87750
void UIViewController__setAutomaticallyAdjustsScrollViewInsets_fn(UIViewController* __this, bool* automaticallyAdjustsScrollViewInsets_)
{
    __this->setAutomaticallyAdjustsScrollViewInsets(*automaticallyAdjustsScrollViewInsets_);
}

// public extern void setContentSizeForViewInPopover(iOS.CoreGraphics.CGSize contentSizeForViewInPopover) :87789
void UIViewController__setContentSizeForViewInPopover_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* contentSizeForViewInPopover_)
{
    __this->setContentSizeForViewInPopover(*contentSizeForViewInPopover_);
}

// public extern void setDefinesPresentationContext(bool definesPresentationContext) :87702
void UIViewController__setDefinesPresentationContext_fn(UIViewController* __this, bool* definesPresentationContext_)
{
    __this->setDefinesPresentationContext(*definesPresentationContext_);
}

// public extern void setEdgesForExtendedLayout(iOS.UIKit.UIRectEdge edgesForExtendedLayout) :87738
void UIViewController__setEdgesForExtendedLayout_fn(UIViewController* __this, uint32_t* edgesForExtendedLayout_)
{
    __this->setEdgesForExtendedLayout(*edgesForExtendedLayout_);
}

// public extern void setEditing(bool editing) :87906
void UIViewController__setEditing_fn(UIViewController* __this, bool* editing_)
{
    __this->setEditing(*editing_);
}

// public extern void setEditingAnimated(bool editing, bool animated) :87897
void UIViewController__setEditingAnimated_fn(UIViewController* __this, bool* editing_, bool* animated_)
{
    __this->setEditingAnimated(*editing_, *animated_);
}

// public extern void setExtendedLayoutIncludesOpaqueBars(bool extendedLayoutIncludesOpaqueBars) :87744
void UIViewController__setExtendedLayoutIncludesOpaqueBars_fn(UIViewController* __this, bool* extendedLayoutIncludesOpaqueBars_)
{
    __this->setExtendedLayoutIncludesOpaqueBars(*extendedLayoutIncludesOpaqueBars_);
}

// public extern void setHidesBottomBarWhenPushed(bool hidesBottomBarWhenPushed) :87807
void UIViewController__setHidesBottomBarWhenPushed_fn(UIViewController* __this, bool* hidesBottomBarWhenPushed_)
{
    __this->setHidesBottomBarWhenPushed(*hidesBottomBarWhenPushed_);
}

// public extern void setModalInPopover(bool modalInPopover) :87783
void UIViewController__setModalInPopover_fn(UIViewController* __this, bool* modalInPopover_)
{
    __this->setModalInPopover(*modalInPopover_);
}

// public extern void setModalPresentationCapturesStatusBarAppearance(bool modalPresentationCapturesStatusBarAppearance) :87726
void UIViewController__setModalPresentationCapturesStatusBarAppearance_fn(UIViewController* __this, bool* modalPresentationCapturesStatusBarAppearance_)
{
    __this->setModalPresentationCapturesStatusBarAppearance(*modalPresentationCapturesStatusBarAppearance_);
}

// public extern void setModalPresentationStyle(iOS.UIKit.UIModalPresentationStyle modalPresentationStyle) :87720
void UIViewController__setModalPresentationStyle_fn(UIViewController* __this, int* modalPresentationStyle_)
{
    __this->setModalPresentationStyle(*modalPresentationStyle_);
}

// public extern void setModalTransitionStyle(iOS.UIKit.UIModalTransitionStyle modalTransitionStyle) :87714
void UIViewController__setModalTransitionStyle_fn(UIViewController* __this, int* modalTransitionStyle_)
{
    __this->setModalTransitionStyle(*modalTransitionStyle_);
}

// public extern void setNeedsStatusBarAppearanceUpdate() :87654
void UIViewController__setNeedsStatusBarAppearanceUpdate_fn(UIViewController* __this)
{
    __this->setNeedsStatusBarAppearanceUpdate();
}

// public extern void setOverrideTraitCollectionForChildViewController(iOS.UIKit.UITraitCollection collection, iOS.UIKit.UIViewController childViewController) :87885
void UIViewController__setOverrideTraitCollectionForChildViewController_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection* collection_, UIViewController* childViewController_)
{
    __this->setOverrideTraitCollectionForChildViewController(collection_, childViewController_);
}

// public extern void setPreferredContentSize(iOS.CoreGraphics.CGSize preferredContentSize) :87756
void UIViewController__setPreferredContentSize_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* preferredContentSize_)
{
    __this->setPreferredContentSize(*preferredContentSize_);
}

// public extern void setProvidesPresentationContextTransitionStyle(bool providesPresentationContextTransitionStyle) :87708
void UIViewController__setProvidesPresentationContextTransitionStyle_fn(UIViewController* __this, bool* providesPresentationContextTransitionStyle_)
{
    __this->setProvidesPresentationContextTransitionStyle(*providesPresentationContextTransitionStyle_);
}

// public extern void setRestorationIdentifier(string restorationIdentifier) :87849
void UIViewController__setRestorationIdentifier_fn(UIViewController* __this, uString* restorationIdentifier_)
{
    __this->setRestorationIdentifier(restorationIdentifier_);
}

// public extern void setTabBarItem(iOS.UIKit.UITabBarItem tabBarItem) :87762
void UIViewController__setTabBarItem_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarItem* tabBarItem_)
{
    __this->setTabBarItem(tabBarItem_);
}

// public extern void setTitle(string title) :87684
void UIViewController__setTitle_fn(UIViewController* __this, uString* title_)
{
    __this->setTitle(title_);
}

// public extern void setToolbarItems(iOS.Foundation.NSArray toolbarItems) :87798
void UIViewController__setToolbarItems_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray* toolbarItems_)
{
    __this->setToolbarItems(toolbarItems_);
}

// public extern void setToolbarItemsAnimated(iOS.Foundation.NSArray toolbarItems, bool animated) :87792
void UIViewController__setToolbarItemsAnimated_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray* toolbarItems_, bool* animated_)
{
    __this->setToolbarItemsAnimated(toolbarItems_, *animated_);
}

// public extern void setTransitioningDelegate(iOS.UIKit.IUIViewControllerTransitioningDelegate transitioningDelegate) :87831
void UIViewController__setTransitioningDelegate_fn(UIViewController* __this, uObject* transitioningDelegate_)
{
    __this->setTransitioningDelegate(transitioningDelegate_);
}

// public extern void setView(iOS.UIKit.UIView view) :87669
void UIViewController__setView_fn(UIViewController* __this, ::g::iOS::UIKit::UIView* view_)
{
    __this->setView(view_);
}

// public extern void setWantsFullScreenLayout(bool wantsFullScreenLayout) :87732
void UIViewController__setWantsFullScreenLayout_fn(UIViewController* __this, bool* wantsFullScreenLayout_)
{
    __this->setWantsFullScreenLayout(*wantsFullScreenLayout_);
}

// public extern bool shouldAutomaticallyForwardAppearanceMethods() :87858
void UIViewController__shouldAutomaticallyForwardAppearanceMethods_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->shouldAutomaticallyForwardAppearanceMethods();
}

// public extern bool shouldAutomaticallyForwardRotationMethods() :87855
void UIViewController__shouldAutomaticallyForwardRotationMethods_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->shouldAutomaticallyForwardRotationMethods();
}

// public extern bool shouldAutorotate() :87915
void UIViewController__shouldAutorotate_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->shouldAutorotate();
}

// public extern bool shouldAutorotateToInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation toInterfaceOrientation) :87912
void UIViewController__shouldAutorotateToInterfaceOrientation_fn(UIViewController* __this, int* toInterfaceOrientation_, bool* __retval)
{
    *__retval = __this->shouldAutorotateToInterfaceOrientation(*toInterfaceOrientation_);
}

// public extern bool shouldPerformSegueWithIdentifierSender(string identifier, ObjC.ID sender) :87588
void UIViewController__shouldPerformSegueWithIdentifierSender_fn(UIViewController* __this, uString* identifier_, ::id* sender_, bool* __retval)
{
    *__retval = __this->shouldPerformSegueWithIdentifierSender(identifier_, *sender_);
}

// public virtual extern void showDetailViewControllerSender(iOS.UIKit.UIViewController vc, ObjC.ID sender) :87663
void UIViewController__showDetailViewControllerSender_fn(UIViewController* __this, UIViewController* vc_, ::id* sender_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "showDetailViewControllerSender(iOS.UIKit.UIViewController,ObjC.ID)");
    ::id sender__ = *sender_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(showDetailViewController:sender:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)vc_),
        (::id)sender__);
}

// public virtual extern void showViewControllerSender(iOS.UIKit.UIViewController vc, ObjC.ID sender) :87660
void UIViewController__showViewControllerSender_fn(UIViewController* __this, UIViewController* vc_, ::id* sender_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "showViewControllerSender(iOS.UIKit.UIViewController,ObjC.ID)");
    ::id sender__ = *sender_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(showViewController:sender:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)vc_),
        (::id)sender__);
}

// public extern iOS.CoreGraphics.CGSize sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer container, iOS.CoreGraphics.CGSize parentSize) :87969
void UIViewController__sizeForChildContentContainerWithParentContainerSize_fn(UIViewController* __this, uObject* container_, ::g::iOS::CoreGraphics::CGSize* parentSize_, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->sizeForChildContentContainerWithParentContainerSize(container_, *parentSize_);
}

// public extern iOS.UIKit.UISplitViewController splitViewController() :87774
void UIViewController__splitViewController_fn(UIViewController* __this, ::g::iOS::UIKit::UISplitViewController** __retval)
{
    *__retval = __this->splitViewController();
}

// public iOS.UIKit.UISplitViewController get_SplitViewController() :87466
void UIViewController__get_SplitViewController_fn(UIViewController* __this, ::g::iOS::UIKit::UISplitViewController** __retval)
{
    *__retval = __this->SplitViewController();
}

// public extern iOS.UIKit.UIStoryboard storyboard() :87678
void UIViewController__storyboard_fn(UIViewController* __this, ::g::iOS::UIKit::UIStoryboard** __retval)
{
    *__retval = __this->storyboard();
}

// public iOS.UIKit.UIStoryboard get_Storyboard() :87364
void UIViewController__get_Storyboard_fn(UIViewController* __this, ::g::iOS::UIKit::UIStoryboard** __retval)
{
    *__retval = __this->Storyboard();
}

// public extern ulong supportedInterfaceOrientations() :87918
void UIViewController__supportedInterfaceOrientations_fn(UIViewController* __this, uint64_t* __retval)
{
    *__retval = __this->supportedInterfaceOrientations();
}

// public extern void systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) :87966
void UIViewController__systemLayoutFittingSizeDidChangeForChildContentContainer_fn(UIViewController* __this, uObject* container_)
{
    __this->systemLayoutFittingSizeDidChangeForChildContentContainer(container_);
}

// public extern iOS.UIKit.UITabBarController tabBarController() :87765
void UIViewController__tabBarController_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarController** __retval)
{
    *__retval = __this->tabBarController();
}

// public iOS.UIKit.UITabBarController get_TabBarController() :87461
void UIViewController__get_TabBarController_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarController** __retval)
{
    *__retval = __this->TabBarController();
}

// public extern iOS.UIKit.UITabBarItem tabBarItem() :87759
void UIViewController__tabBarItem_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarItem** __retval)
{
    *__retval = __this->tabBarItem();
}

// public iOS.UIKit.UITabBarItem get_TabBarItem() :87455
void UIViewController__get_TabBarItem_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarItem** __retval)
{
    *__retval = __this->TabBarItem();
}

// public void set_TabBarItem(iOS.UIKit.UITabBarItem value) :87456
void UIViewController__set_TabBarItem_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarItem* value)
{
    __this->TabBarItem(value);
}

// public extern iOS.UIKit.UIViewController targetViewControllerForActionSender(ObjC.Selector action, ObjC.ID sender) :87657
void UIViewController__targetViewControllerForActionSender_fn(UIViewController* __this, uObjC::Selector* action_, ::id* sender_, UIViewController** __retval)
{
    *__retval = __this->targetViewControllerForActionSender(*action_, *sender_);
}

// public extern string title() :87681
void UIViewController__title_fn(UIViewController* __this, uString** __retval)
{
    *__retval = __this->title();
}

// public string get_Title() :87369
void UIViewController__get_Title_fn(UIViewController* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :87370
void UIViewController__set_Title_fn(UIViewController* __this, uString* value)
{
    __this->Title(value);
}

// public extern iOS.Foundation.NSArray toolbarItems() :87795
void UIViewController__toolbarItems_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->toolbarItems();
}

// public iOS.Foundation.NSArray get_ToolbarItems() :87483
void UIViewController__get_ToolbarItems_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->ToolbarItems();
}

// public void set_ToolbarItems(iOS.Foundation.NSArray value) :87484
void UIViewController__set_ToolbarItems_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray* value)
{
    __this->ToolbarItems(value);
}

// public extern iOS.UIKit.IUILayoutSupport topLayoutGuide() :87822
void UIViewController__topLayoutGuide_fn(UIViewController* __this, uObject** __retval)
{
    *__retval = __this->topLayoutGuide();
}

// public iOS.UIKit.IUILayoutSupport get_TopLayoutGuide() :87520
void UIViewController__get_TopLayoutGuide_fn(UIViewController* __this, uObject** __retval)
{
    *__retval = __this->TopLayoutGuide();
}

// public extern iOS.UIKit.UITraitCollection traitCollection() :87960
void UIViewController__traitCollection_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection** __retval)
{
    *__retval = __this->traitCollection();
}

// public iOS.UIKit.UITraitCollection get_TraitCollection() :87563
void UIViewController__get_TraitCollection_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection** __retval)
{
    *__retval = __this->TraitCollection();
}

// public extern void traitCollectionDidChange(iOS.UIKit.UITraitCollection previousTraitCollection) :87957
void UIViewController__traitCollectionDidChange_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection* previousTraitCollection_)
{
    __this->traitCollectionDidChange(previousTraitCollection_);
}

// public extern iOS.UIKit.IUIViewControllerTransitionCoordinator transitionCoordinator() :87777
void UIViewController__transitionCoordinator_fn(UIViewController* __this, uObject** __retval)
{
    *__retval = __this->transitionCoordinator();
}

// public extern iOS.UIKit.IUIViewControllerTransitioningDelegate transitioningDelegate() :87828
void UIViewController__transitioningDelegate_fn(UIViewController* __this, uObject** __retval)
{
    *__retval = __this->transitioningDelegate();
}

// public iOS.UIKit.IUIViewControllerTransitioningDelegate get_TransitioningDelegate() :87530
void UIViewController__get_TransitioningDelegate_fn(UIViewController* __this, uObject** __retval)
{
    *__retval = __this->TransitioningDelegate();
}

// public void set_TransitioningDelegate(iOS.UIKit.IUIViewControllerTransitioningDelegate value) :87531
void UIViewController__set_TransitioningDelegate_fn(UIViewController* __this, uObject* value)
{
    __this->TransitioningDelegate(value);
}

// public extern void updateViewConstraints() :87834
void UIViewController__updateViewConstraints_fn(UIViewController* __this)
{
    __this->updateViewConstraints();
}

// public extern iOS.UIKit.UIView view() :87666
void UIViewController__view_fn(UIViewController* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->view();
}

// public iOS.UIKit.UIView get_View() :87348
void UIViewController__get_View_fn(UIViewController* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->View();
}

// public void set_View(iOS.UIKit.UIView value) :87349
void UIViewController__set_View_fn(UIViewController* __this, ::g::iOS::UIKit::UIView* value)
{
    __this->View(value);
}

// public extern iOS.UIKit.UIViewController viewControllerForUnwindSegueActionFromViewControllerWithSender(ObjC.Selector action, iOS.UIKit.UIViewController fromViewController, ObjC.ID sender) :87597
void UIViewController__viewControllerForUnwindSegueActionFromViewControllerWithSender_fn(UIViewController* __this, uObjC::Selector* action_, UIViewController* fromViewController_, ::id* sender_, UIViewController** __retval)
{
    *__retval = __this->viewControllerForUnwindSegueActionFromViewControllerWithSender(*action_, fromViewController_, *sender_);
}

// public virtual extern void viewDidAppear(bool animated) :87606
void UIViewController__viewDidAppear_fn(UIViewController* __this, bool* animated_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewDidAppear(bool)");
    bool animated__ = *animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(viewDidAppear:),
        (BOOL)animated__);
}

// public extern void viewDidDisappear(bool animated) :87612
void UIViewController__viewDidDisappear_fn(UIViewController* __this, bool* animated_)
{
    __this->viewDidDisappear(*animated_);
}

// public extern void viewDidLayoutSubviews() :87618
void UIViewController__viewDidLayoutSubviews_fn(UIViewController* __this)
{
    __this->viewDidLayoutSubviews();
}

// public extern void viewDidLoad() :87579
void UIViewController__viewDidLoad_fn(UIViewController* __this)
{
    __this->viewDidLoad();
}

// public extern void viewDidUnload() :87576
void UIViewController__viewDidUnload_fn(UIViewController* __this)
{
    __this->viewDidUnload();
}

// public extern void viewWillAppear(bool animated) :87603
void UIViewController__viewWillAppear_fn(UIViewController* __this, bool* animated_)
{
    __this->viewWillAppear(*animated_);
}

// public extern void viewWillDisappear(bool animated) :87609
void UIViewController__viewWillDisappear_fn(UIViewController* __this, bool* animated_)
{
    __this->viewWillDisappear(*animated_);
}

// public extern void viewWillLayoutSubviews() :87615
void UIViewController__viewWillLayoutSubviews_fn(UIViewController* __this)
{
    __this->viewWillLayoutSubviews();
}

// public extern void viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize size, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) :87972
void UIViewController__viewWillTransitionToSizeWithTransitionCoordinator_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* size_, uObject* coordinator_)
{
    __this->viewWillTransitionToSizeWithTransitionCoordinator(*size_, coordinator_);
}

// public extern void viewWillUnload() :87573
void UIViewController__viewWillUnload_fn(UIViewController* __this)
{
    __this->viewWillUnload();
}

// public extern bool wantsFullScreenLayout() :87729
void UIViewController__wantsFullScreenLayout_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->wantsFullScreenLayout();
}

// public bool get_WantsFullScreenLayout() :87425
void UIViewController__get_WantsFullScreenLayout_fn(UIViewController* __this, bool* __retval)
{
    *__retval = __this->WantsFullScreenLayout();
}

// public void set_WantsFullScreenLayout(bool value) :87426
void UIViewController__set_WantsFullScreenLayout_fn(UIViewController* __this, bool* value)
{
    __this->WantsFullScreenLayout(*value);
}

// public extern void willAnimateFirstHalfOfRotationToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation toInterfaceOrientation, double duration) :87939
void UIViewController__willAnimateFirstHalfOfRotationToInterfaceOrientationDuration_fn(UIViewController* __this, int* toInterfaceOrientation_, double* duration_)
{
    __this->willAnimateFirstHalfOfRotationToInterfaceOrientationDuration(*toInterfaceOrientation_, *duration_);
}

// public extern void willAnimateRotationToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation toInterfaceOrientation, double duration) :87936
void UIViewController__willAnimateRotationToInterfaceOrientationDuration_fn(UIViewController* __this, int* toInterfaceOrientation_, double* duration_)
{
    __this->willAnimateRotationToInterfaceOrientationDuration(*toInterfaceOrientation_, *duration_);
}

// public extern void willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation fromInterfaceOrientation, double duration) :87945
void UIViewController__willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration_fn(UIViewController* __this, int* fromInterfaceOrientation_, double* duration_)
{
    __this->willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration(*fromInterfaceOrientation_, *duration_);
}

// public extern void willMoveToParentViewController(iOS.UIKit.UIViewController parent) :87861
void UIViewController__willMoveToParentViewController_fn(UIViewController* __this, UIViewController* parent_)
{
    __this->willMoveToParentViewController(parent_);
}

// public extern void willRotateToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation toInterfaceOrientation, double duration) :87930
void UIViewController__willRotateToInterfaceOrientationDuration_fn(UIViewController* __this, int* toInterfaceOrientation_, double* duration_)
{
    __this->willRotateToInterfaceOrientationDuration(*toInterfaceOrientation_, *duration_);
}

// public extern void willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection newCollection, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) :87975
void UIViewController__willTransitionToTraitCollectionWithTransitionCoordinator_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_)
{
    __this->willTransitionToTraitCollectionWithTransitionCoordinator(newCollection_, coordinator_);
}

// public UIViewController() [instance] :87339
void UIViewController::ctor_6()
{
    uStackFrame __("iOS.UIKit.UIViewController", ".ctor()");
    ctor_4();
}

// public UIViewController(ObjC.ID __id) [instance] :87341
void UIViewController::ctor_7(::id __id1)
{
    uStackFrame __("iOS.UIKit.UIViewController", ".ctor(ObjC.ID)");
    ctor_5(__id1);
}

// public extern void addChildViewController(iOS.UIKit.UIViewController childController) [instance] :87867
void UIViewController::addChildViewController(UIViewController* childController_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "addChildViewController(iOS.UIKit.UIViewController)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addChildViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)childController_));
}

// public extern void applicationFinishedRestoringState() [instance] :87843
void UIViewController::applicationFinishedRestoringState()
{
    uStackFrame __("iOS.UIKit.UIViewController", "applicationFinishedRestoringState()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(applicationFinishedRestoringState));
}

// public extern bool automaticallyAdjustsScrollViewInsets() [instance] :87747
bool UIViewController::automaticallyAdjustsScrollViewInsets()
{
    uStackFrame __("iOS.UIKit.UIViewController", "automaticallyAdjustsScrollViewInsets()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(automaticallyAdjustsScrollViewInsets));
    return (bool)__return;
}

// public bool get_AutomaticallyAdjustsScrollViewInsets() [instance] :87443
bool UIViewController::AutomaticallyAdjustsScrollViewInsets()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_AutomaticallyAdjustsScrollViewInsets()");
    return automaticallyAdjustsScrollViewInsets();
}

// public void set_AutomaticallyAdjustsScrollViewInsets(bool value) [instance] :87444
void UIViewController::AutomaticallyAdjustsScrollViewInsets(bool value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_AutomaticallyAdjustsScrollViewInsets(bool)");
    setAutomaticallyAdjustsScrollViewInsets(value);
}

// public extern bool automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers() [instance] :87852
bool UIViewController::automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers()
{
    uStackFrame __("iOS.UIKit.UIViewController", "automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers));
    return (bool)__return;
}

// public extern void beginAppearanceTransitionAnimated(bool isAppearing, bool animated) [instance] :87873
void UIViewController::beginAppearanceTransitionAnimated(bool isAppearing_, bool animated_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "beginAppearanceTransitionAnimated(bool,bool)");
    bool isAppearing__ = isAppearing_;
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(beginAppearanceTransition:animated:),
        (BOOL)isAppearing__,
        (BOOL)animated__);
}

// public extern iOS.UIKit.IUILayoutSupport bottomLayoutGuide() [instance] :87825
uObject* UIViewController::bottomLayoutGuide()
{
    uStackFrame __("iOS.UIKit.UIViewController", "bottomLayoutGuide()");
    id<UILayoutSupport> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UILayoutSupport>, @selector(bottomLayoutGuide));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUILayoutSupport_typeof());
}

// public iOS.UIKit.IUILayoutSupport get_BottomLayoutGuide() [instance] :87525
uObject* UIViewController::BottomLayoutGuide()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_BottomLayoutGuide()");
    return bottomLayoutGuide();
}

// public extern bool canPerformUnwindSegueActionFromViewControllerWithSender(ObjC.Selector action, iOS.UIKit.UIViewController fromViewController, ObjC.ID sender) [instance] :87594
bool UIViewController::canPerformUnwindSegueActionFromViewControllerWithSender(uObjC::Selector action_, UIViewController* fromViewController_, ::id sender_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "canPerformUnwindSegueActionFromViewControllerWithSender(ObjC.Selector,iOS.UIKit.UIViewController,ObjC.ID)");
    uObjC::Selector action__ = action_;
    ::id sender__ = sender_;
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(canPerformUnwindSegueAction:fromViewController:withSender:),
        (::SEL)action__,
        uObjC::Lifetime::GetNativeHandle((::uObject *)fromViewController_),
        (::id)sender__);
    return (bool)__return;
}

// public extern iOS.UIKit.UIViewController childViewControllerForStatusBarHidden() [instance] :87882
UIViewController* UIViewController::childViewControllerForStatusBarHidden()
{
    uStackFrame __("iOS.UIKit.UIViewController", "childViewControllerForStatusBarHidden()");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(childViewControllerForStatusBarHidden));
    return (UIViewController*)uObjC::Lifetime::GetUnoObject(__return, UIViewController_typeof());
}

// public extern iOS.UIKit.UIViewController childViewControllerForStatusBarStyle() [instance] :87879
UIViewController* UIViewController::childViewControllerForStatusBarStyle()
{
    uStackFrame __("iOS.UIKit.UIViewController", "childViewControllerForStatusBarStyle()");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(childViewControllerForStatusBarStyle));
    return (UIViewController*)uObjC::Lifetime::GetUnoObject(__return, UIViewController_typeof());
}

// public extern iOS.Foundation.NSArray childViewControllers() [instance] :87891
::g::iOS::Foundation::NSArray* UIViewController::childViewControllers()
{
    uStackFrame __("iOS.UIKit.UIViewController", "childViewControllers()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(childViewControllers));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_ChildViewControllers() [instance] :87542
::g::iOS::Foundation::NSArray* UIViewController::ChildViewControllers()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ChildViewControllers()");
    return childViewControllers();
}

// public extern void collapseSecondaryViewControllerForSplitViewController(iOS.UIKit.UIViewController secondaryViewController, iOS.UIKit.UISplitViewController splitViewController) [instance] :87768
void UIViewController::collapseSecondaryViewControllerForSplitViewController(UIViewController* secondaryViewController_, ::g::iOS::UIKit::UISplitViewController* splitViewController_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "collapseSecondaryViewControllerForSplitViewController(iOS.UIKit.UIViewController,iOS.UIKit.UISplitViewController)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(collapseSecondaryViewController:forSplitViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)secondaryViewController_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)splitViewController_));
}

// public extern iOS.CoreGraphics.CGSize contentSizeForViewInPopover() [instance] :87786
::g::iOS::CoreGraphics::CGSize UIViewController::contentSizeForViewInPopover()
{
    uStackFrame __("iOS.UIKit.UIViewController", "contentSizeForViewInPopover()");
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(contentSizeForViewInPopover));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public iOS.CoreGraphics.CGSize get_ContentSizeForViewInPopover() [instance] :87477
::g::iOS::CoreGraphics::CGSize UIViewController::ContentSizeForViewInPopover()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ContentSizeForViewInPopover()");
    return contentSizeForViewInPopover();
}

// public void set_ContentSizeForViewInPopover(iOS.CoreGraphics.CGSize value) [instance] :87478
void UIViewController::ContentSizeForViewInPopover(::g::iOS::CoreGraphics::CGSize value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_ContentSizeForViewInPopover(iOS.CoreGraphics.CGSize)");
    setContentSizeForViewInPopover(value);
}

// public extern void decodeRestorableStateWithCoder(iOS.Foundation.NSCoder coder) [instance] :87840
void UIViewController::decodeRestorableStateWithCoder(::g::iOS::Foundation::NSCoder* coder_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "decodeRestorableStateWithCoder(iOS.Foundation.NSCoder)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(decodeRestorableStateWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coder_));
}

// public extern bool definesPresentationContext() [instance] :87699
bool UIViewController::definesPresentationContext()
{
    uStackFrame __("iOS.UIKit.UIViewController", "definesPresentationContext()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(definesPresentationContext));
    return (bool)__return;
}

// public bool get_DefinesPresentationContext() [instance] :87395
bool UIViewController::DefinesPresentationContext()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_DefinesPresentationContext()");
    return definesPresentationContext();
}

// public void set_DefinesPresentationContext(bool value) [instance] :87396
void UIViewController::DefinesPresentationContext(bool value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_DefinesPresentationContext(bool)");
    setDefinesPresentationContext(value);
}

// public extern void didAnimateFirstHalfOfRotationToInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation toInterfaceOrientation) [instance] :87942
void UIViewController::didAnimateFirstHalfOfRotationToInterfaceOrientation(int toInterfaceOrientation_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "didAnimateFirstHalfOfRotationToInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation)");
    int toInterfaceOrientation__ = toInterfaceOrientation_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(didAnimateFirstHalfOfRotationToInterfaceOrientation:),
        ::UIInterfaceOrientation(toInterfaceOrientation__));
}

// public extern void didMoveToParentViewController(iOS.UIKit.UIViewController parent) [instance] :87864
void UIViewController::didMoveToParentViewController(UIViewController* parent_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "didMoveToParentViewController(iOS.UIKit.UIViewController)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(didMoveToParentViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)parent_));
}

// public extern void didReceiveMemoryWarning() [instance] :87621
void UIViewController::didReceiveMemoryWarning()
{
    uStackFrame __("iOS.UIKit.UIViewController", "didReceiveMemoryWarning()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(didReceiveMemoryWarning));
}

// public extern void didRotateFromInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation fromInterfaceOrientation) [instance] :87933
void UIViewController::didRotateFromInterfaceOrientation(int fromInterfaceOrientation_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "didRotateFromInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation)");
    int fromInterfaceOrientation__ = fromInterfaceOrientation_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(didRotateFromInterfaceOrientation:),
        ::UIInterfaceOrientation(fromInterfaceOrientation__));
}

// public extern bool disablesAutomaticKeyboardDismissal() [instance] :87642
bool UIViewController::disablesAutomaticKeyboardDismissal()
{
    uStackFrame __("iOS.UIKit.UIViewController", "disablesAutomaticKeyboardDismissal()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(disablesAutomaticKeyboardDismissal));
    return (bool)__return;
}

// public extern void dismissModalViewControllerAnimated(bool animated) [instance] :87639
void UIViewController::dismissModalViewControllerAnimated(bool animated_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "dismissModalViewControllerAnimated(bool)");
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(dismissModalViewControllerAnimated:),
        (BOOL)animated__);
}

// public extern iOS.UIKit.UIRectEdge edgesForExtendedLayout() [instance] :87735
uint32_t UIViewController::edgesForExtendedLayout()
{
    uStackFrame __("iOS.UIKit.UIViewController", "edgesForExtendedLayout()");
    ::UIRectEdge __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIRectEdge, @selector(edgesForExtendedLayout));
    return uint32_t(__return);
}

// public iOS.UIKit.UIRectEdge get_EdgesForExtendedLayout() [instance] :87431
uint32_t UIViewController::EdgesForExtendedLayout()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_EdgesForExtendedLayout()");
    return edgesForExtendedLayout();
}

// public void set_EdgesForExtendedLayout(iOS.UIKit.UIRectEdge value) [instance] :87432
void UIViewController::EdgesForExtendedLayout(uint32_t value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_EdgesForExtendedLayout(iOS.UIKit.UIRectEdge)");
    setEdgesForExtendedLayout(value);
}

// public extern iOS.UIKit.UIBarButtonItem editButtonItem() [instance] :87900
::g::iOS::UIKit::UIBarButtonItem* UIViewController::editButtonItem()
{
    uStackFrame __("iOS.UIKit.UIViewController", "editButtonItem()");
    ::UIBarButtonItem* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIBarButtonItem*, @selector(editButtonItem));
    return (::g::iOS::UIKit::UIBarButtonItem*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIBarButtonItem_typeof());
}

// public bool get_Editing() [instance] :87552
bool UIViewController::Editing()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_Editing()");
    return isEditing();
}

// public void set_Editing(bool value) [instance] :87553
void UIViewController::Editing(bool value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_Editing(bool)");
    setEditing(value);
}

// public extern void encodeRestorableStateWithCoder(iOS.Foundation.NSCoder coder) [instance] :87837
void UIViewController::encodeRestorableStateWithCoder(::g::iOS::Foundation::NSCoder* coder_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "encodeRestorableStateWithCoder(iOS.Foundation.NSCoder)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(encodeRestorableStateWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coder_));
}

// public extern void encodeWithCoder(iOS.Foundation.NSCoder aCoder) [instance] :87951
void UIViewController::encodeWithCoder(::g::iOS::Foundation::NSCoder* aCoder_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "encodeWithCoder(iOS.Foundation.NSCoder)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(encodeWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aCoder_));
}

// public extern void endAppearanceTransition() [instance] :87876
void UIViewController::endAppearanceTransition()
{
    uStackFrame __("iOS.UIKit.UIViewController", "endAppearanceTransition()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(endAppearanceTransition));
}

// public extern bool extendedLayoutIncludesOpaqueBars() [instance] :87741
bool UIViewController::extendedLayoutIncludesOpaqueBars()
{
    uStackFrame __("iOS.UIKit.UIViewController", "extendedLayoutIncludesOpaqueBars()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(extendedLayoutIncludesOpaqueBars));
    return (bool)__return;
}

// public bool get_ExtendedLayoutIncludesOpaqueBars() [instance] :87437
bool UIViewController::ExtendedLayoutIncludesOpaqueBars()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ExtendedLayoutIncludesOpaqueBars()");
    return extendedLayoutIncludesOpaqueBars();
}

// public void set_ExtendedLayoutIncludesOpaqueBars(bool value) [instance] :87438
void UIViewController::ExtendedLayoutIncludesOpaqueBars(bool value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_ExtendedLayoutIncludesOpaqueBars(bool)");
    setExtendedLayoutIncludesOpaqueBars(value);
}

// public extern iOS.Foundation.NSExtensionContext extensionContext() [instance] :87819
::g::iOS::Foundation::NSExtensionContext* UIViewController::extensionContext()
{
    uStackFrame __("iOS.UIKit.UIViewController", "extensionContext()");
    ::NSExtensionContext* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSExtensionContext*, @selector(extensionContext));
    return (::g::iOS::Foundation::NSExtensionContext*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSExtensionContext_typeof());
}

// public iOS.Foundation.NSExtensionContext get_ExtensionContext() [instance] :87515
::g::iOS::Foundation::NSExtensionContext* UIViewController::ExtensionContext()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ExtensionContext()");
    return extensionContext();
}

// public extern bool hidesBottomBarWhenPushed() [instance] :87804
bool UIViewController::hidesBottomBarWhenPushed()
{
    uStackFrame __("iOS.UIKit.UIViewController", "hidesBottomBarWhenPushed()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(hidesBottomBarWhenPushed));
    return (bool)__return;
}

// public bool get_HidesBottomBarWhenPushed() [instance] :87494
bool UIViewController::HidesBottomBarWhenPushed()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_HidesBottomBarWhenPushed()");
    return hidesBottomBarWhenPushed();
}

// public void set_HidesBottomBarWhenPushed(bool value) [instance] :87495
void UIViewController::HidesBottomBarWhenPushed(bool value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_HidesBottomBarWhenPushed(bool)");
    setHidesBottomBarWhenPushed(value);
}

// public extern void initWithCoder(iOS.Foundation.NSCoder aDecoder) [instance] :87954
void UIViewController::initWithCoder(::g::iOS::Foundation::NSCoder* aDecoder_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "initWithCoder(iOS.Foundation.NSCoder)");
    uObjC_DO_INIT(this, @selector(initWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aDecoder_));
}

// public extern void initWithNibNameBundle(string nibNameOrNil, iOS.Foundation.NSBundle nibBundleOrNil) [instance] :87567
void UIViewController::initWithNibNameBundle(uString* nibNameOrNil_, ::g::iOS::Foundation::NSBundle* nibBundleOrNil_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "initWithNibNameBundle(string,iOS.Foundation.NSBundle)");
    uObjC_DO_INIT(this, @selector(initWithNibName:bundle:),
        uObjC::NativeString(nibNameOrNil_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)nibBundleOrNil_));
}

// public extern iOS.UIKit.UIInterfaceOrientation interfaceOrientation() [instance] :87948
int UIViewController::interfaceOrientation()
{
    uStackFrame __("iOS.UIKit.UIViewController", "interfaceOrientation()");
    ::UIInterfaceOrientation __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIInterfaceOrientation, @selector(interfaceOrientation));
    return int(__return);
}

// public iOS.UIKit.UIInterfaceOrientation get_InterfaceOrientation() [instance] :87558
int UIViewController::InterfaceOrientation()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_InterfaceOrientation()");
    return interfaceOrientation();
}

// public extern bool isBeingDismissed() [instance] :87627
bool UIViewController::isBeingDismissed()
{
    uStackFrame __("iOS.UIKit.UIViewController", "isBeingDismissed()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isBeingDismissed));
    return (bool)__return;
}

// public extern bool isBeingPresented() [instance] :87624
bool UIViewController::isBeingPresented()
{
    uStackFrame __("iOS.UIKit.UIViewController", "isBeingPresented()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isBeingPresented));
    return (bool)__return;
}

// public extern bool isEditing() [instance] :87903
bool UIViewController::isEditing()
{
    uStackFrame __("iOS.UIKit.UIViewController", "isEditing()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isEditing));
    return (bool)__return;
}

// public extern bool isModalInPopover() [instance] :87780
bool UIViewController::isModalInPopover()
{
    uStackFrame __("iOS.UIKit.UIViewController", "isModalInPopover()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isModalInPopover));
    return (bool)__return;
}

// public extern bool isMovingFromParentViewController() [instance] :87633
bool UIViewController::isMovingFromParentViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "isMovingFromParentViewController()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isMovingFromParentViewController));
    return (bool)__return;
}

// public extern bool isMovingToParentViewController() [instance] :87630
bool UIViewController::isMovingToParentViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "isMovingToParentViewController()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isMovingToParentViewController));
    return (bool)__return;
}

// public extern bool isViewLoaded() [instance] :87582
bool UIViewController::isViewLoaded()
{
    uStackFrame __("iOS.UIKit.UIViewController", "isViewLoaded()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isViewLoaded));
    return (bool)__return;
}

// public bool get_ModalInPopover() [instance] :87471
bool UIViewController::ModalInPopover()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ModalInPopover()");
    return isModalInPopover();
}

// public void set_ModalInPopover(bool value) [instance] :87472
void UIViewController::ModalInPopover(bool value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_ModalInPopover(bool)");
    setModalInPopover(value);
}

// public extern bool modalPresentationCapturesStatusBarAppearance() [instance] :87723
bool UIViewController::modalPresentationCapturesStatusBarAppearance()
{
    uStackFrame __("iOS.UIKit.UIViewController", "modalPresentationCapturesStatusBarAppearance()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(modalPresentationCapturesStatusBarAppearance));
    return (bool)__return;
}

// public bool get_ModalPresentationCapturesStatusBarAppearance() [instance] :87419
bool UIViewController::ModalPresentationCapturesStatusBarAppearance()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ModalPresentationCapturesStatusBarAppearance()");
    return modalPresentationCapturesStatusBarAppearance();
}

// public void set_ModalPresentationCapturesStatusBarAppearance(bool value) [instance] :87420
void UIViewController::ModalPresentationCapturesStatusBarAppearance(bool value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_ModalPresentationCapturesStatusBarAppearance(bool)");
    setModalPresentationCapturesStatusBarAppearance(value);
}

// public extern iOS.UIKit.UIModalPresentationStyle modalPresentationStyle() [instance] :87717
int UIViewController::modalPresentationStyle()
{
    uStackFrame __("iOS.UIKit.UIViewController", "modalPresentationStyle()");
    ::UIModalPresentationStyle __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIModalPresentationStyle, @selector(modalPresentationStyle));
    return int(__return);
}

// public iOS.UIKit.UIModalPresentationStyle get_ModalPresentationStyle() [instance] :87413
int UIViewController::ModalPresentationStyle()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ModalPresentationStyle()");
    return modalPresentationStyle();
}

// public void set_ModalPresentationStyle(iOS.UIKit.UIModalPresentationStyle value) [instance] :87414
void UIViewController::ModalPresentationStyle(int value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_ModalPresentationStyle(iOS.UIKit.UIModalPresentationStyle)");
    setModalPresentationStyle(value);
}

// public extern iOS.UIKit.UIModalTransitionStyle modalTransitionStyle() [instance] :87711
int UIViewController::modalTransitionStyle()
{
    uStackFrame __("iOS.UIKit.UIViewController", "modalTransitionStyle()");
    ::UIModalTransitionStyle __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIModalTransitionStyle, @selector(modalTransitionStyle));
    return int(__return);
}

// public iOS.UIKit.UIModalTransitionStyle get_ModalTransitionStyle() [instance] :87407
int UIViewController::ModalTransitionStyle()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ModalTransitionStyle()");
    return modalTransitionStyle();
}

// public void set_ModalTransitionStyle(iOS.UIKit.UIModalTransitionStyle value) [instance] :87408
void UIViewController::ModalTransitionStyle(int value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_ModalTransitionStyle(iOS.UIKit.UIModalTransitionStyle)");
    setModalTransitionStyle(value);
}

// public extern iOS.UIKit.UIViewController modalViewController() [instance] :87690
UIViewController* UIViewController::modalViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "modalViewController()");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(modalViewController));
    return (UIViewController*)uObjC::Lifetime::GetUnoObject(__return, UIViewController_typeof());
}

// public iOS.UIKit.UIViewController get_ModalViewController() [instance] :87380
UIViewController* UIViewController::ModalViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ModalViewController()");
    return modalViewController();
}

// public extern iOS.UIKit.UINavigationController navigationController() [instance] :87810
::g::iOS::UIKit::UINavigationController* UIViewController::navigationController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "navigationController()");
    ::UINavigationController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UINavigationController*, @selector(navigationController));
    return (::g::iOS::UIKit::UINavigationController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UINavigationController_typeof());
}

// public iOS.UIKit.UINavigationController get_NavigationController() [instance] :87500
::g::iOS::UIKit::UINavigationController* UIViewController::NavigationController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_NavigationController()");
    return navigationController();
}

// public extern iOS.UIKit.UINavigationItem navigationItem() [instance] :87801
::g::iOS::UIKit::UINavigationItem* UIViewController::navigationItem()
{
    uStackFrame __("iOS.UIKit.UIViewController", "navigationItem()");
    ::UINavigationItem* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UINavigationItem*, @selector(navigationItem));
    return (::g::iOS::UIKit::UINavigationItem*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UINavigationItem_typeof());
}

// public iOS.UIKit.UINavigationItem get_NavigationItem() [instance] :87489
::g::iOS::UIKit::UINavigationItem* UIViewController::NavigationItem()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_NavigationItem()");
    return navigationItem();
}

// public extern iOS.Foundation.NSBundle nibBundle() [instance] :87675
::g::iOS::Foundation::NSBundle* UIViewController::nibBundle()
{
    uStackFrame __("iOS.UIKit.UIViewController", "nibBundle()");
    ::NSBundle* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSBundle*, @selector(nibBundle));
    return (::g::iOS::Foundation::NSBundle*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSBundle_typeof());
}

// public iOS.Foundation.NSBundle get_NibBundle() [instance] :87359
::g::iOS::Foundation::NSBundle* UIViewController::NibBundle()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_NibBundle()");
    return nibBundle();
}

// public extern string nibName() [instance] :87672
uString* UIViewController::nibName()
{
    uStackFrame __("iOS.UIKit.UIViewController", "nibName()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(nibName));
    return uObjC::UnoString(__return);
}

// public string get_NibName() [instance] :87354
uString* UIViewController::NibName()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_NibName()");
    return nibName();
}

// public extern iOS.UIKit.UITraitCollection overrideTraitCollectionForChildViewController(iOS.UIKit.UIViewController childViewController) [instance] :87888
::g::iOS::UIKit::UITraitCollection* UIViewController::overrideTraitCollectionForChildViewController(UIViewController* childViewController_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "overrideTraitCollectionForChildViewController(iOS.UIKit.UIViewController)");
    ::UITraitCollection* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITraitCollection*, @selector(overrideTraitCollectionForChildViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)childViewController_));
    return (::g::iOS::UIKit::UITraitCollection*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITraitCollection_typeof());
}

// public extern iOS.UIKit.UIViewController parentViewController() [instance] :87687
UIViewController* UIViewController::parentViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "parentViewController()");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(parentViewController));
    return (UIViewController*)uObjC::Lifetime::GetUnoObject(__return, UIViewController_typeof());
}

// public iOS.UIKit.UIViewController get_ParentViewController() [instance] :87375
UIViewController* UIViewController::ParentViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ParentViewController()");
    return parentViewController();
}

// public extern void performSegueWithIdentifierSender(string identifier, ObjC.ID sender) [instance] :87585
void UIViewController::performSegueWithIdentifierSender(uString* identifier_, ::id sender_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "performSegueWithIdentifierSender(string,ObjC.ID)");
    ::id sender__ = sender_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(performSegueWithIdentifier:sender:),
        uObjC::NativeString(identifier_),
        (::id)sender__);
}

// public extern iOS.UIKit.UIPopoverPresentationController popoverPresentationController() [instance] :87816
::g::iOS::UIKit::UIPopoverPresentationController* UIViewController::popoverPresentationController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "popoverPresentationController()");
    ::UIPopoverPresentationController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIPopoverPresentationController*, @selector(popoverPresentationController));
    return (::g::iOS::UIKit::UIPopoverPresentationController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIPopoverPresentationController_typeof());
}

// public iOS.UIKit.UIPopoverPresentationController get_PopoverPresentationController() [instance] :87510
::g::iOS::UIKit::UIPopoverPresentationController* UIViewController::PopoverPresentationController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_PopoverPresentationController()");
    return popoverPresentationController();
}

// public extern iOS.CoreGraphics.CGSize preferredContentSize() [instance] :87753
::g::iOS::CoreGraphics::CGSize UIViewController::preferredContentSize()
{
    uStackFrame __("iOS.UIKit.UIViewController", "preferredContentSize()");
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(preferredContentSize));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public iOS.CoreGraphics.CGSize get_PreferredContentSize() [instance] :87449
::g::iOS::CoreGraphics::CGSize UIViewController::PreferredContentSize()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_PreferredContentSize()");
    return preferredContentSize();
}

// public void set_PreferredContentSize(iOS.CoreGraphics.CGSize value) [instance] :87450
void UIViewController::PreferredContentSize(::g::iOS::CoreGraphics::CGSize value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_PreferredContentSize(iOS.CoreGraphics.CGSize)");
    setPreferredContentSize(value);
}

// public extern void preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) [instance] :87963
void UIViewController::preferredContentSizeDidChangeForChildContentContainer(uObject* container_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(preferredContentSizeDidChangeForChildContentContainer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_, ::g::iOS::UIKit::IUIContentContainer_typeof()));
}

// public extern iOS.UIKit.UIInterfaceOrientation preferredInterfaceOrientationForPresentation() [instance] :87921
int UIViewController::preferredInterfaceOrientationForPresentation()
{
    uStackFrame __("iOS.UIKit.UIViewController", "preferredInterfaceOrientationForPresentation()");
    ::UIInterfaceOrientation __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIInterfaceOrientation, @selector(preferredInterfaceOrientationForPresentation));
    return int(__return);
}

// public extern iOS.UIKit.UIStatusBarStyle preferredStatusBarStyle() [instance] :87645
int UIViewController::preferredStatusBarStyle()
{
    uStackFrame __("iOS.UIKit.UIViewController", "preferredStatusBarStyle()");
    ::UIStatusBarStyle __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIStatusBarStyle, @selector(preferredStatusBarStyle));
    return int(__return);
}

// public extern iOS.UIKit.UIStatusBarAnimation preferredStatusBarUpdateAnimation() [instance] :87651
int UIViewController::preferredStatusBarUpdateAnimation()
{
    uStackFrame __("iOS.UIKit.UIViewController", "preferredStatusBarUpdateAnimation()");
    ::UIStatusBarAnimation __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIStatusBarAnimation, @selector(preferredStatusBarUpdateAnimation));
    return int(__return);
}

// public extern bool prefersStatusBarHidden() [instance] :87648
bool UIViewController::prefersStatusBarHidden()
{
    uStackFrame __("iOS.UIKit.UIViewController", "prefersStatusBarHidden()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(prefersStatusBarHidden));
    return (bool)__return;
}

// public extern void prepareForSegueSender(iOS.UIKit.UIStoryboardSegue segue, ObjC.ID sender) [instance] :87591
void UIViewController::prepareForSegueSender(::g::iOS::UIKit::UIStoryboardSegue* segue_, ::id sender_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "prepareForSegueSender(iOS.UIKit.UIStoryboardSegue,ObjC.ID)");
    ::id sender__ = sender_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(prepareForSegue:sender:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)segue_),
        (::id)sender__);
}

// public extern iOS.UIKit.UIPresentationController presentationController() [instance] :87813
::g::iOS::UIKit::UIPresentationController* UIViewController::presentationController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "presentationController()");
    ::UIPresentationController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIPresentationController*, @selector(presentationController));
    return (::g::iOS::UIKit::UIPresentationController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIPresentationController_typeof());
}

// public iOS.UIKit.UIPresentationController get_PresentationController() [instance] :87505
::g::iOS::UIKit::UIPresentationController* UIViewController::PresentationController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_PresentationController()");
    return presentationController();
}

// public extern iOS.UIKit.UIViewController presentedViewController() [instance] :87693
UIViewController* UIViewController::presentedViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "presentedViewController()");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(presentedViewController));
    return (UIViewController*)uObjC::Lifetime::GetUnoObject(__return, UIViewController_typeof());
}

// public iOS.UIKit.UIViewController get_PresentedViewController() [instance] :87385
UIViewController* UIViewController::PresentedViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_PresentedViewController()");
    return presentedViewController();
}

// public extern iOS.UIKit.UIViewController presentingViewController() [instance] :87696
UIViewController* UIViewController::presentingViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "presentingViewController()");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(presentingViewController));
    return (UIViewController*)uObjC::Lifetime::GetUnoObject(__return, UIViewController_typeof());
}

// public iOS.UIKit.UIViewController get_PresentingViewController() [instance] :87390
UIViewController* UIViewController::PresentingViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_PresentingViewController()");
    return presentingViewController();
}

// public extern void presentModalViewControllerAnimated(iOS.UIKit.UIViewController modalViewController, bool animated) [instance] :87636
void UIViewController::presentModalViewControllerAnimated(UIViewController* modalViewController_, bool animated_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "presentModalViewControllerAnimated(iOS.UIKit.UIViewController,bool)");
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(presentModalViewController:animated:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)modalViewController_),
        (BOOL)animated__);
}

// public extern bool providesPresentationContextTransitionStyle() [instance] :87705
bool UIViewController::providesPresentationContextTransitionStyle()
{
    uStackFrame __("iOS.UIKit.UIViewController", "providesPresentationContextTransitionStyle()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(providesPresentationContextTransitionStyle));
    return (bool)__return;
}

// public bool get_ProvidesPresentationContextTransitionStyle() [instance] :87401
bool UIViewController::ProvidesPresentationContextTransitionStyle()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ProvidesPresentationContextTransitionStyle()");
    return providesPresentationContextTransitionStyle();
}

// public void set_ProvidesPresentationContextTransitionStyle(bool value) [instance] :87402
void UIViewController::ProvidesPresentationContextTransitionStyle(bool value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_ProvidesPresentationContextTransitionStyle(bool)");
    setProvidesPresentationContextTransitionStyle(value);
}

// public extern void removeFromParentViewController() [instance] :87870
void UIViewController::removeFromParentViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "removeFromParentViewController()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeFromParentViewController));
}

// public extern string restorationIdentifier() [instance] :87846
uString* UIViewController::restorationIdentifier()
{
    uStackFrame __("iOS.UIKit.UIViewController", "restorationIdentifier()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(restorationIdentifier));
    return uObjC::UnoString(__return);
}

// public string get_RestorationIdentifier() [instance] :87536
uString* UIViewController::RestorationIdentifier()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_RestorationIdentifier()");
    return restorationIdentifier();
}

// public void set_RestorationIdentifier(string value) [instance] :87537
void UIViewController::RestorationIdentifier(uString* value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_RestorationIdentifier(string)");
    setRestorationIdentifier(value);
}

// public extern iOS.UIKit.UIView rotatingFooterView() [instance] :87927
::g::iOS::UIKit::UIView* UIViewController::rotatingFooterView()
{
    uStackFrame __("iOS.UIKit.UIViewController", "rotatingFooterView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(rotatingFooterView));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}

// public extern iOS.UIKit.UIView rotatingHeaderView() [instance] :87924
::g::iOS::UIKit::UIView* UIViewController::rotatingHeaderView()
{
    uStackFrame __("iOS.UIKit.UIViewController", "rotatingHeaderView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(rotatingHeaderView));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}

// public extern iOS.UIKit.UISearchDisplayController searchDisplayController() [instance] :87894
::g::iOS::UIKit::UISearchDisplayController* UIViewController::searchDisplayController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "searchDisplayController()");
    ::UISearchDisplayController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UISearchDisplayController*, @selector(searchDisplayController));
    return (::g::iOS::UIKit::UISearchDisplayController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UISearchDisplayController_typeof());
}

// public iOS.UIKit.UISearchDisplayController get_SearchDisplayController() [instance] :87547
::g::iOS::UIKit::UISearchDisplayController* UIViewController::SearchDisplayController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_SearchDisplayController()");
    return searchDisplayController();
}

// public extern iOS.UIKit.UIStoryboardSegue segueForUnwindingToViewControllerFromViewControllerIdentifier(iOS.UIKit.UIViewController toViewController, iOS.UIKit.UIViewController fromViewController, string identifier) [instance] :87600
::g::iOS::UIKit::UIStoryboardSegue* UIViewController::segueForUnwindingToViewControllerFromViewControllerIdentifier(UIViewController* toViewController_, UIViewController* fromViewController_, uString* identifier_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "segueForUnwindingToViewControllerFromViewControllerIdentifier(iOS.UIKit.UIViewController,iOS.UIKit.UIViewController,string)");
    ::UIStoryboardSegue* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIStoryboardSegue*, @selector(segueForUnwindingToViewController:fromViewController:identifier:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toViewController_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)fromViewController_),
        uObjC::NativeString(identifier_));
    return (::g::iOS::UIKit::UIStoryboardSegue*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIStoryboardSegue_typeof());
}

// public extern iOS.UIKit.UIViewController separateSecondaryViewControllerForSplitViewController(iOS.UIKit.UISplitViewController splitViewController) [instance] :87771
UIViewController* UIViewController::separateSecondaryViewControllerForSplitViewController(::g::iOS::UIKit::UISplitViewController* splitViewController_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "separateSecondaryViewControllerForSplitViewController(iOS.UIKit.UISplitViewController)");
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(separateSecondaryViewControllerForSplitViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)splitViewController_));
    return (UIViewController*)uObjC::Lifetime::GetUnoObject(__return, UIViewController_typeof());
}

// public extern void setAutomaticallyAdjustsScrollViewInsets(bool automaticallyAdjustsScrollViewInsets) [instance] :87750
void UIViewController::setAutomaticallyAdjustsScrollViewInsets(bool automaticallyAdjustsScrollViewInsets_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setAutomaticallyAdjustsScrollViewInsets(bool)");
    bool automaticallyAdjustsScrollViewInsets__ = automaticallyAdjustsScrollViewInsets_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAutomaticallyAdjustsScrollViewInsets:),
        (BOOL)automaticallyAdjustsScrollViewInsets__);
}

// public extern void setContentSizeForViewInPopover(iOS.CoreGraphics.CGSize contentSizeForViewInPopover) [instance] :87789
void UIViewController::setContentSizeForViewInPopover(::g::iOS::CoreGraphics::CGSize contentSizeForViewInPopover_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setContentSizeForViewInPopover(iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize contentSizeForViewInPopover__ = contentSizeForViewInPopover_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentSizeForViewInPopover:),
        uObjC::Struct::FromUno_CGSize(contentSizeForViewInPopover__, ::CGSize()));
}

// public extern void setDefinesPresentationContext(bool definesPresentationContext) [instance] :87702
void UIViewController::setDefinesPresentationContext(bool definesPresentationContext_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setDefinesPresentationContext(bool)");
    bool definesPresentationContext__ = definesPresentationContext_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setDefinesPresentationContext:),
        (BOOL)definesPresentationContext__);
}

// public extern void setEdgesForExtendedLayout(iOS.UIKit.UIRectEdge edgesForExtendedLayout) [instance] :87738
void UIViewController::setEdgesForExtendedLayout(uint32_t edgesForExtendedLayout_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setEdgesForExtendedLayout(iOS.UIKit.UIRectEdge)");
    uint32_t edgesForExtendedLayout__ = edgesForExtendedLayout_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setEdgesForExtendedLayout:),
        ::UIRectEdge(edgesForExtendedLayout__));
}

// public extern void setEditing(bool editing) [instance] :87906
void UIViewController::setEditing(bool editing_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setEditing(bool)");
    bool editing__ = editing_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setEditing:),
        (BOOL)editing__);
}

// public extern void setEditingAnimated(bool editing, bool animated) [instance] :87897
void UIViewController::setEditingAnimated(bool editing_, bool animated_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setEditingAnimated(bool,bool)");
    bool editing__ = editing_;
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setEditing:animated:),
        (BOOL)editing__,
        (BOOL)animated__);
}

// public extern void setExtendedLayoutIncludesOpaqueBars(bool extendedLayoutIncludesOpaqueBars) [instance] :87744
void UIViewController::setExtendedLayoutIncludesOpaqueBars(bool extendedLayoutIncludesOpaqueBars_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setExtendedLayoutIncludesOpaqueBars(bool)");
    bool extendedLayoutIncludesOpaqueBars__ = extendedLayoutIncludesOpaqueBars_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setExtendedLayoutIncludesOpaqueBars:),
        (BOOL)extendedLayoutIncludesOpaqueBars__);
}

// public extern void setHidesBottomBarWhenPushed(bool hidesBottomBarWhenPushed) [instance] :87807
void UIViewController::setHidesBottomBarWhenPushed(bool hidesBottomBarWhenPushed_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setHidesBottomBarWhenPushed(bool)");
    bool hidesBottomBarWhenPushed__ = hidesBottomBarWhenPushed_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setHidesBottomBarWhenPushed:),
        (BOOL)hidesBottomBarWhenPushed__);
}

// public extern void setModalInPopover(bool modalInPopover) [instance] :87783
void UIViewController::setModalInPopover(bool modalInPopover_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setModalInPopover(bool)");
    bool modalInPopover__ = modalInPopover_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setModalInPopover:),
        (BOOL)modalInPopover__);
}

// public extern void setModalPresentationCapturesStatusBarAppearance(bool modalPresentationCapturesStatusBarAppearance) [instance] :87726
void UIViewController::setModalPresentationCapturesStatusBarAppearance(bool modalPresentationCapturesStatusBarAppearance_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setModalPresentationCapturesStatusBarAppearance(bool)");
    bool modalPresentationCapturesStatusBarAppearance__ = modalPresentationCapturesStatusBarAppearance_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setModalPresentationCapturesStatusBarAppearance:),
        (BOOL)modalPresentationCapturesStatusBarAppearance__);
}

// public extern void setModalPresentationStyle(iOS.UIKit.UIModalPresentationStyle modalPresentationStyle) [instance] :87720
void UIViewController::setModalPresentationStyle(int modalPresentationStyle_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setModalPresentationStyle(iOS.UIKit.UIModalPresentationStyle)");
    int modalPresentationStyle__ = modalPresentationStyle_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setModalPresentationStyle:),
        ::UIModalPresentationStyle(modalPresentationStyle__));
}

// public extern void setModalTransitionStyle(iOS.UIKit.UIModalTransitionStyle modalTransitionStyle) [instance] :87714
void UIViewController::setModalTransitionStyle(int modalTransitionStyle_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setModalTransitionStyle(iOS.UIKit.UIModalTransitionStyle)");
    int modalTransitionStyle__ = modalTransitionStyle_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setModalTransitionStyle:),
        ::UIModalTransitionStyle(modalTransitionStyle__));
}

// public extern void setNeedsStatusBarAppearanceUpdate() [instance] :87654
void UIViewController::setNeedsStatusBarAppearanceUpdate()
{
    uStackFrame __("iOS.UIKit.UIViewController", "setNeedsStatusBarAppearanceUpdate()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setNeedsStatusBarAppearanceUpdate));
}

// public extern void setOverrideTraitCollectionForChildViewController(iOS.UIKit.UITraitCollection collection, iOS.UIKit.UIViewController childViewController) [instance] :87885
void UIViewController::setOverrideTraitCollectionForChildViewController(::g::iOS::UIKit::UITraitCollection* collection_, UIViewController* childViewController_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setOverrideTraitCollectionForChildViewController(iOS.UIKit.UITraitCollection,iOS.UIKit.UIViewController)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setOverrideTraitCollection:forChildViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)collection_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)childViewController_));
}

// public extern void setPreferredContentSize(iOS.CoreGraphics.CGSize preferredContentSize) [instance] :87756
void UIViewController::setPreferredContentSize(::g::iOS::CoreGraphics::CGSize preferredContentSize_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setPreferredContentSize(iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize preferredContentSize__ = preferredContentSize_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setPreferredContentSize:),
        uObjC::Struct::FromUno_CGSize(preferredContentSize__, ::CGSize()));
}

// public extern void setProvidesPresentationContextTransitionStyle(bool providesPresentationContextTransitionStyle) [instance] :87708
void UIViewController::setProvidesPresentationContextTransitionStyle(bool providesPresentationContextTransitionStyle_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setProvidesPresentationContextTransitionStyle(bool)");
    bool providesPresentationContextTransitionStyle__ = providesPresentationContextTransitionStyle_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setProvidesPresentationContextTransitionStyle:),
        (BOOL)providesPresentationContextTransitionStyle__);
}

// public extern void setRestorationIdentifier(string restorationIdentifier) [instance] :87849
void UIViewController::setRestorationIdentifier(uString* restorationIdentifier_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setRestorationIdentifier(string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setRestorationIdentifier:),
        uObjC::NativeString(restorationIdentifier_));
}

// public extern void setTabBarItem(iOS.UIKit.UITabBarItem tabBarItem) [instance] :87762
void UIViewController::setTabBarItem(::g::iOS::UIKit::UITabBarItem* tabBarItem_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setTabBarItem(iOS.UIKit.UITabBarItem)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTabBarItem:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)tabBarItem_));
}

// public extern void setTitle(string title) [instance] :87684
void UIViewController::setTitle(uString* title_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setTitle(string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTitle:),
        uObjC::NativeString(title_));
}

// public extern void setToolbarItems(iOS.Foundation.NSArray toolbarItems) [instance] :87798
void UIViewController::setToolbarItems(::g::iOS::Foundation::NSArray* toolbarItems_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setToolbarItems(iOS.Foundation.NSArray)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setToolbarItems:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toolbarItems_));
}

// public extern void setToolbarItemsAnimated(iOS.Foundation.NSArray toolbarItems, bool animated) [instance] :87792
void UIViewController::setToolbarItemsAnimated(::g::iOS::Foundation::NSArray* toolbarItems_, bool animated_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setToolbarItemsAnimated(iOS.Foundation.NSArray,bool)");
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setToolbarItems:animated:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)toolbarItems_),
        (BOOL)animated__);
}

// public extern void setTransitioningDelegate(iOS.UIKit.IUIViewControllerTransitioningDelegate transitioningDelegate) [instance] :87831
void UIViewController::setTransitioningDelegate(uObject* transitioningDelegate_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setTransitioningDelegate(iOS.UIKit.IUIViewControllerTransitioningDelegate)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTransitioningDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)transitioningDelegate_, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof()));
}

// public extern void setView(iOS.UIKit.UIView view) [instance] :87669
void UIViewController::setView(::g::iOS::UIKit::UIView* view_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setView(iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

// public extern void setWantsFullScreenLayout(bool wantsFullScreenLayout) [instance] :87732
void UIViewController::setWantsFullScreenLayout(bool wantsFullScreenLayout_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "setWantsFullScreenLayout(bool)");
    bool wantsFullScreenLayout__ = wantsFullScreenLayout_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setWantsFullScreenLayout:),
        (BOOL)wantsFullScreenLayout__);
}

// public extern bool shouldAutomaticallyForwardAppearanceMethods() [instance] :87858
bool UIViewController::shouldAutomaticallyForwardAppearanceMethods()
{
    uStackFrame __("iOS.UIKit.UIViewController", "shouldAutomaticallyForwardAppearanceMethods()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(shouldAutomaticallyForwardAppearanceMethods));
    return (bool)__return;
}

// public extern bool shouldAutomaticallyForwardRotationMethods() [instance] :87855
bool UIViewController::shouldAutomaticallyForwardRotationMethods()
{
    uStackFrame __("iOS.UIKit.UIViewController", "shouldAutomaticallyForwardRotationMethods()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(shouldAutomaticallyForwardRotationMethods));
    return (bool)__return;
}

// public extern bool shouldAutorotate() [instance] :87915
bool UIViewController::shouldAutorotate()
{
    uStackFrame __("iOS.UIKit.UIViewController", "shouldAutorotate()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(shouldAutorotate));
    return (bool)__return;
}

// public extern bool shouldAutorotateToInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation toInterfaceOrientation) [instance] :87912
bool UIViewController::shouldAutorotateToInterfaceOrientation(int toInterfaceOrientation_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "shouldAutorotateToInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation)");
    int toInterfaceOrientation__ = toInterfaceOrientation_;
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(shouldAutorotateToInterfaceOrientation:),
        ::UIInterfaceOrientation(toInterfaceOrientation__));
    return (bool)__return;
}

// public extern bool shouldPerformSegueWithIdentifierSender(string identifier, ObjC.ID sender) [instance] :87588
bool UIViewController::shouldPerformSegueWithIdentifierSender(uString* identifier_, ::id sender_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "shouldPerformSegueWithIdentifierSender(string,ObjC.ID)");
    ::id sender__ = sender_;
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(shouldPerformSegueWithIdentifier:sender:),
        uObjC::NativeString(identifier_),
        (::id)sender__);
    return (bool)__return;
}

// public extern iOS.CoreGraphics.CGSize sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer container, iOS.CoreGraphics.CGSize parentSize) [instance] :87969
::g::iOS::CoreGraphics::CGSize UIViewController::sizeForChildContentContainerWithParentContainerSize(uObject* container_, ::g::iOS::CoreGraphics::CGSize parentSize_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer,iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize parentSize__ = parentSize_;
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(sizeForChildContentContainer:withParentContainerSize:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_, ::g::iOS::UIKit::IUIContentContainer_typeof()),
        uObjC::Struct::FromUno_CGSize(parentSize__, ::CGSize()));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public extern iOS.UIKit.UISplitViewController splitViewController() [instance] :87774
::g::iOS::UIKit::UISplitViewController* UIViewController::splitViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "splitViewController()");
    ::UISplitViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UISplitViewController*, @selector(splitViewController));
    return (::g::iOS::UIKit::UISplitViewController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UISplitViewController_typeof());
}

// public iOS.UIKit.UISplitViewController get_SplitViewController() [instance] :87466
::g::iOS::UIKit::UISplitViewController* UIViewController::SplitViewController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_SplitViewController()");
    return splitViewController();
}

// public extern iOS.UIKit.UIStoryboard storyboard() [instance] :87678
::g::iOS::UIKit::UIStoryboard* UIViewController::storyboard()
{
    uStackFrame __("iOS.UIKit.UIViewController", "storyboard()");
    ::UIStoryboard* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIStoryboard*, @selector(storyboard));
    return (::g::iOS::UIKit::UIStoryboard*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIStoryboard_typeof());
}

// public iOS.UIKit.UIStoryboard get_Storyboard() [instance] :87364
::g::iOS::UIKit::UIStoryboard* UIViewController::Storyboard()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_Storyboard()");
    return storyboard();
}

// public extern ulong supportedInterfaceOrientations() [instance] :87918
uint64_t UIViewController::supportedInterfaceOrientations()
{
    uStackFrame __("iOS.UIKit.UIViewController", "supportedInterfaceOrientations()");
    unsigned long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, unsigned long, @selector(supportedInterfaceOrientations));
    return (uint64_t)__return;
}

// public extern void systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) [instance] :87966
void UIViewController::systemLayoutFittingSizeDidChangeForChildContentContainer(uObject* container_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(systemLayoutFittingSizeDidChangeForChildContentContainer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_, ::g::iOS::UIKit::IUIContentContainer_typeof()));
}

// public extern iOS.UIKit.UITabBarController tabBarController() [instance] :87765
::g::iOS::UIKit::UITabBarController* UIViewController::tabBarController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "tabBarController()");
    ::UITabBarController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITabBarController*, @selector(tabBarController));
    return (::g::iOS::UIKit::UITabBarController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITabBarController_typeof());
}

// public iOS.UIKit.UITabBarController get_TabBarController() [instance] :87461
::g::iOS::UIKit::UITabBarController* UIViewController::TabBarController()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_TabBarController()");
    return tabBarController();
}

// public extern iOS.UIKit.UITabBarItem tabBarItem() [instance] :87759
::g::iOS::UIKit::UITabBarItem* UIViewController::tabBarItem()
{
    uStackFrame __("iOS.UIKit.UIViewController", "tabBarItem()");
    ::UITabBarItem* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITabBarItem*, @selector(tabBarItem));
    return (::g::iOS::UIKit::UITabBarItem*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITabBarItem_typeof());
}

// public iOS.UIKit.UITabBarItem get_TabBarItem() [instance] :87455
::g::iOS::UIKit::UITabBarItem* UIViewController::TabBarItem()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_TabBarItem()");
    return tabBarItem();
}

// public void set_TabBarItem(iOS.UIKit.UITabBarItem value) [instance] :87456
void UIViewController::TabBarItem(::g::iOS::UIKit::UITabBarItem* value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_TabBarItem(iOS.UIKit.UITabBarItem)");
    setTabBarItem(value);
}

// public extern iOS.UIKit.UIViewController targetViewControllerForActionSender(ObjC.Selector action, ObjC.ID sender) [instance] :87657
UIViewController* UIViewController::targetViewControllerForActionSender(uObjC::Selector action_, ::id sender_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "targetViewControllerForActionSender(ObjC.Selector,ObjC.ID)");
    uObjC::Selector action__ = action_;
    ::id sender__ = sender_;
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(targetViewControllerForAction:sender:),
        (::SEL)action__,
        (::id)sender__);
    return (UIViewController*)uObjC::Lifetime::GetUnoObject(__return, UIViewController_typeof());
}

// public extern string title() [instance] :87681
uString* UIViewController::title()
{
    uStackFrame __("iOS.UIKit.UIViewController", "title()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(title));
    return uObjC::UnoString(__return);
}

// public string get_Title() [instance] :87369
uString* UIViewController::Title()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_Title()");
    return title();
}

// public void set_Title(string value) [instance] :87370
void UIViewController::Title(uString* value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_Title(string)");
    setTitle(value);
}

// public extern iOS.Foundation.NSArray toolbarItems() [instance] :87795
::g::iOS::Foundation::NSArray* UIViewController::toolbarItems()
{
    uStackFrame __("iOS.UIKit.UIViewController", "toolbarItems()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(toolbarItems));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_ToolbarItems() [instance] :87483
::g::iOS::Foundation::NSArray* UIViewController::ToolbarItems()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_ToolbarItems()");
    return toolbarItems();
}

// public void set_ToolbarItems(iOS.Foundation.NSArray value) [instance] :87484
void UIViewController::ToolbarItems(::g::iOS::Foundation::NSArray* value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_ToolbarItems(iOS.Foundation.NSArray)");
    setToolbarItems(value);
}

// public extern iOS.UIKit.IUILayoutSupport topLayoutGuide() [instance] :87822
uObject* UIViewController::topLayoutGuide()
{
    uStackFrame __("iOS.UIKit.UIViewController", "topLayoutGuide()");
    id<UILayoutSupport> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UILayoutSupport>, @selector(topLayoutGuide));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUILayoutSupport_typeof());
}

// public iOS.UIKit.IUILayoutSupport get_TopLayoutGuide() [instance] :87520
uObject* UIViewController::TopLayoutGuide()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_TopLayoutGuide()");
    return topLayoutGuide();
}

// public extern iOS.UIKit.UITraitCollection traitCollection() [instance] :87960
::g::iOS::UIKit::UITraitCollection* UIViewController::traitCollection()
{
    uStackFrame __("iOS.UIKit.UIViewController", "traitCollection()");
    ::UITraitCollection* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITraitCollection*, @selector(traitCollection));
    return (::g::iOS::UIKit::UITraitCollection*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITraitCollection_typeof());
}

// public iOS.UIKit.UITraitCollection get_TraitCollection() [instance] :87563
::g::iOS::UIKit::UITraitCollection* UIViewController::TraitCollection()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_TraitCollection()");
    return traitCollection();
}

// public extern void traitCollectionDidChange(iOS.UIKit.UITraitCollection previousTraitCollection) [instance] :87957
void UIViewController::traitCollectionDidChange(::g::iOS::UIKit::UITraitCollection* previousTraitCollection_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "traitCollectionDidChange(iOS.UIKit.UITraitCollection)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(traitCollectionDidChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)previousTraitCollection_));
}

// public extern iOS.UIKit.IUIViewControllerTransitionCoordinator transitionCoordinator() [instance] :87777
uObject* UIViewController::transitionCoordinator()
{
    uStackFrame __("iOS.UIKit.UIViewController", "transitionCoordinator()");
    id<UIViewControllerTransitionCoordinator> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UIViewControllerTransitionCoordinator>, @selector(transitionCoordinator));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUIViewControllerTransitionCoordinator_typeof());
}

// public extern iOS.UIKit.IUIViewControllerTransitioningDelegate transitioningDelegate() [instance] :87828
uObject* UIViewController::transitioningDelegate()
{
    uStackFrame __("iOS.UIKit.UIViewController", "transitioningDelegate()");
    id<UIViewControllerTransitioningDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UIViewControllerTransitioningDelegate>, @selector(transitioningDelegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUIViewControllerTransitioningDelegate_typeof());
}

// public iOS.UIKit.IUIViewControllerTransitioningDelegate get_TransitioningDelegate() [instance] :87530
uObject* UIViewController::TransitioningDelegate()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_TransitioningDelegate()");
    return transitioningDelegate();
}

// public void set_TransitioningDelegate(iOS.UIKit.IUIViewControllerTransitioningDelegate value) [instance] :87531
void UIViewController::TransitioningDelegate(uObject* value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_TransitioningDelegate(iOS.UIKit.IUIViewControllerTransitioningDelegate)");
    setTransitioningDelegate(value);
}

// public extern void updateViewConstraints() [instance] :87834
void UIViewController::updateViewConstraints()
{
    uStackFrame __("iOS.UIKit.UIViewController", "updateViewConstraints()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(updateViewConstraints));
}

// public extern iOS.UIKit.UIView view() [instance] :87666
::g::iOS::UIKit::UIView* UIViewController::view()
{
    uStackFrame __("iOS.UIKit.UIViewController", "view()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(view));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}

// public iOS.UIKit.UIView get_View() [instance] :87348
::g::iOS::UIKit::UIView* UIViewController::View()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_View()");
    return view();
}

// public void set_View(iOS.UIKit.UIView value) [instance] :87349
void UIViewController::View(::g::iOS::UIKit::UIView* value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_View(iOS.UIKit.UIView)");
    setView(value);
}

// public extern iOS.UIKit.UIViewController viewControllerForUnwindSegueActionFromViewControllerWithSender(ObjC.Selector action, iOS.UIKit.UIViewController fromViewController, ObjC.ID sender) [instance] :87597
UIViewController* UIViewController::viewControllerForUnwindSegueActionFromViewControllerWithSender(uObjC::Selector action_, UIViewController* fromViewController_, ::id sender_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewControllerForUnwindSegueActionFromViewControllerWithSender(ObjC.Selector,iOS.UIKit.UIViewController,ObjC.ID)");
    uObjC::Selector action__ = action_;
    ::id sender__ = sender_;
    ::UIViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIViewController*, @selector(viewControllerForUnwindSegueAction:fromViewController:withSender:),
        (::SEL)action__,
        uObjC::Lifetime::GetNativeHandle((::uObject *)fromViewController_),
        (::id)sender__);
    return (UIViewController*)uObjC::Lifetime::GetUnoObject(__return, UIViewController_typeof());
}

// public extern void viewDidDisappear(bool animated) [instance] :87612
void UIViewController::viewDidDisappear(bool animated_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewDidDisappear(bool)");
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewDidDisappear:),
        (BOOL)animated__);
}

// public extern void viewDidLayoutSubviews() [instance] :87618
void UIViewController::viewDidLayoutSubviews()
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewDidLayoutSubviews()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewDidLayoutSubviews));
}

// public extern void viewDidLoad() [instance] :87579
void UIViewController::viewDidLoad()
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewDidLoad()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewDidLoad));
}

// public extern void viewDidUnload() [instance] :87576
void UIViewController::viewDidUnload()
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewDidUnload()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewDidUnload));
}

// public extern void viewWillAppear(bool animated) [instance] :87603
void UIViewController::viewWillAppear(bool animated_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewWillAppear(bool)");
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewWillAppear:),
        (BOOL)animated__);
}

// public extern void viewWillDisappear(bool animated) [instance] :87609
void UIViewController::viewWillDisappear(bool animated_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewWillDisappear(bool)");
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewWillDisappear:),
        (BOOL)animated__);
}

// public extern void viewWillLayoutSubviews() [instance] :87615
void UIViewController::viewWillLayoutSubviews()
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewWillLayoutSubviews()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewWillLayoutSubviews));
}

// public extern void viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize size, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) [instance] :87972
void UIViewController::viewWillTransitionToSizeWithTransitionCoordinator(::g::iOS::CoreGraphics::CGSize size_, uObject* coordinator_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize,iOS.UIKit.IUIViewControllerTransitionCoordinator)");
    ::g::iOS::CoreGraphics::CGSize size__ = size_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewWillTransitionToSize:withTransitionCoordinator:),
        uObjC::Struct::FromUno_CGSize(size__, ::CGSize()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coordinator_, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
}

// public extern void viewWillUnload() [instance] :87573
void UIViewController::viewWillUnload()
{
    uStackFrame __("iOS.UIKit.UIViewController", "viewWillUnload()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewWillUnload));
}

// public extern bool wantsFullScreenLayout() [instance] :87729
bool UIViewController::wantsFullScreenLayout()
{
    uStackFrame __("iOS.UIKit.UIViewController", "wantsFullScreenLayout()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(wantsFullScreenLayout));
    return (bool)__return;
}

// public bool get_WantsFullScreenLayout() [instance] :87425
bool UIViewController::WantsFullScreenLayout()
{
    uStackFrame __("iOS.UIKit.UIViewController", "get_WantsFullScreenLayout()");
    return wantsFullScreenLayout();
}

// public void set_WantsFullScreenLayout(bool value) [instance] :87426
void UIViewController::WantsFullScreenLayout(bool value)
{
    uStackFrame __("iOS.UIKit.UIViewController", "set_WantsFullScreenLayout(bool)");
    setWantsFullScreenLayout(value);
}

// public extern void willAnimateFirstHalfOfRotationToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation toInterfaceOrientation, double duration) [instance] :87939
void UIViewController::willAnimateFirstHalfOfRotationToInterfaceOrientationDuration(int toInterfaceOrientation_, double duration_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "willAnimateFirstHalfOfRotationToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation,double)");
    int toInterfaceOrientation__ = toInterfaceOrientation_;
    double duration__ = duration_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willAnimateFirstHalfOfRotationToInterfaceOrientation:duration:),
        ::UIInterfaceOrientation(toInterfaceOrientation__),
        duration__);
}

// public extern void willAnimateRotationToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation toInterfaceOrientation, double duration) [instance] :87936
void UIViewController::willAnimateRotationToInterfaceOrientationDuration(int toInterfaceOrientation_, double duration_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "willAnimateRotationToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation,double)");
    int toInterfaceOrientation__ = toInterfaceOrientation_;
    double duration__ = duration_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willAnimateRotationToInterfaceOrientation:duration:),
        ::UIInterfaceOrientation(toInterfaceOrientation__),
        duration__);
}

// public extern void willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation fromInterfaceOrientation, double duration) [instance] :87945
void UIViewController::willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration(int fromInterfaceOrientation_, double duration_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation,double)");
    int fromInterfaceOrientation__ = fromInterfaceOrientation_;
    double duration__ = duration_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willAnimateSecondHalfOfRotationFromInterfaceOrientation:duration:),
        ::UIInterfaceOrientation(fromInterfaceOrientation__),
        duration__);
}

// public extern void willMoveToParentViewController(iOS.UIKit.UIViewController parent) [instance] :87861
void UIViewController::willMoveToParentViewController(UIViewController* parent_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "willMoveToParentViewController(iOS.UIKit.UIViewController)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willMoveToParentViewController:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)parent_));
}

// public extern void willRotateToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation toInterfaceOrientation, double duration) [instance] :87930
void UIViewController::willRotateToInterfaceOrientationDuration(int toInterfaceOrientation_, double duration_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "willRotateToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation,double)");
    int toInterfaceOrientation__ = toInterfaceOrientation_;
    double duration__ = duration_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willRotateToInterfaceOrientation:duration:),
        ::UIInterfaceOrientation(toInterfaceOrientation__),
        duration__);
}

// public extern void willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection newCollection, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) [instance] :87975
void UIViewController::willTransitionToTraitCollectionWithTransitionCoordinator(::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_)
{
    uStackFrame __("iOS.UIKit.UIViewController", "willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection,iOS.UIKit.IUIViewControllerTransitionCoordinator)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willTransitionToTraitCollection:withTransitionCoordinator:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)newCollection_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coordinator_, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
}

// public static extern void _attemptRotationToDeviceOrientation() [static] :87909
void UIViewController::_attemptRotationToDeviceOrientation()
{
    uStackFrame __("iOS.UIKit.UIViewController", "_attemptRotationToDeviceOrientation()");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(attemptRotationToDeviceOrientation));
}

// public UIViewController New() [static] :87339
UIViewController* UIViewController::New7()
{
    UIViewController* obj1 = (UIViewController*)uNew(UIViewController_typeof());
    obj1->ctor_6();
    return obj1;
}

// public UIViewController New(ObjC.ID __id) [static] :87341
UIViewController* UIViewController::New8(::id __id1)
{
    UIViewController* obj2 = (UIViewController*)uNew(UIViewController_typeof());
    obj2->ctor_7(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::UIKit
