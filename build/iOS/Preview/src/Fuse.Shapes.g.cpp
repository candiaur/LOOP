// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Antialiasing.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.PathGeometry.h>
#include <Fuse.Drawing.PathGeometryRenderer.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.WindingRules.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Shapes.FillRule.h>
#include <Fuse.Shapes.FitMode.h>
#include <Fuse.Shapes.GeometryCache.h>
#include <Fuse.Shapes.GeometryCacheEntry.h>
#include <Fuse.Shapes.Path.h>
#include <Fuse.Shapes.PathScaleMode.h>
#include <Fuse.Shapes.PathShape.h>
#include <Fuse.Shapes.Shape.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualBounds.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.Vector.h>
static uType* TYPES[25];

namespace g{
namespace Fuse{
namespace Shapes{

// /usr/local/share/uno/Packages/Fuse.Shapes/0.29.22/$.uno
// -------------------------------------------------------

// public enum FillRule :16
uEnumType* FillRule_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Shapes.FillRule", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "NonZero", 0LL,
        "EvenOdd", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Shapes/0.29.22/$.uno
// -------------------------------------------------------

// public enum FitMode :21
uEnumType* FitMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Shapes.FitMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "GeometryMaximum", 0LL,
        "StrokeMaximum", 1LL,
        "ShrinkToGeometry", 2LL,
        "ShrinkToStroke", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Shapes/0.29.22/$.uno
// -------------------------------------------------------

// internal sealed class GeometryCache :39
// {
static void GeometryCache_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Shapes::GeometryCacheEntry_typeof());
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Shapes::GeometryCacheEntry_typeof());
    ::TYPES[3] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Shapes::GeometryCacheEntry_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Shapes::GeometryCacheEntry_typeof()), offsetof(::g::Fuse::Shapes::GeometryCache, _cache), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Shapes::GeometryCache, _frame), 0,
        GeometryCache_typeof(), (uintptr_t)&::g::Fuse::Shapes::GeometryCache::_instance_, uFieldFlagsStatic);
}

uType* GeometryCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(GeometryCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Shapes.GeometryCache", options);
    type->fp_build_ = GeometryCache_build;
    type->fp_ctor_ = (void*)GeometryCache__New1_fn;
    return type;
}

// private GeometryCache() :51
void GeometryCache__ctor__fn(GeometryCache* __this)
{
    __this->ctor_();
}

// private Fuse.Drawing.PathGeometry GetOrCreateImpl(string data) :56
void GeometryCache__GetOrCreateImpl_fn(GeometryCache* __this, uString* data, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = __this->GetOrCreateImpl(data);
}

// public static Fuse.Drawing.PathGeometry GetOrParse(string data) :43
void GeometryCache__GetOrParse_fn(uString* data, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = GeometryCache::GetOrParse(data);
}

// private GeometryCache New() :51
void GeometryCache__New1_fn(GeometryCache** __retval)
{
    *__retval = GeometryCache::New1();
}

// private void Update() :65
void GeometryCache__Update_fn(GeometryCache* __this)
{
    __this->Update();
}

uSStrong<GeometryCache*> GeometryCache::_instance_;

// private GeometryCache() [instance] :51
void GeometryCache::ctor_()
{
    uStackFrame __("Fuse.Shapes.GeometryCache", ".ctor()");
    _cache = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Shapes.GeometryCacheEntry>*/]));
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)GeometryCache__Update_fn, this), 0);
}

// private Fuse.Drawing.PathGeometry GetOrCreateImpl(string data) [instance] :56
::g::Fuse::Drawing::PathGeometry* GeometryCache::GetOrCreateImpl(uString* data)
{
    uStackFrame __("Fuse.Shapes.GeometryCache", "GetOrCreateImpl(string)");
    bool ret4;
    ::g::Fuse::Shapes::GeometryCacheEntry* _entry;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_cache), data, (void**)(&_entry), &ret4), ret4))
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_cache), data, _entry = ::g::Fuse::Shapes::GeometryCacheEntry::New1(::g::Fuse::Drawing::PathGeometry::Parse(data)));

    _entry->LastUse = _frame;
    return _entry->Geometry;
}

// private void Update() [instance] :65
void GeometryCache::Update()
{
    uStackFrame __("Fuse.Shapes.GeometryCache", "Update()");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Fuse::Shapes::GeometryCacheEntry*> > ret5;
    _frame++;
    ::g::Uno::Collections::Dictionary* newCache = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Shapes.GeometryCacheEntry>*/]);

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Fuse::Shapes::GeometryCacheEntry*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_cache), &ret5), ret5); enum1.MoveNext(::TYPES[2/*Uno.Collections.Dictionary<string, Fuse.Shapes.GeometryCacheEntry>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Fuse::Shapes::GeometryCacheEntry*> > entry = enum1.Current(::TYPES[2/*Uno.Collections.Dictionary<string, Fuse.Shapes.GeometryCacheEntry>.Enumerator*/]);
        int framesSinceLastUse = _frame - uPtr(entry.Value(::TYPES[3/*Uno.Collections.KeyValuePair<string, Fuse.Shapes.GeometryCacheEntry>*/]))->LastUse;

        if ((framesSinceLastUse > 0) && (framesSinceLastUse <= 10))
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(newCache), entry.Key(::TYPES[3/*Uno.Collections.KeyValuePair<string, Fuse.Shapes.GeometryCacheEntry>*/]), entry.Value(::TYPES[3/*Uno.Collections.KeyValuePair<string, Fuse.Shapes.GeometryCacheEntry>*/]));
    }

    _cache = newCache;
}

// public static Fuse.Drawing.PathGeometry GetOrParse(string data) [static] :43
::g::Fuse::Drawing::PathGeometry* GeometryCache::GetOrParse(uString* data)
{
    uStackFrame __("Fuse.Shapes.GeometryCache", "GetOrParse(string)");
    GeometryCache* ind2;
    return uPtr((ind2 = GeometryCache::_instance_, (ind2 != NULL) ? ind2 : (GeometryCache*)(GeometryCache::_instance_ = GeometryCache::New1())))->GetOrCreateImpl(data);
}

