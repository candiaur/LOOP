// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.JavaScriptCore.Array.h>
#include <Fuse.Scripting.JavaScriptCore.Context.h>
#include <Fuse.Scripting.JavaScriptCore.Function.h>
#include <Fuse.Scripting.JavaScriptCore.JSContext.h>
#include <Fuse.Scripting.JavaScriptCore.JSValue.h>
#include <Fuse.Scripting.JavaScriptCore.Marshaller.CallbackExceptionHandler.h>
#include <Fuse.Scripting.JavaScriptCore.Marshaller.h>
#include <Fuse.Scripting.JavaScriptCore.Object.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <ObjC.Object.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[19];
static uType* TYPES[18];

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class Array :7
// {
static void Array_build(uType* type)
{
    ::STRINGS[0] = uString::Const("length");
    ::STRINGS[1] = uString::Const("Array.Length was not a number");
    ::TYPES[0] = uObject_typeof();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Uno::Double_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Array, _marshaller), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Array, _value), 0);
}

::g::Fuse::Scripting::Array_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Array", options);
    type->SetBase(::g::Fuse::Scripting::Array_typeof());
    type->fp_build_ = Array_build;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int*))Array__get_Length_fn;
    return type;
}

// internal Array(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object array) :12
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array)
{
    __this->ctor_1(marshaller, array);
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :41
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "Equals(Fuse.Scripting.Array)");
    Array* jsa = uCast<Array*>(a, Array_typeof());
    return *__retval = ::g::Uno::Object::Equals(uPtr(__this->_value), uPtr(jsa)->_value), void();
}

// public override sealed int GetHashCode() :47
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_value)), void();
}

// public override sealed object get_Item(int index) :20
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "get_Item(int)");
    int index_ = *index;
    return *__retval = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueAtIndex(__this->_value, index_)), void();
}

// public override sealed void set_Item(int index, object value) :24
void Array__set_Item_fn(Array* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "set_Item(int,object)");
    int index_ = *index;
    ::g::Fuse::Scripting::JavaScriptCore::JSValue::SetValueAtIndex(__this->_value, uPtr(__this->_marshaller)->Unwrap(value), index_);
}

// public override sealed int get_Length() :32
void Array__get_Length_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "get_Length()");
    uObject* len = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueForProperty(__this->_value, ::STRINGS[0/*"length"*/]));

    if (uIs(len, ::TYPES[1/*int*/]))
        return *__retval = uUnbox<int>(::TYPES[1/*int*/], len), void();

    if (uIs(len, ::TYPES[2/*double*/]))
        return *__retval = (int)uUnbox<double>(::TYPES[2/*double*/], len), void();

    U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Array.Lengt...*/]));
}

// internal Array New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object array) :12
void Array__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array, Array** __retval)
{
    *__retval = Array::New1(marshaller, array);
}

// internal Array(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object array) [instance] :12
void Array::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", ".ctor(Fuse.Scripting.JavaScriptCore.Marshaller,ObjC.Object)");
    ctor_();
    _marshaller = marshaller;
    _value = array;
}

// internal Array New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object array) [static] :12
Array* Array::New1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array)
{
    Array* obj1 = (Array*)uNew(Array_typeof());
    obj1->ctor_1(marshaller, array);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno
// -------------------------------------------------------------------------

// private sealed extern class Marshaller.CallbackExceptionHandler :151
// {
static void Marshaller__CallbackExceptionHandler_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Scripting::Error_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller__CallbackExceptionHandler, _callback), 0);
}

uType* Marshaller__CallbackExceptionHandler_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Marshaller__CallbackExceptionHandler);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.Marshaller.CallbackExceptionHandler", options);
    type->fp_build_ = Marshaller__CallbackExceptionHandler_build;
    return type;
}

