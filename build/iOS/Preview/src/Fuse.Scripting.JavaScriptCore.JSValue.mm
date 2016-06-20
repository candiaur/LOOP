// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.JavaScriptCore.JSValue.h>
#include <Fuse.Scripting.JavaScriptCore.Marshaller.h>
#include <Implementation/External.h>
#include <JavaScriptCore/JavaScriptCore.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal static extern class JSValue :339
// {
static void JSValue_build(uType* type)
{
}

uClassType* JSValue_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.JSValue", options);
    type->fp_build_ = JSValue_build;
    return type;
}

// public static ObjC.Object CallWithArguments(ObjC.Object jsValue, ObjC.Object[] args) :384
void JSValue__CallWithArguments_fn(uObject* jsValue, uArray* args, uObject** __retval)
{
    *__retval = JSValue::CallWithArguments(jsValue, args);
}

// public static ObjC.Object ConstructWithArguments(ObjC.Object jsValue, ObjC.Object[] args) :390
void JSValue__ConstructWithArguments_fn(uObject* jsValue, uArray* args, uObject** __retval)
{
    *__retval = JSValue::ConstructWithArguments(jsValue, args);
}

// public static object GetExternalObject(ObjC.Object o) :348
void JSValue__GetExternalObject_fn(uObject* o, uObject** __retval)
{
    *__retval = JSValue::GetExternalObject(o);
}

// public static string[] GetKeys(ObjC.Object jsValue) :396
void JSValue__GetKeys_fn(uObject* jsValue, uArray** __retval)
{
    *__retval = JSValue::GetKeys(jsValue);
}

// public static bool HasProperty(ObjC.Object jsValue, string property) :422
void JSValue__HasProperty_fn(uObject* jsValue, uString* property, bool* __retval)
{
    *__retval = JSValue::HasProperty(jsValue, property);
}

// public static ObjC.Object InvokeMethodWithArguments(ObjC.Object jsValue, string method, ObjC.Object[] args) :416
void JSValue__InvokeMethodWithArguments_fn(uObject* jsValue, uString* method, uArray* args, uObject** __retval)
{
    *__retval = JSValue::InvokeMethodWithArguments(jsValue, method, args);
}

// public static bool IsArray(ObjC.Object jsValue) :436
void JSValue__IsArray_fn(uObject* jsValue, bool* __retval)
{
    *__retval = JSValue::IsArray(jsValue);
}

// public static bool IsBoolean(ObjC.Object jsValue) :432
void JSValue__IsBoolean_fn(uObject* jsValue, bool* __retval)
{
    *__retval = JSValue::IsBoolean(jsValue);
}

// public static bool IsInstanceOf(ObjC.Object jsValue1, ObjC.Object jsValue2) :410
void JSValue__IsInstanceOf_fn(uObject* jsValue1, uObject* jsValue2, bool* __retval)
{
    *__retval = JSValue::IsInstanceOf(jsValue1, jsValue2);
}

// public static bool IsNull(ObjC.Object jsValue) :438
void JSValue__IsNull_fn(uObject* jsValue, bool* __retval)
{
    *__retval = JSValue::IsNull(jsValue);
}

// public static bool IsNumber(ObjC.Object jsValue) :428
void JSValue__IsNumber_fn(uObject* jsValue, bool* __retval)
{
    *__retval = JSValue::IsNumber(jsValue);
}

// public static bool IsObject(ObjC.Object jsValue) :434
void JSValue__IsObject_fn(uObject* jsValue, bool* __retval)
{
    *__retval = JSValue::IsObject(jsValue);
}

// public static bool IsString(ObjC.Object jsValue) :430
void JSValue__IsString_fn(uObject* jsValue, bool* __retval)
{
    *__retval = JSValue::IsString(jsValue);
}

// public static bool IsUndefined(ObjC.Object jsValue) :440
void JSValue__IsUndefined_fn(uObject* jsValue, bool* __retval)
{
    *__retval = JSValue::IsUndefined(jsValue);
}

// public static ObjC.Object NewExternal(object o) :342
void JSValue__NewExternal_fn(uObject* o, uObject** __retval)
{
    *__retval = JSValue::NewExternal(o);
}

// public static void SetValueAtIndex(ObjC.Object array, ObjC.Object value, int index) :372
void JSValue__SetValueAtIndex_fn(uObject* array, uObject* value, int* index)
{
    JSValue::SetValueAtIndex(array, value, *index);
}

