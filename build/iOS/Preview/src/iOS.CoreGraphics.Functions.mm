// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.29.0/functions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <iOS.CoreFoundation.CFStringRef.h>
#include <iOS.CoreGraphics.CGBitmapInfo.h>
#include <iOS.CoreGraphics.CGColorSpaceRef.h>
#include <iOS.CoreGraphics.CGContextRef.h>
#include <iOS.CoreGraphics.CGDataProviderRef.h>
#include <iOS.CoreGraphics.CGFontRef.h>
#include <iOS.CoreGraphics.Functions.h>
#include <Uno.Double.h>
#include <Uno.IntPtr.h>
#include <Uno.ULong.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace CoreGraphics{

// public static class Functions :4428
// {
static void Functions_build(uType* type)
{
    type->Reflection.SetFunctions(11,
        new uFunction("CGBitmapContextCreate", NULL, (void*)Functions__CGBitmapContextCreate_fn, 0, true, ::g::iOS::CoreGraphics::CGContextRef_typeof(), 7, ::g::Uno::IntPtr_typeof(), ::g::Uno::ULong_typeof(), ::g::Uno::ULong_typeof(), ::g::Uno::ULong_typeof(), ::g::Uno::ULong_typeof(), ::g::iOS::CoreGraphics::CGColorSpaceRef_typeof(), ::g::iOS::CoreGraphics::CGBitmapInfo_typeof()),
        new uFunction("CGColorSpaceCreateDeviceRGB", NULL, (void*)Functions__CGColorSpaceCreateDeviceRGB_fn, 0, true, ::g::iOS::CoreGraphics::CGColorSpaceRef_typeof(), 0),
        new uFunction("CGContextClearRect", NULL, (void*)Functions__CGContextClearRect_fn, 0, true, uVoid_typeof(), 2, ::g::iOS::CoreGraphics::CGContextRef_typeof(), ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("CGContextRelease", NULL, (void*)Functions__CGContextRelease_fn, 0, true, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGContextRef_typeof()),
        new uFunction("CGDataProviderRelease", NULL, (void*)Functions__CGDataProviderRelease_fn, 0, true, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGDataProviderRef_typeof()),
        new uFunction("CGFontCopyPostScriptName", NULL, (void*)Functions__CGFontCopyPostScriptName_fn, 0, true, ::g::iOS::CoreFoundation::CFStringRef_typeof(), 1, ::g::iOS::CoreGraphics::CGFontRef_typeof()),
        new uFunction("CGFontCreateWithDataProvider", NULL, (void*)Functions__CGFontCreateWithDataProvider_fn, 0, true, ::g::iOS::CoreGraphics::CGFontRef_typeof(), 1, ::g::iOS::CoreGraphics::CGDataProviderRef_typeof()),
        new uFunction("CGFontRelease", NULL, (void*)Functions__CGFontRelease_fn, 0, true, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGFontRef_typeof()),
        new uFunction("CGPointMake", NULL, (void*)Functions__CGPointMake_fn, 0, true, ::g::iOS::CoreGraphics::CGPoint_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("CGRectMake", NULL, (void*)Functions__CGRectMake_fn, 0, true, ::g::iOS::CoreGraphics::CGRect_typeof(), 4, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("CGSizeMake", NULL, (void*)Functions__CGSizeMake_fn, 0, true, ::g::iOS::CoreGraphics::CGSize_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()));
}

uClassType* Functions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("iOS.CoreGraphics.Functions", options);
    type->fp_build_ = Functions_build;
    return type;
}

// public static iOS.CoreGraphics.CGContextRef CGBitmapContextCreate(Uno.IntPtr data, ulong width, ulong height, ulong bitsPerComponent, ulong bytesPerRow, iOS.CoreGraphics.CGColorSpaceRef space, iOS.CoreGraphics.CGBitmapInfo bitmapInfo) :5741
void Functions__CGBitmapContextCreate_fn(void** data, uint64_t* width, uint64_t* height, uint64_t* bitsPerComponent, uint64_t* bytesPerRow, app::CGColorSpaceRef** space, uint32_t* bitmapInfo, app::CGContextRef** __retval)
{
    *__retval = Functions::CGBitmapContextCreate(*data, *width, *height, *bitsPerComponent, *bytesPerRow, *space, *bitmapInfo);
}

// public static iOS.CoreGraphics.CGColorSpaceRef CGColorSpaceCreateDeviceRGB() :4709
void Functions__CGColorSpaceCreateDeviceRGB_fn(app::CGColorSpaceRef** __retval)
{
    *__retval = Functions::CGColorSpaceCreateDeviceRGB();
}

// public static void CGContextClearRect(iOS.CoreGraphics.CGContextRef c, iOS.CoreGraphics.CGRect rect) :5485
void Functions__CGContextClearRect_fn(app::CGContextRef** c, ::g::iOS::CoreGraphics::CGRect* rect)
{
    Functions::CGContextClearRect(*c, *rect);
}

// public static void CGContextRelease(iOS.CoreGraphics.CGContextRef c) :5650
void Functions__CGContextRelease_fn(app::CGContextRef** c)
{
    Functions::CGContextRelease(*c);
}

// public static void CGDataProviderRelease(iOS.CoreGraphics.CGDataProviderRef provider) :4695
void Functions__CGDataProviderRelease_fn(app::CGDataProviderRef** provider)
{
    Functions::CGDataProviderRelease(*provider);
}

// public static iOS.CoreFoundation.CFStringRef CGFontCopyPostScriptName(iOS.CoreGraphics.CGFontRef font) :4875
void Functions__CGFontCopyPostScriptName_fn(app::CGFontRef** font, app::CFStringRef** __retval)
{
    *__retval = Functions::CGFontCopyPostScriptName(*font);
}

// public static iOS.CoreGraphics.CGFontRef CGFontCreateWithDataProvider(iOS.CoreGraphics.CGDataProviderRef provider) :4841
void Functions__CGFontCreateWithDataProvider_fn(app::CGDataProviderRef** provider, app::CGFontRef** __retval)
{
    *__retval = Functions::CGFontCreateWithDataProvider(*provider);
}

// public static void CGFontRelease(iOS.CoreGraphics.CGFontRef font) :4861
void Functions__CGFontRelease_fn(app::CGFontRef** font)
{
    Functions::CGFontRelease(*font);
}

// public static iOS.CoreGraphics.CGPoint CGPointMake(double x, double y) :4430
void Functions__CGPointMake_fn(double* x, double* y, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = Functions::CGPointMake(*x, *y);
}

// public static iOS.CoreGraphics.CGRect CGRectMake(double x, double y, double width, double height) :4445
void Functions__CGRectMake_fn(double* x, double* y, double* width, double* height, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = Functions::CGRectMake(*x, *y, *width, *height);
}

// public static iOS.CoreGraphics.CGSize CGSizeMake(double width, double height) :4435
void Functions__CGSizeMake_fn(double* width, double* height, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = Functions::CGSizeMake(*width, *height);
}

// public static iOS.CoreGraphics.CGContextRef CGBitmapContextCreate(Uno.IntPtr data, ulong width, ulong height, ulong bitsPerComponent, ulong bytesPerRow, iOS.CoreGraphics.CGColorSpaceRef space, iOS.CoreGraphics.CGBitmapInfo bitmapInfo) [static] :5741
app::CGContextRef* Functions::CGBitmapContextCreate(void* data, uint64_t width, uint64_t height, uint64_t bitsPerComponent, uint64_t bytesPerRow, app::CGColorSpaceRef* space, uint32_t bitmapInfo)
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGBitmapContextCreate(Uno.IntPtr,ulong,ulong,ulong,ulong,iOS.CoreGraphics.CGColorSpaceRef,iOS.CoreGraphics.CGBitmapInfo)");
    app::CGContextRef* __return1 = (app::CGContextRef*)(size_t) ::CGBitmapContextCreate((void*)data, (unsigned long)width, (unsigned long)height, (unsigned long)bitsPerComponent, (unsigned long)bytesPerRow, (::CGColorSpaceRef)(size_t) space, ::CGBitmapInfo(bitmapInfo));
    return __return1;
}

// public static iOS.CoreGraphics.CGColorSpaceRef CGColorSpaceCreateDeviceRGB() [static] :4709
app::CGColorSpaceRef* Functions::CGColorSpaceCreateDeviceRGB()
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGColorSpaceCreateDeviceRGB()");
    app::CGColorSpaceRef* __return1 = (app::CGColorSpaceRef*)(size_t) ::CGColorSpaceCreateDeviceRGB();
    return __return1;
}

