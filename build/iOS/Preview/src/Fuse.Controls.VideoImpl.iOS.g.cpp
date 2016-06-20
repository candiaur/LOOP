// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise.h>
#include <Fuse.Controls.VideoImpl.iOS.VideoPlayer.h>
#include <Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <OpenGL.GLTextureHandle.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <uObjC.h>
#include <VideoImpl.h>
static uString* STRINGS[2];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.29.22/iOS/$.uno
// -------------------------------------------------------------------

// internal sealed extern class VideoPlayer :13
// {
static void VideoPlayer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unknown playback error");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Delegate_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[4] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), offsetof(VideoPlayer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(VideoPlayer_type, interface1));
    type->SetFields(0,
        ::g::Uno::Graphics::VideoTexture_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::iOS::VideoPlayer, _currentTexture), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::iOS::VideoPlayer, _currentTextureHandle), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::iOS::VideoPlayer, _handle), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Controls::VideoImpl::iOS::VideoPlayer, ErrorOccurred1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::iOS::VideoPlayer, FrameAvailable1), 0);
}

VideoPlayer_type* VideoPlayer_typeof()
{
    static uSStrong<VideoPlayer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(VideoPlayer);
    options.TypeSize = sizeof(VideoPlayer_type);
    type = (VideoPlayer_type*)uClassType::New("Fuse.Controls.VideoImpl.iOS.VideoPlayer", options);
    type->fp_build_ = VideoPlayer_build;
    type->interface0.fp_Play = (void(*)(uObject*))VideoPlayer__Play_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))VideoPlayer__Pause_fn;
    type->interface0.fp_Update = (void(*)(uObject*))VideoPlayer__Update_fn;
    type->interface0.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))VideoPlayer__get_VideoTexture_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))VideoPlayer__get_Size_fn;
    type->interface0.fp_get_Volume = (void(*)(uObject*, float*))VideoPlayer__get_Volume_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))VideoPlayer__set_Volume_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))VideoPlayer__get_Duration_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))VideoPlayer__get_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))VideoPlayer__set_Position_fn;
    type->interface0.fp_add_FrameAvailable = (void(*)(uObject*, uDelegate*))VideoPlayer__add_FrameAvailable_fn;
    type->interface0.fp_remove_FrameAvailable = (void(*)(uObject*, uDelegate*))VideoPlayer__remove_FrameAvailable_fn;
    type->interface0.fp_add_ErrorOccurred = (void(*)(uObject*, uDelegate*))VideoPlayer__add_ErrorOccurred_fn;
    type->interface0.fp_remove_ErrorOccurred = (void(*)(uObject*, uDelegate*))VideoPlayer__remove_ErrorOccurred_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))VideoPlayer__Dispose_fn;
    return type;
}

// public VideoPlayer(string uri, Uno.Action onLoaded, Uno.Action onLoadError) :75
void VideoPlayer__ctor__fn(VideoPlayer* __this, uString* uri, uDelegate* onLoaded, uDelegate* onLoadError)
{
    __this->ctor_(uri, onLoaded, onLoadError);
}

// public void Dispose() :96
void VideoPlayer__Dispose_fn(VideoPlayer* __this)
{
    __this->Dispose();
}

// public double get_Duration() :39
void VideoPlayer__get_Duration_fn(VideoPlayer* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :71
void VideoPlayer__add_ErrorOccurred_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->add_ErrorOccurred(value);
}

// public generated void remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :71
void VideoPlayer__remove_ErrorOccurred_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->remove_ErrorOccurred(value);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) :70
void VideoPlayer__add_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->add_FrameAvailable(value);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) :70
void VideoPlayer__remove_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->remove_FrameAvailable(value);
}

// public VideoPlayer New(string uri, Uno.Action onLoaded, Uno.Action onLoadError) :75
void VideoPlayer__New1_fn(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError, VideoPlayer** __retval)
{
    *__retval = VideoPlayer::New1(uri, onLoaded, onLoadError);
}

// private void OnFrameAvailable() :82
void VideoPlayer__OnFrameAvailable_fn(VideoPlayer* __this)
{
    __this->OnFrameAvailable();
}

// public void Pause() :53
void VideoPlayer__Pause_fn(VideoPlayer* __this)
{
    __this->Pause();
}

// public void Play() :48
void VideoPlayer__Play_fn(VideoPlayer* __this)
{
    __this->Play();
}

// private void PlayerErrorHandler() :89
void VideoPlayer__PlayerErrorHandler_fn(VideoPlayer* __this)
{
    __this->PlayerErrorHandler();
}

