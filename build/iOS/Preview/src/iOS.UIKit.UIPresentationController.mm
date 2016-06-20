// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIPresentationController
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIPresentationController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIPresentationController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.IUIViewControllerTransitionCoordinator.h>
#include <iOS.UIKit.UIPresentationController.h>
#include <iOS.UIKit.UITraitCollection.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIPresentationController :79097
// {
static void UIPresentationController_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIPresentationController_type, interface0),
        ::g::iOS::UIKit::IUIContentContainer_typeof(), offsetof(UIPresentationController_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(6,
        new uFunction("preferredContentSize", NULL, (void*)UIPresentationController__preferredContentSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("preferredContentSizeDidChangeForChildContentContainer", NULL, (void*)UIPresentationController__preferredContentSizeDidChangeForChildContentContainer_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIContentContainer_typeof()),
        new uFunction("sizeForChildContentContainerWithParentContainerSize", NULL, (void*)UIPresentationController__sizeForChildContentContainerWithParentContainerSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 2, ::g::iOS::UIKit::IUIContentContainer_typeof(), ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("systemLayoutFittingSizeDidChangeForChildContentContainer", NULL, (void*)UIPresentationController__systemLayoutFittingSizeDidChangeForChildContentContainer_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIContentContainer_typeof()),
        new uFunction("viewWillTransitionToSizeWithTransitionCoordinator", NULL, (void*)UIPresentationController__viewWillTransitionToSizeWithTransitionCoordinator_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::CoreGraphics::CGSize_typeof(), ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()),
        new uFunction("willTransitionToTraitCollectionWithTransitionCoordinator", NULL, (void*)UIPresentationController__willTransitionToTraitCollectionWithTransitionCoordinator_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UITraitCollection_typeof(), ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

UIPresentationController_type* UIPresentationController_typeof()
{
    static uSStrong<UIPresentationController_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIPresentationController);
    options.TypeSize = sizeof(UIPresentationController_type);
    type = (UIPresentationController_type*)uClassType::New("iOS.UIKit.UIPresentationController", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = UIPresentationController_build;
    type->interface1.fp_preferredContentSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))UIPresentationController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_systemLayoutFittingSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))UIPresentationController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_sizeForChildContentContainerWithParentContainerSize = (void(*)(uObject*, uObject*, ::g::iOS::CoreGraphics::CGSize*, ::g::iOS::CoreGraphics::CGSize*))UIPresentationController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn;
    type->interface1.fp_viewWillTransitionToSizeWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*, uObject*))UIPresentationController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn;
    type->interface1.fp_willTransitionToTraitCollectionWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::UIKit::UITraitCollection*, uObject*))UIPresentationController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn;
    type->interface1.fp_preferredContentSize = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*))UIPresentationController__preferredContentSize_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public void iOS.UIKit.IUIContentContainer.preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) :79238
void UIPresentationController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn(UIPresentationController* __this, uObject* container)
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "iOS.UIKit.IUIContentContainer.preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer)");
    __this->preferredContentSizeDidChangeForChildContentContainer(container);
}

// public iOS.CoreGraphics.CGSize iOS.UIKit.IUIContentContainer.sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer container, iOS.CoreGraphics.CGSize parentSize) :79242
void UIPresentationController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn(UIPresentationController* __this, uObject* container, ::g::iOS::CoreGraphics::CGSize* parentSize, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "iOS.UIKit.IUIContentContainer.sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer,iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize parentSize_ = *parentSize;
    return *__retval = __this->sizeForChildContentContainerWithParentContainerSize(container, parentSize_), void();
}

// public void iOS.UIKit.IUIContentContainer.systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) :79240
void UIPresentationController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn(UIPresentationController* __this, uObject* container)
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "iOS.UIKit.IUIContentContainer.systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer)");
    __this->systemLayoutFittingSizeDidChangeForChildContentContainer(container);
}

// public void iOS.UIKit.IUIContentContainer.viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize size, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) :79244
void UIPresentationController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn(UIPresentationController* __this, ::g::iOS::CoreGraphics::CGSize* size, uObject* coordinator)
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "iOS.UIKit.IUIContentContainer.viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize,iOS.UIKit.IUIViewControllerTransitionCoordinator)");
    ::g::iOS::CoreGraphics::CGSize size_ = *size;
    __this->viewWillTransitionToSizeWithTransitionCoordinator(size_, coordinator);
}

