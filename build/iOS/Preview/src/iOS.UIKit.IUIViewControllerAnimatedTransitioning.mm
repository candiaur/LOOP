// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIViewControllerAnimatedTransitioning
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIViewControllerAnimatedTransitioning_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.IUIViewControllerAnimatedTransitioning.h>
#include <iOS.UIKit.IUIViewControllerContextTransitioning.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUIViewControllerAnimatedTransitioning :6313
// {
uInterfaceType* IUIViewControllerAnimatedTransitioning_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("iOS.UIKit.IUIViewControllerAnimatedTransitioning", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("animateTransition", NULL, NULL, offsetof(IUIViewControllerAnimatedTransitioning, fp_animateTransition), false, uVoid_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()),
        new uFunction("animationEnded", NULL, NULL, offsetof(IUIViewControllerAnimatedTransitioning, fp_animationEnded), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("transitionDuration", NULL, NULL, offsetof(IUIViewControllerAnimatedTransitioning, fp_transitionDuration), false, ::g::Uno::Double_typeof(), 1, ::g::iOS::UIKit::IUIViewControllerContextTransitioning_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::UIKit
