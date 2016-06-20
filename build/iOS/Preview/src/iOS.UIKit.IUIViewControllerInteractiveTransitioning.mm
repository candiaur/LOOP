// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerInteractiveTransitioning
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerInteractiveTransitioning_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.IUIViewControllerContextTransitioning.h>
#include <iOS.UIKit.IUIViewControllerInteractiveTransitioning.h>
#include <iOS.UIKit.UIViewAnimationCurve.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIViewControllerInteractiveTransitioning :6374
// {
uInterfaceType* IUIViewControllerInteractiveTransitioning_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("iOS.UIKit.IUIViewControllerInteractiveTransitioning", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("completionCurve", NULL, NULL, offsetof(IUIViewControllerInteractiveTransitioning, fp_completionCurve), false, ::g::iOS::UIKit::UIViewAnimationCurve_typeof(), 0),
        new uFunction("completionSpeed", NULL, NULL, offsetof(IUIViewControllerInteractiveTransitioning, fp_completionSpeed), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("startInteractiveTransition", NULL, NULL, offsetof(IUIViewControllerInteractiveTransitioning, fp_startInteractiveTransition), false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::UIKit
