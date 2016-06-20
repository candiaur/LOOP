#define uObjC_NATIVE_TYPE UIStoryboardSegue
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIStoryboardSegue*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIStoryboardSegue_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UIStoryboardSegue.initWithIdentifierSourceDestination(string,iOS.UIKit.UIViewController,iOS.UIKit.UIViewController):IsStripped}
//- (instancetype) initWithIdentifier:(NSString *)identifier source:(UIViewController *)source destination:(UIViewController *)destination
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIStoryboardSegue:Of(__this).initWithIdentifierSourceDestination(string,iOS.UIKit.UIViewController,iOS.UIKit.UIViewController):Call(uObjC::UnoString(identifier), (#{iOS.UIKit.UIViewController})uObjC::Lifetime::GetUnoObject(source, #{iOS.UIKit.UIViewController:TypeOf}), (#{iOS.UIKit.UIViewController})uObjC::Lifetime::GetUnoObject(destination, #{iOS.UIKit.UIViewController:TypeOf}))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIStoryboardSegue.perform():IsStripped}
//- (void) perform
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIStoryboardSegue:Of(__this).perform():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIStoryboardSegue.identifier():IsStripped}
//- (NSString *) identifier
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{string} __return = #{iOS.UIKit.UIStoryboardSegue:Of(__this).identifier():Call()};
//    return uObjC::NativeString(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIStoryboardSegue.sourceViewController():IsStripped}
//- (id) sourceViewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.UIKit.UIStoryboardSegue:Of(__this).sourceViewController():Call()};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIStoryboardSegue.destinationViewController():IsStripped}
//- (id) destinationViewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.UIKit.UIStoryboardSegue:Of(__this).destinationViewController():Call()};
//    return (::id)__return;
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
