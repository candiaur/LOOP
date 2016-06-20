// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.DrawableViewGroup.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.NativeViewRenderer.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Visual.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class DrawableViewGroup :45
// {
static void DrawableViewGroup_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::ObjC::Object_typeof());
    ::TYPES[1] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::iOS::ViewParent_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Native::iOS::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DrawableViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(DrawableViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(DrawableViewGroup_type, interface2),
        ::g::Fuse::Controls::Native::IOffscreenRenderer_typeof(), offsetof(DrawableViewGroup_type, interface3),
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(DrawableViewGroup_type, interface4));
    type->SetFields(3,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _offscreenEnabled), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _renderer), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _visual), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Add", NULL, (void*)DrawableViewGroup__Add_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::iOS::View_typeof()),
        new uFunction(".ctor", NULL, (void*)DrawableViewGroup__New1_fn, 0, true, DrawableViewGroup_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Remove", NULL, (void*)DrawableViewGroup__Remove_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::iOS::View_typeof()));
}

DrawableViewGroup_type* DrawableViewGroup_typeof()
{
    static uSStrong<DrawableViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DrawableViewGroup);
    options.TypeSize = sizeof(DrawableViewGroup_type);
    type = (DrawableViewGroup_type*)uClassType::New("Fuse.Controls.Native.iOS.DrawableViewGroup", options);
    type->SetBase(::g::Fuse::Controls::Native::iOS::ViewParent_typeof());
    type->fp_build_ = DrawableViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))DrawableViewGroup__Dispose_fn;
    type->fp_NotifyChildNewSize = (void(*)(::g::Fuse::Controls::Native::iOS::ViewParent*, ::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float2*))DrawableViewGroup__NotifyChildNewSize_fn;
    type->interface4.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface4.fp_Invalidate = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface3.fp_EnableOffscreen = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn;
    type->interface3.fp_DisableOffscreen = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))DrawableViewGroup__Dispose_fn;
    return type;
}

// public DrawableViewGroup(Fuse.Visual visual) :52
void DrawableViewGroup__ctor_2_fn(DrawableViewGroup* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public void Add(Fuse.Controls.Native.iOS.View child) :111
void DrawableViewGroup__Add_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Add(child);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) :137
void DrawableViewGroup__Add1_fn(uObject* parentHandle, uObject* childHandle)
{
    DrawableViewGroup::Add1(parentHandle, childHandle);
}

// private static ObjC.Object Create() :153
void DrawableViewGroup__Create_fn(uObject** __retval)
{
    *__retval = DrawableViewGroup::Create();
}

// private static ObjC.Object CreateContainer() :170
void DrawableViewGroup__CreateContainer_fn(uObject** __retval)
{
    *__retval = DrawableViewGroup::CreateContainer();
}

// public override sealed void Dispose() :62
void DrawableViewGroup__Dispose_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_renderer), ::TYPES[3/*Uno.IDisposable*/]));
    __this->_renderer = NULL;
    __this->_container = NULL;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->Handle());
    __this->_visual = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :72
void DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn(DrawableViewGroup* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_renderer), ::TYPES[1/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :77
void DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.INativeViewRenderer.Invalidate()");
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_renderer), ::TYPES[1/*Fuse.Controls.Native.INativeViewRenderer*/]));
}

// private void Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen() :92
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen()");

    if (__this->_offscreenEnabled)
    {
        DrawableViewGroup::Add1(__this->Handle(), __this->_container);
        __this->_offscreenEnabled = false;
    }
}

// private void Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen() :83
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen()");

    if (!__this->_offscreenEnabled)
    {
        DrawableViewGroup::Remove1(__this->_container);
        __this->_offscreenEnabled = true;
    }
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :101
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn(DrawableViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView)");
    __this->Add(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[4/*Fuse.Controls.Native.iOS.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :106
void DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn(DrawableViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView)");
    __this->Remove(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[4/*Fuse.Controls.Native.iOS.View*/]));
}

// public DrawableViewGroup New(Fuse.Visual visual) :52
void DrawableViewGroup__New1_fn(::g::Fuse::Visual* visual, DrawableViewGroup** __retval)
{
    *__retval = DrawableViewGroup::New1(visual);
}

// public override sealed void NotifyChildNewSize(Fuse.Controls.Native.iOS.View child, float2 size) :179
void DrawableViewGroup__NotifyChildNewSize_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size)
{
}

// private void OnSetFrame(ObjC.Object handle) :123
void DrawableViewGroup__OnSetFrame_fn(DrawableViewGroup* __this, uObject* handle)
{
    __this->OnSetFrame(handle);
}

// public void Remove(Fuse.Controls.Native.iOS.View child) :117
void DrawableViewGroup__Remove_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Remove(child);
}

// private static void Remove(ObjC.Object childHandle) :145
void DrawableViewGroup__Remove1_fn(uObject* childHandle)
{
    DrawableViewGroup::Remove1(childHandle);
}

// private static void SetSetFrameCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) :163
void DrawableViewGroup__SetSetFrameCallback_fn(uObject* handle, uDelegate* callback)
{
    DrawableViewGroup::SetSetFrameCallback(handle, callback);
}