// public CallbackExceptionHandler(Fuse.Scripting.Callback callback) :155
void Marshaller__CallbackExceptionHandler__ctor__fn(Marshaller__CallbackExceptionHandler* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public object Call(ObjC.Object context, object[] args) :160
void Marshaller__CallbackExceptionHandler__Call_fn(Marshaller__CallbackExceptionHandler* __this, uObject* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Call(context, args);
}

// public CallbackExceptionHandler New(Fuse.Scripting.Callback callback) :155
void Marshaller__CallbackExceptionHandler__New1_fn(uDelegate* callback, Marshaller__CallbackExceptionHandler** __retval)
{
    *__retval = Marshaller__CallbackExceptionHandler::New1(callback);
}

// public CallbackExceptionHandler(Fuse.Scripting.Callback callback) [instance] :155
void Marshaller__CallbackExceptionHandler::ctor_(uDelegate* callback)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller.CallbackExceptionHandler", ".ctor(Fuse.Scripting.Callback)");
    _callback = callback;
}

// public object Call(ObjC.Object context, object[] args) [instance] :160
uObject* Marshaller__CallbackExceptionHandler::Call(uObject* context, uArray* args)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller.CallbackExceptionHandler", "Call(ObjC.Object,object[])");

    try
    {
        return uPtr(_callback)->Invoke(1, args);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[3/*Fuse.Scripting.Error*/]))
        {
            ::g::Fuse::Scripting::Error* e = (::g::Fuse::Scripting::Error*)__t.Exception;
            ::g::Fuse::Scripting::JavaScriptCore::JSContext::SetException(context, uPtr(e)->Message());
        }
        else throw __t;
    }

    return NULL;
}

// public CallbackExceptionHandler New(Fuse.Scripting.Callback callback) [static] :155
Marshaller__CallbackExceptionHandler* Marshaller__CallbackExceptionHandler::New1(uDelegate* callback)
{
    Marshaller__CallbackExceptionHandler* obj1 = (Marshaller__CallbackExceptionHandler*)uNew(Marshaller__CallbackExceptionHandler_typeof());
    obj1->ctor_(callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno
// -------------------------------------------------------------------------

// public sealed extern class Context :175
// {
static void Context_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Context.Evaluate.fileName");
    ::STRINGS[3] = uString::Const("Context.Evaluate.code");
    ::STRINGS[4] = uString::Const("name");
    ::STRINGS[5] = uString::Const("message");
    ::STRINGS[6] = uString::Const("fileName");
    ::STRINGS[7] = uString::Const("sourceURL");
    ::STRINGS[8] = uString::Const("line");
    ::STRINGS[9] = uString::Const("lineNumber");
    ::STRINGS[10] = uString::Const("stack");
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof());
    ::TYPES[6] = ::g::Fuse::Scripting::JavaScriptCore::Object_typeof();
    ::TYPES[7] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Double_typeof();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(3,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _global), 0,
        ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _marshaller), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Context__New1_fn, 0, true, Context_typeof(), 1, ::g::Uno::Threading::IDispatcher_typeof()));
}

::g::Fuse::Scripting::Context_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Context_type);
    type = (::g::Fuse::Scripting::Context_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Context", options);
    type->SetBase(::g::Fuse::Scripting::Context_typeof());
    type->fp_build_ = Context_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    return type;
}

// public Context(Uno.Threading.IDispatcher ownerThread) :181
void Context__ctor_1_fn(Context* __this, uObject* ownerThread)
{
    __this->ctor_1(ownerThread);
}

// public override sealed void Dispose() :237
void Context__Dispose_fn(Context* __this)
{
}

// public override sealed object Evaluate(string fileName, string code) :222
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "Evaluate(string,string)");

    if (::g::Uno::String::op_Equality(fileName, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[2/*"Context.Eva...*/]));

    if (::g::Uno::String::op_Equality(code, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[3/*"Context.Eva...*/]));

    return *__retval = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::JSContext::EvaluateWithFilePath(__this->_context, code, fileName)), void();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :231
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "get_GlobalObject()");
    return *__retval = __this->_global, void();
}

// public Context New(Uno.Threading.IDispatcher ownerThread) :181
void Context__New1_fn(uObject* ownerThread, Context** __retval)
{
    *__retval = Context::New1(ownerThread);
}

