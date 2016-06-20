// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Transform;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// public abstract class Transform :8472
// {
struct Transform_type : ::g::Fuse::Node_type
{
    void(*fp_AppendTo)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*);
    void(*fp_get_IsFlat)(::g::Fuse::Transform*, bool*);
    void(*fp_OnRelativeNodeChanged)(::g::Fuse::Transform*);
    void(*fp_PrependTo)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*);
};

Transform_type* Transform_typeof();
void Transform__ctor_2_fn(Transform* __this);
void Transform__add_MatrixChanged_fn(Transform* __this, uDelegate* value);
void Transform__remove_MatrixChanged_fn(Transform* __this, uDelegate* value);
void Transform__OnMatrixChanged_fn(Transform* __this);
void Transform__OnRelativeNodeChanged_fn(Transform* __this);
void Transform__get_RelativeNode_fn(Transform* __this, ::g::Fuse::Visual** __retval);
void Transform__set_RelativeNode_fn(Transform* __this, ::g::Fuse::Visual* value);

struct Transform : ::g::Fuse::Node
{
    uStrong< ::g::Fuse::Visual*> _relativeNode;
    uStrong<uDelegate*> MatrixChanged1;

    void ctor_2();
    void AppendTo(::g::Fuse::FastMatrix* matrix, float weight) { (((Transform_type*)__type)->fp_AppendTo)(this, matrix, &weight); }
    bool IsFlat() { bool __retval; return (((Transform_type*)__type)->fp_get_IsFlat)(this, &__retval), __retval; }
    void add_MatrixChanged(uDelegate* value);
    void remove_MatrixChanged(uDelegate* value);
    void OnMatrixChanged();
    void OnRelativeNodeChanged() { (((Transform_type*)__type)->fp_OnRelativeNodeChanged)(this); }
    void PrependTo(::g::Fuse::FastMatrix* matrix) { (((Transform_type*)__type)->fp_PrependTo)(this, matrix); }
    ::g::Fuse::Visual* RelativeNode();
    void RelativeNode(::g::Fuse::Visual* value);
    static void OnRelativeNodeChanged(Transform* __this) { Transform__OnRelativeNodeChanged_fn(__this); }
};
// }

}} // ::g::Fuse
