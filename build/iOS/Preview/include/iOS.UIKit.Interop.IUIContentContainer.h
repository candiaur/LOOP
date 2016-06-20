// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIContentContainer.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGSize;}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIContentContainer;}}}}
namespace g{namespace iOS{namespace UIKit{struct UITraitCollection;}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIContentContainer :6049
// {
struct IUIContentContainer_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUIContentContainer interface1;
};

IUIContentContainer_type* IUIContentContainer_typeof();
void IUIContentContainer__preferredContentSize_fn(IUIContentContainer* __this, ::g::iOS::CoreGraphics::CGSize* __retval);
void IUIContentContainer__preferredContentSizeDidChangeForChildContentContainer_fn(IUIContentContainer* __this, uObject* container_);
void IUIContentContainer__sizeForChildContentContainerWithParentContainerSize_fn(IUIContentContainer* __this, uObject* container_, ::g::iOS::CoreGraphics::CGSize* parentSize_, ::g::iOS::CoreGraphics::CGSize* __retval);
void IUIContentContainer__systemLayoutFittingSizeDidChangeForChildContentContainer_fn(IUIContentContainer* __this, uObject* container_);
void IUIContentContainer__viewWillTransitionToSizeWithTransitionCoordinator_fn(IUIContentContainer* __this, ::g::iOS::CoreGraphics::CGSize* size_, uObject* coordinator_);
void IUIContentContainer__willTransitionToTraitCollectionWithTransitionCoordinator_fn(IUIContentContainer* __this, ::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_);

struct IUIContentContainer : ::g::ObjC::Bindings::Object
{
    ::g::iOS::CoreGraphics::CGSize preferredContentSize();
    void preferredContentSizeDidChangeForChildContentContainer(uObject* container_);
    ::g::iOS::CoreGraphics::CGSize sizeForChildContentContainerWithParentContainerSize(uObject* container_, ::g::iOS::CoreGraphics::CGSize parentSize_);
    void systemLayoutFittingSizeDidChangeForChildContentContainer(uObject* container_);
    void viewWillTransitionToSizeWithTransitionCoordinator(::g::iOS::CoreGraphics::CGSize size_, uObject* coordinator_);
    void willTransitionToTraitCollectionWithTransitionCoordinator(::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_);
};
// }

}}}} // ::g::iOS::UIKit::Interop
