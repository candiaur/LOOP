#define uObjC_NATIVE_TYPE NSExtensionContext
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSExtensionContext*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSExtensionContext_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.Foundation.NSExtensionContext.cancelRequestWithError(iOS.Foundation.NSError):IsStripped}
//- (void) cancelRequestWithError:(NSError *)error
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSExtensionContext:Of(__this).cancelRequestWithError(iOS.Foundation.NSError):Call((#{iOS.Foundation.NSError})uObjC::Lifetime::GetUnoObject(error, #{iOS.Foundation.NSError:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSExtensionContext.inputItems():IsStripped}
//- (NSArray *) inputItems
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.Foundation.NSExtensionContext:Of(__this).inputItems():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
