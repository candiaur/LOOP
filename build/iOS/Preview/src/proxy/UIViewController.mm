#define uObjC_NATIVE_TYPE UIViewController
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIViewController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIViewController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UIViewController.initWithNibNameBundle(string,iOS.Foundation.NSBundle):IsStripped}
- (instancetype) initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->initWithNibNameBundle(uObjC::UnoString(nibNameOrNil), (::g::iOS::Foundation::NSBundle*)uObjC::Lifetime::GetUnoObject(nibBundleOrNil, ::g::iOS::Foundation::NSBundle_typeof()));
    return uObjC_OBJECT_HANDLE(__this);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.loadView():IsStripped}
- (void) loadView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->loadView();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewWillUnload():IsStripped}
- (void) viewWillUnload
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewWillUnload();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewDidUnload():IsStripped}
- (void) viewDidUnload
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewDidUnload();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewDidLoad():IsStripped}
- (void) viewDidLoad
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewDidLoad();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.isViewLoaded():IsStripped}
- (BOOL) isViewLoaded
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isViewLoaded();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.performSegueWithIdentifierSender(string,ObjC.ID):IsStripped}
- (void) performSegueWithIdentifier:(NSString *)identifier sender:(id)sender
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->performSegueWithIdentifierSender(uObjC::UnoString(identifier), (::id)sender);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.shouldPerformSegueWithIdentifierSender(string,ObjC.ID):IsStripped}
- (BOOL) shouldPerformSegueWithIdentifier:(NSString *)identifier sender:(id)sender
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->shouldPerformSegueWithIdentifierSender(uObjC::UnoString(identifier), (::id)sender);
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.prepareForSegueSender(iOS.UIKit.UIStoryboardSegue,ObjC.ID):IsStripped}
- (void) prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->prepareForSegueSender((::g::iOS::UIKit::UIStoryboardSegue*)uObjC::Lifetime::GetUnoObject(segue, ::g::iOS::UIKit::UIStoryboardSegue_typeof()), (::id)sender);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.canPerformUnwindSegueActionFromViewControllerWithSender(ObjC.Selector,iOS.UIKit.UIViewController,ObjC.ID):IsStripped}
- (BOOL) canPerformUnwindSegueAction:(SEL)action fromViewController:(UIViewController *)fromViewController withSender:(id)sender
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->canPerformUnwindSegueActionFromViewControllerWithSender((uObjC::Selector)action, (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(fromViewController, ::g::iOS::UIKit::UIViewController_typeof()), (::id)sender);
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewControllerForUnwindSegueActionFromViewControllerWithSender(ObjC.Selector,iOS.UIKit.UIViewController,ObjC.ID):IsStripped}
- (UIViewController *) viewControllerForUnwindSegueAction:(SEL)action fromViewController:(UIViewController *)fromViewController withSender:(id)sender
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = __this->viewControllerForUnwindSegueActionFromViewControllerWithSender((uObjC::Selector)action, (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(fromViewController, ::g::iOS::UIKit::UIViewController_typeof()), (::id)sender);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.segueForUnwindingToViewControllerFromViewControllerIdentifier(iOS.UIKit.UIViewController,iOS.UIKit.UIViewController,string):IsStripped}
- (UIStoryboardSegue *) segueForUnwindingToViewController:(UIViewController *)toViewController fromViewController:(UIViewController *)fromViewController identifier:(NSString *)identifier
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIStoryboardSegue* __return = __this->segueForUnwindingToViewControllerFromViewControllerIdentifier((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(toViewController, ::g::iOS::UIKit::UIViewController_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(fromViewController, ::g::iOS::UIKit::UIViewController_typeof()), uObjC::UnoString(identifier));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewWillAppear(bool):IsStripped}
- (void) viewWillAppear:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewWillAppear((bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewDidAppear(bool):IsStripped}
- (void) viewDidAppear:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewDidAppear((bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewWillDisappear(bool):IsStripped}
- (void) viewWillDisappear:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewWillDisappear((bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewDidDisappear(bool):IsStripped}
- (void) viewDidDisappear:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewDidDisappear((bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewWillLayoutSubviews():IsStripped}
- (void) viewWillLayoutSubviews
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewWillLayoutSubviews();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewDidLayoutSubviews():IsStripped}
- (void) viewDidLayoutSubviews
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewDidLayoutSubviews();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.didReceiveMemoryWarning():IsStripped}
- (void) didReceiveMemoryWarning
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->didReceiveMemoryWarning();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.isBeingPresented():IsStripped}
- (BOOL) isBeingPresented
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isBeingPresented();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.isBeingDismissed():IsStripped}
- (BOOL) isBeingDismissed
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isBeingDismissed();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.isMovingToParentViewController():IsStripped}
- (BOOL) isMovingToParentViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isMovingToParentViewController();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.isMovingFromParentViewController():IsStripped}
- (BOOL) isMovingFromParentViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isMovingFromParentViewController();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.presentModalViewControllerAnimated(iOS.UIKit.UIViewController,bool):IsStripped}
- (void) presentModalViewController:(UIViewController *)modalViewController animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->presentModalViewControllerAnimated((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(modalViewController, ::g::iOS::UIKit::UIViewController_typeof()), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.dismissModalViewControllerAnimated(bool):IsStripped}
- (void) dismissModalViewControllerAnimated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->dismissModalViewControllerAnimated((bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.disablesAutomaticKeyboardDismissal():IsStripped}
- (BOOL) disablesAutomaticKeyboardDismissal
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->disablesAutomaticKeyboardDismissal();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.preferredStatusBarStyle():IsStripped}
- (UIStatusBarStyle) preferredStatusBarStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->preferredStatusBarStyle();
    return ::UIStatusBarStyle(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.prefersStatusBarHidden():IsStripped}
- (BOOL) prefersStatusBarHidden
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->prefersStatusBarHidden();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.preferredStatusBarUpdateAnimation():IsStripped}
- (UIStatusBarAnimation) preferredStatusBarUpdateAnimation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->preferredStatusBarUpdateAnimation();
    return ::UIStatusBarAnimation(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setNeedsStatusBarAppearanceUpdate():IsStripped}