// public static void SetValueForProperty(ObjC.Object jsValue, ObjC.Object value, string property) :378
void JSValue__SetValueForProperty_fn(uObject* jsValue, uObject* value, uString* property)
{
    JSValue::SetValueForProperty(jsValue, value, property);
}

// public static bool ToBool(ObjC.Object jsValue) :448
void JSValue__ToBool_fn(uObject* jsValue, bool* __retval)
{
    *__retval = JSValue::ToBool(jsValue);
}

// public static double ToDouble(ObjC.Object jsValue) :442
void JSValue__ToDouble_fn(uObject* jsValue, double* __retval)
{
    *__retval = JSValue::ToDouble(jsValue);
}

// public static int ToInt(ObjC.Object jsValue) :444
void JSValue__ToInt_fn(uObject* jsValue, int* __retval)
{
    *__retval = JSValue::ToInt(jsValue);
}

// public static string ToString(ObjC.Object jsValue) :446
void JSValue__ToString_fn(uObject* jsValue, uString** __retval)
{
    *__retval = JSValue::ToString(jsValue);
}

// public static ObjC.Object ValueAtIndex(ObjC.Object array, int index) :366
void JSValue__ValueAtIndex_fn(uObject* array, int* index, uObject** __retval)
{
    *__retval = JSValue::ValueAtIndex(array, *index);
}

// public static ObjC.Object ValueForExternal(ObjC.Object context) :354
void JSValue__ValueForExternal_fn(uObject* context, uObject** __retval)
{
    *__retval = JSValue::ValueForExternal(context);
}

// public static ObjC.Object ValueForProperty(ObjC.Object jsValue, string property) :360
void JSValue__ValueForProperty_fn(uObject* jsValue, uString* property, uObject** __retval)
{
    *__retval = JSValue::ValueForProperty(jsValue, property);
}

// public static ObjC.Object ValueWithBoolInContext(bool b, ObjC.Object context) :458
void JSValue__ValueWithBoolInContext_fn(bool* b, uObject* context, uObject** __retval)
{
    *__retval = JSValue::ValueWithBoolInContext(*b, context);
}

// public static ObjC.Object ValueWithCallbackInContext(Uno.Func<ObjC.Object, object[], object> callback, ObjC.Object context) :462
void JSValue__ValueWithCallbackInContext_fn(uDelegate* callback, uObject* context, uObject** __retval)
{
    *__retval = JSValue::ValueWithCallbackInContext(callback, context);
}

// public static ObjC.Object ValueWithDoubleInContext(double d, ObjC.Object context) :454
void JSValue__ValueWithDoubleInContext_fn(double* d, uObject* context, uObject** __retval)
{
    *__retval = JSValue::ValueWithDoubleInContext(*d, context);
}

// public static ObjC.Object ValueWithIntInContext(int i, ObjC.Object context) :452
void JSValue__ValueWithIntInContext_fn(int* i, uObject* context, uObject** __retval)
{
    *__retval = JSValue::ValueWithIntInContext(*i, context);
}

// public static ObjC.Object ValueWithNullInContext(ObjC.Object context) :450
void JSValue__ValueWithNullInContext_fn(uObject* context, uObject** __retval)
{
    *__retval = JSValue::ValueWithNullInContext(context);
}

// public static ObjC.Object ValueWithStringInContext(string s, ObjC.Object context) :456
void JSValue__ValueWithStringInContext_fn(uString* s, uObject* context, uObject** __retval)
{
    *__retval = JSValue::ValueWithStringInContext(s, context);
}

// public static ObjC.Object CallWithArguments(ObjC.Object jsValue, ObjC.Object[] args) [static] :384
uObject* JSValue::CallWithArguments(uObject* jsValue, uArray* args)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "CallWithArguments(ObjC.Object,ObjC.Object[])");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id jsValue, id<UnoArray> args) -> ::id
        {
            return [(::JSValue*)jsValue callWithArguments: [args copyArray]];
        } (::g::ObjC::Helpers::GetHandle(jsValue), [::StrongUnoArray strongUnoArrayWithUnoArray: args getAt: ^ id (::uArray* arr, int i) { return ::g::ObjC::Helpers::GetHandle(arr->Strong<uObject*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uObject*>(i) = ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(obj); }]));
        
    }
    
}

