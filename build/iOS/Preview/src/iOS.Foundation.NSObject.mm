// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSObject
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSObject_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSCoder.h>
#include <iOS.Foundation.NSDictionary.h>
#include <iOS.Foundation.NSError.h>
#include <iOS.Foundation.NSFileManager.h>
#include <iOS.Foundation.NSIndexSet.h>
#include <iOS.Foundation.NSInvocation.h>
#include <iOS.Foundation.NSKeyedArchiver.h>
#include <iOS.Foundation.NSKeyValueChange.h>
#include <iOS.Foundation.NSKeyValueObservingOptions.h>
#include <iOS.Foundation.NSKeyValueSetMutationKind.h>
#include <iOS.Foundation.NSMethodSignature.h>
#include <iOS.Foundation.NSMutableArray.h>
#include <iOS.Foundation.NSMutableOrderedSet.h>
#include <iOS.Foundation.NSMutableSet.h>
#include <iOS.Foundation.NSObject.h>
#include <iOS.Foundation.NSSet.h>
#include <iOS.Foundation.NSThread.h>
#include <ObjC.Class.h>
#include <ObjC.ID.h>
#include <ObjC.Protocol.h>
#include <ObjC.Selector.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#include <Uno.ULong.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSObject :47420
// {
static void NSObject_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSObject_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(82,
        new uFunction("_accessInstanceVariablesDirectly", NULL, (void*)NSObject___accessInstanceVariablesDirectly_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("_alloc", NULL, (void*)NSObject___alloc_fn, 0, true, ::g::ObjC::ID_typeof(), 0),
        new uFunction("_automaticallyNotifiesObserversForKey", NULL, (void*)NSObject___automaticallyNotifiesObserversForKey_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("_cancelPreviousPerformRequestsWithTarget", NULL, (void*)NSObject___cancelPreviousPerformRequestsWithTarget_fn, 0, true, uVoid_typeof(), 1, ::g::ObjC::ID_typeof()),
        new uFunction("_cancelPreviousPerformRequestsWithTargetSelectorObject", NULL, (void*)NSObject___cancelPreviousPerformRequestsWithTargetSelectorObject_fn, 0, true, uVoid_typeof(), 3, ::g::ObjC::ID_typeof(), ::g::ObjC::Selector_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("_class", NULL, (void*)NSObject___class_fn, 0, true, ::g::ObjC::Class_typeof(), 0),
        new uFunction("_classFallbacksForKeyedArchiver", NULL, (void*)NSObject___classFallbacksForKeyedArchiver_fn, 0, true, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("_classForKeyedUnarchiver", NULL, (void*)NSObject___classForKeyedUnarchiver_fn, 0, true, ::g::ObjC::Class_typeof(), 0),
        new uFunction("_conformsToProtocol", NULL, (void*)NSObject___conformsToProtocol_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::ObjC::Protocol_typeof()),
        new uFunction("_debugDescription", NULL, (void*)NSObject___debugDescription_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("_description", NULL, (void*)NSObject___description_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("_hash", NULL, (void*)NSObject___hash_fn, 0, true, ::g::Uno::ULong_typeof(), 0),
        new uFunction("_instanceMethodSignatureForSelector", NULL, (void*)NSObject___instanceMethodSignatureForSelector_fn, 0, true, ::g::iOS::Foundation::NSMethodSignature_typeof(), 1, ::g::ObjC::Selector_typeof()),
        new uFunction("_instancesRespondToSelector", NULL, (void*)NSObject___instancesRespondToSelector_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::ObjC::Selector_typeof()),
        new uFunction("_isSubclassOfClass", NULL, (void*)NSObject___isSubclassOfClass_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::ObjC::Class_typeof()),
        new uFunction("_keyPathsForValuesAffectingValueForKey", NULL, (void*)NSObject___keyPathsForValuesAffectingValueForKey_fn, 0, true, ::g::iOS::Foundation::NSSet_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("_new", NULL, (void*)NSObject___new_fn, 0, true, ::g::ObjC::ID_typeof(), 0),
        new uFunction("_resolveClassMethod", NULL, (void*)NSObject___resolveClassMethod_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::ObjC::Selector_typeof()),
        new uFunction("_resolveInstanceMethod", NULL, (void*)NSObject___resolveInstanceMethod_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::ObjC::Selector_typeof()),
        new uFunction("_setVersion", NULL, (void*)NSObject___setVersion_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("_superclass", NULL, (void*)NSObject___superclass_fn, 0, true, ::g::ObjC::Class_typeof(), 0),
        new uFunction("_version", NULL, (void*)NSObject___version_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("addObserverForKeyPathOptionsContext", NULL, NULL, offsetof(NSObject_type, fp_addObserverForKeyPathOptionsContext), false, uVoid_typeof(), 4, NSObject_typeof(), ::g::Uno::String_typeof(), ::g::iOS::Foundation::NSKeyValueObservingOptions_typeof(), ::g::Uno::IntPtr_typeof()),
        new uFunction("allowsWeakReference", NULL, (void*)NSObject__allowsWeakReference_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("attemptRecoveryFromErrorOptionIndex", NULL, (void*)NSObject__attemptRecoveryFromErrorOptionIndex_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::iOS::Foundation::NSError_typeof(), ::g::Uno::ULong_typeof()),
        new uFunction("attemptRecoveryFromErrorOptionIndexDelegateDidRecoverSelectorContextInfo", NULL, (void*)NSObject__attemptRecoveryFromErrorOptionIndexDelegateDidRecoverSelectorContextInfo_fn, 0, false, uVoid_typeof(), 5, ::g::iOS::Foundation::NSError_typeof(), ::g::Uno::ULong_typeof(), ::g::ObjC::ID_typeof(), ::g::ObjC::Selector_typeof(), ::g::Uno::IntPtr_typeof()),
        new uFunction("autoContentAccessingProxy", NULL, (void*)NSObject__autoContentAccessingProxy_fn, 0, false, ::g::ObjC::ID_typeof(), 0),
        new uFunction("get_AutoContentAccessingProxy", NULL, (void*)NSObject__get_AutoContentAccessingProxy_fn, 0, false, ::g::ObjC::ID_typeof(), 0),
        new uFunction("awakeAfterUsingCoder", NULL, (void*)NSObject__awakeAfterUsingCoder_fn, 0, false, ::g::ObjC::ID_typeof(), 1, ::g::iOS::Foundation::NSCoder_typeof()),
        new uFunction("classForCoder", NULL, (void*)NSObject__classForCoder_fn, 0, false, ::g::ObjC::Class_typeof(), 0),
        new uFunction("get_ClassForCoder", NULL, (void*)NSObject__get_ClassForCoder_fn, 0, false, ::g::ObjC::Class_typeof(), 0),
        new uFunction("classForKeyedArchiver", NULL, (void*)NSObject__classForKeyedArchiver_fn, 0, false, ::g::ObjC::Class_typeof(), 0),
        new uFunction("get_ClassForKeyedArchiver", NULL, (void*)NSObject__get_ClassForKeyedArchiver_fn, 0, false, ::g::ObjC::Class_typeof(), 0),
        new uFunction("copy", NULL, (void*)NSObject__copy_fn, 0, false, ::g::ObjC::ID_typeof(), 0),
        new uFunction("dictionaryWithValuesForKeys", NULL, (void*)NSObject__dictionaryWithValuesForKeys_fn, 0, false, ::g::iOS::Foundation::NSDictionary_typeof(), 1, ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("didChangeValueForKey", NULL, (void*)NSObject__didChangeValueForKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("didChangeValueForKeyWithSetMutationUsingObjects", NULL, (void*)NSObject__didChangeValueForKeyWithSetMutationUsingObjects_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::String_typeof(), ::g::iOS::Foundation::NSKeyValueSetMutationKind_typeof(), ::g::iOS::Foundation::NSSet_typeof()),
        new uFunction("didChangeValuesAtIndexesForKey", NULL, (void*)NSObject__didChangeValuesAtIndexesForKey_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::Foundation::NSKeyValueChange_typeof(), ::g::iOS::Foundation::NSIndexSet_typeof(), ::g::Uno::String_typeof()),
        new uFunction("doesNotRecognizeSelector", NULL, (void*)NSObject__doesNotRecognizeSelector_fn, 0, false, uVoid_typeof(), 1, ::g::ObjC::Selector_typeof()),
        new uFunction("fileManagerShouldProceedAfterError", NULL, (void*)NSObject__fileManagerShouldProceedAfterError_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::iOS::Foundation::NSFileManager_typeof(), ::g::iOS::Foundation::NSDictionary_typeof()),
        new uFunction("fileManagerWillProcessPath", NULL, (void*)NSObject__fileManagerWillProcessPath_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::Foundation::NSFileManager_typeof(), ::g::Uno::String_typeof()),
        new uFunction("forwardingTargetForSelector", NULL, (void*)NSObject__forwardingTargetForSelector_fn, 0, false, ::g::ObjC::ID_typeof(), 1, ::g::ObjC::Selector_typeof()),
        new uFunction("forwardInvocation", NULL, (void*)NSObject__forwardInvocation_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSInvocation_typeof()),
        new uFunction("init", NULL, NULL, offsetof(NSObject_type, fp_init), false, uVoid_typeof(), 0),
        new uFunction("methodSignatureForSelector", NULL, (void*)NSObject__methodSignatureForSelector_fn, 0, false, ::g::iOS::Foundation::NSMethodSignature_typeof(), 1, ::g::ObjC::Selector_typeof()),
        new uFunction("mutableArrayValueForKey", NULL, (void*)NSObject__mutableArrayValueForKey_fn, 0, false, ::g::iOS::Foundation::NSMutableArray_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("mutableArrayValueForKeyPath", NULL, (void*)NSObject__mutableArrayValueForKeyPath_fn, 0, false, ::g::iOS::Foundation::NSMutableArray_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("mutableCopy", NULL, (void*)NSObject__mutableCopy_fn, 0, false, ::g::ObjC::ID_typeof(), 0),
        new uFunction("mutableOrderedSetValueForKey", NULL, (void*)NSObject__mutableOrderedSetValueForKey_fn, 0, false, ::g::iOS::Foundation::NSMutableOrderedSet_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("mutableOrderedSetValueForKeyPath", NULL, (void*)NSObject__mutableOrderedSetValueForKeyPath_fn, 0, false, ::g::iOS::Foundation::NSMutableOrderedSet_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("mutableSetValueForKey", NULL, (void*)NSObject__mutableSetValueForKey_fn, 0, false, ::g::iOS::Foundation::NSMutableSet_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("mutableSetValueForKeyPath", NULL, (void*)NSObject__mutableSetValueForKeyPath_fn, 0, false, ::g::iOS::Foundation::NSMutableSet_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)NSObject__New3_fn, 0, true, NSObject_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NSObject__New4_fn, 0, true, NSObject_typeof(), 1, ::g::ObjC::ID_typeof()),
        new uFunction("observationInfo", NULL, (void*)NSObject__observationInfo_fn, 0, false, ::g::Uno::IntPtr_typeof(), 0),
        new uFunction("get_ObservationInfo", NULL, (void*)NSObject__get_ObservationInfo_fn, 0, false, ::g::Uno::IntPtr_typeof(), 0),
        new uFunction("set_ObservationInfo", NULL, (void*)NSObject__set_ObservationInfo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IntPtr_typeof()),
        new uFunction("observeValueForKeyPathOfObjectChangeContext", NULL, (void*)NSObject__observeValueForKeyPathOfObjectChangeContext_fn, 0, false, uVoid_typeof(), 4, ::g::Uno::String_typeof(), ::g::ObjC::ID_typeof(), ::g::iOS::Foundation::NSDictionary_typeof(), ::g::Uno::IntPtr_typeof()),
        new uFunction("performSelectorInBackgroundWithObject", NULL, (void*)NSObject__performSelectorInBackgroundWithObject_fn, 0, false, uVoid_typeof(), 2, ::g::ObjC::Selector_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("performSelectorOnMainThreadWithObjectWaitUntilDone", NULL, (void*)NSObject__performSelectorOnMainThreadWithObjectWaitUntilDone_fn, 0, false, uVoid_typeof(), 3, ::g::ObjC::Selector_typeof(), ::g::ObjC::ID_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("performSelectorOnMainThreadWithObjectWaitUntilDoneModes", NULL, (void*)NSObject__performSelectorOnMainThreadWithObjectWaitUntilDoneModes_fn, 0, false, uVoid_typeof(), 4, ::g::ObjC::Selector_typeof(), ::g::ObjC::ID_typeof(), ::g::Uno::Bool_typeof(), ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("performSelectorOnThreadWithObjectWaitUntilDone", NULL, (void*)NSObject__performSelectorOnThreadWithObjectWaitUntilDone_fn, 0, false, uVoid_typeof(), 4, ::g::ObjC::Selector_typeof(), ::g::iOS::Foundation::NSThread_typeof(), ::g::ObjC::ID_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("performSelectorOnThreadWithObjectWaitUntilDoneModes", NULL, (void*)NSObject__performSelectorOnThreadWithObjectWaitUntilDoneModes_fn, 0, false, uVoid_typeof(), 5, ::g::ObjC::Selector_typeof(), ::g::iOS::Foundation::NSThread_typeof(), ::g::ObjC::ID_typeof(), ::g::Uno::Bool_typeof(), ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("performSelectorWithObjectAfterDelay", NULL, (void*)NSObject__performSelectorWithObjectAfterDelay_fn, 0, false, uVoid_typeof(), 3, ::g::ObjC::Selector_typeof(), ::g::ObjC::ID_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("performSelectorWithObjectAfterDelayInModes", NULL, (void*)NSObject__performSelectorWithObjectAfterDelayInModes_fn, 0, false, uVoid_typeof(), 4, ::g::ObjC::Selector_typeof(), ::g::ObjC::ID_typeof(), ::g::Uno::Double_typeof(), ::g::iOS::Foundation::NSArray_typeof()),
        new uFunction("removeObserverForKeyPath", NULL, NULL, offsetof(NSObject_type, fp_removeObserverForKeyPath), false, uVoid_typeof(), 2, NSObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("removeObserverForKeyPathContext", NULL, NULL, offsetof(NSObject_type, fp_removeObserverForKeyPathContext), false, uVoid_typeof(), 3, NSObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::IntPtr_typeof()),
        new uFunction("replacementObjectForCoder", NULL, (void*)NSObject__replacementObjectForCoder_fn, 0, false, ::g::ObjC::ID_typeof(), 1, ::g::iOS::Foundation::NSCoder_typeof()),
        new uFunction("replacementObjectForKeyedArchiver", NULL, (void*)NSObject__replacementObjectForKeyedArchiver_fn, 0, false, ::g::ObjC::ID_typeof(), 1, ::g::iOS::Foundation::NSKeyedArchiver_typeof()),
        new uFunction("retainWeakReference", NULL, (void*)NSObject__retainWeakReference_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("setNilValueForKey", NULL, (void*)NSObject__setNilValueForKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("setObservationInfo", NULL, (void*)NSObject__setObservationInfo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IntPtr_typeof()),
        new uFunction("setValueForKey", NULL, NULL, offsetof(NSObject_type, fp_setValueForKey), false, uVoid_typeof(), 2, ::g::ObjC::ID_typeof(), ::g::Uno::String_typeof()),
        new uFunction("setValueForKeyPath", NULL, (void*)NSObject__setValueForKeyPath_fn, 0, false, uVoid_typeof(), 2, ::g::ObjC::ID_typeof(), ::g::Uno::String_typeof()),
        new uFunction("setValueForUndefinedKey", NULL, (void*)NSObject__setValueForUndefinedKey_fn, 0, false, uVoid_typeof(), 2, ::g::ObjC::ID_typeof(), ::g::Uno::String_typeof()),
        new uFunction("setValuesForKeysWithDictionary", NULL, (void*)NSObject__setValuesForKeysWithDictionary_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSDictionary_typeof()),
        new uFunction("valueForKey", NULL, NULL, offsetof(NSObject_type, fp_valueForKey), false, ::g::ObjC::ID_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("valueForKeyPath", NULL, (void*)NSObject__valueForKeyPath_fn, 0, false, ::g::ObjC::ID_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("valueForUndefinedKey", NULL, (void*)NSObject__valueForUndefinedKey_fn, 0, false, ::g::ObjC::ID_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("willChangeValueForKey", NULL, (void*)NSObject__willChangeValueForKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("willChangeValueForKeyWithSetMutationUsingObjects", NULL, (void*)NSObject__willChangeValueForKeyWithSetMutationUsingObjects_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::String_typeof(), ::g::iOS::Foundation::NSKeyValueSetMutationKind_typeof(), ::g::iOS::Foundation::NSSet_typeof()),
        new uFunction("willChangeValuesAtIndexesForKey", NULL, (void*)NSObject__willChangeValuesAtIndexesForKey_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::Foundation::NSKeyValueChange_typeof(), ::g::iOS::Foundation::NSIndexSet_typeof(), ::g::Uno::String_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

NSObject_type* NSObject_typeof()
{
    static uSStrong<NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NSObject);
    options.TypeSize = sizeof(NSObject_type);
    type = (NSObject_type*)uClassType::New("iOS.Foundation.NSObject", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_build_ = NSObject_build;
    type->fp_ctor_ = (void*)NSObject__New3_fn;
    type->fp_addObserverForKeyPathOptionsContext = NSObject__addObserverForKeyPathOptionsContext_fn;
    type->fp_init = NSObject__init_fn;
    type->fp_removeObserverForKeyPath = NSObject__removeObserverForKeyPath_fn;
    type->fp_removeObserverForKeyPathContext = NSObject__removeObserverForKeyPathContext_fn;
    type->fp_setValueForKey = NSObject__setValueForKey_fn;
    type->fp_valueForKey = NSObject__valueForKey_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public NSObject() :47423
void NSObject__ctor_2_fn(NSObject* __this)
{
    __this->ctor_2();
}

// public NSObject(ObjC.ID __id) :47425
void NSObject__ctor_3_fn(NSObject* __this, ::id* __id1)
{
    __this->ctor_3(*__id1);
}

// public static extern bool _accessInstanceVariablesDirectly() :47599
void NSObject___accessInstanceVariablesDirectly_fn(bool* __retval)
{
    *__retval = NSObject::_accessInstanceVariablesDirectly();
}

// public static extern ObjC.ID _alloc() :47458
void NSObject___alloc_fn(::id* __retval)
{
    *__retval = NSObject::_alloc();
}

// public static extern bool _automaticallyNotifiesObserversForKey(string key) :47560
void NSObject___automaticallyNotifiesObserversForKey_fn(uString* key_, bool* __retval)
{
    *__retval = NSObject::_automaticallyNotifiesObserversForKey(key_);
}

// public static extern void _cancelPreviousPerformRequestsWithTarget(ObjC.ID aTarget) :47542
void NSObject___cancelPreviousPerformRequestsWithTarget_fn(::id* aTarget_)
{
    NSObject::_cancelPreviousPerformRequestsWithTarget(*aTarget_);
}

// public static extern void _cancelPreviousPerformRequestsWithTargetSelectorObject(ObjC.ID aTarget, ObjC.Selector aSelector, ObjC.ID anArgument) :47539
void NSObject___cancelPreviousPerformRequestsWithTargetSelectorObject_fn(::id* aTarget_, uObjC::Selector* aSelector_, ::id* anArgument_)
{
    NSObject::_cancelPreviousPerformRequestsWithTargetSelectorObject(*aTarget_, *aSelector_, *anArgument_);
}

// public static extern ObjC.Class _class() :47509
void NSObject___class_fn(::Class* __retval)
{
    *__retval = NSObject::_class();
}

// public static extern iOS.Foundation.NSArray _classFallbacksForKeyedArchiver() :47551
void NSObject___classFallbacksForKeyedArchiver_fn(::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = NSObject::_classFallbacksForKeyedArchiver();
}

// public static extern ObjC.Class _classForKeyedUnarchiver() :47545
void NSObject___classForKeyedUnarchiver_fn(::Class* __retval)
{
    *__retval = NSObject::_classForKeyedUnarchiver();
}

// public static extern bool _conformsToProtocol(ObjC.Protocol protocol) :47470
void NSObject___conformsToProtocol_fn(uObjC::Protocol* protocol_, bool* __retval)
{
    *__retval = NSObject::_conformsToProtocol(*protocol_);
}

// public static extern string _debugDescription() :47515
void NSObject___debugDescription_fn(uString** __retval)
{
    *__retval = NSObject::_debugDescription();
}

// public static extern string _description() :47512
void NSObject___description_fn(uString** __retval)
{
    *__retval = NSObject::_description();
}

// public static extern ulong _hash() :47503
void NSObject___hash_fn(uint64_t* __retval)
{
    *__retval = NSObject::_hash();
}

// public static extern iOS.Foundation.NSMethodSignature _instanceMethodSignatureForSelector(ObjC.Selector aSelector) :47485
void NSObject___instanceMethodSignatureForSelector_fn(uObjC::Selector* aSelector_, ::g::iOS::Foundation::NSMethodSignature** __retval)
{
    *__retval = NSObject::_instanceMethodSignatureForSelector(*aSelector_);
}

// public static extern bool _instancesRespondToSelector(ObjC.Selector aSelector) :47467
void NSObject___instancesRespondToSelector_fn(uObjC::Selector* aSelector_, bool* __retval)
{
    *__retval = NSObject::_instancesRespondToSelector(*aSelector_);
}

// public static extern bool _isSubclassOfClass(ObjC.Class aClass) :47494
void NSObject___isSubclassOfClass_fn(::Class* aClass_, bool* __retval)
{
    *__retval = NSObject::_isSubclassOfClass(*aClass_);
}

// public static extern iOS.Foundation.NSSet _keyPathsForValuesAffectingValueForKey(string key) :47557
void NSObject___keyPathsForValuesAffectingValueForKey_fn(uString* key_, ::g::iOS::Foundation::NSSet** __retval)
{
    *__retval = NSObject::_keyPathsForValuesAffectingValueForKey(key_);
}

// public static extern ObjC.ID _new() :47455
void NSObject___new_fn(::id* __retval)
{
    *__retval = NSObject::_new();
}

// public static extern bool _resolveClassMethod(ObjC.Selector sel) :47497
void NSObject___resolveClassMethod_fn(uObjC::Selector* sel_, bool* __retval)
{
    *__retval = NSObject::_resolveClassMethod(*sel_);
}

// public static extern bool _resolveInstanceMethod(ObjC.Selector sel) :47500
void NSObject___resolveInstanceMethod_fn(uObjC::Selector* sel_, bool* __retval)
{
    *__retval = NSObject::_resolveInstanceMethod(*sel_);
}

// public static extern void _setVersion(int aVersion) :47665
void NSObject___setVersion_fn(int* aVersion_)
{
    NSObject::_setVersion(*aVersion_);
}

// public static extern ObjC.Class _superclass() :47506
void NSObject___superclass_fn(::Class* __retval)
{
    *__retval = NSObject::_superclass();
}

// public static extern int _version() :47662
void NSObject___version_fn(int* __retval)
{
    *__retval = NSObject::_version();
}

// public virtual extern void addObserverForKeyPathOptionsContext(iOS.Foundation.NSObject observer, string keyPath, iOS.Foundation.NSKeyValueObservingOptions options, Uno.IntPtr context) :47587
void NSObject__addObserverForKeyPathOptionsContext_fn(NSObject* __this, NSObject* observer_, uString* keyPath_, uint32_t* options_, void** context_)
{
    uStackFrame __("iOS.Foundation.NSObject", "addObserverForKeyPathOptionsContext(iOS.Foundation.NSObject,string,iOS.Foundation.NSKeyValueObservingOptions,Uno.IntPtr)");
    uint32_t options__ = *options_;
    void* context__ = *context_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(addObserver:forKeyPath:options:context:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)observer_),
        uObjC::NativeString(keyPath_),
        ::NSKeyValueObservingOptions(options__),
        (void*)context__);
}

// public extern bool allowsWeakReference() :47488
void NSObject__allowsWeakReference_fn(NSObject* __this, bool* __retval)
{
    *__retval = __this->allowsWeakReference();
}

// public extern bool attemptRecoveryFromErrorOptionIndex(iOS.Foundation.NSError error, ulong recoveryOptionIndex) :47656
void NSObject__attemptRecoveryFromErrorOptionIndex_fn(NSObject* __this, ::g::iOS::Foundation::NSError* error_, uint64_t* recoveryOptionIndex_, bool* __retval)
{
    *__retval = __this->attemptRecoveryFromErrorOptionIndex(error_, *recoveryOptionIndex_);
}

// public extern void attemptRecoveryFromErrorOptionIndexDelegateDidRecoverSelectorContextInfo(iOS.Foundation.NSError error, ulong recoveryOptionIndex, ObjC.ID delegate_, ObjC.Selector didRecoverSelector, Uno.IntPtr contextInfo) :47653
void NSObject__attemptRecoveryFromErrorOptionIndexDelegateDidRecoverSelectorContextInfo_fn(NSObject* __this, ::g::iOS::Foundation::NSError* error_, uint64_t* recoveryOptionIndex_, ::id* delegate__, uObjC::Selector* didRecoverSelector_, void** contextInfo_)
{
    __this->attemptRecoveryFromErrorOptionIndexDelegateDidRecoverSelectorContextInfo(error_, *recoveryOptionIndex_, *delegate__, *didRecoverSelector_, *contextInfo_);
}

// public extern ObjC.ID autoContentAccessingProxy() :47659
void NSObject__autoContentAccessingProxy_fn(NSObject* __this, ::id* __retval)
{
    *__retval = __this->autoContentAccessingProxy();
}

// public ObjC.ID get_AutoContentAccessingProxy() :47443
void NSObject__get_AutoContentAccessingProxy_fn(NSObject* __this, ::id* __retval)
{
    *__retval = __this->AutoContentAccessingProxy();
}

// public extern ObjC.ID awakeAfterUsingCoder(iOS.Foundation.NSCoder aDecoder) :47671
void NSObject__awakeAfterUsingCoder_fn(NSObject* __this, ::g::iOS::Foundation::NSCoder* aDecoder_, ::id* __retval)
{
    *__retval = __this->awakeAfterUsingCoder(aDecoder_);
}

// public extern ObjC.Class classForCoder() :47674
void NSObject__classForCoder_fn(NSObject* __this, ::Class* __retval)
{
    *__retval = __this->classForCoder();
}

// public ObjC.Class get_ClassForCoder() :47448
void NSObject__get_ClassForCoder_fn(NSObject* __this, ::Class* __retval)
{
    *__retval = __this->ClassForCoder();
}

// public extern ObjC.Class classForKeyedArchiver() :47554
void NSObject__classForKeyedArchiver_fn(NSObject* __this, ::Class* __retval)
{
    *__retval = __this->classForKeyedArchiver();
}

// public ObjC.Class get_ClassForKeyedArchiver() :47432
void NSObject__get_ClassForKeyedArchiver_fn(NSObject* __this, ::Class* __retval)
{
    *__retval = __this->ClassForKeyedArchiver();
}

// public extern ObjC.ID copy() :47461
void NSObject__copy_fn(NSObject* __this, ::id* __retval)
{
    *__retval = __this->copy();
}

// public extern iOS.Foundation.NSDictionary dictionaryWithValuesForKeys(iOS.Foundation.NSArray keys) :47641
void NSObject__dictionaryWithValuesForKeys_fn(NSObject* __this, ::g::iOS::Foundation::NSArray* keys_, ::g::iOS::Foundation::NSDictionary** __retval)
{
    *__retval = __this->dictionaryWithValuesForKeys(keys_);
}

// public extern void didChangeValueForKey(string key) :47572
void NSObject__didChangeValueForKey_fn(NSObject* __this, uString* key_)
{
    __this->didChangeValueForKey(key_);
}

// public extern void didChangeValueForKeyWithSetMutationUsingObjects(string key, iOS.Foundation.NSKeyValueSetMutationKind mutationKind, iOS.Foundation.NSSet objects) :47584
void NSObject__didChangeValueForKeyWithSetMutationUsingObjects_fn(NSObject* __this, uString* key_, uint32_t* mutationKind_, ::g::iOS::Foundation::NSSet* objects_)
{
    __this->didChangeValueForKeyWithSetMutationUsingObjects(key_, *mutationKind_, objects_);
}

// public extern void didChangeValuesAtIndexesForKey(iOS.Foundation.NSKeyValueChange changeKind, iOS.Foundation.NSIndexSet indexes, string key) :47578
void NSObject__didChangeValuesAtIndexesForKey_fn(NSObject* __this, uint32_t* changeKind_, ::g::iOS::Foundation::NSIndexSet* indexes_, uString* key_)
{
    __this->didChangeValuesAtIndexesForKey(*changeKind_, indexes_, key_);
}

// public extern void doesNotRecognizeSelector(ObjC.Selector aSelector) :47473
void NSObject__doesNotRecognizeSelector_fn(NSObject* __this, uObjC::Selector* aSelector_)
{
    __this->doesNotRecognizeSelector(*aSelector_);
}

// public extern bool fileManagerShouldProceedAfterError(iOS.Foundation.NSFileManager fm, iOS.Foundation.NSDictionary errorInfo) :47647
void NSObject__fileManagerShouldProceedAfterError_fn(NSObject* __this, ::g::iOS::Foundation::NSFileManager* fm_, ::g::iOS::Foundation::NSDictionary* errorInfo_, bool* __retval)
{
    *__retval = __this->fileManagerShouldProceedAfterError(fm_, errorInfo_);
}

// public extern void fileManagerWillProcessPath(iOS.Foundation.NSFileManager fm, string path) :47650
void NSObject__fileManagerWillProcessPath_fn(NSObject* __this, ::g::iOS::Foundation::NSFileManager* fm_, uString* path_)
{
    __this->fileManagerWillProcessPath(fm_, path_);
}

// public extern ObjC.ID forwardingTargetForSelector(ObjC.Selector aSelector) :47476
void NSObject__forwardingTargetForSelector_fn(NSObject* __this, uObjC::Selector* aSelector_, ::id* __retval)
{
    *__retval = __this->forwardingTargetForSelector(*aSelector_);
}

// public extern void forwardInvocation(iOS.Foundation.NSInvocation anInvocation) :47479
void NSObject__forwardInvocation_fn(NSObject* __this, ::g::iOS::Foundation::NSInvocation* anInvocation_)
{
    __this->forwardInvocation(anInvocation_);
}

// public virtual extern void init() :47452
void NSObject__init_fn(NSObject* __this)
{
    uStackFrame __("iOS.Foundation.NSObject", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}

// public extern iOS.Foundation.NSMethodSignature methodSignatureForSelector(ObjC.Selector aSelector) :47482
void NSObject__methodSignatureForSelector_fn(NSObject* __this, uObjC::Selector* aSelector_, ::g::iOS::Foundation::NSMethodSignature** __retval)
{
    *__retval = __this->methodSignatureForSelector(*aSelector_);
}

// public extern iOS.Foundation.NSMutableArray mutableArrayValueForKey(string key) :47608
void NSObject__mutableArrayValueForKey_fn(NSObject* __this, uString* key_, ::g::iOS::Foundation::NSMutableArray** __retval)
{
    *__retval = __this->mutableArrayValueForKey(key_);
}

// public extern iOS.Foundation.NSMutableArray mutableArrayValueForKeyPath(string keyPath) :47623
void NSObject__mutableArrayValueForKeyPath_fn(NSObject* __this, uString* keyPath_, ::g::iOS::Foundation::NSMutableArray** __retval)
{
    *__retval = __this->mutableArrayValueForKeyPath(keyPath_);
}

// public extern ObjC.ID mutableCopy() :47464
void NSObject__mutableCopy_fn(NSObject* __this, ::id* __retval)
{
    *__retval = __this->mutableCopy();
}

// public extern iOS.Foundation.NSMutableOrderedSet mutableOrderedSetValueForKey(string key) :47611
void NSObject__mutableOrderedSetValueForKey_fn(NSObject* __this, uString* key_, ::g::iOS::Foundation::NSMutableOrderedSet** __retval)
{
    *__retval = __this->mutableOrderedSetValueForKey(key_);
}

// public extern iOS.Foundation.NSMutableOrderedSet mutableOrderedSetValueForKeyPath(string keyPath) :47626
void NSObject__mutableOrderedSetValueForKeyPath_fn(NSObject* __this, uString* keyPath_, ::g::iOS::Foundation::NSMutableOrderedSet** __retval)
{
    *__retval = __this->mutableOrderedSetValueForKeyPath(keyPath_);
}

// public extern iOS.Foundation.NSMutableSet mutableSetValueForKey(string key) :47614
void NSObject__mutableSetValueForKey_fn(NSObject* __this, uString* key_, ::g::iOS::Foundation::NSMutableSet** __retval)
{
    *__retval = __this->mutableSetValueForKey(key_);
}

// public extern iOS.Foundation.NSMutableSet mutableSetValueForKeyPath(string keyPath) :47629
void NSObject__mutableSetValueForKeyPath_fn(NSObject* __this, uString* keyPath_, ::g::iOS::Foundation::NSMutableSet** __retval)
{
    *__retval = __this->mutableSetValueForKeyPath(keyPath_);
}

// public NSObject New() :47423
void NSObject__New3_fn(NSObject** __retval)
{
    *__retval = NSObject::New3();
}

// public NSObject New(ObjC.ID __id) :47425
void NSObject__New4_fn(::id* __id1, NSObject** __retval)
{
    *__retval = NSObject::New4(*__id1);
}

// public extern Uno.IntPtr observationInfo() :47563
void NSObject__observationInfo_fn(NSObject* __this, void** __retval)
{
    *__retval = __this->observationInfo();
}

// public Uno.IntPtr get_ObservationInfo() :47437
void NSObject__get_ObservationInfo_fn(NSObject* __this, void** __retval)
{
    *__retval = __this->ObservationInfo();
}

// public void set_ObservationInfo(Uno.IntPtr value) :47438
void NSObject__set_ObservationInfo_fn(NSObject* __this, void** value)
{
    __this->ObservationInfo(*value);
}

// public extern void observeValueForKeyPathOfObjectChangeContext(string keyPath, ObjC.ID object_, iOS.Foundation.NSDictionary change, Uno.IntPtr context) :47596
void NSObject__observeValueForKeyPathOfObjectChangeContext_fn(NSObject* __this, uString* keyPath_, ::id* object__, ::g::iOS::Foundation::NSDictionary* change_, void** context_)
{
    __this->observeValueForKeyPathOfObjectChangeContext(keyPath_, *object__, change_, *context_);
}

// public extern void performSelectorInBackgroundWithObject(ObjC.Selector aSelector, ObjC.ID arg) :47530
void NSObject__performSelectorInBackgroundWithObject_fn(NSObject* __this, uObjC::Selector* aSelector_, ::id* arg_)
{
    __this->performSelectorInBackgroundWithObject(*aSelector_, *arg_);
}

// public extern void performSelectorOnMainThreadWithObjectWaitUntilDone(ObjC.Selector aSelector, ObjC.ID arg, bool wait) :47521
void NSObject__performSelectorOnMainThreadWithObjectWaitUntilDone_fn(NSObject* __this, uObjC::Selector* aSelector_, ::id* arg_, bool* wait_)
{
    __this->performSelectorOnMainThreadWithObjectWaitUntilDone(*aSelector_, *arg_, *wait_);
}

// public extern void performSelectorOnMainThreadWithObjectWaitUntilDoneModes(ObjC.Selector aSelector, ObjC.ID arg, bool wait, iOS.Foundation.NSArray array) :47518
void NSObject__performSelectorOnMainThreadWithObjectWaitUntilDoneModes_fn(NSObject* __this, uObjC::Selector* aSelector_, ::id* arg_, bool* wait_, ::g::iOS::Foundation::NSArray* array_)
{
    __this->performSelectorOnMainThreadWithObjectWaitUntilDoneModes(*aSelector_, *arg_, *wait_, array_);
}

// public extern void performSelectorOnThreadWithObjectWaitUntilDone(ObjC.Selector aSelector, iOS.Foundation.NSThread thr, ObjC.ID arg, bool wait) :47527
void NSObject__performSelectorOnThreadWithObjectWaitUntilDone_fn(NSObject* __this, uObjC::Selector* aSelector_, ::g::iOS::Foundation::NSThread* thr_, ::id* arg_, bool* wait_)
{
    __this->performSelectorOnThreadWithObjectWaitUntilDone(*aSelector_, thr_, *arg_, *wait_);
}

// public extern void performSelectorOnThreadWithObjectWaitUntilDoneModes(ObjC.Selector aSelector, iOS.Foundation.NSThread thr, ObjC.ID arg, bool wait, iOS.Foundation.NSArray array) :47524
void NSObject__performSelectorOnThreadWithObjectWaitUntilDoneModes_fn(NSObject* __this, uObjC::Selector* aSelector_, ::g::iOS::Foundation::NSThread* thr_, ::id* arg_, bool* wait_, ::g::iOS::Foundation::NSArray* array_)
{
    __this->performSelectorOnThreadWithObjectWaitUntilDoneModes(*aSelector_, thr_, *arg_, *wait_, array_);
}

// public extern void performSelectorWithObjectAfterDelay(ObjC.Selector aSelector, ObjC.ID anArgument, double delay) :47536
void NSObject__performSelectorWithObjectAfterDelay_fn(NSObject* __this, uObjC::Selector* aSelector_, ::id* anArgument_, double* delay_)
{
    __this->performSelectorWithObjectAfterDelay(*aSelector_, *anArgument_, *delay_);
}

// public extern void performSelectorWithObjectAfterDelayInModes(ObjC.Selector aSelector, ObjC.ID anArgument, double delay, iOS.Foundation.NSArray modes) :47533
void NSObject__performSelectorWithObjectAfterDelayInModes_fn(NSObject* __this, uObjC::Selector* aSelector_, ::id* anArgument_, double* delay_, ::g::iOS::Foundation::NSArray* modes_)
{
    __this->performSelectorWithObjectAfterDelayInModes(*aSelector_, *anArgument_, *delay_, modes_);
}

// public virtual extern void removeObserverForKeyPath(iOS.Foundation.NSObject observer, string keyPath) :47593
void NSObject__removeObserverForKeyPath_fn(NSObject* __this, NSObject* observer_, uString* keyPath_)
{
    uStackFrame __("iOS.Foundation.NSObject", "removeObserverForKeyPath(iOS.Foundation.NSObject,string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(removeObserver:forKeyPath:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)observer_),
        uObjC::NativeString(keyPath_));
}

// public virtual extern void removeObserverForKeyPathContext(iOS.Foundation.NSObject observer, string keyPath, Uno.IntPtr context) :47590
void NSObject__removeObserverForKeyPathContext_fn(NSObject* __this, NSObject* observer_, uString* keyPath_, void** context_)
{
    uStackFrame __("iOS.Foundation.NSObject", "removeObserverForKeyPathContext(iOS.Foundation.NSObject,string,Uno.IntPtr)");
    void* context__ = *context_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(removeObserver:forKeyPath:context:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)observer_),
        uObjC::NativeString(keyPath_),
        (void*)context__);
}

// public extern ObjC.ID replacementObjectForCoder(iOS.Foundation.NSCoder aCoder) :47668
void NSObject__replacementObjectForCoder_fn(NSObject* __this, ::g::iOS::Foundation::NSCoder* aCoder_, ::id* __retval)
{
    *__retval = __this->replacementObjectForCoder(aCoder_);
}

// public extern ObjC.ID replacementObjectForKeyedArchiver(iOS.Foundation.NSKeyedArchiver archiver) :47548
void NSObject__replacementObjectForKeyedArchiver_fn(NSObject* __this, ::g::iOS::Foundation::NSKeyedArchiver* archiver_, ::id* __retval)
{
    *__retval = __this->replacementObjectForKeyedArchiver(archiver_);
}

// public extern bool retainWeakReference() :47491
void NSObject__retainWeakReference_fn(NSObject* __this, bool* __retval)
{
    *__retval = __this->retainWeakReference();
}

// public extern void setNilValueForKey(string key) :47638
void NSObject__setNilValueForKey_fn(NSObject* __this, uString* key_)
{
    __this->setNilValueForKey(key_);
}

// public extern void setObservationInfo(Uno.IntPtr observationInfo) :47566
void NSObject__setObservationInfo_fn(NSObject* __this, void** observationInfo_)
{
    __this->setObservationInfo(*observationInfo_);
}

// public virtual extern void setValueForKey(ObjC.ID value, string key) :47605
void NSObject__setValueForKey_fn(NSObject* __this, ::id* value_, uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "setValueForKey(ObjC.ID,string)");
    ::id value__ = *value_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setValue:forKey:),
        (::id)value__,
        uObjC::NativeString(key_));
}

// public extern void setValueForKeyPath(ObjC.ID value, string keyPath) :47620
void NSObject__setValueForKeyPath_fn(NSObject* __this, ::id* value_, uString* keyPath_)
{
    __this->setValueForKeyPath(*value_, keyPath_);
}

// public extern void setValueForUndefinedKey(ObjC.ID value, string key) :47635
void NSObject__setValueForUndefinedKey_fn(NSObject* __this, ::id* value_, uString* key_)
{
    __this->setValueForUndefinedKey(*value_, key_);
}

// public extern void setValuesForKeysWithDictionary(iOS.Foundation.NSDictionary keyedValues) :47644
void NSObject__setValuesForKeysWithDictionary_fn(NSObject* __this, ::g::iOS::Foundation::NSDictionary* keyedValues_)
{
    __this->setValuesForKeysWithDictionary(keyedValues_);
}

// public virtual extern ObjC.ID valueForKey(string key) :47602
void NSObject__valueForKey_fn(NSObject* __this, uString* key_, ::id* __retval)
{
    uStackFrame __("iOS.Foundation.NSObject", "valueForKey(string)");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::id, @selector(valueForKey:),
        uObjC::NativeString(key_));
    return *__retval = (::id)__return, void();
}

// public extern ObjC.ID valueForKeyPath(string keyPath) :47617
void NSObject__valueForKeyPath_fn(NSObject* __this, uString* keyPath_, ::id* __retval)
{
    *__retval = __this->valueForKeyPath(keyPath_);
}

// public extern ObjC.ID valueForUndefinedKey(string key) :47632
void NSObject__valueForUndefinedKey_fn(NSObject* __this, uString* key_, ::id* __retval)
{
    *__retval = __this->valueForUndefinedKey(key_);
}

// public extern void willChangeValueForKey(string key) :47569
void NSObject__willChangeValueForKey_fn(NSObject* __this, uString* key_)
{
    __this->willChangeValueForKey(key_);
}

// public extern void willChangeValueForKeyWithSetMutationUsingObjects(string key, iOS.Foundation.NSKeyValueSetMutationKind mutationKind, iOS.Foundation.NSSet objects) :47581
void NSObject__willChangeValueForKeyWithSetMutationUsingObjects_fn(NSObject* __this, uString* key_, uint32_t* mutationKind_, ::g::iOS::Foundation::NSSet* objects_)
{
    __this->willChangeValueForKeyWithSetMutationUsingObjects(key_, *mutationKind_, objects_);
}

// public extern void willChangeValuesAtIndexesForKey(iOS.Foundation.NSKeyValueChange changeKind, iOS.Foundation.NSIndexSet indexes, string key) :47575
void NSObject__willChangeValuesAtIndexesForKey_fn(NSObject* __this, uint32_t* changeKind_, ::g::iOS::Foundation::NSIndexSet* indexes_, uString* key_)
{
    __this->willChangeValuesAtIndexesForKey(*changeKind_, indexes_, key_);
}

// public NSObject() [instance] :47423
void NSObject::ctor_2()
{
    uStackFrame __("iOS.Foundation.NSObject", ".ctor()");
    ctor_();
}

// public NSObject(ObjC.ID __id) [instance] :47425
void NSObject::ctor_3(::id __id1)
{
    uStackFrame __("iOS.Foundation.NSObject", ".ctor(ObjC.ID)");
    ctor_1(__id1);
}

// public extern bool allowsWeakReference() [instance] :47488
bool NSObject::allowsWeakReference()
{
    uStackFrame __("iOS.Foundation.NSObject", "allowsWeakReference()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(allowsWeakReference));
    return (bool)__return;
}

// public extern bool attemptRecoveryFromErrorOptionIndex(iOS.Foundation.NSError error, ulong recoveryOptionIndex) [instance] :47656
bool NSObject::attemptRecoveryFromErrorOptionIndex(::g::iOS::Foundation::NSError* error_, uint64_t recoveryOptionIndex_)
{
    uStackFrame __("iOS.Foundation.NSObject", "attemptRecoveryFromErrorOptionIndex(iOS.Foundation.NSError,ulong)");
    uint64_t recoveryOptionIndex__ = recoveryOptionIndex_;
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(attemptRecoveryFromError:optionIndex:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)error_),
        (unsigned long)recoveryOptionIndex__);
    return (bool)__return;
}

// public extern void attemptRecoveryFromErrorOptionIndexDelegateDidRecoverSelectorContextInfo(iOS.Foundation.NSError error, ulong recoveryOptionIndex, ObjC.ID delegate_, ObjC.Selector didRecoverSelector, Uno.IntPtr contextInfo) [instance] :47653
void NSObject::attemptRecoveryFromErrorOptionIndexDelegateDidRecoverSelectorContextInfo(::g::iOS::Foundation::NSError* error_, uint64_t recoveryOptionIndex_, ::id delegate__, uObjC::Selector didRecoverSelector_, void* contextInfo_)
{
    uStackFrame __("iOS.Foundation.NSObject", "attemptRecoveryFromErrorOptionIndexDelegateDidRecoverSelectorContextInfo(iOS.Foundation.NSError,ulong,ObjC.ID,ObjC.Selector,Uno.IntPtr)");
    uint64_t recoveryOptionIndex__ = recoveryOptionIndex_;
    ::id delegate___ = delegate__;
    uObjC::Selector didRecoverSelector__ = didRecoverSelector_;
    void* contextInfo__ = contextInfo_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(attemptRecoveryFromError:optionIndex:delegate:didRecoverSelector:contextInfo:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)error_),
        (unsigned long)recoveryOptionIndex__,
        (::id)delegate___,
        (::SEL)didRecoverSelector__,
        (void*)contextInfo__);
}

// public extern ObjC.ID autoContentAccessingProxy() [instance] :47659
::id NSObject::autoContentAccessingProxy()
{
    uStackFrame __("iOS.Foundation.NSObject", "autoContentAccessingProxy()");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(autoContentAccessingProxy));
    return (::id)__return;
}

// public ObjC.ID get_AutoContentAccessingProxy() [instance] :47443
::id NSObject::AutoContentAccessingProxy()
{
    uStackFrame __("iOS.Foundation.NSObject", "get_AutoContentAccessingProxy()");
    return autoContentAccessingProxy();
}

// public extern ObjC.ID awakeAfterUsingCoder(iOS.Foundation.NSCoder aDecoder) [instance] :47671
::id NSObject::awakeAfterUsingCoder(::g::iOS::Foundation::NSCoder* aDecoder_)
{
    uStackFrame __("iOS.Foundation.NSObject", "awakeAfterUsingCoder(iOS.Foundation.NSCoder)");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(awakeAfterUsingCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aDecoder_));
    return (::id)__return;
}

// public extern ObjC.Class classForCoder() [instance] :47674
::Class NSObject::classForCoder()
{
    uStackFrame __("iOS.Foundation.NSObject", "classForCoder()");
    ::Class __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::Class, @selector(classForCoder));
    return (::Class)__return;
}

// public ObjC.Class get_ClassForCoder() [instance] :47448
::Class NSObject::ClassForCoder()
{
    uStackFrame __("iOS.Foundation.NSObject", "get_ClassForCoder()");
    return classForCoder();
}

// public extern ObjC.Class classForKeyedArchiver() [instance] :47554
::Class NSObject::classForKeyedArchiver()
{
    uStackFrame __("iOS.Foundation.NSObject", "classForKeyedArchiver()");
    ::Class __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::Class, @selector(classForKeyedArchiver));
    return (::Class)__return;
}

// public ObjC.Class get_ClassForKeyedArchiver() [instance] :47432
::Class NSObject::ClassForKeyedArchiver()
{
    uStackFrame __("iOS.Foundation.NSObject", "get_ClassForKeyedArchiver()");
    return classForKeyedArchiver();
}

// public extern ObjC.ID copy() [instance] :47461
::id NSObject::copy()
{
    uStackFrame __("iOS.Foundation.NSObject", "copy()");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(copy));
    return (::id)__return;
}

// public extern iOS.Foundation.NSDictionary dictionaryWithValuesForKeys(iOS.Foundation.NSArray keys) [instance] :47641
::g::iOS::Foundation::NSDictionary* NSObject::dictionaryWithValuesForKeys(::g::iOS::Foundation::NSArray* keys_)
{
    uStackFrame __("iOS.Foundation.NSObject", "dictionaryWithValuesForKeys(iOS.Foundation.NSArray)");
    ::NSDictionary* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSDictionary*, @selector(dictionaryWithValuesForKeys:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)keys_));
    return (::g::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSDictionary_typeof());
}

// public extern void didChangeValueForKey(string key) [instance] :47572
void NSObject::didChangeValueForKey(uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "didChangeValueForKey(string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(didChangeValueForKey:),
        uObjC::NativeString(key_));
}

// public extern void didChangeValueForKeyWithSetMutationUsingObjects(string key, iOS.Foundation.NSKeyValueSetMutationKind mutationKind, iOS.Foundation.NSSet objects) [instance] :47584
void NSObject::didChangeValueForKeyWithSetMutationUsingObjects(uString* key_, uint32_t mutationKind_, ::g::iOS::Foundation::NSSet* objects_)
{
    uStackFrame __("iOS.Foundation.NSObject", "didChangeValueForKeyWithSetMutationUsingObjects(string,iOS.Foundation.NSKeyValueSetMutationKind,iOS.Foundation.NSSet)");
    uint32_t mutationKind__ = mutationKind_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(didChangeValueForKey:withSetMutation:usingObjects:),
        uObjC::NativeString(key_),
        ::NSKeyValueSetMutationKind(mutationKind__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)objects_));
}

// public extern void didChangeValuesAtIndexesForKey(iOS.Foundation.NSKeyValueChange changeKind, iOS.Foundation.NSIndexSet indexes, string key) [instance] :47578
void NSObject::didChangeValuesAtIndexesForKey(uint32_t changeKind_, ::g::iOS::Foundation::NSIndexSet* indexes_, uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "didChangeValuesAtIndexesForKey(iOS.Foundation.NSKeyValueChange,iOS.Foundation.NSIndexSet,string)");
    uint32_t changeKind__ = changeKind_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(didChange:valuesAtIndexes:forKey:),
        ::NSKeyValueChange(changeKind__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)indexes_),
        uObjC::NativeString(key_));
}

// public extern void doesNotRecognizeSelector(ObjC.Selector aSelector) [instance] :47473
void NSObject::doesNotRecognizeSelector(uObjC::Selector aSelector_)
{
    uStackFrame __("iOS.Foundation.NSObject", "doesNotRecognizeSelector(ObjC.Selector)");
    uObjC::Selector aSelector__ = aSelector_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(doesNotRecognizeSelector:),
        (::SEL)aSelector__);
}

// public extern bool fileManagerShouldProceedAfterError(iOS.Foundation.NSFileManager fm, iOS.Foundation.NSDictionary errorInfo) [instance] :47647
bool NSObject::fileManagerShouldProceedAfterError(::g::iOS::Foundation::NSFileManager* fm_, ::g::iOS::Foundation::NSDictionary* errorInfo_)
{
    uStackFrame __("iOS.Foundation.NSObject", "fileManagerShouldProceedAfterError(iOS.Foundation.NSFileManager,iOS.Foundation.NSDictionary)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(fileManager:shouldProceedAfterError:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)fm_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)errorInfo_));
    return (bool)__return;
}

// public extern void fileManagerWillProcessPath(iOS.Foundation.NSFileManager fm, string path) [instance] :47650
void NSObject::fileManagerWillProcessPath(::g::iOS::Foundation::NSFileManager* fm_, uString* path_)
{
    uStackFrame __("iOS.Foundation.NSObject", "fileManagerWillProcessPath(iOS.Foundation.NSFileManager,string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(fileManager:willProcessPath:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)fm_),
        uObjC::NativeString(path_));
}

// public extern ObjC.ID forwardingTargetForSelector(ObjC.Selector aSelector) [instance] :47476
::id NSObject::forwardingTargetForSelector(uObjC::Selector aSelector_)
{
    uStackFrame __("iOS.Foundation.NSObject", "forwardingTargetForSelector(ObjC.Selector)");
    uObjC::Selector aSelector__ = aSelector_;
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(forwardingTargetForSelector:),
        (::SEL)aSelector__);
    return (::id)__return;
}

// public extern void forwardInvocation(iOS.Foundation.NSInvocation anInvocation) [instance] :47479
void NSObject::forwardInvocation(::g::iOS::Foundation::NSInvocation* anInvocation_)
{
    uStackFrame __("iOS.Foundation.NSObject", "forwardInvocation(iOS.Foundation.NSInvocation)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(forwardInvocation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)anInvocation_));
}

// public extern iOS.Foundation.NSMethodSignature methodSignatureForSelector(ObjC.Selector aSelector) [instance] :47482
::g::iOS::Foundation::NSMethodSignature* NSObject::methodSignatureForSelector(uObjC::Selector aSelector_)
{
    uStackFrame __("iOS.Foundation.NSObject", "methodSignatureForSelector(ObjC.Selector)");
    uObjC::Selector aSelector__ = aSelector_;
    ::NSMethodSignature* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSMethodSignature*, @selector(methodSignatureForSelector:),
        (::SEL)aSelector__);
    return (::g::iOS::Foundation::NSMethodSignature*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSMethodSignature_typeof());
}

// public extern iOS.Foundation.NSMutableArray mutableArrayValueForKey(string key) [instance] :47608
::g::iOS::Foundation::NSMutableArray* NSObject::mutableArrayValueForKey(uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "mutableArrayValueForKey(string)");
    ::NSMutableArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSMutableArray*, @selector(mutableArrayValueForKey:),
        uObjC::NativeString(key_));
    return (::g::iOS::Foundation::NSMutableArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSMutableArray_typeof());
}

// public extern iOS.Foundation.NSMutableArray mutableArrayValueForKeyPath(string keyPath) [instance] :47623
::g::iOS::Foundation::NSMutableArray* NSObject::mutableArrayValueForKeyPath(uString* keyPath_)
{
    uStackFrame __("iOS.Foundation.NSObject", "mutableArrayValueForKeyPath(string)");
    ::NSMutableArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSMutableArray*, @selector(mutableArrayValueForKeyPath:),
        uObjC::NativeString(keyPath_));
    return (::g::iOS::Foundation::NSMutableArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSMutableArray_typeof());
}

// public extern ObjC.ID mutableCopy() [instance] :47464
::id NSObject::mutableCopy()
{
    uStackFrame __("iOS.Foundation.NSObject", "mutableCopy()");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(mutableCopy));
    return (::id)__return;
}

// public extern iOS.Foundation.NSMutableOrderedSet mutableOrderedSetValueForKey(string key) [instance] :47611
::g::iOS::Foundation::NSMutableOrderedSet* NSObject::mutableOrderedSetValueForKey(uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "mutableOrderedSetValueForKey(string)");
    ::NSMutableOrderedSet* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSMutableOrderedSet*, @selector(mutableOrderedSetValueForKey:),
        uObjC::NativeString(key_));
    return (::g::iOS::Foundation::NSMutableOrderedSet*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSMutableOrderedSet_typeof());
}

// public extern iOS.Foundation.NSMutableOrderedSet mutableOrderedSetValueForKeyPath(string keyPath) [instance] :47626
::g::iOS::Foundation::NSMutableOrderedSet* NSObject::mutableOrderedSetValueForKeyPath(uString* keyPath_)
{
    uStackFrame __("iOS.Foundation.NSObject", "mutableOrderedSetValueForKeyPath(string)");
    ::NSMutableOrderedSet* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSMutableOrderedSet*, @selector(mutableOrderedSetValueForKeyPath:),
        uObjC::NativeString(keyPath_));
    return (::g::iOS::Foundation::NSMutableOrderedSet*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSMutableOrderedSet_typeof());
}

// public extern iOS.Foundation.NSMutableSet mutableSetValueForKey(string key) [instance] :47614
::g::iOS::Foundation::NSMutableSet* NSObject::mutableSetValueForKey(uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "mutableSetValueForKey(string)");
    ::NSMutableSet* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSMutableSet*, @selector(mutableSetValueForKey:),
        uObjC::NativeString(key_));
    return (::g::iOS::Foundation::NSMutableSet*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSMutableSet_typeof());
}

