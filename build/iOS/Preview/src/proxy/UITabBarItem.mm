#define uObjC_NATIVE_TYPE UITabBarItem
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UITabBarItem*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UITabBarItem_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UITabBarItem.initWithTitleImageTag(string,iOS.UIKit.UIImage,int):IsStripped}
//- (instancetype) initWithTitle:(NSString *)title image:(UIImage *)image tag:(NSInteger)tag
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarItem:Of(__this).initWithTitleImageTag(string,iOS.UIKit.UIImage,int):Call(uObjC::UnoString(title), (#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(image, #{iOS.UIKit.UIImage:TypeOf}), (#{int})tag)};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.initWithTitleImageSelectedImage(string,iOS.UIKit.UIImage,iOS.UIKit.UIImage):IsStripped}
//- (instancetype) initWithTitle:(NSString *)title image:(UIImage *)image selectedImage:(UIImage *)selectedImage
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarItem:Of(__this).initWithTitleImageSelectedImage(string,iOS.UIKit.UIImage,iOS.UIKit.UIImage):Call(uObjC::UnoString(title), (#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(image, #{iOS.UIKit.UIImage:TypeOf}), (#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(selectedImage, #{iOS.UIKit.UIImage:TypeOf}))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.initWithTabBarSystemItemTag(iOS.UIKit.UITabBarSystemItem,int):IsStripped}
//- (instancetype) initWithTabBarSystemItem:(UITabBarSystemItem)systemItem tag:(NSInteger)tag
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarItem:Of(__this).initWithTabBarSystemItemTag(iOS.UIKit.UITabBarSystemItem,int):Call(#{int}(systemItem), (#{int})tag)};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.setFinishedSelectedImageWithFinishedUnselectedImage(iOS.UIKit.UIImage,iOS.UIKit.UIImage):IsStripped}
//- (void) setFinishedSelectedImage:(UIImage *)selectedImage withFinishedUnselectedImage:(UIImage *)unselectedImage
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarItem:Of(__this).setFinishedSelectedImageWithFinishedUnselectedImage(iOS.UIKit.UIImage,iOS.UIKit.UIImage):Call((#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(selectedImage, #{iOS.UIKit.UIImage:TypeOf}), (#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(unselectedImage, #{iOS.UIKit.UIImage:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.finishedSelectedImage():IsStripped}
//- (UIImage *) finishedSelectedImage
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIImage} __return = #{iOS.UIKit.UITabBarItem:Of(__this).finishedSelectedImage():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.finishedUnselectedImage():IsStripped}
//- (UIImage *) finishedUnselectedImage
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIImage} __return = #{iOS.UIKit.UITabBarItem:Of(__this).finishedUnselectedImage():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.setTitlePositionAdjustment(iOS.UIKit.UIOffset):IsStripped}
//- (void) setTitlePositionAdjustment:(UIOffset)adjustment
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarItem:Of(__this).setTitlePositionAdjustment(iOS.UIKit.UIOffset):Call(uObjC::Struct::ToUno_UIOffset(adjustment, #{iOS.UIKit.UIOffset}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.titlePositionAdjustment():IsStripped}
//- (UIOffset) titlePositionAdjustment
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIOffset} __return = #{iOS.UIKit.UITabBarItem:Of(__this).titlePositionAdjustment():Call()};
//    return uObjC::Struct::FromUno_UIOffset(__return, ::UIOffset());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.selectedImage():IsStripped}
//- (UIImage *) selectedImage
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIImage} __return = #{iOS.UIKit.UITabBarItem:Of(__this).selectedImage():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.setSelectedImage(iOS.UIKit.UIImage):IsStripped}
//- (void) setSelectedImage:(UIImage *)selectedImage
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarItem:Of(__this).setSelectedImage(iOS.UIKit.UIImage):Call((#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(selectedImage, #{iOS.UIKit.UIImage:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.badgeValue():IsStripped}
//- (NSString *) badgeValue
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{string} __return = #{iOS.UIKit.UITabBarItem:Of(__this).badgeValue():Call()};
//    return uObjC::NativeString(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarItem.setBadgeValue(string):IsStripped}
//- (void) setBadgeValue:(NSString *)badgeValue
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarItem:Of(__this).setBadgeValue(string):Call(uObjC::UnoString(badgeValue))};
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