- (void) setNeedsStatusBarAppearanceUpdate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setNeedsStatusBarAppearanceUpdate();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.targetViewControllerForActionSender(ObjC.Selector,ObjC.ID):IsStripped}
- (UIViewController *) targetViewControllerForAction:(SEL)action sender:(id)sender
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = __this->targetViewControllerForActionSender((uObjC::Selector)action, (::id)sender);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.showViewControllerSender(iOS.UIKit.UIViewController,ObjC.ID):IsStripped}
- (void) showViewController:(UIViewController *)vc sender:(id)sender
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->showViewControllerSender((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(vc, ::g::iOS::UIKit::UIViewController_typeof()), (::id)sender);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.showDetailViewControllerSender(iOS.UIKit.UIViewController,ObjC.ID):IsStripped}
- (void) showDetailViewController:(UIViewController *)vc sender:(id)sender
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->showDetailViewControllerSender((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(vc, ::g::iOS::UIKit::UIViewController_typeof()), (::id)sender);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.view():IsStripped}
- (UIView *) view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIView* __return = __this->view();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setView(iOS.UIKit.UIView):IsStripped}
- (void) setView:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setView((::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::UIKit::UIView_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.nibName():IsStripped}
- (NSString *) nibName
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uString* __return = __this->nibName();
    return uObjC::NativeString(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.nibBundle():IsStripped}
- (NSBundle *) nibBundle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::Foundation::NSBundle* __return = __this->nibBundle();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.storyboard():IsStripped}
- (UIStoryboard *) storyboard
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIStoryboard* __return = __this->storyboard();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.title():IsStripped}
- (NSString *) title
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uString* __return = __this->title();
    return uObjC::NativeString(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setTitle(string):IsStripped}
