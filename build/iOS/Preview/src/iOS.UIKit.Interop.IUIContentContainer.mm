// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIContentContainer
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIContentContainer_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUIContentContainer.h>
#include <iOS.UIKit.IUIViewControllerTransitionCoordinator.h>
#include <iOS.UIKit.UITraitCollection.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIContentContainer :6049
// {
static void IUIContentContainer_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUIContentContainer_type, interface0),
        ::g::iOS::UIKit::IUIContentContainer_typeof(), offsetof(IUIContentContainer_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(6,
        new uFunction("preferredContentSize", NULL, (void*)IUIContentContainer__preferredContentSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("preferredContentSizeDidChangeForChildContentContainer", NULL, (void*)IUIContentContainer__preferredContentSizeDidChangeForChildContentContainer_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIContentContainer_typeof()),
        new uFunction("sizeForChildContentContainerWithParentContainerSize", NULL, (void*)IUIContentContainer__sizeForChildContentContainerWithParentContainerSize_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 2, ::g::iOS::UIKit::IUIContentContainer_typeof(), ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("systemLayoutFittingSizeDidChangeForChildContentContainer", NULL, (void*)IUIContentContainer__systemLayoutFittingSizeDidChangeForChildContentContainer_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIContentContainer_typeof()),
        new uFunction("viewWillTransitionToSizeWithTransitionCoordinator", NULL, (void*)IUIContentContainer__viewWillTransitionToSizeWithTransitionCoordinator_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::CoreGraphics::CGSize_typeof(), ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()),
        new uFunction("willTransitionToTraitCollectionWithTransitionCoordinator", NULL, (void*)IUIContentContainer__willTransitionToTraitCollectionWithTransitionCoordinator_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UITraitCollection_typeof(), ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

IUIContentContainer_type* IUIContentContainer_typeof()
{
    static uSStrong<IUIContentContainer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUIContentContainer);
    options.TypeSize = sizeof(IUIContentContainer_type);
    type = (IUIContentContainer_type*)uClassType::New("iOS.UIKit.Interop.IUIContentContainer", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IUIContentContainer_build;
    type->interface1.fp_preferredContentSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))IUIContentContainer__preferredContentSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_systemLayoutFittingSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))IUIContentContainer__systemLayoutFittingSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_sizeForChildContentContainerWithParentContainerSize = (void(*)(uObject*, uObject*, ::g::iOS::CoreGraphics::CGSize*, ::g::iOS::CoreGraphics::CGSize*))IUIContentContainer__sizeForChildContentContainerWithParentContainerSize_fn;
    type->interface1.fp_viewWillTransitionToSizeWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*, uObject*))IUIContentContainer__viewWillTransitionToSizeWithTransitionCoordinator_fn;
    type->interface1.fp_willTransitionToTraitCollectionWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::UIKit::UITraitCollection*, uObject*))IUIContentContainer__willTransitionToTraitCollectionWithTransitionCoordinator_fn;
    type->interface1.fp_preferredContentSize = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*))IUIContentContainer__preferredContentSize_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.CoreGraphics.CGSize preferredContentSize() :6078
void IUIContentContainer__preferredContentSize_fn(IUIContentContainer* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->preferredContentSize();
}

// public extern void preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) :6063
void IUIContentContainer__preferredContentSizeDidChangeForChildContentContainer_fn(IUIContentContainer* __this, uObject* container_)
{
    __this->preferredContentSizeDidChangeForChildContentContainer(container_);
}

// public extern iOS.CoreGraphics.CGSize sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer container, iOS.CoreGraphics.CGSize parentSize) :6069
void IUIContentContainer__sizeForChildContentContainerWithParentContainerSize_fn(IUIContentContainer* __this, uObject* container_, ::g::iOS::CoreGraphics::CGSize* parentSize_, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->sizeForChildContentContainerWithParentContainerSize(container_, *parentSize_);
}

