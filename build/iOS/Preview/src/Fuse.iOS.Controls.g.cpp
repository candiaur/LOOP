// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.iOS.Controls.FuseMapView.h>
#include <Fuse.iOS.Controls.MapViewController.h>
#include <Fuse.iOS.Controls.WebView.h>
#include <Fuse.iOS.Controls.WKWebViewHelpers.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <iOS.Foundation.NSError.h>
#include <iOS.Foundation.NSObject.h>
#include <iOS.Foundation.NSURL.h>
#include <iOS.Foundation.NSURLCache.h>
#include <iOS.Foundation.NSURLRequest.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.WebKit.WKNavigation.h>
#include <iOS.WebKit.WKWebView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Application.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[5];
static uType* TYPES[12];

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// /usr/local/share/uno/Packages/Fuse.Controls.MapView/0.29.22/iOS/$.uno
// ---------------------------------------------------------------------

// internal sealed extern class FuseMapView :22
// {
static void FuseMapView_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1);
}

::g::iOS::UIKit::UIView_type* FuseMapView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FuseMapView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("Fuse.iOS.Controls.FuseMapView", options);
    type->SetBase(::g::iOS::MapKit::MKMapView_typeof());
    type->fp_build_ = FuseMapView_build;
    type->fp_ctor_ = (void*)FuseMapView__New11_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public FuseMapView() :24
void FuseMapView__ctor_10_fn(FuseMapView* __this)
{
    __this->ctor_10();
}

// public FuseMapView New() :24
void FuseMapView__New11_fn(FuseMapView** __retval)
{
    *__retval = FuseMapView::New11();
}

// public FuseMapView() [instance] :24
void FuseMapView::ctor_10()
{
    uStackFrame __("Fuse.iOS.Controls.FuseMapView", ".ctor()");
    ctor_8();
}

// public FuseMapView New() [static] :24
FuseMapView* FuseMapView::New11()
{
    FuseMapView* obj1 = (FuseMapView*)uNew(FuseMapView_typeof());
    obj1->ctor_10();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.MapView/0.29.22/iOS/$.uno
// ---------------------------------------------------------------------

// internal sealed extern class MapViewController :27
// {
static void MapViewController_build(uType* type)
{
    ::TYPES[0] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[1] = ::g::Uno::Delegate_typeof();
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIViewController_type, interface0),
        ::g::iOS::UIKit::IUIContentContainer_typeof(), offsetof(::g::iOS::UIKit::UIViewController_type, interface1));
    type->SetFields(1,
        ::g::Fuse::iOS::Controls::FuseMapView_typeof(), offsetof(::g::Fuse::iOS::Controls::MapViewController, _map), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::iOS::Controls::MapViewController, OnReady), 0);
}

