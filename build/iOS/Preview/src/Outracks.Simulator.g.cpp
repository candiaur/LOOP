// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.OutracksSimulatorClientUno_bundle.h>
#include <_root.OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property.h>
#include <_root.OutracksSimulatorClientUno_FuseControlsText_Value_Property.h>
#include <_root.OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu-d1d26678.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Co-fb959598.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Me-b484c7b4.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Op-6d349430.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Sh-dfa95b50.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.App.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.PropertyBinding-1.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostic.h>
#include <Fuse.DiagnosticHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DiagnosticType.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Node.h>
#include <Fuse.Preview.ISelection.h>
#include <Fuse.Preview.SelectionManager.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Time.h>
#include <Fuse.Timer.h>
#include <Fuse.Toast.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.UnhandledExceptionArgs.h>
#include <Fuse.UnhandledExceptionHandler.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventArgs.h>
#include <iOS.Foundation.NSUUID.h>
#include <iOS.UIKit.UIDevice.h>
#include <Outracks.Simulator.AggregateConnectError.h>
#include <Outracks.Simulator.Application.DiagnosticItem.h>
#include <Outracks.Simulator.Application.h>
#include <Outracks.Simulator.Apply-1.h>
#include <Outracks.Simulator.ApplyFirst-2.h>
#include <Outracks.Simulator.ApplySecond-2.h>
#include <Outracks.Simulator.ArrayStream.h>
#include <Outracks.Simulator.Bundle.h>
#include <Outracks.Simulator.Bytecode.Lambda.h>
#include <Outracks.Simulator.Bytecode.Optional.h>
#include <Outracks.Simulator.Bytecode.Optional-1.h>
#include <Outracks.Simulator.BytecodeCache.h>
#include <Outracks.Simulator.ChangeIp.h>
#include <Outracks.Simulator.Closure.h>
#include <Outracks.Simulator.ConcurrentQueue-1.h>
#include <Outracks.Simulator.Connected.h>
#include <Outracks.Simulator.Connecting.h>
#include <Outracks.Simulator.ConnectingToHost.h>
#include <Outracks.Simulator.ConnectingToProxy.h>
#include <Outracks.Simulator.ConnectionLost.h>
#include <Outracks.Simulator.ConnectToEndpointClosure.h>
#include <Outracks.Simulator.ConnectToFirstRespondingEndpoint.h>
#include <Outracks.Simulator.Context.h>
#include <Outracks.Simulator.DeveloperMenu.h>
#include <Outracks.Simulator.DeviceInfo.h>
#include <Outracks.Simulator.DialogButton.h>
#include <Outracks.Simulator.DummyApplication.h>
#include <Outracks.Simulator.EnumerableHitTestExtension.CollectHitNodesClosure.h>
#include <Outracks.Simulator.EnumerableHitTestExtension.h>
#include <Outracks.Simulator.ErrorToast.h>
#include <Outracks.Simulator.Exceptions.h>
#include <Outracks.Simulator.FailedToConnect.h>
#include <Outracks.Simulator.FailedToConnectToEndPoint.h>
#include <Outracks.Simulator.FailedToConnectToProxy.h>
#include <Outracks.Simulator.FailedToConnectToSimulator.h>
#include <Outracks.Simulator.FakeApp.h>
#include <Outracks.Simulator.Faulted.h>
#include <Outracks.Simulator.Flasher.h>
#include <Outracks.Simulator.Forget-2.h>
#include <Outracks.Simulator.Forget-3.h>
#include <Outracks.Simulator.ForgetAction-2.h>
#include <Outracks.Simulator.GetSimulatorEndpoint.h>
#include <Outracks.Simulator.GoOffline.h>
#include <Outracks.Simulator.Idle.h>
#include <Outracks.Simulator.IEquatable-1.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.IndentString.h>
#include <Outracks.Simulator.InputMode.h>
#include <Outracks.Simulator.InvalidDataException.h>
#include <Outracks.Simulator.ISimulatorClient.h>
#include <Outracks.Simulator.List.h>
#include <Outracks.Simulator.LoadingScreen.h>
#include <Outracks.Simulator.ModalDialog.h>
#include <Outracks.Simulator.NonExhaustiveMatch.h>
#include <Outracks.Simulator.OfflineSimulatorClient.h>
#include <Outracks.Simulator.Protocol.DebugLog.h>
#include <Outracks.Simulator.Protocol.Error.h>
#include <Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <Outracks.Simulator.Protocol.Execute.h>
#include <Outracks.Simulator.Protocol.MessageFromClient.h>
#include <Outracks.Simulator.Protocol.MessageToClient.h>
#include <Outracks.Simulator.Protocol.RegisterName.h>
#include <Outracks.Simulator.Protocol.Reify.h>
#include <Outracks.Simulator.Protocol.SetSelection.h>
#include <Outracks.Simulator.Protocol.UnhandledException.h>
#include <Outracks.Simulator.ProxyClient.h>
#include <Outracks.Simulator.Reifying.h>
#include <Outracks.Simulator.Running.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Outracks.Simulator.Runtime.ObjectTagRegistry.h>
#include <Outracks.Simulator.Runtime.Selection.h>
#include <Outracks.Simulator.Runtime.VirtualMachine.h>
#include <Outracks.Simulator.Serialization.h>
#include <Outracks.Simulator.ShowingModalDialog.h>
#include <Outracks.Simulator.ShowingPrompt.h>
#include <Outracks.Simulator.SimulatorClient.h>
#include <Outracks.Simulator.State.h>
#include <Outracks.Simulator.StringSplitting.h>
#include <Outracks.Simulator.Task-1.h>
#include <Outracks.Simulator.Tasks.h>
#include <Outracks.Simulator.TaskThread-1.h>
#include <Outracks.Simulator.Uninitialized.h>
#include <Outracks.Simulator.UserAppState.h>
#include <Outracks.Simulator.WaitForFirstResult-1.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Color.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Diagnostics.LogHandler.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.EndOfStreamException.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.SelectMode.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Runtime.Implementation.Internal.WindowHelpers.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[56];
static uType* TYPES[143];

namespace g{
namespace Outracks{
namespace Simulator{

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno
// -------------------------------------------------------------------------

// public static class AggregateConnectError :31
// {
static void AggregateConnectError_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("    ");
    ::STRINGS[2] = uString::Const("\n"
        "");
    ::TYPES[0] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Exception_typeof());
    type->Reflection.SetFunctions(1,
        new uFunction("ToIndentedLines", NULL, (void*)AggregateConnectError__ToIndentedLines_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof())));
}

uClassType* AggregateConnectError_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.AggregateConnectError", options);
    type->fp_build_ = AggregateConnectError_build;
    return type;
}

// public static string ToIndentedLines(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :33
void AggregateConnectError__ToIndentedLines_fn(uObject* innerExceptions, uString** __retval)
{
    *__retval = AggregateConnectError::ToIndentedLines(innerExceptions);
}

// public static string ToIndentedLines(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [static] :33
uString* AggregateConnectError::ToIndentedLines(uObject* innerExceptions)
{
    uStackFrame __("Outracks.Simulator.AggregateConnectError", "ToIndentedLines(Uno.Collections.IEnumerable<Uno.Exception>)");
    ::g::Uno::Exception* ret2;
    uString* s = ::STRINGS[0/*""*/];

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(innerExceptions), ::TYPES[0/*Uno.Collections.IEnumerable<Uno.Exception>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Exception* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator<Uno.Exception>*/]), &ret2), ret2);
        s = ::g::Uno::String::op_Addition2(s, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[1/*"    "*/], uPtr(e)->Message()), ::STRINGS[2/*"\n"*/]));
    }

    return s;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public class Application :21
// {
static void Application_build(uType* type)
{
    ::STRINGS[3] = uString::Const("FF374A");
    ::STRINGS[4] = uString::Const("60E800");
    ::STRINGS[5] = uString::Const("FFB60E");
    ::STRINGS[6] = uString::Const("B6B60E");
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(Application__DiagnosticItem_typeof());
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Input::PointerPressedArgs_typeof());
    ::TYPES[6] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[7] = ::g::Fuse::Input::IPointerEventResponder_typeof();
    ::TYPES[8] = ::g::Fuse::UnhandledExceptionHandler_typeof();
    ::TYPES[9] = ::g::Fuse::App_typeof();
    ::TYPES[10] = ::g::Fuse::DiagnosticHandler_typeof();
    ::TYPES[11] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[12] = ::g::Fuse::Visual_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[17] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[18] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(Application_type, interface0));
    type->SetFields(12,
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(::g::Outracks::Simulator::Application, _defaultPointerEventResponder), 0,
        ::g::Outracks::Simulator::DeveloperMenu_typeof(), offsetof(::g::Outracks::Simulator::Application, _developerMenu), 0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Outracks::Simulator::Application, _exception), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(Application__DiagnosticItem_typeof()), offsetof(::g::Outracks::Simulator::Application, _prevDiagnostics), 0,
        ::g::Outracks::Simulator::State_typeof(), offsetof(::g::Outracks::Simulator::Application, _state), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Input::PointerPressedArgs_typeof()), offsetof(::g::Outracks::Simulator::Application, pointers), 0);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)Application__New2_fn, 0, true, Application_typeof(), 4, ::g::Uno::Net::IPEndPoint_typeof()->Array(), ::g::Uno::String_typeof(), ::g::Uno::Func_typeof()->MakeType(::g::Uno::IO::Bundle_typeof()), ::g::Uno::String_typeof()->Array()),
        new uFunction("OnPointerMoved", NULL, (void*)Application__OnPointerMoved_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerMovedArgs_typeof()),
        new uFunction("OnPointerPressed", NULL, (void*)Application__OnPointerPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerPressedArgs_typeof()),
        new uFunction("OnPointerReleased", NULL, (void*)Application__OnPointerReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerReleasedArgs_typeof()),
        new uFunction("OnPointerWheelMoved", NULL, (void*)Application__OnPointerWheelMoved_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerWheelMovedArgs_typeof()),
        new uFunction("get_Reflection", NULL, (void*)Application__get_Reflection_fn, 0, false, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), 0),
        new uFunction("set_Reflection", NULL, (void*)Application__set_Reflection_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Runtime::IReflection_typeof()));
}

Application_type* Application_typeof()
{
    static uSStrong<Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Application);
    options.TypeSize = sizeof(Application_type);
    type = (Application_type*)uClassType::New("Outracks.Simulator.Application", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_build_ = Application_build;
    type->fp_OnUpdate = (void(*)(::g::Fuse::AppBase*))Application__OnUpdate_fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))Application__OnPointerPressed_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))Application__OnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))Application__OnPointerReleased_fn;
    type->interface0.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))Application__OnPointerWheelMoved_fn;
    return type;
}

// public Application(Uno.Net.IPEndPoint[] proxyEndpoints, string project, Uno.Func<Uno.IO.Bundle> projectBundle, string[] defines) :32
void Application__ctor_3_fn(Application* __this, uArray* proxyEndpoints, uString* project, uDelegate* projectBundle, uArray* defines)
{
    __this->ctor_3(proxyEndpoints, project, projectBundle, defines);
}

// private void DisplayDiagnostic(Fuse.Diagnostic d) :99
void Application__DisplayDiagnostic_fn(Application* __this, ::g::Fuse::Diagnostic* d)
{
    __this->DisplayDiagnostic(d);
}

// private void DoNothing() :203
void Application__DoNothing_fn(Application* __this)
{
    __this->DoNothing();
}

// private void InvalidateSelection(object sender, Uno.EventArgs args) :140
void Application__InvalidateSelection1_fn(Application* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->InvalidateSelection1(sender, args);
}

// public Application New(Uno.Net.IPEndPoint[] proxyEndpoints, string project, Uno.Func<Uno.IO.Bundle> projectBundle, string[] defines) :32
void Application__New2_fn(uArray* proxyEndpoints, uString* project, uDelegate* projectBundle, uArray* defines, Application** __retval)
{
    *__retval = Application::New2(proxyEndpoints, project, projectBundle, defines);
}

// private void OnDiagnosticReported(Fuse.Diagnostic d) :71
void Application__OnDiagnosticReported_fn(Application* __this, ::g::Fuse::Diagnostic* d)
{
    __this->OnDiagnosticReported(d);
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) :205
void Application__OnPointerMoved_fn(Application* __this, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) :173
void Application__OnPointerPressed_fn(Application* __this, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :212
void Application__OnPointerReleased_fn(Application* __this, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(args);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) :226
void Application__OnPointerWheelMoved_fn(Application* __this, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    __this->OnPointerWheelMoved(args);
}

// private void OnUnhandledException(object sender, Fuse.UnhandledExceptionArgs args) :236
void Application__OnUnhandledException1_fn(Application* __this, uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args)
{
    __this->OnUnhandledException1(sender, args);
}

// protected override sealed void OnUpdate() :242
void Application__OnUpdate_fn(Application* __this)
{
    uStackFrame __("Outracks.Simulator.Application", "OnUpdate()");
    bool ret5;
    ::g::Uno::Exception* exception;

    while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(__this->_exception), (void**)(&exception), &ret5), ret5))
    {
        __this->ResetEverything();
        __this->SetState(uPtr(__this->_state)->OnException(exception));
        return;
    }

    __this->SetState(uPtr(__this->_state)->OnUpdate());
    ::g::Fuse::App__OnUpdate_fn(__this);
}

// public Outracks.Simulator.Runtime.IReflection get_Reflection() :28
void Application__get_Reflection_fn(Application* __this, uObject** __retval)
{
    *__retval = __this->Reflection();
}

// public void set_Reflection(Outracks.Simulator.Runtime.IReflection value) :29
void Application__set_Reflection_fn(Application* __this, uObject* value)
{
    __this->Reflection(value);
}

// private void ResetEverything() :145
void Application__ResetEverything_fn(Application* __this)
{
    __this->ResetEverything();
}

// private void SetState(Outracks.Simulator.State nextState) :256
void Application__SetState_fn(Application* __this, ::g::Outracks::Simulator::State* nextState)
{
    __this->SetState(nextState);
}

// private void ShowDeveloperMenu() :186
void Application__ShowDeveloperMenu_fn(Application* __this)
{
    __this->ShowDeveloperMenu();
}

// private void TryUnrootEverything() :157
void Application__TryUnrootEverything_fn(Application* __this)
{
    __this->TryUnrootEverything();
}

// public Application(Uno.Net.IPEndPoint[] proxyEndpoints, string project, Uno.Func<Uno.IO.Bundle> projectBundle, string[] defines) [instance] :32
void Application::ctor_3(uArray* proxyEndpoints, uString* project, uDelegate* projectBundle, uArray* defines)
{
    uStackFrame __("Outracks.Simulator.Application", ".ctor(Uno.Net.IPEndPoint[],string,Uno.Func<Uno.IO.Bundle>,string[])");
    _state = ::g::Outracks::Simulator::Uninitialized::New1();
    _prevDiagnostics = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Outracks.Simulator.Application.DiagnosticItem>*/]));
    pointers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Fuse.Input.PointerPressedArgs>*/]));
    _developerMenu = ::g::Outracks::Simulator::DeveloperMenu::New4();
    _exception = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[6/*Outracks.Simulator.ConcurrentQueue<Uno.Exception>*/]));
    ctor_2();
    ::g::Outracks::Simulator::Context::SetGlobals(proxyEndpoints, project, projectBundle, defines);
    _defaultPointerEventResponder = ::g::Fuse::Input::Pointer::EventResponder();
    ::g::Fuse::Input::Pointer::EventResponder((uObject*)this);
    add_UnhandledException(uDelegate::New(::TYPES[8/*Fuse.UnhandledExceptionHandler*/], (void*)Application__OnUnhandledException1_fn, this));
    ::g::Outracks::Simulator::FakeApp* fakeApp = ::g::Outracks::Simulator::FakeApp::New4(this);
    ::g::Outracks::Simulator::UserAppState::Default(::g::Outracks::Simulator::UserAppState::Save(fakeApp));
    ResetEverything();
    ::g::Fuse::Diagnostics::add_DiagnosticReported(uDelegate::New(::TYPES[10/*Fuse.DiagnosticHandler*/], (void*)Application__OnDiagnosticReported_fn, this));
    ::g::Fuse::Preview::SelectionManager::add_SelectionChanged(uDelegate::New(::TYPES[11/*Uno.EventHandler<Uno.EventArgs>*/], (void*)Application__InvalidateSelection1_fn, this));
}

// private void DisplayDiagnostic(Fuse.Diagnostic d) [instance] :99
void Application::DisplayDiagnostic(::g::Fuse::Diagnostic* d)
{
    uStackFrame __("Outracks.Simulator.Application", "DisplayDiagnostic(Fuse.Diagnostic)");
    ::g::Uno::Float4 color = ::g::Uno::Color::FromHex(::STRINGS[3/*"FF374A"*/]);
    float duration = 4.0f;
    bool showMonitorInfo = false;

    switch (uPtr(d)->Type)
    {
        case 0:
        {
            color = ::g::Uno::Color::FromHex(::STRINGS[4/*"60E800"*/]);
            duration = 2.5f;
            break;
        }
        case 1:
        {
            duration = -1.0f;
            showMonitorInfo = true;
            break;
        }
        case 2:
        {
            color = ::g::Uno::Color::FromHex(::STRINGS[5/*"FFB60E"*/]);
            showMonitorInfo = true;
            break;
        }
        case 5:
        {
            color = ::g::Uno::Color::FromHex(::STRINGS[6/*"B6B60E"*/]);
            break;
        }
        case 4:
        case 3:
        case 6:
            return;
    }

    ::g::Outracks::Simulator::ErrorToast* t = ::g::Outracks::Simulator::ErrorToast::New5();
    t->Message(uPtr(d)->Message);
    t->Color1(color);
    t->ShowMonitorInfo(showMonitorInfo);
    ::g::Fuse::Toast* toast = ::g::Fuse::Toast::Post(t, (double)duration);
    t->add_Dismissed(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)::g::Fuse::Toast__Dismiss_fn, uPtr(toast)));
}

// private void DoNothing() [instance] :203
void Application::DoNothing()
{
}

// private void InvalidateSelection(object sender, Uno.EventArgs args) [instance] :140
void Application::InvalidateSelection1(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Outracks.Simulator.Application", "InvalidateSelection(object,Uno.EventArgs)");
    uPtr(RootViewport())->InvalidateVisual();
}

// private void OnDiagnosticReported(Fuse.Diagnostic d) [instance] :71
void Application::OnDiagnosticReported(::g::Fuse::Diagnostic* d)
{
    uStackFrame __("Outracks.Simulator.Application", "OnDiagnosticReported(Fuse.Diagnostic)");
    Application__DiagnosticItem* collection1;
    Application__DiagnosticItem* ret3;
    double time = ::g::Fuse::Time::FrameTime();

    for (int i = uPtr(_prevDiagnostics)->Count() - 1; i >= 0; --i)
    {
        Application__DiagnosticItem* old = (::g::Uno::Collections::List__get_Item_fn(uPtr(_prevDiagnostics), uCRef<int>(i), &ret3), ret3);

        if (time > uPtr(old)->Expire)
        {
            uPtr(_prevDiagnostics)->RemoveAt(i);
            continue;
        }

        if (uPtr(old)->SameAs(d))
            return;
    }

    collection1 = Application__DiagnosticItem::New1();
    uPtr(collection1)->FrameIndex = ::g::Fuse::UpdateManager::FrameIndex();
    uPtr(collection1)->Expire = (time + 5.0);
    uPtr(collection1)->Diagnostic = d;
    Application__DiagnosticItem* item = collection1;
    ::g::Uno::Collections::List__Add_fn(uPtr(_prevDiagnostics), item);
    DisplayDiagnostic(d);
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) [instance] :205
void Application::OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Application", "OnPointerMoved(Fuse.Input.PointerMovedArgs)");
    ::g::Fuse::Input::IPointerEventResponder::OnPointerMoved(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[7/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) [instance] :173
void Application::OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Application", "OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    ::g::Uno::Collections::List__Add_fn(uPtr(pointers), args);

    if (uPtr(pointers)->Count() == 3)
        ::g::Fuse::Timer::Wait(1.0, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Application__ShowDeveloperMenu_fn, this));

    SetState(uPtr(_state)->OnPointerPressed(args));

    if (!uPtr(args)->IsHandled())
        ::g::Fuse::Input::IPointerEventResponder::OnPointerPressed(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[7/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) [instance] :212
void Application::OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Application", "OnPointerReleased(Fuse.Input.PointerReleasedArgs)");
    ::g::Fuse::Input::PointerPressedArgs* ret4;

    for (int i = 0; i < uPtr(pointers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(pointers), uCRef<int>(i), &ret4), ret4))->PointIndex() == uPtr(args)->PointIndex())
        {
            uPtr(pointers)->RemoveAt(i);
            break;
        }

    ::g::Fuse::Input::IPointerEventResponder::OnPointerReleased(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[7/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) [instance] :226
void Application::OnPointerWheelMoved(::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Application", "OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs)");
    ::g::Fuse::Input::IPointerEventResponder::OnPointerWheelMoved(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[7/*Fuse.Input.IPointerEventResponder*/]), args);
}

// private void OnUnhandledException(object sender, Fuse.UnhandledExceptionArgs args) [instance] :236
void Application::OnUnhandledException1(uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args)
{
    uStackFrame __("Outracks.Simulator.Application", "OnUnhandledException(object,Fuse.UnhandledExceptionArgs)");
    uPtr(args)->IsHandled(true);
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_exception), args->Exception());
}

// public Outracks.Simulator.Runtime.IReflection get_Reflection() [instance] :28
uObject* Application::Reflection()
{
    uStackFrame __("Outracks.Simulator.Application", "get_Reflection()");
    return ::g::Outracks::Simulator::Context::Reflection();
}

// public void set_Reflection(Outracks.Simulator.Runtime.IReflection value) [instance] :29
void Application::Reflection(uObject* value)
{
    uStackFrame __("Outracks.Simulator.Application", "set_Reflection(Outracks.Simulator.Runtime.IReflection)");
    ::g::Outracks::Simulator::Context::Reflection(value);
}

// private void ResetEverything() [instance] :145
void Application::ResetEverything()
{
    uStackFrame __("Outracks.Simulator.Application", "ResetEverything()");
    ::g::Outracks::Simulator::FakeApp* fakeApp = ::g::Outracks::Simulator::FakeApp::New4(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(fakeApp->Children1()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), ::g::Fuse::Controls::Panel::New3());
    ::g::Outracks::Simulator::Context::SetApp(fakeApp);

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/])) > 0)
        TryUnrootEverything();

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), fakeApp);
}

// private void SetState(Outracks.Simulator.State nextState) [instance] :256
void Application::SetState(::g::Outracks::Simulator::State* nextState)
{
    uStackFrame __("Outracks.Simulator.Application", "SetState(Outracks.Simulator.State)");

    if (nextState != _state)
    {
        uPtr(_state)->OnLeaveState();
        _state = nextState;
        SetState(uPtr(_state)->OnEnterState());
    }
}

// private void ShowDeveloperMenu() [instance] :186
void Application::ShowDeveloperMenu()
{
    uStackFrame __("Outracks.Simulator.Application", "ShowDeveloperMenu()");
    ::g::Fuse::Input::PointerPressedArgs* ret6;
    ::g::Fuse::Input::PointerPressedArgs* ret7;
    bool ret8;

    if (uPtr(pointers)->Count() != 3)
        return;

    for (int i = 0; i < uPtr(pointers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(pointers), uCRef<int>(i), &ret6), ret6))->TryHardCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Application__DoNothing_fn, this), NULL))
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(pointers), uCRef<int>(i), &ret7), ret7))->ReleaseHardCapture(this);

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), _developerMenu, &ret8), ret8))
        ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(Children()), ::TYPES[17/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(0), _developerMenu);
}

// private void TryUnrootEverything() [instance] :157
void Application::TryUnrootEverything()
{
    uStackFrame __("Outracks.Simulator.Application", "TryUnrootEverything()");

    try
    {
        ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]));
        ::g::Fuse::App__OnUpdate_fn(this);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* _ = __t.Exception;
    }
}

// public Application New(Uno.Net.IPEndPoint[] proxyEndpoints, string project, Uno.Func<Uno.IO.Bundle> projectBundle, string[] defines) [static] :32
Application* Application::New2(uArray* proxyEndpoints, uString* project, uDelegate* projectBundle, uArray* defines)
{
    Application* obj2 = (Application*)uNew(Application_typeof());
    obj2->ctor_3(proxyEndpoints, project, projectBundle, defines);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// internal sealed class Apply<TArg1> :87
// {
static void Apply_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Outracks::Simulator::Apply, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* Apply_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Apply);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Apply`1", options);
    type->fp_build_ = Apply_build;
    return type;
}

// public Apply(Uno.Action<TArg1> action, TArg1 arg1) :92
void Apply__ctor__fn(Apply* __this, uDelegate* action, void* arg1)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Outracks.Simulator.Apply`1", ".ctor(Uno.Action<TArg1>,TArg1)");
    __this->_action = action;
    __this->_arg1() = arg1;
}

// public void Execute() :98
void Apply__Execute_fn(Apply* __this)
{
    __this->Execute();
}

// public Apply New(Uno.Action<TArg1> action, TArg1 arg1) :92
void Apply__New1_fn(uType* __type, uDelegate* action, void* arg1, Apply** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    Apply* obj1 = (Apply*)uNew(__type);
    Apply__ctor__fn(obj1, action, arg1);
    return *__retval = obj1, void();
}

// public void Execute() [instance] :98
void Apply::Execute()
{
    uStackFrame __("Outracks.Simulator.Apply`1", "Execute()");
    uPtr(_action)->InvokeVoid(_arg1());
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// internal sealed class ApplyFirst<TArg1, TArg2> :104
// {
static void ApplyFirst_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Outracks::Simulator::ApplyFirst, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* ApplyFirst_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(ApplyFirst);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ApplyFirst`2", options);
    type->fp_build_ = ApplyFirst_build;
    return type;
}

// public ApplyFirst(Uno.Action<TArg1, TArg2> action, TArg1 arg1) :108
void ApplyFirst__ctor__fn(ApplyFirst* __this, uDelegate* action, void* arg1)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Outracks.Simulator.ApplyFirst`2", ".ctor(Uno.Action<TArg1, TArg2>,TArg1)");
    __this->_action = action;
    __this->_arg1() = arg1;
}

// public void Execute(TArg2 arg2) :114
void ApplyFirst__Execute_fn(ApplyFirst* __this, void* arg2)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    uStackFrame __("Outracks.Simulator.ApplyFirst`2", "Execute(TArg2)");
    uPtr(__this->_action)->Invoke(2, (void*)__this->_arg1(), arg2);
}

// public ApplyFirst New(Uno.Action<TArg1, TArg2> action, TArg1 arg1) :108
void ApplyFirst__New1_fn(uType* __type, uDelegate* action, void* arg1, ApplyFirst** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    ApplyFirst* obj1 = (ApplyFirst*)uNew(__type);
    ApplyFirst__ctor__fn(obj1, action, arg1);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// internal sealed class ApplySecond<TArg1, TArg2> :120
// {
static void ApplySecond_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Outracks::Simulator::ApplySecond, _action), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* ApplySecond_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(ApplySecond);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ApplySecond`2", options);
    type->fp_build_ = ApplySecond_build;
    return type;
}

// public ApplySecond(Uno.Action<TArg1, TArg2> action, TArg2 arg2) :124
void ApplySecond__ctor__fn(ApplySecond* __this, uDelegate* action, void* arg2)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    uStackFrame __("Outracks.Simulator.ApplySecond`2", ".ctor(Uno.Action<TArg1, TArg2>,TArg2)");
    __this->_action = action;
    __this->_arg2() = arg2;
}