// public extern iOS.Foundation.NSMutableSet mutableSetValueForKeyPath(string keyPath) [instance] :47629
::g::iOS::Foundation::NSMutableSet* NSObject::mutableSetValueForKeyPath(uString* keyPath_)
{
    uStackFrame __("iOS.Foundation.NSObject", "mutableSetValueForKeyPath(string)");
    ::NSMutableSet* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSMutableSet*, @selector(mutableSetValueForKeyPath:),
        uObjC::NativeString(keyPath_));
    return (::g::iOS::Foundation::NSMutableSet*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSMutableSet_typeof());
}

// public extern Uno.IntPtr observationInfo() [instance] :47563
void* NSObject::observationInfo()
{
    uStackFrame __("iOS.Foundation.NSObject", "observationInfo()");
    void* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, void*, @selector(observationInfo));
    return (void*)__return;
}

// public Uno.IntPtr get_ObservationInfo() [instance] :47437
void* NSObject::ObservationInfo()
{
    uStackFrame __("iOS.Foundation.NSObject", "get_ObservationInfo()");
    return observationInfo();
}

// public void set_ObservationInfo(Uno.IntPtr value) [instance] :47438
void NSObject::ObservationInfo(void* value)
{
    uStackFrame __("iOS.Foundation.NSObject", "set_ObservationInfo(Uno.IntPtr)");
    setObservationInfo(value);
}