- (void) setTitle:(NSString *)title
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTitle(uObjC::UnoString(title));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.parentViewController():IsStripped}
- (UIViewController *) parentViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = __this->parentViewController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.modalViewController():IsStripped}
- (UIViewController *) modalViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = __this->modalViewController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.presentedViewController():IsStripped}
- (UIViewController *) presentedViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = __this->presentedViewController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.presentingViewController():IsStripped}
- (UIViewController *) presentingViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = __this->presentingViewController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.definesPresentationContext():IsStripped}
- (BOOL) definesPresentationContext
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->definesPresentationContext();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setDefinesPresentationContext(bool):IsStripped}
- (void) setDefinesPresentationContext:(BOOL)definesPresentationContext
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setDefinesPresentationContext((bool)definesPresentationContext);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.providesPresentationContextTransitionStyle():IsStripped}
- (BOOL) providesPresentationContextTransitionStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->providesPresentationContextTransitionStyle();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setProvidesPresentationContextTransitionStyle(bool):IsStripped}
- (void) setProvidesPresentationContextTransitionStyle:(BOOL)providesPresentationContextTransitionStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setProvidesPresentationContextTransitionStyle((bool)providesPresentationContextTransitionStyle);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.modalTransitionStyle():IsStripped}
- (UIModalTransitionStyle) modalTransitionStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->modalTransitionStyle();
    return ::UIModalTransitionStyle(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setModalTransitionStyle(iOS.UIKit.UIModalTransitionStyle):IsStripped}
- (void) setModalTransitionStyle:(UIModalTransitionStyle)modalTransitionStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setModalTransitionStyle(int(modalTransitionStyle));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.modalPresentationStyle():IsStripped}
- (UIModalPresentationStyle) modalPresentationStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->modalPresentationStyle();
    return ::UIModalPresentationStyle(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setModalPresentationStyle(iOS.UIKit.UIModalPresentationStyle):IsStripped}
- (void) setModalPresentationStyle:(UIModalPresentationStyle)modalPresentationStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setModalPresentationStyle(int(modalPresentationStyle));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.modalPresentationCapturesStatusBarAppearance():IsStripped}
- (BOOL) modalPresentationCapturesStatusBarAppearance
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->modalPresentationCapturesStatusBarAppearance();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setModalPresentationCapturesStatusBarAppearance(bool):IsStripped}
- (void) setModalPresentationCapturesStatusBarAppearance:(BOOL)modalPresentationCapturesStatusBarAppearance
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setModalPresentationCapturesStatusBarAppearance((bool)modalPresentationCapturesStatusBarAppearance);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.wantsFullScreenLayout():IsStripped}
- (BOOL) wantsFullScreenLayout
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->wantsFullScreenLayout();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setWantsFullScreenLayout(bool):IsStripped}
- (void) setWantsFullScreenLayout:(BOOL)wantsFullScreenLayout
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setWantsFullScreenLayout((bool)wantsFullScreenLayout);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.edgesForExtendedLayout():IsStripped}
- (UIRectEdge) edgesForExtendedLayout
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uint32_t __return = __this->edgesForExtendedLayout();
    return ::UIRectEdge(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setEdgesForExtendedLayout(iOS.UIKit.UIRectEdge):IsStripped}
- (void) setEdgesForExtendedLayout:(UIRectEdge)edgesForExtendedLayout
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setEdgesForExtendedLayout(uint32_t(edgesForExtendedLayout));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.extendedLayoutIncludesOpaqueBars():IsStripped}
- (BOOL) extendedLayoutIncludesOpaqueBars
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->extendedLayoutIncludesOpaqueBars();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setExtendedLayoutIncludesOpaqueBars(bool):IsStripped}
- (void) setExtendedLayoutIncludesOpaqueBars:(BOOL)extendedLayoutIncludesOpaqueBars
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setExtendedLayoutIncludesOpaqueBars((bool)extendedLayoutIncludesOpaqueBars);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.automaticallyAdjustsScrollViewInsets():IsStripped}
- (BOOL) automaticallyAdjustsScrollViewInsets
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->automaticallyAdjustsScrollViewInsets();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setAutomaticallyAdjustsScrollViewInsets(bool):IsStripped}
- (void) setAutomaticallyAdjustsScrollViewInsets:(BOOL)automaticallyAdjustsScrollViewInsets
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setAutomaticallyAdjustsScrollViewInsets((bool)automaticallyAdjustsScrollViewInsets);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.preferredContentSize():IsStripped}
- (CGSize) preferredContentSize
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGSize __return = __this->preferredContentSize();
    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setPreferredContentSize(iOS.CoreGraphics.CGSize):IsStripped}
