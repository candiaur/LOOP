// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIResponder
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIResponder*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIResponder_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSSet.h>
#include <iOS.Foundation.NSUndoManager.h>
#include <iOS.Foundation.NSUserActivity.h>
#include <iOS.UIKit.UIEvent.h>
#include <iOS.UIKit.UIEventSubtype.h>
#include <iOS.UIKit.UIInputViewController.h>
#include <iOS.UIKit.UIResponder.h>
#include <iOS.UIKit.UITextInputMode.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.ID.h>
#include <ObjC.Selector.h>
#include <Uno.Bool.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIResponder :80187
// {
static void UIResponder_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIResponder_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(42,
        new uFunction("_clearTextInputContextIdentifier", NULL, (void*)UIResponder___clearTextInputContextIdentifier_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("becomeFirstResponder", NULL, (void*)UIResponder__becomeFirstResponder_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("canBecomeFirstResponder", NULL, (void*)UIResponder__canBecomeFirstResponder_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("canPerformActionWithSender", NULL, (void*)UIResponder__canPerformActionWithSender_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::ObjC::Selector_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("canResignFirstResponder", NULL, (void*)UIResponder__canResignFirstResponder_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("inputAccessoryView", NULL, NULL, offsetof(UIResponder_type, fp_inputAccessoryView), false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("get_InputAccessoryView", NULL, (void*)UIResponder__get_InputAccessoryView_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("inputAccessoryViewController", NULL, (void*)UIResponder__inputAccessoryViewController_fn, 0, false, ::g::iOS::UIKit::UIInputViewController_typeof(), 0),
        new uFunction("get_InputAccessoryViewController", NULL, (void*)UIResponder__get_InputAccessoryViewController_fn, 0, false, ::g::iOS::UIKit::UIInputViewController_typeof(), 0),
        new uFunction("inputView", NULL, NULL, offsetof(UIResponder_type, fp_inputView), false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("get_InputView", NULL, (void*)UIResponder__get_InputView_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("inputViewController", NULL, (void*)UIResponder__inputViewController_fn, 0, false, ::g::iOS::UIKit::UIInputViewController_typeof(), 0),
        new uFunction("get_InputViewController", NULL, (void*)UIResponder__get_InputViewController_fn, 0, false, ::g::iOS::UIKit::UIInputViewController_typeof(), 0),
        new uFunction("isFirstResponder", NULL, (void*)UIResponder__isFirstResponder_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("keyCommands", NULL, (void*)UIResponder__keyCommands_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("get_KeyCommands", NULL, (void*)UIResponder__get_KeyCommands_fn, 0, false, ::g::iOS::Foundation::NSArray_typeof(), 0),
        new uFunction("motionBeganWithEvent", NULL, (void*)UIResponder__motionBeganWithEvent_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIEventSubtype_typeof(), ::g::iOS::UIKit::UIEvent_typeof()),
        new uFunction("motionCancelledWithEvent", NULL, (void*)UIResponder__motionCancelledWithEvent_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIEventSubtype_typeof(), ::g::iOS::UIKit::UIEvent_typeof()),
        new uFunction("motionEndedWithEvent", NULL, (void*)UIResponder__motionEndedWithEvent_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIEventSubtype_typeof(), ::g::iOS::UIKit::UIEvent_typeof()),
        new uFunction(".ctor", NULL, (void*)UIResponder__New5_fn, 0, true, UIResponder_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UIResponder__New6_fn, 0, true, UIResponder_typeof(), 1, ::g::ObjC::ID_typeof()),
        new uFunction("nextResponder", NULL, (void*)UIResponder__nextResponder_fn, 0, false, UIResponder_typeof(), 0),
        new uFunction("reloadInputViews", NULL, (void*)UIResponder__reloadInputViews_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("remoteControlReceivedWithEvent", NULL, (void*)UIResponder__remoteControlReceivedWithEvent_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIEvent_typeof()),
        new uFunction("resignFirstResponder", NULL, (void*)UIResponder__resignFirstResponder_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("restoreUserActivityState", NULL, (void*)UIResponder__restoreUserActivityState_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSUserActivity_typeof()),
        new uFunction("setUserActivity", NULL, (void*)UIResponder__setUserActivity_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSUserActivity_typeof()),
        new uFunction("targetForActionWithSender", NULL, (void*)UIResponder__targetForActionWithSender_fn, 0, false, ::g::ObjC::ID_typeof(), 2, ::g::ObjC::Selector_typeof(), ::g::ObjC::ID_typeof()),
        new uFunction("textInputContextIdentifier", NULL, (void*)UIResponder__textInputContextIdentifier_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_TextInputContextIdentifier", NULL, (void*)UIResponder__get_TextInputContextIdentifier_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("textInputMode", NULL, (void*)UIResponder__textInputMode_fn, 0, false, ::g::iOS::UIKit::UITextInputMode_typeof(), 0),
        new uFunction("get_TextInputMode", NULL, (void*)UIResponder__get_TextInputMode_fn, 0, false, ::g::iOS::UIKit::UITextInputMode_typeof(), 0),
        new uFunction("touchesBeganWithEvent", NULL, (void*)UIResponder__touchesBeganWithEvent_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::Foundation::NSSet_typeof(), ::g::iOS::UIKit::UIEvent_typeof()),
        new uFunction("touchesCancelledWithEvent", NULL, (void*)UIResponder__touchesCancelledWithEvent_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::Foundation::NSSet_typeof(), ::g::iOS::UIKit::UIEvent_typeof()),
        new uFunction("touchesEndedWithEvent", NULL, (void*)UIResponder__touchesEndedWithEvent_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::Foundation::NSSet_typeof(), ::g::iOS::UIKit::UIEvent_typeof()),
        new uFunction("touchesMovedWithEvent", NULL, (void*)UIResponder__touchesMovedWithEvent_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::Foundation::NSSet_typeof(), ::g::iOS::UIKit::UIEvent_typeof()),
        new uFunction("undoManager", NULL, (void*)UIResponder__undoManager_fn, 0, false, ::g::iOS::Foundation::NSUndoManager_typeof(), 0),
        new uFunction("get_UndoManager", NULL, (void*)UIResponder__get_UndoManager_fn, 0, false, ::g::iOS::Foundation::NSUndoManager_typeof(), 0),
        new uFunction("updateUserActivityState", NULL, (void*)UIResponder__updateUserActivityState_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSUserActivity_typeof()),
        new uFunction("userActivity", NULL, (void*)UIResponder__userActivity_fn, 0, false, ::g::iOS::Foundation::NSUserActivity_typeof(), 0),
        new uFunction("get_UserActivity", NULL, (void*)UIResponder__get_UserActivity_fn, 0, false, ::g::iOS::Foundation::NSUserActivity_typeof(), 0),
        new uFunction("set_UserActivity", NULL, (void*)UIResponder__set_UserActivity_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::Foundation::NSUserActivity_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

UIResponder_type* UIResponder_typeof()
{
    static uSStrong<UIResponder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIResponder);
    options.TypeSize = sizeof(UIResponder_type);
    type = (UIResponder_type*)uClassType::New("iOS.UIKit.UIResponder", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = UIResponder_build;
    type->fp_ctor_ = (void*)UIResponder__New5_fn;
    type->fp_inputAccessoryView = UIResponder__inputAccessoryView_fn;
    type->fp_inputView = UIResponder__inputView_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public UIResponder() :80190
void UIResponder__ctor_4_fn(UIResponder* __this)
{
    __this->ctor_4();
}

// public UIResponder(ObjC.ID __id) :80192
void UIResponder__ctor_5_fn(UIResponder* __this, ::id* __id1)
{
    __this->ctor_5(*__id1);
}

// public static extern void _clearTextInputContextIdentifier(string identifier) :80307
void UIResponder___clearTextInputContextIdentifier_fn(uString* identifier_)
{
    UIResponder::_clearTextInputContextIdentifier(identifier_);
}

// public extern bool becomeFirstResponder() :80250
void UIResponder__becomeFirstResponder_fn(UIResponder* __this, bool* __retval)
{
    *__retval = __this->becomeFirstResponder();
}

// public extern bool canBecomeFirstResponder() :80247
void UIResponder__canBecomeFirstResponder_fn(UIResponder* __this, bool* __retval)
{
    *__retval = __this->canBecomeFirstResponder();
}

// public extern bool canPerformActionWithSender(ObjC.Selector action, ObjC.ID sender) :80286
void UIResponder__canPerformActionWithSender_fn(UIResponder* __this, uObjC::Selector* action_, ::id* sender_, bool* __retval)
{
    *__retval = __this->canPerformActionWithSender(*action_, *sender_);
}

// public extern bool canResignFirstResponder() :80253
void UIResponder__canResignFirstResponder_fn(UIResponder* __this, bool* __retval)
{
    *__retval = __this->canResignFirstResponder();
}

// public virtual extern iOS.UIKit.UIView inputAccessoryView() :80316
void UIResponder__inputAccessoryView_fn(UIResponder* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("iOS.UIKit.UIResponder", "inputAccessoryView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::UIView*, @selector(inputAccessoryView));
    return *__retval = (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof()), void();
}

// public iOS.UIKit.UIView get_InputAccessoryView() :80215
void UIResponder__get_InputAccessoryView_fn(UIResponder* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->InputAccessoryView();
}

// public extern iOS.UIKit.UIInputViewController inputAccessoryViewController() :80322
void UIResponder__inputAccessoryViewController_fn(UIResponder* __this, ::g::iOS::UIKit::UIInputViewController** __retval)
{
    *__retval = __this->inputAccessoryViewController();
}

// public iOS.UIKit.UIInputViewController get_InputAccessoryViewController() :80225
void UIResponder__get_InputAccessoryViewController_fn(UIResponder* __this, ::g::iOS::UIKit::UIInputViewController** __retval)
{
    *__retval = __this->InputAccessoryViewController();
}

// public virtual extern iOS.UIKit.UIView inputView() :80313
void UIResponder__inputView_fn(UIResponder* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("iOS.UIKit.UIResponder", "inputView()");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::UIView*, @selector(inputView));
    return *__retval = (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof()), void();
}

// public iOS.UIKit.UIView get_InputView() :80210
void UIResponder__get_InputView_fn(UIResponder* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->InputView();
}

// public extern iOS.UIKit.UIInputViewController inputViewController() :80319
void UIResponder__inputViewController_fn(UIResponder* __this, ::g::iOS::UIKit::UIInputViewController** __retval)
{
    *__retval = __this->inputViewController();
}

// public iOS.UIKit.UIInputViewController get_InputViewController() :80220
void UIResponder__get_InputViewController_fn(UIResponder* __this, ::g::iOS::UIKit::UIInputViewController** __retval)
{
    *__retval = __this->InputViewController();
}

// public extern bool isFirstResponder() :80259
void UIResponder__isFirstResponder_fn(UIResponder* __this, bool* __retval)
{
    *__retval = __this->isFirstResponder();
}

// public extern iOS.Foundation.NSArray keyCommands() :80331
void UIResponder__keyCommands_fn(UIResponder* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->keyCommands();
}

// public iOS.Foundation.NSArray get_KeyCommands() :80240
void UIResponder__get_KeyCommands_fn(UIResponder* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->KeyCommands();
}

// public extern void motionBeganWithEvent(iOS.UIKit.UIEventSubtype motion, iOS.UIKit.UIEvent event_) :80274
void UIResponder__motionBeganWithEvent_fn(UIResponder* __this, int* motion_, ::g::iOS::UIKit::UIEvent* event__)
{
    __this->motionBeganWithEvent(*motion_, event__);
}

// public extern void motionCancelledWithEvent(iOS.UIKit.UIEventSubtype motion, iOS.UIKit.UIEvent event_) :80280
void UIResponder__motionCancelledWithEvent_fn(UIResponder* __this, int* motion_, ::g::iOS::UIKit::UIEvent* event__)
{
    __this->motionCancelledWithEvent(*motion_, event__);
}

// public extern void motionEndedWithEvent(iOS.UIKit.UIEventSubtype motion, iOS.UIKit.UIEvent event_) :80277
void UIResponder__motionEndedWithEvent_fn(UIResponder* __this, int* motion_, ::g::iOS::UIKit::UIEvent* event__)
{
    __this->motionEndedWithEvent(*motion_, event__);
}

// public UIResponder New() :80190
void UIResponder__New5_fn(UIResponder** __retval)
{
    *__retval = UIResponder::New5();
}

// public UIResponder New(ObjC.ID __id) :80192
void UIResponder__New6_fn(::id* __id1, UIResponder** __retval)
{
    *__retval = UIResponder::New6(*__id1);
}

// public extern iOS.UIKit.UIResponder nextResponder() :80244
void UIResponder__nextResponder_fn(UIResponder* __this, UIResponder** __retval)
{
    *__retval = __this->nextResponder();
}

// public extern void reloadInputViews() :80310
void UIResponder__reloadInputViews_fn(UIResponder* __this)
{
    __this->reloadInputViews();
}

// public extern void remoteControlReceivedWithEvent(iOS.UIKit.UIEvent event_) :80283
void UIResponder__remoteControlReceivedWithEvent_fn(UIResponder* __this, ::g::iOS::UIKit::UIEvent* event__)
{
    __this->remoteControlReceivedWithEvent(event__);
}

// public extern bool resignFirstResponder() :80256
void UIResponder__resignFirstResponder_fn(UIResponder* __this, bool* __retval)
{
    *__retval = __this->resignFirstResponder();
}

// public extern void restoreUserActivityState(iOS.Foundation.NSUserActivity activity) :80298
void UIResponder__restoreUserActivityState_fn(UIResponder* __this, ::g::iOS::Foundation::NSUserActivity* activity_)
{
    __this->restoreUserActivityState(activity_);
}

// public extern void setUserActivity(iOS.Foundation.NSUserActivity userActivity) :80304
void UIResponder__setUserActivity_fn(UIResponder* __this, ::g::iOS::Foundation::NSUserActivity* userActivity_)
{
    __this->setUserActivity(userActivity_);
}

// public extern ObjC.ID targetForActionWithSender(ObjC.Selector action, ObjC.ID sender) :80289
void UIResponder__targetForActionWithSender_fn(UIResponder* __this, uObjC::Selector* action_, ::id* sender_, ::id* __retval)
{
    *__retval = __this->targetForActionWithSender(*action_, *sender_);
}

// public extern string textInputContextIdentifier() :80328
void UIResponder__textInputContextIdentifier_fn(UIResponder* __this, uString** __retval)
{
    *__retval = __this->textInputContextIdentifier();
}

// public string get_TextInputContextIdentifier() :80235
void UIResponder__get_TextInputContextIdentifier_fn(UIResponder* __this, uString** __retval)
{
    *__retval = __this->TextInputContextIdentifier();
}

// public extern iOS.UIKit.UITextInputMode textInputMode() :80325
void UIResponder__textInputMode_fn(UIResponder* __this, ::g::iOS::UIKit::UITextInputMode** __retval)
{
    *__retval = __this->textInputMode();
}

// public iOS.UIKit.UITextInputMode get_TextInputMode() :80230
void UIResponder__get_TextInputMode_fn(UIResponder* __this, ::g::iOS::UIKit::UITextInputMode** __retval)
{
    *__retval = __this->TextInputMode();
}

// public extern void touchesBeganWithEvent(iOS.Foundation.NSSet touches, iOS.UIKit.UIEvent event_) :80262
void UIResponder__touchesBeganWithEvent_fn(UIResponder* __this, ::g::iOS::Foundation::NSSet* touches_, ::g::iOS::UIKit::UIEvent* event__)
{
    __this->touchesBeganWithEvent(touches_, event__);
}

// public extern void touchesCancelledWithEvent(iOS.Foundation.NSSet touches, iOS.UIKit.UIEvent event_) :80271
void UIResponder__touchesCancelledWithEvent_fn(UIResponder* __this, ::g::iOS::Foundation::NSSet* touches_, ::g::iOS::UIKit::UIEvent* event__)
{
    __this->touchesCancelledWithEvent(touches_, event__);
}

// public extern void touchesEndedWithEvent(iOS.Foundation.NSSet touches, iOS.UIKit.UIEvent event_) :80268
void UIResponder__touchesEndedWithEvent_fn(UIResponder* __this, ::g::iOS::Foundation::NSSet* touches_, ::g::iOS::UIKit::UIEvent* event__)
{
    __this->touchesEndedWithEvent(touches_, event__);
}

// public extern void touchesMovedWithEvent(iOS.Foundation.NSSet touches, iOS.UIKit.UIEvent event_) :80265
void UIResponder__touchesMovedWithEvent_fn(UIResponder* __this, ::g::iOS::Foundation::NSSet* touches_, ::g::iOS::UIKit::UIEvent* event__)
{
    __this->touchesMovedWithEvent(touches_, event__);
}

// public extern iOS.Foundation.NSUndoManager undoManager() :80292
void UIResponder__undoManager_fn(UIResponder* __this, ::g::iOS::Foundation::NSUndoManager** __retval)
{
    *__retval = __this->undoManager();
}

// public iOS.Foundation.NSUndoManager get_UndoManager() :80199
void UIResponder__get_UndoManager_fn(UIResponder* __this, ::g::iOS::Foundation::NSUndoManager** __retval)
{
    *__retval = __this->UndoManager();
}

// public extern void updateUserActivityState(iOS.Foundation.NSUserActivity activity) :80295
void UIResponder__updateUserActivityState_fn(UIResponder* __this, ::g::iOS::Foundation::NSUserActivity* activity_)
{
    __this->updateUserActivityState(activity_);
}

// public extern iOS.Foundation.NSUserActivity userActivity() :80301
void UIResponder__userActivity_fn(UIResponder* __this, ::g::iOS::Foundation::NSUserActivity** __retval)
{
    *__retval = __this->userActivity();
}

// public iOS.Foundation.NSUserActivity get_UserActivity() :80204
void UIResponder__get_UserActivity_fn(UIResponder* __this, ::g::iOS::Foundation::NSUserActivity** __retval)
{
    *__retval = __this->UserActivity();
}

// public void set_UserActivity(iOS.Foundation.NSUserActivity value) :80205
void UIResponder__set_UserActivity_fn(UIResponder* __this, ::g::iOS::Foundation::NSUserActivity* value)
{
    __this->UserActivity(value);
}

// public UIResponder() [instance] :80190
void UIResponder::ctor_4()
{
    uStackFrame __("iOS.UIKit.UIResponder", ".ctor()");
    ctor_2();
}

// public UIResponder(ObjC.ID __id) [instance] :80192
void UIResponder::ctor_5(::id __id1)
{
    uStackFrame __("iOS.UIKit.UIResponder", ".ctor(ObjC.ID)");
    ctor_3(__id1);
}

// public extern bool becomeFirstResponder() [instance] :80250
bool UIResponder::becomeFirstResponder()
{
    uStackFrame __("iOS.UIKit.UIResponder", "becomeFirstResponder()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(becomeFirstResponder));
    return (bool)__return;
}

// public extern bool canBecomeFirstResponder() [instance] :80247
bool UIResponder::canBecomeFirstResponder()
{
    uStackFrame __("iOS.UIKit.UIResponder", "canBecomeFirstResponder()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(canBecomeFirstResponder));
    return (bool)__return;
}

// public extern bool canPerformActionWithSender(ObjC.Selector action, ObjC.ID sender) [instance] :80286
bool UIResponder::canPerformActionWithSender(uObjC::Selector action_, ::id sender_)
{
    uStackFrame __("iOS.UIKit.UIResponder", "canPerformActionWithSender(ObjC.Selector,ObjC.ID)");
    uObjC::Selector action__ = action_;
    ::id sender__ = sender_;
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(canPerformAction:withSender:),
        (::SEL)action__,
        (::id)sender__);
    return (bool)__return;
}

// public extern bool canResignFirstResponder() [instance] :80253
bool UIResponder::canResignFirstResponder()
{
    uStackFrame __("iOS.UIKit.UIResponder", "canResignFirstResponder()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(canResignFirstResponder));
    return (bool)__return;
}

// public iOS.UIKit.UIView get_InputAccessoryView() [instance] :80215
::g::iOS::UIKit::UIView* UIResponder::InputAccessoryView()
{
    uStackFrame __("iOS.UIKit.UIResponder", "get_InputAccessoryView()");
    return inputAccessoryView();
}

// public extern iOS.UIKit.UIInputViewController inputAccessoryViewController() [instance] :80322
::g::iOS::UIKit::UIInputViewController* UIResponder::inputAccessoryViewController()
{
    uStackFrame __("iOS.UIKit.UIResponder", "inputAccessoryViewController()");
    ::UIInputViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIInputViewController*, @selector(inputAccessoryViewController));
    return (::g::iOS::UIKit::UIInputViewController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIInputViewController_typeof());
}

// public iOS.UIKit.UIInputViewController get_InputAccessoryViewController() [instance] :80225
::g::iOS::UIKit::UIInputViewController* UIResponder::InputAccessoryViewController()
{
    uStackFrame __("iOS.UIKit.UIResponder", "get_InputAccessoryViewController()");
    return inputAccessoryViewController();
}

// public iOS.UIKit.UIView get_InputView() [instance] :80210
::g::iOS::UIKit::UIView* UIResponder::InputView()
{
    uStackFrame __("iOS.UIKit.UIResponder", "get_InputView()");
    return inputView();
}

// public extern iOS.UIKit.UIInputViewController inputViewController() [instance] :80319
::g::iOS::UIKit::UIInputViewController* UIResponder::inputViewController()
{
    uStackFrame __("iOS.UIKit.UIResponder", "inputViewController()");
    ::UIInputViewController* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIInputViewController*, @selector(inputViewController));
    return (::g::iOS::UIKit::UIInputViewController*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIInputViewController_typeof());
}

// public iOS.UIKit.UIInputViewController get_InputViewController() [instance] :80220
::g::iOS::UIKit::UIInputViewController* UIResponder::InputViewController()
{
    uStackFrame __("iOS.UIKit.UIResponder", "get_InputViewController()");
    return inputViewController();
}

// public extern bool isFirstResponder() [instance] :80259
bool UIResponder::isFirstResponder()
{
    uStackFrame __("iOS.UIKit.UIResponder", "isFirstResponder()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isFirstResponder));
    return (bool)__return;
}

// public extern iOS.Foundation.NSArray keyCommands() [instance] :80331
::g::iOS::Foundation::NSArray* UIResponder::keyCommands()
{
    uStackFrame __("iOS.UIKit.UIResponder", "keyCommands()");
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(keyCommands));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_KeyCommands() [instance] :80240
::g::iOS::Foundation::NSArray* UIResponder::KeyCommands()
{
    uStackFrame __("iOS.UIKit.UIResponder", "get_KeyCommands()");
    return keyCommands();
}

// public extern void motionBeganWithEvent(iOS.UIKit.UIEventSubtype motion, iOS.UIKit.UIEvent event_) [instance] :80274
void UIResponder::motionBeganWithEvent(int motion_, ::g::iOS::UIKit::UIEvent* event__)
{
    uStackFrame __("iOS.UIKit.UIResponder", "motionBeganWithEvent(iOS.UIKit.UIEventSubtype,iOS.UIKit.UIEvent)");
    int motion__ = motion_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(motionBegan:withEvent:),
        ::UIEventSubtype(motion__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)event__));
}

// public extern void motionCancelledWithEvent(iOS.UIKit.UIEventSubtype motion, iOS.UIKit.UIEvent event_) [instance] :80280
void UIResponder::motionCancelledWithEvent(int motion_, ::g::iOS::UIKit::UIEvent* event__)
{
    uStackFrame __("iOS.UIKit.UIResponder", "motionCancelledWithEvent(iOS.UIKit.UIEventSubtype,iOS.UIKit.UIEvent)");
    int motion__ = motion_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(motionCancelled:withEvent:),
        ::UIEventSubtype(motion__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)event__));
}

// public extern void motionEndedWithEvent(iOS.UIKit.UIEventSubtype motion, iOS.UIKit.UIEvent event_) [instance] :80277
void UIResponder::motionEndedWithEvent(int motion_, ::g::iOS::UIKit::UIEvent* event__)
{
    uStackFrame __("iOS.UIKit.UIResponder", "motionEndedWithEvent(iOS.UIKit.UIEventSubtype,iOS.UIKit.UIEvent)");
    int motion__ = motion_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(motionEnded:withEvent:),
        ::UIEventSubtype(motion__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)event__));
}

// public extern iOS.UIKit.UIResponder nextResponder() [instance] :80244
UIResponder* UIResponder::nextResponder()
{
    uStackFrame __("iOS.UIKit.UIResponder", "nextResponder()");
    ::UIResponder* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIResponder*, @selector(nextResponder));
    return (UIResponder*)uObjC::Lifetime::GetUnoObject(__return, UIResponder_typeof());
}

// public extern void reloadInputViews() [instance] :80310
void UIResponder::reloadInputViews()
{
    uStackFrame __("iOS.UIKit.UIResponder", "reloadInputViews()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(reloadInputViews));
}

// public extern void remoteControlReceivedWithEvent(iOS.UIKit.UIEvent event_) [instance] :80283
void UIResponder::remoteControlReceivedWithEvent(::g::iOS::UIKit::UIEvent* event__)
{
    uStackFrame __("iOS.UIKit.UIResponder", "remoteControlReceivedWithEvent(iOS.UIKit.UIEvent)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(remoteControlReceivedWithEvent:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)event__));
}

// public extern bool resignFirstResponder() [instance] :80256
bool UIResponder::resignFirstResponder()
{
    uStackFrame __("iOS.UIKit.UIResponder", "resignFirstResponder()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(resignFirstResponder));
    return (bool)__return;
}

// public extern void restoreUserActivityState(iOS.Foundation.NSUserActivity activity) [instance] :80298
void UIResponder::restoreUserActivityState(::g::iOS::Foundation::NSUserActivity* activity_)
{
    uStackFrame __("iOS.UIKit.UIResponder", "restoreUserActivityState(iOS.Foundation.NSUserActivity)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(restoreUserActivityState:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)activity_));
}

// public extern void setUserActivity(iOS.Foundation.NSUserActivity userActivity) [instance] :80304
void UIResponder::setUserActivity(::g::iOS::Foundation::NSUserActivity* userActivity_)
{
    uStackFrame __("iOS.UIKit.UIResponder", "setUserActivity(iOS.Foundation.NSUserActivity)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setUserActivity:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)userActivity_));
}

// public extern ObjC.ID targetForActionWithSender(ObjC.Selector action, ObjC.ID sender) [instance] :80289
::id UIResponder::targetForActionWithSender(uObjC::Selector action_, ::id sender_)
{
    uStackFrame __("iOS.UIKit.UIResponder", "targetForActionWithSender(ObjC.Selector,ObjC.ID)");
    uObjC::Selector action__ = action_;
    ::id sender__ = sender_;
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(targetForAction:withSender:),
        (::SEL)action__,
        (::id)sender__);
    return (::id)__return;
}

// public extern string textInputContextIdentifier() [instance] :80328
uString* UIResponder::textInputContextIdentifier()
{
    uStackFrame __("iOS.UIKit.UIResponder", "textInputContextIdentifier()");
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(textInputContextIdentifier));
    return uObjC::UnoString(__return);
}

// public string get_TextInputContextIdentifier() [instance] :80235
uString* UIResponder::TextInputContextIdentifier()
{
    uStackFrame __("iOS.UIKit.UIResponder", "get_TextInputContextIdentifier()");
    return textInputContextIdentifier();
}

// public extern iOS.UIKit.UITextInputMode textInputMode() [instance] :80325
::g::iOS::UIKit::UITextInputMode* UIResponder::textInputMode()
{
    uStackFrame __("iOS.UIKit.UIResponder", "textInputMode()");
    ::UITextInputMode* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextInputMode*, @selector(textInputMode));
    return (::g::iOS::UIKit::UITextInputMode*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UITextInputMode_typeof());
}

// public iOS.UIKit.UITextInputMode get_TextInputMode() [instance] :80230
::g::iOS::UIKit::UITextInputMode* UIResponder::TextInputMode()
{
    uStackFrame __("iOS.UIKit.UIResponder", "get_TextInputMode()");
    return textInputMode();
}

// public extern void touchesBeganWithEvent(iOS.Foundation.NSSet touches, iOS.UIKit.UIEvent event_) [instance] :80262
void UIResponder::touchesBeganWithEvent(::g::iOS::Foundation::NSSet* touches_, ::g::iOS::UIKit::UIEvent* event__)
{
    uStackFrame __("iOS.UIKit.UIResponder", "touchesBeganWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(touchesBegan:withEvent:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)touches_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)event__));
}

// public extern void touchesCancelledWithEvent(iOS.Foundation.NSSet touches, iOS.UIKit.UIEvent event_) [instance] :80271
void UIResponder::touchesCancelledWithEvent(::g::iOS::Foundation::NSSet* touches_, ::g::iOS::UIKit::UIEvent* event__)
{
    uStackFrame __("iOS.UIKit.UIResponder", "touchesCancelledWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(touchesCancelled:withEvent:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)touches_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)event__));
}

// public extern void touchesEndedWithEvent(iOS.Foundation.NSSet touches, iOS.UIKit.UIEvent event_) [instance] :80268
void UIResponder::touchesEndedWithEvent(::g::iOS::Foundation::NSSet* touches_, ::g::iOS::UIKit::UIEvent* event__)
{
    uStackFrame __("iOS.UIKit.UIResponder", "touchesEndedWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(touchesEnded:withEvent:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)touches_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)event__));
}

// public extern void touchesMovedWithEvent(iOS.Foundation.NSSet touches, iOS.UIKit.UIEvent event_) [instance] :80265
void UIResponder::touchesMovedWithEvent(::g::iOS::Foundation::NSSet* touches_, ::g::iOS::UIKit::UIEvent* event__)
{
    uStackFrame __("iOS.UIKit.UIResponder", "touchesMovedWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(touchesMoved:withEvent:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)touches_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)event__));
}

// public extern iOS.Foundation.NSUndoManager undoManager() [instance] :80292
::g::iOS::Foundation::NSUndoManager* UIResponder::undoManager()
{
    uStackFrame __("iOS.UIKit.UIResponder", "undoManager()");
    ::NSUndoManager* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSUndoManager*, @selector(undoManager));
    return (::g::iOS::Foundation::NSUndoManager*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSUndoManager_typeof());
}

// public iOS.Foundation.NSUndoManager get_UndoManager() [instance] :80199
::g::iOS::Foundation::NSUndoManager* UIResponder::UndoManager()
{
    uStackFrame __("iOS.UIKit.UIResponder", "get_UndoManager()");
    return undoManager();
}

// public extern void updateUserActivityState(iOS.Foundation.NSUserActivity activity) [instance] :80295
void UIResponder::updateUserActivityState(::g::iOS::Foundation::NSUserActivity* activity_)
{
    uStackFrame __("iOS.UIKit.UIResponder", "updateUserActivityState(iOS.Foundation.NSUserActivity)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(updateUserActivityState:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)activity_));
}

// public extern iOS.Foundation.NSUserActivity userActivity() [instance] :80301
::g::iOS::Foundation::NSUserActivity* UIResponder::userActivity()
{
    uStackFrame __("iOS.UIKit.UIResponder", "userActivity()");
    ::NSUserActivity* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSUserActivity*, @selector(userActivity));
    return (::g::iOS::Foundation::NSUserActivity*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSUserActivity_typeof());
}

// public iOS.Foundation.NSUserActivity get_UserActivity() [instance] :80204
::g::iOS::Foundation::NSUserActivity* UIResponder::UserActivity()
{
    uStackFrame __("iOS.UIKit.UIResponder", "get_UserActivity()");
    return userActivity();
}

// public void set_UserActivity(iOS.Foundation.NSUserActivity value) [instance] :80205
void UIResponder::UserActivity(::g::iOS::Foundation::NSUserActivity* value)
{
    uStackFrame __("iOS.UIKit.UIResponder", "set_UserActivity(iOS.Foundation.NSUserActivity)");
    setUserActivity(value);
}

// public static extern void _clearTextInputContextIdentifier(string identifier) [static] :80307
void UIResponder::_clearTextInputContextIdentifier(uString* identifier_)
{
    uStackFrame __("iOS.UIKit.UIResponder", "_clearTextInputContextIdentifier(string)");
    uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, void, @selector(clearTextInputContextIdentifier:),
        uObjC::NativeString(identifier_));
}

// public UIResponder New() [static] :80190
UIResponder* UIResponder::New5()
{
    UIResponder* obj1 = (UIResponder*)uNew(UIResponder_typeof());
    obj1->ctor_4();
    return obj1;
}

// public UIResponder New(ObjC.ID __id) [static] :80192
UIResponder* UIResponder::New6(::id __id1)
{
    UIResponder* obj2 = (UIResponder*)uNew(UIResponder_typeof());
    obj2->ctor_5(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::UIKit
