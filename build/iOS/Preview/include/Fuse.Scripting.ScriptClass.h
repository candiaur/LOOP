// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.29.22/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptClass :169
// {
uType* ScriptClass_typeof();
void ScriptClass__ctor__fn(ScriptClass* __this, uType* unoType, uArray* methods);
void ScriptClass__Get_fn(uType* t, ScriptClass** __retval);
void ScriptClass__get_Methods_fn(ScriptClass* __this, uArray** __retval);
void ScriptClass__New1_fn(uType* unoType, uArray* methods, ScriptClass** __retval);
void ScriptClass__Register_fn(uType* unoType, uArray* methods);
void ScriptClass__get_SuperType_fn(ScriptClass* __this, ScriptClass** __retval);

struct ScriptClass : uObject
{
    uStrong<uArray*> _methods;
    uStrong<uType*> _unoType;
    static uSStrong< ::g::Uno::Collections::Dictionary*> _unoTypeToScriptClass_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _unoTypeToScriptClass() { return ScriptClass_typeof()->Init(), _unoTypeToScriptClass_; }

    void ctor_(uType* unoType, uArray* methods);
    uArray* Methods();
    ScriptClass* SuperType();
    static ScriptClass* Get(uType* t);
    static ScriptClass* New1(uType* unoType, uArray* methods);
    static void Register(uType* unoType, uArray* methods);
};
// }

}}} // ::g::Fuse::Scripting