::g::iOS::UIKit::UIViewController_type* MapViewController_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIViewController_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MapViewController);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIViewController_type);
    type = (::g::iOS::UIKit::UIViewController_type*)uClassType::New("Fuse.iOS.Controls.MapViewController", options);
    type->SetBase(::g::iOS::UIKit::UIViewController_typeof());
    type->fp_build_ = MapViewController_build;
    type->fp_ctor_ = (void*)MapViewController__New9_fn;
    type->fp_loadView = (void(*)(::g::iOS::UIKit::UIViewController*))MapViewController__loadView_fn;
    type->fp_viewDidAppear = (void(*)(::g::iOS::UIKit::UIViewController*, bool*))MapViewController__viewDidAppear_fn;
    type->interface1.fp_preferredContentSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_systemLayoutFittingSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_sizeForChildContentContainerWithParentContainerSize = (void(*)(uObject*, uObject*, ::g::iOS::CoreGraphics::CGSize*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn;
    type->interface1.fp_viewWillTransitionToSizeWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn;
    type->interface1.fp_willTransitionToTraitCollectionWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::UIKit::UITraitCollection*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn;
    type->interface1.fp_preferredContentSize = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIViewController__preferredContentSize_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public MapViewController() :32
void MapViewController__ctor_8_fn(MapViewController* __this)
{
    __this->ctor_8();
}

// public override sealed void loadView() :37
void MapViewController__loadView_fn(MapViewController* __this)
{
    uStackFrame __("Fuse.iOS.Controls.MapViewController", "loadView()");
    __this->_map = ::g::Fuse::iOS::Controls::FuseMapView::New11();
    uPtr(__this->_map)->init();
    __this->View(__this->_map);
}

// public MapViewController New() :32
void MapViewController__New9_fn(MapViewController** __retval)
{
    *__retval = MapViewController::New9();
}

// public override sealed void viewDidAppear(bool animated) :44
void MapViewController__viewDidAppear_fn(MapViewController* __this, bool* animated)
{
    uStackFrame __("Fuse.iOS.Controls.MapViewController", "viewDidAppear(bool)");

    if (::g::Uno::Delegate::op_Inequality(__this->OnReady, NULL))
        uPtr(__this->OnReady)->InvokeVoid();
}

// public MapViewController() [instance] :32
void MapViewController::ctor_8()
{
    uStackFrame __("Fuse.iOS.Controls.MapViewController", ".ctor()");
    ctor_6();
    init();
}

// public MapViewController New() [static] :32
MapViewController* MapViewController::New9()
{
    MapViewController* obj1 = (MapViewController*)uNew(MapViewController_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.29.22/iOS/$.uno
// ---------------------------------------------------------------------

// public sealed extern class WebView :38
// {
// ~WebView() :77
static void WebView__Finalize_fn(WebView* __this)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Finalize()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_iOSWebView), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        ::g::Uno::Platform2::Application::remove_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)WebView__OnLowMemory_fn, __this));
}

static void WebView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("about:blank");
    ::STRINGS[2] = uString::Const("low mem in WebView");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.WebView/0.29.22/iOS/$.uno");
    ::STRINGS[4] = uString::Const("freeing mem in WebView");
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::ObjC::Object_typeof();
    ::TYPES[5] = ::g::iOS::WebKit::IWKNavigationDelegate_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[7] = ::g::Uno::Exception_typeof();
    ::TYPES[1] = ::g::Uno::Delegate_typeof();
    ::TYPES[8] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(WebView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface3),
        ::g::iOS::WebKit::IWKNavigationDelegate_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface6),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface7));
    type->SetFields(3,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _file), 0,
        ::g::iOS::WebKit::WKWebView_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _iOSWebView), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _isUpdating), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _source), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _webViewHost), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _BaseUrl), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, BeginLoading1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, PageLoaded1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::iOS::Controls::WebView, ProgressChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, UrlChanged1), 0);
    type->Reflection.SetFunctions(38,
        new uFunction("get_BaseUrl", NULL, (void*)WebView__get_BaseUrl_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, (void*)WebView__set_BaseUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_BeginLoading", NULL, (void*)WebView__add_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_BeginLoading", NULL, (void*)WebView__remove_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_CanGoBack", NULL, (void*)WebView__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, (void*)WebView__get_CanGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Create", NULL, (void*)WebView__Create_fn, 0, true, WebView_typeof(), 1, ::g::Fuse::Controls::WebView_typeof()),
        new uFunction("get_DocumentTitle", NULL, (void*)WebView__get_DocumentTitle_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Eval", NULL, (void*)WebView__Eval_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Eval", NULL, (void*)WebView__Eval1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("get_File", NULL, (void*)WebView__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)WebView__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("GoBack", NULL, (void*)WebView__GoBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, (void*)WebView__GoForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_HistoryChanged", NULL, (void*)WebView__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, (void*)WebView__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LoadUrl", NULL, (void*)WebView__LoadUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_PageLoaded", NULL, (void*)WebView__add_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_PageLoaded", NULL, (void*)WebView__remove_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_Progress", NULL, (void*)WebView__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, (void*)WebView__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ProgressChanged", NULL, (void*)WebView__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("Reload", NULL, (void*)WebView__Reload_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WebView__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)WebView__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Stop", NULL, (void*)WebView__Stop_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Url", NULL, (void*)WebView__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)WebView__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_UrlChanged", NULL, (void*)WebView__add_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_UrlChanged", NULL, (void*)WebView__remove_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("webViewDidCommitNavigation", NULL, (void*)WebView__webViewDidCommitNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()),
        new uFunction("webViewDidFailNavigationWithError", NULL, (void*)WebView__webViewDidFailNavigationWithError_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof(), ::g::iOS::Foundation::NSError_typeof()),
        new uFunction("webViewDidFailProvisionalNavigationWithError", NULL, (void*)WebView__webViewDidFailProvisionalNavigationWithError_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof(), ::g::iOS::Foundation::NSError_typeof()),
        new uFunction("webViewDidFinishNavigation", NULL, (void*)WebView__webViewDidFinishNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()),
        new uFunction("webViewDidReceiveServerRedirectForProvisionalNavigation", NULL, (void*)WebView__webViewDidReceiveServerRedirectForProvisionalNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()),
        new uFunction("webViewDidStartProvisionalNavigation", NULL, (void*)WebView__webViewDidStartProvisionalNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()));
}

WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.iOS.Controls.WebView", options);
    type->SetBase(::g::Fuse::Controls::Native::iOS::LeafView_typeof());
    type->fp_build_ = WebView_build;
    type->fp_Finalize = (void(*)(uObject*))WebView__Finalize_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))WebView__Dispose_fn;
    type->interface3.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface3.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface3.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface3.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface3.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface3.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface3.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface3.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface3.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface3.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface3.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface3.fp_get_DocumentTitle = (void(*)(uObject*, uString**))WebView__get_DocumentTitle_fn;
    type->interface3.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface3.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface3.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface3.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface3.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface3.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface3.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface3.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface4.fp_webViewDidStartProvisionalNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))WebView__webViewDidStartProvisionalNavigation_fn;
    type->interface4.fp_webViewDidReceiveServerRedirectForProvisionalNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))WebView__webViewDidReceiveServerRedirectForProvisionalNavigation_fn;
    type->interface4.fp_webViewDidFailProvisionalNavigationWithError = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*, ::g::iOS::Foundation::NSError*))WebView__webViewDidFailProvisionalNavigationWithError_fn;
    type->interface4.fp_webViewDidCommitNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))WebView__webViewDidCommitNavigation_fn;
    type->interface4.fp_webViewDidFinishNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))WebView__webViewDidFinishNavigation_fn;
    type->interface4.fp_webViewDidFailNavigationWithError = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*, ::g::iOS::Foundation::NSError*))WebView__webViewDidFailNavigationWithError_fn;
    type->interface5.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface5.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface5.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))WebView__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))WebView__remove_HistoryChanged_fn;
    type->interface7.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface7.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))WebView__Dispose_fn;
    return type;
}

// private WebView(Fuse.Controls.WebView webViewHost, iOS.WebKit.WKWebView wkWebView) :53
void WebView__ctor_2_fn(WebView* __this, ::g::Fuse::Controls::WebView* webViewHost, ::g::iOS::WebKit::WKWebView* wkWebView)
{
    __this->ctor_2(webViewHost, wkWebView);
}

// public generated string get_BaseUrl() :94
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :94
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :207
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :207
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :179
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :181
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public static Fuse.iOS.Controls.WebView Create(Fuse.Controls.WebView webViewHost) :46
void WebView__Create_fn(::g::Fuse::Controls::WebView* webViewHost, WebView** __retval)
{
    *__retval = WebView::Create(webViewHost);
}

// public override sealed void Dispose() :62
void WebView__Dispose_fn(WebView* __this)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Dispose()");
    uPtr(__this->_webViewHost)->WebViewClient(NULL);
    __this->_webViewHost = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// public string get_DocumentTitle() :177
void WebView__get_DocumentTitle_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->DocumentTitle();
}

