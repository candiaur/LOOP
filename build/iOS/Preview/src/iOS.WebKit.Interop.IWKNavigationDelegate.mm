// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE WKNavigationDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::WebKit::IWKNavigationDelegate_typeof()

#include <WebKit/WebKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSError.h>
#include <iOS.WebKit.Interop.IWKNavigationDelegate.h>
#include <iOS.WebKit.WKNavigation.h>
#include <iOS.WebKit.WKWebView.h>

namespace g{
namespace iOS{
namespace WebKit{
namespace Interop{

// public sealed extern class IWKNavigationDelegate :8972
// {
static void IWKNavigationDelegate_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IWKNavigationDelegate_type, interface0),
        ::g::iOS::WebKit::IWKNavigationDelegate_typeof(), offsetof(IWKNavigationDelegate_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(6,
        new uFunction("webViewDidCommitNavigation", NULL, (void*)IWKNavigationDelegate__webViewDidCommitNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()),
        new uFunction("webViewDidFailNavigationWithError", NULL, (void*)IWKNavigationDelegate__webViewDidFailNavigationWithError_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof(), ::g::iOS::Foundation::NSError_typeof()),
        new uFunction("webViewDidFailProvisionalNavigationWithError", NULL, (void*)IWKNavigationDelegate__webViewDidFailProvisionalNavigationWithError_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof(), ::g::iOS::Foundation::NSError_typeof()),
        new uFunction("webViewDidFinishNavigation", NULL, (void*)IWKNavigationDelegate__webViewDidFinishNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()),
        new uFunction("webViewDidReceiveServerRedirectForProvisionalNavigation", NULL, (void*)IWKNavigationDelegate__webViewDidReceiveServerRedirectForProvisionalNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()),
        new uFunction("webViewDidStartProvisionalNavigation", NULL, (void*)IWKNavigationDelegate__webViewDidStartProvisionalNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

IWKNavigationDelegate_type* IWKNavigationDelegate_typeof()
{
    static uSStrong<IWKNavigationDelegate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IWKNavigationDelegate);
    options.TypeSize = sizeof(IWKNavigationDelegate_type);
    type = (IWKNavigationDelegate_type*)uClassType::New("iOS.WebKit.Interop.IWKNavigationDelegate", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = IWKNavigationDelegate_build;
    type->interface1.fp_webViewDidStartProvisionalNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))IWKNavigationDelegate__webViewDidStartProvisionalNavigation_fn;
    type->interface1.fp_webViewDidReceiveServerRedirectForProvisionalNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))IWKNavigationDelegate__webViewDidReceiveServerRedirectForProvisionalNavigation_fn;
    type->interface1.fp_webViewDidFailProvisionalNavigationWithError = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*, ::g::iOS::Foundation::NSError*))IWKNavigationDelegate__webViewDidFailProvisionalNavigationWithError_fn;
    type->interface1.fp_webViewDidCommitNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))IWKNavigationDelegate__webViewDidCommitNavigation_fn;
    type->interface1.fp_webViewDidFinishNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))IWKNavigationDelegate__webViewDidFinishNavigation_fn;
    type->interface1.fp_webViewDidFailNavigationWithError = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*, ::g::iOS::Foundation::NSError*))IWKNavigationDelegate__webViewDidFailNavigationWithError_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern void webViewDidCommitNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :8990
void IWKNavigationDelegate__webViewDidCommitNavigation_fn(IWKNavigationDelegate* __this, ::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_)
{
    __this->webViewDidCommitNavigation(webView_, navigation_);
}

// public extern void webViewDidFailNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) :8996
void IWKNavigationDelegate__webViewDidFailNavigationWithError_fn(IWKNavigationDelegate* __this, ::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_, ::g::iOS::Foundation::NSError* error_)
{
    __this->webViewDidFailNavigationWithError(webView_, navigation_, error_);
}

// public extern void webViewDidFailProvisionalNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) :8987
void IWKNavigationDelegate__webViewDidFailProvisionalNavigationWithError_fn(IWKNavigationDelegate* __this, ::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_, ::g::iOS::Foundation::NSError* error_)
{
    __this->webViewDidFailProvisionalNavigationWithError(webView_, navigation_, error_);
}

// public extern void webViewDidFinishNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :8993
void IWKNavigationDelegate__webViewDidFinishNavigation_fn(IWKNavigationDelegate* __this, ::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_)
{
    __this->webViewDidFinishNavigation(webView_, navigation_);
}

// public extern void webViewDidReceiveServerRedirectForProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :8984
void IWKNavigationDelegate__webViewDidReceiveServerRedirectForProvisionalNavigation_fn(IWKNavigationDelegate* __this, ::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_)
{
    __this->webViewDidReceiveServerRedirectForProvisionalNavigation(webView_, navigation_);
}

// public extern void webViewDidStartProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :8981
void IWKNavigationDelegate__webViewDidStartProvisionalNavigation_fn(IWKNavigationDelegate* __this, ::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_)
{
    __this->webViewDidStartProvisionalNavigation(webView_, navigation_);
}

// public extern void webViewDidCommitNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :8990
void IWKNavigationDelegate::webViewDidCommitNavigation(::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_)
{
    uStackFrame __("iOS.WebKit.Interop.IWKNavigationDelegate", "webViewDidCommitNavigation(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(webView:didCommitNavigation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)webView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)navigation_));
}

// public extern void webViewDidFailNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) [instance] :8996
void IWKNavigationDelegate::webViewDidFailNavigationWithError(::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_, ::g::iOS::Foundation::NSError* error_)
{
    uStackFrame __("iOS.WebKit.Interop.IWKNavigationDelegate", "webViewDidFailNavigationWithError(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation,iOS.Foundation.NSError)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(webView:didFailNavigation:withError:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)webView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)navigation_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)error_));
}

// public extern void webViewDidFailProvisionalNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) [instance] :8987
void IWKNavigationDelegate::webViewDidFailProvisionalNavigationWithError(::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_, ::g::iOS::Foundation::NSError* error_)
{
    uStackFrame __("iOS.WebKit.Interop.IWKNavigationDelegate", "webViewDidFailProvisionalNavigationWithError(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation,iOS.Foundation.NSError)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(webView:didFailProvisionalNavigation:withError:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)webView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)navigation_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)error_));
}

// public extern void webViewDidFinishNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :8993
void IWKNavigationDelegate::webViewDidFinishNavigation(::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_)
{
    uStackFrame __("iOS.WebKit.Interop.IWKNavigationDelegate", "webViewDidFinishNavigation(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(webView:didFinishNavigation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)webView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)navigation_));
}

// public extern void webViewDidReceiveServerRedirectForProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :8984
void IWKNavigationDelegate::webViewDidReceiveServerRedirectForProvisionalNavigation(::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_)
{
    uStackFrame __("iOS.WebKit.Interop.IWKNavigationDelegate", "webViewDidReceiveServerRedirectForProvisionalNavigation(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(webView:didReceiveServerRedirectForProvisionalNavigation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)webView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)navigation_));
}

// public extern void webViewDidStartProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :8981
void IWKNavigationDelegate::webViewDidStartProvisionalNavigation(::g::iOS::WebKit::WKWebView* webView_, ::g::iOS::WebKit::WKNavigation* navigation_)
{
    uStackFrame __("iOS.WebKit.Interop.IWKNavigationDelegate", "webViewDidStartProvisionalNavigation(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(webView:didStartProvisionalNavigation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)webView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)navigation_));
}
// }

}}}} // ::g::iOS::WebKit::Interop
