// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/UIControlEvents/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIControlCallback
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::Fuse::iOS::Bindings::UIControlCallback*
#define uObjC_UNO_TYPE_OBJECT ::g::Fuse::iOS::Bindings::UIControlCallback_typeof()

#include "Implementation/UIControlCallback.h"
#include <uObjC.Wrapper.h>
#include <Fuse.iOS.Bindings.UIControlCallback.h>
#include <ObjC.ID.h>
#include <ObjC.Selector.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal extern class UIControlCallback :77
// {
static void UIControlCallback_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIControlCallback_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

UIControlCallback_type* UIControlCallback_typeof()
{
    static uSStrong<UIControlCallback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIControlCallback);
    options.TypeSize = sizeof(UIControlCallback_type);
    type = (UIControlCallback_type*)uClassType::New("Fuse.iOS.Bindings.UIControlCallback", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = UIControlCallback_build;
    type->fp_ctor_ = (void*)UIControlCallback__New5_fn;
    type->fp_callbackForEvent = UIControlCallback__callbackForEvent_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public UIControlCallback() :80
void UIControlCallback__ctor_4_fn(UIControlCallback* __this)
{
    __this->ctor_4();
}

// public UIControlCallback(ObjC.ID __id) :82
void UIControlCallback__ctor_5_fn(UIControlCallback* __this, ::id* __id1)
{
    __this->ctor_5(*__id1);
}

// public virtual extern void callbackForEvent(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) :90
void UIControlCallback__callbackForEvent_fn(UIControlCallback* __this, ::g::iOS::Foundation::NSObject* sender_, ::g::iOS::Foundation::NSObject* theEvent_)
{
    uStackFrame __("Fuse.iOS.Bindings.UIControlCallback", "callbackForEvent(iOS.Foundation.NSObject,iOS.Foundation.NSObject)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(callback:forEvent:),
        uObjC::Lifetime::GetNativeHandle((uObject *)sender_),
        uObjC::Lifetime::GetNativeHandle((uObject *)theEvent_));
}

// public extern ObjC.Selector callbackSelector() :95
void UIControlCallback__callbackSelector_fn(UIControlCallback* __this, uObjC::Selector* __retval)
{
    *__retval = __this->callbackSelector();
}

// public ObjC.Selector get_CallbackSelector() :86
void UIControlCallback__get_CallbackSelector_fn(UIControlCallback* __this, uObjC::Selector* __retval)
{
    *__retval = __this->CallbackSelector();
}

// public UIControlCallback New() :80
void UIControlCallback__New5_fn(UIControlCallback** __retval)
{
    *__retval = UIControlCallback::New5();
}

// public UIControlCallback New(ObjC.ID __id) :82
void UIControlCallback__New6_fn(::id* __id1, UIControlCallback** __retval)
{
    *__retval = UIControlCallback::New6(*__id1);
}

// public UIControlCallback() [instance] :80
void UIControlCallback::ctor_4()
{
    uStackFrame __("Fuse.iOS.Bindings.UIControlCallback", ".ctor()");
    ctor_2();
}

// public UIControlCallback(ObjC.ID __id) [instance] :82
void UIControlCallback::ctor_5(::id __id1)
{
    uStackFrame __("Fuse.iOS.Bindings.UIControlCallback", ".ctor(ObjC.ID)");
    ctor_3(__id1);
}

// public extern ObjC.Selector callbackSelector() [instance] :95
uObjC::Selector UIControlCallback::callbackSelector()
{
    uStackFrame __("Fuse.iOS.Bindings.UIControlCallback", "callbackSelector()");
    uObjC::Selector __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, uObjC::Selector, @selector(callbackSelector));
    return (uObjC::Selector)__return;
}

// public ObjC.Selector get_CallbackSelector() [instance] :86
uObjC::Selector UIControlCallback::CallbackSelector()
{
    uStackFrame __("Fuse.iOS.Bindings.UIControlCallback", "get_CallbackSelector()");
    return callbackSelector();
}

// public UIControlCallback New() [static] :80
UIControlCallback* UIControlCallback::New5()
{
    UIControlCallback* obj1 = (UIControlCallback*)uNew(UIControlCallback_typeof());
    obj1->ctor_4();
    return obj1;
}

// public UIControlCallback New(ObjC.ID __id) [static] :82
UIControlCallback* UIControlCallback::New6(::id __id1)
{
    UIControlCallback* obj2 = (UIControlCallback*)uNew(UIControlCallback_typeof());
    obj2->ctor_5(__id1);
    return obj2;
}
// }

}}}} // ::g::Fuse::iOS::Bindings
