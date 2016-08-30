//
//  BabyColorSDKManager.h
//  BabyColorSDK
//
//  Created by jeeliu on 16/8/25.
//  Copyright © 2016年 jeeliu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BabyColorSDKManager : NSObject

@property (nonatomic, copy, readonly, nonnull) NSString *sdkVersion;

+ (nonnull instancetype)sharedManager;

- (void)registerWithAppID:(nonnull NSString *)appKey
                  cerName:(nullable NSString *)cerName;

- (void)updateApnsToken:(nonnull NSData *)token;

@end
