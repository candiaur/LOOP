// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <arpa/inet.h>
#include <errno.h>
#include <netdb.h>
#include <netinet/in.h>
#include <poll.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.Berkeley.bsd_dns.h>
#include <Uno.Net.Sockets.Berkeley.bsd_socket.h>
#include <Uno.Net.Sockets.Berkeley.Socket.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.SelectMode.h>
#include <Uno.Net.Sockets.SocketException.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.Object.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
static uString* STRINGS[7];
static uType* TYPES[3];

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{
namespace Berkeley{

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// internal static extern class bsd_dns :534
// {
static void bsd_dns_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::IPAddress_typeof());
}

uClassType* bsd_dns_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Sockets.Berkeley.bsd_dns", options);
    type->fp_build_ = bsd_dns_build;
    return type;
}

// private static extern bool GetAddress(Uno.IntPtr handle, int& address) :569
void bsd_dns__GetAddress_fn(void** handle_, int* address_, bool* __retval)
{
    *__retval = bsd_dns::GetAddress(*handle_, address_);
}

// private static extern int GetAddressInfo(string hostname, Uno.IntPtr& ptr) :563
void bsd_dns__GetAddressInfo_fn(uString* hostname_, void** ptr_, int* __retval)
{
    *__retval = bsd_dns::GetAddressInfo(hostname_, ptr_);
}

// public static extern string GetError() :572
void bsd_dns__GetError_fn(uString** __retval)
{
    *__retval = bsd_dns::GetError();
}

// private static extern Uno.IntPtr GetNextAddressInfo(Uno.IntPtr handle) :566
void bsd_dns__GetNextAddressInfo_fn(void** handle_, void** __retval)
{
    *__retval = bsd_dns::GetNextAddressInfo(*handle_);
}

// public static Uno.Net.IPAddress[] Resolve(string hostname) :536
void bsd_dns__Resolve_fn(uString* hostname, uArray** __retval)
{
    *__retval = bsd_dns::Resolve(hostname);
}

// private static extern bool GetAddress(Uno.IntPtr handle, int& address) [static] :569
bool bsd_dns::GetAddress(void* handle_, int* address_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_dns", "GetAddress(Uno.IntPtr,int&)");
    struct addrinfo *res = (struct addrinfo *) handle_;
    					
    if(res->ai_family == AF_INET) {
    	struct sockaddr_in *sockaddr_ipv4 = (struct sockaddr_in *) res->ai_addr;
    	struct in_addr ip = (struct in_addr) sockaddr_ipv4->sin_addr;
    	*address_ = ip.s_addr;
    	return 1;
    }
    return 0;
}

// private static extern int GetAddressInfo(string hostname, Uno.IntPtr& ptr) [static] :563
int bsd_dns::GetAddressInfo(uString* hostname_, void** ptr_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_dns", "GetAddressInfo(string,Uno.IntPtr&)");
    int error;
    const char *hostname = uAllocCStr(hostname_);
    struct addrinfo *res;
    error = getaddrinfo(hostname, NULL, NULL, &res);
    uFreeCStr(hostname);
    *ptr_ = res;
    return error;
}

// public static extern string GetError() [static] :572
uString* bsd_dns::GetError()
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_dns", "GetError()");
    char * error = strerror(errno);
    return uString::Utf8(error);
}

// private static extern Uno.IntPtr GetNextAddressInfo(Uno.IntPtr handle) [static] :566
void* bsd_dns::GetNextAddressInfo(void* handle_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_dns", "GetNextAddressInfo(Uno.IntPtr)");
    struct addrinfo *res = (struct addrinfo *) handle_;
    return res->ai_next;
}

// public static Uno.Net.IPAddress[] Resolve(string hostname) [static] :536
uArray* bsd_dns::Resolve(uString* hostname)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_dns", "Resolve(string)");
    ::g::Uno::Collections::List* addresses = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Net.IPAddress>*/]);
    void* ptr = ::g::Uno::IntPtr::Zero_;

    if (bsd_dns::GetAddressInfo(hostname, &ptr) != 0)
        U_THROW(::g::Uno::Exception::New2(bsd_dns::GetError()));

    for (; ::g::Uno::IntPtr::op_Inequality(ptr, ::g::Uno::IntPtr::Zero_); ptr = bsd_dns::GetNextAddressInfo(ptr))
    {
        int address = 0;

        if (bsd_dns::GetAddress(ptr, &address))
            ::g::Uno::Collections::List__Add_fn(uPtr(addresses), ::g::Uno::Net::IPAddress::New2((uint32_t)address));
    }

    return (uArray*)addresses->ToArray();
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// internal static extern class bsd_socket :402
// {
static void bsd_socket_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Invalid value for AddressFamily");
    ::STRINGS[1] = uString::Const("Invalid value for ProtocolType");
    ::STRINGS[2] = uString::Const("Invalid value for SelectMode");
    ::STRINGS[3] = uString::Const("Invalid value for SocketShutdown");
    ::STRINGS[4] = uString::Const("Invalid value for SocketType");
}

