// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGSize;}}}
namespace g{namespace iOS{namespace UIKit{struct UITraitCollection;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIContentContainer :4347
// {
uInterfaceType* IUIContentContainer_typeof();

struct IUIContentContainer
{
    void(*fp_preferredContentSize)(uObject*, ::g::iOS::CoreGraphics::CGSize*);
    void(*fp_preferredContentSizeDidChangeForChildContentContainer)(uObject*, uObject*);
    void(*fp_sizeForChildContentContainerWithParentContainerSize)(uObject*, uObject*, ::g::iOS::CoreGraphics::CGSize*, ::g::iOS::CoreGraphics::CGSize*);
    void(*fp_systemLayoutFittingSizeDidChangeForChildContentContainer)(uObject*, uObject*);
    void(*fp_viewWillTransitionToSizeWithTransitionCoordinator)(uObject*, ::g::iOS::CoreGraphics::CGSize*, uObject*);
    void(*fp_willTransitionToTraitCollectionWithTransitionCoordinator)(uObject*, ::g::iOS::UIKit::UITraitCollection*, uObject*);
    static ::g::iOS::CoreGraphics::CGSize preferredContentSize(const uInterface& __this);
    static void preferredContentSizeDidChangeForChildContentContainer(const uInterface& __this, uObject* container) { __this.VTable<IUIContentContainer>()->fp_preferredContentSizeDidChangeForChildContentContainer(__this, container); }
    static ::g::iOS::CoreGraphics::CGSize sizeForChildContentContainerWithParentContainerSize(const uInterface& __this, uObject* container, ::g::iOS::CoreGraphics::CGSize parentSize);
    static void systemLayoutFittingSizeDidChangeForChildContentContainer(const uInterface& __this, uObject* container) { __this.VTable<IUIContentContainer>()->fp_systemLayoutFittingSizeDidChangeForChildContentContainer(__this, container); }
    static void viewWillTransitionToSizeWithTransitionCoordinator(const uInterface& __this, ::g::iOS::CoreGraphics::CGSize size, uObject* coordinator);
    static void willTransitionToTraitCollectionWithTransitionCoordinator(const uInterface& __this, ::g::iOS::UIKit::UITraitCollection* newCollection, uObject* coordinator) { __this.VTable<IUIContentContainer>()->fp_willTransitionToTraitCollectionWithTransitionCoordinator(__this, newCollection, coordinator); }
};

}}} // ::g::iOS::UIKit

#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

inline ::g::iOS::CoreGraphics::CGSize IUIContentContainer::preferredContentSize(const uInterface& __this) { ::g::iOS::CoreGraphics::CGSize __retval; return __this.VTable<IUIContentContainer>()->fp_preferredContentSize(__this, &__retval), __retval; }
inline ::g::iOS::CoreGraphics::CGSize IUIContentContainer::sizeForChildContentContainerWithParentContainerSize(const uInterface& __this, uObject* container, ::g::iOS::CoreGraphics::CGSize parentSize) { ::g::iOS::CoreGraphics::CGSize __retval; return __this.VTable<IUIContentContainer>()->fp_sizeForChildContentContainerWithParentContainerSize(__this, container, &parentSize, &__retval), __retval; }
inline void IUIContentContainer::viewWillTransitionToSizeWithTransitionCoordinator(const uInterface& __this, ::g::iOS::CoreGraphics::CGSize size, uObject* coordinator) { __this.VTable<IUIContentContainer>()->fp_viewWillTransitionToSizeWithTransitionCoordinator(__this, &size, coordinator); }
// }

}}} // ::g::iOS::UIKit