// public double get_Position() :44
void VideoPlayer__get_Position_fn(VideoPlayer* __this, double* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(double value) :45
void VideoPlayer__set_Position_fn(VideoPlayer* __this, double* value)
{
    __this->Position(*value);
}

// public int2 get_Size() :28
void VideoPlayer__get_Size_fn(VideoPlayer* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private OpenGL.GLTextureHandle get_TextureHandle() :23
void VideoPlayer__get_TextureHandle_fn(VideoPlayer* __this, uint32_t* __retval)
{
    *__retval = __this->TextureHandle();
}

// public void Update() :59
void VideoPlayer__Update_fn(VideoPlayer* __this)
{
    __this->Update();
}

// public Uno.Graphics.VideoTexture get_VideoTexture() :18
void VideoPlayer__get_VideoTexture_fn(VideoPlayer* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    *__retval = __this->VideoTexture();
}

// public float get_Volume() :33
void VideoPlayer__get_Volume_fn(VideoPlayer* __this, float* __retval)
{
    *__retval = __this->Volume();
}

// public void set_Volume(float value) :34
void VideoPlayer__set_Volume_fn(VideoPlayer* __this, float* value)
{
    __this->Volume(*value);
}

// public VideoPlayer(string uri, Uno.Action onLoaded, Uno.Action onLoadError) [instance] :75
void VideoPlayer::ctor_(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", ".ctor(string,Uno.Action,Uno.Action)");
    _handle = ::g::Uno::IntPtr::Zero_;
    _handle = ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::AllocateVideoState();
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::Initialize(_handle, uri, onLoaded, onLoadError);
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::SetErrorHandler(_handle, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)VideoPlayer__PlayerErrorHandler_fn, this));
}

// public void Dispose() [instance] :96
void VideoPlayer::Dispose()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "Dispose()");

    if (::g::Uno::IntPtr::op_Inequality(_handle, ::g::Uno::IntPtr::Zero_))
    {
        ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::FreeVideoState(_handle);
        _handle = ::g::Uno::IntPtr::Zero_;
    }
}

// public double get_Duration() [instance] :39
double VideoPlayer::Duration()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "get_Duration()");
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetDuration(_handle);
}

// public generated void add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) [instance] :71
void VideoPlayer::add_ErrorOccurred(uDelegate* value)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "add_ErrorOccurred(Uno.EventHandler<Uno.Exception>)");
    ErrorOccurred1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ErrorOccurred1, value), ::TYPES[3/*Uno.EventHandler<Uno.Exception>*/]);
}

// public generated void remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) [instance] :71
void VideoPlayer::remove_ErrorOccurred(uDelegate* value)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "remove_ErrorOccurred(Uno.EventHandler<Uno.Exception>)");
    ErrorOccurred1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ErrorOccurred1, value), ::TYPES[3/*Uno.EventHandler<Uno.Exception>*/]);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) [instance] :70
void VideoPlayer::add_FrameAvailable(uDelegate* value)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "add_FrameAvailable(Uno.EventHandler)");
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameAvailable1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) [instance] :70
void VideoPlayer::remove_FrameAvailable(uDelegate* value)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "remove_FrameAvailable(Uno.EventHandler)");
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameAvailable1, value), ::TYPES[4/*Uno.EventHandler*/]);
}

// private void OnFrameAvailable() [instance] :82
void VideoPlayer::OnFrameAvailable()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "OnFrameAvailable()");
    uDelegate* handler = FrameAvailable1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void Pause() [instance] :53
void VideoPlayer::Pause()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "Pause()");
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::Pause(_handle);
}

// public void Play() [instance] :48
void VideoPlayer::Play()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "Play()");
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::Play(_handle);
}

// private void PlayerErrorHandler() [instance] :89
void VideoPlayer::PlayerErrorHandler()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "PlayerErrorHandler()");
    uDelegate* handler = ErrorOccurred1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Uno::Exception*)::g::Uno::Exception::New2(::STRINGS[0/*"Unknown pla...*/]));
}

// public double get_Position() [instance] :44
double VideoPlayer::Position()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "get_Position()");
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetPosition(_handle);
}

// public void set_Position(double value) [instance] :45
void VideoPlayer::Position(double value)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "set_Position(double)");
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::SetPosition(_handle, value);
}

// public int2 get_Size() [instance] :28
::g::Uno::Int2 VideoPlayer::Size()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "get_Size()");
    return ::g::Uno::Int2__New2(::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetWidth(_handle), ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetHeight(_handle));
}

// private OpenGL.GLTextureHandle get_TextureHandle() [instance] :23
uint32_t VideoPlayer::TextureHandle()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "get_TextureHandle()");
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::UpdateTexture(_handle);
}