// private static void OnException(ObjC.Object context, ObjC.Object value) :189
void Context__OnException_fn(uObject* context, uObject* value)
{
    Context::OnException(context, value);
}

// public Context(Uno.Threading.IDispatcher ownerThread) [instance] :181
void Context::ctor_1(uObject* ownerThread)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", ".ctor(Uno.Threading.IDispatcher)");
    ctor_(ownerThread);
    _context = ::g::Fuse::Scripting::JavaScriptCore::JSContext::Create();
    _marshaller = ::g::Fuse::Scripting::JavaScriptCore::Marshaller::New1(_context);
    _global = ::g::Fuse::Scripting::JavaScriptCore::Object::New1(_marshaller, ::g::Fuse::Scripting::JavaScriptCore::JSContext::GetGlobalObject(_context));
    ::g::Fuse::Scripting::JavaScriptCore::JSContext::SetExceptionHandler(_context, uDelegate::New(::TYPES[5/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)Context__OnException_fn));
}

// public Context New(Uno.Threading.IDispatcher ownerThread) [static] :181
Context* Context::New1(uObject* ownerThread)
{
    Context* obj6 = (Context*)uNew(Context_typeof());
    obj6->ctor_1(ownerThread);
    return obj6;
}

// private static void OnException(ObjC.Object context, ObjC.Object value) [static] :189
void Context::OnException(uObject* context, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "OnException(ObjC.Object,ObjC.Object)");
    uString* ind1;
    uString* ind2;
    uString* ind3;
    uString* ind4;
    uString* ind5;
    uString* name = NULL;
    uString* message = NULL;
    uString* file = NULL;
    int lineNumber = -1;
    uString* stack = NULL;
    uObject* wrapped = ::g::Fuse::Scripting::JavaScriptCore::Marshaller::New1(context)->Wrap(value);

    if (uIs(wrapped, ::TYPES[6/*Fuse.Scripting.JavaScriptCore.Object*/]))
    {
        ::g::Fuse::Scripting::JavaScriptCore::Object* o = uCast< ::g::Fuse::Scripting::JavaScriptCore::Object*>(wrapped, ::TYPES[6/*Fuse.Scripting.JavaScriptCore.Object*/]);
        name = (ind1 = uAs<uString*>(uPtr(o)->Item(::STRINGS[4/*"name"*/]), ::TYPES[7/*string*/]), (ind1 != NULL) ? ind1 : name);
        message = (ind2 = uAs<uString*>(o->Item(::STRINGS[5/*"message"*/]), ::TYPES[7/*string*/]), (ind2 != NULL) ? ind2 : message);
        file = (ind3 = (ind4 = uAs<uString*>(o->Item(::STRINGS[6/*"fileName"*/]), ::TYPES[7/*string*/]), (ind4 != NULL) ? ind4 : uAs<uString*>(o->Item(::STRINGS[7/*"sourceURL"*/]), ::TYPES[7/*string*/])), (ind3 != NULL) ? ind3 : file);
        uObject* l1 = o->Item(::STRINGS[8/*"line"*/]);
        uObject* l2 = o->Item(::STRINGS[9/*"lineNumber"*/]);
        lineNumber = uIs(l1, ::TYPES[2/*double*/]) ? (int)uUnbox<double>(::TYPES[2/*double*/], l1) : uIs(l2, ::TYPES[2/*double*/]) ? (int)uUnbox<double>(::TYPES[2/*double*/], l2) : uIs(l1, ::TYPES[1/*int*/]) ? uUnbox<int>(::TYPES[1/*int*/], l1) : uIs(l2, ::TYPES[1/*int*/]) ? uUnbox<int>(::TYPES[1/*int*/], l2) : lineNumber;
        stack = (ind5 = uAs<uString*>(o->Item(::STRINGS[10/*"stack"*/]), ::TYPES[7/*string*/]), (ind5 != NULL) ? ind5 : stack);
    }
    else
        message = (wrapped != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(wrapped)) : message;

    U_THROW(::g::Fuse::Scripting::ScriptException::New4(name, message, file, lineNumber, NULL, stack));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class Function :249
