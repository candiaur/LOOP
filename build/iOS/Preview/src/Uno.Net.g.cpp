// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.FormatException.h>
#include <Uno.Int.h>
#include <Uno.Net.Dns.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.Berkeley.bsd_dns.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
static uString* STRINGS[6];
static uType* TYPES[4];

namespace g{
namespace Uno{
namespace Net{

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public sealed class Dns :1145
// {
static void Dns_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("hostNameOrAddress");
    ::TYPES[0] = ::g::Uno::Net::IPAddress_typeof()->Array();
    type->Reflection.SetFunctions(2,
        new uFunction("GetHostAddresses", NULL, (void*)Dns__GetHostAddresses_fn, 0, true, ::g::Uno::Net::IPAddress_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Dns__New1_fn, 0, true, Dns_typeof(), 0));
}

uType* Dns_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Dns);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Dns", options);
    type->fp_build_ = Dns_build;
    type->fp_ctor_ = (void*)Dns__New1_fn;
    return type;
}

// public generated Dns() :1145
void Dns__ctor__fn(Dns* __this)
{
    __this->ctor_();
}

// public static Uno.Net.IPAddress[] GetHostAddresses(string hostNameOrAddress) :1147
void Dns__GetHostAddresses_fn(uString* hostNameOrAddress, uArray** __retval)
{
    *__retval = Dns::GetHostAddresses(hostNameOrAddress);
}

// public generated Dns New() :1145
void Dns__New1_fn(Dns** __retval)
{
    *__retval = Dns::New1();
}

// public generated Dns() [instance] :1145
void Dns::ctor_()
{
}

// public static Uno.Net.IPAddress[] GetHostAddresses(string hostNameOrAddress) [static] :1147
uArray* Dns::GetHostAddresses(uString* hostNameOrAddress)
{
    uStackFrame __("Uno.Net.Dns", "GetHostAddresses(string)");

    if (::g::Uno::String::op_Equality(hostNameOrAddress, NULL) || ::g::Uno::String::op_Equality(hostNameOrAddress, ::STRINGS[0/*""*/]))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"hostNameOrA...*/]));

    return ::g::Uno::Net::Sockets::Berkeley::bsd_dns::Resolve(hostNameOrAddress);
    return uArray::New(::TYPES[0/*Uno.Net.IPAddress[]*/], 0);
}

// public generated Dns New() [static] :1145
Dns* Dns::New1()
{
    Dns* obj1 = (Dns*)uNew(Dns_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public abstract class EndPoint :11
// {
static void EndPoint_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Net::Sockets::AddressFamily_typeof(), offsetof(::g::Uno::Net::EndPoint, _AddressFamily), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_AddressFamily", NULL, (void*)EndPoint__get_AddressFamily_fn, 0, false, ::g::Uno::Net::Sockets::AddressFamily_typeof(), 0));
}

uType* EndPoint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EndPoint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.EndPoint", options);
    type->fp_build_ = EndPoint_build;
    return type;
}

// protected EndPoint(Uno.Net.Sockets.AddressFamily addressFamily) :19
void EndPoint__ctor__fn(EndPoint* __this, int* addressFamily)
{
    __this->ctor_(*addressFamily);
}

// public generated Uno.Net.Sockets.AddressFamily get_AddressFamily() :15
void EndPoint__get_AddressFamily_fn(EndPoint* __this, int* __retval)
{
    *__retval = __this->AddressFamily();
}

// private generated void set_AddressFamily(Uno.Net.Sockets.AddressFamily value) :16
void EndPoint__set_AddressFamily_fn(EndPoint* __this, int* value)
{
    __this->AddressFamily(*value);
}

// protected EndPoint(Uno.Net.Sockets.AddressFamily addressFamily) [instance] :19
void EndPoint::ctor_(int addressFamily)
{
    uStackFrame __("Uno.Net.EndPoint", ".ctor(Uno.Net.Sockets.AddressFamily)");
    AddressFamily(addressFamily);
}

// public generated Uno.Net.Sockets.AddressFamily get_AddressFamily() [instance] :15
int EndPoint::AddressFamily()
{
    uStackFrame __("Uno.Net.EndPoint", "get_AddressFamily()");
    return _AddressFamily;
}