// public extern void observeValueForKeyPathOfObjectChangeContext(string keyPath, ObjC.ID object_, iOS.Foundation.NSDictionary change, Uno.IntPtr context) [instance] :47596
void NSObject::observeValueForKeyPathOfObjectChangeContext(uString* keyPath_, ::id object__, ::g::iOS::Foundation::NSDictionary* change_, void* context_)
{
    uStackFrame __("iOS.Foundation.NSObject", "observeValueForKeyPathOfObjectChangeContext(string,ObjC.ID,iOS.Foundation.NSDictionary,Uno.IntPtr)");
    ::id object___ = object__;
    void* context__ = context_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(observeValueForKeyPath:ofObject:change:context:),
        uObjC::NativeString(keyPath_),
        (::id)object___,
        uObjC::Lifetime::GetNativeHandle((::uObject *)change_),
        (void*)context__);
}

// public extern void performSelectorInBackgroundWithObject(ObjC.Selector aSelector, ObjC.ID arg) [instance] :47530
void NSObject::performSelectorInBackgroundWithObject(uObjC::Selector aSelector_, ::id arg_)
{
    uStackFrame __("iOS.Foundation.NSObject", "performSelectorInBackgroundWithObject(ObjC.Selector,ObjC.ID)");
    uObjC::Selector aSelector__ = aSelector_;
    ::id arg__ = arg_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(performSelectorInBackground:withObject:),
        (::SEL)aSelector__,
        (::id)arg__);
}

