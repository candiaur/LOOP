#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UILayoutSupport
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUILayoutSupport_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.IUILayoutSupport.length():IsStripped}
- (CGFloat) length
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = ::g::iOS::UIKit::IUILayoutSupport::length(uInterface(__this, ::g::iOS::UIKit::IUILayoutSupport_typeof()));
    return (CGFloat)__return;
}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
