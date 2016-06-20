// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.29.22/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.KeyboardView.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class KeyboardView :912
// {
static void KeyboardView_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::KeyboardView, _handle), 0);
}

uType* KeyboardView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(KeyboardView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.KeyboardView", options);
    type->fp_build_ = KeyboardView_build;
    type->fp_ctor_ = (void*)KeyboardView__New1_fn;
    return type;
}

// public KeyboardView() :922
void KeyboardView__ctor__fn(KeyboardView* __this)
{
    __this->ctor_();
}

// private static ObjC.Object Create() :929
void KeyboardView__Create_fn(uObject** __retval)
{
    *__retval = KeyboardView::Create();
}

// public ObjC.Object get_Handle() :917
void KeyboardView__get_Handle_fn(KeyboardView* __this, uObject** __retval)
{
    *__retval = __this->Handle();
}

// public void HideKeyboard() :939
void KeyboardView__HideKeyboard_fn(KeyboardView* __this)
{
    __this->HideKeyboard();
}

// public KeyboardView New() :922
void KeyboardView__New1_fn(KeyboardView** __retval)
{
    *__retval = KeyboardView::New1();
}

// public void ShowKeyboard() :934
void KeyboardView__ShowKeyboard_fn(KeyboardView* __this)
{
    __this->ShowKeyboard();
}

// public KeyboardView() [instance] :922
void KeyboardView::ctor_()
{
    uStackFrame __("Fuse.Controls.Native.iOS.KeyboardView", ".ctor()");
    _handle = KeyboardView::Create();
}

// public ObjC.Object get_Handle() [instance] :917
uObject* KeyboardView::Handle()
{
    uStackFrame __("Fuse.Controls.Native.iOS.KeyboardView", "get_Handle()");
    return _handle;
}

// public void HideKeyboard() [instance] :939
void KeyboardView::HideKeyboard()
{
    uStackFrame __("Fuse.Controls.Native.iOS.KeyboardView", "HideKeyboard()");

    if (::g::Fuse::Controls::Native::iOS::FocusHelpers::IsFirstResponder(_handle))
        ::g::Fuse::Controls::Native::iOS::FocusHelpers::ResignFirstResponder(_handle);
}

// public void ShowKeyboard() [instance] :934
void KeyboardView::ShowKeyboard()
{
    uStackFrame __("Fuse.Controls.Native.iOS.KeyboardView", "ShowKeyboard()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::BecomeFirstResponder(_handle);
}

// private static ObjC.Object Create() [static] :929
uObject* KeyboardView::Create()
{
    uStackFrame __("Fuse.Controls.Native.iOS.KeyboardView", "Create()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[::KeyboardView alloc] init];
        } ());
        
    }
    
}

// public KeyboardView New() [static] :922
KeyboardView* KeyboardView::New1()
{
    KeyboardView* obj1 = (KeyboardView*)uNew(KeyboardView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
