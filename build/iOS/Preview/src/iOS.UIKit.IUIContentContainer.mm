// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIContentContainer
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIContentContainer_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.IUIContentContainer.h>
#include <iOS.UIKit.IUIViewControllerTransitionCoordinator.h>
#include <iOS.UIKit.UITraitCollection.h>

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIContentContainer :4347
// {
uInterfaceType* IUIContentContainer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("iOS.UIKit.IUIContentContainer", 0, 0);
    type->Reflection.SetFunctions(6,
        new uFunction("preferredContentSize", NULL, NULL, offsetof(IUIContentContainer, fp_preferredContentSize), false, ::g::iOS::CoreGraphics::CGSize_typeof(), 0),
        new uFunction("preferredContentSizeDidChangeForChildContentContainer", NULL, NULL, offsetof(IUIContentContainer, fp_preferredContentSizeDidChangeForChildContentContainer), false, uVoid_typeof(), 1, IUIContentContainer_typeof()),
        new uFunction("sizeForChildContentContainerWithParentContainerSize", NULL, NULL, offsetof(IUIContentContainer, fp_sizeForChildContentContainerWithParentContainerSize), false, ::g::iOS::CoreGraphics::CGSize_typeof(), 2, IUIContentContainer_typeof(), ::g::iOS::CoreGraphics::CGSize_typeof()),
        new uFunction("systemLayoutFittingSizeDidChangeForChildContentContainer", NULL, NULL, offsetof(IUIContentContainer, fp_systemLayoutFittingSizeDidChangeForChildContentContainer), false, uVoid_typeof(), 1, IUIContentContainer_typeof()),
        new uFunction("viewWillTransitionToSizeWithTransitionCoordinator", NULL, NULL, offsetof(IUIContentContainer, fp_viewWillTransitionToSizeWithTransitionCoordinator), false, uVoid_typeof(), 2, ::g::iOS::CoreGraphics::CGSize_typeof(), ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()),
        new uFunction("willTransitionToTraitCollectionWithTransitionCoordinator", NULL, NULL, offsetof(IUIContentContainer, fp_willTransitionToTraitCollectionWithTransitionCoordinator), false, uVoid_typeof(), 2, ::g::iOS::UIKit::UITraitCollection_typeof(), ::g::iOS::UIKit::IUIViewControllerTransitionCoordinator_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::UIKit
