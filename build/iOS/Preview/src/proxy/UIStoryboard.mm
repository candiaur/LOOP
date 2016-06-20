#define uObjC_NATIVE_TYPE UIStoryboard
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIStoryboard*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIStoryboard_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UIStoryboard._storyboardWithNameBundle(string,iOS.Foundation.NSBundle):IsStripped}
//+ (UIStoryboard *) storyboardWithName:(NSString *)name bundle:(NSBundle *)storyboardBundleOrNil
//{
//    #{iOS.UIKit.UIStoryboard} __return = #{iOS.UIKit.UIStoryboard._storyboardWithNameBundle(string,iOS.Foundation.NSBundle):Call(uObjC::UnoString(name), (#{iOS.Foundation.NSBundle})uObjC::Lifetime::GetUnoObject(storyboardBundleOrNil, #{iOS.Foundation.NSBundle:TypeOf}))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIStoryboard.instantiateInitialViewController():IsStripped}
//- (id) instantiateInitialViewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.UIKit.UIStoryboard:Of(__this).instantiateInitialViewController():Call()};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIStoryboard.instantiateViewControllerWithIdentifier(string):IsStripped}
//- (id) instantiateViewControllerWithIdentifier:(NSString *)identifier
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.UIKit.UIStoryboard:Of(__this).instantiateViewControllerWithIdentifier(string):Call(uObjC::UnoString(identifier))};
//    return (::id)__return;
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
