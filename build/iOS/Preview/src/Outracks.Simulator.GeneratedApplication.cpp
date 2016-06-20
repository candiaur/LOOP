// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/preamble/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.GeneratedApplication.h>
#include <Outracks.Simulator.Reflection.Native.ITypeMap.h>
#include <Outracks.Simulator.Reflection.Native.NativeReflection.h>
#include <Outracks.Simulator.Reflection.Native.SimpleTypeMap.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.String.h>
static uString* STRINGS[5];
static uType* TYPES[5];

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class GeneratedApplication :193
// {
static void GeneratedApplication_build(uType* type)
{
    ::STRINGS[0] = uString::Const("127.0.0.1");
    ::STRINGS[1] = uString::Const("192.168.100.6");
    ::STRINGS[2] = uString::Const("192.168.100.13");
    ::STRINGS[3] = uString::Const("/Users/carla/Documents/Fuse Examples/LOOP/LOOP.unoproj");
    ::STRINGS[4] = uString::Const("LOOP");
    ::TYPES[0] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::IO::Bundle_typeof());
    ::TYPES[2] = ::g::Uno::String_typeof()->Array();
    ::TYPES[3] = ::g::Outracks::Simulator::Runtime::IReflection_typeof();
    ::TYPES[4] = ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof();
    type->SetInterfaces(
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(::g::Outracks::Simulator::Application_type, interface0));
    type->SetFields(18);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GeneratedApplication__New3_fn, 0, true, GeneratedApplication_typeof(), 0));
}

::g::Outracks::Simulator::Application_type* GeneratedApplication_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GeneratedApplication);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Application_type);
    type = (::g::Outracks::Simulator::Application_type*)uClassType::New("Outracks.Simulator.GeneratedApplication", options);
    type->SetBase(::g::Outracks::Simulator::Application_typeof());
    type->fp_build_ = GeneratedApplication_build;
    type->fp_ctor_ = (void*)GeneratedApplication__New3_fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))::g::Outracks::Simulator::Application__OnPointerPressed_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))::g::Outracks::Simulator::Application__OnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))::g::Outracks::Simulator::Application__OnPointerReleased_fn;
    type->interface0.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))::g::Outracks::Simulator::Application__OnPointerWheelMoved_fn;
    return type;
}

// public GeneratedApplication() :196
void GeneratedApplication__ctor_4_fn(GeneratedApplication* __this)
{
    __this->ctor_4();
}

// private static Uno.IO.Bundle GetBundle() :204
void GeneratedApplication__GetBundle_fn(::g::Uno::IO::Bundle** __retval)
{
    *__retval = GeneratedApplication::GetBundle();
}

// public GeneratedApplication New() :196
void GeneratedApplication__New3_fn(GeneratedApplication** __retval)
{
    *__retval = GeneratedApplication::New3();
}

// public GeneratedApplication() [instance] :196
void GeneratedApplication::ctor_4()
{
    uStackFrame __("Outracks.Simulator.GeneratedApplication", ".ctor()");
    ctor_3(uArray::Init< ::g::Uno::Net::IPEndPoint*>(::TYPES[0/*Uno.Net.IPEndPoint[]*/], 3, (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[0/*"127.0.0.1"*/]), 12124), (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[1/*"192.168.100.6"*/]), 12124), (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[2/*"192.168.100...*/]), 12124)), ::STRINGS[3/*"/Users/carl...*/], uDelegate::New(::TYPES[1/*Uno.Func<Uno.IO.Bundle>*/], (void*)GeneratedApplication__GetBundle_fn), uArray::Init<uString*>(::TYPES[2/*string[]*/], 0));
    Reflection((uObject*)::g::Outracks::Simulator::Reflection::Native::NativeReflection::New1((uObject*)::g::Outracks::Simulator::Reflection::Native::SimpleTypeMap::New1()));
}

// private static Uno.IO.Bundle GetBundle() [static] :204
::g::Uno::IO::Bundle* GeneratedApplication::GetBundle()
{
    uStackFrame __("Outracks.Simulator.GeneratedApplication", "GetBundle()");
    return ::g::Uno::IO::Bundle::Get(::STRINGS[4/*"LOOP"*/]);
}

// public GeneratedApplication New() [static] :196
GeneratedApplication* GeneratedApplication::New3()
{
    GeneratedApplication* obj1 = (GeneratedApplication*)uNew(GeneratedApplication_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::Outracks::Simulator