// public void Execute(TArg1 arg1) :130
void ApplySecond__Execute_fn(ApplySecond* __this, void* arg1)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Outracks.Simulator.ApplySecond`2", "Execute(TArg1)");
    uPtr(__this->_action)->Invoke(2, arg1, (void*)__this->_arg2());
}

// public ApplySecond New(Uno.Action<TArg1, TArg2> action, TArg2 arg2) :124
void ApplySecond__New1_fn(uType* __type, uDelegate* action, void* arg2, ApplySecond** __retval)
{
    uType* __types[] = {
        __type->T(1),
    };
    ApplySecond* obj1 = (ApplySecond*)uNew(__type);
    ApplySecond__ctor__fn(obj1, action, arg2);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class ArrayStream :1122
// {
static void ArrayStream_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Array_typeof()->MakeMethod(1, ::g::Uno::Byte_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Outracks::Simulator::ArrayStream, _buffer), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Outracks::Simulator::ArrayStream, _length), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Outracks::Simulator::ArrayStream, _nextIncrease), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Outracks::Simulator::ArrayStream, _Position), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Capacity", NULL, (void*)ArrayStream__get_Capacity_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetBuffer", NULL, (void*)ArrayStream__GetBuffer_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction(".ctor", NULL, (void*)ArrayStream__New1_fn, 0, true, ArrayStream_typeof(), 1, ::g::Uno::Byte_typeof()->Array()));
}

::g::Uno::IO::Stream_type* ArrayStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ArrayStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Outracks.Simulator.ArrayStream", options);
    type->SetBase(::g::Uno::IO::Stream_typeof());
    type->fp_build_ = ArrayStream_build;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanSeek_fn;
    type->fp_get_CanTimeout = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanTimeout_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanWrite_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))ArrayStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))ArrayStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*))ArrayStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))ArrayStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public ArrayStream(byte[] buffer) :1167
void ArrayStream__ctor_1_fn(ArrayStream* __this, uArray* buffer)
{
    __this->ctor_1(buffer);
}

// public override sealed bool get_CanRead() :1131
void ArrayStream__get_CanRead_fn(ArrayStream* __this, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "get_CanRead()");
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :1141
void ArrayStream__get_CanSeek_fn(ArrayStream* __this, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "get_CanSeek()");
    return *__retval = true, void();
}

// public override sealed bool get_CanTimeout() :1146
void ArrayStream__get_CanTimeout_fn(ArrayStream* __this, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "get_CanTimeout()");
    return *__retval = false, void();
}

// public override sealed bool get_CanWrite() :1136
void ArrayStream__get_CanWrite_fn(ArrayStream* __this, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "get_CanWrite()");
    return *__retval = true, void();
}

// public int get_Capacity() :1159
void ArrayStream__get_Capacity_fn(ArrayStream* __this, int* __retval)
{
    *__retval = __this->Capacity();
}

// private void EnsureCapacity(int byteCount) :1215
void ArrayStream__EnsureCapacity_fn(ArrayStream* __this, int* byteCount)
{
    __this->EnsureCapacity(*byteCount);
}

// public override sealed void Flush() :1249
void ArrayStream__Flush_fn(ArrayStream* __this)
{
}

// public byte[] GetBuffer() :1239
void ArrayStream__GetBuffer_fn(ArrayStream* __this, uArray** __retval)
{
    *__retval = __this->GetBuffer();
}

// public override sealed long get_Length() :1151
void ArrayStream__get_Length_fn(ArrayStream* __this, int64_t* __retval)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "get_Length()");
    return *__retval = __this->_length, void();
}

// public ArrayStream New(byte[] buffer) :1167
void ArrayStream__New1_fn(uArray* buffer, ArrayStream** __retval)
{
    *__retval = ArrayStream::New1(buffer);
}

// public generated override sealed long get_Position() :1165
void ArrayStream__get_Position_fn(ArrayStream* __this, int64_t* __retval)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "get_Position()");
    return *__retval = __this->_Position, void();
}

// public generated override sealed void set_Position(long value) :1165
void ArrayStream__set_Position_fn(ArrayStream* __this, int64_t* value)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "set_Position(long)");
    int64_t value_ = *value;
    __this->_Position = value_;
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :1187
void ArrayStream__Read_fn(ArrayStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "Read(byte[],int,int)");
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    int i = 0;

    for (; (i < byteCount_) && ((__this->Position() + (int64_t)i) < __this->Length()); i++)
        uPtr(dst)->Item<uint8_t>(i + byteOffset_) = uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position() + i);

    __this->Position(__this->Position() + (int64_t)i);
    return *__retval = i, void();
}

// private void ResizeTo(int newSize) :1231
void ArrayStream__ResizeTo_fn(ArrayStream* __this, int* newSize)
{
    __this->ResizeTo(*newSize);
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :1198
void ArrayStream__Seek_fn(ArrayStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "Seek(long,Uno.IO.SeekOrigin)");
    int origin_ = *origin;
    int64_t byteOffset_ = *byteOffset;

    switch (origin_)
    {
        case 0:
        {
            __this->Position(byteOffset_);
            break;
        }
        case 2:
        {
            __this->Position(__this->Length() + byteOffset_);
            break;
        }
        default:
        {
            __this->Position(__this->Position() + byteOffset_);
            break;
        }
    }

    return *__retval = __this->Position(), void();
}

// public override sealed void SetLength(long value) :1244
void ArrayStream__SetLength_fn(ArrayStream* __this, int64_t* value)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "SetLength(long)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :1173
void ArrayStream__Write_fn(ArrayStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "Write(byte[],int,int)");
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    __this->EnsureCapacity(byteCount_);

    for (int i = byteOffset_; i < (byteOffset_ + byteCount_); i++)
    {
        uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position()) = uPtr(src)->Item<uint8_t>(i);
        __this->Position(__this->Position() + 1LL);
    }

    if (__this->Position() > __this->Length())
        __this->_length = __this->Position();
}

// public ArrayStream(byte[] buffer) [instance] :1167
void ArrayStream::ctor_1(uArray* buffer)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", ".ctor(byte[])");
    _buffer = uArray::New(::TYPES[19/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
    _buffer = buffer;
    _length = (int64_t)uPtr(_buffer)->Length();
}

// public int get_Capacity() [instance] :1159
int ArrayStream::Capacity()
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "get_Capacity()");
    return uPtr(_buffer)->Length();
}

// private void EnsureCapacity(int byteCount) [instance] :1215
void ArrayStream::EnsureCapacity(int byteCount)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "EnsureCapacity(int)");

    if ((Position() + (int64_t)byteCount) <= (int64_t)Capacity())
        return;
    else if ((Position() + (int64_t)byteCount) <= (int64_t)(Capacity() + _nextIncrease))
        ResizeTo(Capacity() + _nextIncrease);
    else
        ResizeTo((int)Position() + byteCount);
}

// public byte[] GetBuffer() [instance] :1239
uArray* ArrayStream::GetBuffer()
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "GetBuffer()");
    return _buffer;
}

// private void ResizeTo(int newSize) [instance] :1231
void ArrayStream::ResizeTo(int newSize)
{
    uStackFrame __("Outracks.Simulator.ArrayStream", "ResizeTo(int)");
    uArray* newBuffer = uArray::New(::TYPES[19/*byte[]*/], newSize);
    ::g::Uno::Array::Copy1(::TYPES[20/*Uno.Array.Copy<byte>*/], _buffer, newBuffer, uPtr(_buffer)->Length());
    _buffer = newBuffer;
    _nextIncrease = Capacity();
}

// public ArrayStream New(byte[] buffer) [static] :1167
ArrayStream* ArrayStream::New1(uArray* buffer)
{
    ArrayStream* obj1 = (ArrayStream*)uNew(ArrayStream_typeof());
    obj1->ctor_1(buffer);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public static class Bundle :2226
// {
static void Bundle_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[22] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    type->Reflection.SetFunctions(1,
        new uFunction("AddOrUpdateFile", NULL, (void*)Bundle__AddOrUpdateFile_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()));
}

uClassType* Bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Bundle", options);
    type->fp_build_ = Bundle_build;
    return type;
}

// public static extern void AddOrUpdateFile(string projectRelativeFilePath, byte[] data) :2229
void Bundle__AddOrUpdateFile_fn(uString* projectRelativeFilePath, uArray* data)
{
    Bundle::AddOrUpdateFile(projectRelativeFilePath, data);
}

// public static extern void AddOrUpdateFile(string projectRelativeFilePath, byte[] data) [static] :2229
void Bundle::AddOrUpdateFile(uString* projectRelativeFilePath, uArray* data)
{
    uStackFrame __("Outracks.Simulator.Bundle", "AddOrUpdateFile(string,byte[])");
    ::g::Uno::IO::BundleFile* ret2;
    ::g::Uno::IO::Bundle* bundle = ::g::Outracks::Simulator::Context::ProjectBundle();

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(bundle)->Files()), ::TYPES[21/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::IO::BundleFile* exisitingFile = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[22/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret2), ret2);

        if (::g::Uno::String::op_Equality(uPtr(exisitingFile)->SourcePath(), projectRelativeFilePath))
        {
            uPtr(exisitingFile)->Update(data);
            return;
        }
    }

    bundle->CreateFile(projectRelativeFilePath, data);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public static class BytecodeCache :1615
// {
static void BytecodeCache_build(uType* type)
{
    ::STRINGS[7] = uString::Const("The impossible has happened");
    ::STRINGS[8] = uString::Const(".");
    ::STRINGS[9] = uString::Const("/");
    ::STRINGS[10] = uString::Const("Fusetools");
    ::STRINGS[11] = uString::Const("Fuse");
    ::STRINGS[12] = uString::Const("Cache");
    ::TYPES[23] = ::g::Uno::IDisposable_typeof();
    ::TYPES[18] = ::g::Uno::Exception_typeof();
    ::TYPES[24] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Protocol::Reify_typeof());
    ::TYPES[25] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Reify_typeof());
    ::TYPES[16] = uObject_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("TryLoad", NULL, (void*)BytecodeCache__TryLoad_fn, 0, true, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Reify_typeof()), 0),
        new uFunction("TrySave", NULL, (void*)BytecodeCache__TrySave_fn, 0, true, uVoid_typeof(), 1, ::g::Outracks::Simulator::Protocol::Reify_typeof()));
}

uClassType* BytecodeCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.BytecodeCache", options);
    type->fp_build_ = BytecodeCache_build;
    return type;
}

// private static string get_CacheFileName() :1676
void BytecodeCache__get_CacheFileName_fn(uString** __retval)
{
    *__retval = BytecodeCache::CacheFileName();
}

// private static string get_CachePath() :1666
void BytecodeCache__get_CachePath_fn(uString** __retval)
{
    *__retval = BytecodeCache::CachePath();
}

// private static string get_FuseDataDirectory() :1671
void BytecodeCache__get_FuseDataDirectory_fn(uString** __retval)
{
    *__retval = BytecodeCache::FuseDataDirectory();
}

// private static Outracks.Simulator.Protocol.Reify Load() :1654
void BytecodeCache__Load_fn(::g::Outracks::Simulator::Protocol::Reify** __retval)
{
    *__retval = BytecodeCache::Load();
}

// private static uint get_ProjectHash() :1681
void BytecodeCache__get_ProjectHash_fn(uint32_t* __retval)
{
    *__retval = BytecodeCache::ProjectHash();
}

// private static void Save(Outracks.Simulator.Protocol.Reify reify) :1630
void BytecodeCache__Save_fn(::g::Outracks::Simulator::Protocol::Reify* reify)
{
    BytecodeCache::Save(reify);
}

// public static Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify> TryLoad() :1642
void BytecodeCache__TryLoad_fn(::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> >* __retval)
{
    *__retval = BytecodeCache::TryLoad();
}

// public static void TrySave(Outracks.Simulator.Protocol.Reify reify) :1618
void BytecodeCache__TrySave_fn(::g::Outracks::Simulator::Protocol::Reify* reify)
{
    BytecodeCache::TrySave(reify);
}

// private static Outracks.Simulator.Protocol.Reify Load() [static] :1654
::g::Outracks::Simulator::Protocol::Reify* BytecodeCache::Load()
{
    uStackFrame __("Outracks.Simulator.BytecodeCache", "Load()");
    ::g::Uno::IO::Stream* stream = ::g::Uno::IO::File::OpenRead(BytecodeCache::CachePath());
    ::g::Uno::IO::BinaryReader* reader = ::g::Uno::IO::BinaryReader::New1(stream);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[23/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return ::g::Outracks::Simulator::Protocol::Reify::Read1(reader);
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"The impossi...*/]));
}

// private static void Save(Outracks.Simulator.Protocol.Reify reify) [static] :1630
void BytecodeCache::Save(::g::Outracks::Simulator::Protocol::Reify* reify)
{
    uStackFrame __("Outracks.Simulator.BytecodeCache", "Save(Outracks.Simulator.Protocol.Reify)");
    ::g::Uno::IO::Directory::CreateDirectory(BytecodeCache::FuseDataDirectory());
    ::g::Uno::IO::Stream* stream = ::g::Uno::IO::File::Open(BytecodeCache::CachePath(), 4);
    ::g::Uno::IO::BinaryWriter* writer = ::g::Uno::IO::BinaryWriter::New1(stream);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)writer), ::TYPES[23/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Outracks::Simulator::Protocol::Reify::Write1(reify, writer);
    }
}

// public static Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify> TryLoad() [static] :1642
::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> > BytecodeCache::TryLoad()
{
    uStackFrame __("Outracks.Simulator.BytecodeCache", "TryLoad()");
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> > ret1;
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> > ret2;

    try
    {
        return (::g::Outracks::Simulator::Bytecode::Optional__Some_fn(::TYPES[24/*Outracks.Simulator.Bytecode.Optional.Some<Outracks.Simulator.Protocol.Reify>*/], BytecodeCache::Load(), &ret1), ret1);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* _ = __t.Exception;
        return (::g::Outracks::Simulator::Bytecode::Optional1__op_Implicit_fn(::TYPES[25/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify>*/], ::g::Outracks::Simulator::Bytecode::Optional::None(), &ret2), ret2);
    }
}

// public static void TrySave(Outracks.Simulator.Protocol.Reify reify) [static] :1618
void BytecodeCache::TrySave(::g::Outracks::Simulator::Protocol::Reify* reify)
{
    uStackFrame __("Outracks.Simulator.BytecodeCache", "TrySave(Outracks.Simulator.Protocol.Reify)");

    try
    {
        BytecodeCache::Save(reify);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* _ = __t.Exception;
    }
}

// private static string get_CacheFileName() [static] :1676
uString* BytecodeCache::CacheFileName()
{
    uStackFrame __("Outracks.Simulator.BytecodeCache", "get_CacheFileName()");
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(uBox<uint32_t>(::g::Uno::UInt_typeof(), BytecodeCache::ProjectHash()), ::STRINGS[8/*"."*/]), ::g::Outracks::Simulator::Protocol::Reify::BinaryFormat());
}

// private static string get_CachePath() [static] :1666
uString* BytecodeCache::CachePath()
{
    uStackFrame __("Outracks.Simulator.BytecodeCache", "get_CachePath()");
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(BytecodeCache::FuseDataDirectory(), ::STRINGS[9/*"/"*/]), BytecodeCache::CacheFileName());
}

// private static string get_FuseDataDirectory() [static] :1671
uString* BytecodeCache::FuseDataDirectory()
{
    uStackFrame __("Outracks.Simulator.BytecodeCache", "get_FuseDataDirectory()");
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[9/*"/"*/]), ::STRINGS[10/*"Fusetools"*/]), ::STRINGS[9/*"/"*/]), ::STRINGS[11/*"Fuse"*/]), ::STRINGS[9/*"/"*/]), ::STRINGS[12/*"Cache"*/]);
}

// private static uint get_ProjectHash() [static] :1681
uint32_t BytecodeCache::ProjectHash()
{
    uStackFrame __("Outracks.Simulator.BytecodeCache", "get_ProjectHash()");
    return (uint32_t)(uPtr(::g::Outracks::Simulator::Context::Project())->GetHashCode() ^ uPtr(::g::Outracks::Simulator::Context::Project())->Length());
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class ChangeIp :735
// {
static void ChangeIp_build(uType* type)
{
    ::STRINGS[13] = uString::Const("Connect to IP");
    ::STRINGS[14] = uString::Const("\n"
        "E.g. '192.168.1.1'");
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[26] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    type->SetFields(5);
}

::g::Outracks::Simulator::ShowingPrompt_type* ChangeIp_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::ShowingPrompt_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ChangeIp);
    options.TypeSize = sizeof(::g::Outracks::Simulator::ShowingPrompt_type);
    type = (::g::Outracks::Simulator::ShowingPrompt_type*)uClassType::New("Outracks.Simulator.ChangeIp", options);
    type->SetBase(::g::Outracks::Simulator::ShowingPrompt_typeof());
    type->fp_build_ = ChangeIp_build;
    type->fp_OnCancel = (void(*)(::g::Outracks::Simulator::ShowingPrompt*, ::g::Outracks::Simulator::State**))ChangeIp__OnCancel_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))ChangeIp__OnException_fn;
    type->fp_OnOk = (void(*)(::g::Outracks::Simulator::ShowingPrompt*, uString*, ::g::Outracks::Simulator::State**))ChangeIp__OnOk_fn;
    return type;
}

// public ChangeIp([string body]) :737
void ChangeIp__ctor_2_fn(ChangeIp* __this, uString* body)
{
    __this->ctor_2(body);
}

// public ChangeIp New([string body]) :737
void ChangeIp__New1_fn(uString* body, ChangeIp** __retval)
{
    *__retval = ChangeIp::New1(body);
}

// protected override sealed Outracks.Simulator.State OnCancel() :751
void ChangeIp__OnCancel_fn(ChangeIp* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ChangeIp", "OnCancel()");
    return *__retval = ::g::Outracks::Simulator::ConnectingToProxy::New1(), void();
}

// public override sealed Outracks.Simulator.State OnException(Uno.Exception e) :756
void ChangeIp__OnException_fn(ChangeIp* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ChangeIp", "OnException(Uno.Exception)");
    return *__retval = ChangeIp::New1(uPtr(e)->Message()), void();
}

// protected override sealed Outracks.Simulator.State OnOk(string input) :742
void ChangeIp__OnOk_fn(ChangeIp* __this, uString* input, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ChangeIp", "OnOk(string)");
    uArray* endpoints = uArray::Init< ::g::Uno::Net::IPEndPoint*>(::TYPES[26/*Uno.Net.IPEndPoint[]*/], 1, (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(input), uPtr(uPtr(::g::Outracks::Simulator::Context::ProxyEndpoints())->Strong< ::g::Uno::Net::IPEndPoint*>(0))->Port()));
    return *__retval = ::g::Outracks::Simulator::ConnectingToProxy::New2(endpoints), void();
}

// public ChangeIp([string body]) [instance] :737
void ChangeIp::ctor_2(uString* body)
{
    uStackFrame __("Outracks.Simulator.ChangeIp", ".ctor([string])");
    ctor_1(::STRINGS[13/*"Connect to IP"*/], ::g::Uno::String::op_Addition2(body, ::STRINGS[14/*"\nE.g. '192...*/]));
}

// public ChangeIp New([string body]) [static] :737
ChangeIp* ChangeIp::New1(uString* body)
{
    ChangeIp* obj1 = (ChangeIp*)uNew(ChangeIp_typeof());
    obj1->ctor_2(body);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// public static class Closure :9
// {
static void Closure_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[27] = ::g::Outracks::Simulator::Apply_typeof();
    ::TYPES[28] = ::g::Uno::Action1_typeof();
    ::TYPES[29] = ::g::Outracks::Simulator::ApplyFirst_typeof();
    ::TYPES[30] = ::g::Outracks::Simulator::ApplySecond_typeof();
    ::TYPES[31] = ::g::Uno::Action2_typeof();
    ::TYPES[32] = ::g::Outracks::Simulator::ForgetAction_typeof();
    ::TYPES[33] = ::g::Uno::Func1_typeof();
    ::TYPES[34] = ::g::Outracks::Simulator::Forget_typeof();
    ::TYPES[35] = ::g::Uno::EventHandler_typeof();
    ::TYPES[36] = ::g::Outracks::Simulator::ForgetAction_typeof()->MakeType(uObject_typeof(), ::g::Uno::EventArgs_typeof());
    type->Reflection.SetFunctions(6,
        new uFunction("Apply`1", type, (void*)Closure__Apply_fn, 0, true, ::g::Uno::Action_typeof(), 2, ::g::Uno::Action1_typeof()->MakeType(type->U(0)), type->U(0)),
        new uFunction("ApplyFirst`2", type, (void*)Closure__ApplyFirst_fn, 0, true, ::g::Uno::Action1_typeof()->MakeType(type->U(1)), 2, ::g::Uno::Action2_typeof()->MakeType(type->U(0), type->U(1)), type->U(0)),
        new uFunction("ApplySecond`2", type, (void*)Closure__ApplySecond_fn, 0, true, ::g::Uno::Action1_typeof()->MakeType(type->U(0)), 2, ::g::Uno::Action2_typeof()->MakeType(type->U(0), type->U(1)), type->U(1)),
        new uFunction("Forget`2", type, (void*)Closure__Forget_fn, 0, true, ::g::Uno::Action2_typeof()->MakeType(type->U(0), type->U(1)), 1, ::g::Uno::Action_typeof()),
        new uFunction("Return`2", type, (void*)Closure__Return_fn, 0, true, ::g::Uno::Func1_typeof()->MakeType(type->U(0), type->U(1)), 1, type->U(1)),
        new uFunction("ToEventHandler", NULL, (void*)Closure__ToEventHandler_fn, 0, true, ::g::Uno::EventHandler_typeof(), 1, ::g::Uno::Action_typeof()));
}

uClassType* Closure_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Closure", options);
    type->fp_build_ = Closure_build;
    return type;
}

// public static Uno.Action Apply<T>(Uno.Action<T> action, T arg) :26
void Closure__Apply_fn(uType* __type, uDelegate* action, void* arg, uDelegate** __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[27/*Outracks.Simulator.Apply`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Outracks.Simulator.Closure", "Apply`1(Uno.Action<T>,T)");
    ::g::Outracks::Simulator::Apply* ret1;
    return *__retval = uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)::g::Outracks::Simulator::Apply__Execute_fn, (::g::Outracks::Simulator::Apply__New1_fn(__types[1], action, arg, &ret1), ret1)), void();
}

// public static Uno.Action<TArg2> ApplyFirst<TArg1, TArg2>(Uno.Action<TArg1, TArg2> action, TArg1 arg1) :11
void Closure__ApplyFirst_fn(uType* __type, uDelegate* action, void* arg1, uDelegate** __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[28/*Uno.Action`1*/]->MakeType(__type->U(1)),
        __type->U(1),
        ::TYPES[29/*Outracks.Simulator.ApplyFirst`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    uStackFrame __("Outracks.Simulator.Closure", "ApplyFirst`2(Uno.Action<TArg1, TArg2>,TArg1)");
    ::g::Outracks::Simulator::ApplyFirst* ret2;
    return *__retval = uDelegate::New(__types[1], (void*)::g::Outracks::Simulator::ApplyFirst__Execute_fn, (::g::Outracks::Simulator::ApplyFirst__New1_fn(__types[3], action, arg1, &ret2), ret2)), void();
}

// public static Uno.Action<TArg1> ApplySecond<TArg1, TArg2>(Uno.Action<TArg1, TArg2> action, TArg2 arg2) :16
void Closure__ApplySecond_fn(uType* __type, uDelegate* action, void* arg2, uDelegate** __retval)
{
    uType* __types[] = {
        __type->U(1),
        ::TYPES[28/*Uno.Action`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[30/*Outracks.Simulator.ApplySecond`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    uStackFrame __("Outracks.Simulator.Closure", "ApplySecond`2(Uno.Action<TArg1, TArg2>,TArg2)");
    ::g::Outracks::Simulator::ApplySecond* ret3;
    return *__retval = uDelegate::New(__types[1], (void*)::g::Outracks::Simulator::ApplySecond__Execute_fn, (::g::Outracks::Simulator::ApplySecond__New1_fn(__types[3], action, arg2, &ret3), ret3)), void();
}

// public static Uno.Action<TArg1, TArg2> Forget<TArg1, TArg2>(Uno.Action action) :31
void Closure__Forget_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = Closure::Forget(__type, action);
}

// public static Uno.Func<TArg, TResult> Return<TArg, TResult>(TResult result) :21
void Closure__Return_fn(uType* __type, void* result, uDelegate** __retval)
{
    uType* __types[] = {
        __type->U(1),
        ::TYPES[33/*Uno.Func`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(0),
        ::TYPES[34/*Outracks.Simulator.Forget`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    uStackFrame __("Outracks.Simulator.Closure", "Return`2(TResult)");
    ::g::Outracks::Simulator::Forget* ret4;
    return *__retval = uDelegate::New(__types[1], (void*)::g::Outracks::Simulator::Forget__Execute_fn, (::g::Outracks::Simulator::Forget__New1_fn(__types[3], result, &ret4), ret4)), void();
}

// public static Uno.EventHandler ToEventHandler(Uno.Action action) :36
void Closure__ToEventHandler_fn(uDelegate* action, uDelegate** __retval)
{
    *__retval = Closure::ToEventHandler(action);
}

// public static Uno.Action<TArg1, TArg2> Forget<TArg1, TArg2>(Uno.Action action) [static] :31
uDelegate* Closure::Forget(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        ::TYPES[31/*Uno.Action`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(0),
        __type->U(1),
        ::TYPES[32/*Outracks.Simulator.ForgetAction`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    uStackFrame __("Outracks.Simulator.Closure", "Forget`2(Uno.Action)");
    return uDelegate::New(__types[0], (void*)::g::Outracks::Simulator::ForgetAction__Execute_fn, (::g::Outracks::Simulator::ForgetAction*)::g::Outracks::Simulator::ForgetAction::New1(__types[3], action));
}

// public static Uno.EventHandler ToEventHandler(Uno.Action action) [static] :36
uDelegate* Closure::ToEventHandler(uDelegate* action)
{
    uStackFrame __("Outracks.Simulator.Closure", "ToEventHandler(Uno.Action)");
    return uDelegate::New(::TYPES[35/*Uno.EventHandler*/], (void*)::g::Outracks::Simulator::ForgetAction__Execute_fn, (::g::Outracks::Simulator::ForgetAction*)::g::Outracks::Simulator::ForgetAction::New1(::TYPES[36/*Outracks.Simulator.ForgetAction<object, Uno.EventArgs>*/], action));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// private sealed class EnumerableHitTestExtension.CollectHitNodesClosure :2115
// {
static void EnumerableHitTestExtension__CollectHitNodesClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Outracks::Simulator::EnumerableHitTestExtension__CollectHitNodesClosure, _nodes), 0);
}

uType* EnumerableHitTestExtension__CollectHitNodesClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EnumerableHitTestExtension__CollectHitNodesClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.EnumerableHitTestExtension.CollectHitNodesClosure", options);
    type->fp_build_ = EnumerableHitTestExtension__CollectHitNodesClosure_build;
    return type;
}

// public CollectHitNodesClosure(Uno.Collections.List<Fuse.Visual> nodes) :2119
void EnumerableHitTestExtension__CollectHitNodesClosure__ctor__fn(EnumerableHitTestExtension__CollectHitNodesClosure* __this, ::g::Uno::Collections::List* nodes)
{
    __this->ctor_(nodes);
}

// public void HitTestCallback(Fuse.HitTestResult result) :2124
void EnumerableHitTestExtension__CollectHitNodesClosure__HitTestCallback_fn(EnumerableHitTestExtension__CollectHitNodesClosure* __this, ::g::Fuse::HitTestResult* result)
{
    __this->HitTestCallback(result);
}

// public CollectHitNodesClosure New(Uno.Collections.List<Fuse.Visual> nodes) :2119
void EnumerableHitTestExtension__CollectHitNodesClosure__New1_fn(::g::Uno::Collections::List* nodes, EnumerableHitTestExtension__CollectHitNodesClosure** __retval)
{
    *__retval = EnumerableHitTestExtension__CollectHitNodesClosure::New1(nodes);
}

// public CollectHitNodesClosure(Uno.Collections.List<Fuse.Visual> nodes) [instance] :2119
void EnumerableHitTestExtension__CollectHitNodesClosure::ctor_(::g::Uno::Collections::List* nodes)
{
    uStackFrame __("Outracks.Simulator.EnumerableHitTestExtension.CollectHitNodesClosure", ".ctor(Uno.Collections.List<Fuse.Visual>)");
    _nodes = nodes;
}

// public void HitTestCallback(Fuse.HitTestResult result) [instance] :2124
void EnumerableHitTestExtension__CollectHitNodesClosure::HitTestCallback(::g::Fuse::HitTestResult* result)
{
    uStackFrame __("Outracks.Simulator.EnumerableHitTestExtension.CollectHitNodesClosure", "HitTestCallback(Fuse.HitTestResult)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_nodes), uPtr(result)->HitObject());
}

// public CollectHitNodesClosure New(Uno.Collections.List<Fuse.Visual> nodes) [static] :2119
EnumerableHitTestExtension__CollectHitNodesClosure* EnumerableHitTestExtension__CollectHitNodesClosure::New1(::g::Uno::Collections::List* nodes)
{
    EnumerableHitTestExtension__CollectHitNodesClosure* obj1 = (EnumerableHitTestExtension__CollectHitNodesClosure*)uNew(EnumerableHitTestExtension__CollectHitNodesClosure_typeof());
    obj1->ctor_(nodes);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Concurrency/$.uno
// -------------------------------------------------------------------------------------

// public sealed class ConcurrentQueue<T> :10
// {
static void ConcurrentQueue_build(uType* type)
{
    ::TYPES[37] = ::g::Uno::Collections::Queue_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Outracks::Simulator::ConcurrentQueue, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0)), offsetof(::g::Outracks::Simulator::ConcurrentQueue, _queue), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Enqueue", NULL, (void*)ConcurrentQueue__Enqueue_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction(".ctor", type, (void*)ConcurrentQueue__New1_fn, 0, true, type, 0),
        new uFunction("TryDequeue", NULL, (void*)ConcurrentQueue__TryDequeue_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)->ByRef()));
}

uType* ConcurrentQueue_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ConcurrentQueue);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ConcurrentQueue`1", options);
    type->fp_build_ = ConcurrentQueue_build;
    type->fp_ctor_ = (void*)ConcurrentQueue__New1_fn;
    return type;
}

// public ConcurrentQueue() :15
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this)
{
    __this->ctor_();
}

// public void Enqueue(T data) :21
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* data)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Outracks.Simulator.ConcurrentQueue`1", "Enqueue(T)");
    uPtr(__this->_mutex)->Lock();
    ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(__this->_queue), data);
    uPtr(__this->_mutex)->Unlock();
}

// public ConcurrentQueue New() :15
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval)
{
    *__retval = ConcurrentQueue::New1(__type);
}

// public bool TryDequeue(T& data) :28
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef data, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Outracks.Simulator.ConcurrentQueue`1", "TryDequeue(T&)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uPtr(__this->_mutex)->Lock();
    bool result = false;

    if (uPtr(__this->_queue)->Count() != 0)
    {
        data.Store((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_queue), &ret2), ret2));
        result = true;
    }
    else
        data.Default(__types[0]);

    uPtr(__this->_mutex)->Unlock();
    return *__retval = result, void();
}

// public ConcurrentQueue() [instance] :15
void ConcurrentQueue::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
        __type->T(0),
    };
    uStackFrame __("Outracks.Simulator.ConcurrentQueue`1", ".ctor()");
    _queue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _mutex = ::g::Uno::Threading::Mutex::Create();
}

// public ConcurrentQueue New() [static] :15
ConcurrentQueue* ConcurrentQueue::New1(uType* __type)
{
    ConcurrentQueue* obj1 = (ConcurrentQueue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal abstract class Connected :421
// {
static void Connected_build(uType* type)
{
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[38] = uObject_typeof()->Array();
    ::TYPES[39] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[40] = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof()->MakeMethod(1, ::g::Outracks::Simulator::State_typeof());
    ::TYPES[41] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Reify_typeof(), ::g::Outracks::Simulator::State_typeof());
    ::TYPES[42] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Execute_typeof(), ::g::Outracks::Simulator::State_typeof());
    ::TYPES[43] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Error_typeof(), ::g::Outracks::Simulator::State_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::ISimulatorClient_typeof(), offsetof(::g::Outracks::Simulator::Connected, Client), 0);
}

Connected_type* Connected_typeof()
{
    static uSStrong<Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Connected);
    options.TypeSize = sizeof(Connected_type);
    type = (Connected_type*)uClassType::New("Outracks.Simulator.Connected", options);
    type->SetBase(::g::Outracks::Simulator::State_typeof());
    type->fp_build_ = Connected_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Connected__OnEnterState_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Connected__OnException_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Connected__OnUpdate_fn;
    return type;
}

// protected Connected(Outracks.Simulator.ISimulatorClient client) :425
void Connected__ctor_1_fn(Connected* __this, uObject* client)
{
    __this->ctor_1(client);
}

// protected Outracks.Simulator.State OnConnectionError(Outracks.Simulator.Protocol.Error error) :475
void Connected__OnConnectionError_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Error* error, ::g::Outracks::Simulator::State** __retval)
{
    *__retval = __this->OnConnectionError(error);
}

// public override Outracks.Simulator.State OnEnterState() :431
void Connected__OnEnterState_fn(Connected* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Connected", "OnEnterState()");
    uPtr(::g::Outracks::Simulator::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Context::App());
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnException(Uno.Exception e) :437
void Connected__OnException_fn(Connected* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Connected", "OnException(Uno.Exception)");
    ::g::Uno::Exception* ret1;
    ::g::Uno::Collections::List* exceptions = ::g::Outracks::Simulator::Exceptions::Unpack(e);
    ::g::Outracks::Simulator::Exceptions::Send(__this->Client, exceptions);
    ::g::Uno::Exception* f = (uPtr(exceptions)->Count() == 1) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(exceptions), uCRef<int>(0), &ret1), ret1) : e;
    return *__retval = __this->OnFaulted(f), void();
}

// protected Outracks.Simulator.State OnExecute(Outracks.Simulator.Protocol.Execute args) :469
void Connected__OnExecute_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Execute* args, ::g::Outracks::Simulator::State** __retval)
{
    *__retval = __this->OnExecute(args);
}

// protected Outracks.Simulator.State OnReify(Outracks.Simulator.Protocol.Reify reify) :464
void Connected__OnReify_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Reify* reify, ::g::Outracks::Simulator::State** __retval)
{
    *__retval = __this->OnReify(reify);
}

// public override Outracks.Simulator.State OnUpdate() :447
void Connected__OnUpdate_fn(Connected* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Connected", "OnUpdate()");
    bool ret2;
    ::g::Outracks::Simulator::State* ret3;
    ::g::Outracks::Simulator::Protocol::MessageToClient* message;

    while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(::g::Outracks::Simulator::ISimulatorClient::IncommingMessages(uInterface(uPtr(__this->Client), ::TYPES[39/*Outracks.Simulator.ISimulatorClient*/]))), (void**)(&message), &ret2), ret2))
    {
        ::g::Outracks::Simulator::State* newState = (::g::Outracks::Simulator::Protocol::MessageToClient__Match1_fn(uPtr(message), ::TYPES[40/*Outracks.Simulator.Protocol.MessageToClient.Match<Outracks.Simulator.State>*/], uDelegate::New(::TYPES[41/*Uno.Func<Outracks.Simulator.Protocol.Reify, Outracks.Simulator.State>*/], (void*)Connected__OnReify_fn, __this), uDelegate::New(::TYPES[42/*Uno.Func<Outracks.Simulator.Protocol.Execute, Outracks.Simulator.State>*/], (void*)Connected__OnExecute_fn, __this), uDelegate::New(::TYPES[43/*Uno.Func<Outracks.Simulator.Protocol.Error, Outracks.Simulator.State>*/], (void*)Connected__OnConnectionError_fn, __this), &ret3), ret3);

        if (newState != __this)
            return *__retval = newState, void();
    }

    return *__retval = __this, void();
}

// protected Connected(Outracks.Simulator.ISimulatorClient client) [instance] :425
void Connected::ctor_1(uObject* client)
{
    uStackFrame __("Outracks.Simulator.Connected", ".ctor(Outracks.Simulator.ISimulatorClient)");
    ctor_();
    Client = client;
}

// protected Outracks.Simulator.State OnConnectionError(Outracks.Simulator.Protocol.Error error) [instance] :475
::g::Outracks::Simulator::State* Connected::OnConnectionError(::g::Outracks::Simulator::Protocol::Error* error)
{
    uStackFrame __("Outracks.Simulator.Connected", "OnConnectionError(Outracks.Simulator.Protocol.Error)");
    return ::g::Outracks::Simulator::ConnectionLost::New2(uPtr(error)->Exception);
}

// protected Outracks.Simulator.State OnExecute(Outracks.Simulator.Protocol.Execute args) [instance] :469
::g::Outracks::Simulator::State* Connected::OnExecute(::g::Outracks::Simulator::Protocol::Execute* args)
{
    uStackFrame __("Outracks.Simulator.Connected", "OnExecute(Outracks.Simulator.Protocol.Execute)");
    ::g::Outracks::Simulator::Runtime::VirtualMachine::Execute(uPtr(args)->Function, uArray::New(::TYPES[38/*object[]*/], 0));
    return this;
}

// protected Outracks.Simulator.State OnReify(Outracks.Simulator.Protocol.Reify reify) [instance] :464
::g::Outracks::Simulator::State* Connected::OnReify(::g::Outracks::Simulator::Protocol::Reify* reify)
{
    uStackFrame __("Outracks.Simulator.Connected", "OnReify(Outracks.Simulator.Protocol.Reify)");
    return ::g::Outracks::Simulator::Reifying::New1(Client, reify);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal abstract class Connecting :333
// {
static void Connecting_build(uType* type)
{
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
}

::g::Outracks::Simulator::State_type* Connecting_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Connecting);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.Connecting", options);
    type->SetBase(::g::Outracks::Simulator::State_typeof());
    type->fp_build_ = Connecting_build;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Connecting__OnException_fn;
    return type;
}

// protected generated Connecting() :333
void Connecting__ctor_1_fn(Connecting* __this)
{
    __this->ctor_1();
}

// public override sealed Outracks.Simulator.State OnException(Uno.Exception e) :335
void Connecting__OnException_fn(Connecting* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Connecting", "OnException(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::FailedToConnect::New2(e), void();
}

// protected generated Connecting() [instance] :333
void Connecting::ctor_1()
{
    uStackFrame __("Outracks.Simulator.Connecting", ".ctor()");
    ctor_();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class ConnectingToHost :380
// {
static void ConnectingToHost_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Connecting");
    ::STRINGS[16] = uString::Const("Fetching project data from computer");
    ::TYPES[44] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[46] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[39] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    type->SetFields(0,
        ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::Sockets::Socket_typeof()), offsetof(::g::Outracks::Simulator::ConnectingToHost, _connecting), 0,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), offsetof(::g::Outracks::Simulator::ConnectingToHost, _simulatorEndpoints), 0);
}

::g::Outracks::Simulator::State_type* ConnectingToHost_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConnectingToHost);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.ConnectingToHost", options);
    type->SetBase(::g::Outracks::Simulator::Connecting_typeof());
    type->fp_build_ = ConnectingToHost_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ConnectingToHost__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ConnectingToHost__OnUpdate_fn;
    return type;
}