// private generated void set_AddressFamily(Uno.Net.Sockets.AddressFamily value) [instance] :16
void EndPoint::AddressFamily(int value)
{
    uStackFrame __("Uno.Net.EndPoint", "set_AddressFamily(Uno.Net.Sockets.AddressFamily)");
    _AddressFamily = value;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public sealed class IPAddress :47
// {
// static IPAddress() :47
static void IPAddress__cctor__fn(uType* __type)
{
    IPAddress::Any_ = IPAddress::New1(uArray::Init<int>(::TYPES[1/*byte[]*/], 4, 0, 0, 0, 0));
    IPAddress::Broadcast_ = IPAddress::New1(uArray::Init<int>(::TYPES[1/*byte[]*/], 4, 255, 255, 255, 255));
    IPAddress::Loopback_ = IPAddress::New1(uArray::Init<int>(::TYPES[1/*byte[]*/], 4, 127, 0, 0, 1));
}

static void IPAddress_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Invalid ip address");
    ::STRINGS[3] = uString::Const("Invalid IPv4 address");
    ::STRINGS[4] = uString::Const(".");
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[3] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Net::IPAddress, _address), 0,
        IPAddress_typeof(), (uintptr_t)&::g::Uno::Net::IPAddress::Any_, uFieldFlagsStatic,
        IPAddress_typeof(), (uintptr_t)&::g::Uno::Net::IPAddress::Broadcast_, uFieldFlagsStatic,
        IPAddress_typeof(), (uintptr_t)&::g::Uno::Net::IPAddress::Loopback_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Any", 1),
        new uField("Broadcast", 2),
        new uField("Loopback", 3));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Address", NULL, (void*)IPAddress__get_Address_fn, 0, false, ::g::Uno::UInt_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)IPAddress__New1_fn, 0, true, IPAddress_typeof(), 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)IPAddress__New2_fn, 0, true, IPAddress_typeof(), 1, ::g::Uno::UInt_typeof()),
        new uFunction("Parse", NULL, (void*)IPAddress__Parse_fn, 0, true, IPAddress_typeof(), 1, ::g::Uno::String_typeof()));
}

uType* IPAddress_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(IPAddress);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.IPAddress", options);
    type->fp_build_ = IPAddress_build;
    type->fp_cctor_ = IPAddress__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))IPAddress__ToString_fn;
    return type;
}

// public IPAddress(byte[] octets) :72
void IPAddress__ctor__fn(IPAddress* __this, uArray* octets)
{
    __this->ctor_(octets);
}

// public IPAddress(uint address) :66
void IPAddress__ctor_1_fn(IPAddress* __this, uint32_t* address)
{
    __this->ctor_1(*address);
}

// public uint get_Address() :61
void IPAddress__get_Address_fn(IPAddress* __this, uint32_t* __retval)
{
    *__retval = __this->Address();
}

// public IPAddress New(byte[] octets) :72
void IPAddress__New1_fn(uArray* octets, IPAddress** __retval)
{
    *__retval = IPAddress::New1(octets);
}

// public IPAddress New(uint address) :66
void IPAddress__New2_fn(uint32_t* address, IPAddress** __retval)
{
    *__retval = IPAddress::New2(*address);
}

// public static Uno.Net.IPAddress Parse(string address) :80
void IPAddress__Parse_fn(uString* address, IPAddress** __retval)
{
    *__retval = IPAddress::Parse(address);
}

// public override sealed string ToString() :109
void IPAddress__ToString_fn(IPAddress* __this, uString** __retval)
{
    uStackFrame __("Uno.Net.IPAddress", "ToString()");
    uint8_t o1 = uPtr(__this->_address)->GetByte(0);
    uint8_t o2 = uPtr(__this->_address)->GetByte(1);
    uint8_t o3 = uPtr(__this->_address)->GetByte(2);
    uint8_t o4 = uPtr(__this->_address)->GetByte(3);
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<uint8_t>(::g::Uno::Byte_typeof(), o1), ::STRINGS[4/*"."*/]), uBox<uint8_t>(::g::Uno::Byte_typeof(), o2)), ::STRINGS[4/*"."*/]), uBox<uint8_t>(::g::Uno::Byte_typeof(), o3)), ::STRINGS[4/*"."*/]), uBox<uint8_t>(::g::Uno::Byte_typeof(), o4)), void();
}

uSStrong<IPAddress*> IPAddress::Any_;
uSStrong<IPAddress*> IPAddress::Broadcast_;
uSStrong<IPAddress*> IPAddress::Loopback_;

// public IPAddress(byte[] octets) [instance] :72
void IPAddress::ctor_(uArray* octets)
{
    uStackFrame __("Uno.Net.IPAddress", ".ctor(byte[])");

    if (uPtr(octets)->Length() != 4)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Invalid ip ...*/]));

    _address = ::g::Uno::Buffer::New1(octets);
}

// public IPAddress(uint address) [instance] :66
void IPAddress::ctor_1(uint32_t address)
{
    uStackFrame __("Uno.Net.IPAddress", ".ctor(uint)");
    _address = ::g::Uno::Buffer::New3(4);
    uPtr(_address)->Set21(0, address, true);
}

// public uint get_Address() [instance] :61
uint32_t IPAddress::Address()
{
    uStackFrame __("Uno.Net.IPAddress", "get_Address()");
    return uPtr(_address)->GetUInt(0, true);
}

// public IPAddress New(byte[] octets) [static] :72
IPAddress* IPAddress::New1(uArray* octets)
{
    IPAddress* obj2 = (IPAddress*)uNew(IPAddress_typeof());
    obj2->ctor_(octets);
    return obj2;
}

// public IPAddress New(uint address) [static] :66
IPAddress* IPAddress::New2(uint32_t address)
{
    IPAddress* obj1 = (IPAddress*)uNew(IPAddress_typeof());
    obj1->ctor_1(address);
    return obj1;
}

