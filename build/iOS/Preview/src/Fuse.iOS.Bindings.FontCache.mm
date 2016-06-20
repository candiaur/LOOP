// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS.Bindings/0.29.22/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CGBitmapContext.h>
#include <CoreText/CTFontManager.h>
#include <Fuse.iOS.Bindings.FontCache.h>
#include <iOS.CoreFoundation.CFStringRef.h>
#include <iOS.CoreGraphics.CGDataProviderRef.h>
#include <iOS.CoreGraphics.CGFontRef.h>
#include <iOS.CoreGraphics.Functions.h>
#include <iOS.Foundation.NSBundle.h>
#include <iOS.Foundation.NSError.h>
#include <iOS.Foundation.NSString.h>
#include <iOS.UIKit.UIFont.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <UIKit/NSAttributedString.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class FontCache :199
// {
// static FontCache() :199
static void FontCache__cctor__fn(uType* __type)
{
    FontCache::_fontNameCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, string>*/]));
}

static void FontCache_build(uType* type)
{
    ::STRINGS[0] = uString::Const("data/");
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[2] = uString::Const("/tempFont");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::iOS::Bindings::FontCache::_fontNameCache_, uFieldFlagsStatic);
}

uClassType* FontCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.FontCache", options);
    type->fp_build_ = FontCache_build;
    type->fp_cctor_ = FontCache__cctor__fn;
    return type;
}

// private static iOS.CoreGraphics.CGFontRef CoreGraphicsFontRefFromPath(string path) :289
void FontCache__CoreGraphicsFontRefFromPath_fn(uString* path, app::CGFontRef** __retval)
{
    *__retval = FontCache::CoreGraphicsFontRefFromPath(path);
}

// public static iOS.UIKit.UIFont CreateFontFromName(string fontName, float fontSize) :279
void FontCache__CreateFontFromName_fn(uString* fontName, float* fontSize, ::g::iOS::UIKit::UIFont** __retval)
{
    *__retval = FontCache::CreateFontFromName(fontName, *fontSize);
}

// public static iOS.UIKit.UIFont GetDefaultFont(float fontSize) :284
void FontCache__GetDefaultFont_fn(float* fontSize, ::g::iOS::UIKit::UIFont** __retval)
{
    *__retval = FontCache::GetDefaultFont(*fontSize);
}

// public static iOS.UIKit.UIFont GetFontFromFile(Uno.UX.FileSource fileSource, float fontSize) :205
void FontCache__GetFontFromFile_fn(::g::Uno::UX::FileSource* fileSource, float* fontSize, ::g::iOS::UIKit::UIFont** __retval)
{
    *__retval = FontCache::GetFontFromFile(fileSource, *fontSize);
}

// private static iOS.UIKit.UIFont GetFromBundleFileSource(Uno.UX.BundleFileSource bundleFileSource, float fontSize) :213
void FontCache__GetFromBundleFileSource_fn(::g::Uno::UX::BundleFileSource* bundleFileSource, float* fontSize, ::g::iOS::UIKit::UIFont** __retval)
{
    *__retval = FontCache::GetFromBundleFileSource(bundleFileSource, *fontSize);
}

// private static iOS.UIKit.UIFont GetFromFileSource(Uno.UX.FileSource fileSource, float fontSize) :236
void FontCache__GetFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, float* fontSize, ::g::iOS::UIKit::UIFont** __retval)
{
    *__retval = FontCache::GetFromFileSource(fileSource, *fontSize);
}

// private static string GetPostScriptNameOfCGFontRef(iOS.CoreGraphics.CGFontRef font) :297
void FontCache__GetPostScriptNameOfCGFontRef_fn(app::CGFontRef** font, uString** __retval)
{
    *__retval = FontCache::GetPostScriptNameOfCGFontRef(*font);
}

// private static bool RegisterFont(iOS.CoreGraphics.CGFontRef font) :263
void FontCache__RegisterFont_fn(app::CGFontRef** font, bool* __retval)
{
    *__retval = FontCache::RegisterFont(*font);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FontCache::_fontNameCache_;

// private static iOS.CoreGraphics.CGFontRef CoreGraphicsFontRefFromPath(string path) [static] :289
app::CGFontRef* FontCache::CoreGraphicsFontRefFromPath(uString* path)
{
    uStackFrame __("Fuse.iOS.Bindings.FontCache", "CoreGraphicsFontRefFromPath(string)");
    FontCache_typeof()->Init();
    app::CGDataProviderRef* fontDataProvider = (app::CGDataProviderRef*)CGDataProviderCreateWithFilename(uAllocCStr(path));
    app::CGFontRef* font = ::g::iOS::CoreGraphics::Functions::CGFontCreateWithDataProvider(fontDataProvider);
    ::g::iOS::CoreGraphics::Functions::CGDataProviderRelease(fontDataProvider);
    return font;
}

// public static iOS.UIKit.UIFont CreateFontFromName(string fontName, float fontSize) [static] :279
::g::iOS::UIKit::UIFont* FontCache::CreateFontFromName(uString* fontName, float fontSize)
{
    uStackFrame __("Fuse.iOS.Bindings.FontCache", "CreateFontFromName(string,float)");
    FontCache_typeof()->Init();
    return ::g::iOS::UIKit::UIFont::_fontWithNameSize(fontName, (double)fontSize);
}

// public static iOS.UIKit.UIFont GetDefaultFont(float fontSize) [static] :284
::g::iOS::UIKit::UIFont* FontCache::GetDefaultFont(float fontSize)
{
    uStackFrame __("Fuse.iOS.Bindings.FontCache", "GetDefaultFont(float)");
    FontCache_typeof()->Init();
    return ::g::iOS::UIKit::UIFont::_systemFontOfSize((double)fontSize);
}

// public static iOS.UIKit.UIFont GetFontFromFile(Uno.UX.FileSource fileSource, float fontSize) [static] :205
::g::iOS::UIKit::UIFont* FontCache::GetFontFromFile(::g::Uno::UX::FileSource* fileSource, float fontSize)
{
    uStackFrame __("Fuse.iOS.Bindings.FontCache", "GetFontFromFile(Uno.UX.FileSource,float)");
    FontCache_typeof()->Init();

    if (uIs(fileSource, ::TYPES[1/*Uno.UX.BundleFileSource*/]))
        return FontCache::GetFromBundleFileSource(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[1/*Uno.UX.BundleFileSource*/]), fontSize);

    return FontCache::GetFromFileSource(fileSource, fontSize);
}

