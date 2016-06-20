// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.29.22/Subscription/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct BindAttempt;}}}
namespace g{namespace Fuse{namespace Reactive{struct PathObserver;}}}
namespace g{namespace Fuse{namespace Reactive{struct SegmentObserver;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class BindAttempt :119
// {
uType* BindAttempt_typeof();
void BindAttempt__ctor__fn(BindAttempt* __this, ::g::Fuse::Reactive::PathObserver* po);
void BindAttempt__Dispose_fn(BindAttempt* __this);
void BindAttempt__Fail_fn(BindAttempt* __this);
void BindAttempt__New1_fn(::g::Fuse::Reactive::PathObserver* po, BindAttempt** __retval);
void BindAttempt__OnDataContextChanged_fn(BindAttempt* __this, uObject* sender, ::g::Uno::EventArgs* args);
void BindAttempt__Restart_fn(BindAttempt* __this);
void BindAttempt__TryBind_fn(BindAttempt* __this);

struct BindAttempt : uObject
{
    uStrong< ::g::Fuse::Node*> _cur;
    bool _isDisposed;
    uStrong< ::g::Uno::Collections::List*> _observedNodes;
    uStrong< ::g::Fuse::Reactive::PathObserver*> _po;
    uStrong< ::g::Uno::Collections::List*> _segmentObservers;

    void ctor_(::g::Fuse::Reactive::PathObserver* po);
    void Dispose();
    void Fail();
    void OnDataContextChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void Restart();
    void TryBind();
    static BindAttempt* New1(::g::Fuse::Reactive::PathObserver* po);
};
// }

}}} // ::g::Fuse::Reactive