// public void Update() [instance] :59
void VideoPlayer::Update()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "Update()");
    uint32_t textureHandle = TextureHandle();

    if (::g::OpenGL::GLTextureHandle::op_Inequality(textureHandle, _currentTextureHandle))
    {
        _currentTextureHandle = textureHandle;
        _currentTexture = ::g::Uno::Graphics::VideoTexture::New1(_currentTextureHandle);
        OnFrameAvailable();
    }
}

// public Uno.Graphics.VideoTexture get_VideoTexture() [instance] :18
::g::Uno::Graphics::VideoTexture* VideoPlayer::VideoTexture()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "get_VideoTexture()");
    return _currentTexture;
}

// public float get_Volume() [instance] :33
float VideoPlayer::Volume()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "get_Volume()");
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetVolume(_handle);
}

// public void set_Volume(float value) [instance] :34
void VideoPlayer::Volume(float value)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayer", "set_Volume(float)");
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::SetVolume(_handle, value);
}

// public VideoPlayer New(string uri, Uno.Action onLoaded, Uno.Action onLoadError) [static] :75
VideoPlayer* VideoPlayer::New1(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError)
{
    VideoPlayer* obj1 = (VideoPlayer*)uNew(VideoPlayer_typeof());
    obj1->ctor_(uri, onLoaded, onLoadError);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.29.22/iOS/$.uno
// -------------------------------------------------------------------

// internal static extern class VideoPlayerImpl :109
// {
static void VideoPlayerImpl_build(uType* type)
{
}

uClassType* VideoPlayerImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", options);
    type->fp_build_ = VideoPlayerImpl_build;
    return type;
}

// public static extern Uno.IntPtr AllocateVideoState() :113
void VideoPlayerImpl__AllocateVideoState_fn(void** __retval)
{
    *__retval = VideoPlayerImpl::AllocateVideoState();
}

// public static extern void FreeVideoState(Uno.IntPtr videoState) :116
void VideoPlayerImpl__FreeVideoState_fn(void** videoState_)
{
    VideoPlayerImpl::FreeVideoState(*videoState_);
}

// public static extern double GetDuration(Uno.IntPtr videoState) :122
void VideoPlayerImpl__GetDuration_fn(void** videoState_, double* __retval)
{
    *__retval = VideoPlayerImpl::GetDuration(*videoState_);
}

// public static extern int GetHeight(Uno.IntPtr videoState) :140
void VideoPlayerImpl__GetHeight_fn(void** videoState_, int* __retval)
{
    *__retval = VideoPlayerImpl::GetHeight(*videoState_);
}

// public static extern double GetPosition(Uno.IntPtr videoState) :125
void VideoPlayerImpl__GetPosition_fn(void** videoState_, double* __retval)
{
    *__retval = VideoPlayerImpl::GetPosition(*videoState_);
}

// public static extern float GetVolume(Uno.IntPtr videoState) :131
void VideoPlayerImpl__GetVolume_fn(void** videoState_, float* __retval)
{
    *__retval = VideoPlayerImpl::GetVolume(*videoState_);
}

// public static extern int GetWidth(Uno.IntPtr videoState) :137
void VideoPlayerImpl__GetWidth_fn(void** videoState_, int* __retval)
{
    *__retval = VideoPlayerImpl::GetWidth(*videoState_);
}

// public static extern void Initialize(Uno.IntPtr videoState, string uri, Uno.Action loadedCallback, Uno.Action errorCallback) :119
void VideoPlayerImpl__Initialize_fn(void** videoState_, uString* uri_, uDelegate* loadedCallback_, uDelegate* errorCallback_)
{
    VideoPlayerImpl::Initialize(*videoState_, uri_, loadedCallback_, errorCallback_);
}

// public static extern void Pause(Uno.IntPtr videoState) :146
void VideoPlayerImpl__Pause_fn(void** videoState_)
{
    VideoPlayerImpl::Pause(*videoState_);
}

// public static extern void Play(Uno.IntPtr videoState) :143
void VideoPlayerImpl__Play_fn(void** videoState_)
{
    VideoPlayerImpl::Play(*videoState_);
}

// public static extern void SetErrorHandler(Uno.IntPtr videoState, Uno.Action errorHandler) :152
void VideoPlayerImpl__SetErrorHandler_fn(void** videoState_, uDelegate* errorHandler_)
{
    VideoPlayerImpl::SetErrorHandler(*videoState_, errorHandler_);
}