// private static void UpdateFrame(ObjC.Object sourceHandle, ObjC.Object targetHandle) :129
void DrawableViewGroup__UpdateFrame_fn(uObject* sourceHandle, uObject* targetHandle)
{
    DrawableViewGroup::UpdateFrame(sourceHandle, targetHandle);
}

// public DrawableViewGroup(Fuse.Visual visual) [instance] :52
void DrawableViewGroup::ctor_2(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", ".ctor(Fuse.Visual)");
    ctor_1(DrawableViewGroup::Create());
    _visual = visual;
    DrawableViewGroup::SetSetFrameCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object>*/], (void*)DrawableViewGroup__OnSetFrame_fn, this));
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(visual, Handle());
    _container = DrawableViewGroup::CreateContainer();
    _renderer = (uObject*)::g::Fuse::Controls::Native::iOS::NativeViewRenderer::New1(_container);
    DrawableViewGroup::Add1(Handle(), _container);
}

// public void Add(Fuse.Controls.Native.iOS.View child) [instance] :111
void DrawableViewGroup::Add(::g::Fuse::Controls::Native::iOS::View* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Add(Fuse.Controls.Native.iOS.View)");
    uPtr(child)->Parent(this);
    DrawableViewGroup::Add1(_container, child->Handle());
}

// private void OnSetFrame(ObjC.Object handle) [instance] :123
void DrawableViewGroup::OnSetFrame(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "OnSetFrame(ObjC.Object)");
    DrawableViewGroup::UpdateFrame(handle, _container);
}

// public void Remove(Fuse.Controls.Native.iOS.View child) [instance] :117
void DrawableViewGroup::Remove(::g::Fuse::Controls::Native::iOS::View* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Remove(Fuse.Controls.Native.iOS.View)");
    DrawableViewGroup::Remove1(uPtr(child)->Handle());
    child->Parent(NULL);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) [static] :137
void DrawableViewGroup::Add1(uObject* parentHandle, uObject* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Add(ObjC.Object,ObjC.Object)");
    @autoreleasepool
    {
        [] (::id parentHandle, ::id childHandle) -> void
        {
            ::UIView* parent =  (::UIView*)parentHandle;
            ::UIView* child =  (::UIView*)childHandle;
            [parent addSubview:child];
        } (::g::ObjC::Helpers::GetHandle(parentHandle), ::g::ObjC::Helpers::GetHandle(childHandle));
        
    }
    
}

// private static ObjC.Object Create() [static] :153
uObject* DrawableViewGroup::Create()
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Create()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            ::SizeControl* control = [[::SizeControl alloc] init];
            [control setOpaque:false];
            [control setMultipleTouchEnabled:true];
            return control;
        } ());
        
    }
    
}

// private static ObjC.Object CreateContainer() [static] :170
uObject* DrawableViewGroup::CreateContainer()
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "CreateContainer()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            ::UIControl* control = [[::UIControl alloc] init];
            [control setOpaque:false];
            [control setMultipleTouchEnabled:true];
            control.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            return control;
        } ());
        
    }
    
}

// public DrawableViewGroup New(Fuse.Visual visual) [static] :52
DrawableViewGroup* DrawableViewGroup::New1(::g::Fuse::Visual* visual)
{
    DrawableViewGroup* obj1 = (DrawableViewGroup*)uNew(DrawableViewGroup_typeof());
    obj1->ctor_2(visual);
    return obj1;
}

// private static void Remove(ObjC.Object childHandle) [static] :145
void DrawableViewGroup::Remove1(uObject* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Remove(ObjC.Object)");
    @autoreleasepool
    {
        [] (::id childHandle) -> void
        {
            ::UIView* child =  (::UIView*)childHandle;
            [child removeFromSuperview];
        } (::g::ObjC::Helpers::GetHandle(childHandle));
        
    }
    
}

// private static void SetSetFrameCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) [static] :163
void DrawableViewGroup::SetSetFrameCallback(uObject* handle, uDelegate* callback)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "SetSetFrameCallback(ObjC.Object,Uno.Action<ObjC.Object>)");
    @autoreleasepool
    {
        [] (::id handle, ::uObjC::Function<void, ::id> callback) -> void
        {
            ::SizeControl* control = (::SizeControl*)handle;
            [handle setOnSetFrameCallback: callback];
        } (::g::ObjC::Helpers::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id>
        {
            return [[^ void (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback]));
        
    }
    
}

// private static void UpdateFrame(ObjC.Object sourceHandle, ObjC.Object targetHandle) [static] :129
void DrawableViewGroup::UpdateFrame(uObject* sourceHandle, uObject* targetHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "UpdateFrame(ObjC.Object,ObjC.Object)");
    @autoreleasepool
    {
        [] (::id sourceHandle, ::id targetHandle) -> void
        {
            ::UIView* source =  (::UIView*)sourceHandle;
            ::UIView* target =  (::UIView*)targetHandle;
            [target setFrame: { target.frame.origin, source.frame.size }];
        } (::g::ObjC::Helpers::GetHandle(sourceHandle), ::g::ObjC::Helpers::GetHandle(targetHandle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