// public void Eval(string js) :138
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> onResult) :143
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* onResult)
{
    __this->Eval1(js, onResult);
}

// public Uno.UX.FileSource get_File() :151
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :152
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :183
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :185
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// public void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :71
void WebView__add_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :72
void WebView__remove_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// private void LoadFile(Uno.UX.FileSource file) :165
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html) :103
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :109
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// private void LoadHTML(string html) :160
void WebView__LoadHTML_fn(WebView* __this, uString* html)
{
    __this->LoadHTML(html);
}

// public void LoadUrl(string url) :191
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// private WebView New(Fuse.Controls.WebView webViewHost, iOS.WebKit.WKWebView wkWebView) :53
void WebView__New1_fn(::g::Fuse::Controls::WebView* webViewHost, ::g::iOS::WebKit::WKWebView* wkWebView, WebView** __retval)
{
    *__retval = WebView::New1(webViewHost, wkWebView);
}

// private void OnLowMemory(object sender, Uno.EventArgs args) :83
void WebView__OnLowMemory_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLowMemory(sender, args);
}

// private void OnProgressChanged() :212
void WebView__OnProgressChanged_fn(WebView* __this)
{
    __this->OnProgressChanged();
}

// private void OnUpdate() :128
void WebView__OnUpdate_fn(WebView* __this)
{
    __this->OnUpdate();
}

// public generated void add_PageLoaded(Uno.EventHandler value) :208
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :208
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :203
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :210
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :210
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :187
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public string get_Source() :99
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :100
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// private void StartProgressUpdate() :122
void WebView__StartProgressUpdate_fn(WebView* __this)
{
    __this->StartProgressUpdate();
}

// public void Stop() :189
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public string get_Url() :117
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :118
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) :209
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :209
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// public void webViewDidCommitNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :234
void WebView__webViewDidCommitNavigation_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    __this->webViewDidCommitNavigation(webView, navigation);
}

// public void webViewDidFailNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) :249
void WebView__webViewDidFailNavigationWithError_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation, ::g::iOS::Foundation::NSError* error)
{
    __this->webViewDidFailNavigationWithError(webView, navigation, error);
}

// public void webViewDidFailProvisionalNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) :230
void WebView__webViewDidFailProvisionalNavigationWithError_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation, ::g::iOS::Foundation::NSError* error)
{
    __this->webViewDidFailProvisionalNavigationWithError(webView, navigation, error);
}

// public void webViewDidFinishNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :240
void WebView__webViewDidFinishNavigation_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    __this->webViewDidFinishNavigation(webView, navigation);
}

// public void webViewDidReceiveServerRedirectForProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :226
void WebView__webViewDidReceiveServerRedirectForProvisionalNavigation_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    __this->webViewDidReceiveServerRedirectForProvisionalNavigation(webView, navigation);
}

// public void webViewDidStartProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :221
void WebView__webViewDidStartProvisionalNavigation_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    __this->webViewDidStartProvisionalNavigation(webView, navigation);
}

// private WebView(Fuse.Controls.WebView webViewHost, iOS.WebKit.WKWebView wkWebView) [instance] :53
void WebView::ctor_2(::g::Fuse::Controls::WebView* webViewHost, ::g::iOS::WebKit::WKWebView* wkWebView)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", ".ctor(Fuse.Controls.WebView,iOS.WebKit.WKWebView)");
    ctor_1((uObject*)wkWebView);
    _webViewHost = webViewHost;
    _iOSWebView = wkWebView;
    uPtr(_iOSWebView)->setNavigationDelegate((uObject*)this);
    ::g::Uno::Platform2::Application::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)WebView__OnLowMemory_fn, this));
    uPtr(_webViewHost)->WebViewClient((uObject*)this);
}

// public generated string get_BaseUrl() [instance] :94
uString* WebView::BaseUrl()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_BaseUrl()");
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :94
void WebView::BaseUrl(uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "set_BaseUrl(string)");
    _BaseUrl = value;
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :207
void WebView::add_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_BeginLoading(Uno.EventHandler)");
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :207
void WebView::remove_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_BeginLoading(Uno.EventHandler)");
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :179
bool WebView::CanGoBack()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_CanGoBack()");
    return uPtr(_iOSWebView)->CanGoBack();
}

