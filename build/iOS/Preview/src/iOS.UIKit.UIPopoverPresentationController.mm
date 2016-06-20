// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIPopoverPresentationController
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIPopoverPresentationController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIPopoverPresentationController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIPopoverPresentationController.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIPopoverPresentationController :78971
// {
static void UIPopoverPresentationController_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIPresentationController_type, interface0),
        ::g::iOS::UIKit::IUIContentContainer_typeof(), offsetof(::g::iOS::UIKit::UIPresentationController_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::UIKit::UIPresentationController_type* UIPopoverPresentationController_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIPresentationController_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIPopoverPresentationController);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIPresentationController_type);
    type = (::g::iOS::UIKit::UIPresentationController_type*)uClassType::New("iOS.UIKit.UIPopoverPresentationController", options);
    type->SetBase(::g::iOS::UIKit::UIPresentationController_typeof());
    type->fp_build_ = UIPopoverPresentationController_build;
    type->interface1.fp_preferredContentSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIPresentationController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_systemLayoutFittingSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIPresentationController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_sizeForChildContentContainerWithParentContainerSize = (void(*)(uObject*, uObject*, ::g::iOS::CoreGraphics::CGSize*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIPresentationController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn;
    type->interface1.fp_viewWillTransitionToSizeWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*, uObject*))::g::iOS::UIKit::UIPresentationController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn;
    type->interface1.fp_willTransitionToTraitCollectionWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::UIKit::UITraitCollection*, uObject*))::g::iOS::UIKit::UIPresentationController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn;
    type->interface1.fp_preferredContentSize = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIPresentationController__preferredContentSize_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}
// }

}}} // ::g::iOS::UIKit
