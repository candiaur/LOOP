// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.29.22/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ScriptMethod :94
// {
struct ScriptMethod_type : uType
{
    void(*fp_Call)(::g::Fuse::Scripting::ScriptMethod*, uObject*, uArray*, uObject**);
};

ScriptMethod_type* ScriptMethod_typeof();
void ScriptMethod__ctor__fn(ScriptMethod* __this, uString* name, int* thread);

struct ScriptMethod : uObject
{
    uStrong<uString*> Name;
    int Thread;

    void ctor_(uString* name, int thread);
    uObject* Call(uObject* obj, uArray* args) { uObject* __retval; return (((ScriptMethod_type*)__type)->fp_Call)(this, obj, args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