// private GeometryCache New() [static] :51
GeometryCache* GeometryCache::New1()
{
    GeometryCache* obj3 = (GeometryCache*)uNew(GeometryCache_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Shapes/0.29.22/$.uno
// -------------------------------------------------------

// internal sealed class GeometryCacheEntry :29
// {
static void GeometryCacheEntry_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Shapes::GeometryCacheEntry, Geometry), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Shapes::GeometryCacheEntry, LastUse), 0);
}

uType* GeometryCacheEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GeometryCacheEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Shapes.GeometryCacheEntry", options);
    type->fp_build_ = GeometryCacheEntry_build;
    return type;
}

// public GeometryCacheEntry(Fuse.Drawing.PathGeometry geometry) :33
void GeometryCacheEntry__ctor__fn(GeometryCacheEntry* __this, ::g::Fuse::Drawing::PathGeometry* geometry)
{
    __this->ctor_(geometry);
}

// public GeometryCacheEntry New(Fuse.Drawing.PathGeometry geometry) :33
void GeometryCacheEntry__New1_fn(::g::Fuse::Drawing::PathGeometry* geometry, GeometryCacheEntry** __retval)
{
    *__retval = GeometryCacheEntry::New1(geometry);
}

// public GeometryCacheEntry(Fuse.Drawing.PathGeometry geometry) [instance] :33
void GeometryCacheEntry::ctor_(::g::Fuse::Drawing::PathGeometry* geometry)
{
    uStackFrame __("Fuse.Shapes.GeometryCacheEntry", ".ctor(Fuse.Drawing.PathGeometry)");
    Geometry = geometry;
}

// public GeometryCacheEntry New(Fuse.Drawing.PathGeometry geometry) [static] :33
GeometryCacheEntry* GeometryCacheEntry::New1(::g::Fuse::Drawing::PathGeometry* geometry)
{
    GeometryCacheEntry* obj1 = (GeometryCacheEntry*)uNew(GeometryCacheEntry_typeof());
    obj1->ctor_(geometry);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Shapes/0.29.22/$.uno
// -------------------------------------------------------

// public sealed class Path :87
// {
static void Path_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[5] = ::g::Fuse::Visual_typeof();
    ::TYPES[6] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Shapes::PathShape_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Shapes::PathShape_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Shapes::PathShape_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Shapes::PathShape_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Shapes::PathShape_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Shapes::PathShape_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface12));
    type->SetFields(88,
        ::g::Fuse::Shapes::FillRule_typeof(), offsetof(::g::Fuse::Shapes::Path, _fillRule), 0,
        ::g::Fuse::Shapes::FitMode_typeof(), offsetof(::g::Fuse::Shapes::Path, _fitMode), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Shapes::Path, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Shapes::Path, _postScale), 0,
        ::g::Fuse::Shapes::PathScaleMode_typeof(), offsetof(::g::Fuse::Shapes::Path, _scaleMode), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Shapes::Path, sizing), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_ContentAlignment", NULL, (void*)Path__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)Path__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Data", NULL, (void*)Path__get_Data_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)Path__set_Data_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_FillRule", NULL, (void*)Path__get_FillRule_fn, 0, false, ::g::Fuse::Shapes::FillRule_typeof(), 0),
        new uFunction("set_FillRule", NULL, (void*)Path__set_FillRule_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Shapes::FillRule_typeof()),
        new uFunction("get_FitMode", NULL, (void*)Path__get_FitMode_fn, 0, false, ::g::Fuse::Shapes::FitMode_typeof(), 0),
        new uFunction("set_FitMode", NULL, (void*)Path__set_FitMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Shapes::FitMode_typeof()),
        new uFunction("get_Geometry", NULL, (void*)Path__get_Geometry_fn, 0, false, ::g::Fuse::Drawing::PathGeometry_typeof(), 0),
        new uFunction("set_Geometry", NULL, (void*)Path__set_Geometry_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::PathGeometry_typeof()),
        new uFunction(".ctor", NULL, (void*)Path__New2_fn, 0, true, Path_typeof(), 0),
        new uFunction("get_ScaleMode", NULL, (void*)Path__get_ScaleMode_fn, 0, false, ::g::Fuse::Shapes::PathScaleMode_typeof(), 0),
        new uFunction("set_ScaleMode", NULL, (void*)Path__set_ScaleMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Shapes::PathScaleMode_typeof()),
        new uFunction("get_StretchDirection", NULL, (void*)Path__get_StretchDirection_fn, 0, false, ::g::Fuse::Elements::StretchDirection_typeof(), 0),
        new uFunction("set_StretchDirection", NULL, (void*)Path__set_StretchDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchDirection_typeof()),
        new uFunction("get_StretchMode", NULL, (void*)Path__get_StretchMode_fn, 0, false, ::g::Fuse::Elements::StretchMode_typeof(), 0),
        new uFunction("set_StretchMode", NULL, (void*)Path__set_StretchMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchMode_typeof()));
}

::g::Fuse::Shapes::PathShape_type* Path_typeof()
{
    static uSStrong< ::g::Fuse::Shapes::PathShape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 94;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Path);
    options.TypeSize = sizeof(::g::Fuse::Shapes::PathShape_type);
    type = (::g::Fuse::Shapes::PathShape_type*)uClassType::New("Fuse.Shapes.Path", options);
    type->SetBase(::g::Fuse::Shapes::PathShape_typeof());
    type->fp_build_ = Path_build;
    type->fp_ctor_ = (void*)Path__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*))Path__ArrangePaddingBox_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**))Path__CalcRenderBounds_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Path__GetContentSize_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))Path__OnDraw_fn;
    type->fp_UpdatePath = (void(*)(::g::Fuse::Shapes::PathShape*))Path__UpdatePath_fn;
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
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
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

// public generated Path() :87
void Path__ctor_5_fn(Path* __this)
{
    __this->ctor_5();
}

// private float4x4 AlignMatrix(float4x4 b) :293
void Path__AlignMatrix_fn(Path* __this, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->AlignMatrix(*b);
}

