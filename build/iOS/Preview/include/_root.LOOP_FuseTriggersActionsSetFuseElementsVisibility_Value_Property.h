// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/LOOP.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Visibility.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Set;}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property;}

namespace g{

// internal sealed class LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property :46
// {
::g::Uno::UX::Property1_type* LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property_typeof();
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__ctor_2_fn(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* __this, ::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name);
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__Get_fn(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* __this, int* __retval);
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__New1_fn(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name, LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property** __retval);
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__get_Object_fn(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__Set_fn(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* __this, int* v, uObject* origin);
void LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property__get_SupportsOriginSetter_fn(LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* __this, bool* __retval);

struct LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Triggers::Actions::Set*> _obj;

    void ctor_2(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name);
    static LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property* New1(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
