//
//  NSString+DMLength.h
//  duimian
//
//  Created by guojiubo on 16/1/26.
//  Copyright © 2016年 yy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (DMLength)

// 是否包含中日韩字符
- (BOOL)dm_containsCJKCharacter;

// 中日韩自字符长度视为2，其它视为1
- (NSUInteger)dm_specialLength;

// 是否是合法的昵称
- (BOOL)dm_isValidNickname;
- (NSString *)validNickname;

// 是否是合法的游仙封面标题
- (BOOL)dm_isValidFairyCoverTitle;
- (NSString *)validFairyCoverTitle;

// 是否是合法的游仙封面简介
- (BOOL)dm_isValidFairyCoverSummary;
- (NSString *)validFairyCoverSummary;

// 是否是合法的用户个性标签
- (BOOL)dm_isValidUserTag;
- (NSString *)validUserTag;

// 是否是合法的用户签名
- (BOOL)dm_isValidUserSignature;
- (NSString *)validUserSignature;
- (NSString *)validShowUserSignature;

// 是否是合法的领域标题
- (BOOL)dm_isValidFieldTitle;
- (NSString *)validFieldTitle;

// 是否是合法的自定义地点
- (BOOL)dm_isValidCustomAddress;
- (NSString *)validCustomAddress;

// 是否是合法的用户邀约留言（想对游仙说的话）
- (BOOL)dm_isValidOrderMessage;
- (NSString *)validOrderMessage;

@end
