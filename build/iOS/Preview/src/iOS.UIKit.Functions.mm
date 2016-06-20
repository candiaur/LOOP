// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/functions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.CoreGraphics.CGContextRef.h>
#include <iOS.UIKit.Functions.h>
#include <UIKit/UIKit.h>

namespace g{
namespace iOS{
namespace UIKit{

// public static class Functions :10191
// {
static void Functions_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("UIGraphicsPopContext", NULL, (void*)Functions__UIGraphicsPopContext_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("UIGraphicsPushContext", NULL, (void*)Functions__UIGraphicsPushContext_fn, 0, true, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGContextRef_typeof()));
}

uClassType* Functions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("iOS.UIKit.Functions", options);
    type->fp_build_ = Functions_build;
    return type;
}

// public static void UIGraphicsPopContext() :10434
void Functions__UIGraphicsPopContext_fn()
{
    Functions::UIGraphicsPopContext();
}

// public static void UIGraphicsPushContext(iOS.CoreGraphics.CGContextRef context) :10430
void Functions__UIGraphicsPushContext_fn(app::CGContextRef** context)
{
    Functions::UIGraphicsPushContext(*context);
}

// public static void UIGraphicsPopContext() [static] :10434
void Functions::UIGraphicsPopContext()
{
    uStackFrame __("iOS.UIKit.Functions", "UIGraphicsPopContext()");
    ::UIGraphicsPopContext();
}

// public static void UIGraphicsPushContext(iOS.CoreGraphics.CGContextRef context) [static] :10430
void Functions::UIGraphicsPushContext(app::CGContextRef* context)
{
    uStackFrame __("iOS.UIKit.Functions", "UIGraphicsPushContext(iOS.CoreGraphics.CGContextRef)");
    ::UIGraphicsPushContext((::CGContextRef)(size_t) context);
}
// }

}}} // ::g::iOS::UIKit
