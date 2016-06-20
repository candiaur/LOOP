// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSSet
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSSet*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSSet_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSKeyValueObservingOptions.h>
#include <iOS.Foundation.NSSet.h>
#include <ObjC.ID.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSSet :50339
// {
static void NSSet_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSSet_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSSet_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }
}

NSSet_type* NSSet_typeof()
{
    static uSStrong<NSSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSSet);
    options.TypeSize = sizeof(NSSet_type);
    type = (NSSet_type*)uClassType::New("iOS.Foundation.NSSet", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSSet_build;
    type->fp_addObserverForKeyPathOptionsContext = (void(*)(::g::iOS::Foundation::NSObject*, ::g::iOS::Foundation::NSObject*, uString*, uint32_t*, void**))NSSet__addObserverForKeyPathOptionsContext_fn;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSSet__init_fn;
    type->fp_removeObserverForKeyPath = (void(*)(::g::iOS::Foundation::NSObject*, ::g::iOS::Foundation::NSObject*, uString*))NSSet__removeObserverForKeyPath_fn;
    type->fp_removeObserverForKeyPathContext = (void(*)(::g::iOS::Foundation::NSObject*, ::g::iOS::Foundation::NSObject*, uString*, void**))NSSet__removeObserverForKeyPathContext_fn;
    type->fp_setValueForKey = (void(*)(::g::iOS::Foundation::NSObject*, ::id*, uString*))NSSet__setValueForKey_fn;
    type->fp_valueForKey = (void(*)(::g::iOS::Foundation::NSObject*, uString*, ::id*))NSSet__valueForKey_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public override sealed extern void addObserverForKeyPathOptionsContext(iOS.Foundation.NSObject observer, string keyPath, iOS.Foundation.NSKeyValueObservingOptions options, Uno.IntPtr context) :50386
void NSSet__addObserverForKeyPathOptionsContext_fn(NSSet* __this, ::g::iOS::Foundation::NSObject* observer_, uString* keyPath_, uint32_t* options_, void** context_)
{
    uStackFrame __("iOS.Foundation.NSSet", "addObserverForKeyPathOptionsContext(iOS.Foundation.NSObject,string,iOS.Foundation.NSKeyValueObservingOptions,Uno.IntPtr)");
    uint32_t options__ = *options_;
    void* context__ = *context_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(addObserver:forKeyPath:options:context:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)observer_),
        uObjC::NativeString(keyPath_),
        ::NSKeyValueObservingOptions(options__),
        (void*)context__);
}

// public override extern void init() :50371
void NSSet__init_fn(NSSet* __this)
{
    uStackFrame __("iOS.Foundation.NSSet", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}

// public override sealed extern void removeObserverForKeyPath(iOS.Foundation.NSObject observer, string keyPath) :50392
void NSSet__removeObserverForKeyPath_fn(NSSet* __this, ::g::iOS::Foundation::NSObject* observer_, uString* keyPath_)
{
    uStackFrame __("iOS.Foundation.NSSet", "removeObserverForKeyPath(iOS.Foundation.NSObject,string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(removeObserver:forKeyPath:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)observer_),
        uObjC::NativeString(keyPath_));
}

// public override sealed extern void removeObserverForKeyPathContext(iOS.Foundation.NSObject observer, string keyPath, Uno.IntPtr context) :50389
void NSSet__removeObserverForKeyPathContext_fn(NSSet* __this, ::g::iOS::Foundation::NSObject* observer_, uString* keyPath_, void** context_)
{
    uStackFrame __("iOS.Foundation.NSSet", "removeObserverForKeyPathContext(iOS.Foundation.NSObject,string,Uno.IntPtr)");
    void* context__ = *context_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(removeObserver:forKeyPath:context:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)observer_),
        uObjC::NativeString(keyPath_),
        (void*)context__);
}

// public override sealed extern void setValueForKey(ObjC.ID value, string key) :50398
void NSSet__setValueForKey_fn(NSSet* __this, ::id* value_, uString* key_)
{
    uStackFrame __("iOS.Foundation.NSSet", "setValueForKey(ObjC.ID,string)");
    ::id value__ = *value_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setValue:forKey:),
        (::id)value__,
        uObjC::NativeString(key_));
}

// public override sealed extern ObjC.ID valueForKey(string key) :50395
void NSSet__valueForKey_fn(NSSet* __this, uString* key_, ::id* __retval)
{
    uStackFrame __("iOS.Foundation.NSSet", "valueForKey(string)");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::id, @selector(valueForKey:),
        uObjC::NativeString(key_));
    return *__retval = (::id)__return, void();
}
// }

}}} // ::g::iOS::Foundation