// public static extern void SetPosition(Uno.IntPtr videoState, double position) :128
void VideoPlayerImpl__SetPosition_fn(void** videoState_, double* position_)
{
    VideoPlayerImpl::SetPosition(*videoState_, *position_);
}

// public static extern void SetVolume(Uno.IntPtr videoState, float volume) :134
void VideoPlayerImpl__SetVolume_fn(void** videoState_, float* volume_)
{
    VideoPlayerImpl::SetVolume(*videoState_, *volume_);
}

// public static extern OpenGL.GLTextureHandle UpdateTexture(Uno.IntPtr videoState) :149
void VideoPlayerImpl__UpdateTexture_fn(void** videoState_, uint32_t* __retval)
{
    *__retval = VideoPlayerImpl::UpdateTexture(*videoState_);
}

// public static extern Uno.IntPtr AllocateVideoState() [static] :113
void* VideoPlayerImpl::AllocateVideoState()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "AllocateVideoState()");
    return ::FuseVideoImpl::allocateVideoState();
}

// public static extern void FreeVideoState(Uno.IntPtr videoState) [static] :116
void VideoPlayerImpl::FreeVideoState(void* videoState_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "FreeVideoState(Uno.IntPtr)");
    ::FuseVideoImpl::freeVideoState(videoState_);
}

// public static extern double GetDuration(Uno.IntPtr videoState) [static] :122
double VideoPlayerImpl::GetDuration(void* videoState_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "GetDuration(Uno.IntPtr)");
    return ::FuseVideoImpl::getDuration(videoState_);
}

// public static extern int GetHeight(Uno.IntPtr videoState) [static] :140
int VideoPlayerImpl::GetHeight(void* videoState_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "GetHeight(Uno.IntPtr)");
    return ::FuseVideoImpl::getHeight(videoState_);
}

// public static extern double GetPosition(Uno.IntPtr videoState) [static] :125
double VideoPlayerImpl::GetPosition(void* videoState_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "GetPosition(Uno.IntPtr)");
    return ::FuseVideoImpl::getPosition(videoState_);
}

// public static extern float GetVolume(Uno.IntPtr videoState) [static] :131
float VideoPlayerImpl::GetVolume(void* videoState_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "GetVolume(Uno.IntPtr)");
    return ::FuseVideoImpl::getVolume(videoState_);
}

// public static extern int GetWidth(Uno.IntPtr videoState) [static] :137
int VideoPlayerImpl::GetWidth(void* videoState_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "GetWidth(Uno.IntPtr)");
    return ::FuseVideoImpl::getWidth(videoState_);
}

// public static extern void Initialize(Uno.IntPtr videoState, string uri, Uno.Action loadedCallback, Uno.Action errorCallback) [static] :119
void VideoPlayerImpl::Initialize(void* videoState_, uString* uri_, uDelegate* loadedCallback_, uDelegate* errorCallback_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "Initialize(Uno.IntPtr,string,Uno.Action,Uno.Action)");
    ::FuseVideoImpl::initialize(videoState_, uObjC::NativeString(uri_), loadedCallback_, errorCallback_);
}

// public static extern void Pause(Uno.IntPtr videoState) [static] :146
void VideoPlayerImpl::Pause(void* videoState_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "Pause(Uno.IntPtr)");
    ::FuseVideoImpl::pause(videoState_);
}

// public static extern void Play(Uno.IntPtr videoState) [static] :143
void VideoPlayerImpl::Play(void* videoState_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "Play(Uno.IntPtr)");
    ::FuseVideoImpl::play(videoState_);
}

// public static extern void SetErrorHandler(Uno.IntPtr videoState, Uno.Action errorHandler) [static] :152
void VideoPlayerImpl::SetErrorHandler(void* videoState_, uDelegate* errorHandler_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "SetErrorHandler(Uno.IntPtr,Uno.Action)");
    ::FuseVideoImpl::setErrorHandler(videoState_, errorHandler_);
}

// public static extern void SetPosition(Uno.IntPtr videoState, double position) [static] :128
void VideoPlayerImpl::SetPosition(void* videoState_, double position_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "SetPosition(Uno.IntPtr,double)");
    ::FuseVideoImpl::setPosition(videoState_, position_);
}

// public static extern void SetVolume(Uno.IntPtr videoState, float volume) [static] :134
void VideoPlayerImpl::SetVolume(void* videoState_, float volume_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "SetVolume(Uno.IntPtr,float)");
    ::FuseVideoImpl::setVolume(videoState_, volume_);
}

