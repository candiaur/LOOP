// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIContentContainer.h>
#include <iOS.UIKit.UIResponder.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
#include <uObjC.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGSize;}}}
namespace g{namespace iOS{namespace Foundation{struct NSArray;}}}
namespace g{namespace iOS{namespace Foundation{struct NSBundle;}}}
namespace g{namespace iOS{namespace Foundation{struct NSCoder;}}}
namespace g{namespace iOS{namespace Foundation{struct NSExtensionContext;}}}
namespace g{namespace iOS{namespace UIKit{struct UIBarButtonItem;}}}
namespace g{namespace iOS{namespace UIKit{struct UINavigationController;}}}
namespace g{namespace iOS{namespace UIKit{struct UINavigationItem;}}}
namespace g{namespace iOS{namespace UIKit{struct UIPopoverPresentationController;}}}
namespace g{namespace iOS{namespace UIKit{struct UIPresentationController;}}}
namespace g{namespace iOS{namespace UIKit{struct UISearchDisplayController;}}}
namespace g{namespace iOS{namespace UIKit{struct UISplitViewController;}}}
namespace g{namespace iOS{namespace UIKit{struct UIStoryboard;}}}
namespace g{namespace iOS{namespace UIKit{struct UIStoryboardSegue;}}}
namespace g{namespace iOS{namespace UIKit{struct UITabBarController;}}}
namespace g{namespace iOS{namespace UIKit{struct UITabBarItem;}}}
namespace g{namespace iOS{namespace UIKit{struct UITraitCollection;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIViewController :87336
// {
struct UIViewController_type : ::g::iOS::UIKit::UIResponder_type
{
    ::g::iOS::UIKit::IUIContentContainer interface1;
    void(*fp_loadView)(::g::iOS::UIKit::UIViewController*);
    void(*fp_showDetailViewControllerSender)(::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::id*);
    void(*fp_showViewControllerSender)(::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::id*);
    void(*fp_viewDidAppear)(::g::iOS::UIKit::UIViewController*, bool*);
};

UIViewController_type* UIViewController_typeof();
void UIViewController__ctor_6_fn(UIViewController* __this);
void UIViewController__ctor_7_fn(UIViewController* __this, ::id* __id1);
void UIViewController___attemptRotationToDeviceOrientation_fn();
void UIViewController__addChildViewController_fn(UIViewController* __this, UIViewController* childController_);
void UIViewController__applicationFinishedRestoringState_fn(UIViewController* __this);
void UIViewController__automaticallyAdjustsScrollViewInsets_fn(UIViewController* __this, bool* __retval);
void UIViewController__get_AutomaticallyAdjustsScrollViewInsets_fn(UIViewController* __this, bool* __retval);
void UIViewController__set_AutomaticallyAdjustsScrollViewInsets_fn(UIViewController* __this, bool* value);
void UIViewController__automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers_fn(UIViewController* __this, bool* __retval);
void UIViewController__beginAppearanceTransitionAnimated_fn(UIViewController* __this, bool* isAppearing_, bool* animated_);
void UIViewController__bottomLayoutGuide_fn(UIViewController* __this, uObject** __retval);
void UIViewController__get_BottomLayoutGuide_fn(UIViewController* __this, uObject** __retval);
void UIViewController__canPerformUnwindSegueActionFromViewControllerWithSender_fn(UIViewController* __this, uObjC::Selector* action_, UIViewController* fromViewController_, ::id* sender_, bool* __retval);
void UIViewController__childViewControllerForStatusBarHidden_fn(UIViewController* __this, UIViewController** __retval);
void UIViewController__childViewControllerForStatusBarStyle_fn(UIViewController* __this, UIViewController** __retval);
void UIViewController__childViewControllers_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray** __retval);
void UIViewController__get_ChildViewControllers_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray** __retval);
void UIViewController__collapseSecondaryViewControllerForSplitViewController_fn(UIViewController* __this, UIViewController* secondaryViewController_, ::g::iOS::UIKit::UISplitViewController* splitViewController_);
void UIViewController__contentSizeForViewInPopover_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIViewController__get_ContentSizeForViewInPopover_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIViewController__set_ContentSizeForViewInPopover_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* value);
void UIViewController__decodeRestorableStateWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* coder_);
void UIViewController__definesPresentationContext_fn(UIViewController* __this, bool* __retval);
void UIViewController__get_DefinesPresentationContext_fn(UIViewController* __this, bool* __retval);
void UIViewController__set_DefinesPresentationContext_fn(UIViewController* __this, bool* value);
void UIViewController__didAnimateFirstHalfOfRotationToInterfaceOrientation_fn(UIViewController* __this, int* toInterfaceOrientation_);
void UIViewController__didMoveToParentViewController_fn(UIViewController* __this, UIViewController* parent_);
void UIViewController__didReceiveMemoryWarning_fn(UIViewController* __this);
void UIViewController__didRotateFromInterfaceOrientation_fn(UIViewController* __this, int* fromInterfaceOrientation_);
void UIViewController__disablesAutomaticKeyboardDismissal_fn(UIViewController* __this, bool* __retval);
void UIViewController__dismissModalViewControllerAnimated_fn(UIViewController* __this, bool* animated_);
void UIViewController__edgesForExtendedLayout_fn(UIViewController* __this, uint32_t* __retval);
void UIViewController__get_EdgesForExtendedLayout_fn(UIViewController* __this, uint32_t* __retval);
void UIViewController__set_EdgesForExtendedLayout_fn(UIViewController* __this, uint32_t* value);
void UIViewController__editButtonItem_fn(UIViewController* __this, ::g::iOS::UIKit::UIBarButtonItem** __retval);
void UIViewController__get_Editing_fn(UIViewController* __this, bool* __retval);
void UIViewController__set_Editing_fn(UIViewController* __this, bool* value);
void UIViewController__encodeRestorableStateWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* coder_);
void UIViewController__encodeWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* aCoder_);
void UIViewController__endAppearanceTransition_fn(UIViewController* __this);
void UIViewController__extendedLayoutIncludesOpaqueBars_fn(UIViewController* __this, bool* __retval);
void UIViewController__get_ExtendedLayoutIncludesOpaqueBars_fn(UIViewController* __this, bool* __retval);
void UIViewController__set_ExtendedLayoutIncludesOpaqueBars_fn(UIViewController* __this, bool* value);
void UIViewController__extensionContext_fn(UIViewController* __this, ::g::iOS::Foundation::NSExtensionContext** __retval);
void UIViewController__get_ExtensionContext_fn(UIViewController* __this, ::g::iOS::Foundation::NSExtensionContext** __retval);
void UIViewController__hidesBottomBarWhenPushed_fn(UIViewController* __this, bool* __retval);
void UIViewController__get_HidesBottomBarWhenPushed_fn(UIViewController* __this, bool* __retval);
void UIViewController__set_HidesBottomBarWhenPushed_fn(UIViewController* __this, bool* value);
void UIViewController__initWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* aDecoder_);
void UIViewController__initWithNibNameBundle_fn(UIViewController* __this, uString* nibNameOrNil_, ::g::iOS::Foundation::NSBundle* nibBundleOrNil_);
void UIViewController__interfaceOrientation_fn(UIViewController* __this, int* __retval);
void UIViewController__get_InterfaceOrientation_fn(UIViewController* __this, int* __retval);
void UIViewController__iOSFoundationINSCodingencodeWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* aCoder);
void UIViewController__iOSFoundationINSCodinginitWithCoder_fn(UIViewController* __this, ::g::iOS::Foundation::NSCoder* aDecoder);
void UIViewController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn(UIViewController* __this, uObject* container);
void UIViewController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn(UIViewController* __this, uObject* container, ::g::iOS::CoreGraphics::CGSize* parentSize, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIViewController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn(UIViewController* __this, uObject* container);
void UIViewController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* size, uObject* coordinator);
void UIViewController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection* newCollection, uObject* coordinator);
void UIViewController__iOSUIKitIUITraitEnvironmenttraitCollectionDidChange_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection* previousTraitCollection);
void UIViewController__isBeingDismissed_fn(UIViewController* __this, bool* __retval);
void UIViewController__isBeingPresented_fn(UIViewController* __this, bool* __retval);
void UIViewController__isEditing_fn(UIViewController* __this, bool* __retval);
void UIViewController__isModalInPopover_fn(UIViewController* __this, bool* __retval);
void UIViewController__isMovingFromParentViewController_fn(UIViewController* __this, bool* __retval);
void UIViewController__isMovingToParentViewController_fn(UIViewController* __this, bool* __retval);
void UIViewController__isViewLoaded_fn(UIViewController* __this, bool* __retval);
void UIViewController__loadView_fn(UIViewController* __this);
void UIViewController__get_ModalInPopover_fn(UIViewController* __this, bool* __retval);
void UIViewController__set_ModalInPopover_fn(UIViewController* __this, bool* value);
void UIViewController__modalPresentationCapturesStatusBarAppearance_fn(UIViewController* __this, bool* __retval);
void UIViewController__get_ModalPresentationCapturesStatusBarAppearance_fn(UIViewController* __this, bool* __retval);
void UIViewController__set_ModalPresentationCapturesStatusBarAppearance_fn(UIViewController* __this, bool* value);
void UIViewController__modalPresentationStyle_fn(UIViewController* __this, int* __retval);
void UIViewController__get_ModalPresentationStyle_fn(UIViewController* __this, int* __retval);
void UIViewController__set_ModalPresentationStyle_fn(UIViewController* __this, int* value);
void UIViewController__modalTransitionStyle_fn(UIViewController* __this, int* __retval);
void UIViewController__get_ModalTransitionStyle_fn(UIViewController* __this, int* __retval);
void UIViewController__set_ModalTransitionStyle_fn(UIViewController* __this, int* value);
void UIViewController__modalViewController_fn(UIViewController* __this, UIViewController** __retval);
void UIViewController__get_ModalViewController_fn(UIViewController* __this, UIViewController** __retval);
void UIViewController__navigationController_fn(UIViewController* __this, ::g::iOS::UIKit::UINavigationController** __retval);
void UIViewController__get_NavigationController_fn(UIViewController* __this, ::g::iOS::UIKit::UINavigationController** __retval);
void UIViewController__navigationItem_fn(UIViewController* __this, ::g::iOS::UIKit::UINavigationItem** __retval);
void UIViewController__get_NavigationItem_fn(UIViewController* __this, ::g::iOS::UIKit::UINavigationItem** __retval);
void UIViewController__New7_fn(UIViewController** __retval);
void UIViewController__New8_fn(::id* __id1, UIViewController** __retval);
void UIViewController__nibBundle_fn(UIViewController* __this, ::g::iOS::Foundation::NSBundle** __retval);
void UIViewController__get_NibBundle_fn(UIViewController* __this, ::g::iOS::Foundation::NSBundle** __retval);
void UIViewController__nibName_fn(UIViewController* __this, uString** __retval);
void UIViewController__get_NibName_fn(UIViewController* __this, uString** __retval);
void UIViewController__overrideTraitCollectionForChildViewController_fn(UIViewController* __this, UIViewController* childViewController_, ::g::iOS::UIKit::UITraitCollection** __retval);
void UIViewController__parentViewController_fn(UIViewController* __this, UIViewController** __retval);
void UIViewController__get_ParentViewController_fn(UIViewController* __this, UIViewController** __retval);
void UIViewController__performSegueWithIdentifierSender_fn(UIViewController* __this, uString* identifier_, ::id* sender_);
void UIViewController__popoverPresentationController_fn(UIViewController* __this, ::g::iOS::UIKit::UIPopoverPresentationController** __retval);
void UIViewController__get_PopoverPresentationController_fn(UIViewController* __this, ::g::iOS::UIKit::UIPopoverPresentationController** __retval);
void UIViewController__preferredContentSize_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIViewController__get_PreferredContentSize_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIViewController__set_PreferredContentSize_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* value);
void UIViewController__preferredContentSizeDidChangeForChildContentContainer_fn(UIViewController* __this, uObject* container_);
void UIViewController__preferredInterfaceOrientationForPresentation_fn(UIViewController* __this, int* __retval);
void UIViewController__preferredStatusBarStyle_fn(UIViewController* __this, int* __retval);
void UIViewController__preferredStatusBarUpdateAnimation_fn(UIViewController* __this, int* __retval);
void UIViewController__prefersStatusBarHidden_fn(UIViewController* __this, bool* __retval);
void UIViewController__prepareForSegueSender_fn(UIViewController* __this, ::g::iOS::UIKit::UIStoryboardSegue* segue_, ::id* sender_);
void UIViewController__presentationController_fn(UIViewController* __this, ::g::iOS::UIKit::UIPresentationController** __retval);
void UIViewController__get_PresentationController_fn(UIViewController* __this, ::g::iOS::UIKit::UIPresentationController** __retval);
void UIViewController__presentedViewController_fn(UIViewController* __this, UIViewController** __retval);
void UIViewController__get_PresentedViewController_fn(UIViewController* __this, UIViewController** __retval);
void UIViewController__presentingViewController_fn(UIViewController* __this, UIViewController** __retval);
void UIViewController__get_PresentingViewController_fn(UIViewController* __this, UIViewController** __retval);
void UIViewController__presentModalViewControllerAnimated_fn(UIViewController* __this, UIViewController* modalViewController_, bool* animated_);
void UIViewController__providesPresentationContextTransitionStyle_fn(UIViewController* __this, bool* __retval);
void UIViewController__get_ProvidesPresentationContextTransitionStyle_fn(UIViewController* __this, bool* __retval);
void UIViewController__set_ProvidesPresentationContextTransitionStyle_fn(UIViewController* __this, bool* value);
void UIViewController__removeFromParentViewController_fn(UIViewController* __this);
void UIViewController__restorationIdentifier_fn(UIViewController* __this, uString** __retval);
void UIViewController__get_RestorationIdentifier_fn(UIViewController* __this, uString** __retval);
void UIViewController__set_RestorationIdentifier_fn(UIViewController* __this, uString* value);
void UIViewController__rotatingFooterView_fn(UIViewController* __this, ::g::iOS::UIKit::UIView** __retval);
void UIViewController__rotatingHeaderView_fn(UIViewController* __this, ::g::iOS::UIKit::UIView** __retval);
void UIViewController__searchDisplayController_fn(UIViewController* __this, ::g::iOS::UIKit::UISearchDisplayController** __retval);
void UIViewController__get_SearchDisplayController_fn(UIViewController* __this, ::g::iOS::UIKit::UISearchDisplayController** __retval);
void UIViewController__segueForUnwindingToViewControllerFromViewControllerIdentifier_fn(UIViewController* __this, UIViewController* toViewController_, UIViewController* fromViewController_, uString* identifier_, ::g::iOS::UIKit::UIStoryboardSegue** __retval);
void UIViewController__separateSecondaryViewControllerForSplitViewController_fn(UIViewController* __this, ::g::iOS::UIKit::UISplitViewController* splitViewController_, UIViewController** __retval);
void UIViewController__setAutomaticallyAdjustsScrollViewInsets_fn(UIViewController* __this, bool* automaticallyAdjustsScrollViewInsets_);
void UIViewController__setContentSizeForViewInPopover_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* contentSizeForViewInPopover_);
void UIViewController__setDefinesPresentationContext_fn(UIViewController* __this, bool* definesPresentationContext_);
void UIViewController__setEdgesForExtendedLayout_fn(UIViewController* __this, uint32_t* edgesForExtendedLayout_);
void UIViewController__setEditing_fn(UIViewController* __this, bool* editing_);
void UIViewController__setEditingAnimated_fn(UIViewController* __this, bool* editing_, bool* animated_);
void UIViewController__setExtendedLayoutIncludesOpaqueBars_fn(UIViewController* __this, bool* extendedLayoutIncludesOpaqueBars_);
void UIViewController__setHidesBottomBarWhenPushed_fn(UIViewController* __this, bool* hidesBottomBarWhenPushed_);
void UIViewController__setModalInPopover_fn(UIViewController* __this, bool* modalInPopover_);
void UIViewController__setModalPresentationCapturesStatusBarAppearance_fn(UIViewController* __this, bool* modalPresentationCapturesStatusBarAppearance_);
void UIViewController__setModalPresentationStyle_fn(UIViewController* __this, int* modalPresentationStyle_);
void UIViewController__setModalTransitionStyle_fn(UIViewController* __this, int* modalTransitionStyle_);
void UIViewController__setNeedsStatusBarAppearanceUpdate_fn(UIViewController* __this);
void UIViewController__setOverrideTraitCollectionForChildViewController_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection* collection_, UIViewController* childViewController_);
void UIViewController__setPreferredContentSize_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* preferredContentSize_);
void UIViewController__setProvidesPresentationContextTransitionStyle_fn(UIViewController* __this, bool* providesPresentationContextTransitionStyle_);
void UIViewController__setRestorationIdentifier_fn(UIViewController* __this, uString* restorationIdentifier_);
void UIViewController__setTabBarItem_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarItem* tabBarItem_);
void UIViewController__setTitle_fn(UIViewController* __this, uString* title_);
void UIViewController__setToolbarItems_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray* toolbarItems_);
void UIViewController__setToolbarItemsAnimated_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray* toolbarItems_, bool* animated_);
void UIViewController__setTransitioningDelegate_fn(UIViewController* __this, uObject* transitioningDelegate_);
void UIViewController__setView_fn(UIViewController* __this, ::g::iOS::UIKit::UIView* view_);
void UIViewController__setWantsFullScreenLayout_fn(UIViewController* __this, bool* wantsFullScreenLayout_);
void UIViewController__shouldAutomaticallyForwardAppearanceMethods_fn(UIViewController* __this, bool* __retval);
void UIViewController__shouldAutomaticallyForwardRotationMethods_fn(UIViewController* __this, bool* __retval);
void UIViewController__shouldAutorotate_fn(UIViewController* __this, bool* __retval);
void UIViewController__shouldAutorotateToInterfaceOrientation_fn(UIViewController* __this, int* toInterfaceOrientation_, bool* __retval);
void UIViewController__shouldPerformSegueWithIdentifierSender_fn(UIViewController* __this, uString* identifier_, ::id* sender_, bool* __retval);
void UIViewController__showDetailViewControllerSender_fn(UIViewController* __this, UIViewController* vc_, ::id* sender_);
void UIViewController__showViewControllerSender_fn(UIViewController* __this, UIViewController* vc_, ::id* sender_);
void UIViewController__sizeForChildContentContainerWithParentContainerSize_fn(UIViewController* __this, uObject* container_, ::g::iOS::CoreGraphics::CGSize* parentSize_, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIViewController__splitViewController_fn(UIViewController* __this, ::g::iOS::UIKit::UISplitViewController** __retval);
void UIViewController__get_SplitViewController_fn(UIViewController* __this, ::g::iOS::UIKit::UISplitViewController** __retval);
void UIViewController__storyboard_fn(UIViewController* __this, ::g::iOS::UIKit::UIStoryboard** __retval);
void UIViewController__get_Storyboard_fn(UIViewController* __this, ::g::iOS::UIKit::UIStoryboard** __retval);
void UIViewController__supportedInterfaceOrientations_fn(UIViewController* __this, uint64_t* __retval);
void UIViewController__systemLayoutFittingSizeDidChangeForChildContentContainer_fn(UIViewController* __this, uObject* container_);
void UIViewController__tabBarController_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarController** __retval);
void UIViewController__get_TabBarController_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarController** __retval);
void UIViewController__tabBarItem_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarItem** __retval);
void UIViewController__get_TabBarItem_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarItem** __retval);
void UIViewController__set_TabBarItem_fn(UIViewController* __this, ::g::iOS::UIKit::UITabBarItem* value);
void UIViewController__targetViewControllerForActionSender_fn(UIViewController* __this, uObjC::Selector* action_, ::id* sender_, UIViewController** __retval);
void UIViewController__title_fn(UIViewController* __this, uString** __retval);
void UIViewController__get_Title_fn(UIViewController* __this, uString** __retval);
void UIViewController__set_Title_fn(UIViewController* __this, uString* value);
void UIViewController__toolbarItems_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray** __retval);
void UIViewController__get_ToolbarItems_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray** __retval);
void UIViewController__set_ToolbarItems_fn(UIViewController* __this, ::g::iOS::Foundation::NSArray* value);
void UIViewController__topLayoutGuide_fn(UIViewController* __this, uObject** __retval);
void UIViewController__get_TopLayoutGuide_fn(UIViewController* __this, uObject** __retval);
void UIViewController__traitCollection_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection** __retval);
void UIViewController__get_TraitCollection_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection** __retval);
void UIViewController__traitCollectionDidChange_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection* previousTraitCollection_);
void UIViewController__transitionCoordinator_fn(UIViewController* __this, uObject** __retval);
void UIViewController__transitioningDelegate_fn(UIViewController* __this, uObject** __retval);
void UIViewController__get_TransitioningDelegate_fn(UIViewController* __this, uObject** __retval);
void UIViewController__set_TransitioningDelegate_fn(UIViewController* __this, uObject* value);
void UIViewController__updateViewConstraints_fn(UIViewController* __this);
void UIViewController__view_fn(UIViewController* __this, ::g::iOS::UIKit::UIView** __retval);
void UIViewController__get_View_fn(UIViewController* __this, ::g::iOS::UIKit::UIView** __retval);
void UIViewController__set_View_fn(UIViewController* __this, ::g::iOS::UIKit::UIView* value);
void UIViewController__viewControllerForUnwindSegueActionFromViewControllerWithSender_fn(UIViewController* __this, uObjC::Selector* action_, UIViewController* fromViewController_, ::id* sender_, UIViewController** __retval);
void UIViewController__viewDidAppear_fn(UIViewController* __this, bool* animated_);
void UIViewController__viewDidDisappear_fn(UIViewController* __this, bool* animated_);
void UIViewController__viewDidLayoutSubviews_fn(UIViewController* __this);
void UIViewController__viewDidLoad_fn(UIViewController* __this);
void UIViewController__viewDidUnload_fn(UIViewController* __this);
void UIViewController__viewWillAppear_fn(UIViewController* __this, bool* animated_);
void UIViewController__viewWillDisappear_fn(UIViewController* __this, bool* animated_);
void UIViewController__viewWillLayoutSubviews_fn(UIViewController* __this);
void UIViewController__viewWillTransitionToSizeWithTransitionCoordinator_fn(UIViewController* __this, ::g::iOS::CoreGraphics::CGSize* size_, uObject* coordinator_);
void UIViewController__viewWillUnload_fn(UIViewController* __this);
void UIViewController__wantsFullScreenLayout_fn(UIViewController* __this, bool* __retval);
void UIViewController__get_WantsFullScreenLayout_fn(UIViewController* __this, bool* __retval);
void UIViewController__set_WantsFullScreenLayout_fn(UIViewController* __this, bool* value);
void UIViewController__willAnimateFirstHalfOfRotationToInterfaceOrientationDuration_fn(UIViewController* __this, int* toInterfaceOrientation_, double* duration_);
void UIViewController__willAnimateRotationToInterfaceOrientationDuration_fn(UIViewController* __this, int* toInterfaceOrientation_, double* duration_);
void UIViewController__willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration_fn(UIViewController* __this, int* fromInterfaceOrientation_, double* duration_);
void UIViewController__willMoveToParentViewController_fn(UIViewController* __this, UIViewController* parent_);
void UIViewController__willRotateToInterfaceOrientationDuration_fn(UIViewController* __this, int* toInterfaceOrientation_, double* duration_);
void UIViewController__willTransitionToTraitCollectionWithTransitionCoordinator_fn(UIViewController* __this, ::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_);

