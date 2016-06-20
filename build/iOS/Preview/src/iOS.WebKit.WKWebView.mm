// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE WKWebView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::WebKit::WKWebView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::WebKit::WKWebView_typeof()

#include <WebKit/WebKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSCoder.h>
#include <iOS.Foundation.NSURL.h>
#include <iOS.Foundation.NSURLRequest.h>
#include <iOS.WebKit.IWKNavigationDelegate.h>
#include <iOS.WebKit.WKNavigation.h>
#include <iOS.WebKit.WKWebView.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace WebKit{

// public sealed extern class WKWebView :89746
// {
static void WKWebView_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(20,
        new uFunction("canGoBack", NULL, (void*)WKWebView__canGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoBack", NULL, (void*)WKWebView__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("canGoForward", NULL, (void*)WKWebView__canGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, (void*)WKWebView__get_CanGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("estimatedProgress", NULL, (void*)WKWebView__estimatedProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_EstimatedProgress", NULL, (void*)WKWebView__get_EstimatedProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("goBack", NULL, (void*)WKWebView__goBack_fn, 0, false, ::g::iOS::WebKit::WKNavigation_typeof(), 0),
        new uFunction("goForward", NULL, (void*)WKWebView__goForward_fn, 0, false, ::g::iOS::WebKit::WKNavigation_typeof(), 0),
        new uFunction("isLoading", NULL, (void*)WKWebView__isLoading_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("loadHTMLStringBaseURL", NULL, (void*)WKWebView__loadHTMLStringBaseURL_fn, 0, false, ::g::iOS::WebKit::WKNavigation_typeof(), 2, ::g::Uno::String_typeof(), ::g::iOS::Foundation::NSURL_typeof()),
        new uFunction("get_Loading", NULL, (void*)WKWebView__get_Loading_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("loadRequest", NULL, (void*)WKWebView__loadRequest_fn, 0, false, ::g::iOS::WebKit::WKNavigation_typeof(), 1, ::g::iOS::Foundation::NSURLRequest_typeof()),
        new uFunction(".ctor", NULL, (void*)WKWebView__New9_fn, 0, true, WKWebView_typeof(), 0),
        new uFunction("reload", NULL, (void*)WKWebView__reload_fn, 0, false, ::g::iOS::WebKit::WKNavigation_typeof(), 0),
        new uFunction("setNavigationDelegate", NULL, (void*)WKWebView__setNavigationDelegate_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::WebKit::IWKNavigationDelegate_typeof()),
        new uFunction("stopLoading", NULL, (void*)WKWebView__stopLoading_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("title", NULL, (void*)WKWebView__title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Title", NULL, (void*)WKWebView__get_Title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("url", NULL, (void*)WKWebView__url_fn, 0, false, ::g::iOS::Foundation::NSURL_typeof(), 0),
        new uFunction("get_URL", NULL, (void*)WKWebView__get_URL_fn, 0, false, ::g::iOS::Foundation::NSURL_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::UIKit::UIView_type* WKWebView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WKWebView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.WebKit.WKWebView", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_build_ = WKWebView_build;
    type->fp_ctor_ = (void*)WKWebView__New9_fn;
    type->fp_initWithCoder = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::Foundation::NSCoder*))WKWebView__initWithCoder_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public WKWebView() :89749
void WKWebView__ctor_8_fn(WKWebView* __this)
{
    __this->ctor_8();
}

// public extern bool canGoBack() :89888
void WKWebView__canGoBack_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->canGoBack();
}

// public bool get_CanGoBack() :89805
void WKWebView__get_CanGoBack_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public extern bool canGoForward() :89891
void WKWebView__canGoForward_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->canGoForward();
}

// public bool get_CanGoForward() :89810
void WKWebView__get_CanGoForward_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public extern double estimatedProgress() :89882
void WKWebView__estimatedProgress_fn(WKWebView* __this, double* __retval)
{
    *__retval = __this->estimatedProgress();
}

// public double get_EstimatedProgress() :89795
void WKWebView__get_EstimatedProgress_fn(WKWebView* __this, double* __retval)
{
    *__retval = __this->EstimatedProgress();
}

// public extern iOS.WebKit.WKNavigation goBack() :89840
void WKWebView__goBack_fn(WKWebView* __this, ::g::iOS::WebKit::WKNavigation** __retval)
{
    *__retval = __this->goBack();
}

// public extern iOS.WebKit.WKNavigation goForward() :89843
void WKWebView__goForward_fn(WKWebView* __this, ::g::iOS::WebKit::WKNavigation** __retval)
{
    *__retval = __this->goForward();
}

// public override sealed extern void initWithCoder(iOS.Foundation.NSCoder coder) :89828
void WKWebView__initWithCoder_fn(WKWebView* __this, ::g::iOS::Foundation::NSCoder* coder_)
{
    uStackFrame __("iOS.WebKit.WKWebView", "initWithCoder(iOS.Foundation.NSCoder)");
    uObjC_DO_INIT(__this, @selector(initWithCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)coder_));
}

// public extern bool isLoading() :89879
void WKWebView__isLoading_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->isLoading();
}

// public extern iOS.WebKit.WKNavigation loadHTMLStringBaseURL(string string_, iOS.Foundation.NSURL baseURL) :89834
void WKWebView__loadHTMLStringBaseURL_fn(WKWebView* __this, uString* string__, ::g::iOS::Foundation::NSURL* baseURL_, ::g::iOS::WebKit::WKNavigation** __retval)
{
    *__retval = __this->loadHTMLStringBaseURL(string__, baseURL_);
}

// public bool get_Loading() :89790
void WKWebView__get_Loading_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->Loading();
}

