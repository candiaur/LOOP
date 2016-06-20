// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/functions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace iOS{namespace UIKit{struct Functions;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public static class Functions :10191
// {
uClassType* Functions_typeof();
void Functions__UIGraphicsPopContext_fn();
void Functions__UIGraphicsPushContext_fn(app::CGContextRef** context);

struct Functions : uObject
{
    static void UIGraphicsPopContext();
    static void UIGraphicsPushContext(app::CGContextRef* context);
};
// }

}}} // ::g::iOS::UIKit