- (void) setPreferredContentSize:(CGSize)preferredContentSize
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setPreferredContentSize(uObjC::Struct::ToUno_CGSize(preferredContentSize, ::g::iOS::CoreGraphics::CGSize()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.tabBarItem():IsStripped}
- (UITabBarItem *) tabBarItem
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UITabBarItem* __return = __this->tabBarItem();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setTabBarItem(iOS.UIKit.UITabBarItem):IsStripped}
- (void) setTabBarItem:(UITabBarItem *)tabBarItem
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTabBarItem((::g::iOS::UIKit::UITabBarItem*)uObjC::Lifetime::GetUnoObject(tabBarItem, ::g::iOS::UIKit::UITabBarItem_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.tabBarController():IsStripped}
- (UITabBarController *) tabBarController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UITabBarController* __return = __this->tabBarController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.collapseSecondaryViewControllerForSplitViewController(iOS.UIKit.UIViewController,iOS.UIKit.UISplitViewController):IsStripped}
- (void) collapseSecondaryViewController:(UIViewController *)secondaryViewController forSplitViewController:(UISplitViewController *)splitViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->collapseSecondaryViewControllerForSplitViewController((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(secondaryViewController, ::g::iOS::UIKit::UIViewController_typeof()), (::g::iOS::UIKit::UISplitViewController*)uObjC::Lifetime::GetUnoObject(splitViewController, ::g::iOS::UIKit::UISplitViewController_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.separateSecondaryViewControllerForSplitViewController(iOS.UIKit.UISplitViewController):IsStripped}
- (UIViewController *) separateSecondaryViewControllerForSplitViewController:(UISplitViewController *)splitViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = __this->separateSecondaryViewControllerForSplitViewController((::g::iOS::UIKit::UISplitViewController*)uObjC::Lifetime::GetUnoObject(splitViewController, ::g::iOS::UIKit::UISplitViewController_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.splitViewController():IsStripped}
- (UISplitViewController *) splitViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UISplitViewController* __return = __this->splitViewController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.transitionCoordinator():IsStripped}
- (id<UIViewControllerTransitionCoordinator>) transitionCoordinator
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uObject* __return = __this->transitionCoordinator();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.isModalInPopover():IsStripped}
- (BOOL) isModalInPopover
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isModalInPopover();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setModalInPopover(bool):IsStripped}
- (void) setModalInPopover:(BOOL)modalInPopover
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setModalInPopover((bool)modalInPopover);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.contentSizeForViewInPopover():IsStripped}
- (CGSize) contentSizeForViewInPopover
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGSize __return = __this->contentSizeForViewInPopover();
    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setContentSizeForViewInPopover(iOS.CoreGraphics.CGSize):IsStripped}
