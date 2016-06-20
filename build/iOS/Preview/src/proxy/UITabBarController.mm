#define uObjC_NATIVE_TYPE UITabBarController
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UITabBarController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UITabBarController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UITabBarController.setViewControllersAnimated(iOS.Foundation.NSArray,bool):IsStripped}
//- (void) setViewControllers:(NSArray *)viewControllers animated:(BOOL)animated
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).setViewControllersAnimated(iOS.Foundation.NSArray,bool):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(viewControllers, #{iOS.Foundation.NSArray:TypeOf}), (#{bool})animated)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.viewControllers():IsStripped}
//- (NSArray *) viewControllers
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UITabBarController:Of(__this).viewControllers():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.setViewControllers(iOS.Foundation.NSArray):IsStripped}
//- (void) setViewControllers:(NSArray *)viewControllers
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).setViewControllers(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(viewControllers, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.selectedViewController():IsStripped}
//- (UIViewController *) selectedViewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIViewController} __return = #{iOS.UIKit.UITabBarController:Of(__this).selectedViewController():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.setSelectedViewController(iOS.UIKit.UIViewController):IsStripped}
//- (void) setSelectedViewController:(UIViewController *)selectedViewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).setSelectedViewController(iOS.UIKit.UIViewController):Call((#{iOS.UIKit.UIViewController})uObjC::Lifetime::GetUnoObject(selectedViewController, #{iOS.UIKit.UIViewController:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.selectedIndex():IsStripped}
//- (NSUInteger) selectedIndex
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ulong} __return = #{iOS.UIKit.UITabBarController:Of(__this).selectedIndex():Call()};
//    return (unsigned long)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.setSelectedIndex(ulong):IsStripped}
//- (void) setSelectedIndex:(NSUInteger)selectedIndex
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).setSelectedIndex(ulong):Call((#{ulong})selectedIndex)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.moreNavigationController():IsStripped}
//- (UINavigationController *) moreNavigationController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationController} __return = #{iOS.UIKit.UITabBarController:Of(__this).moreNavigationController():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.customizableViewControllers():IsStripped}
//- (NSArray *) customizableViewControllers
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UITabBarController:Of(__this).customizableViewControllers():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.setCustomizableViewControllers(iOS.Foundation.NSArray):IsStripped}
//- (void) setCustomizableViewControllers:(NSArray *)customizableViewControllers
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).setCustomizableViewControllers(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(customizableViewControllers, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.tabBar():IsStripped}
//- (UITabBar *) tabBar
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBar} __return = #{iOS.UIKit.UITabBarController:Of(__this).tabBar():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.delegate_():IsStripped}
//- (id<UITabBarControllerDelegate>) delegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.IUITabBarControllerDelegate} __return = #{iOS.UIKit.UITabBarController:Of(__this).delegate_():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, #{iOS.UIKit.IUITabBarControllerDelegate:TypeOf});
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.setDelegate(iOS.UIKit.IUITabBarControllerDelegate):IsStripped}
//- (void) setDelegate:(id<UITabBarControllerDelegate>)delegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).setDelegate(iOS.UIKit.IUITabBarControllerDelegate):Call(uObjC::Lifetime::GetUnoObject(delegate, #{iOS.UIKit.Interop.IUITabBarControllerDelegate:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.tabBarDidSelectItem(iOS.UIKit.UITabBar,iOS.UIKit.UITabBarItem):IsStripped}
//- (void) tabBar:(UITabBar *)tabBar didSelectItem:(UITabBarItem *)item
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).tabBarDidSelectItem(iOS.UIKit.UITabBar,iOS.UIKit.UITabBarItem):Call((#{iOS.UIKit.UITabBar})uObjC::Lifetime::GetUnoObject(tabBar, #{iOS.UIKit.UITabBar:TypeOf}), (#{iOS.UIKit.UITabBarItem})uObjC::Lifetime::GetUnoObject(item, #{iOS.UIKit.UITabBarItem:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.tabBarWillBeginCustomizingItems(iOS.UIKit.UITabBar,iOS.Foundation.NSArray):IsStripped}
//- (void) tabBar:(UITabBar *)tabBar willBeginCustomizingItems:(NSArray *)items
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).tabBarWillBeginCustomizingItems(iOS.UIKit.UITabBar,iOS.Foundation.NSArray):Call((#{iOS.UIKit.UITabBar})uObjC::Lifetime::GetUnoObject(tabBar, #{iOS.UIKit.UITabBar:TypeOf}), (#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(items, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.tabBarDidBeginCustomizingItems(iOS.UIKit.UITabBar,iOS.Foundation.NSArray):IsStripped}
//- (void) tabBar:(UITabBar *)tabBar didBeginCustomizingItems:(NSArray *)items
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).tabBarDidBeginCustomizingItems(iOS.UIKit.UITabBar,iOS.Foundation.NSArray):Call((#{iOS.UIKit.UITabBar})uObjC::Lifetime::GetUnoObject(tabBar, #{iOS.UIKit.UITabBar:TypeOf}), (#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(items, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.tabBarWillEndCustomizingItemsChanged(iOS.UIKit.UITabBar,iOS.Foundation.NSArray,bool):IsStripped}
//- (void) tabBar:(UITabBar *)tabBar willEndCustomizingItems:(NSArray *)items changed:(BOOL)changed
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).tabBarWillEndCustomizingItemsChanged(iOS.UIKit.UITabBar,iOS.Foundation.NSArray,bool):Call((#{iOS.UIKit.UITabBar})uObjC::Lifetime::GetUnoObject(tabBar, #{iOS.UIKit.UITabBar:TypeOf}), (#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(items, #{iOS.Foundation.NSArray:TypeOf}), (#{bool})changed)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UITabBarController.tabBarDidEndCustomizingItemsChanged(iOS.UIKit.UITabBar,iOS.Foundation.NSArray,bool):IsStripped}
//- (void) tabBar:(UITabBar *)tabBar didEndCustomizingItems:(NSArray *)items changed:(BOOL)changed
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITabBarController:Of(__this).tabBarDidEndCustomizingItemsChanged(iOS.UIKit.UITabBar,iOS.Foundation.NSArray,bool):Call((#{iOS.UIKit.UITabBar})uObjC::Lifetime::GetUnoObject(tabBar, #{iOS.UIKit.UITabBar:TypeOf}), (#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(items, #{iOS.Foundation.NSArray:TypeOf}), (#{bool})changed)};
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
