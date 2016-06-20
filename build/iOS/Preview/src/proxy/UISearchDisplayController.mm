#define uObjC_NATIVE_TYPE UISearchDisplayController
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UISearchDisplayController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UISearchDisplayController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UISearchDisplayController.initWithSearchBarContentsController(iOS.UIKit.UISearchBar,iOS.UIKit.UIViewController):IsStripped}
//- (instancetype) initWithSearchBar:(UISearchBar *)searchBar contentsController:(UIViewController *)viewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISearchDisplayController:Of(__this).initWithSearchBarContentsController(iOS.UIKit.UISearchBar,iOS.UIKit.UIViewController):Call((#{iOS.UIKit.UISearchBar})uObjC::Lifetime::GetUnoObject(searchBar, #{iOS.UIKit.UISearchBar:TypeOf}), (#{iOS.UIKit.UIViewController})uObjC::Lifetime::GetUnoObject(viewController, #{iOS.UIKit.UIViewController:TypeOf}))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.setActiveAnimated(bool,bool):IsStripped}
//- (void) setActive:(BOOL)visible animated:(BOOL)animated
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISearchDisplayController:Of(__this).setActiveAnimated(bool,bool):Call((#{bool})visible, (#{bool})animated)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.delegate_():IsStripped}
//- (id<UISearchDisplayDelegate>) delegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.IUISearchDisplayDelegate} __return = #{iOS.UIKit.UISearchDisplayController:Of(__this).delegate_():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, #{iOS.UIKit.IUISearchDisplayDelegate:TypeOf});
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.setDelegate(iOS.UIKit.IUISearchDisplayDelegate):IsStripped}
//- (void) setDelegate:(id<UISearchDisplayDelegate>)delegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISearchDisplayController:Of(__this).setDelegate(iOS.UIKit.IUISearchDisplayDelegate):Call(uObjC::Lifetime::GetUnoObject(delegate, #{iOS.UIKit.Interop.IUISearchDisplayDelegate:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.isActive():IsStripped}
//- (BOOL) isActive
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UISearchDisplayController:Of(__this).isActive():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.setActive(bool):IsStripped}
//- (void) setActive:(BOOL)active
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISearchDisplayController:Of(__this).setActive(bool):Call((#{bool})active)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.searchBar():IsStripped}
//- (UISearchBar *) searchBar
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISearchBar} __return = #{iOS.UIKit.UISearchDisplayController:Of(__this).searchBar():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.searchContentsController():IsStripped}
//- (UIViewController *) searchContentsController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIViewController} __return = #{iOS.UIKit.UISearchDisplayController:Of(__this).searchContentsController():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.searchResultsTableView():IsStripped}
//- (UITableView *) searchResultsTableView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITableView} __return = #{iOS.UIKit.UISearchDisplayController:Of(__this).searchResultsTableView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.searchResultsDataSource():IsStripped}
//- (id<UITableViewDataSource>) searchResultsDataSource
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.IUITableViewDataSource} __return = #{iOS.UIKit.UISearchDisplayController:Of(__this).searchResultsDataSource():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, #{iOS.UIKit.IUITableViewDataSource:TypeOf});
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.setSearchResultsDataSource(iOS.UIKit.IUITableViewDataSource):IsStripped}
//- (void) setSearchResultsDataSource:(id<UITableViewDataSource>)searchResultsDataSource
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISearchDisplayController:Of(__this).setSearchResultsDataSource(iOS.UIKit.IUITableViewDataSource):Call(uObjC::Lifetime::GetUnoObject(searchResultsDataSource, #{iOS.UIKit.Interop.IUITableViewDataSource:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.searchResultsDelegate():IsStripped}
//- (id<UITableViewDelegate>) searchResultsDelegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.IUITableViewDelegate} __return = #{iOS.UIKit.UISearchDisplayController:Of(__this).searchResultsDelegate():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, #{iOS.UIKit.IUITableViewDelegate:TypeOf});
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.setSearchResultsDelegate(iOS.UIKit.IUITableViewDelegate):IsStripped}
//- (void) setSearchResultsDelegate:(id<UITableViewDelegate>)searchResultsDelegate
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISearchDisplayController:Of(__this).setSearchResultsDelegate(iOS.UIKit.IUITableViewDelegate):Call(uObjC::Lifetime::GetUnoObject(searchResultsDelegate, #{iOS.UIKit.Interop.IUITableViewDelegate:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.searchResultsTitle():IsStripped}
//- (NSString *) searchResultsTitle
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{string} __return = #{iOS.UIKit.UISearchDisplayController:Of(__this).searchResultsTitle():Call()};
//    return uObjC::NativeString(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.setSearchResultsTitle(string):IsStripped}
//- (void) setSearchResultsTitle:(NSString *)searchResultsTitle
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISearchDisplayController:Of(__this).setSearchResultsTitle(string):Call(uObjC::UnoString(searchResultsTitle))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.displaysSearchBarInNavigationBar():IsStripped}
//- (BOOL) displaysSearchBarInNavigationBar
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UISearchDisplayController:Of(__this).displaysSearchBarInNavigationBar():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.setDisplaysSearchBarInNavigationBar(bool):IsStripped}
//- (void) setDisplaysSearchBarInNavigationBar:(BOOL)displaysSearchBarInNavigationBar
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UISearchDisplayController:Of(__this).setDisplaysSearchBarInNavigationBar(bool):Call((#{bool})displaysSearchBarInNavigationBar)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UISearchDisplayController.navigationItem():IsStripped}
//- (UINavigationItem *) navigationItem
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UINavigationItem} __return = #{iOS.UIKit.UISearchDisplayController:Of(__this).navigationItem():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