// public extern void performSelectorOnMainThreadWithObjectWaitUntilDone(ObjC.Selector aSelector, ObjC.ID arg, bool wait) [instance] :47521
void NSObject::performSelectorOnMainThreadWithObjectWaitUntilDone(uObjC::Selector aSelector_, ::id arg_, bool wait_)
{
    uStackFrame __("iOS.Foundation.NSObject", "performSelectorOnMainThreadWithObjectWaitUntilDone(ObjC.Selector,ObjC.ID,bool)");
    uObjC::Selector aSelector__ = aSelector_;
    ::id arg__ = arg_;
    bool wait__ = wait_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(performSelectorOnMainThread:withObject:waitUntilDone:),
        (::SEL)aSelector__,
        (::id)arg__,
        (BOOL)wait__);
}

// public extern void performSelectorOnMainThreadWithObjectWaitUntilDoneModes(ObjC.Selector aSelector, ObjC.ID arg, bool wait, iOS.Foundation.NSArray array) [instance] :47518
void NSObject::performSelectorOnMainThreadWithObjectWaitUntilDoneModes(uObjC::Selector aSelector_, ::id arg_, bool wait_, ::g::iOS::Foundation::NSArray* array_)
{
    uStackFrame __("iOS.Foundation.NSObject", "performSelectorOnMainThreadWithObjectWaitUntilDoneModes(ObjC.Selector,ObjC.ID,bool,iOS.Foundation.NSArray)");
    uObjC::Selector aSelector__ = aSelector_;
    ::id arg__ = arg_;
    bool wait__ = wait_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(performSelectorOnMainThread:withObject:waitUntilDone:modes:),
        (::SEL)aSelector__,
        (::id)arg__,
        (BOOL)wait__,
        uObjC::Lifetime::GetNativeHandle((::uObject *)array_));
}

