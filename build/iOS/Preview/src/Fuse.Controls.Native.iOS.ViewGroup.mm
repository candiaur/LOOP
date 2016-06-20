// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.iOS.ViewGroup.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class ViewGroup :2589
// {
static void ViewGroup_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Native::iOS::ViewParent_typeof();
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ViewGroup_type, interface2));
    type->SetFields(3,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::ViewGroup, _visual), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Add", NULL, (void*)ViewGroup__Add_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::iOS::View_typeof()),
        new uFunction(".ctor", NULL, (void*)ViewGroup__New1_fn, 0, true, ViewGroup_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Remove", NULL, (void*)ViewGroup__Remove_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::iOS::View_typeof()));
}

ViewGroup_type* ViewGroup_typeof()
{
    static uSStrong<ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(ViewGroup_type);
    type = (ViewGroup_type*)uClassType::New("Fuse.Controls.Native.iOS.ViewGroup", options);
    type->SetBase(::g::Fuse::Controls::Native::iOS::ViewParent_typeof());
    type->fp_build_ = ViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))ViewGroup__Dispose_fn;
    type->fp_NotifyChildNewSize = (void(*)(::g::Fuse::Controls::Native::iOS::ViewParent*, ::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float2*))ViewGroup__NotifyChildNewSize_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ViewGroup__Dispose_fn;
    return type;
}

// public ViewGroup(Fuse.Visual visual) :2594
void ViewGroup__ctor_2_fn(ViewGroup* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public void Add(Fuse.Controls.Native.iOS.View child) :2618
void ViewGroup__Add_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Add(child);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) :2631
void ViewGroup__Add1_fn(uObject* parentHandle, uObject* childHandle)
{
    ViewGroup::Add1(parentHandle, childHandle);
}

// private static ObjC.Object Create() :2607
void ViewGroup__Create_fn(uObject** __retval)
{
    *__retval = ViewGroup::Create();
}

// public override sealed void Dispose() :2600
void ViewGroup__Dispose_fn(ViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Dispose()");
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->Handle());
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :2615
void ViewGroup__FuseControlsNativeIViewGroupAdd_fn(ViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView)");
    __this->Add(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[1/*Fuse.Controls.Native.iOS.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :2616
void ViewGroup__FuseControlsNativeIViewGroupRemove_fn(ViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView)");
    __this->Remove(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[1/*Fuse.Controls.Native.iOS.View*/]));
}

// public ViewGroup New(Fuse.Visual visual) :2594
void ViewGroup__New1_fn(::g::Fuse::Visual* visual, ViewGroup** __retval)
{
    *__retval = ViewGroup::New1(visual);
}

// public override sealed void NotifyChildNewSize(Fuse.Controls.Native.iOS.View child, float2 size) :2645
void ViewGroup__NotifyChildNewSize_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size)
{
}

// public void Remove(Fuse.Controls.Native.iOS.View child) :2624
void ViewGroup__Remove_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Remove(child);
}

// private static void Remove(ObjC.Object childHandle) :2639
void ViewGroup__Remove1_fn(uObject* childHandle)
{
    ViewGroup::Remove1(childHandle);
}

// public ViewGroup(Fuse.Visual visual) [instance] :2594
void ViewGroup::ctor_2(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", ".ctor(Fuse.Visual)");
    ctor_1(ViewGroup::Create());
    _visual = visual;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(visual, Handle());
}

// public void Add(Fuse.Controls.Native.iOS.View child) [instance] :2618
void ViewGroup::Add(::g::Fuse::Controls::Native::iOS::View* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Add(Fuse.Controls.Native.iOS.View)");
    uPtr(child)->Parent(this);
    ViewGroup::Add1(Handle(), child->Handle());
}

// public void Remove(Fuse.Controls.Native.iOS.View child) [instance] :2624
void ViewGroup::Remove(::g::Fuse::Controls::Native::iOS::View* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Remove(Fuse.Controls.Native.iOS.View)");
    ViewGroup::Remove1(uPtr(child)->Handle());
    child->Parent(NULL);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) [static] :2631
void ViewGroup::Add1(uObject* parentHandle, uObject* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Add(ObjC.Object,ObjC.Object)");
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

// private static ObjC.Object Create() [static] :2607
uObject* ViewGroup::Create()
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Create()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            ::UIControl* control = [[::UIControl alloc] init];
            [control setOpaque:false];
            [control setMultipleTouchEnabled:true];
            return control;
        } ());
        
    }
    
}

// public ViewGroup New(Fuse.Visual visual) [static] :2594
ViewGroup* ViewGroup::New1(::g::Fuse::Visual* visual)
{
    ViewGroup* obj1 = (ViewGroup*)uNew(ViewGroup_typeof());
    obj1->ctor_2(visual);
    return obj1;
}

// private static void Remove(ObjC.Object childHandle) [static] :2639
void ViewGroup::Remove1(uObject* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Remove(ObjC.Object)");
    @autoreleasepool
    {
        [] (::id childHandle) -> void
        {
            ::UIView* child =  (::UIView*)childHandle;
            [child removeFromSuperview];
        } (::g::ObjC::Helpers::GetHandle(childHandle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
