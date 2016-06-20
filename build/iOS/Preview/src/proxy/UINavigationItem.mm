#define uObjC_NATIVE_TYPE UINavigationItem
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UINavigationItem*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UINavigationItem_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UINavigationItem.initWithTitle(string):IsStripped}
//- (instancetype) initWithTitle:(NSString *)title
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).initWithTitle(string):Call(uObjC::UnoString(title))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setHidesBackButtonAnimated(bool,bool):IsStripped}
//- (void) setHidesBackButton:(BOOL)hidesBackButton animated:(BOOL)animated
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setHidesBackButtonAnimated(bool,bool):Call((#{bool})hidesBackButton, (#{bool})animated)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setLeftBarButtonItemsAnimated(iOS.Foundation.NSArray,bool):IsStripped}
//- (void) setLeftBarButtonItems:(NSArray *)items animated:(BOOL)animated
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setLeftBarButtonItemsAnimated(iOS.Foundation.NSArray,bool):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(items, #{iOS.Foundation.NSArray:TypeOf}), (#{bool})animated)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setRightBarButtonItemsAnimated(iOS.Foundation.NSArray,bool):IsStripped}
//- (void) setRightBarButtonItems:(NSArray *)items animated:(BOOL)animated
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setRightBarButtonItemsAnimated(iOS.Foundation.NSArray,bool):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(items, #{iOS.Foundation.NSArray:TypeOf}), (#{bool})animated)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setLeftBarButtonItemAnimated(iOS.UIKit.UIBarButtonItem,bool):IsStripped}
//- (void) setLeftBarButtonItem:(UIBarButtonItem *)item animated:(BOOL)animated
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setLeftBarButtonItemAnimated(iOS.UIKit.UIBarButtonItem,bool):Call((#{iOS.UIKit.UIBarButtonItem})uObjC::Lifetime::GetUnoObject(item, #{iOS.UIKit.UIBarButtonItem:TypeOf}), (#{bool})animated)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setRightBarButtonItemAnimated(iOS.UIKit.UIBarButtonItem,bool):IsStripped}
//- (void) setRightBarButtonItem:(UIBarButtonItem *)item animated:(BOOL)animated
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setRightBarButtonItemAnimated(iOS.UIKit.UIBarButtonItem,bool):Call((#{iOS.UIKit.UIBarButtonItem})uObjC::Lifetime::GetUnoObject(item, #{iOS.UIKit.UIBarButtonItem:TypeOf}), (#{bool})animated)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.title():IsStripped}
//- (NSString *) title
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{string} __return = #{iOS.UIKit.UINavigationItem:Of(__this).title():Call()};
//    return uObjC::NativeString(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setTitle(string):IsStripped}
//- (void) setTitle:(NSString *)title
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setTitle(string):Call(uObjC::UnoString(title))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.backBarButtonItem():IsStripped}
//- (UIBarButtonItem *) backBarButtonItem
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem} __return = #{iOS.UIKit.UINavigationItem:Of(__this).backBarButtonItem():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setBackBarButtonItem(iOS.UIKit.UIBarButtonItem):IsStripped}
//- (void) setBackBarButtonItem:(UIBarButtonItem *)backBarButtonItem
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setBackBarButtonItem(iOS.UIKit.UIBarButtonItem):Call((#{iOS.UIKit.UIBarButtonItem})uObjC::Lifetime::GetUnoObject(backBarButtonItem, #{iOS.UIKit.UIBarButtonItem:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.titleView():IsStripped}
//- (UIView *) titleView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UINavigationItem:Of(__this).titleView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setTitleView(iOS.UIKit.UIView):IsStripped}
//- (void) setTitleView:(UIView *)titleView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setTitleView(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(titleView, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.prompt():IsStripped}
//- (NSString *) prompt
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{string} __return = #{iOS.UIKit.UINavigationItem:Of(__this).prompt():Call()};
//    return uObjC::NativeString(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setPrompt(string):IsStripped}
//- (void) setPrompt:(NSString *)prompt
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setPrompt(string):Call(uObjC::UnoString(prompt))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.hidesBackButton():IsStripped}
//- (BOOL) hidesBackButton
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UINavigationItem:Of(__this).hidesBackButton():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setHidesBackButton(bool):IsStripped}
//- (void) setHidesBackButton:(BOOL)hidesBackButton
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setHidesBackButton(bool):Call((#{bool})hidesBackButton)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.leftBarButtonItems():IsStripped}
//- (NSArray *) leftBarButtonItems
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UINavigationItem:Of(__this).leftBarButtonItems():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setLeftBarButtonItems(iOS.Foundation.NSArray):IsStripped}
//- (void) setLeftBarButtonItems:(NSArray *)leftBarButtonItems
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setLeftBarButtonItems(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(leftBarButtonItems, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.rightBarButtonItems():IsStripped}
//- (NSArray *) rightBarButtonItems
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UINavigationItem:Of(__this).rightBarButtonItems():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setRightBarButtonItems(iOS.Foundation.NSArray):IsStripped}
//- (void) setRightBarButtonItems:(NSArray *)rightBarButtonItems
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setRightBarButtonItems(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(rightBarButtonItems, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.leftItemsSupplementBackButton():IsStripped}
//- (BOOL) leftItemsSupplementBackButton
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UINavigationItem:Of(__this).leftItemsSupplementBackButton():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setLeftItemsSupplementBackButton(bool):IsStripped}
//- (void) setLeftItemsSupplementBackButton:(BOOL)leftItemsSupplementBackButton
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setLeftItemsSupplementBackButton(bool):Call((#{bool})leftItemsSupplementBackButton)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.leftBarButtonItem():IsStripped}
//- (UIBarButtonItem *) leftBarButtonItem
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem} __return = #{iOS.UIKit.UINavigationItem:Of(__this).leftBarButtonItem():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setLeftBarButtonItem(iOS.UIKit.UIBarButtonItem):IsStripped}
//- (void) setLeftBarButtonItem:(UIBarButtonItem *)leftBarButtonItem
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setLeftBarButtonItem(iOS.UIKit.UIBarButtonItem):Call((#{iOS.UIKit.UIBarButtonItem})uObjC::Lifetime::GetUnoObject(leftBarButtonItem, #{iOS.UIKit.UIBarButtonItem:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.rightBarButtonItem():IsStripped}
//- (UIBarButtonItem *) rightBarButtonItem
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem} __return = #{iOS.UIKit.UINavigationItem:Of(__this).rightBarButtonItem():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.setRightBarButtonItem(iOS.UIKit.UIBarButtonItem):IsStripped}
//- (void) setRightBarButtonItem:(UIBarButtonItem *)rightBarButtonItem
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).setRightBarButtonItem(iOS.UIKit.UIBarButtonItem):Call((#{iOS.UIKit.UIBarButtonItem})uObjC::Lifetime::GetUnoObject(rightBarButtonItem, #{iOS.UIKit.UIBarButtonItem:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.encodeWithCoder(iOS.Foundation.NSCoder):IsStripped}
//- (void) encodeWithCoder:(NSCoder *)aCoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).encodeWithCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(aCoder, #{iOS.Foundation.NSCoder:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UINavigationItem.initWithCoder(iOS.Foundation.NSCoder):IsStripped}
//- (id) initWithCoder:(NSCoder *)aDecoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem:Of(__this).initWithCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(aDecoder, #{iOS.Foundation.NSCoder:TypeOf}))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
