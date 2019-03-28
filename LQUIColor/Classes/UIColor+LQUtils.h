//
//  UIColor+LQUtils.h
//  Pods
//
//  Created by LittleQ on 2019/3/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (LQUtils)

// string -> color : #FF0000
+ (UIColor *) stringToColor:(NSString *)str;
+ (UIColor *) stringToColor:(NSString *)str andAlpha:(float)alpha;

+ (UIColor *) mainColor;
+ (UIColor *) separatorColor;
+ (UIColor *) separatorLineDarkColor;
+ (UIColor *) separatorLineLightColor;
+ (UIColor *) contentBackgroundColor;
+ (UIColor *) titleColor;
+ (UIColor *) contentDarkColor;
+ (UIColor *) contentLightColor;
+ (UIColor *) iconLightColor;
+ (UIColor *) riseRankColor;
+ (UIColor *) btnStartColor;
+ (UIColor *) btnEndColor;
+ (UIColor *) selectedColor;
+ (UIColor *) TopicCommentNameColor;

// hex string -> color : FF0000
+ (UIColor *) colorWithHexString:(NSString *)stringToConvert;
+ (UIColor *) colorWithHexString:(NSString *)stringToConvert andAlpha:(CGFloat)alpha;

// hex -> color : 0xFF0000
+ (UIColor *) colorWithHex:(NSInteger)hexValue alpha:(CGFloat)alphaValue;
+ (UIColor *) colorWithHex:(NSInteger)hexValue;

@end

NS_ASSUME_NONNULL_END
