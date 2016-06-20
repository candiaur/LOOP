// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{

// public sealed class Diagnostic :555
// {
uType* Diagnostic_typeof();
void Diagnostic__ctor__fn(Diagnostic* __this);
void Diagnostic__New1_fn(Diagnostic** __retval);

struct Diagnostic : uObject
{
    uStrong< ::g::Uno::Exception*> Exception;
    uStrong<uString*> FilePath;
    int LineNumber;
    uStrong<uString*> MemberName;
    uStrong<uString*> Message;
    uStrong<uObject*> SourceObject;
    int Type;
    int UnoType;

    void ctor_();
    static Diagnostic* New1();
};
// }

}} // ::g::Fuse