// public static void CGContextClearRect(iOS.CoreGraphics.CGContextRef c, iOS.CoreGraphics.CGRect rect) [static] :5485
void Functions::CGContextClearRect(app::CGContextRef* c, ::g::iOS::CoreGraphics::CGRect rect)
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGContextClearRect(iOS.CoreGraphics.CGContextRef,iOS.CoreGraphics.CGRect)");
    ::CGContextClearRect((::CGContextRef)(size_t) c, uObjC::Struct::FromUno_CGRect(rect, ::CGRect()));
}

// public static void CGContextRelease(iOS.CoreGraphics.CGContextRef c) [static] :5650
void Functions::CGContextRelease(app::CGContextRef* c)
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGContextRelease(iOS.CoreGraphics.CGContextRef)");
    ::CGContextRelease((::CGContextRef)(size_t) c);
}

// public static void CGDataProviderRelease(iOS.CoreGraphics.CGDataProviderRef provider) [static] :4695
void Functions::CGDataProviderRelease(app::CGDataProviderRef* provider)
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGDataProviderRelease(iOS.CoreGraphics.CGDataProviderRef)");
    ::CGDataProviderRelease((::CGDataProviderRef)(size_t) provider);
}

// public static iOS.CoreFoundation.CFStringRef CGFontCopyPostScriptName(iOS.CoreGraphics.CGFontRef font) [static] :4875
app::CFStringRef* Functions::CGFontCopyPostScriptName(app::CGFontRef* font)
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGFontCopyPostScriptName(iOS.CoreGraphics.CGFontRef)");
    app::CFStringRef* __return1 = (app::CFStringRef*)(size_t) ::CGFontCopyPostScriptName((::CGFontRef)(size_t) font);
    return __return1;
}