// public ConnectingToHost(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :384
void ConnectingToHost__ctor_2_fn(ConnectingToHost* __this, uObject* simulatorEndpoints)
{
    __this->ctor_2(simulatorEndpoints);
}

// public ConnectingToHost New(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :384
void ConnectingToHost__New1_fn(uObject* simulatorEndpoints, ConnectingToHost** __retval)
{
    *__retval = ConnectingToHost::New1(simulatorEndpoints);
}

// public override sealed Outracks.Simulator.State OnEnterState() :391
void ConnectingToHost__OnEnterState_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ConnectingToHost", "OnEnterState()");
    __this->_connecting = ::g::Outracks::Simulator::ConnectToFirstRespondingEndpoint::Execute((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[46/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], __this->_simulatorEndpoints)));
    ::g::Outracks::Simulator::LoadingScreen::Show(::g::Outracks::Simulator::Context::App(), ::STRINGS[15/*"Connecting"*/], ::STRINGS[16/*"Fetching pr...*/]);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnUpdate() :406
void ConnectingToHost__OnUpdate_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ConnectingToHost", "OnUpdate()");
    ::g::Uno::Net::Sockets::Socket* ret2;

    if (uPtr(__this->_connecting)->IsCompleted())
    {
        ::g::Outracks::Simulator::SimulatorClient* client = ::g::Outracks::Simulator::SimulatorClient::New1((::g::Outracks::Simulator::Task__get_Result_fn(uPtr(__this->_connecting), &ret2), ret2));
        uPtr(uPtr(::g::Fuse::AppBase::Current1())->Window())->add_Closed(::g::Outracks::Simulator::Closure::ToEventHandler(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)::g::Outracks::Simulator::SimulatorClient__Dispose_fn, client)));
        return *__retval = ::g::Outracks::Simulator::Idle::New1((uObject*)client), void();
    }

    return *__retval = __this, void();
}

// public ConnectingToHost(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [instance] :384
void ConnectingToHost::ctor_2(uObject* simulatorEndpoints)
{
    uStackFrame __("Outracks.Simulator.ConnectingToHost", ".ctor(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>)");
    ctor_1();
    _simulatorEndpoints = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[44/*Uno.Collections.EnumerableExtensions.ToArray<Uno.Net.IPEndPoint>*/], simulatorEndpoints));
}

// public ConnectingToHost New(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [static] :384
ConnectingToHost* ConnectingToHost::New1(uObject* simulatorEndpoints)
{
    ConnectingToHost* obj1 = (ConnectingToHost*)uNew(ConnectingToHost_typeof());
    obj1->ctor_2(simulatorEndpoints);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class ConnectingToProxy :342
// {
static void ConnectingToProxy_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Connecting");
    ::STRINGS[17] = uString::Const("Connecting to computer...");
    ::TYPES[45] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[46] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[47] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[48] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    type->SetFields(0,
        ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array()), offsetof(::g::Outracks::Simulator::ConnectingToProxy, _connecting), 0,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), offsetof(::g::Outracks::Simulator::ConnectingToProxy, _proxyEndpoints), 0);
}

::g::Outracks::Simulator::State_type* ConnectingToProxy_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConnectingToProxy);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.ConnectingToProxy", options);
    type->SetBase(::g::Outracks::Simulator::Connecting_typeof());
    type->fp_build_ = ConnectingToProxy_build;
    type->fp_ctor_ = (void*)ConnectingToProxy__New1_fn;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ConnectingToProxy__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ConnectingToProxy__OnUpdate_fn;
    return type;
}

// public ConnectingToProxy() :352
void ConnectingToProxy__ctor_2_fn(ConnectingToProxy* __this)
{
    __this->ctor_2();
}

// public ConnectingToProxy(Uno.Net.IPEndPoint[] proxyEndpoints) :347
void ConnectingToProxy__ctor_3_fn(ConnectingToProxy* __this, uArray* proxyEndpoints)
{
    __this->ctor_3(proxyEndpoints);
}

// public ConnectingToProxy New() :352
void ConnectingToProxy__New1_fn(ConnectingToProxy** __retval)
{
    *__retval = ConnectingToProxy::New1();
}

// public ConnectingToProxy New(Uno.Net.IPEndPoint[] proxyEndpoints) :347
void ConnectingToProxy__New2_fn(uArray* proxyEndpoints, ConnectingToProxy** __retval)
{
    *__retval = ConnectingToProxy::New2(proxyEndpoints);
}

// public override sealed Outracks.Simulator.State OnEnterState() :357
void ConnectingToProxy__OnEnterState_fn(ConnectingToProxy* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ConnectingToProxy", "OnEnterState()");
    __this->_connecting = ::g::Outracks::Simulator::ProxyClient::GetSimulatorEndpoint((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[46/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], __this->_proxyEndpoints)), ::g::Outracks::Simulator::Context::Project(), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[48/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], ::g::Outracks::Simulator::Context::Defines())));
    ::g::Outracks::Simulator::LoadingScreen::Show(::g::Outracks::Simulator::Context::App(), ::STRINGS[15/*"Connecting"*/], ::STRINGS[17/*"Connecting ...*/]);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnUpdate() :371
void ConnectingToProxy__OnUpdate_fn(ConnectingToProxy* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ConnectingToProxy", "OnUpdate()");
    uArray* ret3;

    if (uPtr(__this->_connecting)->IsCompleted())
        return *__retval = ::g::Outracks::Simulator::ConnectingToHost::New1((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[46/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], (::g::Outracks::Simulator::Task__get_Result_fn(uPtr(__this->_connecting), &ret3), ret3)))), void();

    return *__retval = __this, void();
}

// public ConnectingToProxy() [instance] :352
void ConnectingToProxy::ctor_2()
{
    uStackFrame __("Outracks.Simulator.ConnectingToProxy", ".ctor()");
    ctor_1();
    _proxyEndpoints = ::g::Outracks::Simulator::Context::ProxyEndpoints();
}

// public ConnectingToProxy(Uno.Net.IPEndPoint[] proxyEndpoints) [instance] :347
void ConnectingToProxy::ctor_3(uArray* proxyEndpoints)
{
    uStackFrame __("Outracks.Simulator.ConnectingToProxy", ".ctor(Uno.Net.IPEndPoint[])");
    ctor_1();
    _proxyEndpoints = proxyEndpoints;
}

// public ConnectingToProxy New() [static] :352
ConnectingToProxy* ConnectingToProxy::New1()
{
    ConnectingToProxy* obj2 = (ConnectingToProxy*)uNew(ConnectingToProxy_typeof());
    obj2->ctor_2();
    return obj2;
}

// public ConnectingToProxy New(Uno.Net.IPEndPoint[] proxyEndpoints) [static] :347
ConnectingToProxy* ConnectingToProxy::New2(uArray* proxyEndpoints)
{
    ConnectingToProxy* obj1 = (ConnectingToProxy*)uNew(ConnectingToProxy_typeof());
    obj1->ctor_3(proxyEndpoints);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class ConnectionLost :705
// {
static void ConnectionLost_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Connection lost");
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[19] = uString::Const("Change IP");
    ::STRINGS[20] = uString::Const("Reconnect");
    ::TYPES[49] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    type->SetFields(5);
}

::g::Outracks::Simulator::State_type* ConnectionLost_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ConnectionLost);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.ConnectionLost", options);
    type->SetBase(::g::Outracks::Simulator::ShowingModalDialog_typeof());
    type->fp_build_ = ConnectionLost_build;
    return type;
}

// public ConnectionLost(Outracks.Simulator.Protocol.ExceptionInfo exception) :711
void ConnectionLost__ctor_2_fn(ConnectionLost* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    __this->ctor_2(exception);
}

// public ConnectionLost(Uno.Exception exception) :707
void ConnectionLost__ctor_3_fn(ConnectionLost* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_3(exception);
}

// public ConnectionLost New(Outracks.Simulator.Protocol.ExceptionInfo exception) :711
void ConnectionLost__New2_fn(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception, ConnectionLost** __retval)
{
    *__retval = ConnectionLost::New2(exception);
}

// public ConnectionLost New(Uno.Exception exception) :707
void ConnectionLost__New3_fn(::g::Uno::Exception* exception, ConnectionLost** __retval)
{
    *__retval = ConnectionLost::New3(exception);
}

// public ConnectionLost(Outracks.Simulator.Protocol.ExceptionInfo exception) [instance] :711
void ConnectionLost::ctor_2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    uStackFrame __("Outracks.Simulator.ConnectionLost", ".ctor(Outracks.Simulator.Protocol.ExceptionInfo)");
    ctor_1(::STRINGS[18/*"Connection ...*/], uPtr(exception)->Message, ::STRINGS[0/*""*/], ::g::Outracks::Simulator::GoOffline::PrependOption(uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[49/*Outracks.Simulator.DialogButton[]*/], 2, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[19/*"Change IP"*/], ::g::Outracks::Simulator::ChangeIp::New1(::STRINGS[0/*""*/])), (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[20/*"Reconnect"*/], ::g::Outracks::Simulator::ConnectingToProxy::New1()))));
}

// public ConnectionLost(Uno.Exception exception) [instance] :707
void ConnectionLost::ctor_3(::g::Uno::Exception* exception)
{
    uStackFrame __("Outracks.Simulator.ConnectionLost", ".ctor(Uno.Exception)");
    ctor_2(::g::Outracks::Simulator::Protocol::ExceptionInfo::Capture(exception));
}

// public ConnectionLost New(Outracks.Simulator.Protocol.ExceptionInfo exception) [static] :711
ConnectionLost* ConnectionLost::New2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    ConnectionLost* obj2 = (ConnectionLost*)uNew(ConnectionLost_typeof());
    obj2->ctor_2(exception);
    return obj2;
}

// public ConnectionLost New(Uno.Exception exception) [static] :707
ConnectionLost* ConnectionLost::New3(::g::Uno::Exception* exception)
{
    ConnectionLost* obj1 = (ConnectionLost*)uNew(ConnectionLost_typeof());
    obj1->ctor_3(exception);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class ConnectToEndpointClosure :963
// {
static void ConnectToEndpointClosure_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::Exception_typeof();
    ::TYPES[50] = ::g::Uno::Net::EndPoint_typeof();
    type->SetFields(0,
        ::g::Uno::Net::IPEndPoint_typeof(), offsetof(::g::Outracks::Simulator::ConnectToEndpointClosure, _endpoint), 0);
}

uType* ConnectToEndpointClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConnectToEndpointClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ConnectToEndpointClosure", options);
    type->fp_build_ = ConnectToEndpointClosure_build;
    return type;
}

// public ConnectToEndpointClosure(Uno.Net.IPEndPoint endpoint) :967
void ConnectToEndpointClosure__ctor__fn(ConnectToEndpointClosure* __this, ::g::Uno::Net::IPEndPoint* endpoint)
{
    __this->ctor_(endpoint);
}

// public Uno.Net.Sockets.Socket Execute() :972
void ConnectToEndpointClosure__Execute_fn(ConnectToEndpointClosure* __this, ::g::Uno::Net::Sockets::Socket** __retval)
{
    *__retval = __this->Execute();
}

// public ConnectToEndpointClosure New(Uno.Net.IPEndPoint endpoint) :967
void ConnectToEndpointClosure__New1_fn(::g::Uno::Net::IPEndPoint* endpoint, ConnectToEndpointClosure** __retval)
{
    *__retval = ConnectToEndpointClosure::New1(endpoint);
}

// public ConnectToEndpointClosure(Uno.Net.IPEndPoint endpoint) [instance] :967
void ConnectToEndpointClosure::ctor_(::g::Uno::Net::IPEndPoint* endpoint)
{
    uStackFrame __("Outracks.Simulator.ConnectToEndpointClosure", ".ctor(Uno.Net.IPEndPoint)");
    _endpoint = endpoint;
}

// public Uno.Net.Sockets.Socket Execute() [instance] :972
::g::Uno::Net::Sockets::Socket* ConnectToEndpointClosure::Execute()
{
    uStackFrame __("Outracks.Simulator.ConnectToEndpointClosure", "Execute()");

    try
    {
        ::g::Uno::Net::Sockets::Socket* socket = ::g::Uno::Net::Sockets::Socket::Create(2, 1, 6);
        uPtr(socket)->Connect1(_endpoint);
        return socket;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        U_THROW(::g::Outracks::Simulator::FailedToConnectToEndPoint::New4(_endpoint, e));
    }
}

// public ConnectToEndpointClosure New(Uno.Net.IPEndPoint endpoint) [static] :967
ConnectToEndpointClosure* ConnectToEndpointClosure::New1(::g::Uno::Net::IPEndPoint* endpoint)
{
    ConnectToEndpointClosure* obj1 = (ConnectToEndpointClosure*)uNew(ConnectToEndpointClosure_typeof());
    obj1->ctor_(endpoint);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public static class ConnectToFirstRespondingEndpoint :946
// {
static void ConnectToFirstRespondingEndpoint_build(uType* type)
{
    ::TYPES[51] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::Sockets::Socket_typeof()));
    ::TYPES[45] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[52] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[53] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(1, ::g::Uno::Net::Sockets::Socket_typeof());
    ::TYPES[54] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Net::Sockets::Socket_typeof());
    ::TYPES[55] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(1, ::g::Uno::Net::Sockets::Socket_typeof());
    ::TYPES[56] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::Sockets::Socket_typeof()));
    ::TYPES[57] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof()), ::g::Uno::Net::Sockets::Socket_typeof());
    type->Reflection.SetFunctions(1,
        new uFunction("Execute", NULL, (void*)ConnectToFirstRespondingEndpoint__Execute_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::Sockets::Socket_typeof()), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof())));
}

uClassType* ConnectToFirstRespondingEndpoint_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.ConnectToFirstRespondingEndpoint", options);
    type->fp_build_ = ConnectToFirstRespondingEndpoint_build;
    return type;
}

// public static Outracks.Simulator.Task<Uno.Net.Sockets.Socket> Execute(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :948
void ConnectToFirstRespondingEndpoint__Execute_fn(uObject* simulatorEndpoints, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = ConnectToFirstRespondingEndpoint::Execute(simulatorEndpoints);
}

// private static Uno.Net.Sockets.Socket OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) :957
void ConnectToFirstRespondingEndpoint__OnNoResult_fn(uObject* exceptions, ::g::Uno::Net::Sockets::Socket** __retval)
{
    *__retval = ConnectToFirstRespondingEndpoint::OnNoResult(exceptions);
}

// public static Outracks.Simulator.Task<Uno.Net.Sockets.Socket> Execute(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [static] :948
::g::Outracks::Simulator::Task* ConnectToFirstRespondingEndpoint::Execute(uObject* simulatorEndpoints)
{
    uStackFrame __("Outracks.Simulator.ConnectToFirstRespondingEndpoint", "Execute(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>)");
    ::g::Uno::Net::IPEndPoint* ret2;
    ::g::Uno::Collections::List* socketTasks = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[51/*Uno.Collections.List<Outracks.Simulator.Task<Uno.Net.Sockets.Socket>>*/]);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(simulatorEndpoints), ::TYPES[45/*Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Net::IPEndPoint* endpoint = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[52/*Uno.Collections.IEnumerator<Uno.Net.IPEndPoint>*/]), &ret2), ret2);
        ::g::Uno::Collections::List__Add_fn(uPtr(socketTasks), (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::Run(::TYPES[53/*Outracks.Simulator.Tasks.Run<Uno.Net.Sockets.Socket>*/], uDelegate::New(::TYPES[54/*Uno.Func<Uno.Net.Sockets.Socket>*/], (void*)::g::Outracks::Simulator::ConnectToEndpointClosure__Execute_fn, ::g::Outracks::Simulator::ConnectToEndpointClosure::New1(endpoint))));
    }

    return (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::WaitForFirstResult(::TYPES[55/*Outracks.Simulator.Tasks.WaitForFirstResult<Uno.Net.Sockets.Socket>*/], (uObject*)socketTasks, uDelegate::New(::TYPES[57/*Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, Uno.Net.Sockets.Socket>*/], (void*)ConnectToFirstRespondingEndpoint__OnNoResult_fn));
}

// private static Uno.Net.Sockets.Socket OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) [static] :957
::g::Uno::Net::Sockets::Socket* ConnectToFirstRespondingEndpoint::OnNoResult(uObject* exceptions)
{
    uStackFrame __("Outracks.Simulator.ConnectToFirstRespondingEndpoint", "OnNoResult(Uno.Collections.IEnumerable<Uno.Exception>)");
    U_THROW(::g::Outracks::Simulator::FailedToConnectToSimulator::New4(exceptions));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public static class Context :1797
// {
static void Context_build(uType* type)
{
    ::STRINGS[21] = uString::Const("N/A");
    ::STRINGS[22] = uString::Const("DESIGN MODE");
    ::STRINGS[23] = uString::Const("PREVIEW MODE");
    ::TYPES[58] = ::g::Uno::Int_typeof();
    ::TYPES[59] = ::g::Fuse::Preview::ISelection_typeof();
    type->SetFields(0,
        ::g::Uno::Func_typeof()->MakeType(::g::Uno::IO::Bundle_typeof()), (uintptr_t)&::g::Outracks::Simulator::Context::_projectBundleFactory_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::FakeApp_typeof(), (uintptr_t)&::g::Outracks::Simulator::Context::_App_, uFieldFlagsStatic,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::Outracks::Simulator::Context::_Defines_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::InputMode_typeof(), (uintptr_t)&::g::Outracks::Simulator::Context::_InputMode_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Context::_Project_, uFieldFlagsStatic,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), (uintptr_t)&::g::Outracks::Simulator::Context::_ProxyEndpoints_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), (uintptr_t)&::g::Outracks::Simulator::Context::_Reflection_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(12,
        new uFunction("get_App", NULL, (void*)Context__get_App_fn, 0, true, ::g::Outracks::Simulator::FakeApp_typeof(), 0),
        new uFunction("get_Defines", NULL, (void*)Context__get_Defines_fn, 0, true, ::g::Uno::String_typeof()->Array(), 0),
        new uFunction("get_InputMode", NULL, (void*)Context__get_InputMode_fn, 0, true, ::g::Outracks::Simulator::InputMode_typeof(), 0),
        new uFunction("get_Project", NULL, (void*)Context__get_Project_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("get_ProjectBundle", NULL, (void*)Context__get_ProjectBundle_fn, 0, true, ::g::Uno::IO::Bundle_typeof(), 0),
        new uFunction("get_ProxyEndpoints", NULL, (void*)Context__get_ProxyEndpoints_fn, 0, true, ::g::Uno::Net::IPEndPoint_typeof()->Array(), 0),
        new uFunction("get_Reflection", NULL, (void*)Context__get_Reflection_fn, 0, true, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), 0),
        new uFunction("set_Reflection", NULL, (void*)Context__set_Reflection_fn, 0, true, uVoid_typeof(), 1, ::g::Outracks::Simulator::Runtime::IReflection_typeof()),
        new uFunction("SetApp", NULL, (void*)Context__SetApp_fn, 0, true, uVoid_typeof(), 1, ::g::Outracks::Simulator::FakeApp_typeof()),
        new uFunction("SetDesignMode", NULL, (void*)Context__SetDesignMode_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("SetGlobals", NULL, (void*)Context__SetGlobals_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Net::IPEndPoint_typeof()->Array(), ::g::Uno::String_typeof(), ::g::Uno::Func_typeof()->MakeType(::g::Uno::IO::Bundle_typeof()), ::g::Uno::String_typeof()->Array()),
        new uFunction("SetInteractiveMode", NULL, (void*)Context__SetInteractiveMode_fn, 0, true, uVoid_typeof(), 0));
}

uClassType* Context_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Context", options);
    type->fp_build_ = Context_build;
    return type;
}

// public static generated Outracks.Simulator.FakeApp get_App() :1800
void Context__get_App_fn(::g::Outracks::Simulator::FakeApp** __retval)
{
    *__retval = Context::App();
}

// private static generated void set_App(Outracks.Simulator.FakeApp value) :1800
void Context__set_App_fn(::g::Outracks::Simulator::FakeApp* value)
{
    Context::App(value);
}

// public static generated string[] get_Defines() :1803
void Context__get_Defines_fn(uArray** __retval)
{
    *__retval = Context::Defines();
}

// private static generated void set_Defines(string[] value) :1803
void Context__set_Defines_fn(uArray* value)
{
    Context::Defines(value);
}

// public static generated Outracks.Simulator.InputMode get_InputMode() :1799
void Context__get_InputMode_fn(int* __retval)
{
    *__retval = Context::InputMode();
}

// private static generated void set_InputMode(Outracks.Simulator.InputMode value) :1799
void Context__set_InputMode_fn(int* value)
{
    Context::InputMode(*value);
}

// public static generated string get_Project() :1802
void Context__get_Project_fn(uString** __retval)
{
    *__retval = Context::Project();
}

// private static generated void set_Project(string value) :1802
void Context__set_Project_fn(uString* value)
{
    Context::Project(value);
}

// public static Uno.IO.Bundle get_ProjectBundle() :1808
void Context__get_ProjectBundle_fn(::g::Uno::IO::Bundle** __retval)
{
    *__retval = Context::ProjectBundle();
}

// public static generated Uno.Net.IPEndPoint[] get_ProxyEndpoints() :1801
void Context__get_ProxyEndpoints_fn(uArray** __retval)
{
    *__retval = Context::ProxyEndpoints();
}

// private static generated void set_ProxyEndpoints(Uno.Net.IPEndPoint[] value) :1801
void Context__set_ProxyEndpoints_fn(uArray* value)
{
    Context::ProxyEndpoints(value);
}

// public static generated Outracks.Simulator.Runtime.IReflection get_Reflection() :1811
void Context__get_Reflection_fn(uObject** __retval)
{
    *__retval = Context::Reflection();
}

// public static generated void set_Reflection(Outracks.Simulator.Runtime.IReflection value) :1811
void Context__set_Reflection_fn(uObject* value)
{
    Context::Reflection(value);
}

// public static void SetApp(Outracks.Simulator.FakeApp app) :1829
void Context__SetApp_fn(::g::Outracks::Simulator::FakeApp* app)
{
    Context::SetApp(app);
}

// public static void SetDesignMode() :1813
void Context__SetDesignMode_fn()
{
    Context::SetDesignMode();
}

// public static void SetGlobals(Uno.Net.IPEndPoint[] proxyEndpoints, string project, Uno.Func<Uno.IO.Bundle> projectBundle, string[] defines) :1834
void Context__SetGlobals_fn(uArray* proxyEndpoints, uString* project, uDelegate* projectBundle, uArray* defines)
{
    Context::SetGlobals(proxyEndpoints, project, projectBundle, defines);
}

// public static void SetInteractiveMode() :1821
void Context__SetInteractiveMode_fn()
{
    Context::SetInteractiveMode();
}

uSStrong<uDelegate*> Context::_projectBundleFactory_;
uSStrong< ::g::Outracks::Simulator::FakeApp*> Context::_App_;
uSStrong<uArray*> Context::_Defines_;
int Context::_InputMode_;
uSStrong<uString*> Context::_Project_;
uSStrong<uArray*> Context::_ProxyEndpoints_;
uSStrong<uObject*> Context::_Reflection_;

// public static void SetApp(Outracks.Simulator.FakeApp app) [static] :1829
void Context::SetApp(::g::Outracks::Simulator::FakeApp* app)
{
    uStackFrame __("Outracks.Simulator.Context", "SetApp(Outracks.Simulator.FakeApp)");
    Context::App(app);
}

// public static void SetDesignMode() [static] :1813
void Context::SetDesignMode()
{
    uStackFrame __("Outracks.Simulator.Context", "SetDesignMode()");

    if (Context::InputMode() == 1)
        return;

    Context::InputMode(1);
    ::g::Fuse::Preview::SelectionManager::SetSelection((uObject*)::g::Outracks::Simulator::Runtime::Selection::New1(::STRINGS[21/*"N/A"*/], NULL));
    uPtr(Context::App())->Flash(::STRINGS[22/*"DESIGN MODE"*/]);
}

// public static void SetGlobals(Uno.Net.IPEndPoint[] proxyEndpoints, string project, Uno.Func<Uno.IO.Bundle> projectBundle, string[] defines) [static] :1834
void Context::SetGlobals(uArray* proxyEndpoints, uString* project, uDelegate* projectBundle, uArray* defines)
{
    uStackFrame __("Outracks.Simulator.Context", "SetGlobals(Uno.Net.IPEndPoint[],string,Uno.Func<Uno.IO.Bundle>,string[])");
    Context::ProxyEndpoints(proxyEndpoints);
    Context::Project(project);
    Context::_projectBundleFactory_ = projectBundle;
    Context::Defines(defines);
}

// public static void SetInteractiveMode() [static] :1821
void Context::SetInteractiveMode()
{
    uStackFrame __("Outracks.Simulator.Context", "SetInteractiveMode()");

    if (Context::InputMode() == 0)
        return;

    Context::InputMode(0);
    ::g::Fuse::Preview::SelectionManager::SetSelection((uObject*)::g::Outracks::Simulator::Runtime::Selection::New1(::STRINGS[21/*"N/A"*/], NULL));
    uPtr(Context::App())->Flash(::STRINGS[23/*"PREVIEW MODE"*/]);
}

// public static generated Outracks.Simulator.FakeApp get_App() [static] :1800
::g::Outracks::Simulator::FakeApp* Context::App()
{
    uStackFrame __("Outracks.Simulator.Context", "get_App()");
    return Context::_App_;
}

// private static generated void set_App(Outracks.Simulator.FakeApp value) [static] :1800
void Context::App(::g::Outracks::Simulator::FakeApp* value)
{
    uStackFrame __("Outracks.Simulator.Context", "set_App(Outracks.Simulator.FakeApp)");
    Context::_App_ = value;
}

// public static generated string[] get_Defines() [static] :1803
uArray* Context::Defines()
{
    uStackFrame __("Outracks.Simulator.Context", "get_Defines()");
    return Context::_Defines_;
}

// private static generated void set_Defines(string[] value) [static] :1803
void Context::Defines(uArray* value)
{
    uStackFrame __("Outracks.Simulator.Context", "set_Defines(string[])");
    Context::_Defines_ = value;
}

// public static generated Outracks.Simulator.InputMode get_InputMode() [static] :1799
int Context::InputMode()
{
    uStackFrame __("Outracks.Simulator.Context", "get_InputMode()");
    return Context::_InputMode_;
}

// private static generated void set_InputMode(Outracks.Simulator.InputMode value) [static] :1799
void Context::InputMode(int value)
{
    uStackFrame __("Outracks.Simulator.Context", "set_InputMode(Outracks.Simulator.InputMode)");
    Context::_InputMode_ = value;
}

// public static generated string get_Project() [static] :1802
uString* Context::Project()
{
    uStackFrame __("Outracks.Simulator.Context", "get_Project()");
    return Context::_Project_;
}

// private static generated void set_Project(string value) [static] :1802
void Context::Project(uString* value)
{
    uStackFrame __("Outracks.Simulator.Context", "set_Project(string)");
    Context::_Project_ = value;
}

// public static Uno.IO.Bundle get_ProjectBundle() [static] :1808
::g::Uno::IO::Bundle* Context::ProjectBundle()
{
    uStackFrame __("Outracks.Simulator.Context", "get_ProjectBundle()");
    return (::g::Uno::IO::Bundle*)uPtr(Context::_projectBundleFactory_)->Invoke();
}

// public static generated Uno.Net.IPEndPoint[] get_ProxyEndpoints() [static] :1801
uArray* Context::ProxyEndpoints()
{
    uStackFrame __("Outracks.Simulator.Context", "get_ProxyEndpoints()");
    return Context::_ProxyEndpoints_;
}

// private static generated void set_ProxyEndpoints(Uno.Net.IPEndPoint[] value) [static] :1801
void Context::ProxyEndpoints(uArray* value)
{
    uStackFrame __("Outracks.Simulator.Context", "set_ProxyEndpoints(Uno.Net.IPEndPoint[])");
    Context::_ProxyEndpoints_ = value;
}

// public static generated Outracks.Simulator.Runtime.IReflection get_Reflection() [static] :1811
uObject* Context::Reflection()
{
    uStackFrame __("Outracks.Simulator.Context", "get_Reflection()");
    return Context::_Reflection_;
}

// public static generated void set_Reflection(Outracks.Simulator.Runtime.IReflection value) [static] :1811
void Context::Reflection(uObject* value)
{
    uStackFrame __("Outracks.Simulator.Context", "set_Reflection(Outracks.Simulator.Runtime.IReflection)");
    Context::_Reflection_ = value;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public partial sealed class DeveloperMenu :2279
// {
// static DeveloperMenu() :154
static void DeveloperMenu__cctor_4_fn(uType* __type)
{
    DeveloperMenu::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"Opacity"*/]);
}

static void DeveloperMenu_build(uType* type)
{
    ::STRINGS[24] = uString::Const("Opacity");
    ::STRINGS[25] = uString::Const("Go back");
    ::STRINGS[26] = uString::Const("Fuse Preview Menu");
    ::STRINGS[27] = uString::Const("Tap to dismiss");
    ::TYPES[12] = ::g::Fuse::Visual_typeof();
    ::TYPES[60] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[61] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[62] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[63] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[64] = ::g::Fuse::Animations::Animator_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(93,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Outracks::Simulator::DeveloperMenu, this_Opacity_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::DeveloperMenu::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DeveloperMenu__New4_fn, 0, true, DeveloperMenu_typeof(), 0));
}

::g::Fuse::Controls::Control_type* DeveloperMenu_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 95;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(DeveloperMenu);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Outracks.Simulator.DeveloperMenu", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_build_ = DeveloperMenu_build;
    type->fp_ctor_ = (void*)DeveloperMenu__New4_fn;
    type->fp_cctor_ = DeveloperMenu__cctor_4_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public DeveloperMenu() :158
void DeveloperMenu__ctor_7_fn(DeveloperMenu* __this)
{
    __this->ctor_7();
}

// private void Close(object sender, Uno.EventArgs args) :2286
void DeveloperMenu__Close_fn(DeveloperMenu* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->Close(sender, args);
}

// private void GoBack(object sender, Uno.EventArgs args) :2281
void DeveloperMenu__GoBack_fn(DeveloperMenu* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->GoBack(sender, args);
}

// private void InitializeUX() :162
void DeveloperMenu__InitializeUX_fn(DeveloperMenu* __this)
{
    __this->InitializeUX();
}

// public DeveloperMenu New() :158
void DeveloperMenu__New4_fn(DeveloperMenu** __retval)
{
    *__retval = DeveloperMenu::New4();
}

::g::Uno::UX::Selector DeveloperMenu::__selector0_;

// public DeveloperMenu() [instance] :158
void DeveloperMenu::ctor_7()
{
    uStackFrame __("Outracks.Simulator.DeveloperMenu", ".ctor()");
    ctor_6();
    InitializeUX();
}

// private void Close(object sender, Uno.EventArgs args) [instance] :2286
void DeveloperMenu::Close(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Outracks.Simulator.DeveloperMenu", "Close(object,Uno.EventArgs)");
    uPtr(Parent())->BeginRemoveVisual(this, NULL);
}

// private void GoBack(object sender, Uno.EventArgs args) [instance] :2281
void DeveloperMenu::GoBack(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Outracks.Simulator.DeveloperMenu", "GoBack(object,Uno.EventArgs)");
    ::g::Fuse::Input::Keyboard::EmulateBackButtonTap();
}

// private void InitializeUX() [instance] :162
void DeveloperMenu::InitializeUX()
{
    uStackFrame __("Outracks.Simulator.DeveloperMenu", "InitializeUX()");
    this_Opacity_inst = ::g::OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property::New1(this, DeveloperMenu::__selector0());
    ::g::Fuse::Controls::ClientPanel* temp = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Button* temp1 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Triggers::AddingAnimation* temp5 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Change* temp6 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[61/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Animations::Scale* temp7 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Triggers::RemovingAnimation* temp8 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[61/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Animations::Scale* temp10 = ::g::Fuse::Animations::Scale::New2();
    Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.8f));
    ::g::Fuse::Gestures::Clicked::AddHandler(this, uDelegate::New(::TYPES[62/*Fuse.Gestures.ClickedHandler*/], (void*)DeveloperMenu__Close_fn, this));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp1->Text(::STRINGS[25/*"Go back"*/]);
    temp1->Alignment(5);
    temp1->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::TYPES[62/*Fuse.Gestures.ClickedHandler*/], (void*)DeveloperMenu__GoBack_fn, this));
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp3->Value(::STRINGS[26/*"Fuse Previe...*/]);
    temp3->Color(::g::Fuse::Drawing::Colors::White());
    temp3->Alignment(10);
    temp4->Value(::STRINGS[27/*"Tap to dism...*/]);
    temp4->Color(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    temp4->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[63/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[63/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Fuse::Animations::Change__set_Value_fn(temp6, uCRef(0.0f));
    temp6->Easing(4);
    temp6->Duration(0.3);
    temp7->Factor(1.2f);
    temp7->Easing(25);
    temp7->Duration(0.3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[63/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[63/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp10);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(0.0f));
    temp9->Easing(5);
    temp9->Duration(0.3);
    temp10->Factor(0.8f);
    temp10->Easing(5);
    temp10->Duration(0.3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
}

// public DeveloperMenu New() [static] :158
DeveloperMenu* DeveloperMenu::New4()
{
    DeveloperMenu* obj1 = (DeveloperMenu*)uNew(DeveloperMenu_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public static extern class DeviceInfo :1702
// {
static void DeviceInfo_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("get_GUID", NULL, (void*)DeviceInfo__get_GUID_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)DeviceInfo__get_Name_fn, 0, true, ::g::Uno::String_typeof(), 0));
}

uClassType* DeviceInfo_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.DeviceInfo", options);
    type->fp_build_ = DeviceInfo_build;
    return type;
}

// public static string get_GUID() :1714
void DeviceInfo__get_GUID_fn(uString** __retval)
{
    *__retval = DeviceInfo::GUID();
}

// public static string get_Name() :1706
void DeviceInfo__get_Name_fn(uString** __retval)
{
    *__retval = DeviceInfo::Name();
}

// public static string get_GUID() [static] :1714
uString* DeviceInfo::GUID()
{
    uStackFrame __("Outracks.Simulator.DeviceInfo", "get_GUID()");
    return uPtr(uPtr(::g::iOS::UIKit::UIDevice::_currentDevice())->IdentifierForVendor())->UUIDString();
}

// public static string get_Name() [static] :1706
uString* DeviceInfo::Name()
{
    uStackFrame __("Outracks.Simulator.DeviceInfo", "get_Name()");
    return uPtr(::g::iOS::UIKit::UIDevice::_currentDevice())->Name();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// private sealed class Application.DiagnosticItem :50
// {
static void Application__DiagnosticItem_build(uType* type)
{
    ::TYPES[58] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Fuse::Diagnostic_typeof(), offsetof(::g::Outracks::Simulator::Application__DiagnosticItem, Diagnostic), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Outracks::Simulator::Application__DiagnosticItem, Expire), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Outracks::Simulator::Application__DiagnosticItem, FrameIndex), 0);
}

