// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Module.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule;}}}
namespace g{namespace Uno{namespace IO{struct Bundle;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public partial class ScriptModule :17
// {
::g::Fuse::Scripting::Module_type* ScriptModule_typeof();
void ScriptModule__ctor_1_fn(ScriptModule* __this, ::g::Uno::UX::NameTable* names, uDelegate* unwrapper);
void ScriptModule__Acceptor_fn(ScriptModule* __this, uObject* obj, bool* __retval);
void ScriptModule__get_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle** __retval);
void ScriptModule__set_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle* value);
void ScriptModule__get_Code_fn(ScriptModule* __this, uString** __retval);
void ScriptModule__set_Code_fn(ScriptModule* __this, uString* value);
void ScriptModule__ComputePath_fn(ScriptModule* __this, uString* moduleId, bool* isFile, uString** __retval);
void ScriptModule__ComputePath1_fn(uString* sourcePath, uString* moduleId, uString** __retval);
void ScriptModule__Evaluate_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result);
void ScriptModule__get_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval);
void ScriptModule__set_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource* value);
void ScriptModule__get_FileName_fn(ScriptModule* __this, uString** __retval);
void ScriptModule__set_FileName_fn(ScriptModule* __this, uString* value);
void ScriptModule__GetFile_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval);
void ScriptModule__GetSourcePath_fn(ScriptModule* __this, uString** __retval);
void ScriptModule__IsPathEqual_fn(uString* src, uString* path, bool* __retval);
void ScriptModule__get_LineNumberOffset_fn(ScriptModule* __this, int* __retval);
void ScriptModule__set_LineNumberOffset_fn(ScriptModule* __this, int* value);
void ScriptModule__LookForFile_fn(ScriptModule* __this, uString* path, ::g::Uno::IO::BundleFile** __retval);
void ScriptModule__New1_fn(::g::Uno::UX::NameTable* names, uDelegate* unwrapper, ScriptModule** __retval);
void ScriptModule__TryResolve_fn(ScriptModule* __this, uString* path, bool* isFile, ::g::Fuse::Scripting::Module** __retval);

struct ScriptModule : ::g::Fuse::Scripting::Module
{
    uStrong< ::g::Uno::IO::Bundle*> _bundle;
    uStrong<uString*> _code;
    uStrong< ::g::Uno::UX::FileSource*> _file;
    uStrong<uString*> _fileName;
    int _lineNumberOffset;
    uStrong< ::g::Uno::UX::NameTable*> _names;
    uStrong<uDelegate*> _unwrapper;
    static uSStrong<uString*> ModuleContainsAnErrorMessage_;
    static uSStrong<uString*>& ModuleContainsAnErrorMessage() { return ScriptModule_typeof()->Init(), ModuleContainsAnErrorMessage_; }

    void ctor_1(::g::Uno::UX::NameTable* names, uDelegate* unwrapper);
    bool Acceptor(uObject* obj);
    ::g::Uno::IO::Bundle* Bundle();
    void Bundle(::g::Uno::IO::Bundle* value);
    uString* Code();
    void Code(uString* value);
    uString* ComputePath(uString* moduleId, bool* isFile);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    uString* FileName();
    void FileName(uString* value);
    uString* GetSourcePath();
    int LineNumberOffset();
    void LineNumberOffset(int value);
    ::g::Uno::IO::BundleFile* LookForFile(uString* path);
    ::g::Fuse::Scripting::Module* TryResolve(uString* path, bool isFile);
    static uString* ComputePath1(uString* sourcePath, uString* moduleId);
    static bool IsPathEqual(uString* src, uString* path);
    static ScriptModule* New1(::g::Uno::UX::NameTable* names, uDelegate* unwrapper);
};
// }

}}} // ::g::Fuse::Scripting