// public static iOS.CoreGraphics.CGFontRef CGFontCreateWithDataProvider(iOS.CoreGraphics.CGDataProviderRef provider) [static] :4841
app::CGFontRef* Functions::CGFontCreateWithDataProvider(app::CGDataProviderRef* provider)
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGFontCreateWithDataProvider(iOS.CoreGraphics.CGDataProviderRef)");
    app::CGFontRef* __return1 = (app::CGFontRef*)(size_t) ::CGFontCreateWithDataProvider((::CGDataProviderRef)(size_t) provider);
    return __return1;
}

// public static void CGFontRelease(iOS.CoreGraphics.CGFontRef font) [static] :4861
void Functions::CGFontRelease(app::CGFontRef* font)
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGFontRelease(iOS.CoreGraphics.CGFontRef)");
    ::CGFontRelease((::CGFontRef)(size_t) font);
}

// public static iOS.CoreGraphics.CGPoint CGPointMake(double x, double y) [static] :4430
::g::iOS::CoreGraphics::CGPoint Functions::CGPointMake(double x, double y)
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGPointMake(double,double)");
    ::g::iOS::CoreGraphics::CGPoint __return1 = uObjC::Struct::ToUno_CGPoint(::CGPointMake((CGFloat)x, (CGFloat)y), ::g::iOS::CoreGraphics::CGPoint());
    return __return1;
}

// public static iOS.CoreGraphics.CGRect CGRectMake(double x, double y, double width, double height) [static] :4445
::g::iOS::CoreGraphics::CGRect Functions::CGRectMake(double x, double y, double width, double height)
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGRectMake(double,double,double,double)");
    ::g::iOS::CoreGraphics::CGRect __return1 = uObjC::Struct::ToUno_CGRect(::CGRectMake((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height), ::g::iOS::CoreGraphics::CGRect());
    return __return1;
}

// public static iOS.CoreGraphics.CGSize CGSizeMake(double width, double height) [static] :4435
::g::iOS::CoreGraphics::CGSize Functions::CGSizeMake(double width, double height)
{
    uStackFrame __("iOS.CoreGraphics.Functions", "CGSizeMake(double,double)");
    ::g::iOS::CoreGraphics::CGSize __return1 = uObjC::Struct::ToUno_CGSize(::CGSizeMake((CGFloat)width, (CGFloat)height), ::g::iOS::CoreGraphics::CGSize());
    return __return1;
}
// }

}}} // ::g::iOS::CoreGraphics
