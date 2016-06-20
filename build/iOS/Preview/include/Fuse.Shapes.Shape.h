// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Shapes{struct Shape;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Shapes{

// public abstract class Shape :327
// {
struct Shape_type : ::g::Fuse::Elements::Element_type
{
    void(*fp_DrawFill)(::g::Fuse::Shapes::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*);
    void(*fp_DrawStroke)(::g::Fuse::Shapes::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*);
};

Shape_type* Shape_typeof();
void Shape__ctor_4_fn(Shape* __this);
void Shape__CalcRenderBounds_fn(Shape* __this, ::g::Fuse::VisualBounds** __retval);
void Shape__get_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush** __retval);
void Shape__set_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* value);
void Shape__get_Fills_fn(Shape* __this, uObject** __retval);
void Shape__GetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush** __retval);
void Shape__GetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke** __retval);
void Shape__get_HasFills_fn(Shape* __this, bool* __retval);
void Shape__get_HasStrokes_fn(Shape* __this, bool* __retval);
void Shape__get_HitTestLocalVisualBounds_fn(Shape* __this, ::g::Fuse::VisualBounds** __retval);
void Shape__OnDraw_fn(Shape* __this, ::g::Fuse::DrawContext* dc);
void Shape__OnFillAdded_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnFillRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnPropertyChanged2_fn(Shape* __this, ::g::Uno::UX::PropertyObject* po, ::g::Uno::UX::Selector* property);
void Shape__OnStrokeAdded_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__SetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush* value);
void Shape__SetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke* value);
void Shape__get_Smoothness_fn(Shape* __this, float* __retval);
void Shape__set_Smoothness_fn(Shape* __this, float* value);
void Shape__get_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke** __retval);
void Shape__set_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* value);
void Shape__get_Strokes_fn(Shape* __this, uObject** __retval);

struct Shape : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Uno::Collections::ObservableList*> _fills;
    float _smoothness;
    uStrong< ::g::Uno::Collections::ObservableList*> _strokes;

    void ctor_4();
    void DrawFill(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill) { (((Shape_type*)__type)->fp_DrawFill)(this, dc, fill); }
    void DrawStroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke) { (((Shape_type*)__type)->fp_DrawStroke)(this, dc, stroke); }
    ::g::Fuse::Drawing::Brush* Fill();
    void Fill(::g::Fuse::Drawing::Brush* value);
    uObject* Fills();
    bool HasFills();
    bool HasStrokes();
    void OnFillAdded(::g::Fuse::Drawing::Brush* f);
    void OnFillRemoved(::g::Fuse::Drawing::Brush* f);
    void OnStrokeAdded(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s);
    float Smoothness();
    void Smoothness(float value);
    ::g::Fuse::Drawing::Stroke* Stroke();
    void Stroke(::g::Fuse::Drawing::Stroke* value);
    uObject* Strokes();
    static ::g::Fuse::Drawing::Brush* GetFill(Shape* s);
    static ::g::Fuse::Drawing::Stroke* GetStroke(Shape* s);
    static void SetFill(Shape* s, ::g::Fuse::Drawing::Brush* value);
    static void SetStroke(Shape* s, ::g::Fuse::Drawing::Stroke* value);
};
// }

}}} // ::g::Fuse::Shapes
