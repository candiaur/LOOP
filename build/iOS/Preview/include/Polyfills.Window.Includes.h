// This file was generated based on '/usr/local/share/uno/Packages/Polyfills.Window/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Polyfills{namespace Window{struct Includes;}}}

namespace g{
namespace Polyfills{
namespace Window{

// public sealed class Includes :13
// {
::g::Fuse::Scripting::NativeModule_type* Includes_typeof();
void Includes__ctor_2_fn(Includes* __this);
void Includes__Evaluate_fn(Includes* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result);
void Includes__New2_fn(Includes** __retval);

struct Includes : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Includes*> _instance_;
    static uSStrong<Includes*>& _instance() { return _instance_; }

    void ctor_2();
    static Includes* New2();
};
// }

}}} // ::g::Polyfills::Window
