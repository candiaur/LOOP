// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Net{struct IPAddress;}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{
namespace Berkeley{

// internal static extern class bsd_dns :534
// {
uClassType* bsd_dns_typeof();
void bsd_dns__GetAddress_fn(void** handle_, int* address_, bool* __retval);
void bsd_dns__GetAddressInfo_fn(uString* hostname_, void** ptr_, int* __retval);
void bsd_dns__GetError_fn(uString** __retval);
void bsd_dns__GetNextAddressInfo_fn(void** handle_, void** __retval);
void bsd_dns__Resolve_fn(uString* hostname, uArray** __retval);

struct bsd_dns : uObject
{
    static bool GetAddress(void* handle_, int* address_);
    static int GetAddressInfo(uString* hostname_, void** ptr_);
    static uString* GetError();
    static void* GetNextAddressInfo(void* handle_);
    static uArray* Resolve(uString* hostname);
};
// }

}}}}} // ::g::Uno::Net::Sockets::Berkeley
