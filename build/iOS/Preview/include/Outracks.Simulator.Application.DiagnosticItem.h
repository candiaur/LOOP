// This file was generated based on '/usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Outracks{namespace Simulator{struct Application__DiagnosticItem;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// private sealed class Application.DiagnosticItem :50
// {
uType* Application__DiagnosticItem_typeof();
void Application__DiagnosticItem__ctor__fn(Application__DiagnosticItem* __this);
void Application__DiagnosticItem__New1_fn(Application__DiagnosticItem** __retval);
void Application__DiagnosticItem__SameAs_fn(Application__DiagnosticItem* __this, ::g::Fuse::Diagnostic* d, bool* __retval);

struct Application__DiagnosticItem : uObject
{
    uStrong< ::g::Fuse::Diagnostic*> Diagnostic;
    double Expire;
    int FrameIndex;

    void ctor_();
    bool SameAs(::g::Fuse::Diagnostic* d);
    static Application__DiagnosticItem* New1();
};
// }

}}} // ::g::Outracks::Simulator
