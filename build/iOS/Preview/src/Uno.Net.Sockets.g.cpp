// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.Long.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.Berkeley.Socket.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.SelectMode.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.SocketException.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public enum AddressFamily :675
uEnumType* AddressFamily_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.AddressFamily", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "InterNetwork", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public sealed class NetworkStream :132
// {
static void NetworkStream_build(uType* type)
{
    ::STRINGS[0] = uString::Const("sent != byteCount");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Uno::Net::Sockets::NetworkStream, _socket), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NetworkStream__New1_fn, 0, true, NetworkStream_typeof(), 1, ::g::Uno::Net::Sockets::Socket_typeof()));
}

::g::Uno::IO::Stream_type* NetworkStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NetworkStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.Net.Sockets.NetworkStream", options);
    type->SetBase(::g::Uno::IO::Stream_typeof());
    type->fp_build_ = NetworkStream_build;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))NetworkStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))NetworkStream__get_CanSeek_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))NetworkStream__get_CanWrite_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))NetworkStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))NetworkStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*))NetworkStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))NetworkStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public NetworkStream(Uno.Net.Sockets.Socket socket) :137
void NetworkStream__ctor_1_fn(NetworkStream* __this, ::g::Uno::Net::Sockets::Socket* socket)
{
    __this->ctor_1(socket);
}

// public override sealed bool get_CanRead() :157
void NetworkStream__get_CanRead_fn(NetworkStream* __this, bool* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "get_CanRead()");
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :167
void NetworkStream__get_CanSeek_fn(NetworkStream* __this, bool* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "get_CanSeek()");
    return *__retval = false, void();
}

// public override sealed bool get_CanWrite() :162
void NetworkStream__get_CanWrite_fn(NetworkStream* __this, bool* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "get_CanWrite()");
    return *__retval = true, void();
}

// public override sealed void Flush() :188
void NetworkStream__Flush_fn(NetworkStream* __this)
{
}

// public override sealed long get_Length() :144
void NetworkStream__get_Length_fn(NetworkStream* __this, int64_t* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "get_Length()");
    return *__retval = 0LL, void();
}

// public NetworkStream New(Uno.Net.Sockets.Socket socket) :137
void NetworkStream__New1_fn(::g::Uno::Net::Sockets::Socket* socket, NetworkStream** __retval)
{
    *__retval = NetworkStream::New1(socket);
}

// public override sealed long get_Position() :149
void NetworkStream__get_Position_fn(NetworkStream* __this, int64_t* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "get_Position()");
    return *__retval = 0LL, void();
}

// public override sealed void set_Position(long value) :150
void NetworkStream__set_Position_fn(NetworkStream* __this, int64_t* value)
{
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :170
void NetworkStream__Read_fn(NetworkStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "Read(byte[],int,int)");
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    return *__retval = uPtr(__this->_socket)->Receive1(dst, byteOffset_, byteCount_), void();
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :183
void NetworkStream__Seek_fn(NetworkStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "Seek(long,Uno.IO.SeekOrigin)");
    return *__retval = 0LL, void();
}

// public override sealed void SetLength(long value) :153
void NetworkStream__SetLength_fn(NetworkStream* __this, int64_t* value)
{
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :175
void NetworkStream__Write_fn(NetworkStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "Write(byte[],int,int)");
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    int sent = uPtr(__this->_socket)->Send1(src, byteOffset_, byteCount_);

    if (sent != byteCount_)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"sent != byt...*/]));
}

// public NetworkStream(Uno.Net.Sockets.Socket socket) [instance] :137
void NetworkStream::ctor_1(::g::Uno::Net::Sockets::Socket* socket)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", ".ctor(Uno.Net.Sockets.Socket)");
    ctor_();
    _socket = socket;
}

