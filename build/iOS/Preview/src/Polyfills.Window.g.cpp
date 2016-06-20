// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PolyfillsWindow_bundle.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Polyfills.Window.Includes.h>
#include <Uno.Bool.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[9];
static uType* TYPES[1];

namespace g{
namespace Polyfills{
namespace Window{

// /usr/local/share/uno/Packages/Polyfills.Window/0.29.22/$.uno
// ------------------------------------------------------------

// public sealed class Includes :13
// {
static void Includes_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Polyfills/Window");
    ::STRINGS[1] = uString::Const("browser-Window");
    ::STRINGS[2] = uString::Const("window-Timers");
    ::STRINGS[3] = uString::Const("window-EventTarget");
    ::STRINGS[4] = uString::Const("window-Base64");
    ::STRINGS[5] = uString::Const("window-File");
    ::STRINGS[6] = uString::Const("window-XMLHttpRequest");
    ::STRINGS[7] = uString::Const("window-fetch");
    ::STRINGS[8] = uString::Const("window-localStorage");
    ::TYPES[0] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        Includes_typeof(), (uintptr_t)&::g::Polyfills::Window::Includes::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Includes__New2_fn, 0, true, Includes_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* Includes_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Includes);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Polyfills.Window.Includes", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_build_ = Includes_build;
    type->fp_ctor_ = (void*)Includes__New2_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))Includes__Evaluate_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Includes() :16
void Includes__ctor_2_fn(Includes* __this)
{
    __this->ctor_2();
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :22
void Includes__Evaluate_fn(Includes* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uStackFrame __("Polyfills.Window.Includes", "Evaluate(Fuse.Scripting.Context,Fuse.Scripting.ModuleResult)");
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::PolyfillsWindow_bundle::Windowa92bb9bd()))->EvaluateExports(c, ::STRINGS[1/*"browser-Win...*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::PolyfillsWindow_bundle::WindowTimers6763f18f()))->EvaluateExports(c, ::STRINGS[2/*"window-Timers"*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::PolyfillsWindow_bundle::EventTarget118313ae()))->EvaluateExports(c, ::STRINGS[3/*"window-Even...*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::PolyfillsWindow_bundle::WindowBase64f585fa6e()))->EvaluateExports(c, ::STRINGS[4/*"window-Base64"*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::PolyfillsWindow_bundle::File8d634f31()))->EvaluateExports(c, ::STRINGS[5/*"window-File"*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::PolyfillsWindow_bundle::XMLHttpRequest718ebf5d()))->EvaluateExports(c, ::STRINGS[6/*"window-XMLH...*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::PolyfillsWindow_bundle::fetch225073bf()))->EvaluateExports(c, ::STRINGS[7/*"window-fetch"*/]);
    ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::PolyfillsWindow_bundle::localStorage9abd7dbd()))->EvaluateExports(c, ::STRINGS[8/*"window-loca...*/]);
}

// public Includes New() :16
void Includes__New2_fn(Includes** __retval)
{
    *__retval = Includes::New2();
}

uSStrong<Includes*> Includes::_instance_;

// public Includes() [instance] :16
void Includes::ctor_2()
{
    uStackFrame __("Polyfills.Window.Includes", ".ctor()");
    ctor_1();

    if (Includes::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Includes::_instance_ = this, ::STRINGS[0/*"Polyfills/W...*/]);
}

// public Includes New() [static] :16
Includes* Includes::New2()
{
    Includes* obj1 = (Includes*)uNew(Includes_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}} // ::g::Polyfills::Window