uType* Application__DiagnosticItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Application__DiagnosticItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Application.DiagnosticItem", options);
    type->fp_build_ = Application__DiagnosticItem_build;
    type->fp_ctor_ = (void*)Application__DiagnosticItem__New1_fn;
    return type;
}

// public generated DiagnosticItem() :50
void Application__DiagnosticItem__ctor__fn(Application__DiagnosticItem* __this)
{
    __this->ctor_();
}

// public generated DiagnosticItem New() :50
void Application__DiagnosticItem__New1_fn(Application__DiagnosticItem** __retval)
{
    *__retval = Application__DiagnosticItem::New1();
}

// public bool SameAs(Fuse.Diagnostic d) :56
void Application__DiagnosticItem__SameAs_fn(Application__DiagnosticItem* __this, ::g::Fuse::Diagnostic* d, bool* __retval)
{
    *__retval = __this->SameAs(d);
}

// public generated DiagnosticItem() [instance] :50
void Application__DiagnosticItem::ctor_()
{
}

// public bool SameAs(Fuse.Diagnostic d) [instance] :56
bool Application__DiagnosticItem::SameAs(::g::Fuse::Diagnostic* d)
{
    uStackFrame __("Outracks.Simulator.Application.DiagnosticItem", "SameAs(Fuse.Diagnostic)");

    if (FrameIndex != ::g::Fuse::UpdateManager::FrameIndex())
        return false;

    if (uPtr(d)->Type != uPtr(Diagnostic)->Type)
        return false;

    if (::g::Uno::String::op_Equality(uPtr(d)->Message, uPtr(Diagnostic)->Message))
        return true;

    return ::g::Uno::String::op_Equality(uPtr(d)->FilePath, uPtr(Diagnostic)->FilePath) && (uPtr(d)->LineNumber == uPtr(Diagnostic)->LineNumber);
}

// public generated DiagnosticItem New() [static] :50
Application__DiagnosticItem* Application__DiagnosticItem::New1()
{
    Application__DiagnosticItem* obj1 = (Application__DiagnosticItem*)uNew(Application__DiagnosticItem_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class DialogButton :1585
// {
static void DialogButton_build(uType* type)
{
    type->SetFields(0,
        ::g::Outracks::Simulator::State_typeof(), offsetof(::g::Outracks::Simulator::DialogButton, Destination), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::DialogButton, Text), 0);
}

uType* DialogButton_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DialogButton);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.DialogButton", options);
    type->fp_build_ = DialogButton_build;
    return type;
}

// public DialogButton(string text, Outracks.Simulator.State destination) :1590
void DialogButton__ctor__fn(DialogButton* __this, uString* text, ::g::Outracks::Simulator::State* destination)
{
    __this->ctor_(text, destination);
}

// public DialogButton New(string text, Outracks.Simulator.State destination) :1590
void DialogButton__New1_fn(uString* text, ::g::Outracks::Simulator::State* destination, DialogButton** __retval)
{
    *__retval = DialogButton::New1(text, destination);
}

// public DialogButton(string text, Outracks.Simulator.State destination) [instance] :1590
void DialogButton::ctor_(uString* text, ::g::Outracks::Simulator::State* destination)
{
    uStackFrame __("Outracks.Simulator.DialogButton", ".ctor(string,Outracks.Simulator.State)");
    Text = text;
    Destination = destination;
}

// public DialogButton New(string text, Outracks.Simulator.State destination) [static] :1590
DialogButton* DialogButton::New1(uString* text, ::g::Outracks::Simulator::State* destination)
{
    DialogButton* obj1 = (DialogButton*)uNew(DialogButton_typeof());
    obj1->ctor_(text, destination);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// public sealed class DummyApplication :567
// {
static void DummyApplication_build(uType* type)
{
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DummyApplication__New1_fn, 0, true, DummyApplication_typeof(), 0));
}

uType* DummyApplication_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DummyApplication);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.DummyApplication", options);
    type->SetBase(::g::Uno::Application_typeof());
    type->fp_build_ = DummyApplication_build;
    type->fp_ctor_ = (void*)DummyApplication__New1_fn;
    return type;
}

// public generated DummyApplication() :567
void DummyApplication__ctor_1_fn(DummyApplication* __this)
{
    __this->ctor_1();
}

// public generated DummyApplication New() :567
void DummyApplication__New1_fn(DummyApplication** __retval)
{
    *__retval = DummyApplication::New1();
}

// public generated DummyApplication() [instance] :567
void DummyApplication::ctor_1()
{
    uStackFrame __("Outracks.Simulator.DummyApplication", ".ctor()");
    ctor_();
}

// public generated DummyApplication New() [static] :567
DummyApplication* DummyApplication::New1()
{
    DummyApplication* obj1 = (DummyApplication*)uNew(DummyApplication_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal static class EnumerableHitTestExtension :2105
// {
static void EnumerableHitTestExtension_build(uType* type)
{
    ::TYPES[65] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[66] = ::g::Fuse::HitTestCallback_typeof();
    ::TYPES[67] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Visual_typeof());
}

uClassType* EnumerableHitTestExtension_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.EnumerableHitTestExtension", options);
    type->fp_build_ = EnumerableHitTestExtension_build;
    return type;
}

// public static Uno.Collections.IList<Fuse.Visual> HitTest2(Fuse.Visual node, float2 windowPoint) :2107
void EnumerableHitTestExtension__HitTest2_fn(::g::Fuse::Visual* node, ::g::Uno::Float2* windowPoint, uObject** __retval)
{
    *__retval = EnumerableHitTestExtension::HitTest2(node, *windowPoint);
}

// public static Uno.Collections.IList<Fuse.Visual> HitTest2(Fuse.Visual node, float2 windowPoint) [static] :2107
uObject* EnumerableHitTestExtension::HitTest2(::g::Fuse::Visual* node, ::g::Uno::Float2 windowPoint)
{
    uStackFrame __("Outracks.Simulator.EnumerableHitTestExtension", "HitTest2(Fuse.Visual,float2)");
    ::g::Uno::Collections::List* nodes = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[65/*Uno.Collections.List<Fuse.Visual>*/]);
    ::g::Fuse::HitTestContext* htc = ::g::Fuse::HitTestContext::New1(windowPoint, uDelegate::New(::TYPES[66/*Fuse.HitTestCallback*/], (void*)EnumerableHitTestExtension__CollectHitNodesClosure__HitTestCallback_fn, EnumerableHitTestExtension__CollectHitNodesClosure::New1(nodes)));
    uPtr(node)->HitTest(htc);
    return (uObject*)nodes;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public partial sealed class ErrorToast :2255
// {
// static ErrorToast() :60
static void ErrorToast__cctor_4_fn(uType* __type)
{
    ErrorToast::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"Value"*/]);
    ErrorToast::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"Message"*/]);
    ErrorToast::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"ShowMonitor...*/]);
    ErrorToast::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"Opacity"*/]);
    ErrorToast::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"Color"*/]);
}

static void ErrorToast_build(uType* type)
{
    ::STRINGS[28] = uString::Const("Value");
    ::STRINGS[29] = uString::Const("Message");
    ::STRINGS[30] = uString::Const("ShowMonitorInfo");
    ::STRINGS[24] = uString::Const("Opacity");
    ::STRINGS[31] = uString::Const("Color");
    ::STRINGS[32] = uString::Const("See Fuse Monitor (Cmd/Ctrl+M) for details");
    ::STRINGS[33] = uString::Const("Got it");
    ::TYPES[68] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[69] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[60] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[70] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[71] = ::g::Fuse::Controls::PropertyBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[72] = ::g::Fuse::Controls::PropertyBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[61] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[73] = ::g::Fuse::Controls::PropertyBinding_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[74] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[75] = ::g::Fuse::Binding_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[12] = ::g::Fuse::Visual_typeof();
    ::TYPES[62] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[63] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[64] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[76] = ::g::Uno::Delegate_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(94,
        ::g::Uno::Float4_typeof(), offsetof(::g::Outracks::Simulator::ErrorToast, _field_Color), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ErrorToast, _field_Message), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::ErrorToast, _field_ShowMonitorInfo), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Outracks::Simulator::ErrorToast, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Outracks::Simulator::ErrorToast, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Outracks::Simulator::ErrorToast, temp2_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Outracks::Simulator::ErrorToast, this_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Outracks::Simulator::ErrorToast, this_Message_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Outracks::Simulator::ErrorToast, this_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Outracks::Simulator::ErrorToast, this_ShowMonitorInfo_inst), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Outracks::Simulator::ErrorToast, Dismissed1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::ErrorToast::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::ErrorToast::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::ErrorToast::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::ErrorToast::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::ErrorToast::__selector4_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Color", NULL, (void*)ErrorToast__get_Color1_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)ErrorToast__set_Color1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("add_Dismissed", NULL, (void*)ErrorToast__add_Dismissed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("remove_Dismissed", NULL, (void*)ErrorToast__remove_Dismissed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("get_Message", NULL, (void*)ErrorToast__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Message", NULL, (void*)ErrorToast__set_Message_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ErrorToast__New5_fn, 0, true, ErrorToast_typeof(), 0),
        new uFunction("SetColor", NULL, (void*)ErrorToast__SetColor1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetMessage", NULL, (void*)ErrorToast__SetMessage_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetShowMonitorInfo", NULL, (void*)ErrorToast__SetShowMonitorInfo_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_ShowMonitorInfo", NULL, (void*)ErrorToast__get_ShowMonitorInfo_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowMonitorInfo", NULL, (void*)ErrorToast__set_ShowMonitorInfo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Controls::Control_type* ErrorToast_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 110;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(ErrorToast);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Outracks.Simulator.ErrorToast", options);
    type->SetBase(::g::Fuse::Controls::StackPanel_typeof());
    type->fp_build_ = ErrorToast_build;
    type->fp_ctor_ = (void*)ErrorToast__New5_fn;
    type->fp_cctor_ = ErrorToast__cctor_4_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ErrorToast__OnUnrooted_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ErrorToast() :64
void ErrorToast__ctor_8_fn(ErrorToast* __this)
{
    __this->ctor_8();
}

// public float4 get_Color() :27
void ErrorToast__get_Color1_fn(ErrorToast* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color1();
}

// public void set_Color(float4 value) :28
void ErrorToast__set_Color1_fn(ErrorToast* __this, ::g::Uno::Float4* value)
{
    __this->Color1(*value);
}

// public generated void add_Dismissed(Uno.Action value) :2269
void ErrorToast__add_Dismissed_fn(ErrorToast* __this, uDelegate* value)
{
    __this->add_Dismissed(value);
}

// public generated void remove_Dismissed(Uno.Action value) :2269
void ErrorToast__remove_Dismissed_fn(ErrorToast* __this, uDelegate* value)
{
    __this->remove_Dismissed(value);
}

// private void InitializeUX() :68
void ErrorToast__InitializeUX_fn(ErrorToast* __this)
{
    __this->InitializeUX();
}

// public string get_Message() :12
void ErrorToast__get_Message_fn(ErrorToast* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public void set_Message(string value) :13
void ErrorToast__set_Message_fn(ErrorToast* __this, uString* value)
{
    __this->Message(value);
}

// public ErrorToast New() :64
void ErrorToast__New5_fn(ErrorToast** __retval)
{
    *__retval = ErrorToast::New5();
}

// private void OnClicked(object sender, Uno.EventArgs args) :2257
void ErrorToast__OnClicked_fn(ErrorToast* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnClicked(sender, args);
}

// protected override sealed void OnUnrooted() :2263
void ErrorToast__OnUnrooted_fn(ErrorToast* __this)
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "OnUnrooted()");
    ::g::Fuse::Toast::OnUnrooted(__this);
    ::g::Fuse::Controls::LayoutControl__OnUnrooted_fn(__this);
}

// public void SetColor(float4 value, Uno.UX.IPropertyListener origin) :30
void ErrorToast__SetColor1_fn(ErrorToast* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetColor1(*value, origin);
}

// public void SetMessage(string value, Uno.UX.IPropertyListener origin) :15
void ErrorToast__SetMessage_fn(ErrorToast* __this, uString* value, uObject* origin)
{
    __this->SetMessage(value, origin);
}

// public void SetShowMonitorInfo(bool value, Uno.UX.IPropertyListener origin) :45
void ErrorToast__SetShowMonitorInfo_fn(ErrorToast* __this, bool* value, uObject* origin)
{
    __this->SetShowMonitorInfo(*value, origin);
}

// public bool get_ShowMonitorInfo() :42
void ErrorToast__get_ShowMonitorInfo_fn(ErrorToast* __this, bool* __retval)
{
    *__retval = __this->ShowMonitorInfo();
}

// public void set_ShowMonitorInfo(bool value) :43
void ErrorToast__set_ShowMonitorInfo_fn(ErrorToast* __this, bool* value)
{
    __this->ShowMonitorInfo(*value);
}

::g::Uno::UX::Selector ErrorToast::__selector0_;
::g::Uno::UX::Selector ErrorToast::__selector1_;
::g::Uno::UX::Selector ErrorToast::__selector2_;
::g::Uno::UX::Selector ErrorToast::__selector3_;
::g::Uno::UX::Selector ErrorToast::__selector4_;

// public ErrorToast() [instance] :64
void ErrorToast::ctor_8()
{
    uStackFrame __("Outracks.Simulator.ErrorToast", ".ctor()");
    ctor_7();
    InitializeUX();
}

// public float4 get_Color() [instance] :27
::g::Uno::Float4 ErrorToast::Color1()
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "get_Color()");
    return _field_Color;
}

// public void set_Color(float4 value) [instance] :28
void ErrorToast::Color1(::g::Uno::Float4 value)
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "set_Color(float4)");
    SetColor1(value, NULL);
}

// public generated void add_Dismissed(Uno.Action value) [instance] :2269
void ErrorToast::add_Dismissed(uDelegate* value)
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "add_Dismissed(Uno.Action)");
    Dismissed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Dismissed1, value), ::TYPES[13/*Uno.Action*/]);
}

// public generated void remove_Dismissed(Uno.Action value) [instance] :2269
void ErrorToast::remove_Dismissed(uDelegate* value)
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "remove_Dismissed(Uno.Action)");
    Dismissed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Dismissed1, value), ::TYPES[13/*Uno.Action*/]);
}

// private void InitializeUX() [instance] :68
void ErrorToast::InitializeUX()
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "InitializeUX()");
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::OutracksSimulatorClientUno_FuseControlsText_Value_Property::New1(temp, ErrorToast::__selector0());
    this_Message_inst = ::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property::New1(this, ErrorToast::__selector1());
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp1_Value_inst = ::g::OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property::New1(temp1, ErrorToast::__selector0());
    this_ShowMonitorInfo_inst = ::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property::New1(this, ErrorToast::__selector2());
    this_Opacity_inst = ::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property::New1(this, ErrorToast::__selector3());
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    temp2_Color_inst = ::g::OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property::New1(temp2, ErrorToast::__selector4());
    this_Color_inst = ::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Color_Property::New1(this, ErrorToast::__selector4());
    ::g::Fuse::Controls::PropertyBinding* temp3 = (::g::Fuse::Controls::PropertyBinding*)::g::Fuse::Controls::PropertyBinding::New1(::TYPES[71/*Fuse.Controls.PropertyBinding<string>*/], temp_Value_inst, this_Message_inst);
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Button* temp5 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::PropertyBinding* temp6 = (::g::Fuse::Controls::PropertyBinding*)::g::Fuse::Controls::PropertyBinding::New1(::TYPES[72/*Fuse.Controls.PropertyBinding<bool>*/], temp1_Value_inst, this_ShowMonitorInfo_inst);
    ::g::Fuse::Triggers::AddingAnimation* temp7 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp8 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[61/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Triggers::RemovingAnimation* temp10 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp11 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp12 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[61/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Controls::PropertyBinding* temp13 = (::g::Fuse::Controls::PropertyBinding*)::g::Fuse::Controls::PropertyBinding::New1(::TYPES[73/*Fuse.Controls.PropertyBinding<float4>*/], temp2_Color_inst, this_Color_inst);
    Width(::g::Uno::UX::Size__New1(75.0f, 4));
    Alignment(14);
    Margin(::g::Uno::Float4__New2(40.0f, 40.0f, 40.0f, 40.0f));
    temp->TextWrapping(1);
    temp->FontSize(16.0f);
    temp->TextAlignment(1);
    temp->TextColor(::g::Fuse::Drawing::Colors::White());
    temp->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[74/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[74/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    temp4->Value(::STRINGS[32/*"See Fuse Mo...*/]);
    temp4->TextWrapping(1);
    temp4->FontSize(10.0f);
    temp4->TextAlignment(1);
    temp4->TextColor(::g::Fuse::Drawing::Colors::White());
    temp4->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp5->Text(::STRINGS[33/*"Got it"*/]);
    temp5->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp5, uDelegate::New(::TYPES[62/*Fuse.Gestures.ClickedHandler*/], (void*)ErrorToast__OnClicked_fn, this));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[63/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[63/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    temp8->Factor(0.8f);
    temp8->Easing(25);
    temp8->Duration(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(0.0f));
    temp9->Easing(4);
    temp9->Duration(0.25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[63/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[63/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp12);
    temp11->Factor(0.8f);
    temp11->Easing(26);
    temp11->Duration(0.4);
    ::g::Fuse::Animations::Change__set_Value_fn(temp12, uCRef(0.0f));
    temp12->Easing(5);
    temp12->Duration(0.4);
    temp2->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp2->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[74/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
}

// public string get_Message() [instance] :12
uString* ErrorToast::Message()
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "get_Message()");
    return _field_Message;
}

// public void set_Message(string value) [instance] :13
void ErrorToast::Message(uString* value)
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "set_Message(string)");
    SetMessage(value, NULL);
}

// private void OnClicked(object sender, Uno.EventArgs args) [instance] :2257
void ErrorToast::OnClicked(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "OnClicked(object,Uno.EventArgs)");

    if (::g::Uno::Delegate::op_Inequality(Dismissed1, NULL))
        uPtr(Dismissed1)->InvokeVoid();
}

// public void SetColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :30
void ErrorToast::SetColor1(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "SetColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_Color))
    {
        _field_Color = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"Color"*/]), origin);
    }
}

// public void SetMessage(string value, Uno.UX.IPropertyListener origin) [instance] :15
void ErrorToast::SetMessage(uString* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "SetMessage(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Message))
    {
        _field_Message = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"Message"*/]), origin);
    }
}

// public void SetShowMonitorInfo(bool value, Uno.UX.IPropertyListener origin) [instance] :45
void ErrorToast::SetShowMonitorInfo(bool value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "SetShowMonitorInfo(bool,Uno.UX.IPropertyListener)");

    if (value != _field_ShowMonitorInfo)
    {
        _field_ShowMonitorInfo = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"ShowMonitor...*/]), origin);
    }
}

// public bool get_ShowMonitorInfo() [instance] :42
bool ErrorToast::ShowMonitorInfo()
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "get_ShowMonitorInfo()");
    return _field_ShowMonitorInfo;
}

// public void set_ShowMonitorInfo(bool value) [instance] :43
void ErrorToast::ShowMonitorInfo(bool value)
{
    uStackFrame __("Outracks.Simulator.ErrorToast", "set_ShowMonitorInfo(bool)");
    SetShowMonitorInfo(value, NULL);
}

// public ErrorToast New() [static] :64
ErrorToast* ErrorToast::New5()
{
    ErrorToast* obj1 = (ErrorToast*)uNew(ErrorToast_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal static class Exceptions :659
// {
static void Exceptions_build(uType* type)
{
    ::TYPES[39] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[77] = ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof();
    ::TYPES[78] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[79] = ::g::Uno::AggregateException_typeof();
    ::TYPES[0] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof());
}

uClassType* Exceptions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Exceptions", options);
    type->fp_build_ = Exceptions_build;
    return type;
}

// public static void Send(Outracks.Simulator.ISimulatorClient client, Uno.Collections.List<Uno.Exception> exceptions) :661
void Exceptions__Send_fn(uObject* client, ::g::Uno::Collections::List* exceptions)
{
    Exceptions::Send(client, exceptions);
}

// public static Uno.Collections.List<Uno.Exception> Unpack(Uno.Exception e) :670
void Exceptions__Unpack_fn(::g::Uno::Exception* e, ::g::Uno::Collections::List** __retval)
{
    *__retval = Exceptions::Unpack(e);
}

// public static void Send(Outracks.Simulator.ISimulatorClient client, Uno.Collections.List<Uno.Exception> exceptions) [static] :661
void Exceptions::Send(uObject* client, ::g::Uno::Collections::List* exceptions)
{
    uStackFrame __("Outracks.Simulator.Exceptions", "Send(Outracks.Simulator.ISimulatorClient,Uno.Collections.List<Uno.Exception>)");
    ::g::Uno::Exception* ret1;

    for (int i = 0; i < uPtr(exceptions)->Count(); ++i)
    {
        ::g::Uno::Exception* unpacked = (::g::Uno::Collections::List__get_Item_fn(uPtr(exceptions), uCRef<int>(i), &ret1), ret1);
        ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(client), ::TYPES[39/*Outracks.Simulator.ISimulatorClient*/]), ::g::Outracks::Simulator::Protocol::UnhandledException::New1(::g::Outracks::Simulator::DeviceInfo::GUID(), ::g::Outracks::Simulator::DeviceInfo::Name(), uPtr(unpacked)->Message(), uPtr(unpacked)->StackTrace(), uPtr(::g::Uno::Object::GetType(uPtr(unpacked)))->ToString()));
    }
}

// public static Uno.Collections.List<Uno.Exception> Unpack(Uno.Exception e) [static] :670
::g::Uno::Collections::List* Exceptions::Unpack(::g::Uno::Exception* e)
{
    uStackFrame __("Outracks.Simulator.Exceptions", "Unpack(Uno.Exception)");
    ::g::Uno::Exception* ret2;
    ::g::Uno::Collections::List* exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[78/*Uno.Collections.List<Uno.Exception>*/]);

    if (uIs(e, ::TYPES[79/*Uno.AggregateException*/]))
    {
        ::g::Uno::AggregateException* aggregate = uCast< ::g::Uno::AggregateException*>(e, ::TYPES[79/*Uno.AggregateException*/]);

        for (int i = 0; i < uPtr(uPtr(aggregate)->InnerExceptions())->Count(); ++i)
            uPtr(exceptions)->AddRange((uObject*)Exceptions::Unpack((::g::Uno::Collections::ReadOnlyCollection__get_Item_fn(uPtr(uPtr(aggregate)->InnerExceptions()), uCRef<int>(i), &ret2), ret2)));
    }
    else
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(exceptions), e);

        if (uPtr(e)->InnerException() != NULL)
            ::g::Uno::Collections::List__Add_fn(exceptions, uPtr(e)->InnerException());
    }

    return exceptions;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class FailedToConnect :722
// {
static void FailedToConnect_build(uType* type)
{
    ::STRINGS[34] = uString::Const("Failed to connect");
    ::STRINGS[35] = uString::Const("Please check that this device is connected to the same network as your computer.");
    ::STRINGS[19] = uString::Const("Change IP");
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[36] = uString::Const("Try again");
    ::TYPES[49] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    type->SetFields(5);
}

::g::Outracks::Simulator::State_type* FailedToConnect_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FailedToConnect);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.FailedToConnect", options);
    type->SetBase(::g::Outracks::Simulator::ShowingModalDialog_typeof());
    type->fp_build_ = FailedToConnect_build;
    return type;
}

// public FailedToConnect(Uno.Exception exception) :724
void FailedToConnect__ctor_2_fn(FailedToConnect* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_2(exception);
}

// public FailedToConnect New(Uno.Exception exception) :724
void FailedToConnect__New2_fn(::g::Uno::Exception* exception, FailedToConnect** __retval)
{
    *__retval = FailedToConnect::New2(exception);
}

// public FailedToConnect(Uno.Exception exception) [instance] :724
void FailedToConnect::ctor_2(::g::Uno::Exception* exception)
{
    uStackFrame __("Outracks.Simulator.FailedToConnect", ".ctor(Uno.Exception)");
    ctor_1(::STRINGS[34/*"Failed to c...*/], ::STRINGS[35/*"Please chec...*/], uPtr(exception)->Message(), ::g::Outracks::Simulator::GoOffline::PrependOption(uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[49/*Outracks.Simulator.DialogButton[]*/], 2, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[19/*"Change IP"*/], ::g::Outracks::Simulator::ChangeIp::New1(::STRINGS[0/*""*/])), (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[36/*"Try again"*/], ::g::Outracks::Simulator::ConnectingToProxy::New1()))));
}

// public FailedToConnect New(Uno.Exception exception) [static] :724
FailedToConnect* FailedToConnect::New2(::g::Uno::Exception* exception)
{
    FailedToConnect* obj1 = (FailedToConnect*)uNew(FailedToConnect_typeof());
    obj1->ctor_2(exception);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno
// -------------------------------------------------------------------------

// public sealed class FailedToConnectToEndPoint :13
// {
static void FailedToConnectToEndPoint_build(uType* type)
{
    ::STRINGS[37] = uString::Const(": ");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FailedToConnectToEndPoint__New4_fn, 0, true, FailedToConnectToEndPoint_typeof(), 2, ::g::Uno::Net::IPEndPoint_typeof(), ::g::Uno::Exception_typeof()));
}

::g::Uno::Exception_type* FailedToConnectToEndPoint_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FailedToConnectToEndPoint);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.FailedToConnectToEndPoint", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_build_ = FailedToConnectToEndPoint_build;
    return type;
}

// public FailedToConnectToEndPoint(Uno.Net.IPEndPoint endpoint, Uno.Exception e) :15
void FailedToConnectToEndPoint__ctor_3_fn(FailedToConnectToEndPoint* __this, ::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e)
{
    __this->ctor_3(endpoint, e);
}

// public FailedToConnectToEndPoint New(Uno.Net.IPEndPoint endpoint, Uno.Exception e) :15
void FailedToConnectToEndPoint__New4_fn(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e, FailedToConnectToEndPoint** __retval)
{
    *__retval = FailedToConnectToEndPoint::New4(endpoint, e);
}

// public FailedToConnectToEndPoint(Uno.Net.IPEndPoint endpoint, Uno.Exception e) [instance] :15
void FailedToConnectToEndPoint::ctor_3(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(endpoint)->ToString(), ::STRINGS[37/*": "*/]), uPtr(e)->Message()));
}

// public FailedToConnectToEndPoint New(Uno.Net.IPEndPoint endpoint, Uno.Exception e) [static] :15
FailedToConnectToEndPoint* FailedToConnectToEndPoint::New4(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e)
{
    FailedToConnectToEndPoint* obj1 = (FailedToConnectToEndPoint*)uNew(FailedToConnectToEndPoint_typeof());
    obj1->ctor_3(endpoint, e);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno
// -------------------------------------------------------------------------

// public sealed class FailedToConnectToProxy :20
// {
static void FailedToConnectToProxy_build(uType* type)
{
    ::STRINGS[38] = uString::Const("Failed to connect to proxy:\n"
        "");
    ::TYPES[80] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Uno::Exception_typeof());
    type->SetFields(3,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Outracks::Simulator::FailedToConnectToProxy, InnerExceptions), 0);
    type->Reflection.SetFields(1,
        new uField("InnerExceptions", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FailedToConnectToProxy__New4_fn, 0, true, FailedToConnectToProxy_typeof(), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof())));
}

::g::Uno::Exception_type* FailedToConnectToProxy_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FailedToConnectToProxy);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.FailedToConnectToProxy", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_build_ = FailedToConnectToProxy_build;
    return type;
}

// public FailedToConnectToProxy(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :24
void FailedToConnectToProxy__ctor_3_fn(FailedToConnectToProxy* __this, uObject* innerExceptions)
{
    __this->ctor_3(innerExceptions);
}

// public FailedToConnectToProxy New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :24
void FailedToConnectToProxy__New4_fn(uObject* innerExceptions, FailedToConnectToProxy** __retval)
{
    *__retval = FailedToConnectToProxy::New4(innerExceptions);
}

// public FailedToConnectToProxy(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [instance] :24
void FailedToConnectToProxy::ctor_3(uObject* innerExceptions)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[38/*"Failed to c...*/], ::g::Outracks::Simulator::AggregateConnectError::ToIndentedLines(innerExceptions)));
    InnerExceptions = ((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[80/*Outracks.Simulator.List.ToImmutableList<Uno.Exception>*/], innerExceptions));
}

// public FailedToConnectToProxy New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [static] :24
FailedToConnectToProxy* FailedToConnectToProxy::New4(uObject* innerExceptions)
{
    FailedToConnectToProxy* obj1 = (FailedToConnectToProxy*)uNew(FailedToConnectToProxy_typeof());
    obj1->ctor_3(innerExceptions);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class FailedToConnectToSimulator :934
// {
static void FailedToConnectToSimulator_build(uType* type)
{
    ::STRINGS[39] = uString::Const("Failed to connect to simulator host: ");
    ::TYPES[80] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Uno::Exception_typeof());
    type->SetFields(3,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Outracks::Simulator::FailedToConnectToSimulator, InnerExceptions), 0);
    type->Reflection.SetFields(1,
        new uField("InnerExceptions", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FailedToConnectToSimulator__New4_fn, 0, true, FailedToConnectToSimulator_typeof(), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof())));
}

::g::Uno::Exception_type* FailedToConnectToSimulator_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FailedToConnectToSimulator);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.FailedToConnectToSimulator", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_build_ = FailedToConnectToSimulator_build;
    return type;
}

// public FailedToConnectToSimulator(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :938
void FailedToConnectToSimulator__ctor_3_fn(FailedToConnectToSimulator* __this, uObject* innerExceptions)
{
    __this->ctor_3(innerExceptions);
}

// public FailedToConnectToSimulator New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :938
void FailedToConnectToSimulator__New4_fn(uObject* innerExceptions, FailedToConnectToSimulator** __retval)
{
    *__retval = FailedToConnectToSimulator::New4(innerExceptions);
}

// public FailedToConnectToSimulator(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [instance] :938
void FailedToConnectToSimulator::ctor_3(uObject* innerExceptions)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[39/*"Failed to c...*/], ::g::Outracks::Simulator::AggregateConnectError::ToIndentedLines(innerExceptions)));
    InnerExceptions = ((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[80/*Outracks.Simulator.List.ToImmutableList<Uno.Exception>*/], innerExceptions));
}

// public FailedToConnectToSimulator New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [static] :938
FailedToConnectToSimulator* FailedToConnectToSimulator::New4(uObject* innerExceptions)
{
    FailedToConnectToSimulator* obj1 = (FailedToConnectToSimulator*)uNew(FailedToConnectToSimulator_typeof());
    obj1->ctor_3(innerExceptions);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class FakeApp :1866
// {
static void FakeApp_build(uType* type)
{
    ::TYPES[81] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[82] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[83] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[58] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(93,
        ::g::Fuse::App_typeof(), offsetof(::g::Outracks::Simulator::FakeApp, _app), 0,
        ::g::Outracks::Simulator::Flasher_typeof(), offsetof(::g::Outracks::Simulator::FakeApp, _currentFlash), 0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Outracks::Simulator::FakeApp, _flashes), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::Outracks::Simulator::FakeApp, _overlayPlaceholde), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::Outracks::Simulator::FakeApp, _rootPlaceholder), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Background", NULL, (void*)FakeApp__get_Background1_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Background", NULL, (void*)FakeApp__set_Background1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Children", NULL, (void*)FakeApp__get_Children1_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), 0),
        new uFunction("get_ClearColor", NULL, (void*)FakeApp__get_ClearColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_ClearColor", NULL, (void*)FakeApp__set_ClearColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_ClearDepth", NULL, (void*)FakeApp__get_ClearDepth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ClearDepth", NULL, (void*)FakeApp__set_ClearDepth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Flash", NULL, (void*)FakeApp__Flash_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)FakeApp__New4_fn, 0, true, FakeApp_typeof(), 1, ::g::Fuse::App_typeof()),
        new uFunction("get_Overlay", NULL, (void*)FakeApp__get_Overlay_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Overlay", NULL, (void*)FakeApp__set_Overlay_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Resources", NULL, (void*)FakeApp__get_Resources1_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof()), 0));
}

