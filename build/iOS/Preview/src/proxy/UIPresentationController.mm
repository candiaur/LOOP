#define uObjC_NATIVE_TYPE UIPresentationController
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIPresentationController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIPresentationController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UIPresentationController.initWithPresentedViewControllerPresentingViewController(iOS.UIKit.UIViewController,iOS.UIKit.UIViewController):IsStripped}
//- (instancetype) initWithPresentedViewController:(UIViewController *)presentedViewController presentingViewController:(UIViewController *)presentingViewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPresentationController:Of(__this).initWithPresentedViewControllerPresentingViewController(iOS.UIKit.UIViewController,iOS.UIKit.UIViewController):Call((#{iOS.UIKit.UIViewController})uObjC::Lifetime::GetUnoObject(presentedViewController, #{iOS.UIKit.UIViewController:TypeOf}), (#{iOS.UIKit.UIViewController})uObjC::Lifetime::GetUnoObject(presentingViewController, #{iOS.UIKit.UIViewController:TypeOf}))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.adaptivePresentationStyle():IsStripped}
//- (UIModalPresentationStyle) adaptivePresentationStyle
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIModalPresentationStyle} __return = #{iOS.UIKit.UIPresentationController:Of(__this).adaptivePresentationStyle():Call()};
//    return ::UIModalPresentationStyle(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.adaptivePresentationStyleForTraitCollection(iOS.UIKit.UITraitCollection):IsStripped}
//- (UIModalPresentationStyle) adaptivePresentationStyleForTraitCollection:(UITraitCollection *)traitCollection
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIModalPresentationStyle} __return = #{iOS.UIKit.UIPresentationController:Of(__this).adaptivePresentationStyleForTraitCollection(iOS.UIKit.UITraitCollection):Call((#{iOS.UIKit.UITraitCollection})uObjC::Lifetime::GetUnoObject(traitCollection, #{iOS.UIKit.UITraitCollection:TypeOf}))};
//    return ::UIModalPresentationStyle(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.containerViewWillLayoutSubviews():IsStripped}
//- (void) containerViewWillLayoutSubviews
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPresentationController:Of(__this).containerViewWillLayoutSubviews():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.containerViewDidLayoutSubviews():IsStripped}
//- (void) containerViewDidLayoutSubviews
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPresentationController:Of(__this).containerViewDidLayoutSubviews():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.presentedView():IsStripped}
//- (UIView *) presentedView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIPresentationController:Of(__this).presentedView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.frameOfPresentedViewInContainerView():IsStripped}
//- (CGRect) frameOfPresentedViewInContainerView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.UIKit.UIPresentationController:Of(__this).frameOfPresentedViewInContainerView():Call()};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.shouldPresentInFullscreen():IsStripped}
//- (BOOL) shouldPresentInFullscreen
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIPresentationController:Of(__this).shouldPresentInFullscreen():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.shouldRemovePresentersView():IsStripped}
//- (BOOL) shouldRemovePresentersView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIPresentationController:Of(__this).shouldRemovePresentersView():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.presentationTransitionWillBegin():IsStripped}
//- (void) presentationTransitionWillBegin
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPresentationController:Of(__this).presentationTransitionWillBegin():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.presentationTransitionDidEnd(bool):IsStripped}
//- (void) presentationTransitionDidEnd:(BOOL)completed
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPresentationController:Of(__this).presentationTransitionDidEnd(bool):Call((#{bool})completed)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.dismissalTransitionWillBegin():IsStripped}
//- (void) dismissalTransitionWillBegin
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPresentationController:Of(__this).dismissalTransitionWillBegin():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.dismissalTransitionDidEnd(bool):IsStripped}
//- (void) dismissalTransitionDidEnd:(BOOL)completed
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPresentationController:Of(__this).dismissalTransitionDidEnd(bool):Call((#{bool})completed)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.presentingViewController():IsStripped}
//- (UIViewController *) presentingViewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIViewController} __return = #{iOS.UIKit.UIPresentationController:Of(__this).presentingViewController():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.presentedViewController():IsStripped}
//- (UIViewController *) presentedViewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIViewController} __return = #{iOS.UIKit.UIPresentationController:Of(__this).presentedViewController():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.presentationStyle():IsStripped}
//- (UIModalPresentationStyle) presentationStyle
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIModalPresentationStyle} __return = #{iOS.UIKit.UIPresentationController:Of(__this).presentationStyle():Call()};
//    return ::UIModalPresentationStyle(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.containerView():IsStripped}
//- (UIView *) containerView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIPresentationController:Of(__this).containerView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.delegate_():IsStripped}
//- (id<UIAdaptivePresentationControllerDelegate>) delegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.IUIAdaptivePresentationControllerDelegate} __return = #{iOS.UIKit.UIPresentationController:Of(__this).delegate_():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, #{iOS.UIKit.IUIAdaptivePresentationControllerDelegate:TypeOf});
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.setDelegate(iOS.UIKit.IUIAdaptivePresentationControllerDelegate):IsStripped}
//- (void) setDelegate:(id<UIAdaptivePresentationControllerDelegate>)delegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPresentationController:Of(__this).setDelegate(iOS.UIKit.IUIAdaptivePresentationControllerDelegate):Call(uObjC::Lifetime::GetUnoObject(delegate, #{iOS.UIKit.Interop.IUIAdaptivePresentationControllerDelegate:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.overrideTraitCollection():IsStripped}
//- (UITraitCollection *) overrideTraitCollection
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITraitCollection} __return = #{iOS.UIKit.UIPresentationController:Of(__this).overrideTraitCollection():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.setOverrideTraitCollection(iOS.UIKit.UITraitCollection):IsStripped}
//- (void) setOverrideTraitCollection:(UITraitCollection *)overrideTraitCollection
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPresentationController:Of(__this).setOverrideTraitCollection(iOS.UIKit.UITraitCollection):Call((#{iOS.UIKit.UITraitCollection})uObjC::Lifetime::GetUnoObject(overrideTraitCollection, #{iOS.UIKit.UITraitCollection:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.traitCollectionDidChange(iOS.UIKit.UITraitCollection):IsStripped}
//- (void) traitCollectionDidChange:(UITraitCollection *)previousTraitCollection
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIPresentationController:Of(__this).traitCollectionDidChange(iOS.UIKit.UITraitCollection):Call((#{iOS.UIKit.UITraitCollection})uObjC::Lifetime::GetUnoObject(previousTraitCollection, #{iOS.UIKit.UITraitCollection:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.traitCollection():IsStripped}
//- (UITraitCollection *) traitCollection
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITraitCollection} __return = #{iOS.UIKit.UIPresentationController:Of(__this).traitCollection():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer):IsStripped}
- (void) preferredContentSizeDidChangeForChildContentContainer:(id<UIContentContainer>)container
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->preferredContentSizeDidChangeForChildContentContainer(uObjC::Lifetime::GetUnoObject(container, ::g::iOS::UIKit::Interop::IUIContentContainer_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer):IsStripped}
- (void) systemLayoutFittingSizeDidChangeForChildContentContainer:(id<UIContentContainer>)container
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->systemLayoutFittingSizeDidChangeForChildContentContainer(uObjC::Lifetime::GetUnoObject(container, ::g::iOS::UIKit::Interop::IUIContentContainer_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer,iOS.CoreGraphics.CGSize):IsStripped}
- (CGSize) sizeForChildContentContainer:(id<UIContentContainer>)container withParentContainerSize:(CGSize)parentSize
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGSize __return = __this->sizeForChildContentContainerWithParentContainerSize(uObjC::Lifetime::GetUnoObject(container, ::g::iOS::UIKit::Interop::IUIContentContainer_typeof()), uObjC::Struct::ToUno_CGSize(parentSize, ::g::iOS::CoreGraphics::CGSize()));
    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize,iOS.UIKit.IUIViewControllerTransitionCoordinator):IsStripped}
- (void) viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->viewWillTransitionToSizeWithTransitionCoordinator(uObjC::Struct::ToUno_CGSize(size, ::g::iOS::CoreGraphics::CGSize()), uObjC::Lifetime::GetUnoObject(coordinator, ::g::iOS::UIKit::Interop::IUIViewControllerTransitionCoordinator_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection,iOS.UIKit.IUIViewControllerTransitionCoordinator):IsStripped}
- (void) willTransitionToTraitCollection:(UITraitCollection *)newCollection withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->willTransitionToTraitCollectionWithTransitionCoordinator((::g::iOS::UIKit::UITraitCollection*)uObjC::Lifetime::GetUnoObject(newCollection, ::g::iOS::UIKit::UITraitCollection_typeof()), uObjC::Lifetime::GetUnoObject(coordinator, ::g::iOS::UIKit::Interop::IUIViewControllerTransitionCoordinator_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIPresentationController.preferredContentSize():IsStripped}
- (CGSize) preferredContentSize
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGSize __return = __this->preferredContentSize();
    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
