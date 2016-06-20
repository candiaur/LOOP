// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UILayoutSupport
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUILayoutSupport_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.IUILayoutSupport.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{

// public abstract extern interface IUILayoutSupport :4735
// {
uInterfaceType* IUILayoutSupport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("iOS.UIKit.IUILayoutSupport", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("length", NULL, NULL, offsetof(IUILayoutSupport, fp_length), false, ::g::Uno::Double_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::UIKit
