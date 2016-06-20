// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Transform.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public sealed class Translation :8822
// {
::g::Fuse::Transform_type* Translation_typeof();
void Translation__ctor_3_fn(Translation* __this);
void Translation__AppendTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m, float* weight);
void Translation__CheckSubscription_fn(Translation* __this);
void Translation__ClearRootingCompleted_fn(Translation* __this);
void Translation__ClearSubscribed_fn(Translation* __this);
void Translation__get_IsFlat_fn(Translation* __this, bool* __retval);
void Translation__New2_fn(Translation** __retval);
void Translation__OnPlaced_fn(Translation* __this, uObject* sender, uObject* args);
void Translation__OnRelativeNodeChanged_fn(Translation* __this);
void Translation__OnRooted_fn(Translation* __this);
void Translation__OnUnrooted_fn(Translation* __this);
void Translation__PrependTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m);
void Translation__get_RelativeTo_fn(Translation* __this, uObject** __retval);
void Translation__set_RelativeTo_fn(Translation* __this, uObject* value);
void Translation__get_Vector_fn(Translation* __this, ::g::Uno::Float3* __retval);
void Translation__set_Vector_fn(Translation* __this, ::g::Uno::Float3* value);
void Translation__get_X_fn(Translation* __this, float* __retval);
void Translation__set_X_fn(Translation* __this, float* value);
void Translation__get_XY_fn(Translation* __this, ::g::Uno::Float2* __retval);
void Translation__set_XY_fn(Translation* __this, ::g::Uno::Float2* value);
void Translation__get_Y_fn(Translation* __this, float* __retval);
void Translation__set_Y_fn(Translation* __this, float* value);
void Translation__get_Z_fn(Translation* __this, float* __retval);
void Translation__set_Z_fn(Translation* __this, float* value);

struct Translation : ::g::Fuse::Transform
{
    uStrong<uObject*> _relativeTo;
    uStrong<uObject*> _subscribed;
    uStrong< ::g::Fuse::Visual*> _waitRootingCompleted;
    float _x;
    float _y;
    float _z;

    void ctor_3();
    void CheckSubscription();
    void ClearRootingCompleted();
    void ClearSubscribed();
    void OnPlaced(uObject* sender, uObject* args);
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    ::g::Uno::Float3 Vector();
    void Vector(::g::Uno::Float3 value);
    float X();
    void X(float value);
    ::g::Uno::Float2 XY();
    void XY(::g::Uno::Float2 value);
    float Y();
    void Y(float value);
    float Z();
    void Z(float value);
    static Translation* New2();
};
// }

}} // ::g::Fuse