// public NetworkStream New(Uno.Net.Sockets.Socket socket) [static] :137
NetworkStream* NetworkStream::New1(::g::Uno::Net::Sockets::Socket* socket)
{
    NetworkStream* obj1 = (NetworkStream*)uNew(NetworkStream_typeof());
    obj1->ctor_1(socket);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public enum ProtocolType :687
uEnumType* ProtocolType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.ProtocolType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Tcp", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public enum SelectMode :693
uEnumType* SelectMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SelectMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Read", 0LL,
        "Write", 1LL,
        "Error", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public abstract class Socket :708
// {
static void Socket_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Platform not supported");
    type->Reflection.SetFunctions(7,
        new uFunction("Close", NULL, NULL, offsetof(Socket_type, fp_Close), false, uVoid_typeof(), 0),
        new uFunction("Connect", NULL, NULL, offsetof(Socket_type, fp_Connect1), false, uVoid_typeof(), 1, ::g::Uno::Net::EndPoint_typeof()),
        new uFunction("Create", NULL, (void*)Socket__Create_fn, 0, true, Socket_typeof(), 3, ::g::Uno::Net::Sockets::AddressFamily_typeof(), ::g::Uno::Net::Sockets::SocketType_typeof(), ::g::Uno::Net::Sockets::ProtocolType_typeof()),
        new uFunction("Poll", NULL, NULL, offsetof(Socket_type, fp_Poll), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Net::Sockets::SelectMode_typeof()),
        new uFunction("Receive", NULL, NULL, offsetof(Socket_type, fp_Receive1), false, ::g::Uno::Int_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Send", NULL, NULL, offsetof(Socket_type, fp_Send1), false, ::g::Uno::Int_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Shutdown", NULL, NULL, offsetof(Socket_type, fp_Shutdown), false, uVoid_typeof(), 1, ::g::Uno::Net::Sockets::SocketShutdown_typeof()));
}

Socket_type* Socket_typeof()
{
    static uSStrong<Socket_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Socket);
    options.TypeSize = sizeof(Socket_type);
    type = (Socket_type*)uClassType::New("Uno.Net.Sockets.Socket", options);
    type->fp_build_ = Socket_build;
    return type;
}

// protected generated Socket() :708
void Socket__ctor__fn(Socket* __this)
{
    __this->ctor_();
}

// public static Uno.Net.Sockets.Socket Create(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) :710
void Socket__Create_fn(int* addressFamily, int* socketType, int* protocolType, Socket** __retval)
{
    *__retval = Socket::Create(*addressFamily, *socketType, *protocolType);
}

// protected generated Socket() [instance] :708
void Socket::ctor_()
{
}

// public static Uno.Net.Sockets.Socket Create(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) [static] :710
Socket* Socket::Create(int addressFamily, int socketType, int protocolType)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Create(Uno.Net.Sockets.AddressFamily,Uno.Net.Sockets.SocketType,Uno.Net.Sockets.ProtocolType)");
    return ::g::Uno::Net::Sockets::Berkeley::Socket::Create1(addressFamily, socketType, protocolType);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Platform no...*/]));
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public sealed class SocketException :771
// {
static void SocketException_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SocketException__New4_fn, 0, true, SocketException_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* SocketException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(SocketException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Sockets.SocketException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_build_ = SocketException_build;
    return type;
}

// public SocketException(string message) :773
void SocketException__ctor_3_fn(SocketException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public SocketException New(string message) :773
void SocketException__New4_fn(uString* message, SocketException** __retval)
{
    *__retval = SocketException::New4(message);
}

// public SocketException(string message) [instance] :773
void SocketException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public SocketException New(string message) [static] :773
SocketException* SocketException::New4(uString* message)
{
    SocketException* obj1 = (SocketException*)uNew(SocketException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public enum SocketShutdown :701
uEnumType* SocketShutdown_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SocketShutdown", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Receive", 0LL,
        "Send", 1LL,
        "Both", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.29.0/$.uno
// ----------------------------------------------------------

// public enum SocketType :681
uEnumType* SocketType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SocketType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Stream", 1LL);
    return type;
}

}}}} // ::g::Uno::Net::Sockets