// public extern iOS.WebKit.WKNavigation loadRequest(iOS.Foundation.NSURLRequest request) :89831
void WKWebView__loadRequest_fn(WKWebView* __this, ::g::iOS::Foundation::NSURLRequest* request_, ::g::iOS::WebKit::WKNavigation** __retval)
{
    *__retval = __this->loadRequest(request_);
}

// public WKWebView New() :89749
void WKWebView__New9_fn(WKWebView** __retval)
{
    *__retval = WKWebView::New9();
}

// public extern iOS.WebKit.WKNavigation reload() :89846
void WKWebView__reload_fn(WKWebView* __this, ::g::iOS::WebKit::WKNavigation** __retval)
{
    *__retval = __this->reload();
}

// public extern void setNavigationDelegate(iOS.WebKit.IWKNavigationDelegate navigationDelegate) :89861
void WKWebView__setNavigationDelegate_fn(WKWebView* __this, uObject* navigationDelegate_)
{
    __this->setNavigationDelegate(navigationDelegate_);
}

// public extern void stopLoading() :89852
void WKWebView__stopLoading_fn(WKWebView* __this)
{
    __this->stopLoading();
}

// public extern string title() :89873
void WKWebView__title_fn(WKWebView* __this, uString** __retval)
{
    *__retval = __this->title();
}

// public string get_Title() :89780
void WKWebView__get_Title_fn(WKWebView* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public extern iOS.Foundation.NSURL url() :89876
void WKWebView__url_fn(WKWebView* __this, ::g::iOS::Foundation::NSURL** __retval)
{
    *__retval = __this->url();
}

// public iOS.Foundation.NSURL get_URL() :89785
void WKWebView__get_URL_fn(WKWebView* __this, ::g::iOS::Foundation::NSURL** __retval)
{
    *__retval = __this->URL();
}

// public WKWebView() [instance] :89749
void WKWebView::ctor_8()
{
    uStackFrame __("iOS.WebKit.WKWebView", ".ctor()");
    ctor_6();
}

// public extern bool canGoBack() [instance] :89888
bool WKWebView::canGoBack()
{
    uStackFrame __("iOS.WebKit.WKWebView", "canGoBack()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(canGoBack));
    return (bool)__return;
}

// public bool get_CanGoBack() [instance] :89805
bool WKWebView::CanGoBack()
{
    uStackFrame __("iOS.WebKit.WKWebView", "get_CanGoBack()");
    return canGoBack();
}

// public extern bool canGoForward() [instance] :89891
bool WKWebView::canGoForward()
{
    uStackFrame __("iOS.WebKit.WKWebView", "canGoForward()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(canGoForward));
    return (bool)__return;
}

// public bool get_CanGoForward() [instance] :89810
bool WKWebView::CanGoForward()
{
    uStackFrame __("iOS.WebKit.WKWebView", "get_CanGoForward()");
    return canGoForward();
}

// public extern double estimatedProgress() [instance] :89882
double WKWebView::estimatedProgress()
{
    uStackFrame __("iOS.WebKit.WKWebView", "estimatedProgress()");
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, double, @selector(estimatedProgress));
    return __return;
}

// public double get_EstimatedProgress() [instance] :89795
double WKWebView::EstimatedProgress()
{
    uStackFrame __("iOS.WebKit.WKWebView", "get_EstimatedProgress()");
    return estimatedProgress();
}

// public extern iOS.WebKit.WKNavigation goBack() [instance] :89840
::g::iOS::WebKit::WKNavigation* WKWebView::goBack()
{
    uStackFrame __("iOS.WebKit.WKWebView", "goBack()");
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::WKNavigation*, @selector(goBack));
    return (::g::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::WebKit::WKNavigation_typeof());
}

// public extern iOS.WebKit.WKNavigation goForward() [instance] :89843
::g::iOS::WebKit::WKNavigation* WKWebView::goForward()
{
    uStackFrame __("iOS.WebKit.WKWebView", "goForward()");
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::WKNavigation*, @selector(goForward));
    return (::g::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::WebKit::WKNavigation_typeof());
}