// protected override sealed void ArrangePaddingBox(Fuse.LayoutParams lp) :253
void Path__ArrangePaddingBox_fn(Path* __this, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Shapes.Path", "ArrangePaddingBox(Fuse.LayoutParams)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(__this->sizing)->padding = __this->Padding();
    ::g::Uno::Float2 contentDesiredSize = __this->GetNaturalContentSize();
    ::g::Uno::Float2 scale = uPtr(__this->sizing)->CalcScale(lp_.Size(), contentDesiredSize);
    __this->_origin = uPtr(__this->sizing)->CalcOrigin(lp_.Size(), ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));

    if (__this->_scaleMode == 0)
        uPtr(__this->Renderer())->PreScale(scale);
    else
        __this->_postScale = scale;

    switch (__this->_fitMode)
    {
        case 0:
            break;
        case 1:
        {
            __this->_origin = ::g::Uno::Float2__op_Addition2(__this->_origin, (ind1 = uPtr(__this->Renderer())->StrokePadding(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)));
            break;
        }
        case 2:
        {
            __this->_origin = ::g::Uno::Float2__op_Subtraction2(__this->_origin, uPtr(__this->Renderer())->InnerBounds().Minimum());
            break;
        }
        case 3:
        {
            __this->_origin = ::g::Uno::Float2__op_Subtraction2(__this->_origin, uPtr(__this->Renderer())->InnerBounds().Minimum());
            __this->_origin = ::g::Uno::Float2__op_Addition2(__this->_origin, (ind2 = uPtr(__this->Renderer())->StrokePadding(), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
            break;
        }
    }
}

// protected override sealed Fuse.VisualBounds CalcRenderBounds() :304
void Path__CalcRenderBounds_fn(Path* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Shapes.Path", "CalcRenderBounds()");
    ::g::Fuse::VisualBounds* ret6;
    ::g::Uno::Float4x4 m = __this->AlignMatrix(::g::Uno::Float4x4__Identity());
    ::g::Uno::Rect b = uPtr(__this->Renderer())->Bounds();
    ::g::Uno::Float4 ind3 = ::g::Uno::Vector::Transform1(b.Minimum(), m);
    ::g::Uno::Float2 tl = ::g::Uno::Float2__New2(ind3.X, ind3.Y);
    ::g::Uno::Float4 ind4 = ::g::Uno::Vector::Transform1(b.Maximum(), m);
    ::g::Uno::Float2 br = ::g::Uno::Float2__New2(ind4.X, ind4.Y);
    return *__retval = uPtr((::g::Fuse::Shapes::PathShape__CalcRenderBounds_fn(__this, &ret6), ret6))->AddRect(tl, br), void();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :116
void Path__get_ContentAlignment_fn(Path* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :117
void Path__set_ContentAlignment_fn(Path* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public string get_Data() :183
void Path__get_Data_fn(Path* __this, uString** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(string value) :184
void Path__set_Data_fn(Path* __this, uString* value)
{
    __this->Data(value);
}

// public Fuse.Shapes.FillRule get_FillRule() :191
void Path__get_FillRule_fn(Path* __this, int* __retval)
{
    *__retval = __this->FillRule();
}

// public void set_FillRule(Fuse.Shapes.FillRule value) :192
void Path__set_FillRule_fn(Path* __this, int* value)
{
    __this->FillRule(*value);
}

// public Fuse.Shapes.FitMode get_FitMode() :128
void Path__get_FitMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->FitMode();
}

// public void set_FitMode(Fuse.Shapes.FitMode value) :129
void Path__set_FitMode_fn(Path* __this, int* value)
{
    __this->FitMode(*value);
}

// public Fuse.Drawing.PathGeometry get_Geometry() :166
void Path__get_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = __this->Geometry();
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) :167
void Path__set_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry* value)
{
    __this->Geometry(value);
}

// protected override sealed float2 GetContentSize(Fuse.LayoutParams lp) :243
void Path__GetContentSize_fn(Path* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Shapes.Path", "GetContentSize(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 natural = __this->GetNaturalContentSize();
    uPtr(__this->sizing)->padding = ::g::Uno::Float4__New1(0.0f);
    ::g::Uno::Float2 r = uPtr(__this->sizing)->ExpandFillSize(natural, lp_);
    return *__retval = r, void();
}

// protected float2 GetNaturalContentSize() :201
void Path__GetNaturalContentSize_fn(Path* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetNaturalContentSize();
}

// public generated Path New() :87
void Path__New2_fn(Path** __retval)
{
    *__retval = Path::New2();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :287
void Path__OnDraw_fn(Path* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Shapes.Path", "OnDraw(Fuse.DrawContext)");
    ::g::Uno::Float4x4 r = __this->AlignMatrix(uPtr(dc)->GetLocalToClipTransform(__this));
    uPtr(__this->Renderer())->Draw(dc, r, __this->ActualSize());
}

// private void OnSizingChanged() :158
void Path__OnSizingChanged_fn(Path* __this)
{
    __this->OnSizingChanged();
}

// public Fuse.Shapes.PathScaleMode get_ScaleMode() :142
void Path__get_ScaleMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->ScaleMode();
}

// public void set_ScaleMode(Fuse.Shapes.PathScaleMode value) :143
void Path__set_ScaleMode_fn(Path* __this, int* value)
{
    __this->ScaleMode(*value);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :105
void Path__get_StretchDirection_fn(Path* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :106
void Path__set_StretchDirection_fn(Path* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :94
void Path__get_StretchMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :95
void Path__set_StretchMode_fn(Path* __this, int* value)
{
    __this->StretchMode(*value);
}

// protected override sealed void UpdatePath() :175
void Path__UpdatePath_fn(Path* __this)
{
}

// public generated Path() [instance] :87
void Path::ctor_5()
{
    uStackFrame __("Fuse.Shapes.Path", ".ctor()");
    sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _fitMode = 2;
    _scaleMode = 1;
    _postScale = ::g::Uno::Float2__New1(1.0f);
    ctor_4();
}

// private float4x4 AlignMatrix(float4x4 b) [instance] :293
::g::Uno::Float4x4 Path::AlignMatrix(::g::Uno::Float4x4 b)
{
    uStackFrame __("Fuse.Shapes.Path", "AlignMatrix(float4x4)");
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New4(_origin, 0.0f));
    ::g::Uno::Float4x4 r0 = ::g::Uno::Matrix::Mul8(t, b);
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New4(_postScale, 1.0f));
    ::g::Uno::Float4x4 r1 = ::g::Uno::Matrix::Mul8(s, r0);
    return r1;
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :116
int Path::ContentAlignment()
{
    uStackFrame __("Fuse.Shapes.Path", "get_ContentAlignment()");
    return uPtr(sizing)->align;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :117
void Path::ContentAlignment(int value)
{
    uStackFrame __("Fuse.Shapes.Path", "set_ContentAlignment(Fuse.Elements.Alignment)");

    if (uPtr(sizing)->SetAlignment(value))
        OnSizingChanged();
}

// public string get_Data() [instance] :183
uString* Path::Data()
{
    uStackFrame __("Fuse.Shapes.Path", "get_Data()");
    return uPtr(uPtr(Renderer())->Geometry())->ToString();
}

// public void set_Data(string value) [instance] :184
void Path::Data(uString* value)
{
    uStackFrame __("Fuse.Shapes.Path", "set_Data(string)");
    uPtr(Renderer())->Geometry(::g::Fuse::Shapes::GeometryCache::GetOrParse(value));
}

// public Fuse.Shapes.FillRule get_FillRule() [instance] :191
int Path::FillRule()
{
    uStackFrame __("Fuse.Shapes.Path", "get_FillRule()");
    return _fillRule;
}

// public void set_FillRule(Fuse.Shapes.FillRule value) [instance] :192
void Path::FillRule(int value)
{
    uStackFrame __("Fuse.Shapes.Path", "set_FillRule(Fuse.Shapes.FillRule)");
    _fillRule = value;
    uPtr(Renderer())->FillRule((_fillRule == 1) ? uDelegate::New(::TYPES[6/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__Odd_fn) : uDelegate::New(::TYPES[6/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__NonZero_fn));
}

// public Fuse.Shapes.FitMode get_FitMode() [instance] :128
int Path::FitMode()
{
    uStackFrame __("Fuse.Shapes.Path", "get_FitMode()");
    return _fitMode;
}

// public void set_FitMode(Fuse.Shapes.FitMode value) [instance] :129
void Path::FitMode(int value)
{
    uStackFrame __("Fuse.Shapes.Path", "set_FitMode(Fuse.Shapes.FitMode)");

    if (value != _fitMode)
    {
        _fitMode = value;
        OnSizingChanged();
    }
}

// public Fuse.Drawing.PathGeometry get_Geometry() [instance] :166
::g::Fuse::Drawing::PathGeometry* Path::Geometry()
{
    uStackFrame __("Fuse.Shapes.Path", "get_Geometry()");
    return uPtr(Renderer())->Geometry();
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) [instance] :167
void Path::Geometry(::g::Fuse::Drawing::PathGeometry* value)
{
    uStackFrame __("Fuse.Shapes.Path", "set_Geometry(Fuse.Drawing.PathGeometry)");
    uPtr(Renderer())->Geometry(value);
    InvalidateRenderBounds();
}

// protected float2 GetNaturalContentSize() [instance] :201
::g::Uno::Float2 Path::GetNaturalContentSize()
{
    uStackFrame __("Fuse.Shapes.Path", "GetNaturalContentSize()");
    ::g::Uno::Float2 hi = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 lo = ::g::Uno::Float2__New1(0.0f);

    switch (_fitMode)
    {
        case 0:
        {
            lo = ::g::Uno::Float2__New1(0.0f);
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            break;
        }
        case 1:
        {
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            ::g::Uno::Float4 s = uPtr(Renderer())->StrokePadding();
            hi.X = (hi.X + s.Item(2));
            hi.Y = (hi.Y + s.Item(3));
            lo.X = (lo.X - s.Item(0));
            lo.Y = (lo.Y - s.Item(1));
            break;
        }
        case 2:
        {
            lo = uPtr(Renderer())->InnerBounds().Minimum();
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            break;
        }
        case 3:
        {
            lo = uPtr(Renderer())->InnerBounds().Minimum();
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            ::g::Uno::Float4 s1 = uPtr(Renderer())->StrokePadding();
            lo.X = (lo.X - s1.Item(0));
            lo.Y = (lo.Y - s1.Item(1));
            hi.X = (hi.X + s1.Item(2));
            hi.Y = (hi.Y + s1.Item(3));
            break;
        }
    }

    ::g::Uno::Float2 natural = ::g::Uno::Float2__op_Subtraction2(hi, lo);
    return natural;
}

// private void OnSizingChanged() [instance] :158
void Path::OnSizingChanged()
{
    uStackFrame __("Fuse.Shapes.Path", "OnSizingChanged()");
    InvalidateLayout(2);
    InvalidateVisual();
}

// public Fuse.Shapes.PathScaleMode get_ScaleMode() [instance] :142
int Path::ScaleMode()
{
    uStackFrame __("Fuse.Shapes.Path", "get_ScaleMode()");
    return _scaleMode;
}

// public void set_ScaleMode(Fuse.Shapes.PathScaleMode value) [instance] :143
void Path::ScaleMode(int value)
{
    uStackFrame __("Fuse.Shapes.Path", "set_ScaleMode(Fuse.Shapes.PathScaleMode)");

    if (_scaleMode != value)
    {
        _scaleMode = value;

        if (_scaleMode != 0)
            uPtr(Renderer())->PreScale(::g::Uno::Float2__New1(1.0f));
        else
            _postScale = ::g::Uno::Float2__New1(1.0f);

        OnSizingChanged();
    }
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :105
int Path::StretchDirection()
{
    uStackFrame __("Fuse.Shapes.Path", "get_StretchDirection()");
    return uPtr(sizing)->stretchDirection;
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :106
void Path::StretchDirection(int value)
{
    uStackFrame __("Fuse.Shapes.Path", "set_StretchDirection(Fuse.Elements.StretchDirection)");

    if (uPtr(sizing)->SetStretchDirection(value))
        OnSizingChanged();
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :94
int Path::StretchMode()
{
    uStackFrame __("Fuse.Shapes.Path", "get_StretchMode()");
    return uPtr(sizing)->stretchMode;
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :95
void Path::StretchMode(int value)
{
    uStackFrame __("Fuse.Shapes.Path", "set_StretchMode(Fuse.Elements.StretchMode)");

    if (uPtr(sizing)->SetStretchMode(value))
        OnSizingChanged();
}

// public generated Path New() [static] :87
Path* Path::New2()
{
    Path* obj5 = (Path*)uNew(Path_typeof());
    obj5->ctor_5();
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Shapes/0.29.22/$.uno
// -------------------------------------------------------

// public enum PathScaleMode :80
uEnumType* PathScaleMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Shapes.PathScaleMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Pre", 0LL,
        "Post", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Shapes/0.29.22/$.uno
// -------------------------------------------------------

// public abstract class PathShape :492
// {
static void PathShape_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::Visual_typeof();
    ::TYPES[7] = ::g::Fuse::IViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(PathShape_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PathShape_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(PathShape_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(PathShape_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(PathShape_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(PathShape_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(PathShape_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(PathShape_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(PathShape_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(PathShape_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(PathShape_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(PathShape_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(PathShape_type, interface12));
    type->SetFields(87,
        ::g::Fuse::Drawing::PathGeometryRenderer_typeof(), offsetof(::g::Fuse::Shapes::PathShape, _renderer), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Antialiasing", NULL, (void*)PathShape__get_Antialiasing_fn, 0, false, ::g::Fuse::Drawing::Antialiasing_typeof(), 0),
        new uFunction("set_Antialiasing", NULL, (void*)PathShape__set_Antialiasing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Antialiasing_typeof()),
        new uFunction("get_Fill", NULL, (void*)PathShape__get_Fill_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_Fill", NULL, (void*)PathShape__set_Fill_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_Fills", NULL, (void*)PathShape__get_Fills_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), 0),
        new uFunction("GetHitPart", NULL, (void*)PathShape__GetHitPart_fn, 0, false, uObject_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_HasFills", NULL, (void*)PathShape__get_HasFills_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasStrokes", NULL, (void*)PathShape__get_HasStrokes_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Stroke", NULL, (void*)PathShape__get_Stroke_fn, 0, false, ::g::Fuse::Drawing::Stroke_typeof(), 0),
        new uFunction("set_Stroke", NULL, (void*)PathShape__set_Stroke_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Stroke_typeof()),
        new uFunction("get_Strokes", NULL, (void*)PathShape__get_Strokes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), 0));
}

PathShape_type* PathShape_typeof()
{
    static uSStrong<PathShape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 88;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(PathShape);
    options.TypeSize = sizeof(PathShape_type);
    type = (PathShape_type*)uClassType::New("Fuse.Shapes.PathShape", options);
    type->SetBase(::g::Fuse::Elements::Element_typeof());
    type->fp_build_ = PathShape_build;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**))PathShape__CalcRenderBounds_fn;
    type->fp_get_HitTestLocalVisualBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**))PathShape__get_HitTestLocalVisualBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))PathShape__OnDraw_fn;
    type->fp_OnHitTestLocalVisual = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))PathShape__OnHitTestLocalVisual_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PathShape__OnRooted_fn;
    type->fp_SoftDispose = (void(*)(::g::Fuse::Node*))PathShape__SoftDispose_fn;
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
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
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

// protected PathShape() :543
void PathShape__ctor_4_fn(PathShape* __this)
{
    __this->ctor_4();
}

// public Fuse.Drawing.Antialiasing get_Antialiasing() :556
void PathShape__get_Antialiasing_fn(PathShape* __this, int* __retval)
{
    *__retval = __this->Antialiasing();
}

// public void set_Antialiasing(Fuse.Drawing.Antialiasing value) :557
void PathShape__set_Antialiasing_fn(PathShape* __this, int* value)
{
    __this->Antialiasing(*value);
}

// protected override Fuse.VisualBounds CalcRenderBounds() :562
void PathShape__CalcRenderBounds_fn(PathShape* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Shapes.PathShape", "CalcRenderBounds()");
    return *__retval = ::g::Fuse::VisualBounds::Rect(uPtr(__this->Renderer())->Bounds().Minimum(), uPtr(__this->Renderer())->Bounds().Maximum()), void();
}

// public Fuse.Drawing.Brush get_Fill() :497
void PathShape__get_Fill_fn(PathShape* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Fill();
}

// public void set_Fill(Fuse.Drawing.Brush value) :498
void PathShape__set_Fill_fn(PathShape* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Fill(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() :504
void PathShape__get_Fills_fn(PathShape* __this, uObject** __retval)
{
    *__retval = __this->Fills();
}

// public object GetHitPart(float2 localCoords) :585
void PathShape__GetHitPart_fn(PathShape* __this, ::g::Uno::Float2* localCoords, uObject** __retval)
{
    *__retval = __this->GetHitPart(*localCoords);
}

// public bool get_HasFills() :509
void PathShape__get_HasFills_fn(PathShape* __this, bool* __retval)
{
    *__retval = __this->HasFills();
}

// public bool get_HasStrokes() :519
void PathShape__get_HasStrokes_fn(PathShape* __this, bool* __retval)
{
    *__retval = __this->HasStrokes();
}

// protected override sealed Fuse.VisualBounds get_HitTestLocalVisualBounds() :582
void PathShape__get_HitTestLocalVisualBounds_fn(PathShape* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Shapes.PathShape", "get_HitTestLocalVisualBounds()");
    return *__retval = ::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// private void Invalidated() :548
void PathShape__Invalidated_fn(PathShape* __this)
{
    __this->Invalidated();
}

// protected override void OnDraw(Fuse.DrawContext dc) :567
void PathShape__OnDraw_fn(PathShape* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Shapes.PathShape", "OnDraw(Fuse.DrawContext)");
    uPtr(__this->Renderer())->Draw(dc, uPtr(dc)->GetLocalToClipTransform(__this), __this->ActualSize());
}

// protected override sealed void OnHitTestLocalVisual(Fuse.HitTestContext htc) :572
void PathShape__OnHitTestLocalVisual_fn(PathShape* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Shapes.PathShape", "OnHitTestLocalVisual(Fuse.HitTestContext)");
    uObject* hitPart = __this->GetHitPart(uPtr(htc)->LocalPoint());

    if (hitPart != NULL)
        htc->Hit(__this);

    ::g::Fuse::Elements::Element__OnHitTestLocalVisual_fn(__this, htc);
}

// protected override sealed void OnRooted() :537
void PathShape__OnRooted_fn(PathShape* __this)
{
    uStackFrame __("Fuse.Shapes.PathShape", "OnRooted()");
    ::g::Fuse::Elements::Element__OnRooted_fn(__this);
    uPtr(__this->_renderer)->Density(::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(__this->Viewport()), ::TYPES[7/*Fuse.IViewport*/])));
}

// protected Fuse.Drawing.PathGeometryRenderer get_Renderer() :530
void PathShape__get_Renderer_fn(PathShape* __this, ::g::Fuse::Drawing::PathGeometryRenderer** __retval)
{
    *__retval = __this->Renderer();
}

// protected override sealed void SoftDispose() :590
void PathShape__SoftDispose_fn(PathShape* __this)
{
    uStackFrame __("Fuse.Shapes.PathShape", "SoftDispose()");
    uPtr(__this->_renderer)->SoftDispose();
}

// public Fuse.Drawing.Stroke get_Stroke() :515
void PathShape__get_Stroke_fn(PathShape* __this, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = __this->Stroke();
}

// public void set_Stroke(Fuse.Drawing.Stroke value) :516
void PathShape__set_Stroke_fn(PathShape* __this, ::g::Fuse::Drawing::Stroke* value)
{
    __this->Stroke(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() :524
void PathShape__get_Strokes_fn(PathShape* __this, uObject** __retval)
{
    *__retval = __this->Strokes();
}

// protected PathShape() [instance] :543
void PathShape::ctor_4()
{
    uStackFrame __("Fuse.Shapes.PathShape", ".ctor()");
    _renderer = ::g::Fuse::Drawing::PathGeometryRenderer::New1();
    ctor_3();
    uPtr(Renderer())->add_VisualInvalidated(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)PathShape__Invalidated_fn, this));
}

// public Fuse.Drawing.Antialiasing get_Antialiasing() [instance] :556
int PathShape::Antialiasing()
{
    uStackFrame __("Fuse.Shapes.PathShape", "get_Antialiasing()");
    return uPtr(Renderer())->Antialiasing();
}

// public void set_Antialiasing(Fuse.Drawing.Antialiasing value) [instance] :557
void PathShape::Antialiasing(int value)
{
    uStackFrame __("Fuse.Shapes.PathShape", "set_Antialiasing(Fuse.Drawing.Antialiasing)");
    uPtr(Renderer())->Antialiasing(value);
}

// public Fuse.Drawing.Brush get_Fill() [instance] :497
::g::Fuse::Drawing::Brush* PathShape::Fill()
{
    uStackFrame __("Fuse.Shapes.PathShape", "get_Fill()");
    return uPtr(Renderer())->Fill();
}

// public void set_Fill(Fuse.Drawing.Brush value) [instance] :498
void PathShape::Fill(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("Fuse.Shapes.PathShape", "set_Fill(Fuse.Drawing.Brush)");
    uPtr(Renderer())->Fill(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() [instance] :504
uObject* PathShape::Fills()
{
    uStackFrame __("Fuse.Shapes.PathShape", "get_Fills()");
    return uPtr(Renderer())->Fills();
}

// public object GetHitPart(float2 localCoords) [instance] :585
uObject* PathShape::GetHitPart(::g::Uno::Float2 localCoords)
{
    uStackFrame __("Fuse.Shapes.PathShape", "GetHitPart(float2)");
    ::g::Uno::Float2 localCoords_ = localCoords;
    return uPtr(Renderer())->GetHitPart(localCoords_);
}

// public bool get_HasFills() [instance] :509
bool PathShape::HasFills()
{
    uStackFrame __("Fuse.Shapes.PathShape", "get_HasFills()");
    return uPtr(Renderer())->HasFills();
}

// public bool get_HasStrokes() [instance] :519
bool PathShape::HasStrokes()
{
    uStackFrame __("Fuse.Shapes.PathShape", "get_HasStrokes()");
    return uPtr(Renderer())->HasStrokes();
}

// private void Invalidated() [instance] :548
void PathShape::Invalidated()
{
    uStackFrame __("Fuse.Shapes.PathShape", "Invalidated()");
    InvalidateVisual();
}

// protected Fuse.Drawing.PathGeometryRenderer get_Renderer() [instance] :530
::g::Fuse::Drawing::PathGeometryRenderer* PathShape::Renderer()
{
    uStackFrame __("Fuse.Shapes.PathShape", "get_Renderer()");
    UpdatePath();
    return _renderer;
}

// public Fuse.Drawing.Stroke get_Stroke() [instance] :515
::g::Fuse::Drawing::Stroke* PathShape::Stroke()
{
    uStackFrame __("Fuse.Shapes.PathShape", "get_Stroke()");
    return uPtr(Renderer())->Stroke();
}

// public void set_Stroke(Fuse.Drawing.Stroke value) [instance] :516
void PathShape::Stroke(::g::Fuse::Drawing::Stroke* value)
{
    uStackFrame __("Fuse.Shapes.PathShape", "set_Stroke(Fuse.Drawing.Stroke)");
    uPtr(Renderer())->Stroke(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() [instance] :524
uObject* PathShape::Strokes()
{
    uStackFrame __("Fuse.Shapes.PathShape", "get_Strokes()");
    return uPtr(Renderer())->Strokes();
}
// }

// /usr/local/share/uno/Packages/Fuse.Shapes/0.29.22/$.uno
// -------------------------------------------------------

// public abstract class Shape :327
// {
static void Shape_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[11] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[12] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[13] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[14] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[15] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[16] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[19] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[20] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[21] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[22] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[23] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[24] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Shape_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Shape_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Shape_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Shape_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(Shape_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Shape_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(Shape_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(Shape_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Shape_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Shape_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Shape_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Shape_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Shape_type, interface12));
    type->SetFields(87,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), offsetof(::g::Fuse::Shapes::Shape, _fills), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Shape, _smoothness), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), offsetof(::g::Fuse::Shapes::Shape, _strokes), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Fill", NULL, (void*)Shape__get_Fill_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_Fill", NULL, (void*)Shape__set_Fill_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_Fills", NULL, (void*)Shape__get_Fills_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), 0),
        new uFunction("get_HasFills", NULL, (void*)Shape__get_HasFills_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasStrokes", NULL, (void*)Shape__get_HasStrokes_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Smoothness", NULL, (void*)Shape__get_Smoothness_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Smoothness", NULL, (void*)Shape__set_Smoothness_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Stroke", NULL, (void*)Shape__get_Stroke_fn, 0, false, ::g::Fuse::Drawing::Stroke_typeof(), 0),
        new uFunction("set_Stroke", NULL, (void*)Shape__set_Stroke_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Stroke_typeof()),
        new uFunction("get_Strokes", NULL, (void*)Shape__get_Strokes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), 0));
}

Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 90;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.Shapes.Shape", options);
    type->SetBase(::g::Fuse::Elements::Element_typeof());
    type->fp_build_ = Shape_build;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**))Shape__CalcRenderBounds_fn;
    type->fp_get_HitTestLocalVisualBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**))Shape__get_HitTestLocalVisualBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))Shape__OnDraw_fn;
    type->fp_OnPropertyChanged2 = (void(*)(::g::Fuse::Visual*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Shape__OnPropertyChanged2_fn;
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
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Shape__OnPropertyChanged2_fn;
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

// protected generated Shape() :327
void Shape__ctor_4_fn(Shape* __this)
{
    __this->ctor_4();
}

// protected override sealed Fuse.VisualBounds CalcRenderBounds() :447
void Shape__CalcRenderBounds_fn(Shape* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Shapes.Shape", "CalcRenderBounds()");
    ::g::Fuse::Drawing::Stroke* ret4;
    ::g::Fuse::VisualBounds* r = ::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize());

    if (__this->HasStrokes())

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Strokes()), ::TYPES[8/*Uno.Collections.IEnumerable<Fuse.Drawing.Stroke>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[9/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Drawing::Stroke* stroke = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[10/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret4), ret4);
            float b = uPtr(stroke)->Offset() + uPtr(stroke)->Width();

            if (b > 0.0f)
                r = uPtr(r)->InflateXY(b);
        }

    r = uPtr(r)->InflateXY(__this->Smoothness() - 1.0f);
    return *__retval = r, void();
}

// public Fuse.Drawing.Brush get_Fill() :338
void Shape__get_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Fill();
}

// public void set_Fill(Fuse.Drawing.Brush value) :339
void Shape__set_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Fill(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() :358
void Shape__get_Fills_fn(Shape* __this, uObject** __retval)
{
    *__retval = __this->Fills();
}

// private static Fuse.Drawing.Brush GetFill(Fuse.Shapes.Shape s) :342
void Shape__GetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = Shape::GetFill(s);
}

// private static Fuse.Drawing.Stroke GetStroke(Fuse.Shapes.Shape s) :392
void Shape__GetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = Shape::GetStroke(s);
}

// public bool get_HasFills() :384
void Shape__get_HasFills_fn(Shape* __this, bool* __retval)
{
    *__retval = __this->HasFills();
}

// public bool get_HasStrokes() :404
void Shape__get_HasStrokes_fn(Shape* __this, bool* __retval)
{
    *__retval = __this->HasStrokes();
}

// protected override sealed Fuse.VisualBounds get_HitTestLocalVisualBounds() :485
void Shape__get_HitTestLocalVisualBounds_fn(Shape* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Shapes.Shape", "get_HitTestLocalVisualBounds()");
    return *__retval = ::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :465
void Shape__OnDraw_fn(Shape* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Shapes.Shape", "OnDraw(Fuse.DrawContext)");
    ::g::Fuse::Drawing::Brush* ret7;
    ::g::Fuse::Drawing::Stroke* ret8;

    if (__this->HasFills())

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Fills()), ::TYPES[11/*Uno.Collections.IEnumerable<Fuse.Drawing.Brush>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[9/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Drawing::Brush* fill = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[12/*Uno.Collections.IEnumerator<Fuse.Drawing.Brush>*/]), &ret7), ret7);
            __this->DrawFill(dc, fill);
        }

    if (__this->HasStrokes())

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Strokes()), ::TYPES[8/*Uno.Collections.IEnumerable<Fuse.Drawing.Stroke>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[9/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Drawing::Stroke* stroke = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[10/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret8), ret8);
            __this->DrawStroke(dc, stroke);
        }
}

// private void OnFillAdded(Fuse.Drawing.Brush f) :366
void Shape__OnFillAdded_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillAdded(f);
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) :375
void Shape__OnFillRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillRemoved(f);
}

// public override sealed void OnPropertyChanged(Uno.UX.PropertyObject po, Uno.UX.Selector property) :329
void Shape__OnPropertyChanged2_fn(Shape* __this, ::g::Uno::UX::PropertyObject* po, ::g::Uno::UX::Selector* property)
{
    uStackFrame __("Fuse.Shapes.Shape", "OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector property_ = *property;

    if (uIs(po, ::TYPES[15/*Fuse.Drawing.Brush*/]) || uIs(po, ::TYPES[16/*Fuse.Drawing.Stroke*/]))
        __this->InvalidateVisual();
    else
        ::g::Fuse::Visual__OnPropertyChanged2_fn(__this, po, uCRef(property_));
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) :420
void Shape__OnStrokeAdded_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeAdded(s);
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) :426
void Shape__OnStrokeRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeRemoved(s);
}

