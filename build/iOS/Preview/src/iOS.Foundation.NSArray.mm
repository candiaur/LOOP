// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSArray
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSArray*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSArray_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSKeyValueObservingOptions.h>
#include <ObjC.ID.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#include <Uno.ULong.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSArray :35375
// {
static void NSArray_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSArray_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSArray_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(3,
        new uFunction("count", NULL, (void*)NSArray__count_fn, 0, false, ::g::Uno::ULong_typeof(), 0),
        new uFunction("get_Count", NULL, (void*)NSArray__get_Count_fn, 0, false, ::g::Uno::ULong_typeof(), 0),
        new uFunction("objectAtIndex", NULL, (void*)NSArray__objectAtIndex_fn, 0, false, ::g::ObjC::ID_typeof(), 1, ::g::Uno::ULong_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

NSArray_type* NSArray_typeof()
{
    static uSStrong<NSArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSArray);
    options.TypeSize = sizeof(NSArray_type);
    type = (NSArray_type*)uClassType::New("iOS.Foundation.NSArray", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSArray_build;
    type->fp_addObserverForKeyPathOptionsContext = (void(*)(::g::iOS::Foundation::NSObject*, ::g::iOS::Foundation::NSObject*, uString*, uint32_t*, void**))NSArray__addObserverForKeyPathOptionsContext_fn;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSArray__init_fn;
    type->fp_removeObserverForKeyPath = (void(*)(::g::iOS::Foundation::NSObject*, ::g::iOS::Foundation::NSObject*, uString*))NSArray__removeObserverForKeyPath_fn;
    type->fp_removeObserverForKeyPathContext = (void(*)(::g::iOS::Foundation::NSObject*, ::g::iOS::Foundation::NSObject*, uString*, void**))NSArray__removeObserverForKeyPathContext_fn;
    type->fp_setValueForKey = (void(*)(::g::iOS::Foundation::NSObject*, ::id*, uString*))NSArray__setValueForKey_fn;
    type->fp_valueForKey = (void(*)(::g::iOS::Foundation::NSObject*, uString*, ::id*))NSArray__valueForKey_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public NSArray() :35378
void NSArray__ctor_4_fn(NSArray* __this)
{
    __this->ctor_4();
}

// public override sealed extern void addObserverForKeyPathOptionsContext(iOS.Foundation.NSObject observer, string keyPath, iOS.Foundation.NSKeyValueObservingOptions options, Uno.IntPtr context) :35438
void NSArray__addObserverForKeyPathOptionsContext_fn(NSArray* __this, ::g::iOS::Foundation::NSObject* observer_, uString* keyPath_, uint32_t* options_, void** context_)
{
    uStackFrame __("iOS.Foundation.NSArray", "addObserverForKeyPathOptionsContext(iOS.Foundation.NSObject,string,iOS.Foundation.NSKeyValueObservingOptions,Uno.IntPtr)");
    uint32_t options__ = *options_;
    void* context__ = *context_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(addObserver:forKeyPath:options:context:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)observer_),
        uObjC::NativeString(keyPath_),
        ::NSKeyValueObservingOptions(options__),
        (void*)context__);
}

// public extern ulong count() :35420
void NSArray__count_fn(NSArray* __this, uint64_t* __retval)
{
    *__retval = __this->count();
}

// public ulong get_Count() :35387
void NSArray__get_Count_fn(NSArray* __this, uint64_t* __retval)
{
    *__retval = __this->Count();
}

// public override extern void init() :35414
void NSArray__init_fn(NSArray* __this)
{
    uStackFrame __("iOS.Foundation.NSArray", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}

// public extern ObjC.ID objectAtIndex(ulong index) :35411
void NSArray__objectAtIndex_fn(NSArray* __this, uint64_t* index_, ::id* __retval)
{
    *__retval = __this->objectAtIndex(*index_);
}

// public override sealed extern void removeObserverForKeyPath(iOS.Foundation.NSObject observer, string keyPath) :35444
void NSArray__removeObserverForKeyPath_fn(NSArray* __this, ::g::iOS::Foundation::NSObject* observer_, uString* keyPath_)
{
    uStackFrame __("iOS.Foundation.NSArray", "removeObserverForKeyPath(iOS.Foundation.NSObject,string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(removeObserver:forKeyPath:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)observer_),
        uObjC::NativeString(keyPath_));
}

// public override sealed extern void removeObserverForKeyPathContext(iOS.Foundation.NSObject observer, string keyPath, Uno.IntPtr context) :35441
void NSArray__removeObserverForKeyPathContext_fn(NSArray* __this, ::g::iOS::Foundation::NSObject* observer_, uString* keyPath_, void** context_)
{
    uStackFrame __("iOS.Foundation.NSArray", "removeObserverForKeyPathContext(iOS.Foundation.NSObject,string,Uno.IntPtr)");
    void* context__ = *context_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(removeObserver:forKeyPath:context:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)observer_),
        uObjC::NativeString(keyPath_),
        (void*)context__);
}

// public override sealed extern void setValueForKey(ObjC.ID value, string key) :35450
void NSArray__setValueForKey_fn(NSArray* __this, ::id* value_, uString* key_)
{
    uStackFrame __("iOS.Foundation.NSArray", "setValueForKey(ObjC.ID,string)");
    ::id value__ = *value_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setValue:forKey:),
        (::id)value__,
        uObjC::NativeString(key_));
}

// public override sealed extern ObjC.ID valueForKey(string key) :35447
void NSArray__valueForKey_fn(NSArray* __this, uString* key_, ::id* __retval)
{
    uStackFrame __("iOS.Foundation.NSArray", "valueForKey(string)");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::id, @selector(valueForKey:),
        uObjC::NativeString(key_));
    return *__retval = (::id)__return, void();
}

// public NSArray() [instance] :35378
void NSArray::ctor_4()
{
    uStackFrame __("iOS.Foundation.NSArray", ".ctor()");
    ctor_2();
}

// public extern ulong count() [instance] :35420
uint64_t NSArray::count()
{
    uStackFrame __("iOS.Foundation.NSArray", "count()");
    unsigned long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, unsigned long, @selector(count));
    return (uint64_t)__return;
}

// public ulong get_Count() [instance] :35387
uint64_t NSArray::Count()
{
    uStackFrame __("iOS.Foundation.NSArray", "get_Count()");
    return count();
}

// public extern ObjC.ID objectAtIndex(ulong index) [instance] :35411
::id NSArray::objectAtIndex(uint64_t index_)
{
    uStackFrame __("iOS.Foundation.NSArray", "objectAtIndex(ulong)");
    uint64_t index__ = index_;
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(objectAtIndex:),
        (unsigned long)index__);
    return (::id)__return;
}
// }

}}} // ::g::iOS::Foundation