- (void) setContentSizeForViewInPopover:(CGSize)contentSizeForViewInPopover
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setContentSizeForViewInPopover(uObjC::Struct::ToUno_CGSize(contentSizeForViewInPopover, ::g::iOS::CoreGraphics::CGSize()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setToolbarItemsAnimated(iOS.Foundation.NSArray,bool):IsStripped}
- (void) setToolbarItems:(NSArray *)toolbarItems animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setToolbarItemsAnimated((::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(toolbarItems, ::g::iOS::Foundation::NSArray_typeof()), (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.toolbarItems():IsStripped}
- (NSArray *) toolbarItems
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::Foundation::NSArray* __return = __this->toolbarItems();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setToolbarItems(iOS.Foundation.NSArray):IsStripped}
- (void) setToolbarItems:(NSArray *)toolbarItems
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setToolbarItems((::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(toolbarItems, ::g::iOS::Foundation::NSArray_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.navigationItem():IsStripped}
- (UINavigationItem *) navigationItem
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UINavigationItem* __return = __this->navigationItem();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.hidesBottomBarWhenPushed():IsStripped}
- (BOOL) hidesBottomBarWhenPushed
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->hidesBottomBarWhenPushed();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setHidesBottomBarWhenPushed(bool):IsStripped}
- (void) setHidesBottomBarWhenPushed:(BOOL)hidesBottomBarWhenPushed
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setHidesBottomBarWhenPushed((bool)hidesBottomBarWhenPushed);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.navigationController():IsStripped}
- (UINavigationController *) navigationController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UINavigationController* __return = __this->navigationController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.presentationController():IsStripped}
- (UIPresentationController *) presentationController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIPresentationController* __return = __this->presentationController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.popoverPresentationController():IsStripped}
- (UIPopoverPresentationController *) popoverPresentationController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIPopoverPresentationController* __return = __this->popoverPresentationController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.extensionContext():IsStripped}
- (NSExtensionContext *) extensionContext
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::Foundation::NSExtensionContext* __return = __this->extensionContext();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.topLayoutGuide():IsStripped}
- (id<UILayoutSupport>) topLayoutGuide
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uObject* __return = __this->topLayoutGuide();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::g::iOS::UIKit::IUILayoutSupport_typeof());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.bottomLayoutGuide():IsStripped}
- (id<UILayoutSupport>) bottomLayoutGuide
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uObject* __return = __this->bottomLayoutGuide();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::g::iOS::UIKit::IUILayoutSupport_typeof());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.transitioningDelegate():IsStripped}
- (id<UIViewControllerTransitioningDelegate>) transitioningDelegate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uObject* __return = __this->transitioningDelegate();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::g::iOS::UIKit::IUIViewControllerTransitioningDelegate_typeof());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setTransitioningDelegate(iOS.UIKit.IUIViewControllerTransitioningDelegate):IsStripped}
- (void) setTransitioningDelegate:(id<UIViewControllerTransitioningDelegate>)transitioningDelegate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTransitioningDelegate(uObjC::Lifetime::GetUnoObject(transitioningDelegate, ::g::iOS::UIKit::Interop::IUIViewControllerTransitioningDelegate_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.updateViewConstraints():IsStripped}
- (void) updateViewConstraints
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->updateViewConstraints();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.encodeRestorableStateWithCoder(iOS.Foundation.NSCoder):IsStripped}
- (void) encodeRestorableStateWithCoder:(NSCoder *)coder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->encodeRestorableStateWithCoder((::g::iOS::Foundation::NSCoder*)uObjC::Lifetime::GetUnoObject(coder, ::g::iOS::Foundation::NSCoder_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.decodeRestorableStateWithCoder(iOS.Foundation.NSCoder):IsStripped}
- (void) decodeRestorableStateWithCoder:(NSCoder *)coder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->decodeRestorableStateWithCoder((::g::iOS::Foundation::NSCoder*)uObjC::Lifetime::GetUnoObject(coder, ::g::iOS::Foundation::NSCoder_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.applicationFinishedRestoringState():IsStripped}
- (void) applicationFinishedRestoringState
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->applicationFinishedRestoringState();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.restorationIdentifier():IsStripped}
- (NSString *) restorationIdentifier
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uString* __return = __this->restorationIdentifier();
    return uObjC::NativeString(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setRestorationIdentifier(string):IsStripped}
- (void) setRestorationIdentifier:(NSString *)restorationIdentifier
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setRestorationIdentifier(uObjC::UnoString(restorationIdentifier));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers():IsStripped}
- (BOOL) automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.shouldAutomaticallyForwardRotationMethods():IsStripped}
- (BOOL) shouldAutomaticallyForwardRotationMethods
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->shouldAutomaticallyForwardRotationMethods();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.shouldAutomaticallyForwardAppearanceMethods():IsStripped}
- (BOOL) shouldAutomaticallyForwardAppearanceMethods
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->shouldAutomaticallyForwardAppearanceMethods();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.willMoveToParentViewController(iOS.UIKit.UIViewController):IsStripped}
- (void) willMoveToParentViewController:(UIViewController *)parent
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->willMoveToParentViewController((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(parent, ::g::iOS::UIKit::UIViewController_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.didMoveToParentViewController(iOS.UIKit.UIViewController):IsStripped}
- (void) didMoveToParentViewController:(UIViewController *)parent
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->didMoveToParentViewController((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(parent, ::g::iOS::UIKit::UIViewController_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.addChildViewController(iOS.UIKit.UIViewController):IsStripped}
- (void) addChildViewController:(UIViewController *)childController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addChildViewController((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(childController, ::g::iOS::UIKit::UIViewController_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.removeFromParentViewController():IsStripped}
- (void) removeFromParentViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeFromParentViewController();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.beginAppearanceTransitionAnimated(bool,bool):IsStripped}
- (void) beginAppearanceTransition:(BOOL)isAppearing animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->beginAppearanceTransitionAnimated((bool)isAppearing, (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.endAppearanceTransition():IsStripped}
- (void) endAppearanceTransition
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->endAppearanceTransition();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.childViewControllerForStatusBarStyle():IsStripped}
- (UIViewController *) childViewControllerForStatusBarStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = __this->childViewControllerForStatusBarStyle();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.childViewControllerForStatusBarHidden():IsStripped}
- (UIViewController *) childViewControllerForStatusBarHidden
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIViewController* __return = __this->childViewControllerForStatusBarHidden();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setOverrideTraitCollectionForChildViewController(iOS.UIKit.UITraitCollection,iOS.UIKit.UIViewController):IsStripped}
- (void) setOverrideTraitCollection:(UITraitCollection *)collection forChildViewController:(UIViewController *)childViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setOverrideTraitCollectionForChildViewController((::g::iOS::UIKit::UITraitCollection*)uObjC::Lifetime::GetUnoObject(collection, ::g::iOS::UIKit::UITraitCollection_typeof()), (::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(childViewController, ::g::iOS::UIKit::UIViewController_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.overrideTraitCollectionForChildViewController(iOS.UIKit.UIViewController):IsStripped}
- (UITraitCollection *) overrideTraitCollectionForChildViewController:(UIViewController *)childViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UITraitCollection* __return = __this->overrideTraitCollectionForChildViewController((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(childViewController, ::g::iOS::UIKit::UIViewController_typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.childViewControllers():IsStripped}
- (NSArray *) childViewControllers
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::Foundation::NSArray* __return = __this->childViewControllers();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.searchDisplayController():IsStripped}
- (UISearchDisplayController *) searchDisplayController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UISearchDisplayController* __return = __this->searchDisplayController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setEditingAnimated(bool,bool):IsStripped}
- (void) setEditing:(BOOL)editing animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setEditingAnimated((bool)editing, (bool)animated);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.editButtonItem():IsStripped}
- (UIBarButtonItem *) editButtonItem
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIBarButtonItem* __return = __this->editButtonItem();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.isEditing():IsStripped}
- (BOOL) isEditing
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isEditing();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.setEditing(bool):IsStripped}
- (void) setEditing:(BOOL)editing
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setEditing((bool)editing);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController._attemptRotationToDeviceOrientation():IsStripped}
+ (void) attemptRotationToDeviceOrientation
{
    ::g::iOS::UIKit::UIViewController::_attemptRotationToDeviceOrientation();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.shouldAutorotateToInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation):IsStripped}