// public static ObjC.Object ConstructWithArguments(ObjC.Object jsValue, ObjC.Object[] args) [static] :390
uObject* JSValue::ConstructWithArguments(uObject* jsValue, uArray* args)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ConstructWithArguments(ObjC.Object,ObjC.Object[])");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id jsValue, id<UnoArray> args) -> ::id
        {
            return [(::JSValue*)jsValue constructWithArguments: [args copyArray]];
        } (::g::ObjC::Helpers::GetHandle(jsValue), [::StrongUnoArray strongUnoArrayWithUnoArray: args getAt: ^ id (::uArray* arr, int i) { return ::g::ObjC::Helpers::GetHandle(arr->Strong<uObject*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uObject*>(i) = ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(obj); }]));
        
    }
    
}

// public static object GetExternalObject(ObjC.Object o) [static] :348
uObject* JSValue::GetExternalObject(uObject* o)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "GetExternalObject(ObjC.Object)");
    @autoreleasepool
    {
        return ([] (::id o) -> id<UnoObject>
        {
            return [(ExternalUnoObject*)[(::JSValue*)o toObject] object];
        } (::g::ObjC::Helpers::GetHandle(o))).unoObject;
        
    }
    
}

// public static string[] GetKeys(ObjC.Object jsValue) [static] :396
uArray* JSValue::GetKeys(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "GetKeys(ObjC.Object)");
    @autoreleasepool
    {
        return uCast<uArray*>(([] (::id jsValue) -> id<UnoArray>
        {
            NSDictionary* dict = [(::JSValue*)jsValue toDictionary];
            int index = 0;
            id<UnoArray> res = [&]() -> id<UnoArray> { ::uForeignPool __foreignPool; return [::StrongUnoArray strongUnoArrayWithUnoArray: uArray::New(::g::Uno::String_typeof()->Array(), (int)[dict count]) getAt: ^ id (::uArray* arr, int i) { return (::id)::uObjC::NativeString(arr->Strong<uString*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uString*>(i) = ::uObjC::UnoString((::NSString*)obj); }]; }();
            for (NSString* key in dict)
            {
            	uCast<uArray*>((res).unoArray, ::g::Uno::String_typeof()->Array())->Strong<uString*>(index) = ::uObjC::UnoString(key);
            	++index;
            }
            return res;
        } (::g::ObjC::Helpers::GetHandle(jsValue))).unoArray, ::g::Uno::String_typeof()->Array());
        
    }
    
}

// public static bool HasProperty(ObjC.Object jsValue, string property) [static] :422
bool JSValue::HasProperty(uObject* jsValue, uString* property)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "HasProperty(ObjC.Object,string)");
    @autoreleasepool
    {
        return [] (::id jsValue, ::NSString* property) -> bool
        {
            return [(::JSValue*)jsValue hasProperty: property];
        } (::g::ObjC::Helpers::GetHandle(jsValue), ::uObjC::NativeString(property));
        
    }
    
}

// public static ObjC.Object InvokeMethodWithArguments(ObjC.Object jsValue, string method, ObjC.Object[] args) [static] :416
uObject* JSValue::InvokeMethodWithArguments(uObject* jsValue, uString* method, uArray* args)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "InvokeMethodWithArguments(ObjC.Object,string,ObjC.Object[])");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id jsValue, ::NSString* method, id<UnoArray> args) -> ::id
        {
            return [(::JSValue*)jsValue invokeMethod: method withArguments: [args copyArray]];
        } (::g::ObjC::Helpers::GetHandle(jsValue), ::uObjC::NativeString(method), [::StrongUnoArray strongUnoArrayWithUnoArray: args getAt: ^ id (::uArray* arr, int i) { return ::g::ObjC::Helpers::GetHandle(arr->Strong<uObject*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uObject*>(i) = ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(obj); }]));
        
    }
    
}

// public static bool IsArray(ObjC.Object jsValue) [static] :436
bool JSValue::IsArray(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "IsArray(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(::JSValue*)jsValue isArray];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static bool IsBoolean(ObjC.Object jsValue) [static] :432
bool JSValue::IsBoolean(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "IsBoolean(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(::JSValue*)jsValue isBoolean];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static bool IsInstanceOf(ObjC.Object jsValue1, ObjC.Object jsValue2) [static] :410
bool JSValue::IsInstanceOf(uObject* jsValue1, uObject* jsValue2)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "IsInstanceOf(ObjC.Object,ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue1, ::id jsValue2) -> bool
        {
            return [(::JSValue*)jsValue1 isInstanceOf: (::JSValue*)jsValue2];
        } (::g::ObjC::Helpers::GetHandle(jsValue1), ::g::ObjC::Helpers::GetHandle(jsValue2));
        
    }
    
}

