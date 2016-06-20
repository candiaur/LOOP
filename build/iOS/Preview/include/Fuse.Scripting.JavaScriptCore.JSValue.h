// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct JSValue;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal static extern class JSValue :339
// {
uClassType* JSValue_typeof();
void JSValue__CallWithArguments_fn(uObject* jsValue, uArray* args, uObject** __retval);
void JSValue__ConstructWithArguments_fn(uObject* jsValue, uArray* args, uObject** __retval);
void JSValue__GetExternalObject_fn(uObject* o, uObject** __retval);
void JSValue__GetKeys_fn(uObject* jsValue, uArray** __retval);
void JSValue__HasProperty_fn(uObject* jsValue, uString* property, bool* __retval);
void JSValue__InvokeMethodWithArguments_fn(uObject* jsValue, uString* method, uArray* args, uObject** __retval);
void JSValue__IsArray_fn(uObject* jsValue, bool* __retval);
void JSValue__IsBoolean_fn(uObject* jsValue, bool* __retval);
void JSValue__IsInstanceOf_fn(uObject* jsValue1, uObject* jsValue2, bool* __retval);
void JSValue__IsNull_fn(uObject* jsValue, bool* __retval);
void JSValue__IsNumber_fn(uObject* jsValue, bool* __retval);
void JSValue__IsObject_fn(uObject* jsValue, bool* __retval);
void JSValue__IsString_fn(uObject* jsValue, bool* __retval);
void JSValue__IsUndefined_fn(uObject* jsValue, bool* __retval);
void JSValue__NewExternal_fn(uObject* o, uObject** __retval);
void JSValue__SetValueAtIndex_fn(uObject* array, uObject* value, int* index);
void JSValue__SetValueForProperty_fn(uObject* jsValue, uObject* value, uString* property);
void JSValue__ToBool_fn(uObject* jsValue, bool* __retval);
void JSValue__ToDouble_fn(uObject* jsValue, double* __retval);
void JSValue__ToInt_fn(uObject* jsValue, int* __retval);
void JSValue__ToString_fn(uObject* jsValue, uString** __retval);
void JSValue__ValueAtIndex_fn(uObject* array, int* index, uObject** __retval);
void JSValue__ValueForExternal_fn(uObject* context, uObject** __retval);
void JSValue__ValueForProperty_fn(uObject* jsValue, uString* property, uObject** __retval);
void JSValue__ValueWithBoolInContext_fn(bool* b, uObject* context, uObject** __retval);
void JSValue__ValueWithCallbackInContext_fn(uDelegate* callback, uObject* context, uObject** __retval);
void JSValue__ValueWithDoubleInContext_fn(double* d, uObject* context, uObject** __retval);
void JSValue__ValueWithIntInContext_fn(int* i, uObject* context, uObject** __retval);
void JSValue__ValueWithNullInContext_fn(uObject* context, uObject** __retval);
void JSValue__ValueWithStringInContext_fn(uString* s, uObject* context, uObject** __retval);

struct JSValue : uObject
{
    static uObject* CallWithArguments(uObject* jsValue, uArray* args);
    static uObject* ConstructWithArguments(uObject* jsValue, uArray* args);
    static uObject* GetExternalObject(uObject* o);
    static uArray* GetKeys(uObject* jsValue);
    static bool HasProperty(uObject* jsValue, uString* property);
    static uObject* InvokeMethodWithArguments(uObject* jsValue, uString* method, uArray* args);
    static bool IsArray(uObject* jsValue);
    static bool IsBoolean(uObject* jsValue);
    static bool IsInstanceOf(uObject* jsValue1, uObject* jsValue2);
    static bool IsNull(uObject* jsValue);
    static bool IsNumber(uObject* jsValue);
    static bool IsObject(uObject* jsValue);
    static bool IsString(uObject* jsValue);
    static bool IsUndefined(uObject* jsValue);
    static uObject* NewExternal(uObject* o);
    static void SetValueAtIndex(uObject* array, uObject* value, int index);
    static void SetValueForProperty(uObject* jsValue, uObject* value, uString* property);
    static bool ToBool(uObject* jsValue);
    static double ToDouble(uObject* jsValue);
    static int ToInt(uObject* jsValue);
    static uString* ToString(uObject* jsValue);
    static uObject* ValueAtIndex(uObject* array, int index);
    static uObject* ValueForExternal(uObject* context);
    static uObject* ValueForProperty(uObject* jsValue, uString* property);
    static uObject* ValueWithBoolInContext(bool b, uObject* context);
    static uObject* ValueWithCallbackInContext(uDelegate* callback, uObject* context);
    static uObject* ValueWithDoubleInContext(double d, uObject* context);
    static uObject* ValueWithIntInContext(int i, uObject* context);
    static uObject* ValueWithNullInContext(uObject* context);
    static uObject* ValueWithStringInContext(uString* s, uObject* context);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