// public extern void performSelectorOnThreadWithObjectWaitUntilDone(ObjC.Selector aSelector, iOS.Foundation.NSThread thr, ObjC.ID arg, bool wait) [instance] :47527
void NSObject::performSelectorOnThreadWithObjectWaitUntilDone(uObjC::Selector aSelector_, ::g::iOS::Foundation::NSThread* thr_, ::id arg_, bool wait_)
{
    uStackFrame __("iOS.Foundation.NSObject", "performSelectorOnThreadWithObjectWaitUntilDone(ObjC.Selector,iOS.Foundation.NSThread,ObjC.ID,bool)");
    uObjC::Selector aSelector__ = aSelector_;
    ::id arg__ = arg_;
    bool wait__ = wait_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(performSelector:onThread:withObject:waitUntilDone:),
        (::SEL)aSelector__,
        uObjC::Lifetime::GetNativeHandle((::uObject *)thr_),
        (::id)arg__,
        (BOOL)wait__);
}

// public extern void performSelectorOnThreadWithObjectWaitUntilDoneModes(ObjC.Selector aSelector, iOS.Foundation.NSThread thr, ObjC.ID arg, bool wait, iOS.Foundation.NSArray array) [instance] :47524
void NSObject::performSelectorOnThreadWithObjectWaitUntilDoneModes(uObjC::Selector aSelector_, ::g::iOS::Foundation::NSThread* thr_, ::id arg_, bool wait_, ::g::iOS::Foundation::NSArray* array_)
{
    uStackFrame __("iOS.Foundation.NSObject", "performSelectorOnThreadWithObjectWaitUntilDoneModes(ObjC.Selector,iOS.Foundation.NSThread,ObjC.ID,bool,iOS.Foundation.NSArray)");
    uObjC::Selector aSelector__ = aSelector_;
    ::id arg__ = arg_;
    bool wait__ = wait_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(performSelector:onThread:withObject:waitUntilDone:modes:),
        (::SEL)aSelector__,
        uObjC::Lifetime::GetNativeHandle((::uObject *)thr_),
        (::id)arg__,
        (BOOL)wait__,
        uObjC::Lifetime::GetNativeHandle((::uObject *)array_));
}

