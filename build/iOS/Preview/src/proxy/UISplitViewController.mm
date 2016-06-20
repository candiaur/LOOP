#define uObjC_NATIVE_TYPE UISplitViewController
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UISplitViewController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UISplitViewController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UISplitViewController.displayModeButtonItem():IsStripped}
//- (UIBarButtonItem *) displayModeButtonItem
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem} __return = #{iOS.UIKit.UISplitViewController:Of(__this).displayModeButtonItem():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.showViewControllerSender(iOS.UIKit.UIViewController,ObjC.ID):IsStripped}
- (void) showViewController:(UIViewController *)vc sender:(id)sender
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->showViewControllerSender((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(vc, ::g::iOS::UIKit::UIViewController_typeof()), (::id)sender);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.showDetailViewControllerSender(iOS.UIKit.UIViewController,ObjC.ID):IsStripped}
- (void) showDetailViewController:(UIViewController *)vc sender:(id)sender
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->showDetailViewControllerSender((::g::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(vc, ::g::iOS::UIKit::UIViewController_typeof()), (::id)sender);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.viewControllers():IsStripped}
//- (NSArray *) viewControllers
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UISplitViewController:Of(__this).viewControllers():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.setViewControllers(iOS.Foundation.NSArray):IsStripped}
//- (void) setViewControllers:(NSArray *)viewControllers
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISplitViewController:Of(__this).setViewControllers(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(viewControllers, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.delegate_():IsStripped}
//- (id<UISplitViewControllerDelegate>) delegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.IUISplitViewControllerDelegate} __return = #{iOS.UIKit.UISplitViewController:Of(__this).delegate_():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, #{iOS.UIKit.IUISplitViewControllerDelegate:TypeOf});
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.setDelegate(iOS.UIKit.IUISplitViewControllerDelegate):IsStripped}
//- (void) setDelegate:(id<UISplitViewControllerDelegate>)delegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISplitViewController:Of(__this).setDelegate(iOS.UIKit.IUISplitViewControllerDelegate):Call(uObjC::Lifetime::GetUnoObject(delegate, #{iOS.UIKit.Interop.IUISplitViewControllerDelegate:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.presentsWithGesture():IsStripped}
//- (BOOL) presentsWithGesture
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UISplitViewController:Of(__this).presentsWithGesture():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.setPresentsWithGesture(bool):IsStripped}
//- (void) setPresentsWithGesture:(BOOL)presentsWithGesture
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISplitViewController:Of(__this).setPresentsWithGesture(bool):Call((#{bool})presentsWithGesture)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.isCollapsed():IsStripped}
//- (BOOL) isCollapsed
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UISplitViewController:Of(__this).isCollapsed():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.preferredDisplayMode():IsStripped}
//- (UISplitViewControllerDisplayMode) preferredDisplayMode
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISplitViewControllerDisplayMode} __return = #{iOS.UIKit.UISplitViewController:Of(__this).preferredDisplayMode():Call()};
//    return ::UISplitViewControllerDisplayMode(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.setPreferredDisplayMode(iOS.UIKit.UISplitViewControllerDisplayMode):IsStripped}
//- (void) setPreferredDisplayMode:(UISplitViewControllerDisplayMode)preferredDisplayMode
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISplitViewController:Of(__this).setPreferredDisplayMode(iOS.UIKit.UISplitViewControllerDisplayMode):Call(#{int}(preferredDisplayMode))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.displayMode():IsStripped}
//- (UISplitViewControllerDisplayMode) displayMode
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISplitViewControllerDisplayMode} __return = #{iOS.UIKit.UISplitViewController:Of(__this).displayMode():Call()};
//    return ::UISplitViewControllerDisplayMode(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.preferredPrimaryColumnWidthFraction():IsStripped}
//- (CGFloat) preferredPrimaryColumnWidthFraction
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.UIKit.UISplitViewController:Of(__this).preferredPrimaryColumnWidthFraction():Call()};
//    return (CGFloat)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.setPreferredPrimaryColumnWidthFraction(double):IsStripped}
//- (void) setPreferredPrimaryColumnWidthFraction:(CGFloat)preferredPrimaryColumnWidthFraction
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISplitViewController:Of(__this).setPreferredPrimaryColumnWidthFraction(double):Call((#{double})preferredPrimaryColumnWidthFraction)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.minimumPrimaryColumnWidth():IsStripped}
//- (CGFloat) minimumPrimaryColumnWidth
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.UIKit.UISplitViewController:Of(__this).minimumPrimaryColumnWidth():Call()};
//    return (CGFloat)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.setMinimumPrimaryColumnWidth(double):IsStripped}
//- (void) setMinimumPrimaryColumnWidth:(CGFloat)minimumPrimaryColumnWidth
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISplitViewController:Of(__this).setMinimumPrimaryColumnWidth(double):Call((#{double})minimumPrimaryColumnWidth)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.maximumPrimaryColumnWidth():IsStripped}
//- (CGFloat) maximumPrimaryColumnWidth
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.UIKit.UISplitViewController:Of(__this).maximumPrimaryColumnWidth():Call()};
//    return (CGFloat)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.setMaximumPrimaryColumnWidth(double):IsStripped}
//- (void) setMaximumPrimaryColumnWidth:(CGFloat)maximumPrimaryColumnWidth
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISplitViewController:Of(__this).setMaximumPrimaryColumnWidth(double):Call((#{double})maximumPrimaryColumnWidth)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISplitViewController.primaryColumnWidth():IsStripped}
//- (CGFloat) primaryColumnWidth
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.UIKit.UISplitViewController:Of(__this).primaryColumnWidth():Call()};
//    return (CGFloat)__return;
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