// {
static void Function_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Function, _marshaller), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Function, _value), 0);
}

::g::Fuse::Scripting::Function_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Function", options);
    type->SetBase(::g::Fuse::Scripting::Function_typeof());
    type->fp_build_ = Function_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    return type;
}

// internal Function(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object function) :254
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* function)
{
    __this->ctor_1(marshaller, function);
}

// public override sealed object Call(object[] args) :260
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "Call(object[])");
    return *__retval = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::JSValue::CallWithArguments(__this->_value, uPtr(__this->_marshaller)->Unwrap1(args))), void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :265
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "Construct(object[])");
    return *__retval = uCast< ::g::Fuse::Scripting::Object*>(uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::JSValue::ConstructWithArguments(__this->_value, uPtr(__this->_marshaller)->Unwrap1(args))), ::TYPES[4/*Fuse.Scripting.Object*/]), void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f) :270
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "Equals(Fuse.Scripting.Function)");
    return *__retval = uIs(f, Function_typeof()) && ::g::Uno::Object::Equals(uPtr(__this->_value), uPtr(uCast<Function*>(f, Function_typeof()))->_value), void();
}

// public override sealed int GetHashCode() :275
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_value)), void();
}

// internal Function New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object function) :254
void Function__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* function, Function** __retval)
{
    *__retval = Function::New1(marshaller, function);
}

// internal Function(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object function) [instance] :254
void Function::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* function)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", ".ctor(Fuse.Scripting.JavaScriptCore.Marshaller,ObjC.Object)");
    ctor_();
    _marshaller = marshaller;
    _value = function;
}

// internal Function New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object function) [static] :254
Function* Function::New1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* function)
{
    Function* obj1 = (Function*)uNew(Function_typeof());
    obj1->ctor_1(marshaller, function);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class Marshaller :63
// {
static void Marshaller_build(uType* type)
{
    ::STRINGS[11] = uString::Const("Function");
    ::STRINGS[12] = uString::Const("Array");
    ::STRINGS[13] = uString::Const("ArrayBuffer");
    ::STRINGS[14] = uString::Const("Uint8Array");
    ::STRINGS[15] = uString::Const("Unhandled type in JavaScriptCore wrapper: ");
    ::STRINGS[16] = uString::Const("Unhandled JSValue in JavaScriptCore wrapper");
    ::STRINGS[17] = uString::Const("byteLength");
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Uno::Double_typeof();
    ::TYPES[8] = ::g::Uno::Float_typeof();
    ::TYPES[7] = ::g::Uno::String_typeof();
    ::TYPES[9] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[6] = ::g::Fuse::Scripting::JavaScriptCore::Object_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::JavaScriptCore::Array_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::JavaScriptCore::Function_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[16] = ::g::Uno::Func2_typeof()->MakeType(::g::ObjC::Object_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[17] = ::g::ObjC::Object_typeof()->Array();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller, _arrayBufferType), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller, _arrayType), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller, _byteArrayType), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller, _context), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller, _externalType), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller, _functionType), 0);
}

uType* Marshaller_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Marshaller);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.Marshaller", options);
    type->fp_build_ = Marshaller_build;
    return type;
}

// public Marshaller(ObjC.Object context) :71
void Marshaller__ctor__fn(Marshaller* __this, uObject* context)
{
    __this->ctor_(context);
}

// public Marshaller New(ObjC.Object context) :71
void Marshaller__New1_fn(uObject* context, Marshaller** __retval)
{
    *__retval = Marshaller::New1(context);
}

// public ObjC.Object Unwrap(object obj) :99
void Marshaller__Unwrap_fn(Marshaller* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Unwrap(obj);
}

// public ObjC.Object[] Unwrap(object[] obj) :117
void Marshaller__Unwrap1_fn(Marshaller* __this, uArray* obj, uArray** __retval)
{
    *__retval = __this->Unwrap1(obj);
}

// private ObjC.Object UnwrapArrayBuffer(byte[] data) :127
void Marshaller__UnwrapArrayBuffer_fn(Marshaller* __this, uArray* data, uObject** __retval)
{
    *__retval = __this->UnwrapArrayBuffer(data);
}

