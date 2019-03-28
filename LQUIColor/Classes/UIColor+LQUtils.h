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

// hex string -> color : FF0000
+ (UIColor *) colorWithHexString:(NSString *)stringToConvert;
+ (UIColor *) colorWithHexString:(NSString *)stringToConvert andAlpha:(CGFloat)alpha;

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

@end

NS_ASSUME_NONNULL_END