// public bool get_CanGoForward() [instance] :181
bool WebView::CanGoForward()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_CanGoForward()");
    return uPtr(_iOSWebView)->CanGoForward();
}

// public string get_DocumentTitle() [instance] :177
uString* WebView::DocumentTitle()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_DocumentTitle()");
    return uPtr(_iOSWebView)->Title();
}

// public void Eval(string js) [instance] :138
void WebView::Eval(uString* js)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Eval(string)");
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::EvalOnWebView(_iOSWebView, js);
}

// public void Eval(string js, Uno.Action<string> onResult) [instance] :143
void WebView::Eval1(uString* js, uDelegate* onResult)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Eval(string,Uno.Action<string>)");
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::EvalOnWebView1(_iOSWebView, js, onResult);
}

// public Uno.UX.FileSource get_File() [instance] :151
::g::Uno::UX::FileSource* WebView::File()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_File()");
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :152
void WebView::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "set_File(Uno.UX.FileSource)");
    _file = value;

    if (_file != NULL)
        LoadFile(_file);
}

// public void GoBack() [instance] :183
void WebView::GoBack()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "GoBack()");
    uPtr(_iOSWebView)->goBack();
}

// public void GoForward() [instance] :185
void WebView::GoForward()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "GoForward()");
    uPtr(_iOSWebView)->goForward();
}

// public void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :71
void WebView::add_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :72
void WebView::remove_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// private void LoadFile(Uno.UX.FileSource file) [instance] :165
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadFile(Uno.UX.FileSource)");
    uString* data = ::STRINGS[0/*""*/];

    {
        const auto __finally_fun = [&]()
        {
            LoadHTML(data);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            data = uPtr(file)->ReadAllText();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            data = uPtr(e)->ToString();
        }
    }
}

// public void LoadHtml(string html) [instance] :103
void WebView::LoadHtml(uString* html)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadHtml(string)");
    LoadHtml1(html, ::STRINGS[0/*""*/]);
}

// public void LoadHtml(string html, string baseUrl) [instance] :109
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadHtml(string,string)");
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::LoadHtmlString(_iOSWebView, html, baseUrl);
}

// private void LoadHTML(string html) [instance] :160
void WebView::LoadHTML(uString* html)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadHTML(string)");
    uPtr(_iOSWebView)->loadHTMLStringBaseURL(html, NULL);
    StartProgressUpdate();
}

// public void LoadUrl(string url) [instance] :191
void WebView::LoadUrl(uString* url)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadUrl(string)");

    if (::g::Uno::String::op_Equality(url, NULL) || ::g::Uno::String::op_Equality(url, ::STRINGS[0/*""*/]))
        url = ::STRINGS[1/*"about:blank"*/];

    ::g::iOS::Foundation::NSURL* nsurl = ::g::iOS::Foundation::NSURL::New5();
    nsurl->initWithString(url);
    ::g::iOS::Foundation::NSURLRequest* request = ::g::iOS::Foundation::NSURLRequest::New5();
    request->initWithURL(nsurl);
    uPtr(_iOSWebView)->loadRequest(request);
}

// private void OnLowMemory(object sender, Uno.EventArgs args) [instance] :83
void WebView::OnLowMemory(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnLowMemory(object,Uno.EventArgs)");
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"low mem in ...*/], 1, ::STRINGS[3/*"/usr/local/...*/], 85);
    ::g::iOS::Foundation::NSURLCache* urlCache = ::g::iOS::Foundation::NSURLCache::_sharedURLCache();

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(urlCache), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[4/*"freeing mem...*/], 1, ::STRINGS[3/*"/usr/local/...*/], 89);
        uPtr(urlCache)->removeAllCachedResponses();
    }
}