struct UIViewController : ::g::iOS::UIKit::UIResponder
{
    void ctor_6();
    void ctor_7(::id __id1);
    void addChildViewController(UIViewController* childController_);
    void applicationFinishedRestoringState();
    bool automaticallyAdjustsScrollViewInsets();
    bool AutomaticallyAdjustsScrollViewInsets();
    void AutomaticallyAdjustsScrollViewInsets(bool value);
    bool automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers();
    void beginAppearanceTransitionAnimated(bool isAppearing_, bool animated_);
    uObject* bottomLayoutGuide();
    uObject* BottomLayoutGuide();
    bool canPerformUnwindSegueActionFromViewControllerWithSender(uObjC::Selector action_, UIViewController* fromViewController_, ::id sender_);
    UIViewController* childViewControllerForStatusBarHidden();
    UIViewController* childViewControllerForStatusBarStyle();
    ::g::iOS::Foundation::NSArray* childViewControllers();
    ::g::iOS::Foundation::NSArray* ChildViewControllers();
    void collapseSecondaryViewControllerForSplitViewController(UIViewController* secondaryViewController_, ::g::iOS::UIKit::UISplitViewController* splitViewController_);
    ::g::iOS::CoreGraphics::CGSize contentSizeForViewInPopover();
    ::g::iOS::CoreGraphics::CGSize ContentSizeForViewInPopover();
    void ContentSizeForViewInPopover(::g::iOS::CoreGraphics::CGSize value);
    void decodeRestorableStateWithCoder(::g::iOS::Foundation::NSCoder* coder_);
    bool definesPresentationContext();
    bool DefinesPresentationContext();
    void DefinesPresentationContext(bool value);
    void didAnimateFirstHalfOfRotationToInterfaceOrientation(int toInterfaceOrientation_);
    void didMoveToParentViewController(UIViewController* parent_);
    void didReceiveMemoryWarning();
    void didRotateFromInterfaceOrientation(int fromInterfaceOrientation_);
    bool disablesAutomaticKeyboardDismissal();
    void dismissModalViewControllerAnimated(bool animated_);
    uint32_t edgesForExtendedLayout();
    uint32_t EdgesForExtendedLayout();
    void EdgesForExtendedLayout(uint32_t value);
    ::g::iOS::UIKit::UIBarButtonItem* editButtonItem();
    bool Editing();
    void Editing(bool value);
    void encodeRestorableStateWithCoder(::g::iOS::Foundation::NSCoder* coder_);
    void encodeWithCoder(::g::iOS::Foundation::NSCoder* aCoder_);
    void endAppearanceTransition();
    bool extendedLayoutIncludesOpaqueBars();
    bool ExtendedLayoutIncludesOpaqueBars();
    void ExtendedLayoutIncludesOpaqueBars(bool value);
    ::g::iOS::Foundation::NSExtensionContext* extensionContext();
    ::g::iOS::Foundation::NSExtensionContext* ExtensionContext();
    bool hidesBottomBarWhenPushed();
    bool HidesBottomBarWhenPushed();
    void HidesBottomBarWhenPushed(bool value);
    void initWithCoder(::g::iOS::Foundation::NSCoder* aDecoder_);
    void initWithNibNameBundle(uString* nibNameOrNil_, ::g::iOS::Foundation::NSBundle* nibBundleOrNil_);
    int interfaceOrientation();
    int InterfaceOrientation();
    bool isBeingDismissed();
    bool isBeingPresented();
    bool isEditing();
    bool isModalInPopover();
    bool isMovingFromParentViewController();
    bool isMovingToParentViewController();
    bool isViewLoaded();
    void loadView() { (((UIViewController_type*)__type)->fp_loadView)(this); }
    bool ModalInPopover();
    void ModalInPopover(bool value);
    bool modalPresentationCapturesStatusBarAppearance();
    bool ModalPresentationCapturesStatusBarAppearance();
    void ModalPresentationCapturesStatusBarAppearance(bool value);
    int modalPresentationStyle();
    int ModalPresentationStyle();
    void ModalPresentationStyle(int value);
    int modalTransitionStyle();
    int ModalTransitionStyle();
    void ModalTransitionStyle(int value);
    UIViewController* modalViewController();
    UIViewController* ModalViewController();
    ::g::iOS::UIKit::UINavigationController* navigationController();
    ::g::iOS::UIKit::UINavigationController* NavigationController();
    ::g::iOS::UIKit::UINavigationItem* navigationItem();
    ::g::iOS::UIKit::UINavigationItem* NavigationItem();
    ::g::iOS::Foundation::NSBundle* nibBundle();
    ::g::iOS::Foundation::NSBundle* NibBundle();
    uString* nibName();
    uString* NibName();
    ::g::iOS::UIKit::UITraitCollection* overrideTraitCollectionForChildViewController(UIViewController* childViewController_);
    UIViewController* parentViewController();
    UIViewController* ParentViewController();
    void performSegueWithIdentifierSender(uString* identifier_, ::id sender_);
    ::g::iOS::UIKit::UIPopoverPresentationController* popoverPresentationController();
    ::g::iOS::UIKit::UIPopoverPresentationController* PopoverPresentationController();
    ::g::iOS::CoreGraphics::CGSize preferredContentSize();
    ::g::iOS::CoreGraphics::CGSize PreferredContentSize();
    void PreferredContentSize(::g::iOS::CoreGraphics::CGSize value);
    void preferredContentSizeDidChangeForChildContentContainer(uObject* container_);
    int preferredInterfaceOrientationForPresentation();
    int preferredStatusBarStyle();
    int preferredStatusBarUpdateAnimation();
    bool prefersStatusBarHidden();
    void prepareForSegueSender(::g::iOS::UIKit::UIStoryboardSegue* segue_, ::id sender_);
    ::g::iOS::UIKit::UIPresentationController* presentationController();
    ::g::iOS::UIKit::UIPresentationController* PresentationController();
    UIViewController* presentedViewController();
    UIViewController* PresentedViewController();
    UIViewController* presentingViewController();
    UIViewController* PresentingViewController();
    void presentModalViewControllerAnimated(UIViewController* modalViewController_, bool animated_);
    bool providesPresentationContextTransitionStyle();
    bool ProvidesPresentationContextTransitionStyle();
    void ProvidesPresentationContextTransitionStyle(bool value);
    void removeFromParentViewController();
    uString* restorationIdentifier();
    uString* RestorationIdentifier();
    void RestorationIdentifier(uString* value);
    ::g::iOS::UIKit::UIView* rotatingFooterView();
    ::g::iOS::UIKit::UIView* rotatingHeaderView();
    ::g::iOS::UIKit::UISearchDisplayController* searchDisplayController();
    ::g::iOS::UIKit::UISearchDisplayController* SearchDisplayController();
    ::g::iOS::UIKit::UIStoryboardSegue* segueForUnwindingToViewControllerFromViewControllerIdentifier(UIViewController* toViewController_, UIViewController* fromViewController_, uString* identifier_);
    UIViewController* separateSecondaryViewControllerForSplitViewController(::g::iOS::UIKit::UISplitViewController* splitViewController_);
    void setAutomaticallyAdjustsScrollViewInsets(bool automaticallyAdjustsScrollViewInsets_);
    void setContentSizeForViewInPopover(::g::iOS::CoreGraphics::CGSize contentSizeForViewInPopover_);
    void setDefinesPresentationContext(bool definesPresentationContext_);
    void setEdgesForExtendedLayout(uint32_t edgesForExtendedLayout_);
    void setEditing(bool editing_);
    void setEditingAnimated(bool editing_, bool animated_);
    void setExtendedLayoutIncludesOpaqueBars(bool extendedLayoutIncludesOpaqueBars_);
    void setHidesBottomBarWhenPushed(bool hidesBottomBarWhenPushed_);
    void setModalInPopover(bool modalInPopover_);
    void setModalPresentationCapturesStatusBarAppearance(bool modalPresentationCapturesStatusBarAppearance_);
    void setModalPresentationStyle(int modalPresentationStyle_);
    void setModalTransitionStyle(int modalTransitionStyle_);
    void setNeedsStatusBarAppearanceUpdate();
    void setOverrideTraitCollectionForChildViewController(::g::iOS::UIKit::UITraitCollection* collection_, UIViewController* childViewController_);
    void setPreferredContentSize(::g::iOS::CoreGraphics::CGSize preferredContentSize_);
    void setProvidesPresentationContextTransitionStyle(bool providesPresentationContextTransitionStyle_);
    void setRestorationIdentifier(uString* restorationIdentifier_);
    void setTabBarItem(::g::iOS::UIKit::UITabBarItem* tabBarItem_);
    void setTitle(uString* title_);
    void setToolbarItems(::g::iOS::Foundation::NSArray* toolbarItems_);
    void setToolbarItemsAnimated(::g::iOS::Foundation::NSArray* toolbarItems_, bool animated_);
    void setTransitioningDelegate(uObject* transitioningDelegate_);
    void setView(::g::iOS::UIKit::UIView* view_);
    void setWantsFullScreenLayout(bool wantsFullScreenLayout_);
    bool shouldAutomaticallyForwardAppearanceMethods();
    bool shouldAutomaticallyForwardRotationMethods();
    bool shouldAutorotate();
    bool shouldAutorotateToInterfaceOrientation(int toInterfaceOrientation_);
    bool shouldPerformSegueWithIdentifierSender(uString* identifier_, ::id sender_);
    void showDetailViewControllerSender(UIViewController* vc_, ::id sender_) { (((UIViewController_type*)__type)->fp_showDetailViewControllerSender)(this, vc_, &sender_); }
    void showViewControllerSender(UIViewController* vc_, ::id sender_) { (((UIViewController_type*)__type)->fp_showViewControllerSender)(this, vc_, &sender_); }
    ::g::iOS::CoreGraphics::CGSize sizeForChildContentContainerWithParentContainerSize(uObject* container_, ::g::iOS::CoreGraphics::CGSize parentSize_);
    ::g::iOS::UIKit::UISplitViewController* splitViewController();
    ::g::iOS::UIKit::UISplitViewController* SplitViewController();
    ::g::iOS::UIKit::UIStoryboard* storyboard();
    ::g::iOS::UIKit::UIStoryboard* Storyboard();
    uint64_t supportedInterfaceOrientations();
    void systemLayoutFittingSizeDidChangeForChildContentContainer(uObject* container_);
    ::g::iOS::UIKit::UITabBarController* tabBarController();
    ::g::iOS::UIKit::UITabBarController* TabBarController();
    ::g::iOS::UIKit::UITabBarItem* tabBarItem();
    ::g::iOS::UIKit::UITabBarItem* TabBarItem();
    void TabBarItem(::g::iOS::UIKit::UITabBarItem* value);
    UIViewController* targetViewControllerForActionSender(uObjC::Selector action_, ::id sender_);
    uString* title();
    uString* Title();
    void Title(uString* value);
    ::g::iOS::Foundation::NSArray* toolbarItems();
    ::g::iOS::Foundation::NSArray* ToolbarItems();
    void ToolbarItems(::g::iOS::Foundation::NSArray* value);
    uObject* topLayoutGuide();
    uObject* TopLayoutGuide();
    ::g::iOS::UIKit::UITraitCollection* traitCollection();
    ::g::iOS::UIKit::UITraitCollection* TraitCollection();
    void traitCollectionDidChange(::g::iOS::UIKit::UITraitCollection* previousTraitCollection_);
    uObject* transitionCoordinator();
    uObject* transitioningDelegate();
    uObject* TransitioningDelegate();
    void TransitioningDelegate(uObject* value);
    void updateViewConstraints();
    ::g::iOS::UIKit::UIView* view();
    ::g::iOS::UIKit::UIView* View();
    void View(::g::iOS::UIKit::UIView* value);
    UIViewController* viewControllerForUnwindSegueActionFromViewControllerWithSender(uObjC::Selector action_, UIViewController* fromViewController_, ::id sender_);
    void viewDidAppear(bool animated_) { (((UIViewController_type*)__type)->fp_viewDidAppear)(this, &animated_); }
    void viewDidDisappear(bool animated_);
    void viewDidLayoutSubviews();
    void viewDidLoad();
    void viewDidUnload();
    void viewWillAppear(bool animated_);
    void viewWillDisappear(bool animated_);
    void viewWillLayoutSubviews();
    void viewWillTransitionToSizeWithTransitionCoordinator(::g::iOS::CoreGraphics::CGSize size_, uObject* coordinator_);
    void viewWillUnload();
    bool wantsFullScreenLayout();
    bool WantsFullScreenLayout();
    void WantsFullScreenLayout(bool value);
    void willAnimateFirstHalfOfRotationToInterfaceOrientationDuration(int toInterfaceOrientation_, double duration_);
    void willAnimateRotationToInterfaceOrientationDuration(int toInterfaceOrientation_, double duration_);
    void willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration(int fromInterfaceOrientation_, double duration_);
    void willMoveToParentViewController(UIViewController* parent_);
    void willRotateToInterfaceOrientationDuration(int toInterfaceOrientation_, double duration_);
    void willTransitionToTraitCollectionWithTransitionCoordinator(::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_);
    static void _attemptRotationToDeviceOrientation();
    static void loadView(UIViewController* __this) { UIViewController__loadView_fn(__this); }
    static UIViewController* New7();
    static UIViewController* New8(::id __id1);
    static void showDetailViewControllerSender(UIViewController* __this, UIViewController* vc_, ::id sender_) { UIViewController__showDetailViewControllerSender_fn(__this, vc_, &sender_); }
    static void showViewControllerSender(UIViewController* __this, UIViewController* vc_, ::id sender_) { UIViewController__showViewControllerSender_fn(__this, vc_, &sender_); }
    static void viewDidAppear(UIViewController* __this, bool animated_) { UIViewController__viewDidAppear_fn(__this, &animated_); }
};
// }

}}} // ::g::iOS::UIKit
