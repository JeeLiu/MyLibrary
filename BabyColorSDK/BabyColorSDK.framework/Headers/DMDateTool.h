//
//  DMDateTool.h
//  duimian
//
//  Created by guojiubo on 15/10/28.
//  Copyright © 2015年 yy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DMDateTool : NSObject

+ (NSInteger)ageFromDate:(NSDate *)date;

+ (NSArray *)zodiacSigns;

+ (NSString *)zodiacSignFromDate:(NSDate *)date;

+ (NSString *)zodiacSignWithMonth:(NSInteger)month day:(NSInteger)day;

+ (void)startCountingDown:(NSInteger)time block:(void (^) (NSInteger remain))block;

@end