// public object Wrap(ObjC.Object value) :82
void Marshaller__Wrap_fn(Marshaller* __this, uObject* value, uObject** __retval)
{
    *__retval = __this->Wrap(value);
}

// private byte[] WrapArrayBuffer(ObjC.Object value) :139
void Marshaller__WrapArrayBuffer_fn(Marshaller* __this, uObject* value, uArray** __retval)
{
    *__retval = __this->WrapArrayBuffer(value);
}

// public Marshaller(ObjC.Object context) [instance] :71
void Marshaller::ctor_(uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller", ".ctor(ObjC.Object)");
    _context = context;
    uObject* global = ::g::Fuse::Scripting::JavaScriptCore::JSContext::GetGlobalObject(_context);
    _functionType = ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueForProperty(global, ::STRINGS[11/*"Function"*/]);
    _arrayType = ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueForProperty(global, ::STRINGS[12/*"Array"*/]);
    _arrayBufferType = ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueForProperty(global, ::STRINGS[13/*"ArrayBuffer"*/]);
    _byteArrayType = ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueForProperty(global, ::STRINGS[14/*"Uint8Array"*/]);
    _externalType = ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueForExternal(context);
}

// public ObjC.Object Unwrap(object obj) [instance] :99
uObject* Marshaller::Unwrap(uObject* obj)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller", "Unwrap(object)");

    if (obj == NULL)
        return ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueWithNullInContext(_context);

    if (uIs(obj, ::TYPES[1/*int*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueWithIntInContext(uUnbox<int>(::TYPES[1/*int*/], obj), _context);

    if (uIs(obj, ::TYPES[2/*double*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueWithDoubleInContext(uUnbox<double>(::TYPES[2/*double*/], obj), _context);

    if (uIs(obj, ::TYPES[8/*float*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueWithDoubleInContext((double)uUnbox<float>(::TYPES[8/*float*/], obj), _context);

    if (uIs(obj, ::TYPES[7/*string*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueWithStringInContext(uCast<uString*>(obj, ::TYPES[7/*string*/]), _context);

    if (uIs(obj, ::TYPES[9/*Uno.UX.Selector*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueWithStringInContext(::g::Uno::UX::Selector__op_Implicit1(uUnbox< ::g::Uno::UX::Selector>(::TYPES[9/*Uno.UX.Selector*/], obj)), _context);

    if (uIs(obj, ::TYPES[10/*bool*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueWithBoolInContext(uUnbox<bool>(::TYPES[10/*bool*/], obj), _context);

    if (uIs(obj, ::TYPES[11/*byte[]*/]))
        return UnwrapArrayBuffer(uCast<uArray*>(obj, ::TYPES[11/*byte[]*/]));

    if (uIs(obj, ::TYPES[6/*Fuse.Scripting.JavaScriptCore.Object*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Object*>(obj, ::TYPES[6/*Fuse.Scripting.JavaScriptCore.Object*/]))->_value;

    if (uIs(obj, ::TYPES[12/*Fuse.Scripting.JavaScriptCore.Array*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Array*>(obj, ::TYPES[12/*Fuse.Scripting.JavaScriptCore.Array*/]))->_value;

    if (uIs(obj, ::TYPES[13/*Fuse.Scripting.JavaScriptCore.Function*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Function*>(obj, ::TYPES[13/*Fuse.Scripting.JavaScriptCore.Function*/]))->_value;

    if (uIs(obj, ::TYPES[14/*Fuse.Scripting.External*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValue::NewExternal(uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[14/*Fuse.Scripting.External*/]))->Object);

    if (uIs(obj, ::TYPES[15/*Fuse.Scripting.Callback*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueWithCallbackInContext(uDelegate::New(::TYPES[16/*Uno.Func<ObjC.Object, object[], object>*/], (void*)Marshaller__CallbackExceptionHandler__Call_fn, Marshaller__CallbackExceptionHandler::New1(uCast<uDelegate*>(obj, ::TYPES[15/*Fuse.Scripting.Callback*/]))), _context);

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[15/*"Unhandled t...*/], obj)));
}

