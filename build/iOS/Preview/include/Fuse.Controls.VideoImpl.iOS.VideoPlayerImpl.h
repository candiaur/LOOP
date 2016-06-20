// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Video/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace iOS{struct VideoPlayerImpl;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace iOS{

// internal static extern class VideoPlayerImpl :109
// {
uClassType* VideoPlayerImpl_typeof();
void VideoPlayerImpl__AllocateVideoState_fn(void** __retval);
void VideoPlayerImpl__FreeVideoState_fn(void** videoState_);
void VideoPlayerImpl__GetDuration_fn(void** videoState_, double* __retval);
void VideoPlayerImpl__GetHeight_fn(void** videoState_, int* __retval);
void VideoPlayerImpl__GetPosition_fn(void** videoState_, double* __retval);
void VideoPlayerImpl__GetVolume_fn(void** videoState_, float* __retval);
void VideoPlayerImpl__GetWidth_fn(void** videoState_, int* __retval);
void VideoPlayerImpl__Initialize_fn(void** videoState_, uString* uri_, uDelegate* loadedCallback_, uDelegate* errorCallback_);
void VideoPlayerImpl__Pause_fn(void** videoState_);
void VideoPlayerImpl__Play_fn(void** videoState_);
void VideoPlayerImpl__SetErrorHandler_fn(void** videoState_, uDelegate* errorHandler_);
void VideoPlayerImpl__SetPosition_fn(void** videoState_, double* position_);
void VideoPlayerImpl__SetVolume_fn(void** videoState_, float* volume_);
void VideoPlayerImpl__UpdateTexture_fn(void** videoState_, uint32_t* __retval);

struct VideoPlayerImpl : uObject
{
    static void* AllocateVideoState();
    static void FreeVideoState(void* videoState_);
    static double GetDuration(void* videoState_);
    static int GetHeight(void* videoState_);
    static double GetPosition(void* videoState_);
    static float GetVolume(void* videoState_);
    static int GetWidth(void* videoState_);
    static void Initialize(void* videoState_, uString* uri_, uDelegate* loadedCallback_, uDelegate* errorCallback_);
    static void Pause(void* videoState_);
    static void Play(void* videoState_);
    static void SetErrorHandler(void* videoState_, uDelegate* errorHandler_);
    static void SetPosition(void* videoState_, double position_);
    static void SetVolume(void* videoState_, float volume_);
    static uint32_t UpdateTexture(void* videoState_);
};
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::iOS