// public extern void systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) :6066
void IUIContentContainer__systemLayoutFittingSizeDidChangeForChildContentContainer_fn(IUIContentContainer* __this, uObject* container_)
{
    __this->systemLayoutFittingSizeDidChangeForChildContentContainer(container_);
}

// public extern void viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize size, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) :6072
void IUIContentContainer__viewWillTransitionToSizeWithTransitionCoordinator_fn(IUIContentContainer* __this, ::g::iOS::CoreGraphics::CGSize* size_, uObject* coordinator_)
{
    __this->viewWillTransitionToSizeWithTransitionCoordinator(*size_, coordinator_);
}

// public extern void willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection newCollection, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) :6075
void IUIContentContainer__willTransitionToTraitCollectionWithTransitionCoordinator_fn(IUIContentContainer* __this, ::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_)
{
    __this->willTransitionToTraitCollectionWithTransitionCoordinator(newCollection_, coordinator_);
}

// public extern iOS.CoreGraphics.CGSize preferredContentSize() [instance] :6078
::g::iOS::CoreGraphics::CGSize IUIContentContainer::preferredContentSize()
{
    uStackFrame __("iOS.UIKit.Interop.IUIContentContainer", "preferredContentSize()");
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(preferredContentSize));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public extern void preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) [instance] :6063
void IUIContentContainer::preferredContentSizeDidChangeForChildContentContainer(uObject* container_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIContentContainer", "preferredContentSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(preferredContentSizeDidChangeForChildContentContainer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_, ::g::iOS::UIKit::IUIContentContainer_typeof()));
}

// public extern iOS.CoreGraphics.CGSize sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer container, iOS.CoreGraphics.CGSize parentSize) [instance] :6069
::g::iOS::CoreGraphics::CGSize IUIContentContainer::sizeForChildContentContainerWithParentContainerSize(uObject* container_, ::g::iOS::CoreGraphics::CGSize parentSize_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIContentContainer", "sizeForChildContentContainerWithParentContainerSize(iOS.UIKit.IUIContentContainer,iOS.CoreGraphics.CGSize)");
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(sizeForChildContentContainer:withParentContainerSize:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_, ::g::iOS::UIKit::IUIContentContainer_typeof()),
        uObjC::Struct::FromUno_CGSize(parentSize_, ::CGSize()));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public extern void systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer container) [instance] :6066
void IUIContentContainer::systemLayoutFittingSizeDidChangeForChildContentContainer(uObject* container_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIContentContainer", "systemLayoutFittingSizeDidChangeForChildContentContainer(iOS.UIKit.IUIContentContainer)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(systemLayoutFittingSizeDidChangeForChildContentContainer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_, ::g::iOS::UIKit::IUIContentContainer_typeof()));
}

// public extern void viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize size, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) [instance] :6072
void IUIContentContainer::viewWillTransitionToSizeWithTransitionCoordinator(::g::iOS::CoreGraphics::CGSize size_, uObject* coordinator_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIContentContainer", "viewWillTransitionToSizeWithTransitionCoordinator(iOS.CoreGraphics.CGSize,iOS.UIKit.IUIViewControllerTransitionCoordinator)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(viewWillTransitionToSize:withTransitionCoordinator:),
        uObjC::Struct::FromUno_CGSize(size_, ::CGSize()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coordinator_, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
}

// public extern void willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection newCollection, iOS.UIKit.IUIViewControllerTransitionCoordinator coordinator) [instance] :6075
void IUIContentContainer::willTransitionToTraitCollectionWithTransitionCoordinator(::g::iOS::UIKit::UITraitCollection* newCollection_, uObject* coordinator_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIContentContainer", "willTransitionToTraitCollectionWithTransitionCoordinator(iOS.UIKit.UITraitCollection,iOS.UIKit.IUIViewControllerTransitionCoordinator)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willTransitionToTraitCollection:withTransitionCoordinator:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)newCollection_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coordinator_, ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));
}
// }

}}}} // ::g::iOS::UIKit::Interop
