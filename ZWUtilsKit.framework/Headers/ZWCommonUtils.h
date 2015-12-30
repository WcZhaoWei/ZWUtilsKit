//
//  ZWCommonUtils.h
//  ZWUtilsKit
//
//  Created by 赵伟 on 15/12/29.
//  Copyright © 2015年 赵伟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZWCommonUtils : NSObject

#pragma mark - 时间格式转换

/**
 Date 转换 NSString
 (自定义 默认格式：@"yyyy-MM-dd HH:mm:ss")
 */
+ (NSString *)getStringForDate:(NSDate *)date format:(NSString *)format;

/**
 Date 转换 NSString
 (默认格式：@"yyyy-MM-dd HH:mm:ss")
 */
+ (NSString *)getStringForDate:(NSDate *)date;

/** NSString 转换 Date
 (自定义 默认格式：@"yyyy-MM-dd HH:mm:ss")
 */
+ (NSDate *)getDateForString:(NSString *)string format:(NSString *)format;

/**
 NSString 转换 Date
 (默认格式：@"yyyy-MM-dd HH:mm:ss")
 */
+ (NSDate *)getDateForString:(NSString *)string;

/**
 DateNSString 转换 NSString
 (默认格式：@"yyyy-MM-dd HH:mm:ss")
 */
+ (NSString *)getStringForDateString:(NSString *)string byFormat:(NSString *)byFormat toFormat:(NSString *)toFormat;

@end