// public ObjC.Object[] Unwrap(object[] obj) [instance] :117
uArray* Marshaller::Unwrap1(uArray* obj)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller", "Unwrap(object[])");
    uArray* result = uArray::New(::TYPES[17/*ObjC.Object[]*/], uPtr(obj)->Length());

    for (int i = 0; i < obj->Length(); ++i)
        uPtr(result)->Strong<uObject*>(i) = Unwrap(uPtr(obj)->Strong<uObject*>(i));

    return result;
}

// private ObjC.Object UnwrapArrayBuffer(byte[] data) [instance] :127
uObject* Marshaller::UnwrapArrayBuffer(uArray* data)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller", "UnwrapArrayBuffer(byte[])");
    int len = uPtr(data)->Length();
    uObject* arrayBuffer = ::g::Fuse::Scripting::JavaScriptCore::JSValue::ConstructWithArguments(_arrayBufferType, uArray::Init<uObject*>(::TYPES[17/*ObjC.Object[]*/], 1, (uObject*)::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueWithIntInContext(len, _context)));
    uObject* byteArray = ::g::Fuse::Scripting::JavaScriptCore::JSValue::ConstructWithArguments(_byteArrayType, uArray::Init<uObject*>(::TYPES[17/*ObjC.Object[]*/], 1, arrayBuffer));

    for (int i = 0; i < len; ++i)
        ::g::Fuse::Scripting::JavaScriptCore::JSValue::SetValueAtIndex(byteArray, ::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueWithIntInContext((int)uPtr(data)->Item<uint8_t>(i), _context), i);

    return arrayBuffer;
}

// public object Wrap(ObjC.Object value) [instance] :82
uObject* Marshaller::Wrap(uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller", "Wrap(ObjC.Object)");

    if (::g::Fuse::Scripting::JavaScriptCore::JSValue::IsNumber(value))
        return uBox(::TYPES[2/*double*/], ::g::Fuse::Scripting::JavaScriptCore::JSValue::ToDouble(value));

    if (::g::Fuse::Scripting::JavaScriptCore::JSValue::IsString(value))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValue::ToString(value);

    if (::g::Fuse::Scripting::JavaScriptCore::JSValue::IsBoolean(value))
        return uBox(::TYPES[10/*bool*/], ::g::Fuse::Scripting::JavaScriptCore::JSValue::ToBool(value));

    if (::g::Fuse::Scripting::JavaScriptCore::JSValue::IsObject(value))
    {
        if (::g::Fuse::Scripting::JavaScriptCore::JSValue::IsInstanceOf(value, _externalType))
            return ::g::Fuse::Scripting::External::New1(::g::Fuse::Scripting::JavaScriptCore::JSValue::GetExternalObject(value));

        if (::g::Fuse::Scripting::JavaScriptCore::JSValue::IsInstanceOf(value, _functionType))
            return ::g::Fuse::Scripting::JavaScriptCore::Function::New1(this, value);

        if (::g::Fuse::Scripting::JavaScriptCore::JSValue::IsInstanceOf(value, _arrayType))
            return ::g::Fuse::Scripting::JavaScriptCore::Array::New1(this, value);

        if (::g::Fuse::Scripting::JavaScriptCore::JSValue::IsInstanceOf(value, _arrayBufferType))
            return WrapArrayBuffer(value);

        return ::g::Fuse::Scripting::JavaScriptCore::Object::New1(this, value);
    }

    if (::g::Fuse::Scripting::JavaScriptCore::JSValue::IsUndefined(value) || ::g::Fuse::Scripting::JavaScriptCore::JSValue::IsNull(value))
        return NULL;

    U_THROW(::g::Uno::Exception::New2(::STRINGS[16/*"Unhandled J...*/]));
}