// public static bool IsNull(ObjC.Object jsValue) [static] :438
bool JSValue::IsNull(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "IsNull(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(::JSValue*)jsValue isNull];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static bool IsNumber(ObjC.Object jsValue) [static] :428
bool JSValue::IsNumber(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "IsNumber(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(::JSValue*)jsValue isNumber];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static bool IsObject(ObjC.Object jsValue) [static] :434
bool JSValue::IsObject(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "IsObject(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(::JSValue*)jsValue isObject];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static bool IsString(ObjC.Object jsValue) [static] :430
bool JSValue::IsString(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "IsString(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(::JSValue*)jsValue isString];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static bool IsUndefined(ObjC.Object jsValue) [static] :440
bool JSValue::IsUndefined(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "IsUndefined(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(::JSValue*)jsValue isUndefined];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static ObjC.Object NewExternal(object o) [static] :342
uObject* JSValue::NewExternal(uObject* o)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "NewExternal(object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (id<UnoObject> o) -> ::id
        {
            return [[[ExternalUnoObject alloc] initWithObject: o] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: o]));
        
    }
    
}

// public static void SetValueAtIndex(ObjC.Object array, ObjC.Object value, int index) [static] :372
void JSValue::SetValueAtIndex(uObject* array, uObject* value, int index)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "SetValueAtIndex(ObjC.Object,ObjC.Object,int)");
    @autoreleasepool
    {
        [] (::id array, ::id value, int index) -> void
        {
            [(::JSValue*)array setValue: value atIndex: (NSUInteger)index];
        } (::g::ObjC::Helpers::GetHandle(array), ::g::ObjC::Helpers::GetHandle(value), index);
        
    }
    
}

// public static void SetValueForProperty(ObjC.Object jsValue, ObjC.Object value, string property) [static] :378
void JSValue::SetValueForProperty(uObject* jsValue, uObject* value, uString* property)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "SetValueForProperty(ObjC.Object,ObjC.Object,string)");
    @autoreleasepool
    {
        [] (::id jsValue, ::id value, ::NSString* property) -> void
        {
            [(::JSValue*)jsValue setValue: value forProperty: property];
        } (::g::ObjC::Helpers::GetHandle(jsValue), ::g::ObjC::Helpers::GetHandle(value), ::uObjC::NativeString(property));
        
    }
    
}

// public static bool ToBool(ObjC.Object jsValue) [static] :448
bool JSValue::ToBool(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ToBool(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(::JSValue*)jsValue toBool];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static double ToDouble(ObjC.Object jsValue) [static] :442
double JSValue::ToDouble(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ToDouble(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> double
        {
            return [(::JSValue*)jsValue toDouble];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static int ToInt(ObjC.Object jsValue) [static] :444
int JSValue::ToInt(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ToInt(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> int
        {
            return [(::JSValue*)jsValue toInt32];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static string ToString(ObjC.Object jsValue) [static] :446
uString* JSValue::ToString(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ToString(ObjC.Object)");
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id jsValue) -> ::NSString*
        {
            return [(::JSValue*)jsValue toString];
        } (::g::ObjC::Helpers::GetHandle(jsValue)));
        
    }
    
}

// public static ObjC.Object ValueAtIndex(ObjC.Object array, int index) [static] :366
uObject* JSValue::ValueAtIndex(uObject* array, int index)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ValueAtIndex(ObjC.Object,int)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id array, int index) -> ::id
        {
            return [(::JSValue*)array valueAtIndex: index];
        } (::g::ObjC::Helpers::GetHandle(array), index));
        
    }
    
}

// public static ObjC.Object ValueForExternal(ObjC.Object context) [static] :354
uObject* JSValue::ValueForExternal(uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ValueForExternal(ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id context) -> ::id
        {
            return [::JSValue valueWithObject: [ExternalUnoObject class] inContext: context];
        } (::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// public static ObjC.Object ValueForProperty(ObjC.Object jsValue, string property) [static] :360
uObject* JSValue::ValueForProperty(uObject* jsValue, uString* property)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ValueForProperty(ObjC.Object,string)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id jsValue, ::NSString* property) -> ::id
        {
            return [(::JSValue*)jsValue valueForProperty: property];
        } (::g::ObjC::Helpers::GetHandle(jsValue), ::uObjC::NativeString(property)));
        
    }
    
}

