//
//  NSMutableAttributedString+DMAdditions.h
//  duimian
//
//  Created by guojiubo on 16/1/14.
//  Copyright © 2016年 yy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSMutableAttributedString (DMAdditions)

- (void)dm_setFont:(UIFont *)font;
- (void)dm_setFont:(UIFont *)font range:(NSRange)range;

- (void)dm_setTextColor:(UIColor *)color;
- (void)dm_setTextColor:(UIColor *)color range:(NSRange)range;

@end
