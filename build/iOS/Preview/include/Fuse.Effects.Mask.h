// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Effects/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Mask;}}}
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Mask :754
// {
struct Mask_type : ::g::Fuse::Effects::BasicEffect_type
{
    ::g::Fuse::Internal::IImageContainerOwner interface0;
};

Mask_type* Mask_typeof();
void Mask__ctor_3_fn(Mask* __this);
void Mask__get_File_fn(Mask* __this, ::g::Uno::UX::FileSource** __retval);
void Mask__set_File_fn(Mask* __this, ::g::Uno::UX::FileSource* value);
void Mask__FuseInternalIImageContainerOwnerOnParamChanged_fn(Mask* __this);
void Mask__FuseInternalIImageContainerOwnerOnSizingChanged_fn(Mask* __this);
void Mask__FuseInternalIImageContainerOwnerOnSourceChanged_fn(Mask* __this);
void Mask__init_DrawCalls_fn(Mask* __this);
void Mask__get_Mode_fn(Mask* __this, int* __retval);
void Mask__set_Mode_fn(Mask* __this, int* value);
void Mask__ModifyRenderBounds_fn(Mask* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval);
void Mask__New2_fn(Mask** __retval);
void Mask__OnRender_fn(Mask* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);
void Mask__get_Source_fn(Mask* __this, ::g::Fuse::Resources::ImageSource** __retval);
void Mask__set_Source_fn(Mask* __this, ::g::Fuse::Resources::ImageSource* value);

struct Mask : ::g::Fuse::Effects::BasicEffect
{
    uStrong< ::g::Fuse::Internal::ImageContainer*> _container;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_79857885;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_7985ece4;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_79866143;
    int _mode;
    ::g::Uno::Float4x4 OnRender_LocalTransform_79857885_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_79857885_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_79857885_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_7985ece4_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_79866143_7_2_1;

    void ctor_3();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    void init_DrawCalls();
    int Mode();
    void Mode(int value);
    ::g::Fuse::Resources::ImageSource* Source();
    void Source(::g::Fuse::Resources::ImageSource* value);
    static Mask* New2();
};
// }

}}} // ::g::Fuse::Effects