// public static ObjC.Object ValueWithBoolInContext(bool b, ObjC.Object context) [static] :458
uObject* JSValue::ValueWithBoolInContext(bool b, uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ValueWithBoolInContext(bool,ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (bool b, ::id context) -> ::id
        {
            return [::JSValue valueWithBool: b inContext: (::JSContext*)context];
        } (b, ::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// public static ObjC.Object ValueWithCallbackInContext(Uno.Func<ObjC.Object, object[], object> callback, ObjC.Object context) [static] :462
uObject* JSValue::ValueWithCallbackInContext(uDelegate* callback, uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ValueWithCallbackInContext(Uno.Func<ObjC.Object, object[], object>,ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::uObjC::Function<id<UnoObject>, ::id, id<UnoArray>> callback, ::id context) -> ::id
        {
            ::JSValue* (^callbackBlock)() = [[^ ::JSValue* ()
            {
            	::JSContext* innerContext = [::JSContext currentContext];
            	NSArray* args = [::JSContext currentArguments];
            	id<UnoObject> marshaller
            		= [&]() -> id<UnoObject> { ::uForeignPool __foreignPool; return [::StrongUnoObject strongUnoObjectWithUnoObject: ::g::Fuse::Scripting::JavaScriptCore::Marshaller::New1(::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(innerContext))]; }();
            	id<UnoArray> wrappedArgs = [&]() -> id<UnoArray> { ::uForeignPool __foreignPool; return [::StrongUnoArray strongUnoArrayWithUnoArray: uArray::New(uObject_typeof()->Array(), (int)args.count) getAt: ^ id (::uArray* arr, int i) { return (::id)[::StrongUnoObject strongUnoObjectWithUnoObject: arr->Strong<uObject*>(i)]; } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uObject*>(i) = ((id<UnoObject>)obj).unoObject; }]; }();
            	{
            		int i = 0;
            		for (::JSValue* arg in args)
            		{
            			id<UnoObject> wrappedArg =
            			    [&]() -> id<UnoObject> { ::uForeignPool __foreignPool; return [::StrongUnoObject strongUnoObjectWithUnoObject: uCast<::g::Fuse::Scripting::JavaScriptCore::Marshaller*>((marshaller).unoObject, ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof())->Wrap(::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg))]; }();
            			uCast<uArray*>((wrappedArgs).unoArray, uObject_typeof()->Array())->Strong<uObject*>(i) = (wrappedArg).unoObject;
            			++i;
            		}
            	}
            
            	id<UnoObject> result = callback(innerContext, wrappedArgs);
            	return [&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Helpers::GetHandle(uCast<::g::Fuse::Scripting::JavaScriptCore::Marshaller*>((marshaller).unoObject, ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof())->Unwrap((result).unoObject)); }();
            } copy] autorelease];
            return [::JSValue valueWithObject: callbackBlock inContext: context];
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<id<UnoObject>, ::id, id<UnoArray>>
        {
            return [[^ id<UnoObject> (::id arg1, id<UnoArray> arg2)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                return [::StrongUnoObject strongUnoObjectWithUnoObject: __unoDelegate->Invoke(2, ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg1), uCast<uArray*>((arg2).unoArray, uObject_typeof()->Array()))];
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback]), ::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// public static ObjC.Object ValueWithDoubleInContext(double d, ObjC.Object context) [static] :454
uObject* JSValue::ValueWithDoubleInContext(double d, uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ValueWithDoubleInContext(double,ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (double d, ::id context) -> ::id
        {
            return [::JSValue valueWithDouble: d inContext: (::JSContext*)context];
        } (d, ::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// public static ObjC.Object ValueWithIntInContext(int i, ObjC.Object context) [static] :452
uObject* JSValue::ValueWithIntInContext(int i, uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ValueWithIntInContext(int,ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (int i, ::id context) -> ::id
        {
            return [::JSValue valueWithInt32: i inContext: (::JSContext*)context];
        } (i, ::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// public static ObjC.Object ValueWithNullInContext(ObjC.Object context) [static] :450
uObject* JSValue::ValueWithNullInContext(uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ValueWithNullInContext(ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id context) -> ::id
        {
            return [::JSValue valueWithNullInContext: (::JSContext*)context];
        } (::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// public static ObjC.Object ValueWithStringInContext(string s, ObjC.Object context) [static] :456
uObject* JSValue::ValueWithStringInContext(uString* s, uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValue", "ValueWithStringInContext(string,ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::NSString* s, ::id context) -> ::id
        {
            return [::JSValue valueWithObject: s inContext: (::JSContext*)context];
        } (::uObjC::NativeString(s), ::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