// private byte[] WrapArrayBuffer(ObjC.Object value) [instance] :139
uArray* Marshaller::WrapArrayBuffer(uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller", "WrapArrayBuffer(ObjC.Object)");
    uObject* byteArray = ::g::Fuse::Scripting::JavaScriptCore::JSValue::ConstructWithArguments(_byteArrayType, uArray::Init<uObject*>(::TYPES[17/*ObjC.Object[]*/], 1, value));
    int len = ::g::Fuse::Scripting::JavaScriptCore::JSValue::ToInt(::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueForProperty(value, ::STRINGS[17/*"byteLength"*/]));
    uArray* res = uArray::New(::TYPES[11/*byte[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(res)->Item<uint8_t>(i) = (uint8_t)::g::Fuse::Scripting::JavaScriptCore::JSValue::ToInt(::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueAtIndex(byteArray, i));

    return res;
}

// public Marshaller New(ObjC.Object context) [static] :71
Marshaller* Marshaller::New1(uObject* context)
{
    Marshaller* obj1 = (Marshaller*)uNew(Marshaller_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.29.22/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class Object :497
// {
static void Object_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Object.CallMethod.name");
    ::TYPES[0] = uObject_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::JavaScriptCore::Function_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Object, _marshaller), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Object, _value), 0);
}

::g::Fuse::Scripting::Object_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Object", options);
    type->SetBase(::g::Fuse::Scripting::Object_typeof());
    type->fp_build_ = Object_build;
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, uString*, uArray*, uObject**))Object__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))Object__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))Object__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Function*, bool*))Object__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))Object__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))Object__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))Object__get_Keys_fn;
    return type;
}

// internal Object(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object value) :502
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* value)
{
    __this->ctor_1(marshaller, value);
}

// public override sealed object CallMethod(string name, object[] args) :533
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "CallMethod(string,object[])");

    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[18/*"Object.Call...*/]));

    return *__retval = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::JSValue::InvokeMethodWithArguments(__this->_value, name, uPtr(__this->_marshaller)->Unwrap1(args))), void();
}

// public override sealed bool ContainsKey(string key) :539
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "ContainsKey(string)");
    return *__retval = ::g::Fuse::Scripting::JavaScriptCore::JSValue::HasProperty(__this->_value, key), void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o) :544
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "Equals(Fuse.Scripting.Object)");
    return *__retval = uIs(o, Object_typeof()) && ::g::Uno::Object::Equals(uPtr(__this->_value), uPtr(uCast<Object*>(o, Object_typeof()))->_value), void();
}

// public override sealed int GetHashCode() :549
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_value)), void();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :528
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "InstanceOf(Fuse.Scripting.Function)");
    return *__retval = uIs(type, ::TYPES[13/*Fuse.Scripting.JavaScriptCore.Function*/]) && ::g::Fuse::Scripting::JavaScriptCore::JSValue::IsInstanceOf(__this->_value, uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Function*>(type, ::TYPES[13/*Fuse.Scripting.JavaScriptCore.Function*/]))->_value), void();
}

// public override sealed object get_Item(string key) :510
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "get_Item(string)");
    return *__retval = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::JSValue::ValueForProperty(__this->_value, key)), void();
}

// public override sealed void set_Item(string key, object value) :514
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "set_Item(string,object)");
    ::g::Fuse::Scripting::JavaScriptCore::JSValue::SetValueForProperty(__this->_value, uPtr(__this->_marshaller)->Unwrap(value), key);
}

// public override sealed string[] get_Keys() :522
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "get_Keys()");
    return *__retval = ::g::Fuse::Scripting::JavaScriptCore::JSValue::GetKeys(__this->_value), void();
}

// internal Object New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object value) :502
void Object__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* value, Object** __retval)
{
    *__retval = Object::New1(marshaller, value);
}

// internal Object(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object value) [instance] :502
void Object::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", ".ctor(Fuse.Scripting.JavaScriptCore.Marshaller,ObjC.Object)");
    ctor_();
    _marshaller = marshaller;
    _value = value;
}

// internal Object New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object value) [static] :502
Object* Object::New1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* value)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_1(marshaller, value);
    return obj1;
}
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