::g::Fuse::Controls::Control_type* FakeApp_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 98;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(FakeApp);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Outracks.Simulator.FakeApp", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_build_ = FakeApp_build;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))FakeApp__OnDraw_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))FakeApp__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))FakeApp__OnUnrooted_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public FakeApp(Fuse.App app) :1886
void FakeApp__ctor_7_fn(FakeApp* __this, ::g::Fuse::App* app)
{
    __this->ctor_7(app);
}

// private void AddNewFlashes() :1939
void FakeApp__AddNewFlashes_fn(FakeApp* __this)
{
    __this->AddNewFlashes();
}

// public new float4 get_Background() :1953
void FakeApp__get_Background1_fn(FakeApp* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background1();
}

// public new void set_Background(float4 value) :1954
void FakeApp__set_Background1_fn(FakeApp* __this, ::g::Uno::Float4* value)
{
    __this->Background1(*value);
}

// public new Uno.Collections.IList<Fuse.Node> get_Children() :1959
void FakeApp__get_Children1_fn(FakeApp* __this, uObject** __retval)
{
    *__retval = __this->Children1();
}

// public float4 get_ClearColor() :1987
void FakeApp__get_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ClearColor();
}

// public void set_ClearColor(float4 value) :1988
void FakeApp__set_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* value)
{
    __this->ClearColor(*value);
}

// public float get_ClearDepth() :1993
void FakeApp__get_ClearDepth_fn(FakeApp* __this, float* __retval)
{
    *__retval = __this->ClearDepth();
}

// public void set_ClearDepth(float value) :1994
void FakeApp__set_ClearDepth_fn(FakeApp* __this, float* value)
{
    __this->ClearDepth(*value);
}

// public void Flash(string message) :1913
void FakeApp__Flash_fn(FakeApp* __this, uString* message)
{
    __this->Flash(message);
}

// private bool get_HasFlash() :1927
void FakeApp__get_HasFlash_fn(FakeApp* __this, bool* __retval)
{
    *__retval = __this->HasFlash();
}

// public FakeApp New(Fuse.App app) :1886
void FakeApp__New4_fn(::g::Fuse::App* app, FakeApp** __retval)
{
    *__retval = FakeApp::New4(app);
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :2001
void FakeApp__OnDraw_fn(FakeApp* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Outracks.Simulator.FakeApp", "OnDraw(Fuse.DrawContext)");
    ::g::Fuse::Controls::Control__OnDraw_fn(__this, dc);
}

// protected override sealed void OnRooted() :1894
void FakeApp__OnRooted_fn(FakeApp* __this)
{
    uStackFrame __("Outracks.Simulator.FakeApp", "OnRooted()");
    ::g::Fuse::Controls::LayoutControl__OnRooted_fn(__this);
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)FakeApp__OnUpdate_fn, __this), 0);
}

// protected override sealed void OnUnrooted() :1900
void FakeApp__OnUnrooted_fn(FakeApp* __this)
{
    uStackFrame __("Outracks.Simulator.FakeApp", "OnUnrooted()");
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)FakeApp__OnUpdate_fn, __this), 0);
    ::g::Fuse::Controls::LayoutControl__OnUnrooted_fn(__this);
}

// private void OnUpdate() :1906
void FakeApp__OnUpdate_fn(FakeApp* __this)
{
    __this->OnUpdate();
}

// public Fuse.Node get_Overlay() :1971
void FakeApp__get_Overlay_fn(FakeApp* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Overlay();
}

// public void set_Overlay(Fuse.Node value) :1972
void FakeApp__set_Overlay_fn(FakeApp* __this, ::g::Fuse::Node* value)
{
    __this->Overlay(value);
}

// private bool get_OverlayVisible() :1878
void FakeApp__get_OverlayVisible_fn(FakeApp* __this, bool* __retval)
{
    *__retval = __this->OverlayVisible();
}

// private void set_OverlayVisible(bool value) :1879
void FakeApp__set_OverlayVisible_fn(FakeApp* __this, bool* value)
{
    __this->OverlayVisible(*value);
}

// private void RemoveExpiredFlashes() :1930
void FakeApp__RemoveExpiredFlashes_fn(FakeApp* __this)
{
    __this->RemoveExpiredFlashes();
}

// public new Uno.Collections.IList<Uno.UX.Resource> get_Resources() :1966
void FakeApp__get_Resources1_fn(FakeApp* __this, uObject** __retval)
{
    *__retval = __this->Resources1();
}

// private void UpdateFlashes() :1918
void FakeApp__UpdateFlashes_fn(FakeApp* __this)
{
    __this->UpdateFlashes();
}

// public FakeApp(Fuse.App app) [instance] :1886
void FakeApp::ctor_7(::g::Fuse::App* app)
{
    uStackFrame __("Outracks.Simulator.FakeApp", ".ctor(Fuse.App)");
    _rootPlaceholder = ::g::Fuse::Controls::Panel::New3();
    _overlayPlaceholde = ::g::Fuse::Controls::Panel::New3();
    _flashes = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[81/*Outracks.Simulator.ConcurrentQueue<string>*/]));
    ctor_6();
    _app = app;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children1()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), _overlayPlaceholde);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children1()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), _rootPlaceholder);
    OverlayVisible(false);
}

// private void AddNewFlashes() [instance] :1939
void FakeApp::AddNewFlashes()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "AddNewFlashes()");
    bool ret2;
    uString* flashText;

    if ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(_flashes), (void**)(&flashText), &ret2), ret2))
        Overlay(_currentFlash = ::g::Outracks::Simulator::Flasher::New4(flashText));
}

// public new float4 get_Background() [instance] :1953
::g::Uno::Float4 FakeApp::Background1()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "get_Background()");
    return uPtr(_app)->Background();
}

// public new void set_Background(float4 value) [instance] :1954
void FakeApp::Background1(::g::Uno::Float4 value)
{
    uStackFrame __("Outracks.Simulator.FakeApp", "set_Background(float4)");
    uPtr(_app)->Background(value);
}

// public new Uno.Collections.IList<Fuse.Node> get_Children() [instance] :1959
uObject* FakeApp::Children1()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "get_Children()");
    return uPtr(_app)->Children();
}

// public float4 get_ClearColor() [instance] :1987
::g::Uno::Float4 FakeApp::ClearColor()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "get_ClearColor()");
    return uPtr(_app)->ClearColor();
}

// public void set_ClearColor(float4 value) [instance] :1988
void FakeApp::ClearColor(::g::Uno::Float4 value)
{
    uStackFrame __("Outracks.Simulator.FakeApp", "set_ClearColor(float4)");
    uPtr(_app)->ClearColor(value);
}

// public float get_ClearDepth() [instance] :1993
float FakeApp::ClearDepth()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "get_ClearDepth()");
    return uPtr(_app)->ClearDepth();
}

// public void set_ClearDepth(float value) [instance] :1994
void FakeApp::ClearDepth(float value)
{
}

// public void Flash(string message) [instance] :1913
void FakeApp::Flash(uString* message)
{
    uStackFrame __("Outracks.Simulator.FakeApp", "Flash(string)");
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_flashes), message);
}

// private bool get_HasFlash() [instance] :1927
bool FakeApp::HasFlash()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "get_HasFlash()");
    return _currentFlash != NULL;
}

// private void OnUpdate() [instance] :1906
void FakeApp::OnUpdate()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "OnUpdate()");
    UpdateFlashes();
}

// public Fuse.Node get_Overlay() [instance] :1971
::g::Fuse::Node* FakeApp::Overlay()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "get_Overlay()");
    ::g::Fuse::Node* ret3;
    return (::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[82/*Uno.Collections.EnumerableExtensions.FirstOrDefault<Fuse.Node>*/], uPtr(_overlayPlaceholde)->Children(), &ret3), ret3);
}

// public void set_Overlay(Fuse.Node value) [instance] :1972
void FakeApp::Overlay(::g::Fuse::Node* value)
{
    uStackFrame __("Outracks.Simulator.FakeApp", "set_Overlay(Fuse.Node)");
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(_overlayPlaceholde)->Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]));
    OverlayVisible(false);

    if (value != NULL)
    {
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_overlayPlaceholde)->Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), value);
        OverlayVisible(true);
    }
}

// private bool get_OverlayVisible() [instance] :1878
bool FakeApp::OverlayVisible()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "get_OverlayVisible()");
    return uPtr(_overlayPlaceholde)->Visibility() == 0;
}

// private void set_OverlayVisible(bool value) [instance] :1879
void FakeApp::OverlayVisible(bool value)
{
    uStackFrame __("Outracks.Simulator.FakeApp", "set_OverlayVisible(bool)");

    if (value)
        uPtr(_overlayPlaceholde)->Visibility(0);
    else
        uPtr(_overlayPlaceholde)->Visibility(2);
}

// private void RemoveExpiredFlashes() [instance] :1930
void FakeApp::RemoveExpiredFlashes()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "RemoveExpiredFlashes()");

    if ((_currentFlash != NULL) && uPtr(_currentFlash)->IsExpired())
    {
        Overlay(NULL);
        _currentFlash = NULL;
    }
}

// public new Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :1966
uObject* FakeApp::Resources1()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "get_Resources()");
    return uPtr(_app)->Resources();
}

// private void UpdateFlashes() [instance] :1918
void FakeApp::UpdateFlashes()
{
    uStackFrame __("Outracks.Simulator.FakeApp", "UpdateFlashes()");
    RemoveExpiredFlashes();

    if (!HasFlash())
        AddNewFlashes();
}

// public FakeApp New(Fuse.App app) [static] :1886
FakeApp* FakeApp::New4(::g::Fuse::App* app)
{
    FakeApp* obj1 = (FakeApp*)uNew(FakeApp_typeof());
    obj1->ctor_7(app);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class Faulted :694
// {
static void Faulted_build(uType* type)
{
    ::STRINGS[40] = uString::Const("Oops! Something went wrong here.");
    ::STRINGS[41] = uString::Const("\n"
        "\n"
        "Please see the Fuse Monitor (Cmd/Ctrl+M) for details.");
    ::STRINGS[0] = uString::Const("");
    type->SetFields(5);
}

::g::Outracks::Simulator::State_type* Faulted_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Faulted);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.Faulted", options);
    type->SetBase(::g::Outracks::Simulator::ShowingModalDialog_typeof());
    type->fp_build_ = Faulted_build;
    return type;
}

// public Faulted(bool isOnline, Uno.Exception exception, Outracks.Simulator.DialogButton[] buttons) :696
void Faulted__ctor_2_fn(Faulted* __this, bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    __this->ctor_2(*isOnline, exception, buttons);
}

// public Faulted New(bool isOnline, Uno.Exception exception, Outracks.Simulator.DialogButton[] buttons) :696
void Faulted__New2_fn(bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons, Faulted** __retval)
{
    *__retval = Faulted::New2(*isOnline, exception, buttons);
}

// public Faulted(bool isOnline, Uno.Exception exception, Outracks.Simulator.DialogButton[] buttons) [instance] :696
void Faulted::ctor_2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    uStackFrame __("Outracks.Simulator.Faulted", ".ctor(bool,Uno.Exception,Outracks.Simulator.DialogButton[])");
    ctor_1(::STRINGS[40/*"Oops! Somet...*/], ::g::Uno::String::op_Addition2(uPtr(exception)->Message(), isOnline ? ::STRINGS[41/*"\n\nPlease ...*/] : ::STRINGS[0/*""*/]), ::STRINGS[0/*""*/], buttons);
}

// public Faulted New(bool isOnline, Uno.Exception exception, Outracks.Simulator.DialogButton[] buttons) [static] :696
Faulted* Faulted::New2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    Faulted* obj1 = (Faulted*)uNew(Faulted_typeof());
    obj1->ctor_2(isOnline, exception, buttons);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class Flasher :2030
// {
static void Flasher_build(uType* type)
{
    ::STRINGS[42] = uString::Const("#222");
    ::TYPES[84] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[85] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(93,
        ::g::Uno::Double_typeof(), offsetof(::g::Outracks::Simulator::Flasher, _lastRooted), 0);
}

::g::Fuse::Controls::Control_type* Flasher_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 94;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Flasher);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Outracks.Simulator.Flasher", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_build_ = Flasher_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Flasher__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Flasher__OnUnrooted_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Flasher(string text) :2034
void Flasher__ctor_7_fn(Flasher* __this, uString* text)
{
    __this->ctor_7(text);
}

// private double get_AnimationParameter() :2078
void Flasher__get_AnimationParameter_fn(Flasher* __this, double* __retval)
{
    *__retval = __this->AnimationParameter();
}

// public bool IsExpired() :2071
void Flasher__IsExpired_fn(Flasher* __this, bool* __retval)
{
    *__retval = __this->IsExpired();
}

// public Flasher New(string text) :2034
void Flasher__New4_fn(uString* text, Flasher** __retval)
{
    *__retval = Flasher::New4(text);
}

// protected override sealed void OnRooted() :2053
void Flasher__OnRooted_fn(Flasher* __this)
{
    uStackFrame __("Outracks.Simulator.Flasher", "OnRooted()");
    __this->_lastRooted = ::g::Fuse::Time::FrameTime();
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Flasher__OnUpdate_fn, __this), 0);
    uPtr(__this->Background())->Pin();
}

// protected override sealed void OnUnrooted() :2060
void Flasher__OnUnrooted_fn(Flasher* __this)
{
    uStackFrame __("Outracks.Simulator.Flasher", "OnUnrooted()");
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Flasher__OnUpdate_fn, __this), 0);
    uPtr(__this->Background())->Unpin();
}

// private void OnUpdate() :2066
void Flasher__OnUpdate_fn(Flasher* __this)
{
    __this->OnUpdate();
}

// public Flasher(string text) [instance] :2034
void Flasher::ctor_7(uString* text)
{
    uStackFrame __("Outracks.Simulator.Flasher", ".ctor(string)");
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::Controls::Text* collection1;
    ::g::Fuse::Font* ind4;
    ::g::Uno::Float4 ind5;
    ctor_6();
    ::g::Fuse::Drawing::LinearGradient* linearGradient = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(linearGradient->Stops()), ::TYPES[84/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), ::g::Fuse::Drawing::GradientStop::New3(::g::Uno::Float4__New8((ind2 = ::g::Uno::Color::FromHex(::STRINGS[42/*"#222"*/]), ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z)), 0.9f), 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(linearGradient->Stops()), ::TYPES[84/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), ::g::Fuse::Drawing::GradientStop::New3(::g::Uno::Float4__New8((ind3 = ::g::Uno::Color::FromHex(::STRINGS[42/*"#222"*/]), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z)), 0.9f), 1.0f));
    Background(linearGradient);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection1 = ::g::Fuse::Controls::Text::New3(), ind4 = ::g::Fuse::Font::PlatformDefault(), uPtr(collection1)->Font(ind4), ind4, uPtr(collection1)->FontSize(25.0f), 25.0f, uPtr(collection1)->Value(text), text, ind5 = ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f), uPtr(collection1)->TextColor(ind5), ind5, uPtr(collection1)->Alignment(10), 10, collection1));
}

// private double get_AnimationParameter() [instance] :2078
double Flasher::AnimationParameter()
{
    uStackFrame __("Outracks.Simulator.Flasher", "get_AnimationParameter()");
    return (::g::Fuse::Time::FrameTime() - _lastRooted) / 0.3;
}

// public bool IsExpired() [instance] :2071
bool Flasher::IsExpired()
{
    uStackFrame __("Outracks.Simulator.Flasher", "IsExpired()");
    return AnimationParameter() >= 1.1;
}

// private void OnUpdate() [instance] :2066
void Flasher::OnUpdate()
{
    uStackFrame __("Outracks.Simulator.Flasher", "OnUpdate()");
    Opacity(::g::Uno::Math::Saturate1((1.0f - (float)AnimationParameter()) * 3.0f));
}

// public Flasher New(string text) [static] :2034
Flasher* Flasher::New4(uString* text)
{
    Flasher* obj6 = (Flasher*)uNew(Flasher_typeof());
    obj6->ctor_7(text);
    return obj6;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// internal sealed class Forget<TArg, TResult> :43
// {
static void Forget_build(uType* type)
{
    type->SetFields(0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* Forget_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(Forget);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Forget`2", options);
    type->fp_build_ = Forget_build;
    return type;
}

// public Forget(TResult result) :46
void Forget__ctor__fn(Forget* __this, void* result)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    uStackFrame __("Outracks.Simulator.Forget`2", ".ctor(TResult)");
    __this->_result() = result;
}

// public TResult Execute(TArg _) :51
void Forget__Execute_fn(Forget* __this, void* _, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Outracks.Simulator.Forget`2", "Execute(TArg)");
    return __retval.Store(__this->_result()), void();
}

// public Forget New(TResult result) :46
void Forget__New1_fn(uType* __type, void* result, Forget** __retval)
{
    uType* __types[] = {
        __type->T(1),
    };
    Forget* obj1 = (Forget*)uNew(__type);
    Forget__ctor__fn(obj1, result);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// internal sealed class Forget<TArg1, TArg2, TResult> :73
// {
static void Forget1_build(uType* type)
{
    type->SetFields(0,
        type->T(2), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* Forget1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(Forget1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Forget`3", options);
    type->fp_build_ = Forget1_build;
    return type;
}

// public Forget(TResult result) :76
void Forget1__ctor__fn(Forget1* __this, void* result)
{
    uType* __types[] = {
        __this->__type->T(2),
    };
    uStackFrame __("Outracks.Simulator.Forget`3", ".ctor(TResult)");
    __this->_result() = result;
}

// public TResult Execute(TArg1 arg1, TArg2 arg2) :81
void Forget1__Execute_fn(Forget1* __this, void* arg1, void* arg2, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uStackFrame __("Outracks.Simulator.Forget`3", "Execute(TArg1,TArg2)");
    return __retval.Store(__this->_result()), void();
}

// public Forget New(TResult result) :76
void Forget1__New1_fn(uType* __type, void* result, Forget1** __retval)
{
    uType* __types[] = {
        __type->T(2),
    };
    Forget1* obj1 = (Forget1*)uNew(__type);
    Forget1__ctor__fn(obj1, result);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// public sealed class ForgetAction<TArg1, TArg2> :58
// {
static void ForgetAction_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Outracks::Simulator::ForgetAction, _action), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Execute", NULL, (void*)ForgetAction__Execute_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction(".ctor", type, (void*)ForgetAction__New1_fn, 0, true, type, 1, ::g::Uno::Action_typeof()));
}

uType* ForgetAction_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(ForgetAction);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ForgetAction`2", options);
    type->fp_build_ = ForgetAction_build;
    return type;
}

// public ForgetAction(Uno.Action action) :62
void ForgetAction__ctor__fn(ForgetAction* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public void Execute(TArg1 arg1, TArg2 arg2) :67
void ForgetAction__Execute_fn(ForgetAction* __this, void* arg1, void* arg2)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uStackFrame __("Outracks.Simulator.ForgetAction`2", "Execute(TArg1,TArg2)");
    uPtr(__this->_action)->InvokeVoid();
}

// public ForgetAction New(Uno.Action action) :62
void ForgetAction__New1_fn(uType* __type, uDelegate* action, ForgetAction** __retval)
{
    *__retval = ForgetAction::New1(__type, action);
}

// public ForgetAction(Uno.Action action) [instance] :62
void ForgetAction::ctor_(uDelegate* action)
{
    uStackFrame __("Outracks.Simulator.ForgetAction`2", ".ctor(Uno.Action)");
    _action = action;
}

// public ForgetAction New(Uno.Action action) [static] :62
ForgetAction* ForgetAction::New1(uType* __type, uDelegate* action)
{
    ForgetAction* obj1 = (ForgetAction*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno
// -------------------------------------------------------------------------

// internal sealed class GetSimulatorEndpoint :62
// {
static void GetSimulatorEndpoint_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[43] = uString::Const("Call Tom Curise");
    ::TYPES[18] = ::g::Uno::Exception_typeof();
    ::TYPES[50] = ::g::Uno::Net::EndPoint_typeof();
    ::TYPES[86] = ::g::Uno::IO::Stream_typeof();
    ::TYPES[26] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    ::TYPES[23] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof()->Array(), offsetof(::g::Outracks::Simulator::GetSimulatorEndpoint, defines), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::GetSimulatorEndpoint, project), 0,
        ::g::Uno::Net::IPEndPoint_typeof(), offsetof(::g::Outracks::Simulator::GetSimulatorEndpoint, proxy), 0);
}

uType* GetSimulatorEndpoint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(GetSimulatorEndpoint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.GetSimulatorEndpoint", options);
    type->fp_build_ = GetSimulatorEndpoint_build;
    return type;
}

// public GetSimulatorEndpoint(Uno.Net.IPEndPoint proxy, string project, string[] defines) :69
void GetSimulatorEndpoint__ctor__fn(GetSimulatorEndpoint* __this, ::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1)
{
    __this->ctor_(proxy1, project1, defines1);
}

// public Uno.Net.IPEndPoint[] Execute() :76
void GetSimulatorEndpoint__Execute_fn(GetSimulatorEndpoint* __this, uArray** __retval)
{
    *__retval = __this->Execute();
}

// public GetSimulatorEndpoint New(Uno.Net.IPEndPoint proxy, string project, string[] defines) :69
void GetSimulatorEndpoint__New1_fn(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1, GetSimulatorEndpoint** __retval)
{
    *__retval = GetSimulatorEndpoint::New1(proxy1, project1, defines1);
}

// public GetSimulatorEndpoint(Uno.Net.IPEndPoint proxy, string project, string[] defines) [instance] :69
void GetSimulatorEndpoint::ctor_(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1)
{
    uStackFrame __("Outracks.Simulator.GetSimulatorEndpoint", ".ctor(Uno.Net.IPEndPoint,string,string[])");
    proxy = proxy1;
    project = project1;
    defines = defines1;
}

// public Uno.Net.IPEndPoint[] Execute() [instance] :76
uArray* GetSimulatorEndpoint::Execute()
{
    uStackFrame __("Outracks.Simulator.GetSimulatorEndpoint", "Execute()");

    try
    {
        ::g::Uno::Net::Sockets::Socket* socket = ::g::Uno::Net::Sockets::Socket::Create(2, 1, 6);
        uPtr(socket)->Connect1(proxy);
        ::g::Uno::Net::Sockets::NetworkStream* stream = ::g::Uno::Net::Sockets::NetworkStream::New1(socket);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[23/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            ::g::Uno::IO::StreamWriter* writer = ::g::Uno::IO::StreamWriter::New1(stream);

            {
                const auto __finally_fun = [&]()
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)writer), ::TYPES[23/*Uno.IDisposable*/]));
                };

                const uFinally<decltype(__finally_fun)> __f(__finally_fun);
                ::g::Uno::IO::StreamReader* reader = ::g::Uno::IO::StreamReader::New1(stream);

                {
                    const auto __finally_fun = [&]()
                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[23/*Uno.IDisposable*/]));
                    };

                    const uFinally<decltype(__finally_fun)> __f(__finally_fun);
                    uPtr(writer)->WriteLine10(project);
                    writer->WriteLine10(::g::Uno::String::Join(::STRINGS[0/*""*/], defines));
                    writer->Flush();
                    uString* endpointCount = uPtr(reader)->ReadLine();

                    if (::g::Uno::String::op_Equality(endpointCount, NULL))
                        U_THROW(::g::Uno::IO::EndOfStreamException::New5());

                    uArray* endpoints = uArray::New(::TYPES[26/*Uno.Net.IPEndPoint[]*/], ::g::Uno::Int::Parse(endpointCount));

                    for (int i = 0; i < endpoints->Length(); i++)
                    {
                        uString* simulatorAddress = uPtr(reader)->ReadLine();

                        if (::g::Uno::String::op_Equality(simulatorAddress, NULL))
                            U_THROW(::g::Uno::IO::EndOfStreamException::New5());

                        uString* simulatorPort = reader->ReadLine();

                        if (::g::Uno::String::op_Equality(simulatorPort, NULL))
                            U_THROW(::g::Uno::IO::EndOfStreamException::New5());

                        uPtr(endpoints)->Strong< ::g::Uno::Net::IPEndPoint*>(i) = ::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(simulatorAddress), ::g::Uno::Int::Parse(simulatorPort));
                    }

                    try
                    {
                        uPtr(socket)->Shutdown(2);
                    }
                    catch (const uThrowable& __t)
                    {
                        ::g::Uno::Exception* e1 = __t.Exception;
                    }

                    return endpoints;
                }
            }
        }

        U_THROW(::g::Uno::Exception::New2(::STRINGS[43/*"Call Tom Cu...*/]));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        U_THROW(::g::Outracks::Simulator::FailedToConnectToEndPoint::New4(proxy, e));
    }
}

// public GetSimulatorEndpoint New(Uno.Net.IPEndPoint proxy, string project, string[] defines) [static] :69
GetSimulatorEndpoint* GetSimulatorEndpoint::New1(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1)
{
    GetSimulatorEndpoint* obj1 = (GetSimulatorEndpoint*)uNew(GetSimulatorEndpoint_typeof());
    obj1->ctor_(proxy1, project1, defines1);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal static class GoOffline :762
// {
static void GoOffline_build(uType* type)
{
    ::STRINGS[44] = uString::Const("Go offline");
    ::TYPES[25] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Reify_typeof());
    ::TYPES[87] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[88] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[89] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[49] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[39] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[90] = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof()->Array();
    ::TYPES[91] = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof();
    ::TYPES[92] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[93] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::DialogButton_typeof());
}

uClassType* GoOffline_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.GoOffline", options);
    type->fp_build_ = GoOffline_build;
    return type;
}

// public static Outracks.Simulator.DialogButton[] PrependOption(Outracks.Simulator.DialogButton[] otherButtons) :764
void GoOffline__PrependOption_fn(uArray* otherButtons, uArray** __retval)
{
    *__retval = GoOffline::PrependOption(otherButtons);
}

// public static Outracks.Simulator.DialogButton[] PrependOption(Outracks.Simulator.DialogButton[] otherButtons) [static] :764
uArray* GoOffline::PrependOption(uArray* otherButtons)
{
    uStackFrame __("Outracks.Simulator.GoOffline", "PrependOption(Outracks.Simulator.DialogButton[])");
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> > oldReify = ::g::Outracks::Simulator::BytecodeCache::TryLoad();
    return oldReify.HasValue(::TYPES[25/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify>*/]) ? (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[87/*Uno.Collections.EnumerableExtensions.ToArray<Outracks.Simulator.DialogButton>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[88/*Uno.Collections.EnumerableExtensions.Union<Outracks.Simulator.DialogButton>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::AsEnumerable(::TYPES[89/*Uno.Collections.EnumerableExtensions.AsEnumerable<Outracks.Simulator.DialogButton>*/], uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[49/*Outracks.Simulator.DialogButton[]*/], 1, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[44/*"Go offline"*/], ::g::Outracks::Simulator::Idle::New1((uObject*)::g::Outracks::Simulator::OfflineSimulatorClient::New1(uArray::Init< ::g::Outracks::Simulator::Protocol::MessageToClient*>(::TYPES[90/*Outracks.Simulator.Protocol.MessageToClient[]*/], 1, (::g::Outracks::Simulator::Protocol::Reify*)oldReify.Value(::TYPES[25/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify>*/]))))))), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[93/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.DialogButton>*/], otherButtons)))) : otherButtons;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class Idle :482
// {
static void Idle_build(uType* type)
{
    ::STRINGS[45] = uString::Const("Loading");
    ::STRINGS[46] = uString::Const("Starting project...");
    ::STRINGS[36] = uString::Const("Try again");
    ::TYPES[94] = ::g::Uno::Diagnostics::LogHandler_typeof();
    ::TYPES[39] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[77] = ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[49] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    type->SetFields(1);
}

::g::Outracks::Simulator::Connected_type* Idle_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Idle);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Connected_type);
    type = (::g::Outracks::Simulator::Connected_type*)uClassType::New("Outracks.Simulator.Idle", options);
    type->SetBase(::g::Outracks::Simulator::Connected_typeof());
    type->fp_build_ = Idle_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Idle__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Idle__OnFaulted_fn;
    return type;
}

// public Idle(Outracks.Simulator.ISimulatorClient client) :484
void Idle__ctor_2_fn(Idle* __this, uObject* client)
{
    __this->ctor_2(client);
}

// public Idle New(Outracks.Simulator.ISimulatorClient client) :484
void Idle__New1_fn(uObject* client, Idle** __retval)
{
    *__retval = Idle::New1(client);
}

// public override sealed Outracks.Simulator.State OnEnterState() :488
void Idle__OnEnterState_fn(Idle* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Idle", "OnEnterState()");
    ::g::Uno::Diagnostics::Debug::SetLogHandler(uDelegate::New(::TYPES[94/*Uno.Diagnostics.LogHandler*/], (void*)Idle__SendDebugLog_fn, __this));
    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(__this->Client), ::TYPES[39/*Outracks.Simulator.ISimulatorClient*/]), ::g::Outracks::Simulator::Protocol::RegisterName::New1(::g::Outracks::Simulator::DeviceInfo::GUID(), ::g::Outracks::Simulator::DeviceInfo::Name()));
    ::g::Outracks::Simulator::LoadingScreen::Show(::g::Outracks::Simulator::Context::App(), ::STRINGS[45/*"Loading"*/], ::STRINGS[46/*"Starting pr...*/]);
    return *__retval = __this, void();
}

// protected override sealed Outracks.Simulator.State OnFaulted(Uno.Exception e) :501
void Idle__OnFaulted_fn(Idle* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Idle", "OnFaulted(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[39/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[49/*Outracks.Simulator.DialogButton[]*/], 1, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[36/*"Try again"*/], __this))), void();
}

// private void SendDebugLog(string text, Uno.Diagnostics.DebugMessageType type) :496
void Idle__SendDebugLog_fn(Idle* __this, uString* text, int* type)
{
    __this->SendDebugLog(text, *type);
}

// public Idle(Outracks.Simulator.ISimulatorClient client) [instance] :484
void Idle::ctor_2(uObject* client)
{
    uStackFrame __("Outracks.Simulator.Idle", ".ctor(Outracks.Simulator.ISimulatorClient)");
    ctor_1(client);
}

// private void SendDebugLog(string text, Uno.Diagnostics.DebugMessageType type) [instance] :496
void Idle::SendDebugLog(uString* text, int type)
{
    uStackFrame __("Outracks.Simulator.Idle", "SendDebugLog(string,Uno.Diagnostics.DebugMessageType)");
    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(Client), ::TYPES[39/*Outracks.Simulator.ISimulatorClient*/]), ::g::Outracks::Simulator::Protocol::DebugLog::New1(::g::Outracks::Simulator::DeviceInfo::GUID(), ::g::Outracks::Simulator::DeviceInfo::Name(), text));
}

// public Idle New(Outracks.Simulator.ISimulatorClient client) [static] :484
Idle* Idle::New1(uObject* client)
{
    Idle* obj1 = (Idle*)uNew(Idle_typeof());
    obj1->ctor_2(client);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// internal abstract interface IEquatable<T> :552
// {
uInterfaceType* IEquatable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.IEquatable`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// public sealed class ImmutableList<T> :146
// {
static void ImmutableList_build(uType* type)
{
    ::TYPES[38] = uObject_typeof()->Array();
    ::TYPES[95] = ::g::Uno::Array_typeof();
    ::TYPES[96] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[97] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[98] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[16] = uObject_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        ::g::Uno::Array_typeof()->MakeMethod(1, type->T(0)),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)),
        ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(type->T(0)),
        ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(ImmutableList_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Outracks::Simulator::ImmutableList, _array), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Add", NULL, (void*)ImmutableList__Add_fn, 0, false, type, 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)ImmutableList__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Empty", type, (void*)ImmutableList__get_Empty_fn, 0, true, type, 0),
        new uFunction("Get", NULL, (void*)ImmutableList__Get_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetEnumerator", NULL, (void*)ImmutableList__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("InsertRange", NULL, (void*)ImmutableList__InsertRange_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0))),
        new uFunction("get_Item", NULL, (void*)ImmutableList__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("Replace", NULL, (void*)ImmutableList__Replace_fn, 0, false, type, 2, type->T(0), type->T(0)));
}

ImmutableList_type* ImmutableList_typeof()
{
    static uSStrong<ImmutableList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(ImmutableList);
    options.TypeSize = sizeof(ImmutableList_type);
    type = (ImmutableList_type*)uClassType::New("Outracks.Simulator.ImmutableList`1", options);
    type->fp_build_ = ImmutableList_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))ImmutableList__GetEnumerator_fn;
    return type;
}

// internal ImmutableList(T[] array) :155
void ImmutableList__ctor__fn(ImmutableList* __this, uArray* array)
{
    __this->ctor_(array);
}

// public Outracks.Simulator.ImmutableList<T> Add(T element) :170
void ImmutableList__Add_fn(ImmutableList* __this, void* element, ImmutableList** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*T[]*/),
        __this->__type->Precalced(1/*Uno.Array.Copy<T>*/),
    };
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "Add(T)");
    uArray* copy = uArray::New(__types[1], __this->Count() + 1);
    ::g::Uno::Array::Copy1(__types[2], __this->_array, copy, __this->Count());
    copy->TItem(__this->Count()) = element;
    return *__retval = ImmutableList::New1(__this->__type, copy), void();
}