uClassType* bsd_socket_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Sockets.Berkeley.bsd_socket", options);
    type->fp_build_ = bsd_socket_build;
    return type;
}

// public static int Close(int socketHandle) :425
void bsd_socket__Close_fn(int* socketHandle, int* __retval)
{
    *__retval = bsd_socket::Close(*socketHandle);
}

// public static extern int Connect(int socketHandle, uint address, int port) :410
void bsd_socket__Connect_fn(int* socketHandle_, uint32_t* address_, int* port_, int* __retval)
{
    *__retval = bsd_socket::Connect(*socketHandle_, *address_, *port_);
}

// public static extern string GetError() :461
void bsd_socket__GetError_fn(uString** __retval)
{
    *__retval = bsd_socket::GetError();
}

// public static int GetFamily(Uno.Net.Sockets.AddressFamily addressFamily) :497
void bsd_socket__GetFamily_fn(int* addressFamily, int* __retval)
{
    *__retval = bsd_socket::GetFamily(*addressFamily);
}

// public static int GetProtocol(Uno.Net.Sockets.ProtocolType protocolType) :519
void bsd_socket__GetProtocol_fn(int* protocolType, int* __retval)
{
    *__retval = bsd_socket::GetProtocol(*protocolType);
}

// public static short GetSelectMode(Uno.Net.Sockets.SelectMode mode) :480
void bsd_socket__GetSelectMode_fn(int* mode, int16_t* __retval)
{
    *__retval = bsd_socket::GetSelectMode(*mode);
}

// public static int GetSocketShudown(Uno.Net.Sockets.SocketShutdown how) :463
void bsd_socket__GetSocketShudown_fn(int* how, int* __retval)
{
    *__retval = bsd_socket::GetSocketShudown(*how);
}

// public static int GetType(Uno.Net.Sockets.SocketType socketType) :508
void bsd_socket__GetType_fn(int* socketType, int* __retval)
{
    *__retval = bsd_socket::GetType(*socketType);
}

// public static extern int Poll(int socketHandle, short selectMode, int milliseconds) :458
void bsd_socket__Poll_fn(int* socketHandle_, int16_t* selectMode_, int* milliseconds_, int* __retval)
{
    *__retval = bsd_socket::Poll(*socketHandle_, *selectMode_, *milliseconds_);
}

// public static extern int Receive(int socketHandle, byte[] buffer, int offset, int length) :440
void bsd_socket__Receive_fn(int* socketHandle_, uArray* buffer_, int* offset_, int* length_, int* __retval)
{
    *__retval = bsd_socket::Receive(*socketHandle_, buffer_, *offset_, *length_);
}

// public static extern int Send(int socketHandle, byte[] buffer, int offset, int length) :437
void bsd_socket__Send1_fn(int* socketHandle_, uArray* buffer_, int* offset_, int* length_, int* __retval)
{
    *__retval = bsd_socket::Send1(*socketHandle_, buffer_, *offset_, *length_);
}

// public static int Shutdown(int socketHandle, int how) :420
void bsd_socket__Shutdown_fn(int* socketHandle, int* how, int* __retval)
{
    *__retval = bsd_socket::Shutdown(*socketHandle, *how);
}

// public static int socket(int family, int type, int protocol) :404
void bsd_socket__socket_fn(int* family, int* type, int* protocol, int* __retval)
{
    *__retval = bsd_socket::socket(*family, *type, *protocol);
}

// public static int Close(int socketHandle) [static] :425
int bsd_socket::Close(int socketHandle)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Close(int)");
    return ::close(socketHandle);
}

// public static extern int Connect(int socketHandle, uint address, int port) [static] :410
int bsd_socket::Connect(int socketHandle_, uint32_t address_, int port_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Connect(int,uint,int)");
    int socketFD = socketHandle_;
    in_addr_t address = address_;
    int port = port_;
    
    struct sockaddr_in sockAddr;
    
    memset(&sockAddr, 0, sizeof(struct sockaddr_in));
    
    sockAddr.sin_family = AF_INET;
    sockAddr.sin_addr.s_addr = address;
    sockAddr.sin_port = htons(port);
    
    return connect(socketFD, (struct sockaddr*)&sockAddr, sizeof(sockAddr));
}

// public static extern string GetError() [static] :461
uString* bsd_socket::GetError()
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetError()");
    char * error = strerror(errno);
    return uString::Utf8(error);
}