// public void iOS.UIKit.IUIContentContainer.willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection newCollection, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) :79246
void UIPresentationController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn(UIPresentationController* __this, ::g::iOS::UIKit::UITraitCollection* newCollection, uObject* coordinator)
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "iOS.UIKit.IUIContentContainer.willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection,iOS.UIKit.IUIViewControllerTransitionCoordinator)");
    __this->willTransitionToTraitCollectionWithTransitionCoordinator(newCollection, coordinator);
}

// public extern iOS.CoreGraphics.CGSize preferredContentSize() :79234
void UIPresentationController__preferredContentSize_fn(UIPresentationController* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->preferredContentSize();
}

// public extern void preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) :79219
void UIPresentationController__preferredContentSizeDidChangeForChildContentContainer_fn(UIPresentationController* __this, uObject* container_)
{
    __this->preferredContentSizeDidChangeForChildContentContainer(container_);
}

// public extern iOS.CoreGraphics.CGSize sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer container, iOS.CoreGraphics.CGSize parentSize) :79225
void UIPresentationController__sizeForChildContentContainerWithParentContainerSize_fn(UIPresentationController* __this, uObject* container_, ::g::iOS::CoreGraphics::CGSize* parentSize_, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->sizeForChildContentContainerWithParentContainerSize(container_, *parentSize_);
}

// public extern void systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) :79222
void UIPresentationController__systemLayoutFittingSizeDidChangeForChildContentContainer_fn(UIPresentationController* __this, uObject* container_)
{
    __this->systemLayoutFittingSizeDidChangeForChildContentContainer(container_);
}

// public extern void viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize size, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) :79228
void UIPresentationController__viewWillTransitionToSizeWithTransitionCoordinator_fn(UIPresentationController* __this, ::g::iOS::CoreGraphics::CGSize* size_, uObject* coordinator_)
{
    __this->viewWillTransitionToSizeWithTransitionCoordinator(*size_, coordinator_);
}

// public extern void willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection newCollection, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) :79231
void UIPresentationController__willTransitionToTraitCollectionWithTransitionCoordinator_fn(UIPresentationController* __this, ::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_)
{
    __this->willTransitionToTraitCollectionWithTransitionCoordinator(newCollection_, coordinator_);
}

// public extern iOS.CoreGraphics.CGSize preferredContentSize() [instance] :79234
::g::iOS::CoreGraphics::CGSize UIPresentationController::preferredContentSize()
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "preferredContentSize()");
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(preferredContentSize));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public extern void preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) [instance] :79219
void UIPresentationController::preferredContentSizeDidChangeForChildContentContainer(uObject* container_)
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(preferredContentSizeDidChangeForChildContentContainer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_, ::g::iOS::UIKit::IUIContentContainer_typeof()));
}

// public extern iOS.CoreGraphics.CGSize sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer container, iOS.CoreGraphics.CGSize parentSize) [instance] :79225
::g::iOS::CoreGraphics::CGSize UIPresentationController::sizeForChildContentContainerWithParentContainerSize(uObject* container_, ::g::iOS::CoreGraphics::CGSize parentSize_)
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer,iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize parentSize__ = parentSize_;
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(sizeForChildContentContainer:withParentContainerSize:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_, ::g::iOS::UIKit::IUIContentContainer_typeof()),
        uObjC::Struct::FromUno_CGSize(parentSize__, ::CGSize()));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public extern void systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) [instance] :79222
void UIPresentationController::systemLayoutFittingSizeDidChangeForChildContentContainer(uObject* container_)
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(systemLayoutFittingSizeDidChangeForChildContentContainer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_, ::g::iOS::UIKit::IUIContentContainer_typeof()));
}

// public extern void viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize size, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) [instance] :79228
void UIPresentationController::viewWillTransitionToSizeWithTransitionCoordinator(::g::iOS::CoreGraphics::CGSize size_, uObject* coordinator_)
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize,iOS.UIKit.IUIViewControllerTransitionCoordinator)");
    ::g::iOS::CoreGraphics::CGSize size__ = size_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewWillTransitionToSize:withTransitionCoordinator:),
        uObjC::Struct::FromUno_CGSize(size__, ::CGSize()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coordinator_, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
}

// public extern void willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection newCollection, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) [instance] :79231
void UIPresentationController::willTransitionToTraitCollectionWithTransitionCoordinator(::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_)
{
    uStackFrame __("iOS.UIKit.UIPresentationController", "willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection,iOS.UIKit.IUIViewControllerTransitionCoordinator)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willTransitionToTraitCollection:withTransitionCoordinator:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)newCollection_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coordinator_, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
}
// }

}}} // ::g::iOS::UIKit