// public static Uno.Net.IPAddress Parse(string address) [static] :80
IPAddress* IPAddress::Parse(uString* address)
{
    uStackFrame __("Uno.Net.IPAddress", "Parse(string)");
    IPAddress_typeof()->Init();
    uArray* parts = ::g::Uno::String::Split(uPtr(address), uArray::Init<int>(::TYPES[2/*char[]*/], 1, '.'));

    if (uPtr(parts)->Length() != 4)
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[3/*"Invalid IPv...*/]));

    uArray* octets = uArray::New(::TYPES[1/*byte[]*/], 4);

    for (int i = 0; i < 4; ++i)
    {
        int tmp = ::g::Uno::Int::Parse(uPtr(parts)->Strong<uString*>(i));

        if ((0 > tmp) || (tmp > 255))
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[3/*"Invalid IPv...*/]));

        uPtr(octets)->Item<uint8_t>(i) = (uint8_t)tmp;
    }

    return IPAddress::New1(octets);
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public sealed class IPEndPoint :26
// {
static void IPEndPoint_build(uType* type)
{
    ::STRINGS[5] = uString::Const(":");
    ::TYPES[3] = uObject_typeof();
    type->SetFields(1,
        ::g::Uno::Net::IPAddress_typeof(), offsetof(::g::Uno::Net::IPEndPoint, _Address), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::IPEndPoint, _Port), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Address", NULL, (void*)IPEndPoint__get_Address_fn, 0, false, ::g::Uno::Net::IPAddress_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)IPEndPoint__New1_fn, 0, true, IPEndPoint_typeof(), 2, ::g::Uno::Net::IPAddress_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_Port", NULL, (void*)IPEndPoint__get_Port_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* IPEndPoint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IPEndPoint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.IPEndPoint", options);
    type->SetBase(::g::Uno::Net::EndPoint_typeof());
    type->fp_build_ = IPEndPoint_build;
    type->fp_ToString = (void(*)(uObject*, uString**))IPEndPoint__ToString_fn;
    return type;
}

// public IPEndPoint(Uno.Net.IPAddress address, int port) :32
void IPEndPoint__ctor_1_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress* address, int* port)
{
    __this->ctor_1(address, *port);
}

// public generated Uno.Net.IPAddress get_Address() :30
void IPEndPoint__get_Address_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress** __retval)
{
    *__retval = __this->Address();
}

// private generated void set_Address(Uno.Net.IPAddress value) :30
void IPEndPoint__set_Address_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress* value)
{
    __this->Address(value);
}

// public IPEndPoint New(Uno.Net.IPAddress address, int port) :32
void IPEndPoint__New1_fn(::g::Uno::Net::IPAddress* address, int* port, IPEndPoint** __retval)
{
    *__retval = IPEndPoint::New1(address, *port);
}

// public generated int get_Port() :28
void IPEndPoint__get_Port_fn(IPEndPoint* __this, int* __retval)
{
    *__retval = __this->Port();
}

// private generated void set_Port(int value) :28
void IPEndPoint__set_Port_fn(IPEndPoint* __this, int* value)
{
    __this->Port(*value);
}

// public override sealed string ToString() :39
void IPEndPoint__ToString_fn(IPEndPoint* __this, uString** __retval)
{
    uStackFrame __("Uno.Net.IPEndPoint", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(uPtr(__this->Address())->ToString(), ::STRINGS[5/*":"*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Port())), void();
}

// public IPEndPoint(Uno.Net.IPAddress address, int port) [instance] :32
void IPEndPoint::ctor_1(::g::Uno::Net::IPAddress* address, int port)
{
    uStackFrame __("Uno.Net.IPEndPoint", ".ctor(Uno.Net.IPAddress,int)");
    ctor_(2);
    Address(address);
    Port(port);
}

// public generated Uno.Net.IPAddress get_Address() [instance] :30
::g::Uno::Net::IPAddress* IPEndPoint::Address()
{
    uStackFrame __("Uno.Net.IPEndPoint", "get_Address()");
    return _Address;
}

// private generated void set_Address(Uno.Net.IPAddress value) [instance] :30
void IPEndPoint::Address(::g::Uno::Net::IPAddress* value)
{
    uStackFrame __("Uno.Net.IPEndPoint", "set_Address(Uno.Net.IPAddress)");
    _Address = value;
}

// public generated int get_Port() [instance] :28
int IPEndPoint::Port()
{
    uStackFrame __("Uno.Net.IPEndPoint", "get_Port()");
    return _Port;
}

// private generated void set_Port(int value) [instance] :28
void IPEndPoint::Port(int value)
{
    uStackFrame __("Uno.Net.IPEndPoint", "set_Port(int)");
    _Port = value;
}

// public IPEndPoint New(Uno.Net.IPAddress address, int port) [static] :32
IPEndPoint* IPEndPoint::New1(::g::Uno::Net::IPAddress* address, int port)
{
    IPEndPoint* obj1 = (IPEndPoint*)uNew(IPEndPoint_typeof());
    obj1->ctor_1(address, port);
    return obj1;
}
// }

}}} // ::g::Uno::Net