// public int get_Count() :162
void ImmutableList__get_Count_fn(ImmutableList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public static Outracks.Simulator.ImmutableList<T> get_Empty() :150
void ImmutableList__get_Empty_fn(uType* __type, ImmutableList** __retval)
{
    *__retval = ImmutableList::Empty(__type);
}

// public T Get(int i) :199
void ImmutableList__Get_fn(ImmutableList* __this, int* i, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "Get(int)");
    int i_ = *i;
    return __retval.Store(uPtr(__this->_array)->TItem(i_)), void();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :165
void ImmutableList__GetEnumerator_fn(ImmutableList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Outracks.Simulator.ImmutableList<T> InsertRange(int index, Uno.Collections.IEnumerable<T> items) :178
void ImmutableList__InsertRange_fn(ImmutableList* __this, int* index, uObject* items, ImmutableList** __retval)
{
    *__retval = __this->InsertRange(*index, items);
}

// public T get_Item(int i) :206
void ImmutableList__get_Item_fn(ImmutableList* __this, int* i, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "get_Item(int)");
    int i_ = *i;
    return __retval.Store(uPtr(__this->_array)->TItem(i_)), void();
}

// internal ImmutableList New(T[] array) :155
void ImmutableList__New1_fn(uType* __type, uArray* array, ImmutableList** __retval)
{
    *__retval = ImmutableList::New1(__type, array);
}

// public Outracks.Simulator.ImmutableList<T> Replace(T element, T replacement) :189
void ImmutableList__Replace_fn(ImmutableList* __this, void* element, void* replacement, ImmutableList** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*T[]*/),
    };
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "Replace(T,T)");
    uArray* copy = uArray::New(__types[1], __this->Count());

    for (int i = 0; i < __this->Count(); i++)
        copy->TItem(i) = ::g::Uno::Object::Equals(uBoxPtr(__types[0], uPtr(__this->_array)->TItem(i), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], element)) ? replacement : (void*)uPtr(__this->_array)->TItem(i);

    return *__retval = ImmutableList::New1(__this->__type, copy), void();
}

// internal ImmutableList(T[] array) [instance] :155
void ImmutableList::ctor_(uArray* array)
{
    uStackFrame __("Outracks.Simulator.ImmutableList`1", ".ctor(T[])");
    _array = array;
}

// public int get_Count() [instance] :162
int ImmutableList::Count()
{
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "get_Count()");
    return uPtr(_array)->Length();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :165
uObject* ImmutableList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.IEnumerable<T>*/),
        __type->T(0),
        __type->Precalced(3/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "GetEnumerator()");
    return (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[2], _array)), __types[0]));
}

// public Outracks.Simulator.ImmutableList<T> InsertRange(int index, Uno.Collections.IEnumerable<T> items) [instance] :178
ImmutableList* ImmutableList::InsertRange(int index, uObject* items)
{
    uType* __types[] = {
        __type->Precalced(4/*Uno.Collections.EnumerableExtensions.ToArray<T>*/),
        __type->T(0),
        __type->Precalced(0/*T[]*/),
    };
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "InsertRange(int,Uno.Collections.IEnumerable<T>)");
    uArray* itemsArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(__types[0], items);
    uArray* copy = uArray::New(__types[2], Count() + uPtr(itemsArray)->Length());

    for (int i = 0; i < itemsArray->Length(); i++)
        copy->TItem(i) = itemsArray->TItem(i);

    for (int i1 = 0; i1 < Count(); i1++)
        copy->TItem(itemsArray->Length() + i1) = uPtr(_array)->TItem(i1);

    return ImmutableList::New1(__type, copy);
}

// internal ImmutableList New(T[] array) [static] :155
ImmutableList* ImmutableList::New1(uType* __type, uArray* array)
{
    ImmutableList* obj1 = (ImmutableList*)uNew(__type);
    obj1->ctor_(array);
    return obj1;
}

// public static Outracks.Simulator.ImmutableList<T> get_Empty() [static] :150
ImmutableList* ImmutableList::Empty(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "get_Empty()");
    return ImmutableList::New1(__type, uArray::New(__types[0], 0));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// public static class IndentString :439
// {
static void IndentString_build(uType* type)
{
    ::STRINGS[2] = uString::Const("\n"
        "");
    ::STRINGS[47] = uString::Const("\t");
    ::TYPES[99] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[47] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[48] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[100] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[101] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    type->Reflection.SetFunctions(1,
        new uFunction("Indent", NULL, (void*)IndentString__Indent_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()));
}

uClassType* IndentString_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.IndentString", options);
    type->fp_build_ = IndentString_build;
    return type;
}

// public static string Indent(string str) :441
void IndentString__Indent_fn(uString* str, uString** __retval)
{
    *__retval = IndentString::Indent(str);
}

// private static string PrefixWithTab(string s) :446
void IndentString__PrefixWithTab_fn(uString* s, uString** __retval)
{
    *__retval = IndentString::PrefixWithTab(s);
}

// public static string Indent(string str) [static] :441
uString* IndentString::Indent(uString* str)
{
    uStackFrame __("Outracks.Simulator.IndentString", "Indent(string)");
    return ::g::Outracks::Simulator::StringSplitting::Join((uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[99/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[48/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], ::g::Uno::String::Split(uPtr(str), uArray::Init<int>(::TYPES[100/*char[]*/], 1, 10)))), uDelegate::New(::TYPES[101/*Uno.Func<string, string>*/], (void*)IndentString__PrefixWithTab_fn)), ::STRINGS[2/*"\n"*/]);
}

// private static string PrefixWithTab(string s) [static] :446
uString* IndentString::PrefixWithTab(uString* s)
{
    uStackFrame __("Outracks.Simulator.IndentString", "PrefixWithTab(string)");
    return ::g::Uno::String::op_Addition2(::STRINGS[47/*"\t"*/], s);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public enum InputMode :1791
uEnumType* InputMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Outracks.Simulator.InputMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Interactive", 0LL,
        "Design", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno
// -------------------------------------------------------------------------

// public sealed class InvalidDataException :143
// {
static void InvalidDataException_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InvalidDataException__New4_fn, 0, true, InvalidDataException_typeof(), 0));
}

::g::Uno::Exception_type* InvalidDataException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidDataException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.InvalidDataException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_build_ = InvalidDataException_build;
    type->fp_ctor_ = (void*)InvalidDataException__New4_fn;
    return type;
}

// public generated InvalidDataException() :143
void InvalidDataException__ctor_3_fn(InvalidDataException* __this)
{
    __this->ctor_3();
}

// public generated InvalidDataException New() :143
void InvalidDataException__New4_fn(InvalidDataException** __retval)
{
    *__retval = InvalidDataException::New4();
}

// public generated InvalidDataException() [instance] :143
void InvalidDataException::ctor_3()
{
    ctor_();
}

// public generated InvalidDataException New() [static] :143
InvalidDataException* InvalidDataException::New4()
{
    InvalidDataException* obj1 = (InvalidDataException*)uNew(InvalidDataException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public abstract interface ISimulatorClient :890
// {
uInterfaceType* ISimulatorClient_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.ISimulatorClient", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_IncommingMessages", NULL, NULL, offsetof(ISimulatorClient, fp_get_IncommingMessages), false, ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof()), 0),
        new uFunction("get_IsOnline", NULL, NULL, offsetof(ISimulatorClient, fp_get_IsOnline), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Send", NULL, NULL, offsetof(ISimulatorClient, fp_Send), false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// public static class List :211
// {
static void List_build(uType* type)
{
    ::TYPES[102] = ::g::Outracks::Simulator::ImmutableList_typeof();
    ::TYPES[38] = uObject_typeof()->Array();
    ::TYPES[98] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[103] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->Reflection.SetFunctions(6,
        new uFunction("Create`1", type, (void*)List__Create_fn, 0, true, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), 1, type->U(0)->Array()),
        new uFunction("Read`1", type, (void*)List__Read_fn, 0, true, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), 2, ::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), type->U(0))),
        new uFunction("ReadImmutableList`1", type, (void*)List__ReadImmutableList_fn, 0, true, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), 2, ::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), type->U(0))),
        new uFunction("ToImmutableList`1", type, (void*)List__ToImmutableList_fn, 0, true, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0))),
        new uFunction("Write`1", type, (void*)List__Write_fn, 0, true, uVoid_typeof(), 3, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), ::g::Uno::IO::BinaryWriter_typeof(), ::g::Uno::Action2_typeof()->MakeType(type->U(0), ::g::Uno::IO::BinaryWriter_typeof())),
        new uFunction("Write`1", type, (void*)List__Write1_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::IO::BinaryWriter_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), ::g::Uno::Action2_typeof()->MakeType(type->U(0), ::g::Uno::IO::BinaryWriter_typeof())));
}

uClassType* List_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.List", options);
    type->fp_build_ = List_build;
    return type;
}

// public static Outracks.Simulator.ImmutableList<T> Create<T>(T[] elements) :213
void List__Create_fn(uType* __type, uArray* elements, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::Create(__type, elements);
}

// public static Outracks.Simulator.ImmutableList<T> Read<T>(Uno.IO.BinaryReader reader, Uno.Func<Uno.IO.BinaryReader, T> elementReader) :235
void List__Read_fn(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::Read(__type, reader, elementReader);
}

// public static Outracks.Simulator.ImmutableList<T> ReadImmutableList<T>(Uno.IO.BinaryReader reader, Uno.Func<Uno.IO.BinaryReader, T> elementReader) :240
void List__ReadImmutableList_fn(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::ReadImmutableList(__type, reader, elementReader);
}

// public static Outracks.Simulator.ImmutableList<T> ToImmutableList<T>(Uno.Collections.IEnumerable<T> self) :218
void List__ToImmutableList_fn(uType* __type, uObject* self, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::ToImmutableList(__type, self);
}

// public static void Write<T>(Outracks.Simulator.ImmutableList<T> array, Uno.IO.BinaryWriter writer, Uno.Action<T, Uno.IO.BinaryWriter> elementWriter) :223
void List__Write_fn(uType* __type, ::g::Outracks::Simulator::ImmutableList* array, ::g::Uno::IO::BinaryWriter* writer, uDelegate* elementWriter)
{
    List::Write(__type, array, writer, elementWriter);
}

// public static void Write<T>(Uno.IO.BinaryWriter writer, Outracks.Simulator.ImmutableList<T> array, Uno.Action<T, Uno.IO.BinaryWriter> elementWriter) :228
void List__Write1_fn(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::ImmutableList* array, uDelegate* elementWriter)
{
    List::Write1(__type, writer, array, elementWriter);
}

// public static Outracks.Simulator.ImmutableList<T> Create<T>(T[] elements) [static] :213
::g::Outracks::Simulator::ImmutableList* List::Create(uType* __type, uArray* elements)
{
    uType* __types[] = {
        ::TYPES[102/*Outracks.Simulator.ImmutableList`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    uStackFrame __("Outracks.Simulator.List", "Create`1(T[])");
    return (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(__types[0], elements);
}

// public static Outracks.Simulator.ImmutableList<T> Read<T>(Uno.IO.BinaryReader reader, Uno.Func<Uno.IO.BinaryReader, T> elementReader) [static] :235
::g::Outracks::Simulator::ImmutableList* List::Read(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader)
{
    uType* __types[] = {
        List_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
    };
    uStackFrame __("Outracks.Simulator.List", "Read`1(Uno.IO.BinaryReader,Uno.Func<Uno.IO.BinaryReader, T>)");
    return (::g::Outracks::Simulator::ImmutableList*)List::ReadImmutableList(__types[0], reader, elementReader);
}

// public static Outracks.Simulator.ImmutableList<T> ReadImmutableList<T>(Uno.IO.BinaryReader reader, Uno.Func<Uno.IO.BinaryReader, T> elementReader) [static] :240
::g::Outracks::Simulator::ImmutableList* List::ReadImmutableList(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader)
{
    uType* __types[] = {
        __type->U(0),
        __type->U(0)->Array(),
        ::TYPES[102/*Outracks.Simulator.ImmutableList`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Outracks.Simulator.List", "ReadImmutableList`1(Uno.IO.BinaryReader,Uno.Func<Uno.IO.BinaryReader, T>)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uArray* array = uArray::New(__types[1], uPtr(reader)->ReadInt());

    for (int i = 0; i < array->Length(); i++)
        array->TItem(i) = (uPtr(elementReader)->Invoke(&ret1, 1, reader), ret1);

    return (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(__types[2], array);
}

// public static Outracks.Simulator.ImmutableList<T> ToImmutableList<T>(Uno.Collections.IEnumerable<T> self) [static] :218
::g::Outracks::Simulator::ImmutableList* List::ToImmutableList(uType* __type, uObject* self)
{
    uType* __types[] = {
        ::TYPES[102/*Outracks.Simulator.ImmutableList`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[98/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(1, __type->U(0)),
    };
    uStackFrame __("Outracks.Simulator.List", "ToImmutableList`1(Uno.Collections.IEnumerable<T>)");
    return (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(__types[0], (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(__types[2], self));
}

// public static void Write<T>(Outracks.Simulator.ImmutableList<T> array, Uno.IO.BinaryWriter writer, Uno.Action<T, Uno.IO.BinaryWriter> elementWriter) [static] :223
void List::Write(uType* __type, ::g::Outracks::Simulator::ImmutableList* array, ::g::Uno::IO::BinaryWriter* writer, uDelegate* elementWriter)
{
    uType* __types[] = {
        List_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
    };
    uStackFrame __("Outracks.Simulator.List", "Write`1(Outracks.Simulator.ImmutableList<T>,Uno.IO.BinaryWriter,Uno.Action<T, Uno.IO.BinaryWriter>)");
    List::Write1(__types[0], writer, array, elementWriter);
}

// public static void Write<T>(Uno.IO.BinaryWriter writer, Outracks.Simulator.ImmutableList<T> array, Uno.Action<T, Uno.IO.BinaryWriter> elementWriter) [static] :228
void List::Write1(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::ImmutableList* array, uDelegate* elementWriter)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[103/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Outracks.Simulator.List", "Write`1(Uno.IO.BinaryWriter,Outracks.Simulator.ImmutableList<T>,Uno.Action<T, Uno.IO.BinaryWriter>)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT elm(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uPtr(writer)->Write13(uPtr(array)->Count());

    for (uObject* enum1 = (uObject*)array->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        elm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret2), ret2);
        uPtr(elementWriter)->Invoke(2, (void*)elm, writer);
    }
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class LoadingScreen :1273
// {
static void LoadingScreen_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[15] = ::g::Fuse::Node_typeof();
}

uType* LoadingScreen_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LoadingScreen);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.LoadingScreen", options);
    type->fp_build_ = LoadingScreen_build;
    type->fp_ctor_ = (void*)LoadingScreen__New1_fn;
    return type;
}

// public generated LoadingScreen() :1273
void LoadingScreen__ctor__fn(LoadingScreen* __this)
{
    __this->ctor_();
}

// public generated LoadingScreen New() :1273
void LoadingScreen__New1_fn(LoadingScreen** __retval)
{
    *__retval = LoadingScreen::New1();
}

// public static void Show(Outracks.Simulator.FakeApp app, string header, string message) :1275
void LoadingScreen__Show_fn(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* message)
{
    LoadingScreen::Show(app, header, message);
}

// public generated LoadingScreen() [instance] :1273
void LoadingScreen::ctor_()
{
}

// public generated LoadingScreen New() [static] :1273
LoadingScreen* LoadingScreen::New1()
{
    LoadingScreen* obj8 = (LoadingScreen*)uNew(LoadingScreen_typeof());
    obj8->ctor_();
    return obj8;
}

// public static void Show(Outracks.Simulator.FakeApp app, string header, string message) [static] :1275
void LoadingScreen::Show(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* message)
{
    uStackFrame __("Outracks.Simulator.LoadingScreen", "Show(Outracks.Simulator.FakeApp,string,string)");
    ::g::Fuse::Controls::StackPanel* collection1;
    ::g::Uno::Float4 ind5;
    uObject* array2;
    ::g::Fuse::Controls::Text* collection3;
    ::g::Uno::Float4 ind6;
    ::g::Fuse::Controls::Text* collection4;
    ::g::Uno::Float4 ind7;
    uPtr(::g::Outracks::Simulator::UserAppState::Default())->ApplyTo(app);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(app)->Children1()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection1 = ::g::Fuse::Controls::StackPanel::New4(), uPtr(collection1)->Alignment(10), 10, ind5 = ::g::Uno::Float4__New1(40.0f), uPtr(collection1)->Padding(ind5), ind5, array2 = uPtr(collection1)->Children(), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection3 = ::g::Fuse::Controls::Text::New3(), ind6 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection3)->Margin(ind6), ind6, uPtr(collection3)->Value(header), header, uPtr(collection3)->FontSize(40.0f), 40.0f, uPtr(collection3)->TextAlignment(1), 1, uPtr(collection3)->TextWrapping(1), 1, collection3)), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection4 = ::g::Fuse::Controls::Text::New3(), ind7 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection4)->Margin(ind7), ind7, uPtr(collection4)->Value(message), message, uPtr(collection4)->TextWrapping(1), 1, collection4)), collection1));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class ModalDialog :1304
// {
static void ModalDialog_build(uType* type)
{
    ::STRINGS[48] = uString::Const("1*,auto");
    ::STRINGS[49] = uString::Const("1*,0.5*,2*");
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[104] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[105] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[106] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Controls::Control_typeof());
    ::TYPES[107] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[108] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
}

uType* ModalDialog_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ModalDialog);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ModalDialog", options);
    type->fp_build_ = ModalDialog_build;
    type->fp_ctor_ = (void*)ModalDialog__New1_fn;
    return type;
}

// public generated ModalDialog() :1304
void ModalDialog__ctor__fn(ModalDialog* __this)
{
    __this->ctor_();
}

// public generated ModalDialog New() :1304
void ModalDialog__New1_fn(ModalDialog** __retval)
{
    *__retval = ModalDialog::New1();
}

// public static void Show(Outracks.Simulator.FakeApp app, string header, string body, string details, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) :1348
void ModalDialog__Show_fn(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, uString* details, uObject* buttons)
{
    ModalDialog::Show(app, header, body, details, buttons);
}

// public static void ShowPrompt(Outracks.Simulator.FakeApp app, string header, string body, Fuse.Controls.Control inputControl, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) :1306
void ModalDialog__ShowPrompt_fn(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, ::g::Fuse::Controls::Control* inputControl, uObject* buttons)
{
    ModalDialog::ShowPrompt(app, header, body, inputControl, buttons);
}

// public generated ModalDialog() [instance] :1304
void ModalDialog::ctor_()
{
}

// public generated ModalDialog New() [static] :1304
ModalDialog* ModalDialog::New1()
{
    ModalDialog* obj42 = (ModalDialog*)uNew(ModalDialog_typeof());
    obj42->ctor_();
    return obj42;
}

// public static void Show(Outracks.Simulator.FakeApp app, string header, string body, string details, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) [static] :1348
void ModalDialog::Show(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, uString* details, uObject* buttons)
{
    uStackFrame __("Outracks.Simulator.ModalDialog", "Show(Outracks.Simulator.FakeApp,string,string,string,Uno.Collections.IEnumerable<Fuse.Controls.Control>)");
    ::g::Fuse::Controls::Grid* collection7;
    ::g::Fuse::Controls::ClientPanel* collection8;
    uObject* array9;
    ::g::Fuse::Controls::Grid* collection10;
    uObject* array11;
    ::g::Fuse::Controls::Grid* collection12;
    ::g::Uno::Float4 ind34;
    uObject* array13;
    ::g::Fuse::Controls::Image* collection14;
    ::g::Uno::UX::FileSource* ind35;
    ::g::Fuse::Controls::Text* collection15;
    ::g::Fuse::Controls::Panel* collection16;
    uObject* array17;
    ::g::Fuse::Controls::ScrollView* collection18;
    ::g::Uno::Float4 ind36;
    ::g::Fuse::Elements::Element* ind37;
    ::g::Fuse::Controls::StackPanel* collection19;
    uObject* array20;
    ::g::Fuse::Controls::Text* collection21;
    ::g::Uno::Float4 ind38;
    ::g::Fuse::Controls::Panel* collection22;
    uObject* array23;
    ::g::Fuse::Controls::ScrollView* collection24;
    ::g::Fuse::Controls::Text* collection25;
    collection7 = ::g::Fuse::Controls::Grid::New4();
    ::g::Uno::Float4 ind33 = ::g::Uno::Float4__New1(15.0f);
    uPtr(collection7)->Margin(ind33);
    ;
    ::g::Fuse::Controls::Grid* buttonGrid = collection7;
    ::g::Fuse::Controls::Panel* detailPanel = ::g::Fuse::Controls::Panel::New3();
    collection8 = ::g::Fuse::Controls::ClientPanel::New5();
    array9 = uPtr(collection8)->Children();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array9), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection10 = ::g::Fuse::Controls::Grid::New4(), uPtr(collection10)->Rows(::STRINGS[48/*"1*,auto"*/]), ::STRINGS[48/*"1*,auto"*/], array11 = uPtr(collection10)->Children(), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array11), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection12 = ::g::Fuse::Controls::Grid::New4(), uPtr(collection12)->Rows(::STRINGS[49/*"1*,0.5*,2*"*/]), ::STRINGS[49/*"1*,0.5*,2*"*/], ind34 = ::g::Uno::Float4__New1(40.0f), uPtr(collection12)->Margin(ind34), ind34, array13 = uPtr(collection12)->Children(), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array13), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection14 = ::g::Fuse::Controls::Image::New3(), ind35 = ::g::Uno::UX::BundleFileSource::New1(::g::OutracksSimulatorClientUno_bundle::fightb073b460()), uPtr(collection14)->File(ind35), ind35, collection14)), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array13), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection15 = ::g::Fuse::Controls::Text::New3(), uPtr(collection15)->Value(header), header, uPtr(collection15)->FontSize(25.0f), 25.0f, uPtr(collection15)->TextAlignment(1), 1, uPtr(collection15)->Alignment(8), 8, uPtr(collection15)->TextWrapping(1), 1, collection15)), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array13), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection16 = ::g::Fuse::Controls::Panel::New3(), array17 = uPtr(collection16)->Children(), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array17), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection18 = ::g::Fuse::Controls::ScrollView::New4(), ind36 = ::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f), uPtr(collection18)->Margin(ind36), ind36, ind37 = (collection19 = ::g::Fuse::Controls::StackPanel::New4(), array20 = uPtr(collection19)->Children(), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array20), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection21 = ::g::Fuse::Controls::Text::New3(), uPtr(collection21)->TextWrapping(1), 1, uPtr(collection21)->TextAlignment(0), 0, uPtr(collection21)->Alignment(2), 2, uPtr(collection21)->Value(body), body, uPtr(collection21)->FontSize(15.0f), 15.0f, ind38 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection21)->Margin(ind38), ind38, collection21)), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array20), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), detailPanel), collection19), uPtr(collection18)->Content(ind37), ind37, collection18)), collection16)), collection12)), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array11), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection22 = ::g::Fuse::Controls::Panel::New3(), array23 = uPtr(collection22)->Children(), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array23), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), buttonGrid), collection22)), collection10));
    ::g::Fuse::Controls::ClientPanel* clientPanel = collection8;

    if (!::g::Uno::String::IsNullOrWhiteSpace(details))
    {
        collection24 = ::g::Fuse::Controls::ScrollView::New4();
        ::g::Uno::Float4 ind39 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f);
        uPtr(collection24)->Margin(ind39);
        ;
        uPtr(collection24)->AllowedScrollDirections(3);
        3;
        ::g::Uno::UX::Size ind40 = ::g::Uno::UX::Size__op_Implicit1(200);
        uPtr(collection24)->MaxHeight(ind40);
        ;
        ::g::Fuse::Elements::Element* ind41 = (collection25 = ::g::Fuse::Controls::Text::New3(), uPtr(collection25)->FontSize(10.0f), 10.0f, uPtr(collection25)->Value(details), details, collection25);
        uPtr(collection24)->Content(ind41);
        ;
        ::g::Fuse::Controls::ScrollView* detailsScroller = collection24;
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(detailPanel)->Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), detailsScroller);
    }

    uArray* buttonArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[106/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Controls.Control>*/], buttons);
    uPtr(buttonGrid)->ColumnCount(uPtr(buttonArray)->Length());

    for (int index27 = 0, length28 = buttonArray->Length(); index27 < length28; ++index27)
    {
        ::g::Fuse::Controls::Control* btn = uPtr(buttonArray)->Strong< ::g::Fuse::Controls::Control*>(index27);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buttonGrid)->Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), btn);
    }

    uPtr(::g::Outracks::Simulator::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Context::App());
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(app)->Children1()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(app->Children1()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), clientPanel);
}

// public static void ShowPrompt(Outracks.Simulator.FakeApp app, string header, string body, Fuse.Controls.Control inputControl, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) [static] :1306
void ModalDialog::ShowPrompt(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, ::g::Fuse::Controls::Control* inputControl, uObject* buttons)
{
    uStackFrame __("Outracks.Simulator.ModalDialog", "ShowPrompt(Outracks.Simulator.FakeApp,string,string,Fuse.Controls.Control,Uno.Collections.IEnumerable<Fuse.Controls.Control>)");
    ::g::Fuse::Controls::StackPanel* collection1;
    uObject* array2;
    ::g::Fuse::Controls::Text* collection3;
    ::g::Uno::Float4 ind30;
    ::g::Fuse::Controls::Text* collection4;
    ::g::Uno::Float4 ind31;
    ::g::Fuse::Controls::StackPanel* collection5;
    ::g::Fuse::Controls::Control* ret43;
    collection1 = ::g::Fuse::Controls::StackPanel::New4();
    uPtr(collection1)->Alignment(10);
    10;
    ::g::Uno::Float4 ind29 = ::g::Uno::Float4__New1(40.0f);
    uPtr(collection1)->Padding(ind29);
    ;
    array2 = uPtr(collection1)->Children();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection3 = ::g::Fuse::Controls::Text::New3(), ind30 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection3)->Margin(ind30), ind30, uPtr(collection3)->Value(header), header, uPtr(collection3)->FontSize(40.0f), 40.0f, uPtr(collection3)->TextAlignment(1), 1, uPtr(collection3)->TextWrapping(1), 1, collection3));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection4 = ::g::Fuse::Controls::Text::New3(), ind31 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection4)->Margin(ind31), ind31, uPtr(collection4)->Value(body), body, uPtr(collection4)->TextWrapping(1), 1, collection4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), inputControl);
    ::g::Fuse::Controls::StackPanel* root = collection1;
    collection5 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Uno::Float4 ind32 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f);
    uPtr(collection5)->Margin(ind32);
    ;
    uPtr(collection5)->Orientation(0);
    0;
    uPtr(collection5)->Alignment(10);
    10;
    ::g::Fuse::Controls::StackPanel* buttonPanel = collection5;

    for (uObject* enum6 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(buttons), ::TYPES[107/*Uno.Collections.IEnumerable<Fuse.Controls.Control>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum6), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Controls::Control* btn = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum6), ::TYPES[108/*Uno.Collections.IEnumerator<Fuse.Controls.Control>*/]), &ret43), ret43);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buttonPanel)->Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), btn);
    }

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(root)->Children()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), buttonPanel);
    uPtr(::g::Outracks::Simulator::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Context::App());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(app)->Children1()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Node>*/]), root);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno
// -------------------------------------------------------------------------

// public sealed class NonExhaustiveMatch :148
// {
static void NonExhaustiveMatch_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NonExhaustiveMatch__New4_fn, 0, true, NonExhaustiveMatch_typeof(), 0));
}

::g::Uno::Exception_type* NonExhaustiveMatch_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NonExhaustiveMatch);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.NonExhaustiveMatch", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_build_ = NonExhaustiveMatch_build;
    type->fp_ctor_ = (void*)NonExhaustiveMatch__New4_fn;
    return type;
}

// public generated NonExhaustiveMatch() :148
void NonExhaustiveMatch__ctor_3_fn(NonExhaustiveMatch* __this)
{
    __this->ctor_3();
}

// public generated NonExhaustiveMatch New() :148
void NonExhaustiveMatch__New4_fn(NonExhaustiveMatch** __retval)
{
    *__retval = NonExhaustiveMatch::New4();
}

// public generated NonExhaustiveMatch() [instance] :148
void NonExhaustiveMatch::ctor_3()
{
    ctor_();
}

// public generated NonExhaustiveMatch New() [static] :148
NonExhaustiveMatch* NonExhaustiveMatch::New4()
{
    NonExhaustiveMatch* obj1 = (NonExhaustiveMatch*)uNew(NonExhaustiveMatch_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class OfflineSimulatorClient :899
// {
static void OfflineSimulatorClient_build(uType* type)
{
    ::TYPES[109] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageFromClient_typeof());
    ::TYPES[110] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof());
    type->SetInterfaces(
        ::g::Outracks::Simulator::ISimulatorClient_typeof(), offsetof(OfflineSimulatorClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(OfflineSimulatorClient_type, interface1));
    type->SetFields(0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageFromClient_typeof()), offsetof(::g::Outracks::Simulator::OfflineSimulatorClient, _messagesFromClient), 0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof()), offsetof(::g::Outracks::Simulator::OfflineSimulatorClient, _messagesToClient), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Dispose", NULL, (void*)OfflineSimulatorClient__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IncommingMessages", NULL, (void*)OfflineSimulatorClient__get_IncommingMessages_fn, 0, false, ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof()), 0),
        new uFunction("get_IsOnline", NULL, (void*)OfflineSimulatorClient__get_IsOnline_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)OfflineSimulatorClient__New1_fn, 0, true, OfflineSimulatorClient_typeof(), 1, ::g::Outracks::Simulator::Protocol::MessageToClient_typeof()->Array()),
        new uFunction("Send", NULL, (void*)OfflineSimulatorClient__Send_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof()));
}

OfflineSimulatorClient_type* OfflineSimulatorClient_typeof()
{
    static uSStrong<OfflineSimulatorClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(OfflineSimulatorClient);
    options.TypeSize = sizeof(OfflineSimulatorClient_type);
    type = (OfflineSimulatorClient_type*)uClassType::New("Outracks.Simulator.OfflineSimulatorClient", options);
    type->fp_build_ = OfflineSimulatorClient_build;
    type->interface0.fp_Send = (void(*)(uObject*, ::g::Outracks::Simulator::Protocol::MessageFromClient*))OfflineSimulatorClient__Send_fn;
    type->interface0.fp_get_IncommingMessages = (void(*)(uObject*, ::g::Outracks::Simulator::ConcurrentQueue**))OfflineSimulatorClient__get_IncommingMessages_fn;
    type->interface0.fp_get_IsOnline = (void(*)(uObject*, bool*))OfflineSimulatorClient__get_IsOnline_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))OfflineSimulatorClient__Dispose_fn;
    return type;
}

// public OfflineSimulatorClient(Outracks.Simulator.Protocol.MessageToClient[] initialMessages) :904
void OfflineSimulatorClient__ctor__fn(OfflineSimulatorClient* __this, uArray* initialMessages)
{
    __this->ctor_(initialMessages);
}

// public void Dispose() :920
void OfflineSimulatorClient__Dispose_fn(OfflineSimulatorClient* __this)
{
    __this->Dispose();
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient> get_IncommingMessages() :912
void OfflineSimulatorClient__get_IncommingMessages_fn(OfflineSimulatorClient* __this, ::g::Outracks::Simulator::ConcurrentQueue** __retval)
{
    *__retval = __this->IncommingMessages();
}

// public bool get_IsOnline() :927
void OfflineSimulatorClient__get_IsOnline_fn(OfflineSimulatorClient* __this, bool* __retval)
{
    *__retval = __this->IsOnline();
}

// public OfflineSimulatorClient New(Outracks.Simulator.Protocol.MessageToClient[] initialMessages) :904
void OfflineSimulatorClient__New1_fn(uArray* initialMessages, OfflineSimulatorClient** __retval)
{
    *__retval = OfflineSimulatorClient::New1(initialMessages);
}

// public void Send(Outracks.Simulator.Protocol.MessageFromClient message) :915
void OfflineSimulatorClient__Send_fn(OfflineSimulatorClient* __this, ::g::Outracks::Simulator::Protocol::MessageFromClient* message)
{
    __this->Send(message);
}

// public OfflineSimulatorClient(Outracks.Simulator.Protocol.MessageToClient[] initialMessages) [instance] :904
void OfflineSimulatorClient::ctor_(uArray* initialMessages)
{
    uStackFrame __("Outracks.Simulator.OfflineSimulatorClient", ".ctor(Outracks.Simulator.Protocol.MessageToClient[])");
    uArray* array1;
    int index2;
    int length3;
    _messagesFromClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[109/*Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageFromClient>*/]));
    _messagesToClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[110/*Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient>*/]));

    for (array1 = initialMessages, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Outracks::Simulator::Protocol::MessageToClient* msg = uPtr(array1)->Strong< ::g::Outracks::Simulator::Protocol::MessageToClient*>(index2);
        ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), msg);
    }
}

// public void Dispose() [instance] :920
void OfflineSimulatorClient::Dispose()
{
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient> get_IncommingMessages() [instance] :912
::g::Outracks::Simulator::ConcurrentQueue* OfflineSimulatorClient::IncommingMessages()
{
    uStackFrame __("Outracks.Simulator.OfflineSimulatorClient", "get_IncommingMessages()");
    return _messagesToClient;
}

// public bool get_IsOnline() [instance] :927
bool OfflineSimulatorClient::IsOnline()
{
    uStackFrame __("Outracks.Simulator.OfflineSimulatorClient", "get_IsOnline()");
    return false;
}

// public void Send(Outracks.Simulator.Protocol.MessageFromClient message) [instance] :915
void OfflineSimulatorClient::Send(::g::Outracks::Simulator::Protocol::MessageFromClient* message)
{
    uStackFrame __("Outracks.Simulator.OfflineSimulatorClient", "Send(Outracks.Simulator.Protocol.MessageFromClient)");
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesFromClient), message);
}

