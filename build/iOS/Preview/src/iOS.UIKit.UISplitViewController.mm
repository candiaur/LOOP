// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UISplitViewController
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UISplitViewController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UISplitViewController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UISplitViewController.h>
#include <ObjC.ID.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UISplitViewController :82168
// {
static void UISplitViewController_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIViewController_type, interface0),
        ::g::iOS::UIKit::IUIContentContainer_typeof(), offsetof(::g::iOS::UIKit::UIViewController_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::UIKit::UIViewController_type* UISplitViewController_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIViewController_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UISplitViewController);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIViewController_type);
    type = (::g::iOS::UIKit::UIViewController_type*)uClassType::New("iOS.UIKit.UISplitViewController", options);
    type->SetBase(::g::iOS::UIKit::UIViewController_typeof());
    type->fp_build_ = UISplitViewController_build;
    type->fp_showDetailViewControllerSender = (void(*)(::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::id*))UISplitViewController__showDetailViewControllerSender_fn;
    type->fp_showViewControllerSender = (void(*)(::g::iOS::UIKit::UIViewController*, ::g::iOS::UIKit::UIViewController*, ::id*))UISplitViewController__showViewControllerSender_fn;
    type->interface1.fp_preferredContentSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_systemLayoutFittingSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_sizeForChildContentContainerWithParentContainerSize = (void(*)(uObject*, uObject*, ::g::iOS::CoreGraphics::CGSize*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn;
    type->interface1.fp_viewWillTransitionToSizeWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn;
    type->interface1.fp_willTransitionToTraitCollectionWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::UIKit::UITraitCollection*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn;
    type->interface1.fp_preferredContentSize = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIViewController__preferredContentSize_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public override sealed extern void showDetailViewControllerSender(iOS.UIKit.UIViewController vc, ObjC.ID sender) :82242
void UISplitViewController__showDetailViewControllerSender_fn(UISplitViewController* __this, ::g::iOS::UIKit::UIViewController* vc_, ::id* sender_)
{
    uStackFrame __("iOS.UIKit.UISplitViewController", "showDetailViewControllerSender(iOS.UIKit.UIViewController,ObjC.ID)");
    ::id sender__ = *sender_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(showDetailViewController:sender:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)vc_),
        (::id)sender__);
}

// public override sealed extern void showViewControllerSender(iOS.UIKit.UIViewController vc, ObjC.ID sender) :82239
void UISplitViewController__showViewControllerSender_fn(UISplitViewController* __this, ::g::iOS::UIKit::UIViewController* vc_, ::id* sender_)
{
    uStackFrame __("iOS.UIKit.UISplitViewController", "showViewControllerSender(iOS.UIKit.UIViewController,ObjC.ID)");
    ::id sender__ = *sender_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(showViewController:sender:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)vc_),
        (::id)sender__);
}
// }

}}} // ::g::iOS::UIKit