// private static iOS.UIKit.UIFont GetFromBundleFileSource(Uno.UX.BundleFileSource bundleFileSource, float fontSize) [static] :213
::g::iOS::UIKit::UIFont* FontCache::GetFromBundleFileSource(::g::Uno::UX::BundleFileSource* bundleFileSource, float fontSize)
{
    uStackFrame __("Fuse.iOS.Bindings.FontCache", "GetFromBundleFileSource(Uno.UX.BundleFileSource,float)");
    FontCache_typeof()->Init();
    bool ret1;
    uString* ret2;
    ::g::Uno::IO::BundleFile* bundleFile = uPtr(bundleFileSource)->BundleFile;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(FontCache::_fontNameCache()), uPtr(bundleFile)->BundlePath(), &ret1), ret1))
    {
        uString* path = uPtr(::g::iOS::Foundation::NSBundle::_mainBundle())->pathForResourceOfType(::g::Uno::String::op_Addition2(::STRINGS[0/*"data/"*/], uPtr(bundleFile)->BundlePath()), ::STRINGS[1/*""*/]);
        app::CGFontRef* font = FontCache::CoreGraphicsFontRefFromPath(path);

        if (font == nil)
            return NULL;

        uString* name = FontCache::GetPostScriptNameOfCGFontRef(font);
        ::g::iOS::CoreGraphics::Functions::CGFontRelease(font);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(FontCache::_fontNameCache()), bundleFile->BundlePath(), name);
    }

    uString* fontName = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(FontCache::_fontNameCache()), uPtr(bundleFile)->BundlePath(), &ret2), ret2);
    return FontCache::CreateFontFromName(fontName, fontSize);
}

// private static iOS.UIKit.UIFont GetFromFileSource(Uno.UX.FileSource fileSource, float fontSize) [static] :236
::g::iOS::UIKit::UIFont* FontCache::GetFromFileSource(::g::Uno::UX::FileSource* fileSource, float fontSize)
{
    uStackFrame __("Fuse.iOS.Bindings.FontCache", "GetFromFileSource(Uno.UX.FileSource,float)");
    FontCache_typeof()->Init();
    bool ret3;
    uString* ret4;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(FontCache::_fontNameCache()), uPtr(fileSource)->Name, &ret3), ret3))
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[2/*"/tempFont"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        app::CGFontRef* font = FontCache::CoreGraphicsFontRefFromPath(path);

        if (font == nil)
            return NULL;

        FontCache::RegisterFont(font);
        uString* name = FontCache::GetPostScriptNameOfCGFontRef(font);
        ::g::iOS::CoreGraphics::Functions::CGFontRelease(font);
        ::g::Uno::IO::File::Delete(path);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(FontCache::_fontNameCache()), fileSource->Name, name);
    }

    uString* fontName = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(FontCache::_fontNameCache()), uPtr(fileSource)->Name, &ret4), ret4);
    return FontCache::CreateFontFromName(fontName, fontSize);
}

// private static string GetPostScriptNameOfCGFontRef(iOS.CoreGraphics.CGFontRef font) [static] :297
uString* FontCache::GetPostScriptNameOfCGFontRef(app::CGFontRef* font)
{
    uStackFrame __("Fuse.iOS.Bindings.FontCache", "GetPostScriptNameOfCGFontRef(iOS.CoreGraphics.CGFontRef)");
    FontCache_typeof()->Init();
    app::CFStringRef* fontName = ::g::iOS::CoreGraphics::Functions::CGFontCopyPostScriptName(font);
    ::g::iOS::Foundation::NSString* nsFontName = (::g::iOS::Foundation::NSString*)uObjC::Lifetime::GetUnoObject((__bridge ::NSString *)fontName, ::g::iOS::Foundation::NSString_typeof());
    return uPtr(nsFontName)->stringByAppendingString(::STRINGS[1/*""*/]);
}

// private static bool RegisterFont(iOS.CoreGraphics.CGFontRef font) [static] :263
bool FontCache::RegisterFont(app::CGFontRef* font)
{
    uStackFrame __("Fuse.iOS.Bindings.FontCache", "RegisterFont(iOS.CoreGraphics.CGFontRef)");
    FontCache_typeof()->Init();
    ::CFErrorRef cfError;

    if (!CTFontManagerRegisterGraphicsFont((::CGFontRef)font, &cfError))
    {
        ::g::iOS::Foundation::NSError* error = (::g::iOS::Foundation::NSError*)uObjC::Lifetime::GetUnoObject((__bridge NSError *)cfError, ::g::iOS::Foundation::NSError_typeof());

        if (uPtr(error)->Code() != 120)
            return false;
    }

    return true;
}
// }

}}}} // ::g::Fuse::iOS::Bindings
