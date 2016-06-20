// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UINavigationController
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UINavigationController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UINavigationController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UINavigationController.h>
#include <ObjC.ID.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UINavigationController :77628
// {
static void UINavigationController_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIViewController_type, interface0),
        ::g::iOS::UIKit::IUIContentContainer_typeof(), offsetof(::g::iOS::UIKit::UIViewController_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::UIKit::UIViewController_type* UINavigationController_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIViewController_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UINavigationController);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIViewController_type);
    type = (::g::iOS::UIKit::UIViewController_type*)uClassType::New("iOS.UIKit.UINavigationController", options);
    type->SetBase(::g::iOS::UIKit::UIViewController_typeof());
    type->fp_build_ = UINavigationController_build;
    type->fp_showViewControllerSender = (void(*)(::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::id*))UINavigationController__showViewControllerSender_fn;
    type->interface1.fp_preferredContentSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_systemLayoutFittingSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_sizeForChildContentContainerWithParentContainerSize = (void(*)(uObject*, uObject*, ::g::iOS::CoreGraphics::CGSize*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn;
    type->interface1.fp_viewWillTransitionToSizeWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn;
    type->interface1.fp_willTransitionToTraitCollectionWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::UIKit::UITraitCollection*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn;
    type->interface1.fp_preferredContentSize = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIViewController__preferredContentSize_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public override sealed extern void showViewControllerSender(iOS.UIKit.UIViewController vc, ObjC.ID sender) :77749
void UINavigationController__showViewControllerSender_fn(UINavigationController* __this, ::g::iOS::UIKit::UIViewController* vc_, ::id* sender_)
{
    uStackFrame __("iOS.UIKit.UINavigationController", "showViewControllerSender(iOS.UIKit.UIViewController,ObjC.ID)");
    ::id sender__ = *sender_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(showViewController:sender:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)vc_),
        (::id)sender__);
}
// }

}}} // ::g::iOS::UIKit