- (BOOL) shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->shouldAutorotateToInterfaceOrientation(int(toInterfaceOrientation));
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.shouldAutorotate():IsStripped}
- (BOOL) shouldAutorotate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->shouldAutorotate();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.supportedInterfaceOrientations():IsStripped}
- (NSUInteger) supportedInterfaceOrientations
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uint64_t __return = __this->supportedInterfaceOrientations();
    return (unsigned long)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.preferredInterfaceOrientationForPresentation():IsStripped}
- (UIInterfaceOrientation) preferredInterfaceOrientationForPresentation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->preferredInterfaceOrientationForPresentation();
    return ::UIInterfaceOrientation(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.rotatingHeaderView():IsStripped}
- (UIView *) rotatingHeaderView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIView* __return = __this->rotatingHeaderView();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.rotatingFooterView():IsStripped}
- (UIView *) rotatingFooterView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIView* __return = __this->rotatingFooterView();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.willRotateToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation,double):IsStripped}
- (void) willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->willRotateToInterfaceOrientationDuration(int(toInterfaceOrientation), duration);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.didRotateFromInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation):IsStripped}
- (void) didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->didRotateFromInterfaceOrientation(int(fromInterfaceOrientation));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.willAnimateRotationToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation,double):IsStripped}
- (void) willAnimateRotationToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->willAnimateRotationToInterfaceOrientationDuration(int(toInterfaceOrientation), duration);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.willAnimateFirstHalfOfRotationToInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation,double):IsStripped}
- (void) willAnimateFirstHalfOfRotationToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->willAnimateFirstHalfOfRotationToInterfaceOrientationDuration(int(toInterfaceOrientation), duration);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.didAnimateFirstHalfOfRotationToInterfaceOrientation(iOS.UIKit.UIInterfaceOrientation):IsStripped}
- (void) didAnimateFirstHalfOfRotationToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->didAnimateFirstHalfOfRotationToInterfaceOrientation(int(toInterfaceOrientation));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration(iOS.UIKit.UIInterfaceOrientation,double):IsStripped}
- (void) willAnimateSecondHalfOfRotationFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation duration:(NSTimeInterval)duration
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->willAnimateSecondHalfOfRotationFromInterfaceOrientationDuration(int(fromInterfaceOrientation), duration);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.interfaceOrientation():IsStripped}
- (UIInterfaceOrientation) interfaceOrientation
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->interfaceOrientation();
    return ::UIInterfaceOrientation(__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.encodeWithCoder(iOS.Foundation.NSCoder):IsStripped}