// public static extern OpenGL.GLTextureHandle UpdateTexture(Uno.IntPtr videoState) [static] :149
uint32_t VideoPlayerImpl::UpdateTexture(void* videoState_)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", "UpdateTexture(Uno.IntPtr)");
    return ::FuseVideoImpl::updateTexture(videoState_);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.29.22/iOS/$.uno
// -------------------------------------------------------------------

// private sealed class VideoLoader.VideoPromise :176
// {
static void VideoLoader__VideoPromise_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Failed to load");
    ::TYPES[5] = ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::iOS::VideoLoader__VideoPromise, _isCancelled), 0,
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::iOS::VideoLoader__VideoPromise, _player), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::iOS::VideoLoader__VideoPromise, _readyToDispose), 0);
}

::g::Uno::Threading::Future_type* VideoLoader__VideoPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VideoLoader__VideoPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise", options);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof()));
    type->fp_build_ = VideoLoader__VideoPromise_build;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))VideoLoader__VideoPromise__Cancel_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))VideoLoader__VideoPromise__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))VideoLoader__VideoPromise__Dispose_fn;
    return type;
}

// public VideoPromise(string url) :180
void VideoLoader__VideoPromise__ctor_7_fn(VideoLoader__VideoPromise* __this, uString* url)
{
    __this->ctor_7(url);
}

// public override sealed void Cancel([bool shutdownGracefully]) :201
void VideoLoader__VideoPromise__Cancel_fn(VideoLoader__VideoPromise* __this, bool* shutdownGracefully)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise", "Cancel([bool])");
    __this->ScheduleDispose();
}

// public override sealed void Dispose() :224
void VideoLoader__VideoPromise__Dispose_fn(VideoLoader__VideoPromise* __this)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise", "Dispose()");
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    __this->ScheduleDispose();
}

// private void DoDispose() :215
void VideoLoader__VideoPromise__DoDispose_fn(VideoLoader__VideoPromise* __this)
{
    __this->DoDispose();
}

// public VideoPromise New(string url) :180
void VideoLoader__VideoPromise__New5_fn(uString* url, VideoLoader__VideoPromise** __retval)
{
    *__retval = VideoLoader__VideoPromise::New5(url);
}

// private void OnLoaded() :185
void VideoLoader__VideoPromise__OnLoaded_fn(VideoLoader__VideoPromise* __this)
{
    __this->OnLoaded();
}

// private void OnLoadError() :192
void VideoLoader__VideoPromise__OnLoadError_fn(VideoLoader__VideoPromise* __this)
{
    __this->OnLoadError();
}

// private void ScheduleDispose() :206
void VideoLoader__VideoPromise__ScheduleDispose_fn(VideoLoader__VideoPromise* __this)
{
    __this->ScheduleDispose();
}

// public VideoPromise(string url) [instance] :180
void VideoLoader__VideoPromise::ctor_7(uString* url)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise", ".ctor(string)");
    ctor_3();
    _player = (uObject*)::g::Fuse::Controls::VideoImpl::iOS::VideoPlayer::New1(url, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)VideoLoader__VideoPromise__OnLoaded_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)VideoLoader__VideoPromise__OnLoadError_fn, this));
}

// private void DoDispose() [instance] :215
void VideoLoader__VideoPromise::DoDispose()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise", "DoDispose()");

    if (_readyToDispose)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_player), ::TYPES[6/*Uno.IDisposable*/]));
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)VideoLoader__VideoPromise__DoDispose_fn, this), 0);
    }
}

// private void OnLoaded() [instance] :185
void VideoLoader__VideoPromise::OnLoaded()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise", "OnLoaded()");
    _readyToDispose = true;

    if (!_isCancelled)
        ::g::Uno::Threading::Promise__Resolve_fn(this, _player);
}

// private void OnLoadError() [instance] :192
void VideoLoader__VideoPromise::OnLoadError()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise", "OnLoadError()");
    _readyToDispose = true;

    if (!_isCancelled)
        Reject(::g::Uno::Exception::New2(::STRINGS[1/*"Failed to l...*/]));
}

// private void ScheduleDispose() [instance] :206
void VideoLoader__VideoPromise::ScheduleDispose()
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise", "ScheduleDispose()");

    if (!_isCancelled)
    {
        _isCancelled = true;
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)VideoLoader__VideoPromise__DoDispose_fn, this), 0);
    }
}

// public VideoPromise New(string url) [static] :180
VideoLoader__VideoPromise* VideoLoader__VideoPromise::New5(uString* url)
{
    VideoLoader__VideoPromise* obj1 = (VideoLoader__VideoPromise*)uNew(VideoLoader__VideoPromise_typeof());
    obj1->ctor_7(url);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::iOS