// public extern void performSelectorWithObjectAfterDelay(ObjC.Selector aSelector, ObjC.ID anArgument, double delay) [instance] :47536
void NSObject::performSelectorWithObjectAfterDelay(uObjC::Selector aSelector_, ::id anArgument_, double delay_)
{
    uStackFrame __("iOS.Foundation.NSObject", "performSelectorWithObjectAfterDelay(ObjC.Selector,ObjC.ID,double)");
    uObjC::Selector aSelector__ = aSelector_;
    ::id anArgument__ = anArgument_;
    double delay__ = delay_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(performSelector:withObject:afterDelay:),
        (::SEL)aSelector__,
        (::id)anArgument__,
        delay__);
}

// public extern void performSelectorWithObjectAfterDelayInModes(ObjC.Selector aSelector, ObjC.ID anArgument, double delay, iOS.Foundation.NSArray modes) [instance] :47533
void NSObject::performSelectorWithObjectAfterDelayInModes(uObjC::Selector aSelector_, ::id anArgument_, double delay_, ::g::iOS::Foundation::NSArray* modes_)
{
    uStackFrame __("iOS.Foundation.NSObject", "performSelectorWithObjectAfterDelayInModes(ObjC.Selector,ObjC.ID,double,iOS.Foundation.NSArray)");
    uObjC::Selector aSelector__ = aSelector_;
    ::id anArgument__ = anArgument_;
    double delay__ = delay_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(performSelector:withObject:afterDelay:inModes:),
        (::SEL)aSelector__,
        (::id)anArgument__,
        delay__,
        uObjC::Lifetime::GetNativeHandle((::uObject *)modes_));
}