- (void) encodeWithCoder:(NSCoder *)aCoder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->encodeWithCoder((::g::iOS::Foundation::NSCoder*)uObjC::Lifetime::GetUnoObject(aCoder, ::g::iOS::Foundation::NSCoder_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.initWithCoder(iOS.Foundation.NSCoder):IsStripped}
- (id) initWithCoder:(NSCoder *)aDecoder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->initWithCoder((::g::iOS::Foundation::NSCoder*)uObjC::Lifetime::GetUnoObject(aDecoder, ::g::iOS::Foundation::NSCoder_typeof()));
    return uObjC_OBJECT_HANDLE(__this);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.traitCollectionDidChange(iOS.UIKit.UITraitCollection):IsStripped}
- (void) traitCollectionDidChange:(UITraitCollection *)previousTraitCollection
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->traitCollectionDidChange((::g::iOS::UIKit::UITraitCollection*)uObjC::Lifetime::GetUnoObject(previousTraitCollection, ::g::iOS::UIKit::UITraitCollection_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.traitCollection():IsStripped}
- (UITraitCollection *) traitCollection
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UITraitCollection* __return = __this->traitCollection();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer):IsStripped}
- (void) preferredContentSizeDidChangeForChildContentContainer:(id<UIContentContainer>)container
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->preferredContentSizeDidChangeForChildContentContainer(uObjC::Lifetime::GetUnoObject(container, ::g::iOS::UIKit::Interop::IUIContentContainer_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer):IsStripped}
- (void) systemLayoutFittingSizeDidChangeForChildContentContainer:(id<UIContentContainer>)container
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->systemLayoutFittingSizeDidChangeForChildContentContainer(uObjC::Lifetime::GetUnoObject(container, ::g::iOS::UIKit::Interop::IUIContentContainer_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer,iOS.CoreGraphics.CGSize):IsStripped}
- (CGSize) sizeForChildContentContainer:(id<UIContentContainer>)container withParentContainerSize:(CGSize)parentSize
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGSize __return = __this->sizeForChildContentContainerWithParentContainerSize(uObjC::Lifetime::GetUnoObject(container, ::g::iOS::UIKit::Interop::IUIContentContainer_typeof()), uObjC::Struct::ToUno_CGSize(parentSize, ::g::iOS::CoreGraphics::CGSize()));
    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize,iOS.UIKit.IUIViewControllerTransitionCoordinator):IsStripped}
- (void) viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewWillTransitionToSizeWithTransitionCoordinator(uObjC::Struct::ToUno_CGSize(size, ::g::iOS::CoreGraphics::CGSize()), uObjC::Lifetime::GetUnoObject(coordinator, ::g::iOS::UIKit::Interop::IUIViewControllerTransitionCoordinator_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIViewController.willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection,iOS.UIKit.IUIViewControllerTransitionCoordinator):IsStripped}
- (void) willTransitionToTraitCollection:(UITraitCollection *)newCollection withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->willTransitionToTraitCollectionWithTransitionCoordinator((::g::iOS::UIKit::UITraitCollection*)uObjC::Lifetime::GetUnoObject(newCollection, ::g::iOS::UIKit::UITraitCollection_typeof()), uObjC::Lifetime::GetUnoObject(coordinator, ::g::iOS::UIKit::Interop::IUIViewControllerTransitionCoordinator_typeof()));
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