// public OfflineSimulatorClient New(Outracks.Simulator.Protocol.MessageToClient[] initialMessages) [static] :904
OfflineSimulatorClient* OfflineSimulatorClient::New1(uArray* initialMessages)
{
    OfflineSimulatorClient* obj4 = (OfflineSimulatorClient*)uNew(OfflineSimulatorClient_typeof());
    obj4->ctor_(initialMessages);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno
// -------------------------------------------------------------------------

// public sealed class ProxyClient :42
// {
static void ProxyClient_build(uType* type)
{
    ::TYPES[111] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array()));
    ::TYPES[45] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[52] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[112] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(1, ::g::Uno::Net::IPEndPoint_typeof()->Array());
    ::TYPES[113] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array());
    ::TYPES[114] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[115] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(1, ::g::Uno::Net::IPEndPoint_typeof()->Array());
    ::TYPES[116] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array()));
    ::TYPES[117] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof()), ::g::Uno::Net::IPEndPoint_typeof()->Array());
    type->Reflection.SetFunctions(2,
        new uFunction("GetSimulatorEndpoint", NULL, (void*)ProxyClient__GetSimulatorEndpoint_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array()), 3, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()), ::g::Uno::String_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction(".ctor", NULL, (void*)ProxyClient__New1_fn, 0, true, ProxyClient_typeof(), 0));
}

uType* ProxyClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ProxyClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ProxyClient", options);
    type->fp_build_ = ProxyClient_build;
    type->fp_ctor_ = (void*)ProxyClient__New1_fn;
    return type;
}

// public generated ProxyClient() :42
void ProxyClient__ctor__fn(ProxyClient* __this)
{
    __this->ctor_();
}

// public static Outracks.Simulator.Task<Uno.Net.IPEndPoint[]> GetSimulatorEndpoint(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> proxyEndpoints, string project, Uno.Collections.IEnumerable<string> defines) :44
void ProxyClient__GetSimulatorEndpoint_fn(uObject* proxyEndpoints, uString* project, uObject* defines, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = ProxyClient::GetSimulatorEndpoint(proxyEndpoints, project, defines);
}

// public generated ProxyClient New() :42
void ProxyClient__New1_fn(ProxyClient** __retval)
{
    *__retval = ProxyClient::New1();
}

// private static Uno.Net.IPEndPoint[] OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) :56
void ProxyClient__OnNoResult_fn(uObject* exceptions, uArray** __retval)
{
    *__retval = ProxyClient::OnNoResult(exceptions);
}

// public generated ProxyClient() [instance] :42
void ProxyClient::ctor_()
{
}

// public static Outracks.Simulator.Task<Uno.Net.IPEndPoint[]> GetSimulatorEndpoint(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> proxyEndpoints, string project, Uno.Collections.IEnumerable<string> defines) [static] :44
::g::Outracks::Simulator::Task* ProxyClient::GetSimulatorEndpoint(uObject* proxyEndpoints, uString* project, uObject* defines)
{
    uStackFrame __("Outracks.Simulator.ProxyClient", "GetSimulatorEndpoint(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>,string,Uno.Collections.IEnumerable<string>)");
    ::g::Uno::Net::IPEndPoint* ret3;
    ::g::Uno::Collections::List* tasks = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[111/*Uno.Collections.List<Outracks.Simulator.Task<Uno.Net.IPEndPoint[]>>*/]);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(proxyEndpoints), ::TYPES[45/*Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Net::IPEndPoint* endpoint = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[52/*Uno.Collections.IEnumerator<Uno.Net.IPEndPoint>*/]), &ret3), ret3);
        ::g::Uno::Collections::List__Add_fn(uPtr(tasks), (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::Run(::TYPES[112/*Outracks.Simulator.Tasks.Run<Uno.Net.IPEndPoint[]>*/], uDelegate::New(::TYPES[113/*Uno.Func<Uno.Net.IPEndPoint[]>*/], (void*)::g::Outracks::Simulator::GetSimulatorEndpoint__Execute_fn, ::g::Outracks::Simulator::GetSimulatorEndpoint::New1(endpoint, project, (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[114/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], defines)))));
    }

    return (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::WaitForFirstResult(::TYPES[115/*Outracks.Simulator.Tasks.WaitForFirstResult<Uno.Net.IPEndPoint[]>*/], (uObject*)tasks, uDelegate::New(::TYPES[117/*Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, Uno.Net.IPEndPoint[]>*/], (void*)ProxyClient__OnNoResult_fn));
}

// public generated ProxyClient New() [static] :42
ProxyClient* ProxyClient::New1()
{
    ProxyClient* obj2 = (ProxyClient*)uNew(ProxyClient_typeof());
    obj2->ctor_();
    return obj2;
}

// private static Uno.Net.IPEndPoint[] OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) [static] :56
uArray* ProxyClient::OnNoResult(uObject* exceptions)
{
    uStackFrame __("Outracks.Simulator.ProxyClient", "OnNoResult(Uno.Collections.IEnumerable<Uno.Exception>)");
    U_THROW(::g::Outracks::Simulator::FailedToConnectToProxy::New4(exceptions));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class Reifying :545
// {
static void Reifying_build(uType* type)
{
    ::STRINGS[36] = uString::Const("Try again");
    ::TYPES[38] = uObject_typeof()->Array();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[39] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[49] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    type->SetFields(1,
        ::g::Outracks::Simulator::Protocol::Reify_typeof(), offsetof(::g::Outracks::Simulator::Reifying, _reify), 0);
}

::g::Outracks::Simulator::Connected_type* Reifying_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Reifying);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Connected_type);
    type = (::g::Outracks::Simulator::Connected_type*)uClassType::New("Outracks.Simulator.Reifying", options);
    type->SetBase(::g::Outracks::Simulator::Connected_typeof());
    type->fp_build_ = Reifying_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Reifying__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Reifying__OnFaulted_fn;
    return type;
}

// public Reifying(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.Reify reify) :549
void Reifying__ctor_2_fn(Reifying* __this, uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify)
{
    __this->ctor_2(client, reify);
}

// public Reifying New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.Reify reify) :549
void Reifying__New1_fn(uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify, Reifying** __retval)
{
    *__retval = Reifying::New1(client, reify);
}

// public override sealed Outracks.Simulator.State OnEnterState() :555
void Reifying__OnEnterState_fn(Reifying* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Reifying", "OnEnterState()");
    ::g::Outracks::Simulator::BytecodeCache::TrySave(__this->_reify);
    uPtr(::g::Outracks::Simulator::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Context::App());
    ::g::Outracks::Simulator::Runtime::VirtualMachine::Execute(uPtr(__this->_reify)->AppMutator, uArray::Init<uObject*>(::TYPES[38/*object[]*/], 1, (::g::Outracks::Simulator::FakeApp*)::g::Outracks::Simulator::Context::App()));
    ::g::Outracks::Simulator::UserAppState* userState = ::g::Outracks::Simulator::UserAppState::Save(::g::Outracks::Simulator::Context::App());
    return *__retval = ::g::Outracks::Simulator::Running::New1(__this->Client, userState, __this->_reify), void();
}

// protected override sealed Outracks.Simulator.State OnFaulted(Uno.Exception e) :567
void Reifying__OnFaulted_fn(Reifying* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Reifying", "OnFaulted(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[39/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[49/*Outracks.Simulator.DialogButton[]*/], 1, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[36/*"Try again"*/], ::g::Outracks::Simulator::ConnectingToProxy::New1()))), void();
}

// public Reifying(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.Reify reify) [instance] :549
void Reifying::ctor_2(uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify)
{
    uStackFrame __("Outracks.Simulator.Reifying", ".ctor(Outracks.Simulator.ISimulatorClient,Outracks.Simulator.Protocol.Reify)");
    ctor_1(client);
    _reify = reify;
}

// public Reifying New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.Reify reify) [static] :549
Reifying* Reifying::New1(uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify)
{
    Reifying* obj1 = (Reifying*)uNew(Reifying_typeof());
    obj1->ctor_2(client, reify);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class Running :573
// {
static void Running_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[50] = uString::Const("Restart");
    ::STRINGS[21] = uString::Const("N/A");
    ::STRINGS[51] = uString::Const("Density changed, reifying");
    ::STRINGS[52] = uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno");
    ::TYPES[16] = uObject_typeof();
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[39] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[49] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    ::TYPES[58] = ::g::Uno::Int_typeof();
    ::TYPES[118] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[67] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[77] = ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof();
    ::TYPES[59] = ::g::Fuse::Preview::ISelection_typeof();
    type->SetFields(1,
        ::g::Outracks::Simulator::Protocol::Reify_typeof(), offsetof(::g::Outracks::Simulator::Running, _runningReify), 0,
        ::g::Outracks::Simulator::UserAppState_typeof(), offsetof(::g::Outracks::Simulator::Running, _userApp), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Outracks::Simulator::Running, _zoomWhenRooted), 0);
}

::g::Outracks::Simulator::Connected_type* Running_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Running);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Connected_type);
    type = (::g::Outracks::Simulator::Connected_type*)uClassType::New("Outracks.Simulator.Running", options);
    type->SetBase(::g::Outracks::Simulator::Connected_typeof());
    type->fp_build_ = Running_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Running__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Running__OnFaulted_fn;
    type->fp_OnLeaveState = (void(*)(::g::Outracks::Simulator::State*))Running__OnLeaveState_fn;
    type->fp_OnPointerPressed = (void(*)(::g::Outracks::Simulator::State*, ::g::Fuse::Input::PointerPressedArgs*, ::g::Outracks::Simulator::State**))Running__OnPointerPressed_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Running__OnUpdate_fn;
    return type;
}

// public Running(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.UserAppState userApp, Outracks.Simulator.Protocol.Reify runningReify) :580
void Running__ctor_2_fn(Running* __this, uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify)
{
    __this->ctor_2(client, userApp, runningReify);
}

// private static string GetTag(Fuse.Node node) :647
void Running__GetTag_fn(::g::Fuse::Node* node, uString** __retval)
{
    *__retval = Running::GetTag(node);
}

// public Running New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.UserAppState userApp, Outracks.Simulator.Protocol.Reify runningReify) :580
void Running__New1_fn(uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify, Running** __retval)
{
    *__retval = Running::New1(client, userApp, runningReify);
}

// public override sealed Outracks.Simulator.State OnEnterState() :590
void Running__OnEnterState_fn(Running* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Running", "OnEnterState()");
    uPtr(__this->_userApp)->ApplyTo(::g::Outracks::Simulator::Context::App());
    __this->_zoomWhenRooted = Running::QueryDensity();
    return *__retval = __this, void();
}

// protected override sealed Outracks.Simulator.State OnFaulted(Uno.Exception e) :614
void Running__OnFaulted_fn(Running* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Running", "OnFaulted(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[39/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[49/*Outracks.Simulator.DialogButton[]*/], 1, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[50/*"Restart"*/], ::g::Outracks::Simulator::ConnectingToProxy::New1()))), void();
}

// public override sealed void OnLeaveState() :597
void Running__OnLeaveState_fn(Running* __this)
{
    uStackFrame __("Outracks.Simulator.Running", "OnLeaveState()");
    __this->_userApp = ::g::Outracks::Simulator::UserAppState::Save(::g::Outracks::Simulator::Context::App());
}

// public override sealed Outracks.Simulator.State OnPointerPressed(Fuse.Input.PointerPressedArgs args) :625
void Running__OnPointerPressed_fn(Running* __this, ::g::Fuse::Input::PointerPressedArgs* args, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Running", "OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    ::g::Fuse::Visual* ret2;

    if (::g::Outracks::Simulator::Context::InputMode() != 1)
        return *__retval = __this, void();

    if (uPtr(uPtr(__this->_userApp)->Children)->Length() == 0)
        return *__retval = __this, void();

    ::g::Fuse::Visual* root = uPtr(uPtr(uPtr(__this->_userApp)->Children)->Strong< ::g::Fuse::Node*>(0))->Parent();

    if (root == NULL)
        return *__retval = __this, void();

    uObject* nodes = ::g::Outracks::Simulator::EnumerableHitTestExtension::HitTest2(root, uPtr(args)->WindowPoint());
    uString* selectedTag = (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(nodes), ::TYPES[118/*Uno.Collections.ICollection<Fuse.Visual>*/])) >= 1) ? (uString*)Running::GetTag((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nodes), ::TYPES[67/*Uno.Collections.IList<Fuse.Visual>*/]), uCRef<int>(0), &ret2), ret2)) : ::STRINGS[21/*"N/A"*/];
    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(__this->Client), ::TYPES[39/*Outracks.Simulator.ISimulatorClient*/]), ::g::Outracks::Simulator::Protocol::SetSelection::New1(selectedTag));
    ::g::Fuse::Preview::SelectionManager::SetSelection((uObject*)::g::Outracks::Simulator::Runtime::Selection::New1(selectedTag, NULL));
    args->IsHandled(true);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnUpdate() :602
void Running__OnUpdate_fn(Running* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Running", "OnUpdate()");
    ::g::Outracks::Simulator::State* ret3;
    float currentZoom = Running::QueryDensity();

    if (currentZoom != __this->_zoomWhenRooted)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[51/*"Density cha...*/], 1, ::STRINGS[52/*"/usr/local/...*/], 607);
        return *__retval = ::g::Outracks::Simulator::Reifying::New1(__this->Client, __this->_runningReify), void();
    }

    return *__retval = (::g::Outracks::Simulator::Connected__OnUpdate_fn(__this, &ret3), ret3), void();
}

// private static float QueryDensity() :619
void Running__QueryDensity_fn(float* __retval)
{
    *__retval = Running::QueryDensity();
}

// public Running(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.UserAppState userApp, Outracks.Simulator.Protocol.Reify runningReify) [instance] :580
void Running::ctor_2(uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify)
{
    uStackFrame __("Outracks.Simulator.Running", ".ctor(Outracks.Simulator.ISimulatorClient,Outracks.Simulator.UserAppState,Outracks.Simulator.Protocol.Reify)");
    ctor_1(client);
    _userApp = userApp;
    _runningReify = runningReify;
}

// private static string GetTag(Fuse.Node node) [static] :647
uString* Running::GetTag(::g::Fuse::Node* node)
{
    uStackFrame __("Outracks.Simulator.Running", "GetTag(Fuse.Node)");

    if (node == NULL)
        return ::STRINGS[0/*""*/];

    uString* tag = ::g::Outracks::Simulator::Runtime::ObjectTagRegistry::GetTagHash(node);
    return ::g::Uno::String::op_Equality(tag, NULL) ? (uString*)Running::GetTag(uPtr(node)->Parent()) : tag;
}

// public Running New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.UserAppState userApp, Outracks.Simulator.Protocol.Reify runningReify) [static] :580
Running* Running::New1(uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify)
{
    Running* obj1 = (Running*)uNew(Running_typeof());
    obj1->ctor_2(client, userApp, runningReify);
    return obj1;
}

// private static float QueryDensity() [static] :619
float Running::QueryDensity()
{
    uStackFrame __("Outracks.Simulator.Running", "QueryDensity()");
    ::Xli::Window* wnd = ::g::Uno::Runtime::Implementation::Internal::WindowHelpers::GetPlatformWindowHandle(uPtr(::g::Fuse::AppBase::Current1())->Window());
    return ::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetDensity(wnd);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// internal static class Serialization :557
// {
// static Serialization() :557
static void Serialization__cctor__fn(uType* __type)
{
    Serialization::ReadString_ = uDelegate::New(::TYPES[119/*Uno.Func<Uno.IO.BinaryReader, string>*/], (void*)Serialization___ReadString_fn);
}

static void Serialization_build(uType* type)
{
    ::TYPES[119] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Outracks::Simulator::Serialization::ReadString_, uFieldFlagsStatic);
}

uClassType* Serialization_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Serialization", options);
    type->fp_build_ = Serialization_build;
    type->fp_cctor_ = Serialization__cctor__fn;
    return type;
}

// public static string _ReadString(Uno.IO.BinaryReader reader) :561
void Serialization___ReadString_fn(::g::Uno::IO::BinaryReader* reader, uString** __retval)
{
    *__retval = Serialization::_ReadString(reader);
}

uSStrong<uDelegate*> Serialization::ReadString_;

// public static string _ReadString(Uno.IO.BinaryReader reader) [static] :561
uString* Serialization::_ReadString(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Serialization", "_ReadString(Uno.IO.BinaryReader)");
    Serialization_typeof()->Init();
    return uPtr(reader)->ReadString();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal class ShowingModalDialog :1523
// {
static void ShowingModalDialog_build(uType* type)
{
    ::STRINGS[52] = uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno");
    ::TYPES[120] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[121] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[122] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(1, ::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[123] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[62] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[124] = ::g::Outracks::Simulator::ForgetAction_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Gestures::ClickedArgs_typeof());
    ::TYPES[12] = ::g::Fuse::Visual_typeof();
    ::TYPES[125] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[107] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[126] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::DialogButton_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ShowingModalDialog, _body), 0,
        ::g::Outracks::Simulator::DialogButton_typeof()->Array(), offsetof(::g::Outracks::Simulator::ShowingModalDialog, _buttons), 0,
        ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::DialogButton_typeof()), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ShowingModalDialog, _details), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ShowingModalDialog, _header), 0);
}

::g::Outracks::Simulator::State_type* ShowingModalDialog_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ShowingModalDialog);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.ShowingModalDialog", options);
    type->SetBase(::g::Outracks::Simulator::State_typeof());
    type->fp_build_ = ShowingModalDialog_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ShowingModalDialog__OnEnterState_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))ShowingModalDialog__OnException_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ShowingModalDialog__OnUpdate_fn;
    return type;
}

// public ShowingModalDialog(string header, string body, string details, Outracks.Simulator.DialogButton[] buttons) :1532
void ShowingModalDialog__ctor_1_fn(ShowingModalDialog* __this, uString* header, uString* body, uString* details, uArray* buttons)
{
    __this->ctor_1(header, body, details, buttons);
}

// public ShowingModalDialog New(string header, string body, string details, Outracks.Simulator.DialogButton[] buttons) :1532
void ShowingModalDialog__New1_fn(uString* header, uString* body, uString* details, uArray* buttons, ShowingModalDialog** __retval)
{
    *__retval = ShowingModalDialog::New1(header, body, details, buttons);
}

// private void OnButtonClicked(Outracks.Simulator.DialogButton button) :1565
void ShowingModalDialog__OnButtonClicked_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::DialogButton* button)
{
    __this->OnButtonClicked(button);
}

// public override sealed Outracks.Simulator.State OnEnterState() :1544
void ShowingModalDialog__OnEnterState_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ShowingModalDialog", "OnEnterState()");
    uArray* array1;
    int index2;
    int length3;
    ::g::Fuse::Controls::Button* collection4;
    uDelegate* ret8;
    ::g::Uno::Collections::List* buttons = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[121/*Uno.Collections.List<Fuse.Controls.Control>*/]);

    for (array1 = __this->_buttons, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Outracks::Simulator::DialogButton* button = uPtr(array1)->Strong< ::g::Outracks::Simulator::DialogButton*>(index2);
        collection4 = ::g::Fuse::Controls::Button::New5();
        uString* ind5 = uPtr(button)->Text;
        uPtr(collection4)->Text(ind5);
        ;
        ::g::Fuse::Controls::Button* node = collection4;
        uDelegate* action = (::g::Outracks::Simulator::Closure__Apply_fn(::TYPES[122/*Outracks.Simulator.Closure.Apply<Outracks.Simulator.DialogButton>*/], uDelegate::New(::TYPES[123/*Uno.Action<Outracks.Simulator.DialogButton>*/], (void*)ShowingModalDialog__OnButtonClicked_fn, __this), button, &ret8), ret8);
        uDelegate* handler = uDelegate::New(::TYPES[62/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Outracks::Simulator::ForgetAction__Execute_fn, (::g::Outracks::Simulator::ForgetAction*)::g::Outracks::Simulator::ForgetAction::New1(::TYPES[124/*Outracks.Simulator.ForgetAction<object, Fuse.Gestures.ClickedArgs>*/], action));
        ::g::Fuse::Gestures::Clicked::AddHandler(node, handler);
        ::g::Uno::Collections::List__Add_fn(uPtr(buttons), node);
    }

    ::g::Outracks::Simulator::ModalDialog::Show(::g::Outracks::Simulator::Context::App(), __this->_header, __this->_body, __this->_details, (uObject*)buttons);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnException(Uno.Exception e) :1578
void ShowingModalDialog__OnException_fn(ShowingModalDialog* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ShowingModalDialog", "OnException(Uno.Exception)");
    ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->Message(), 1, ::STRINGS[52/*"/usr/local/...*/], 1580);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnUpdate() :1570
void ShowingModalDialog__OnUpdate_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ShowingModalDialog", "OnUpdate()");

    if (__this->_clickedButton().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::DialogButton*> > >().HasValue(::TYPES[126/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.DialogButton>*/]))
        return *__retval = uPtr(__this->_clickedButton().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::DialogButton*> > >().Value(::TYPES[126/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.DialogButton>*/]))->Destination, void();

    return *__retval = __this, void();
}

// public ShowingModalDialog(string header, string body, string details, Outracks.Simulator.DialogButton[] buttons) [instance] :1532
void ShowingModalDialog::ctor_1(uString* header, uString* body, uString* details, uArray* buttons)
{
    uStackFrame __("Outracks.Simulator.ShowingModalDialog", ".ctor(string,string,string,Outracks.Simulator.DialogButton[])");
    ctor_();
    _header = header;
    _body = body;
    _details = details;
    _buttons = buttons;
}

// private void OnButtonClicked(Outracks.Simulator.DialogButton button) [instance] :1565
void ShowingModalDialog::OnButtonClicked(::g::Outracks::Simulator::DialogButton* button)
{
    uStackFrame __("Outracks.Simulator.ShowingModalDialog", "OnButtonClicked(Outracks.Simulator.DialogButton)");
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::DialogButton*> > ret7;
    _clickedButton().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::DialogButton*> > >() = (::g::Outracks::Simulator::Bytecode::Optional__Some_fn(::TYPES[120/*Outracks.Simulator.Bytecode.Optional.Some<Outracks.Simulator.DialogButton>*/], button, &ret7), ret7);
}

// public ShowingModalDialog New(string header, string body, string details, Outracks.Simulator.DialogButton[] buttons) [static] :1532
ShowingModalDialog* ShowingModalDialog::New1(uString* header, uString* body, uString* details, uArray* buttons)
{
    ShowingModalDialog* obj6 = (ShowingModalDialog*)uNew(ShowingModalDialog_typeof());
    obj6->ctor_1(header, body, details, buttons);
    return obj6;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal abstract class ShowingPrompt :1452
// {
static void ShowingPrompt_build(uType* type)
{
    ::STRINGS[53] = uString::Const("Ok");
    ::STRINGS[54] = uString::Const("Cancel");
    ::STRINGS[55] = uString::Const("# ");
    ::STRINGS[52] = uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno");
    ::TYPES[12] = ::g::Fuse::Visual_typeof();
    ::TYPES[62] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[127] = ::g::Fuse::Controls::TextInput_typeof();
    ::TYPES[125] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[107] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[128] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[129] = ::g::Fuse::Controls::Control_typeof()->Array();
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ShowingPrompt, _body), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::ShowingPrompt, _cancelClicked), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ShowingPrompt, _header), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::Outracks::Simulator::ShowingPrompt, _input), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::ShowingPrompt, _okClicked), 0);
}

ShowingPrompt_type* ShowingPrompt_typeof()
{
    static uSStrong<ShowingPrompt_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ShowingPrompt);
    options.TypeSize = sizeof(ShowingPrompt_type);
    type = (ShowingPrompt_type*)uClassType::New("Outracks.Simulator.ShowingPrompt", options);
    type->SetBase(::g::Outracks::Simulator::State_typeof());
    type->fp_build_ = ShowingPrompt_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ShowingPrompt__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ShowingPrompt__OnUpdate_fn;
    return type;
}

// protected ShowingPrompt(string header, string body) :1461
void ShowingPrompt__ctor_1_fn(ShowingPrompt* __this, uString* header, uString* body)
{
    __this->ctor_1(header, body);
}

// private void OnCancelClicked(object s, Fuse.Gestures.ClickedArgs args) :1502
void ShowingPrompt__OnCancelClicked_fn(ShowingPrompt* __this, uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    __this->OnCancelClicked(s, args);
}

// public override sealed Outracks.Simulator.State OnEnterState() :1469
void ShowingPrompt__OnEnterState_fn(ShowingPrompt* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ShowingPrompt", "OnEnterState()");
    ::g::Fuse::Controls::Button* collection1;
    ::g::Fuse::Controls::Button* collection2;
    collection1 = ::g::Fuse::Controls::Button::New5();
    ::g::Uno::Float4 ind3 = ::g::Uno::Float4__New1(20.0f);
    uPtr(collection1)->Margin(ind3);
    ;
    uPtr(collection1)->Text(::STRINGS[53/*"Ok"*/]);
    ::STRINGS[53/*"Ok"*/];
    ::g::Fuse::Controls::Button* ok = collection1;
    ::g::Fuse::Gestures::Clicked::AddHandler(ok, uDelegate::New(::TYPES[62/*Fuse.Gestures.ClickedHandler*/], (void*)ShowingPrompt__OnOkClicked_fn, __this));
    collection2 = ::g::Fuse::Controls::Button::New5();
    ::g::Uno::Float4 ind4 = ::g::Uno::Float4__New1(20.0f);
    uPtr(collection2)->Margin(ind4);
    ;
    uPtr(collection2)->Text(::STRINGS[54/*"Cancel"*/]);
    ::STRINGS[54/*"Cancel"*/];
    ::g::Fuse::Controls::Button* cancel = collection2;
    ::g::Fuse::Gestures::Clicked::AddHandler(cancel, uDelegate::New(::TYPES[62/*Fuse.Gestures.ClickedHandler*/], (void*)ShowingPrompt__OnCancelClicked_fn, __this));
    __this->_input = ::g::Fuse::Controls::TextBox::New4();
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[55/*"# "*/], __this->_header), 1, ::STRINGS[52/*"/usr/local/...*/], 1490);
    ::g::Uno::Diagnostics::Debug::Log5(__this->_body, 1, ::STRINGS[52/*"/usr/local/...*/], 1491);
    ::g::Outracks::Simulator::ModalDialog::ShowPrompt(::g::Outracks::Simulator::Context::App(), __this->_header, __this->_body, __this->_input, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[128/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.Control>*/], uArray::Init< ::g::Fuse::Controls::Control*>(::TYPES[129/*Fuse.Controls.Control[]*/], 2, cancel, ok))));
    return *__retval = __this, void();
}

// private void OnOkClicked(object s, Fuse.Gestures.ClickedArgs args) :1497
void ShowingPrompt__OnOkClicked_fn(ShowingPrompt* __this, uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    __this->OnOkClicked(s, args);
}

// public override sealed Outracks.Simulator.State OnUpdate() :1511
void ShowingPrompt__OnUpdate_fn(ShowingPrompt* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.ShowingPrompt", "OnUpdate()");

    if (__this->_cancelClicked)
        return *__retval = __this->OnCancel(), void();

    if (__this->_okClicked)
        return *__retval = __this->OnOk(uPtr(__this->_input)->Value()), void();

    return *__retval = __this, void();
}

// protected ShowingPrompt(string header, string body) [instance] :1461
void ShowingPrompt::ctor_1(uString* header, uString* body)
{
    uStackFrame __("Outracks.Simulator.ShowingPrompt", ".ctor(string,string)");
    ctor_();
    _header = header;
    _body = body;
}

// private void OnCancelClicked(object s, Fuse.Gestures.ClickedArgs args) [instance] :1502
void ShowingPrompt::OnCancelClicked(uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    uStackFrame __("Outracks.Simulator.ShowingPrompt", "OnCancelClicked(object,Fuse.Gestures.ClickedArgs)");
    _cancelClicked = true;
}

// private void OnOkClicked(object s, Fuse.Gestures.ClickedArgs args) [instance] :1497
void ShowingPrompt::OnOkClicked(uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    uStackFrame __("Outracks.Simulator.ShowingPrompt", "OnOkClicked(object,Fuse.Gestures.ClickedArgs)");
    _okClicked = true;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class SimulatorClient :988
// {
static void SimulatorClient_build(uType* type)
{
    ::STRINGS[52] = uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno");
    ::TYPES[109] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageFromClient_typeof());
    ::TYPES[110] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof());
    ::TYPES[86] = ::g::Uno::IO::Stream_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[18] = ::g::Uno::Exception_typeof();
    ::TYPES[91] = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof();
    type->SetInterfaces(
        ::g::Outracks::Simulator::ISimulatorClient_typeof(), offsetof(SimulatorClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SimulatorClient_type, interface1));
    type->SetFields(0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageFromClient_typeof()), offsetof(::g::Outracks::Simulator::SimulatorClient, _messagesFromClient), 0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof()), offsetof(::g::Outracks::Simulator::SimulatorClient, _messagesToClient), 0,
        ::g::Uno::IO::BinaryReader_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _reader), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _readWorker), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _running), 0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _socket), 0,
        ::g::Uno::Net::Sockets::NetworkStream_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _stream), 0,
        ::g::Uno::IO::BinaryWriter_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _writer), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _writeWorker), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Dispose", NULL, (void*)SimulatorClient__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IncommingMessages", NULL, (void*)SimulatorClient__get_IncommingMessages_fn, 0, false, ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof()), 0),
        new uFunction("get_IsOnline", NULL, (void*)SimulatorClient__get_IsOnline_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)SimulatorClient__New1_fn, 0, true, SimulatorClient_typeof(), 1, ::g::Uno::Net::Sockets::Socket_typeof()),
        new uFunction("Send", NULL, (void*)SimulatorClient__Send_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof()));
}

SimulatorClient_type* SimulatorClient_typeof()
{
    static uSStrong<SimulatorClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SimulatorClient);
    options.TypeSize = sizeof(SimulatorClient_type);
    type = (SimulatorClient_type*)uClassType::New("Outracks.Simulator.SimulatorClient", options);
    type->fp_build_ = SimulatorClient_build;
    type->interface0.fp_Send = (void(*)(uObject*, ::g::Outracks::Simulator::Protocol::MessageFromClient*))SimulatorClient__Send_fn;
    type->interface0.fp_get_IncommingMessages = (void(*)(uObject*, ::g::Outracks::Simulator::ConcurrentQueue**))SimulatorClient__get_IncommingMessages_fn;
    type->interface0.fp_get_IsOnline = (void(*)(uObject*, bool*))SimulatorClient__get_IsOnline_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SimulatorClient__Dispose_fn;
    return type;
}

// public SimulatorClient(Uno.Net.Sockets.Socket socket) :1009
void SimulatorClient__ctor__fn(SimulatorClient* __this, ::g::Uno::Net::Sockets::Socket* socket)
{
    __this->ctor_(socket);
}

// public void Dispose() :1073
void SimulatorClient__Dispose_fn(SimulatorClient* __this)
{
    __this->Dispose();
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient> get_IncommingMessages() :1001
void SimulatorClient__get_IncommingMessages_fn(SimulatorClient* __this, ::g::Outracks::Simulator::ConcurrentQueue** __retval)
{
    *__retval = __this->IncommingMessages();
}

// public bool get_IsOnline() :1094
void SimulatorClient__get_IsOnline_fn(SimulatorClient* __this, bool* __retval)
{
    *__retval = __this->IsOnline();
}

// public SimulatorClient New(Uno.Net.Sockets.Socket socket) :1009
void SimulatorClient__New1_fn(::g::Uno::Net::Sockets::Socket* socket, SimulatorClient** __retval)
{
    *__retval = SimulatorClient::New1(socket);
}

// private void ReadLoop() :1035
void SimulatorClient__ReadLoop_fn(SimulatorClient* __this)
{
    __this->ReadLoop();
}

// public void Send(Outracks.Simulator.Protocol.MessageFromClient message) :1004
void SimulatorClient__Send_fn(SimulatorClient* __this, ::g::Outracks::Simulator::Protocol::MessageFromClient* message)
{
    __this->Send(message);
}

// private void WriteLoop() :1053
void SimulatorClient__WriteLoop_fn(SimulatorClient* __this)
{
    __this->WriteLoop();
}

// public SimulatorClient(Uno.Net.Sockets.Socket socket) [instance] :1009
void SimulatorClient::ctor_(::g::Uno::Net::Sockets::Socket* socket)
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", ".ctor(Uno.Net.Sockets.Socket)");
    _messagesFromClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[109/*Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageFromClient>*/]));
    _messagesToClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[110/*Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient>*/]));
    _running = true;
    _socket = socket;
    _stream = ::g::Uno::Net::Sockets::NetworkStream::New1(_socket);
    _writer = ::g::Uno::IO::BinaryWriter::New1(_stream);
    _reader = ::g::Uno::IO::BinaryReader::New1(_stream);
    _readWorker = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)SimulatorClient__ReadLoop_fn, this));
    _writeWorker = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)SimulatorClient__WriteLoop_fn, this));
    uPtr(_readWorker)->Start();
    uPtr(_writeWorker)->Start();
}

// public void Dispose() [instance] :1073
void SimulatorClient::Dispose()
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", "Dispose()");
    _running = false;
    uPtr(_readWorker)->Join();
    uPtr(_writeWorker)->Join();
    uPtr(_stream)->Dispose();

    try
    {
        uPtr(_socket)->Shutdown(2);
        uPtr(_socket)->Close();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->Message(), 1, ::STRINGS[52/*"/usr/local/...*/], 1088);
    }
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient> get_IncommingMessages() [instance] :1001
::g::Outracks::Simulator::ConcurrentQueue* SimulatorClient::IncommingMessages()
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", "get_IncommingMessages()");
    return _messagesToClient;
}

