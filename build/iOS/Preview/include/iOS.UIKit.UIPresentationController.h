// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <iOS.UIKit.IUIContentContainer.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGSize;}}}
namespace g{namespace iOS{namespace UIKit{struct UIPresentationController;}}}
namespace g{namespace iOS{namespace UIKit{struct UITraitCollection;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIPresentationController :79097
// {
struct UIPresentationController_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::UIKit::IUIContentContainer interface1;
};

UIPresentationController_type* UIPresentationController_typeof();
void UIPresentationController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn(UIPresentationController* __this, uObject* container);
void UIPresentationController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn(UIPresentationController* __this, uObject* container, ::g::iOS::CoreGraphics::CGSize* parentSize, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIPresentationController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn(UIPresentationController* __this, uObject* container);
void UIPresentationController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn(UIPresentationController* __this, ::g::iOS::CoreGraphics::CGSize* size, uObject* coordinator);
void UIPresentationController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn(UIPresentationController* __this, ::g::iOS::UIKit::UITraitCollection* newCollection, uObject* coordinator);
void UIPresentationController__preferredContentSize_fn(UIPresentationController* __this, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIPresentationController__preferredContentSizeDidChangeForChildContentContainer_fn(UIPresentationController* __this, uObject* container_);
void UIPresentationController__sizeForChildContentContainerWithParentContainerSize_fn(UIPresentationController* __this, uObject* container_, ::g::iOS::CoreGraphics::CGSize* parentSize_, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIPresentationController__systemLayoutFittingSizeDidChangeForChildContentContainer_fn(UIPresentationController* __this, uObject* container_);
void UIPresentationController__viewWillTransitionToSizeWithTransitionCoordinator_fn(UIPresentationController* __this, ::g::iOS::CoreGraphics::CGSize* size_, uObject* coordinator_);
void UIPresentationController__willTransitionToTraitCollectionWithTransitionCoordinator_fn(UIPresentationController* __this, ::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_);

struct UIPresentationController : ::g::iOS::Foundation::NSObject
{
    ::g::iOS::CoreGraphics::CGSize preferredContentSize();
    void preferredContentSizeDidChangeForChildContentContainer(uObject* container_);
    ::g::iOS::CoreGraphics::CGSize sizeForChildContentContainerWithParentContainerSize(uObject* container_, ::g::iOS::CoreGraphics::CGSize parentSize_);
    void systemLayoutFittingSizeDidChangeForChildContentContainer(uObject* container_);
    void viewWillTransitionToSizeWithTransitionCoordinator(::g::iOS::CoreGraphics::CGSize size_, uObject* coordinator_);
    void willTransitionToTraitCollectionWithTransitionCoordinator(::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_);
};
// }

}}} // ::g::iOS::UIKit
