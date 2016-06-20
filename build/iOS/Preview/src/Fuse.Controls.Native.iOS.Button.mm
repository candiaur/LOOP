// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.Button.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Button :11
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Button_type, interface2),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface3));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Button__New1_fn, 0, true, Button_typeof(), 0));
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.iOS.Button", options);
    type->SetBase(::g::Fuse::Controls::Native::iOS::LeafView_typeof());
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New1_fn;
    type->interface3.fp_set_Text = (void(*)(uObject*, uString*))Button__FuseControlsNativeILabelViewset_Text_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public Button() :14
void Button__ctor_2_fn(Button* __this)
{
    __this->ctor_2();
}

// private static ObjC.Object Create() :22
void Button__Create_fn(uObject** __retval)
{
    *__retval = Button::Create();
}

// private void Fuse.Controls.Native.ILabelView.set_Text(string value) :18
void Button__FuseControlsNativeILabelViewset_Text_fn(Button* __this, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Button", "Fuse.Controls.Native.ILabelView.set_Text(string)");
    Button::SetText(__this->Handle(), value);
}

// public Button New() :14
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// private static void SetText(ObjC.Object handle, string text) :28
void Button__SetText_fn(uObject* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public Button() [instance] :14
void Button::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.iOS.Button", ".ctor()");
    ctor_1(Button::Create());
}

// private static ObjC.Object Create() [static] :22
uObject* Button::Create()
{
    uStackFrame __("Fuse.Controls.Native.iOS.Button", "Create()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[::UIButton alloc] init];
        } ());
        
    }
    
}

// public Button New() [static] :14
Button* Button::New1()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static void SetText(ObjC.Object handle, string text) [static] :28
void Button::SetText(uObject* handle, uString* text)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Button", "SetText(ObjC.Object,string)");
    @autoreleasepool
    {
        [] (::id handle, ::NSString* text) -> void
        {
            ::UIButton* button = (::UIButton*)handle;
            [button setTitle:text forState:UIControlStateNormal];
        } (::g::ObjC::Helpers::GetHandle(handle), ::uObjC::NativeString(text));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
