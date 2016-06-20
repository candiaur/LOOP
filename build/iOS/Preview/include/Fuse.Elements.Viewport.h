// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Elements{struct Viewport;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class Viewport :750
// {
struct Viewport_type : ::g::Fuse::Elements::Element_type
{
    ::g::Fuse::IViewport interface13;
};

Viewport_type* Viewport_typeof();
void Viewport__ctor_4_fn(Viewport* __this);
void Viewport__CalcRenderBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds** __retval);
void Viewport__get_CullFace_fn(Viewport* __this, int* __retval);
void Viewport__set_CullFace_fn(Viewport* __this, int* value);
void Viewport__get_Flatten_fn(Viewport* __this, bool* __retval);
void Viewport__set_Flatten_fn(Viewport* __this, bool* value);
void Viewport__get_Frustum_fn(Viewport* __this, uObject** __retval);
void Viewport__set_Frustum_fn(Viewport* __this, uObject* value);
void Viewport__get_HasCullFace_fn(Viewport* __this, bool* __retval);
void Viewport__get_HitTestBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds** __retval);
void Viewport__init_DrawCalls_fn(Viewport* __this);
void Viewport__New2_fn(Viewport** __retval);
void Viewport__OnDraw_fn(Viewport* __this, ::g::Fuse::DrawContext* dc);
void Viewport__get_Perspective_fn(Viewport* __this, float* __retval);
void Viewport__set_Perspective_fn(Viewport* __this, float* value);
void Viewport__get_PixelSize_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__get_PixelsPerPoint_fn(Viewport* __this, float* __retval);
void Viewport__PointToWorldRay_fn(Viewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval);
void Viewport__get_ProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__get_ProjectionTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__get_RootVisual_fn(Viewport* __this, ::g::Fuse::Visual** __retval);
void Viewport__set_RootVisual_fn(Viewport* __this, ::g::Fuse::Visual* value);
void Viewport__get_Size_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__UpdateFrustum_fn(Viewport* __this);
void Viewport__get_ViewOrigin_fn(Viewport* __this, ::g::Uno::Float3* __retval);
void Viewport__get_ViewProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__get_ViewProjectionTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__get_ViewRange_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__get_ViewTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__get_ViewTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);

struct Viewport : ::g::Fuse::Elements::Element
{
    int _cullFace;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_79d7a860;
    bool _flatten;
    uStrong<uObject*> _frustum;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    bool _hasCullFace;
    float _perspective;
    ::g::Uno::Float4x4 OnDraw_LocalTransform_79d7a860_4_9_2;
    ::g::Uno::Float4x4 OnDraw_LocalTransform_79d7a860_4_9_3;
    ::g::Uno::Float4x4 OnDraw_LocalTransform_79d7a860_4_9_4;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnDraw_VertexData_79d7a860_7_2_1;

    void ctor_4();
    int CullFace();
    void CullFace(int value);
    bool Flatten();
    void Flatten(bool value);
    uObject* Frustum();
    void Frustum(uObject* value);
    bool HasCullFace();
    void init_DrawCalls();
    float Perspective();
    void Perspective(float value);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pointPos);
    ::g::Uno::Float4x4 ProjectionTransform();
    ::g::Uno::Float4x4 ProjectionTransformInverse();
    ::g::Fuse::Visual* RootVisual();
    void RootVisual(::g::Fuse::Visual* value);
    ::g::Uno::Float2 Size();
    void UpdateFrustum();
    ::g::Uno::Float3 ViewOrigin();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    ::g::Uno::Float2 ViewRange();
    ::g::Uno::Float4x4 ViewTransform();
    ::g::Uno::Float4x4 ViewTransformInverse();
    static Viewport* New2();
};
// }

}}} // ::g::Fuse::Elements
