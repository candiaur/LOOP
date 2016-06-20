// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{struct IPAddress;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Net{

// public sealed class IPAddress :47
// {
uType* IPAddress_typeof();
void IPAddress__ctor__fn(IPAddress* __this, uArray* octets);
void IPAddress__ctor_1_fn(IPAddress* __this, uint32_t* address);
void IPAddress__get_Address_fn(IPAddress* __this, uint32_t* __retval);
void IPAddress__New1_fn(uArray* octets, IPAddress** __retval);
void IPAddress__New2_fn(uint32_t* address, IPAddress** __retval);
void IPAddress__Parse_fn(uString* address, IPAddress** __retval);
void IPAddress__ToString_fn(IPAddress* __this, uString** __retval);

struct IPAddress : uObject
{
    uStrong< ::g::Uno::Buffer*> _address;
    static uSStrong<IPAddress*> Any_;
    static uSStrong<IPAddress*>& Any() { return IPAddress_typeof()->Init(), Any_; }
    static uSStrong<IPAddress*> Broadcast_;
    static uSStrong<IPAddress*>& Broadcast() { return IPAddress_typeof()->Init(), Broadcast_; }
    static uSStrong<IPAddress*> Loopback_;
    static uSStrong<IPAddress*>& Loopback() { return IPAddress_typeof()->Init(), Loopback_; }

    void ctor_(uArray* octets);
    void ctor_1(uint32_t address);
    uint32_t Address();
    static IPAddress* New1(uArray* octets);
    static IPAddress* New2(uint32_t address);
    static IPAddress* Parse(uString* address);
};
// }

}}} // ::g::Uno::Net