// public static int GetFamily(Uno.Net.Sockets.AddressFamily addressFamily) [static] :497
int bsd_socket::GetFamily(int addressFamily)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetFamily(Uno.Net.Sockets.AddressFamily)");

    switch (addressFamily)
    {
        case 2:
            return AF_INET;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[0/*"Invalid val...*/]));
}

// public static int GetProtocol(Uno.Net.Sockets.ProtocolType protocolType) [static] :519
int bsd_socket::GetProtocol(int protocolType)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetProtocol(Uno.Net.Sockets.ProtocolType)");

    switch (protocolType)
    {
        case 6:
            return PF_UNSPEC;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"Invalid val...*/]));
}

// public static short GetSelectMode(Uno.Net.Sockets.SelectMode mode) [static] :480
int16_t bsd_socket::GetSelectMode(int mode)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetSelectMode(Uno.Net.Sockets.SelectMode)");

    switch (mode)
    {
        case 2:
            return POLLERR;
        case 0:
            return POLLIN;
        case 1:
            return POLLOUT;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[2/*"Invalid val...*/]));
}

// public static int GetSocketShudown(Uno.Net.Sockets.SocketShutdown how) [static] :463
int bsd_socket::GetSocketShudown(int how)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetSocketShudown(Uno.Net.Sockets.SocketShutdown)");

    switch (how)
    {
        case 2:
            return SHUT_RDWR;
        case 0:
            return SHUT_RD;
        case 1:
            return SHUT_WR;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[3/*"Invalid val...*/]));
}

// public static int GetType(Uno.Net.Sockets.SocketType socketType) [static] :508
int bsd_socket::GetType(int socketType)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "GetType(Uno.Net.Sockets.SocketType)");

    switch (socketType)
    {
        case 1:
            return SOCK_STREAM;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[4/*"Invalid val...*/]));
}

// public static extern int Poll(int socketHandle, short selectMode, int milliseconds) [static] :458
int bsd_socket::Poll(int socketHandle_, int16_t selectMode_, int milliseconds_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Poll(int,short,int)");
    int socketFD = socketHandle_;
    short selectMode = selectMode_;
    int millis = milliseconds_;
    
    struct pollfd pf;
    memset(&pf, 0, sizeof(struct pollfd));
    
    pf.fd = socketFD;
    pf.events |= selectMode;
    
    int result = poll(&pf, 1, millis);
    
    if (0 == result)
    	return 0;
    
    if (-1 == result)
    	return -1;
    
    return ((pf.revents & selectMode) == selectMode);
}

// public static extern int Receive(int socketHandle, byte[] buffer, int offset, int length) [static] :440
int bsd_socket::Receive(int socketHandle_, uArray* buffer_, int offset_, int length_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Receive(int,byte[],int,int)");
    int socketFD = socketHandle_;
    char * buf = (char*)(buffer_->Ptr());
                        int offset = offset_;
    int length = length_;
    
    return recv(socketFD, (void*)(buf + offset), length, 0);
}

// public static extern int Send(int socketHandle, byte[] buffer, int offset, int length) [static] :437
int bsd_socket::Send1(int socketHandle_, uArray* buffer_, int offset_, int length_)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Send(int,byte[],int,int)");
    int socketFD = socketHandle_;
    char * buf = (char*)(buffer_->Ptr());
    int offset = offset_;
    int length = length_;
    
    return send(socketFD, (void*)(buf + offset), length, 0);
}

// public static int Shutdown(int socketHandle, int how) [static] :420
int bsd_socket::Shutdown(int socketHandle, int how)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "Shutdown(int,int)");
    return ::shutdown(socketHandle, how);
}

// public static int socket(int family, int type, int protocol) [static] :404
int bsd_socket::socket(int family, int type, int protocol)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.bsd_socket", "socket(int,int,int)");
    return ::socket(family, type, protocol);
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// internal sealed extern class Socket :207
// {
static void Socket_build(uType* type)
{
    ::STRINGS[5] = uString::Const("EndPoint not supported: ");
    ::STRINGS[6] = uString::Const("Offset and length out of range");
    ::TYPES[1] = ::g::Uno::Net::IPEndPoint_typeof();
    ::TYPES[2] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Sockets::Berkeley::Socket, _handle), 0);
}

