// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <duktape.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct duktape;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// internal static extern class duktape :592
// {
uClassType* duktape_typeof();
void duktape__config_buffer_fn(::duk_context** ctx, int* index, void** ptr, int* len);
void duktape__create_heap_default_fn(::duk_context** __retval);
void duktape__del_prop_index_fn(::duk_context** ctx, int* obj_index, int* arr_index, bool* __retval);
void duktape__destroy_heap_fn(::duk_context** ctx);
void duktape__enum_own_properties_fn(::duk_context** ctx, int* index);
void duktape__error_fn(::duk_context** ctx, uString* message);
void duktape__get_boolean_fn(::duk_context** ctx, int* index, bool* __retval);
void duktape__get_buffer_fn(::duk_context** ctx, int* index, int* size, void** __retval);
void duktape__get_buffer_data_fn(::duk_context** ctx, int* index, int* size, void** __retval);
void duktape__get_heapptr_fn(::duk_context** ctx, int* index, void** __retval);
void duktape__get_int_fn(::duk_context** ctx, int* index, int* __retval);
void duktape__get_length_fn(::duk_context** ctx, int* index, int64_t* __retval);
void duktape__get_number_fn(::duk_context** ctx, int* index, double* __retval);
void duktape__get_prop_index_fn(::duk_context** ctx, int* index, int* arr_index, bool* __retval);
void duktape__get_prop_string_fn(::duk_context** ctx, int* obj_index, uString* key, bool* __retval);
void duktape__get_string_fn(::duk_context** ctx, int* index, uString** __retval);
void duktape__has_prop_string_fn(::duk_context** ctx, int* index, uString* key, bool* __retval);
void duktape__instanceof_fn(::duk_context** ctx, int* index1, int* index2, bool* __retval);
void duktape__is_array_fn(::duk_context** ctx, int* index, bool* __retval);
void duktape__is_boolean_fn(::duk_context** ctx, int* index, bool* __retval);
void duktape__is_function_fn(::duk_context** ctx, int* index, bool* __retval);
void duktape__is_null_or_undefined_fn(::duk_context** ctx, int* index, bool* __retval);
void duktape__is_number_fn(::duk_context** ctx, int* index, bool* __retval);
void duktape__is_object_fn(::duk_context** ctx, int* index, bool* __retval);
void duktape__is_string_fn(::duk_context** ctx, int* index, bool* __retval);
void duktape__new__fn(::duk_context** ctx, int* nargs);
void duktape__next_fn(::duk_context** ctx, int* index, bool* getValue, bool* __retval);
void duktape__pcall_fn(::duk_context** ctx, int* nargs, int* __retval);
void duktape__pcall_method_fn(::duk_context** ctx, int* nargs, int* __retval);
void duktape__pcompile_fn(::duk_context** ctx, uint32_t* flags, int* __retval);
void duktape__pop_fn(::duk_context** ctx);
void duktape__pop_2_fn(::duk_context** ctx);
void duktape__push_array_buffer_fn(::duk_context** ctx, int* index, int* offset, int* length);
void duktape__push_boolean_fn(::duk_context** ctx, bool* value);
void duktape__push_callback_proxy_fn(::duk_context** ctx);
void duktape__push_external_buffer_fn(::duk_context** ctx);
void duktape__push_external_finalizer_fn(::duk_context** ctx);
void duktape__push_global_object_fn(::duk_context** ctx);
void duktape__push_global_stash_fn(::duk_context** ctx);
void duktape__push_heapptr_fn(::duk_context** ctx, void** ptr, int* __retval);
void duktape__push_int_fn(::duk_context** ctx, int* val);
void duktape__push_null_fn(::duk_context** ctx);
void duktape__push_number_fn(::duk_context** ctx, double* val);
void duktape__push_string_fn(::duk_context** ctx, uString* str);
void duktape__put_prop_index_fn(::duk_context** ctx, int* index, int* arr_index, bool* __retval);
void duktape__put_prop_string_fn(::duk_context** ctx, int* obj_index, uString* key, bool* __retval);
void duktape__safe_to_string_fn(::duk_context** ctx, int* index, uString** __retval);
void duktape__set_finalizer_fn(::duk_context** ctx, int* index);

struct duktape : uObject
{
    static void config_buffer(::duk_context* ctx, int index, void* ptr, int len);
    static ::duk_context* create_heap_default();
    static bool del_prop_index(::duk_context* ctx, int obj_index, int arr_index);
    static void destroy_heap(::duk_context* ctx);
    static void enum_own_properties(::duk_context* ctx, int index);
    static void error(::duk_context* ctx, uString* message);
    static bool get_boolean(::duk_context* ctx, int index);
    static void* get_buffer(::duk_context* ctx, int index, int* size);
    static void* get_buffer_data(::duk_context* ctx, int index, int* size);
    static void* get_heapptr(::duk_context* ctx, int index);
    static int get_int(::duk_context* ctx, int index);
    static int64_t get_length(::duk_context* ctx, int index);
    static double get_number(::duk_context* ctx, int index);
    static bool get_prop_index(::duk_context* ctx, int index, int arr_index);
    static bool get_prop_string(::duk_context* ctx, int obj_index, uString* key);
    static uString* get_string(::duk_context* ctx, int index);
    static bool has_prop_string(::duk_context* ctx, int index, uString* key);
    static bool instanceof(::duk_context* ctx, int index1, int index2);
    static bool is_array(::duk_context* ctx, int index);
    static bool is_boolean(::duk_context* ctx, int index);
    static bool is_function(::duk_context* ctx, int index);
    static bool is_null_or_undefined(::duk_context* ctx, int index);
    static bool is_number(::duk_context* ctx, int index);
    static bool is_object(::duk_context* ctx, int index);
    static bool is_string(::duk_context* ctx, int index);
    static void new_(::duk_context* ctx, int nargs);
    static bool next(::duk_context* ctx, int index, bool getValue);
    static int pcall(::duk_context* ctx, int nargs);
    static int pcall_method(::duk_context* ctx, int nargs);
    static int pcompile(::duk_context* ctx, uint32_t flags);
    static void pop(::duk_context* ctx);
    static void pop_2(::duk_context* ctx);
    static void push_array_buffer(::duk_context* ctx, int index, int offset, int length);
    static void push_boolean(::duk_context* ctx, bool value);
    static void push_callback_proxy(::duk_context* ctx);
    static void push_external_buffer(::duk_context* ctx);
    static void push_external_finalizer(::duk_context* ctx);
    static void push_global_object(::duk_context* ctx);
    static void push_global_stash(::duk_context* ctx);
    static int push_heapptr(::duk_context* ctx, void* ptr);
    static void push_int(::duk_context* ctx, int val);
    static void push_null(::duk_context* ctx);
    static void push_number(::duk_context* ctx, double val);
    static void push_string(::duk_context* ctx, uString* str);
    static bool put_prop_index(::duk_context* ctx, int index, int arr_index);
    static bool put_prop_string(::duk_context* ctx, int obj_index, uString* key);
    static uString* safe_to_string(::duk_context* ctx, int index);
    static void set_finalizer(::duk_context* ctx, int index);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
