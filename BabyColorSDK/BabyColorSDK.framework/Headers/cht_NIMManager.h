//
//  NIMManager.h
//  BabyColorBusiness
//
//  Created by jeeliu on 16/6/14.
//  Copyright © 2016年 yy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NIMSDK.h"
#import "NIMKit.h"
#import "NTESNotificationCenter.h"


extern NSString *NTESNotificationLogout;   //下线通知 ,通过 addObserver 监听
extern NSString *NTESChatOverlayLogout;
extern NSString *CHTRegisterRemoteNotificationError;
extern NSString *CHTLocalNotificationKey;

@interface cht_NIMManager : NSObject

@property (nonatomic,copy)  NSString    *cerName;

+ (instancetype)sharedNIMManager;
- (void)mediaSetup;
+ (void)localNotification:(NSInteger)alertTime message:(NSString *)message;
+ (void)appDelegateReload;
- (void)login;
- (void)logout:(void(^)())completion;

+ (BOOL)isCalling;

#pragma public

// 设置开启通话勿扰
+ (void)setNetCallNotDisturb:(BOOL)enable;
+ (BOOL)enabledNetCallNotDisturb;

+ (void)updateApnsToken:(NSData *)token;
+ (NSInteger)allUnreadCount;

+ (void)pushSessionId:(NSString *)uid nickname:(NSString *)nickname fromVC:(UIViewController *)fromVC;
+ (void)pushSessionId:(NSString *)uid fromVC:(UIViewController *)fromVC;

// 语音通话

+ (void)audioChatWithFuid:(NSString *)fuid fromVC:(UIViewController *)fromVC;
+ (void)audioChatWithFuid:(NSString *)fuid nickname:(NSString *)nickname fromVC:(UIViewController *)fromVC;
/**
 *  注册APNS
 */
+ (void)registerAPNs;
/**
 *  注销APNS
 */
+ (void)unregisterAPNs;

+ (BOOL)isRegisteredAPNs;

@end