::g::Uno::Net::Sockets::Socket_type* Socket_typeof()
{
    static uSStrong< ::g::Uno::Net::Sockets::Socket_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Socket);
    options.TypeSize = sizeof(::g::Uno::Net::Sockets::Socket_type);
    type = (::g::Uno::Net::Sockets::Socket_type*)uClassType::New("Uno.Net.Sockets.Berkeley.Socket", options);
    type->SetBase(::g::Uno::Net::Sockets::Socket_typeof());
    type->fp_build_ = Socket_build;
    type->fp_Close = (void(*)(::g::Uno::Net::Sockets::Socket*))Socket__Close_fn;
    type->fp_Connect1 = (void(*)(::g::Uno::Net::Sockets::Socket*, ::g::Uno::Net::EndPoint*))Socket__Connect1_fn;
    type->fp_Poll = (void(*)(::g::Uno::Net::Sockets::Socket*, int*, int*, bool*))Socket__Poll_fn;
    type->fp_Receive1 = (void(*)(::g::Uno::Net::Sockets::Socket*, uArray*, int*, int*, int*))Socket__Receive1_fn;
    type->fp_Send1 = (void(*)(::g::Uno::Net::Sockets::Socket*, uArray*, int*, int*, int*))Socket__Send1_fn;
    type->fp_Shutdown = (void(*)(::g::Uno::Net::Sockets::Socket*, int*))Socket__Shutdown_fn;
    return type;
}

// private Socket(int handle) :261
void Socket__ctor_1_fn(Socket* __this, int* handle)
{
    __this->ctor_1(*handle);
}

// public override sealed void Close() :389
void Socket__Close_fn(Socket* __this)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Close()");
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Close(__this->_handle);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));
}

// public override sealed void Connect(Uno.Net.EndPoint endPoint) :266
void Socket__Connect1_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Connect(Uno.Net.EndPoint)");
    ::g::Uno::Net::IPEndPoint* ip = uAs< ::g::Uno::Net::IPEndPoint*>(endPoint, ::TYPES[1/*Uno.Net.IPEndPoint*/]);

    if (ip != NULL)
    {
        int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Connect(__this->_handle, uPtr(uPtr(ip)->Address())->Address(), uPtr(ip)->Port());

        if (-1 == result)
            U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));
    }
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[5/*"EndPoint no...*/], endPoint)));
}

// public static Uno.Net.Sockets.Berkeley.Socket Create(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) :210
void Socket__Create1_fn(int* addressFamily, int* socketType, int* protocolType, Socket** __retval)
{
    *__retval = Socket::Create1(*addressFamily, *socketType, *protocolType);
}

// private Socket New(int handle) :261
void Socket__New1_fn(int* handle, Socket** __retval)
{
    *__retval = Socket::New1(*handle);
}

// public override sealed bool Poll(int milliseconds, Uno.Net.Sockets.SelectMode mode) :357
void Socket__Poll_fn(Socket* __this, int* milliseconds, int* mode, bool* __retval)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Poll(int,Uno.Net.Sockets.SelectMode)");
    int mode_ = *mode;
    int milliseconds_ = *milliseconds;
    int16_t selectMode = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetSelectMode(mode_);
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Poll(__this->_handle, selectMode, milliseconds_);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return *__retval = result > 0, void();
}

// public override sealed int Receive(byte[] buffer, int offset, int length) :314
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Receive(byte[],int,int)");
    int offset_ = *offset;
    int length_ = *length;

    if ((offset_ + length_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[6/*"Offset and ...*/]));

    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Receive(__this->_handle, buffer, offset_, length_);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return *__retval = result, void();
}

// public override sealed int Send(byte[] buffer, int offset, int length) :297
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Send(byte[],int,int)");
    int offset_ = *offset;
    int length_ = *length;
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Send1(__this->_handle, buffer, offset_, length_);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return *__retval = result, void();
}

// public override sealed void Shutdown(Uno.Net.Sockets.SocketShutdown how) :379
void Socket__Shutdown_fn(Socket* __this, int* how)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Shutdown(Uno.Net.Sockets.SocketShutdown)");
    int how_ = *how;
    int shutdownHow = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetSocketShudown(how_);
    int result = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::Shutdown(__this->_handle, shutdownHow);

    if (-1 == result)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));
}

// private Socket(int handle) [instance] :261
void Socket::ctor_1(int handle)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", ".ctor(int)");
    ctor_();
    _handle = handle;
}

// public static Uno.Net.Sockets.Berkeley.Socket Create(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) [static] :210
Socket* Socket::Create1(int addressFamily, int socketType, int protocolType)
{
    uStackFrame __("Uno.Net.Sockets.Berkeley.Socket", "Create(Uno.Net.Sockets.AddressFamily,Uno.Net.Sockets.SocketType,Uno.Net.Sockets.ProtocolType)");
    int family = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetFamily(addressFamily);
    int type = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetType(socketType);
    int protocol = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetProtocol(protocolType);
    int handle = ::g::Uno::Net::Sockets::Berkeley::bsd_socket::socket(family, type, protocol);

    if (-1 == handle)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::Net::Sockets::Berkeley::bsd_socket::GetError()));

    return Socket::New1(handle);
}

// private Socket New(int handle) [static] :261
Socket* Socket::New1(int handle)
{
    Socket* obj1 = (Socket*)uNew(Socket_typeof());
    obj1->ctor_1(handle);
    return obj1;
}
// }

}}}}} // ::g::Uno::Net::Sockets::Berkeley
