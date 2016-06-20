#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIContentContainer
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIContentContainer_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.IUIContentContainer.preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer):IsStripped}
- (void) preferredContentSizeDidChangeForChildContentContainer:(id<UIContentContainer>)container
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIContentContainer::preferredContentSizeDidChangeForChildContentContainer(uInterface(__this, ::g::iOS::UIKit::IUIContentContainer_typeof()), uObjC::Lifetime::GetUnoObject(container, ::g::iOS::UIKit::Interop::IUIContentContainer_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIContentContainer.systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer):IsStripped}
- (void) systemLayoutFittingSizeDidChangeForChildContentContainer:(id<UIContentContainer>)container
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIContentContainer::systemLayoutFittingSizeDidChangeForChildContentContainer(uInterface(__this, ::g::iOS::UIKit::IUIContentContainer_typeof()), uObjC::Lifetime::GetUnoObject(container, ::g::iOS::UIKit::Interop::IUIContentContainer_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIContentContainer.sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer,iOS.CoreGraphics.CGSize):IsStripped}
- (CGSize) sizeForChildContentContainer:(id<UIContentContainer>)container withParentContainerSize:(CGSize)parentSize
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGSize __return = ::g::iOS::UIKit::IUIContentContainer::sizeForChildContentContainerWithParentContainerSize(uInterface(__this, ::g::iOS::UIKit::IUIContentContainer_typeof()), uObjC::Lifetime::GetUnoObject(container, ::g::iOS::UIKit::Interop::IUIContentContainer_typeof()), uObjC::Struct::ToUno_CGSize(parentSize, ::g::iOS::CoreGraphics::CGSize()));
    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIContentContainer.viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize,iOS.UIKit.IUIViewControllerTransitionCoordinator):IsStripped}
- (void) viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIContentContainer::viewWillTransitionToSizeWithTransitionCoordinator(uInterface(__this, ::g::iOS::UIKit::IUIContentContainer_typeof()), uObjC::Struct::ToUno_CGSize(size, ::g::iOS::CoreGraphics::CGSize()), uObjC::Lifetime::GetUnoObject(coordinator, ::g::iOS::UIKit::Interop::IUIViewControllerTransitionCoordinator_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIContentContainer.willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection,iOS.UIKit.IUIViewControllerTransitionCoordinator):IsStripped}
- (void) willTransitionToTraitCollection:(UITraitCollection *)newCollection withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::IUIContentContainer::willTransitionToTraitCollectionWithTransitionCoordinator(uInterface(__this, ::g::iOS::UIKit::IUIContentContainer_typeof()), (::g::iOS::UIKit::UITraitCollection*)uObjC::Lifetime::GetUnoObject(newCollection, ::g::iOS::UIKit::UITraitCollection_typeof()), uObjC::Lifetime::GetUnoObject(coordinator, ::g::iOS::UIKit::Interop::IUIViewControllerTransitionCoordinator_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.IUIContentContainer.preferredContentSize():IsStripped}
- (CGSize) preferredContentSize
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGSize __return = ::g::iOS::UIKit::IUIContentContainer::preferredContentSize(uInterface(__this, ::g::iOS::UIKit::IUIContentContainer_typeof()));
    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