// private static void SetFill(Fuse.Shapes.Shape s, Fuse.Drawing.Brush value) :348
void Shape__SetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush* value)
{
    Shape::SetFill(s, value);
}

// private static void SetStroke(Fuse.Shapes.Shape s, Fuse.Drawing.Stroke value) :398
void Shape__SetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke* value)
{
    Shape::SetStroke(s, value);
}

// public float get_Smoothness() :435
void Shape__get_Smoothness_fn(Shape* __this, float* __retval)
{
    *__retval = __this->Smoothness();
}

// public void set_Smoothness(float value) :436
void Shape__set_Smoothness_fn(Shape* __this, float* value)
{
    __this->Smoothness(*value);
}

// public Fuse.Drawing.Stroke get_Stroke() :389
void Shape__get_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = __this->Stroke();
}

// public void set_Stroke(Fuse.Drawing.Stroke value) :390
void Shape__set_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* value)
{
    __this->Stroke(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() :412
void Shape__get_Strokes_fn(Shape* __this, uObject** __retval)
{
    *__retval = __this->Strokes();
}

// protected generated Shape() [instance] :327
void Shape::ctor_4()
{
    uStackFrame __("Fuse.Shapes.Shape", ".ctor()");
    _smoothness = 1.0f;
    ctor_3();
}

// public Fuse.Drawing.Brush get_Fill() [instance] :338
::g::Fuse::Drawing::Brush* Shape::Fill()
{
    uStackFrame __("Fuse.Shapes.Shape", "get_Fill()");
    return Shape::GetFill(this);
}

// public void set_Fill(Fuse.Drawing.Brush value) [instance] :339
void Shape::Fill(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("Fuse.Shapes.Shape", "set_Fill(Fuse.Drawing.Brush)");
    Shape::SetFill(this, value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() [instance] :358
uObject* Shape::Fills()
{
    uStackFrame __("Fuse.Shapes.Shape", "get_Fills()");

    if (_fills == NULL)
        _fills = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[19/*Uno.Collections.ObservableList<Fuse.Drawing.Brush>*/], uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)Shape__OnFillAdded_fn, this), uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)Shape__OnFillRemoved_fn, this)));

    return (uObject*)_fills;
}

