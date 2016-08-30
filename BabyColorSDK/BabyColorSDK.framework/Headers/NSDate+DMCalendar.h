//
//  NSDate+DMCalendar.h
//  duimian
//
//  Created by jeeliu on 15/11/5.
//  Copyright © 2015年 yy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (DMCalendar)

- (NSUInteger)dm_year;
- (NSUInteger)dm_month;
- (NSUInteger)dm_day;
- (NSInteger)dm_hour;

/**
 *@Description:多少天前\多少天后（正数前\负数后）
 *@Return:多少天前\多少天后
 **/
- (NSDate *)dm_dateForDay:(NSInteger)day;

/**
 *@Description:后一天
 *@Return:后一天
 **/
- (NSDate *)dm_followingDay;

/**
 *@Description:判断与某一天是否为同一天
 *@otherDate:某一天
 *@Return:YES-同一天；NO-不同一天
 **/
- (BOOL)dm_sameDayWithDate:(NSDate *)otherDate;

//        a)	1分钟内，显示格式：刚刚
//        b)    1-60分钟内，显示格式：XX分钟前
//        c)	1-24小时内，显示格式：XX小时前
//        d)	1-7天（含第7天）内，显示格式：XX天前
//        e)	访问的第7天后，显示格式：MM-DD HH:mm
//        f)	如访问时间跨年，显示格式：YY-MM-DD HH:mm，例如：2012年年底访问12-28，2013年看到访客列表显示：2012-12-28
- (NSString *)stringIntervalSinceDate:(NSDate *)date;
- (NSString *)dm_dateFormatterString;

/**
 *  根据日期计算周几
 *
 *  @param date NSDate
 *
 *  @return 周日，周一，周二。。。。。
 */
- (NSString*)dm_weekdayStringFromDate:(NSDate *)date;


/**
 *  change NSString(2012-12-28) to NSDate
 *
 *  @param dateString @"2012-12-28"
 *
 *  @return <#return value description#>
 */
+ (NSDate *)dm_dateFromString:(NSString *)dateString;

+ (NSString *)dm_dateFormatterStringFromTimeInterval:(NSInteger)time;

+ (NSString *)dm_caculateTimeString:(NSInteger)time;

+ (NSString *)dm_dateFormatterStringFromTimeInterval:(NSInteger)time withFormat:(NSString *)format;

//+ (NSString *)da_calulateBetwinTime:(NSInteger)beginTime endTime:(NSInteger)endtime;
@end