// public extern ObjC.ID replacementObjectForCoder(iOS.Foundation.NSCoder aCoder) [instance] :47668
::id NSObject::replacementObjectForCoder(::g::iOS::Foundation::NSCoder* aCoder_)
{
    uStackFrame __("iOS.Foundation.NSObject", "replacementObjectForCoder(iOS.Foundation.NSCoder)");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(replacementObjectForCoder:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)aCoder_));
    return (::id)__return;
}

// public extern ObjC.ID replacementObjectForKeyedArchiver(iOS.Foundation.NSKeyedArchiver archiver) [instance] :47548
::id NSObject::replacementObjectForKeyedArchiver(::g::iOS::Foundation::NSKeyedArchiver* archiver_)
{
    uStackFrame __("iOS.Foundation.NSObject", "replacementObjectForKeyedArchiver(iOS.Foundation.NSKeyedArchiver)");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(replacementObjectForKeyedArchiver:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)archiver_));
    return (::id)__return;
}

// public extern bool retainWeakReference() [instance] :47491
bool NSObject::retainWeakReference()
{
    uStackFrame __("iOS.Foundation.NSObject", "retainWeakReference()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(retainWeakReference));
    return (bool)__return;
}

// public extern void setNilValueForKey(string key) [instance] :47638
void NSObject::setNilValueForKey(uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "setNilValueForKey(string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setNilValueForKey:),
        uObjC::NativeString(key_));
}

// public extern void setObservationInfo(Uno.IntPtr observationInfo) [instance] :47566
void NSObject::setObservationInfo(void* observationInfo_)
{
    uStackFrame __("iOS.Foundation.NSObject", "setObservationInfo(Uno.IntPtr)");
    void* observationInfo__ = observationInfo_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setObservationInfo:),
        (void*)observationInfo__);
}

// public extern void setValueForKeyPath(ObjC.ID value, string keyPath) [instance] :47620
void NSObject::setValueForKeyPath(::id value_, uString* keyPath_)
{
    uStackFrame __("iOS.Foundation.NSObject", "setValueForKeyPath(ObjC.ID,string)");
    ::id value__ = value_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setValue:forKeyPath:),
        (::id)value__,
        uObjC::NativeString(keyPath_));
}

// public extern void setValueForUndefinedKey(ObjC.ID value, string key) [instance] :47635
void NSObject::setValueForUndefinedKey(::id value_, uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "setValueForUndefinedKey(ObjC.ID,string)");
    ::id value__ = value_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setValue:forUndefinedKey:),
        (::id)value__,
        uObjC::NativeString(key_));
}

// public extern void setValuesForKeysWithDictionary(iOS.Foundation.NSDictionary keyedValues) [instance] :47644
void NSObject::setValuesForKeysWithDictionary(::g::iOS::Foundation::NSDictionary* keyedValues_)
{
    uStackFrame __("iOS.Foundation.NSObject", "setValuesForKeysWithDictionary(iOS.Foundation.NSDictionary)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setValuesForKeysWithDictionary:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)keyedValues_));
}

// public extern ObjC.ID valueForKeyPath(string keyPath) [instance] :47617
::id NSObject::valueForKeyPath(uString* keyPath_)
{
    uStackFrame __("iOS.Foundation.NSObject", "valueForKeyPath(string)");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(valueForKeyPath:),
        uObjC::NativeString(keyPath_));
    return (::id)__return;
}