// public bool get_IsOnline() [instance] :1094
bool SimulatorClient::IsOnline()
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", "get_IsOnline()");
    return true;
}

// private void ReadLoop() [instance] :1035
void SimulatorClient::ReadLoop()
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", "ReadLoop()");

    try
    {
        while (_running)
        {
            while (uPtr(_socket)->Poll(0, 0))
                ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), ::g::Outracks::Simulator::Protocol::MessageToClient::Read(_reader));

            ::g::Uno::Threading::Thread::Sleep(10);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), ::g::Outracks::Simulator::Protocol::Error::New1(::g::Outracks::Simulator::Protocol::ExceptionInfo::Capture(e)));
    }
}

// public void Send(Outracks.Simulator.Protocol.MessageFromClient message) [instance] :1004
void SimulatorClient::Send(::g::Outracks::Simulator::Protocol::MessageFromClient* message)
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", "Send(Outracks.Simulator.Protocol.MessageFromClient)");
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesFromClient), message);
}

// private void WriteLoop() [instance] :1053
void SimulatorClient::WriteLoop()
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", "WriteLoop()");
    bool ret2;

    try
    {
        while (_running)
        {
            ::g::Outracks::Simulator::Protocol::MessageFromClient* message;

            while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(_messagesFromClient), (void**)(&message), &ret2), ret2))
                ::g::Outracks::Simulator::Protocol::MessageFromClient::Write(message, _writer);

            ::g::Uno::Threading::Thread::Sleep(10);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), ::g::Outracks::Simulator::Protocol::Error::New1(::g::Outracks::Simulator::Protocol::ExceptionInfo::Capture(e)));
        _running = false;
    }
}

// public SimulatorClient New(Uno.Net.Sockets.Socket socket) [static] :1009
SimulatorClient* SimulatorClient::New1(::g::Uno::Net::Sockets::Socket* socket)
{
    SimulatorClient* obj1 = (SimulatorClient*)uNew(SimulatorClient_typeof());
    obj1->ctor_(socket);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal abstract class State :267
// {
static void State_build(uType* type)
{
}

State_type* State_typeof()
{
    static uSStrong<State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(State);
    options.TypeSize = sizeof(State_type);
    type = (State_type*)uClassType::New("Outracks.Simulator.State", options);
    type->fp_build_ = State_build;
    type->fp_OnEnterState = State__OnEnterState_fn;
    type->fp_OnLeaveState = State__OnLeaveState_fn;
    type->fp_OnPointerPressed = State__OnPointerPressed_fn;
    type->fp_OnUpdate = State__OnUpdate_fn;
    return type;
}

// protected generated State() :267
void State__ctor__fn(State* __this)
{
    __this->ctor_();
}

// public virtual Outracks.Simulator.State OnEnterState() :269
void State__OnEnterState_fn(State* __this, State** __retval)
{
    uStackFrame __("Outracks.Simulator.State", "OnEnterState()");
    return *__retval = __this, void();
}

// public virtual void OnLeaveState() :274
void State__OnLeaveState_fn(State* __this)
{
}

// public virtual Outracks.Simulator.State OnPointerPressed(Fuse.Input.PointerPressedArgs args) :283
void State__OnPointerPressed_fn(State* __this, ::g::Fuse::Input::PointerPressedArgs* args, State** __retval)
{
    uStackFrame __("Outracks.Simulator.State", "OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    return *__retval = __this, void();
}

// public virtual Outracks.Simulator.State OnUpdate() :278
void State__OnUpdate_fn(State* __this, State** __retval)
{
    uStackFrame __("Outracks.Simulator.State", "OnUpdate()");
    return *__retval = __this, void();
}

// protected generated State() [instance] :267
void State::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Common/$.uno
// --------------------------------------------------------------------------------

// public static class StringSplitting :452
// {
static void StringSplitting_build(uType* type)
{
    ::TYPES[47] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[130] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[96] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[103] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->Reflection.SetFunctions(8,
        new uFunction("AfterFirst", NULL, (void*)StringSplitting__AfterFirst_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("AfterLast", NULL, (void*)StringSplitting__AfterLast_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("BeforeFirst", NULL, (void*)StringSplitting__BeforeFirst_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("BeforeLast", NULL, (void*)StringSplitting__BeforeLast_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Join", NULL, (void*)StringSplitting__Join_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof()), ::g::Uno::String_typeof()),
        new uFunction("JoinToString`1", type, (void*)StringSplitting__JoinToString_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), ::g::Uno::String_typeof()),
        new uFunction("OrdinalIndexOf", NULL, (void*)StringSplitting__OrdinalIndexOf_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("OrdinalLastIndexOf", NULL, (void*)StringSplitting__OrdinalLastIndexOf_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uClassType* StringSplitting_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.StringSplitting", options);
    type->fp_build_ = StringSplitting_build;
    return type;
}

// public static string AfterFirst(string s, string seperator) :489
void StringSplitting__AfterFirst_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::AfterFirst(s, seperator);
}

// public static string AfterLast(string s, string seperator) :472
void StringSplitting__AfterLast_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::AfterLast(s, seperator);
}

// public static string BeforeFirst(string s, string seperator) :497
void StringSplitting__BeforeFirst_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::BeforeFirst(s, seperator);
}

// public static string BeforeLast(string s, string seperator) :480
void StringSplitting__BeforeLast_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::BeforeLast(s, seperator);
}

// public static string Join(Uno.Collections.IEnumerable<string> si, string separator) :523
void StringSplitting__Join_fn(uObject* si, uString* separator, uString** __retval)
{
    *__retval = StringSplitting::Join(si, separator);
}

// public static string JoinToString<T>(Uno.Collections.IEnumerable<T> objects, string separator) :506
void StringSplitting__JoinToString_fn(uType* __type, uObject* objects, uString* separator, uString** __retval)
{
    *__retval = StringSplitting::JoinToString(__type, objects, separator);
}

// public static int OrdinalIndexOf(string str, string seperator) :467
void StringSplitting__OrdinalIndexOf_fn(uString* str, uString* seperator, int* __retval)
{
    *__retval = StringSplitting::OrdinalIndexOf(str, seperator);
}

// public static int OrdinalLastIndexOf(string str, string seperator) :454
void StringSplitting__OrdinalLastIndexOf_fn(uString* str, uString* seperator, int* __retval)
{
    *__retval = StringSplitting::OrdinalLastIndexOf(str, seperator);
}

// public static string AfterFirst(string s, string seperator) [static] :489
uString* StringSplitting::AfterFirst(uString* s, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "AfterFirst(string,string)");
    int index = ::g::Uno::String::IndexOf1(uPtr(s), seperator, 0);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring(s, index + uPtr(seperator)->Length());
}

// public static string AfterLast(string s, string seperator) [static] :472
uString* StringSplitting::AfterLast(uString* s, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "AfterLast(string,string)");
    int index = StringSplitting::OrdinalLastIndexOf(s, seperator);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring(uPtr(s), index + uPtr(seperator)->Length());
}

// public static string BeforeFirst(string s, string seperator) [static] :497
uString* StringSplitting::BeforeFirst(uString* s, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "BeforeFirst(string,string)");
    int index = ::g::Uno::String::IndexOf1(uPtr(s), seperator, 0);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring1(s, 0, index);
}

// public static string BeforeLast(string s, string seperator) [static] :480
uString* StringSplitting::BeforeLast(uString* s, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "BeforeLast(string,string)");
    int index = StringSplitting::OrdinalLastIndexOf(s, seperator);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring1(uPtr(s), 0, index);
}

// public static string Join(Uno.Collections.IEnumerable<string> si, string separator) [static] :523
uString* StringSplitting::Join(uObject* si, uString* separator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "Join(Uno.Collections.IEnumerable<string>,string)");
    uString* ret2;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    bool isFirst = true;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(si), ::TYPES[47/*Uno.Collections.IEnumerable<string>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        uString* part = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[130/*Uno.Collections.IEnumerator<string>*/]), &ret2), ret2);

        if (isFirst)
            isFirst = false;
        else
            uPtr(sb)->Append2(separator);

        sb->Append2(part);
    }

    return sb->ToString();
}

// public static string JoinToString<T>(Uno.Collections.IEnumerable<T> objects, string separator) [static] :506
uString* StringSplitting::JoinToString(uType* __type, uObject* objects, uString* separator)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[96/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
        ::TYPES[103/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Outracks.Simulator.StringSplitting", "JoinToString`1(Uno.Collections.IEnumerable<T>,string)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT obj(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    bool isFirst = true;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(objects), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret3), ret3);

        if (isFirst)
            isFirst = false;
        else
            uPtr(sb)->Append2(separator);

        sb->Append2(::g::Uno::Object::ToString(uBoxPtr(__types[0], obj, U_ALLOCA(__types[0]->ObjectSize))));
    }

    return sb->ToString();
}

// public static int OrdinalIndexOf(string str, string seperator) [static] :467
int StringSplitting::OrdinalIndexOf(uString* str, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "OrdinalIndexOf(string,string)");
    return ::g::Uno::String::IndexOf1(uPtr(str), seperator, 0);
}

// public static int OrdinalLastIndexOf(string str, string seperator) [static] :454
int StringSplitting::OrdinalLastIndexOf(uString* str, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "OrdinalLastIndexOf(string,string)");

    for (int i = uPtr(str)->Length() - uPtr(seperator)->Length(); (i--) > 0; )
    {
        int j = 0;

        while ((j < uPtr(seperator)->Length()) && (uPtr(str)->Item(i + j) == uPtr(seperator)->Item(j)))
            j++;

        if (j == uPtr(seperator)->Length())
            return i;
    }

    return -1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Concurrency/$.uno
// -------------------------------------------------------------------------------------

// public sealed class Task<T> :57
// {
static void Task_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Action_typeof(), offsetof(::g::Outracks::Simulator::Task, _wait), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Outracks::Simulator::Task, Mutex), 0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Outracks::Simulator::Task, _Exception), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Task, _IsCompleted), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Task, _IsFaulted), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Exception", NULL, (void*)Task__get_Exception_fn, 0, false, ::g::Uno::Exception_typeof(), 0),
        new uFunction("get_IsCompleted", NULL, (void*)Task__get_IsCompleted_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsFaulted", NULL, (void*)Task__get_IsFaulted_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Result", NULL, (void*)Task__get_Result_fn, 0, false, type->T(0), 0));
}

uType* Task_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Task);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Task`1", options);
    type->fp_build_ = Task_build;
    return type;
}

// internal Task(Uno.Action wait) :63
void Task__ctor__fn(Task* __this, uDelegate* wait)
{
    __this->ctor_(wait);
}

// public generated Uno.Exception get_Exception() :72
void Task__get_Exception_fn(Task* __this, ::g::Uno::Exception** __retval)
{
    *__retval = __this->Exception();
}

// internal generated void set_Exception(Uno.Exception value) :72
void Task__set_Exception_fn(Task* __this, ::g::Uno::Exception* value)
{
    __this->Exception(value);
}

// public generated bool get_IsCompleted() :68
void Task__get_IsCompleted_fn(Task* __this, bool* __retval)
{
    *__retval = __this->IsCompleted();
}

// internal generated void set_IsCompleted(bool value) :68
void Task__set_IsCompleted_fn(Task* __this, bool* value)
{
    __this->IsCompleted(*value);
}

// public generated bool get_IsFaulted() :70
void Task__get_IsFaulted_fn(Task* __this, bool* __retval)
{
    *__retval = __this->IsFaulted();
}

// internal generated void set_IsFaulted(bool value) :70
void Task__set_IsFaulted_fn(Task* __this, bool* value)
{
    __this->IsFaulted(*value);
}

// internal Task New(Uno.Action wait) :63
void Task__New1_fn(uType* __type, uDelegate* wait, Task** __retval)
{
    *__retval = Task::New1(__type, wait);
}

// public T get_Result() :77
void Task__get_Result_fn(Task* __this, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.Task`1", "get_Result()");
    uPtr(__this->_wait)->InvokeVoid();

    if (__this->IsFaulted())
        U_THROW(__this->Exception());

    return __retval.Store(__this->_result()), void();
}

// internal void set_Result(T value) :86
void Task__set_Result_fn(Task* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Outracks.Simulator.Task`1", "set_Result(T)");
    __this->_result() = value;
}

// internal Task(Uno.Action wait) [instance] :63
void Task::ctor_(uDelegate* wait)
{
    uStackFrame __("Outracks.Simulator.Task`1", ".ctor(Uno.Action)");
    Mutex = ::g::Uno::Threading::Mutex::Create();
    _wait = wait;
}

// public generated Uno.Exception get_Exception() [instance] :72
::g::Uno::Exception* Task::Exception()
{
    uStackFrame __("Outracks.Simulator.Task`1", "get_Exception()");
    return _Exception;
}

// internal generated void set_Exception(Uno.Exception value) [instance] :72
void Task::Exception(::g::Uno::Exception* value)
{
    uStackFrame __("Outracks.Simulator.Task`1", "set_Exception(Uno.Exception)");
    _Exception = value;
}

// public generated bool get_IsCompleted() [instance] :68
bool Task::IsCompleted()
{
    uStackFrame __("Outracks.Simulator.Task`1", "get_IsCompleted()");
    return _IsCompleted;
}

// internal generated void set_IsCompleted(bool value) [instance] :68
void Task::IsCompleted(bool value)
{
    uStackFrame __("Outracks.Simulator.Task`1", "set_IsCompleted(bool)");
    _IsCompleted = value;
}

// public generated bool get_IsFaulted() [instance] :70
bool Task::IsFaulted()
{
    uStackFrame __("Outracks.Simulator.Task`1", "get_IsFaulted()");
    return _IsFaulted;
}

// internal generated void set_IsFaulted(bool value) [instance] :70
void Task::IsFaulted(bool value)
{
    uStackFrame __("Outracks.Simulator.Task`1", "set_IsFaulted(bool)");
    _IsFaulted = value;
}

// internal Task New(Uno.Action wait) [static] :63
Task* Task::New1(uType* __type, uDelegate* wait)
{
    Task* obj1 = (Task*)uNew(__type);
    obj1->ctor_(wait);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Concurrency/$.uno
// -------------------------------------------------------------------------------------

// public static class Tasks :91
// {
static void Tasks_build(uType* type)
{
    ::TYPES[131] = ::g::Outracks::Simulator::TaskThread_typeof();
    ::TYPES[132] = ::g::Uno::Func_typeof();
    ::TYPES[133] = ::g::Outracks::Simulator::WaitForFirstResult_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("Run`1", type, (void*)Tasks__Run_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(type->U(0)), 1, ::g::Uno::Func_typeof()->MakeType(type->U(0))),
        new uFunction("WaitForFirstResult`1", type, (void*)Tasks__WaitForFirstResult_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(type->U(0)), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(type->U(0))), ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof()), type->U(0))));
}

uClassType* Tasks_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Tasks", options);
    type->fp_build_ = Tasks_build;
    return type;
}

// public static Outracks.Simulator.Task<T> Run<T>(Uno.Func<T> method) :98
void Tasks__Run_fn(uType* __type, uDelegate* method, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = Tasks::Run(__type, method);
}

// public static Outracks.Simulator.Task<T> WaitForFirstResult<T>(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> tasks, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) :93
void Tasks__WaitForFirstResult_fn(uType* __type, uObject* tasks, uDelegate* onNoResult, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = Tasks::WaitForFirstResult(__type, tasks, onNoResult);
}

// public static Outracks.Simulator.Task<T> Run<T>(Uno.Func<T> method) [static] :98
::g::Outracks::Simulator::Task* Tasks::Run(uType* __type, uDelegate* method)
{
    uType* __types[] = {
        ::TYPES[131/*Outracks.Simulator.TaskThread`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    uStackFrame __("Outracks.Simulator.Tasks", "Run`1(Uno.Func<T>)");
    ::g::Outracks::Simulator::TaskThread* t = (::g::Outracks::Simulator::TaskThread*)::g::Outracks::Simulator::TaskThread::New1(__types[0], method);
    uPtr(t->Thread)->Start();
    return (::g::Outracks::Simulator::Task*)t->Task;
}

// public static Outracks.Simulator.Task<T> WaitForFirstResult<T>(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> tasks, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) [static] :93
::g::Outracks::Simulator::Task* Tasks::WaitForFirstResult(uType* __type, uObject* tasks, uDelegate* onNoResult)
{
    uType* __types[] = {
        Tasks_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
        ::TYPES[132/*Uno.Func`1*/]->MakeType(__type->U(0)),
        ::TYPES[133/*Outracks.Simulator.WaitForFirstResult`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Outracks.Simulator.Tasks", "WaitForFirstResult`1(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>>,Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T>)");
    return (::g::Outracks::Simulator::Task*)Tasks::Run(__types[0], uDelegate::New(__types[2], (void*)::g::Outracks::Simulator::WaitForFirstResult__Execute_fn, (::g::Outracks::Simulator::WaitForFirstResult*)::g::Outracks::Simulator::WaitForFirstResult::New1(__types[3], tasks, onNoResult)));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Concurrency/$.uno
// -------------------------------------------------------------------------------------

// internal sealed class TaskThread<T> :114
// {
static void TaskThread_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[134] = ::g::Outracks::Simulator::Task_typeof();
    ::TYPES[18] = ::g::Uno::Exception_typeof();
    type->SetPrecalc(
        ::g::Outracks::Simulator::Task_typeof()->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Func_typeof()->MakeType(type->T(0)), offsetof(::g::Outracks::Simulator::TaskThread, _func), 0,
        ::g::Outracks::Simulator::Task_typeof()->MakeType(type->T(0)), offsetof(::g::Outracks::Simulator::TaskThread, Task), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Outracks::Simulator::TaskThread, Thread), 0);
}

uType* TaskThread_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TaskThread);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.TaskThread`1", options);
    type->fp_build_ = TaskThread_build;
    return type;
}

// public TaskThread(Uno.Func<T> func) :121
void TaskThread__ctor__fn(TaskThread* __this, uDelegate* func)
{
    __this->ctor_(func);
}

// public TaskThread New(Uno.Func<T> func) :121
void TaskThread__New1_fn(uType* __type, uDelegate* func, TaskThread** __retval)
{
    *__retval = TaskThread::New1(__type, func);
}

// private void Run() :128
void TaskThread__Run_fn(TaskThread* __this)
{
    __this->Run();
}

// public TaskThread(Uno.Func<T> func) [instance] :121
void TaskThread::ctor_(uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.Task<T>*/),
        __type->T(0),
    };
    uStackFrame __("Outracks.Simulator.TaskThread`1", ".ctor(Uno.Func<T>)");
    _func = func;
    Thread = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)TaskThread__Run_fn, this));
    Task = ((::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Task::New1(__types[0], uDelegate::New(::TYPES[13/*Uno.Action*/], uPtr(Thread), offsetof(::g::Uno::Threading::Thread_type, fp_Join))));
}

// private void Run() [instance] :128
void TaskThread::Run()
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Outracks.Simulator.TaskThread`1", "Run()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    try
    {
        ::g::Outracks::Simulator::Task__set_Result_fn(uPtr(Task), (uPtr(_func)->Invoke(&ret2), ret2));
        uPtr(Task)->IsCompleted(true);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(Task)->Exception(e);
        uPtr(Task)->IsFaulted(true);
        uPtr(Task)->IsCompleted(true);
    }
}

// public TaskThread New(Uno.Func<T> func) [static] :121
TaskThread* TaskThread::New1(uType* __type, uDelegate* func)
{
    TaskThread* obj1 = (TaskThread*)uNew(__type);
    obj1->ctor_(func);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class Uninitialized :315
// {
static void Uninitialized_build(uType* type)
{
    ::STRINGS[36] = uString::Const("Try again");
    ::TYPES[3] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[49] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
}

::g::Outracks::Simulator::State_type* Uninitialized_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Uninitialized);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.Uninitialized", options);
    type->SetBase(::g::Outracks::Simulator::State_typeof());
    type->fp_build_ = Uninitialized_build;
    type->fp_ctor_ = (void*)Uninitialized__New1_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Uninitialized__OnException_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Uninitialized__OnUpdate_fn;
    return type;
}

// public generated Uninitialized() :315
void Uninitialized__ctor_1_fn(Uninitialized* __this)
{
    __this->ctor_1();
}

// public generated Uninitialized New() :315
void Uninitialized__New1_fn(Uninitialized** __retval)
{
    *__retval = Uninitialized::New1();
}

// public override sealed Outracks.Simulator.State OnException(Uno.Exception e) :325
void Uninitialized__OnException_fn(Uninitialized* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Uninitialized", "OnException(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Faulted::New2(false, e, uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[49/*Outracks.Simulator.DialogButton[]*/], 1, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[36/*"Try again"*/], __this))), void();
}

// public override sealed Outracks.Simulator.State OnUpdate() :317
void Uninitialized__OnUpdate_fn(Uninitialized* __this, ::g::Outracks::Simulator::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Uninitialized", "OnUpdate()");

    if (::g::Outracks::Simulator::Context::Reflection() != NULL)
        return *__retval = ::g::Outracks::Simulator::ConnectingToProxy::New1(), void();

    return *__retval = __this, void();
}

// public generated Uninitialized() [instance] :315
void Uninitialized::ctor_1()
{
    uStackFrame __("Outracks.Simulator.Uninitialized", ".ctor()");
    ctor_();
}

// public generated Uninitialized New() [static] :315
Uninitialized* Uninitialized::New1()
{
    Uninitialized* obj1 = (Uninitialized*)uNew(Uninitialized_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class UserAppState :798
// {
static void UserAppState_build(uType* type)
{
    ::TYPES[135] = UserAppState_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[136] = UserAppState_typeof()->MakeMethod(1, ::g::Uno::UX::Resource_typeof());
    ::TYPES[137] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[83] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[138] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::UX::Resource_typeof());
    ::TYPES[139] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[140] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[141] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[142] = ::g::Uno::Collections::IListExtensions_typeof();
    ::TYPES[96] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[97] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Outracks::Simulator::UserAppState, Background), 0,
        ::g::Fuse::Node_typeof()->Array(), offsetof(::g::Outracks::Simulator::UserAppState, Children), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Outracks::Simulator::UserAppState, ClearColor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Outracks::Simulator::UserAppState, ClearDepth), 0,
        ::g::Uno::UX::Resource_typeof()->Array(), offsetof(::g::Outracks::Simulator::UserAppState, Resources), 0,
        UserAppState_typeof(), (uintptr_t)&::g::Outracks::Simulator::UserAppState::_Default_, uFieldFlagsStatic);
}

uType* UserAppState_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(UserAppState);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.UserAppState", options);
    type->fp_build_ = UserAppState_build;
    return type;
}

// public UserAppState(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor, float clearDepth) :812
void UserAppState__ctor__fn(UserAppState* __this, ::g::Uno::Float4* background, uArray* children, uArray* resources, ::g::Uno::Float4* clearColor, float* clearDepth)
{
    __this->ctor_(*background, children, resources, *clearColor, *clearDepth);
}

// public void ApplyTo(Outracks.Simulator.FakeApp app) :839
void UserAppState__ApplyTo_fn(UserAppState* __this, ::g::Outracks::Simulator::FakeApp* app)
{
    __this->ApplyTo(app);
}

// public static generated Outracks.Simulator.UserAppState get_Default() :827
void UserAppState__get_Default_fn(UserAppState** __retval)
{
    *__retval = UserAppState::Default();
}

// public static generated void set_Default(Outracks.Simulator.UserAppState value) :827
void UserAppState__set_Default_fn(UserAppState* value)
{
    UserAppState::Default(value);
}

// public UserAppState New(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor, float clearDepth) :812
void UserAppState__New1_fn(::g::Uno::Float4* background, uArray* children, uArray* resources, ::g::Uno::Float4* clearColor, float* clearDepth, UserAppState** __retval)
{
    *__retval = UserAppState::New1(*background, children, resources, *clearColor, *clearDepth);
}

// public static Outracks.Simulator.UserAppState Save(Outracks.Simulator.FakeApp app) :829
void UserAppState__Save_fn(::g::Outracks::Simulator::FakeApp* app, UserAppState** __retval)
{
    *__retval = UserAppState::Save(app);
}

// private static bool SequenceEquals<T>(Uno.Collections.IList<T> left, T[] right) :860
void UserAppState__SequenceEquals_fn(uType* __type, uObject* left, uArray* right, bool* __retval)
{
    *__retval = UserAppState::SequenceEquals(__type, left, right);
}

// private static void SetIfNotEqual<T>(Uno.Collections.IList<T> list, T[] elements) :848
void UserAppState__SetIfNotEqual_fn(uType* __type, uObject* list, uArray* elements)
{
    UserAppState::SetIfNotEqual(__type, list, elements);
}

// private static void SetSequence<T>(Uno.Collections.IList<T> list, T[] elements) :854
void UserAppState__SetSequence_fn(uType* __type, uObject* list, uArray* elements)
{
    UserAppState::SetSequence(__type, list, elements);
}

uSStrong<UserAppState*> UserAppState::_Default_;

// public UserAppState(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor, float clearDepth) [instance] :812
void UserAppState::ctor_(::g::Uno::Float4 background, uArray* children, uArray* resources, ::g::Uno::Float4 clearColor, float clearDepth)
{
    uStackFrame __("Outracks.Simulator.UserAppState", ".ctor(float4,Fuse.Node[],Uno.UX.Resource[],float4,float)");
    Background = background;
    Children = children;
    Resources = resources;
    ClearColor = clearColor;
    ClearDepth = clearDepth;
}

// public void ApplyTo(Outracks.Simulator.FakeApp app) [instance] :839
void UserAppState::ApplyTo(::g::Outracks::Simulator::FakeApp* app)
{
    uStackFrame __("Outracks.Simulator.UserAppState", "ApplyTo(Outracks.Simulator.FakeApp)");

    if (::g::Uno::Float4__op_Inequality(uPtr(app)->Background1(), Background))
        uPtr(app)->Background1(Background);

    UserAppState::SetIfNotEqual(::TYPES[135/*Outracks.Simulator.UserAppState.SetIfNotEqual<Fuse.Node>*/], app->Children1(), Children);
    UserAppState::SetIfNotEqual(::TYPES[136/*Outracks.Simulator.UserAppState.SetIfNotEqual<Uno.UX.Resource>*/], app->Resources1(), Resources);

    if (::g::Uno::Float4__op_Inequality(app->ClearColor(), ClearColor))
        app->ClearColor(ClearColor);

    if (app->ClearDepth() != ClearDepth)
        app->ClearDepth(ClearDepth);
}

// public UserAppState New(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor, float clearDepth) [static] :812
UserAppState* UserAppState::New1(::g::Uno::Float4 background, uArray* children, uArray* resources, ::g::Uno::Float4 clearColor, float clearDepth)
{
    UserAppState* obj1 = (UserAppState*)uNew(UserAppState_typeof());
    obj1->ctor_(background, children, resources, clearColor, clearDepth);
    return obj1;
}

// public static Outracks.Simulator.UserAppState Save(Outracks.Simulator.FakeApp app) [static] :829
UserAppState* UserAppState::Save(::g::Outracks::Simulator::FakeApp* app)
{
    uStackFrame __("Outracks.Simulator.UserAppState", "Save(Outracks.Simulator.FakeApp)");
    return UserAppState::New1(uPtr(app)->Background1(), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[137/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Node>*/], uPtr(app)->Children1()), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[138/*Uno.Collections.EnumerableExtensions.ToArray<Uno.UX.Resource>*/], uPtr(app)->Resources1()), uPtr(app)->ClearColor(), uPtr(app)->ClearDepth());
}

// private static bool SequenceEquals<T>(Uno.Collections.IList<T> left, T[] right) [static] :860
bool UserAppState::SequenceEquals(uType* __type, uObject* left, uArray* right)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[140/*Uno.Collections.ICollection`1*/]->MakeType(__type->U(0)),
        ::TYPES[141/*Uno.Collections.IList`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Outracks.Simulator.UserAppState", "SequenceEquals`1(Uno.Collections.IList<T>,T[])");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(left), __types[1])) != uPtr(right)->Length())
        return false;

    for (int i = 0; i < uPtr(right)->Length(); i++)
        if (uBoxPtr(__types[0], (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(left), __types[2]), uCRef<int>(i), &ret2), ret2)) != uBoxPtr(__types[0], uPtr(right)->TItem(i)))
            return false;

    return true;
}

// private static void SetIfNotEqual<T>(Uno.Collections.IList<T> list, T[] elements) [static] :848
void UserAppState::SetIfNotEqual(uType* __type, uObject* list, uArray* elements)
{
    uType* __types[] = {
        UserAppState_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
        UserAppState_typeof()->MakeMethod(1, __type->U(0)),
    };
    uStackFrame __("Outracks.Simulator.UserAppState", "SetIfNotEqual`1(Uno.Collections.IList<T>,T[])");

    if (!UserAppState::SequenceEquals(__types[0], list, elements))
        UserAppState::SetSequence(__types[2], list, elements);
}

// private static void SetSequence<T>(Uno.Collections.IList<T> list, T[] elements) [static] :854
void UserAppState::SetSequence(uType* __type, uObject* list, uArray* elements)
{
    uType* __types[] = {
        ::TYPES[140/*Uno.Collections.ICollection`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[142/*Uno.Collections.IListExtensions*/]->MakeMethod(1, __type->U(0)),
        ::TYPES[96/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
        ::TYPES[97/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Outracks.Simulator.UserAppState", "SetSequence`1(Uno.Collections.IList<T>,T[])");
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(list), __types[0]));
    ::g::Uno::Collections::IListExtensions::AddRange(__types[2], list, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[4], elements)));
}

// public static generated Outracks.Simulator.UserAppState get_Default() [static] :827
UserAppState* UserAppState::Default()
{
    uStackFrame __("Outracks.Simulator.UserAppState", "get_Default()");
    return UserAppState::_Default_;
}

// public static generated void set_Default(Outracks.Simulator.UserAppState value) [static] :827
void UserAppState::Default(UserAppState* value)
{
    uStackFrame __("Outracks.Simulator.UserAppState", "set_Default(Outracks.Simulator.UserAppState)");
    UserAppState::_Default_ = value;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/Concurrency/$.uno
// -------------------------------------------------------------------------------------

// internal sealed class WaitForFirstResult<T> :144
// {
static void WaitForFirstResult_build(uType* type)
{
    ::TYPES[98] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[134] = ::g::Outracks::Simulator::Task_typeof();
    ::TYPES[78] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[0] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof());
    type->SetPrecalc(
        ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Task_typeof()->MakeType(type->T(0))),
        ::g::Outracks::Simulator::Task_typeof()->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof()), type->T(0)), offsetof(::g::Outracks::Simulator::WaitForFirstResult, _onNoResult), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(type->T(0))), offsetof(::g::Outracks::Simulator::WaitForFirstResult, _pending), 0);
}

uType* WaitForFirstResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WaitForFirstResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.WaitForFirstResult`1", options);
    type->fp_build_ = WaitForFirstResult_build;
    return type;
}

// public WaitForFirstResult(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) :149
void WaitForFirstResult__ctor__fn(WaitForFirstResult* __this, uObject* pending, uDelegate* onNoResult)
{
    __this->ctor_(pending, onNoResult);
}

// public T Execute() :157
void WaitForFirstResult__Execute_fn(WaitForFirstResult* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Outracks.Simulator.WaitForFirstResult`1", "Execute()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uArray* array1;
    int index2;
    int length3;
    bool ret3;
    ::g::Uno::Collections::List* exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[78/*Uno.Collections.List<Uno.Exception>*/]);

    while (uPtr(__this->_pending)->Count() != 0)

        for (array1 = (uArray*)uPtr(__this->_pending)->ToArray(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
        {
            ::g::Outracks::Simulator::Task* task = uPtr(array1)->Strong< ::g::Outracks::Simulator::Task*>(index2);

            if (uPtr(task)->IsCompleted())
            {
                if (uPtr(task)->IsFaulted())
                    ::g::Uno::Collections::List__Add_fn(uPtr(exceptions), uPtr(task)->Exception());
                else
                    return __retval.Store((::g::Outracks::Simulator::Task__get_Result_fn(task, &ret2), ret2)), void();

                ::g::Uno::Collections::List__Remove_fn(uPtr(__this->_pending), task, &ret3);
            }

            ::g::Uno::Threading::Thread::Sleep(10);
        }

    return __retval.Store((uPtr(__this->_onNoResult)->Invoke(&ret4, 1, (uObject*)exceptions), ret4)), void();
}

// public WaitForFirstResult New(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) :149
void WaitForFirstResult__New1_fn(uType* __type, uObject* pending, uDelegate* onNoResult, WaitForFirstResult** __retval)
{
    *__retval = WaitForFirstResult::New1(__type, pending, onNoResult);
}

// public WaitForFirstResult(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) [instance] :149
void WaitForFirstResult::ctor_(uObject* pending, uDelegate* onNoResult)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.ToList<Outracks.Simulator.Task<T>>*/),
        __type->Precalced(1/*Outracks.Simulator.Task<T>*/),
        __type->T(0),
    };
    uStackFrame __("Outracks.Simulator.WaitForFirstResult`1", ".ctor(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>>,Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T>)");
    _pending = ((::g::Uno::Collections::List*)::g::Uno::Collections::EnumerableExtensions::ToList(__types[0], pending));
    _onNoResult = onNoResult;
}

// public WaitForFirstResult New(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) [static] :149
WaitForFirstResult* WaitForFirstResult::New1(uType* __type, uObject* pending, uDelegate* onNoResult)
{
    WaitForFirstResult* obj1 = (WaitForFirstResult*)uNew(__type);
    obj1->ctor_(pending, onNoResult);
    return obj1;
}
// }

}}} // ::g::Outracks::Simulator