// public bool get_HasFills() [instance] :384
bool Shape::HasFills()
{
    uStackFrame __("Fuse.Shapes.Shape", "get_HasFills()");
    return (_fills != NULL) && (uPtr(_fills)->Count() > 0);
}

// public bool get_HasStrokes() [instance] :404
bool Shape::HasStrokes()
{
    uStackFrame __("Fuse.Shapes.Shape", "get_HasStrokes()");
    return (_strokes != NULL) && (uPtr(_strokes)->Count() > 0);
}

// private void OnFillAdded(Fuse.Drawing.Brush f) [instance] :366
void Shape::OnFillAdded(::g::Fuse::Drawing::Brush* f)
{
    uStackFrame __("Fuse.Shapes.Shape", "OnFillAdded(Fuse.Drawing.Brush)");

    if (uIs(f, ::TYPES[13/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[13/*Fuse.Drawing.DynamicBrush*/]))->AddPropertyListener((uObject*)this);

    InvalidateVisual();
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) [instance] :375
void Shape::OnFillRemoved(::g::Fuse::Drawing::Brush* f)
{
    uStackFrame __("Fuse.Shapes.Shape", "OnFillRemoved(Fuse.Drawing.Brush)");

    if (uIs(f, ::TYPES[13/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[13/*Fuse.Drawing.DynamicBrush*/]))->RemovePropertyListener((uObject*)this);

    InvalidateVisual();
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) [instance] :420
void Shape::OnStrokeAdded(::g::Fuse::Drawing::Stroke* s)
{
    uStackFrame __("Fuse.Shapes.Shape", "OnStrokeAdded(Fuse.Drawing.Stroke)");
    uPtr(s)->AddPropertyListener((uObject*)this);
    InvalidateVisual();
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) [instance] :426
void Shape::OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s)
{
    uStackFrame __("Fuse.Shapes.Shape", "OnStrokeRemoved(Fuse.Drawing.Stroke)");
    uPtr(s)->RemovePropertyListener((uObject*)this);
    InvalidateVisual();
}

// public float get_Smoothness() [instance] :435
float Shape::Smoothness()
{
    uStackFrame __("Fuse.Shapes.Shape", "get_Smoothness()");
    return _smoothness;
}

// public void set_Smoothness(float value) [instance] :436
void Shape::Smoothness(float value)
{
    uStackFrame __("Fuse.Shapes.Shape", "set_Smoothness(float)");

    if (_smoothness != value)
    {
        _smoothness = value;
        InvalidateVisual();
        InvalidateRenderBounds();
    }
}

// public Fuse.Drawing.Stroke get_Stroke() [instance] :389
::g::Fuse::Drawing::Stroke* Shape::Stroke()
{
    uStackFrame __("Fuse.Shapes.Shape", "get_Stroke()");
    return Shape::GetStroke(this);
}

// public void set_Stroke(Fuse.Drawing.Stroke value) [instance] :390
void Shape::Stroke(::g::Fuse::Drawing::Stroke* value)
{
    uStackFrame __("Fuse.Shapes.Shape", "set_Stroke(Fuse.Drawing.Stroke)");
    Shape::SetStroke(this, value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() [instance] :412
uObject* Shape::Strokes()
{
    uStackFrame __("Fuse.Shapes.Shape", "get_Strokes()");

    if (_strokes == NULL)
        _strokes = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[22/*Uno.Collections.ObservableList<Fuse.Drawing.Stroke>*/], uDelegate::New(::TYPES[23/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeAdded_fn, this), uDelegate::New(::TYPES[23/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeRemoved_fn, this)));

    return (uObject*)_strokes;
}

// private static Fuse.Drawing.Brush GetFill(Fuse.Shapes.Shape s) [static] :342
::g::Fuse::Drawing::Brush* Shape::GetFill(Shape* s)
{
    uStackFrame __("Fuse.Shapes.Shape", "GetFill(Fuse.Shapes.Shape)");
    ::g::Fuse::Drawing::Brush* ret5;

    if ((uPtr(s)->_fills == NULL) || (uPtr(uPtr(s)->_fills)->Count() == 0))
        return NULL;
    else
        return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(uPtr(s)->_fills), uCRef<int>(0), &ret5), ret5);
}

// private static Fuse.Drawing.Stroke GetStroke(Fuse.Shapes.Shape s) [static] :392
::g::Fuse::Drawing::Stroke* Shape::GetStroke(Shape* s)
{
    uStackFrame __("Fuse.Shapes.Shape", "GetStroke(Fuse.Shapes.Shape)");
    ::g::Fuse::Drawing::Stroke* ret6;

    if ((uPtr(s)->_strokes == NULL) || (uPtr(uPtr(s)->_strokes)->Count() == 0))
        return NULL;

    return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(uPtr(s)->_strokes), uCRef<int>(0), &ret6), ret6);
}

// private static void SetFill(Fuse.Shapes.Shape s, Fuse.Drawing.Brush value) [static] :348
void Shape::SetFill(Shape* s, ::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("Fuse.Shapes.Shape", "SetFill(Fuse.Shapes.Shape,Fuse.Drawing.Brush)");
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(s)->Fills()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(s->Fills()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), value);
}

// private static void SetStroke(Fuse.Shapes.Shape s, Fuse.Drawing.Stroke value) [static] :398
void Shape::SetStroke(Shape* s, ::g::Fuse::Drawing::Stroke* value)
{
    uStackFrame __("Fuse.Shapes.Shape", "SetStroke(Fuse.Shapes.Shape,Fuse.Drawing.Stroke)");
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(s)->Strokes()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(s->Strokes()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), value);
}
// }

}}} // ::g::Fuse::Shapes