// public extern bool isLoading() [instance] :89879
bool WKWebView::isLoading()
{
    uStackFrame __("iOS.WebKit.WKWebView", "isLoading()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isLoading));
    return (bool)__return;
}

// public extern iOS.WebKit.WKNavigation loadHTMLStringBaseURL(string string_, iOS.Foundation.NSURL baseURL) [instance] :89834
::g::iOS::WebKit::WKNavigation* WKWebView::loadHTMLStringBaseURL(uString* string__, ::g::iOS::Foundation::NSURL* baseURL_)
{
    uStackFrame __("iOS.WebKit.WKWebView", "loadHTMLStringBaseURL(string,iOS.Foundation.NSURL)");
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::WKNavigation*, @selector(loadHTMLString:baseURL:),
        uObjC::NativeString(string__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)baseURL_));
    return (::g::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::WebKit::WKNavigation_typeof());
}

// public bool get_Loading() [instance] :89790
bool WKWebView::Loading()
{
    uStackFrame __("iOS.WebKit.WKWebView", "get_Loading()");
    return isLoading();
}

// public extern iOS.WebKit.WKNavigation loadRequest(iOS.Foundation.NSURLRequest request) [instance] :89831
::g::iOS::WebKit::WKNavigation* WKWebView::loadRequest(::g::iOS::Foundation::NSURLRequest* request_)
{
    uStackFrame __("iOS.WebKit.WKWebView", "loadRequest(iOS.Foundation.NSURLRequest)");
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::WKNavigation*, @selector(loadRequest:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)request_));
    return (::g::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::WebKit::WKNavigation_typeof());
}

// public extern iOS.WebKit.WKNavigation reload() [instance] :89846
::g::iOS::WebKit::WKNavigation* WKWebView::reload()
{
    uStackFrame __("iOS.WebKit.WKWebView", "reload()");
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::WKNavigation*, @selector(reload));
    return (::g::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::WebKit::WKNavigation_typeof());
}

// public extern void setNavigationDelegate(iOS.WebKit.IWKNavigationDelegate navigationDelegate) [instance] :89861
void WKWebView::setNavigationDelegate(uObject* navigationDelegate_)
{
    uStackFrame __("iOS.WebKit.WKWebView", "setNavigationDelegate(iOS.WebKit.IWKNavigationDelegate)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setNavigationDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)navigationDelegate_, ::g::iOS::WebKit::IWKNavigationDelegate_typeof()));
}

// public extern void stopLoading() [instance] :89852
void WKWebView::stopLoading()
{
    uStackFrame __("iOS.WebKit.WKWebView", "stopLoading()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(stopLoading));
}

// public extern string title() [instance] :89873
uString* WKWebView::title()
{
    uStackFrame __("iOS.WebKit.WKWebView", "title()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(title));
    return uObjC::UnoString(__return);
}

// public string get_Title() [instance] :89780
uString* WKWebView::Title()
{
    uStackFrame __("iOS.WebKit.WKWebView", "get_Title()");
    return title();
}

// public extern iOS.Foundation.NSURL url() [instance] :89876
::g::iOS::Foundation::NSURL* WKWebView::url()
{
    uStackFrame __("iOS.WebKit.WKWebView", "url()");
    ::NSURL* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSURL*, @selector(URL));
    return (::g::iOS::Foundation::NSURL*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSURL_typeof());
}

// public iOS.Foundation.NSURL get_URL() [instance] :89785
::g::iOS::Foundation::NSURL* WKWebView::URL()
{
    uStackFrame __("iOS.WebKit.WKWebView", "get_URL()");
    return url();
}

// public WKWebView New() [static] :89749
WKWebView* WKWebView::New9()
{
    WKWebView* obj1 = (WKWebView*)uNew(WKWebView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::iOS::WebKit
