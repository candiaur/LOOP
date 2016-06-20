#define uObjC_NATIVE_TYPE UIBarButtonItem
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIBarButtonItem*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIBarButtonItem_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UIBarButtonItem.initWithImageStyleTargetAction(iOS.UIKit.UIImage,iOS.UIKit.UIBarButtonItemStyle,ObjC.ID,ObjC.Selector):IsStripped}
//- (instancetype) initWithImage:(UIImage *)image style:(UIBarButtonItemStyle)style target:(id)target action:(SEL)action
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).initWithImageStyleTargetAction(iOS.UIKit.UIImage,iOS.UIKit.UIBarButtonItemStyle,ObjC.ID,ObjC.Selector):Call((#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(image, #{iOS.UIKit.UIImage:TypeOf}), #{int}(style), (#{ObjC.ID})target, (#{ObjC.Selector})action)};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.initWithImageLandscapeImagePhoneStyleTargetAction(iOS.UIKit.UIImage,iOS.UIKit.UIImage,iOS.UIKit.UIBarButtonItemStyle,ObjC.ID,ObjC.Selector):IsStripped}
//- (instancetype) initWithImage:(UIImage *)image landscapeImagePhone:(UIImage *)landscapeImagePhone style:(UIBarButtonItemStyle)style target:(id)target action:(SEL)action
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).initWithImageLandscapeImagePhoneStyleTargetAction(iOS.UIKit.UIImage,iOS.UIKit.UIImage,iOS.UIKit.UIBarButtonItemStyle,ObjC.ID,ObjC.Selector):Call((#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(image, #{iOS.UIKit.UIImage:TypeOf}), (#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(landscapeImagePhone, #{iOS.UIKit.UIImage:TypeOf}), #{int}(style), (#{ObjC.ID})target, (#{ObjC.Selector})action)};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.initWithTitleStyleTargetAction(string,iOS.UIKit.UIBarButtonItemStyle,ObjC.ID,ObjC.Selector):IsStripped}
//- (instancetype) initWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style target:(id)target action:(SEL)action
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).initWithTitleStyleTargetAction(string,iOS.UIKit.UIBarButtonItemStyle,ObjC.ID,ObjC.Selector):Call(uObjC::UnoString(title), #{int}(style), (#{ObjC.ID})target, (#{ObjC.Selector})action)};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.initWithBarButtonSystemItemTargetAction(iOS.UIKit.UIBarButtonSystemItem,ObjC.ID,ObjC.Selector):IsStripped}
//- (instancetype) initWithBarButtonSystemItem:(UIBarButtonSystemItem)systemItem target:(id)target action:(SEL)action
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).initWithBarButtonSystemItemTargetAction(iOS.UIKit.UIBarButtonSystemItem,ObjC.ID,ObjC.Selector):Call(#{int}(systemItem), (#{ObjC.ID})target, (#{ObjC.Selector})action)};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.initWithCustomView(iOS.UIKit.UIView):IsStripped}
//- (instancetype) initWithCustomView:(UIView *)customView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).initWithCustomView(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(customView, #{iOS.UIKit.UIView:TypeOf}))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setBackgroundImageForStateBarMetrics(iOS.UIKit.UIImage,iOS.UIKit.UIControlState,iOS.UIKit.UIBarMetrics):IsStripped}
//- (void) setBackgroundImage:(UIImage *)backgroundImage forState:(UIControlState)state barMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setBackgroundImageForStateBarMetrics(iOS.UIKit.UIImage,iOS.UIKit.UIControlState,iOS.UIKit.UIBarMetrics):Call((#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(backgroundImage, #{iOS.UIKit.UIImage:TypeOf}), #{uint}(state), #{int}(barMetrics))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.backgroundImageForStateBarMetrics(iOS.UIKit.UIControlState,iOS.UIKit.UIBarMetrics):IsStripped}
//- (UIImage *) backgroundImageForState:(UIControlState)state barMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIImage} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).backgroundImageForStateBarMetrics(iOS.UIKit.UIControlState,iOS.UIKit.UIBarMetrics):Call(#{uint}(state), #{int}(barMetrics))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setBackgroundImageForStateStyleBarMetrics(iOS.UIKit.UIImage,iOS.UIKit.UIControlState,iOS.UIKit.UIBarButtonItemStyle,iOS.UIKit.UIBarMetrics):IsStripped}
//- (void) setBackgroundImage:(UIImage *)backgroundImage forState:(UIControlState)state style:(UIBarButtonItemStyle)style barMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setBackgroundImageForStateStyleBarMetrics(iOS.UIKit.UIImage,iOS.UIKit.UIControlState,iOS.UIKit.UIBarButtonItemStyle,iOS.UIKit.UIBarMetrics):Call((#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(backgroundImage, #{iOS.UIKit.UIImage:TypeOf}), #{uint}(state), #{int}(style), #{int}(barMetrics))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.backgroundImageForStateStyleBarMetrics(iOS.UIKit.UIControlState,iOS.UIKit.UIBarButtonItemStyle,iOS.UIKit.UIBarMetrics):IsStripped}
//- (UIImage *) backgroundImageForState:(UIControlState)state style:(UIBarButtonItemStyle)style barMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIImage} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).backgroundImageForStateStyleBarMetrics(iOS.UIKit.UIControlState,iOS.UIKit.UIBarButtonItemStyle,iOS.UIKit.UIBarMetrics):Call(#{uint}(state), #{int}(style), #{int}(barMetrics))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setBackgroundVerticalPositionAdjustmentForBarMetrics(double,iOS.UIKit.UIBarMetrics):IsStripped}
//- (void) setBackgroundVerticalPositionAdjustment:(CGFloat)adjustment forBarMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setBackgroundVerticalPositionAdjustmentForBarMetrics(double,iOS.UIKit.UIBarMetrics):Call((#{double})adjustment, #{int}(barMetrics))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.backgroundVerticalPositionAdjustmentForBarMetrics(iOS.UIKit.UIBarMetrics):IsStripped}
//- (CGFloat) backgroundVerticalPositionAdjustmentForBarMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).backgroundVerticalPositionAdjustmentForBarMetrics(iOS.UIKit.UIBarMetrics):Call(#{int}(barMetrics))};
//    return (CGFloat)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setTitlePositionAdjustmentForBarMetrics(iOS.UIKit.UIOffset,iOS.UIKit.UIBarMetrics):IsStripped}
//- (void) setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setTitlePositionAdjustmentForBarMetrics(iOS.UIKit.UIOffset,iOS.UIKit.UIBarMetrics):Call(uObjC::Struct::ToUno_UIOffset(adjustment, #{iOS.UIKit.UIOffset}()), #{int}(barMetrics))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.titlePositionAdjustmentForBarMetrics(iOS.UIKit.UIBarMetrics):IsStripped}
//- (UIOffset) titlePositionAdjustmentForBarMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIOffset} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).titlePositionAdjustmentForBarMetrics(iOS.UIKit.UIBarMetrics):Call(#{int}(barMetrics))};
//    return uObjC::Struct::FromUno_UIOffset(__return, ::UIOffset());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setBackButtonBackgroundImageForStateBarMetrics(iOS.UIKit.UIImage,iOS.UIKit.UIControlState,iOS.UIKit.UIBarMetrics):IsStripped}
//- (void) setBackButtonBackgroundImage:(UIImage *)backgroundImage forState:(UIControlState)state barMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setBackButtonBackgroundImageForStateBarMetrics(iOS.UIKit.UIImage,iOS.UIKit.UIControlState,iOS.UIKit.UIBarMetrics):Call((#{iOS.UIKit.UIImage})uObjC::Lifetime::GetUnoObject(backgroundImage, #{iOS.UIKit.UIImage:TypeOf}), #{uint}(state), #{int}(barMetrics))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.backButtonBackgroundImageForStateBarMetrics(iOS.UIKit.UIControlState,iOS.UIKit.UIBarMetrics):IsStripped}
//- (UIImage *) backButtonBackgroundImageForState:(UIControlState)state barMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIImage} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).backButtonBackgroundImageForStateBarMetrics(iOS.UIKit.UIControlState,iOS.UIKit.UIBarMetrics):Call(#{uint}(state), #{int}(barMetrics))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setBackButtonTitlePositionAdjustmentForBarMetrics(iOS.UIKit.UIOffset,iOS.UIKit.UIBarMetrics):IsStripped}
//- (void) setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setBackButtonTitlePositionAdjustmentForBarMetrics(iOS.UIKit.UIOffset,iOS.UIKit.UIBarMetrics):Call(uObjC::Struct::ToUno_UIOffset(adjustment, #{iOS.UIKit.UIOffset}()), #{int}(barMetrics))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.backButtonTitlePositionAdjustmentForBarMetrics(iOS.UIKit.UIBarMetrics):IsStripped}
//- (UIOffset) backButtonTitlePositionAdjustmentForBarMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIOffset} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).backButtonTitlePositionAdjustmentForBarMetrics(iOS.UIKit.UIBarMetrics):Call(#{int}(barMetrics))};
//    return uObjC::Struct::FromUno_UIOffset(__return, ::UIOffset());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setBackButtonBackgroundVerticalPositionAdjustmentForBarMetrics(double,iOS.UIKit.UIBarMetrics):IsStripped}
//- (void) setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)adjustment forBarMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setBackButtonBackgroundVerticalPositionAdjustmentForBarMetrics(double,iOS.UIKit.UIBarMetrics):Call((#{double})adjustment, #{int}(barMetrics))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.backButtonBackgroundVerticalPositionAdjustmentForBarMetrics(iOS.UIKit.UIBarMetrics):IsStripped}
//- (CGFloat) backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(UIBarMetrics)barMetrics
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).backButtonBackgroundVerticalPositionAdjustmentForBarMetrics(iOS.UIKit.UIBarMetrics):Call(#{int}(barMetrics))};
//    return (CGFloat)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.style():IsStripped}
//- (UIBarButtonItemStyle) style
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItemStyle} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).style():Call()};
//    return ::UIBarButtonItemStyle(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setStyle(iOS.UIKit.UIBarButtonItemStyle):IsStripped}
//- (void) setStyle:(UIBarButtonItemStyle)style
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setStyle(iOS.UIKit.UIBarButtonItemStyle):Call(#{int}(style))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.width():IsStripped}
//- (CGFloat) width
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).width():Call()};
//    return (CGFloat)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setWidth(double):IsStripped}
//- (void) setWidth:(CGFloat)width
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setWidth(double):Call((#{double})width)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.possibleTitles():IsStripped}
//- (NSSet *) possibleTitles
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSSet} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).possibleTitles():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setPossibleTitles(iOS.Foundation.NSSet):IsStripped}
//- (void) setPossibleTitles:(NSSet *)possibleTitles
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setPossibleTitles(iOS.Foundation.NSSet):Call((#{iOS.Foundation.NSSet})uObjC::Lifetime::GetUnoObject(possibleTitles, #{iOS.Foundation.NSSet:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.customView():IsStripped}
//- (UIView *) customView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).customView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setCustomView(iOS.UIKit.UIView):IsStripped}
//- (void) setCustomView:(UIView *)customView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setCustomView(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(customView, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.action():IsStripped}
//- (SEL) action
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.Selector} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).action():Call()};
//    return (::SEL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setAction(ObjC.Selector):IsStripped}
//- (void) setAction:(SEL)action
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setAction(ObjC.Selector):Call((#{ObjC.Selector})action)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.target():IsStripped}
//- (id) target
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).target():Call()};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setTarget(ObjC.ID):IsStripped}
//- (void) setTarget:(id)target
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setTarget(ObjC.ID):Call((#{ObjC.ID})target)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.tintColor():IsStripped}
//- (UIColor *) tintColor
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIColor} __return = #{iOS.UIKit.UIBarButtonItem:Of(__this).tintColor():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.setTintColor(iOS.UIKit.UIColor):IsStripped}
//- (void) setTintColor:(UIColor *)tintColor
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).setTintColor(iOS.UIKit.UIColor):Call((#{iOS.UIKit.UIColor})uObjC::Lifetime::GetUnoObject(tintColor, #{iOS.UIKit.UIColor:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.encodeWithCoder(iOS.Foundation.NSCoder):IsStripped}
//- (void) encodeWithCoder:(NSCoder *)aCoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).encodeWithCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(aCoder, #{iOS.Foundation.NSCoder:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIBarButtonItem.initWithCoder(iOS.Foundation.NSCoder):IsStripped}
//- (id) initWithCoder:(NSCoder *)aDecoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIBarButtonItem:Of(__this).initWithCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(aDecoder, #{iOS.Foundation.NSCoder:TypeOf}))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