// public extern ObjC.ID valueForUndefinedKey(string key) [instance] :47632
::id NSObject::valueForUndefinedKey(uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "valueForUndefinedKey(string)");
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(valueForUndefinedKey:),
        uObjC::NativeString(key_));
    return (::id)__return;
}

// public extern void willChangeValueForKey(string key) [instance] :47569
void NSObject::willChangeValueForKey(uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "willChangeValueForKey(string)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willChangeValueForKey:),
        uObjC::NativeString(key_));
}

// public extern void willChangeValueForKeyWithSetMutationUsingObjects(string key, iOS.Foundation.NSKeyValueSetMutationKind mutationKind, iOS.Foundation.NSSet objects) [instance] :47581
void NSObject::willChangeValueForKeyWithSetMutationUsingObjects(uString* key_, uint32_t mutationKind_, ::g::iOS::Foundation::NSSet* objects_)
{
    uStackFrame __("iOS.Foundation.NSObject", "willChangeValueForKeyWithSetMutationUsingObjects(string,iOS.Foundation.NSKeyValueSetMutationKind,iOS.Foundation.NSSet)");
    uint32_t mutationKind__ = mutationKind_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willChangeValueForKey:withSetMutation:usingObjects:),
        uObjC::NativeString(key_),
        ::NSKeyValueSetMutationKind(mutationKind__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)objects_));
}

// public extern void willChangeValuesAtIndexesForKey(iOS.Foundation.NSKeyValueChange changeKind, iOS.Foundation.NSIndexSet indexes, string key) [instance] :47575
void NSObject::willChangeValuesAtIndexesForKey(uint32_t changeKind_, ::g::iOS::Foundation::NSIndexSet* indexes_, uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "willChangeValuesAtIndexesForKey(iOS.Foundation.NSKeyValueChange,iOS.Foundation.NSIndexSet,string)");
    uint32_t changeKind__ = changeKind_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(willChange:valuesAtIndexes:forKey:),
        ::NSKeyValueChange(changeKind__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)indexes_),
        uObjC::NativeString(key_));
}

// public static extern bool _accessInstanceVariablesDirectly() [static] :47599
bool NSObject::_accessInstanceVariablesDirectly()
{
    uStackFrame __("iOS.Foundation.NSObject", "_accessInstanceVariablesDirectly()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, BOOL, @selector(accessInstanceVariablesDirectly));
    return (bool)__return;
}

// public static extern ObjC.ID _alloc() [static] :47458
::id NSObject::_alloc()
{
    uStackFrame __("iOS.Foundation.NSObject", "_alloc()");
    ::id __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::id, @selector(alloc));
    return (::id)__return;
}

// public static extern bool _automaticallyNotifiesObserversForKey(string key) [static] :47560
bool NSObject::_automaticallyNotifiesObserversForKey(uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_automaticallyNotifiesObserversForKey(string)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, BOOL, @selector(automaticallyNotifiesObserversForKey:),
        uObjC::NativeString(key_));
    return (bool)__return;
}

// public static extern void _cancelPreviousPerformRequestsWithTarget(ObjC.ID aTarget) [static] :47542
void NSObject::_cancelPreviousPerformRequestsWithTarget(::id aTarget_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_cancelPreviousPerformRequestsWithTarget(ObjC.ID)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(cancelPreviousPerformRequestsWithTarget:),
        (::id)aTarget_);
}

// public static extern void _cancelPreviousPerformRequestsWithTargetSelectorObject(ObjC.ID aTarget, ObjC.Selector aSelector, ObjC.ID anArgument) [static] :47539
void NSObject::_cancelPreviousPerformRequestsWithTargetSelectorObject(::id aTarget_, uObjC::Selector aSelector_, ::id anArgument_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_cancelPreviousPerformRequestsWithTargetSelectorObject(ObjC.ID,ObjC.Selector,ObjC.ID)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(cancelPreviousPerformRequestsWithTarget:selector:object:),
        (::id)aTarget_,
        (::SEL)aSelector_,
        (::id)anArgument_);
}

// public static extern ObjC.Class _class() [static] :47509
::Class NSObject::_class()
{
    uStackFrame __("iOS.Foundation.NSObject", "_class()");
    ::Class __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::Class, @selector(class));
    return (::Class)__return;
}

// public static extern iOS.Foundation.NSArray _classFallbacksForKeyedArchiver() [static] :47551
::g::iOS::Foundation::NSArray* NSObject::_classFallbacksForKeyedArchiver()
{
    uStackFrame __("iOS.Foundation.NSObject", "_classFallbacksForKeyedArchiver()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::NSArray*, @selector(classFallbacksForKeyedArchiver));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public static extern ObjC.Class _classForKeyedUnarchiver() [static] :47545
::Class NSObject::_classForKeyedUnarchiver()
{
    uStackFrame __("iOS.Foundation.NSObject", "_classForKeyedUnarchiver()");
    ::Class __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::Class, @selector(classForKeyedUnarchiver));
    return (::Class)__return;
}

// public static extern bool _conformsToProtocol(ObjC.Protocol protocol) [static] :47470
bool NSObject::_conformsToProtocol(uObjC::Protocol protocol_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_conformsToProtocol(ObjC.Protocol)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, BOOL, @selector(conformsToProtocol:),
        (::id)protocol_);
    return (bool)__return;
}

// public static extern string _debugDescription() [static] :47515
uString* NSObject::_debugDescription()
{
    uStackFrame __("iOS.Foundation.NSObject", "_debugDescription()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::NSString *, @selector(debugDescription));
    return uObjC::UnoString(__return);
}

// public static extern string _description() [static] :47512
uString* NSObject::_description()
{
    uStackFrame __("iOS.Foundation.NSObject", "_description()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::NSString *, @selector(description));
    return uObjC::UnoString(__return);
}

// public static extern ulong _hash() [static] :47503
uint64_t NSObject::_hash()
{
    uStackFrame __("iOS.Foundation.NSObject", "_hash()");
    unsigned long __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, unsigned long, @selector(hash));
    return (uint64_t)__return;
}

// public static extern iOS.Foundation.NSMethodSignature _instanceMethodSignatureForSelector(ObjC.Selector aSelector) [static] :47485
::g::iOS::Foundation::NSMethodSignature* NSObject::_instanceMethodSignatureForSelector(uObjC::Selector aSelector_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_instanceMethodSignatureForSelector(ObjC.Selector)");
    ::NSMethodSignature* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::NSMethodSignature*, @selector(instanceMethodSignatureForSelector:),
        (::SEL)aSelector_);
    return (::g::iOS::Foundation::NSMethodSignature*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSMethodSignature_typeof());
}

// public static extern bool _instancesRespondToSelector(ObjC.Selector aSelector) [static] :47467
bool NSObject::_instancesRespondToSelector(uObjC::Selector aSelector_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_instancesRespondToSelector(ObjC.Selector)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, BOOL, @selector(instancesRespondToSelector:),
        (::SEL)aSelector_);
    return (bool)__return;
}

// public static extern bool _isSubclassOfClass(ObjC.Class aClass) [static] :47494
bool NSObject::_isSubclassOfClass(::Class aClass_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_isSubclassOfClass(ObjC.Class)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, BOOL, @selector(isSubclassOfClass:),
        (::Class)aClass_);
    return (bool)__return;
}

// public static extern iOS.Foundation.NSSet _keyPathsForValuesAffectingValueForKey(string key) [static] :47557
::g::iOS::Foundation::NSSet* NSObject::_keyPathsForValuesAffectingValueForKey(uString* key_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_keyPathsForValuesAffectingValueForKey(string)");
    ::NSSet* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::NSSet*, @selector(keyPathsForValuesAffectingValueForKey:),
        uObjC::NativeString(key_));
    return (::g::iOS::Foundation::NSSet*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSSet_typeof());
}

// public static extern ObjC.ID _new() [static] :47455
::id NSObject::_new()
{
    uStackFrame __("iOS.Foundation.NSObject", "_new()");
    ::id __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::id, @selector(new));
    return (::id)__return;
}

// public static extern bool _resolveClassMethod(ObjC.Selector sel) [static] :47497
bool NSObject::_resolveClassMethod(uObjC::Selector sel_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_resolveClassMethod(ObjC.Selector)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, BOOL, @selector(resolveClassMethod:),
        (::SEL)sel_);
    return (bool)__return;
}

// public static extern bool _resolveInstanceMethod(ObjC.Selector sel) [static] :47500
bool NSObject::_resolveInstanceMethod(uObjC::Selector sel_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_resolveInstanceMethod(ObjC.Selector)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, BOOL, @selector(resolveInstanceMethod:),
        (::SEL)sel_);
    return (bool)__return;
}

// public static extern void _setVersion(int aVersion) [static] :47665
void NSObject::_setVersion(int aVersion_)
{
    uStackFrame __("iOS.Foundation.NSObject", "_setVersion(int)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(setVersion:),
        (long)aVersion_);
}

// public static extern ObjC.Class _superclass() [static] :47506
::Class NSObject::_superclass()
{
    uStackFrame __("iOS.Foundation.NSObject", "_superclass()");
    ::Class __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::Class, @selector(superclass));
    return (::Class)__return;
}

// public static extern int _version() [static] :47662
int NSObject::_version()
{
    uStackFrame __("iOS.Foundation.NSObject", "_version()");
    long __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, long, @selector(version));
    return (int)__return;
}

// public NSObject New() [static] :47423
NSObject* NSObject::New3()
{
    NSObject* obj1 = (NSObject*)uNew(NSObject_typeof());
    obj1->ctor_2();
    return obj1;
}

// public NSObject New(ObjC.ID __id) [static] :47425
NSObject* NSObject::New4(::id __id1)
{
    NSObject* obj2 = (NSObject*)uNew(NSObject_typeof());
    obj2->ctor_3(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::Foundation