// private void OnProgressChanged() [instance] :212
void WebView::OnProgressChanged()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnProgressChanged()");
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[9/*Uno.UX.ValueChangedArgs<double>*/], uCRef(Progress()), &ret2), ret2));
}

// private void OnUpdate() [instance] :128
void WebView::OnUpdate()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnUpdate()");
    OnProgressChanged();

    if (!uPtr(_iOSWebView)->Loading())
    {
        _isUpdating = false;
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)WebView__OnUpdate_fn, this), 0);
    }
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :208
void WebView::add_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :208
void WebView::remove_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :203
double WebView::Progress()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_Progress()");
    return uPtr(_iOSWebView)->EstimatedProgress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :210
void WebView::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[11/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :210
void WebView::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[11/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reload() [instance] :187
void WebView::Reload()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Reload()");
    uPtr(_iOSWebView)->reload();
}

// public string get_Source() [instance] :99
uString* WebView::Source()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_Source()");
    return _source;
}

// public void set_Source(string value) [instance] :100
void WebView::Source(uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "set_Source(string)");
    LoadHtml(_source = value);
}

// private void StartProgressUpdate() [instance] :122
void WebView::StartProgressUpdate()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "StartProgressUpdate()");

    if (!_isUpdating)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)WebView__OnUpdate_fn, this), 0);
}

// public void Stop() [instance] :189
void WebView::Stop()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Stop()");
    uPtr(_iOSWebView)->stopLoading();
}

// public string get_Url() [instance] :117
uString* WebView::Url()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_Url()");
    return uPtr(uPtr(_iOSWebView)->URL())->AbsoluteString();
}

// public void set_Url(string value) [instance] :118
void WebView::Url(uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "set_Url(string)");
    LoadUrl(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :209
void WebView::add_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :209
void WebView::remove_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public void webViewDidCommitNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :234
void WebView::webViewDidCommitNavigation(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "webViewDidCommitNavigation(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation)");

    if (::g::Uno::Delegate::op_Inequality(BeginLoading1, NULL))
        uPtr(BeginLoading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void webViewDidFailNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) [instance] :249
void WebView::webViewDidFailNavigationWithError(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation, ::g::iOS::Foundation::NSError* error)
{
}

// public void webViewDidFailProvisionalNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) [instance] :230
void WebView::webViewDidFailProvisionalNavigationWithError(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation, ::g::iOS::Foundation::NSError* error)
{
}

// public void webViewDidFinishNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :240
void WebView::webViewDidFinishNavigation(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "webViewDidFinishNavigation(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation)");

    if (::g::Uno::Delegate::op_Inequality(UrlChanged1, NULL))
        uPtr(UrlChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (::g::Uno::Delegate::op_Inequality(PageLoaded1, NULL))
        uPtr(PageLoaded1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void webViewDidReceiveServerRedirectForProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :226
void WebView::webViewDidReceiveServerRedirectForProvisionalNavigation(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
}

// public void webViewDidStartProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :221
void WebView::webViewDidStartProvisionalNavigation(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "webViewDidStartProvisionalNavigation(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation)");
    StartProgressUpdate();
}

// public static Fuse.iOS.Controls.WebView Create(Fuse.Controls.WebView webViewHost) [static] :46
WebView* WebView::Create(::g::Fuse::Controls::WebView* webViewHost)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Create(Fuse.Controls.WebView)");
    ::g::iOS::WebKit::WKWebView* wkWebView = ::g::iOS::WebKit::WKWebView::New9();
    wkWebView->init();
    return WebView::New1(webViewHost, wkWebView);
}

// private WebView New(Fuse.Controls.WebView webViewHost, iOS.WebKit.WKWebView wkWebView) [static] :53
WebView* WebView::New1(::g::Fuse::Controls::WebView* webViewHost, ::g::iOS::WebKit::WKWebView* wkWebView)
{
    WebView* obj1 = (WebView*)uNew(WebView_typeof());
    obj1->ctor_2(webViewHost, wkWebView);
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::Controls
