//
//  cht_ BundleTools.h
//  BabyColorSDK
//
//  Created by jeeliu on 16/8/25.
//  Copyright © 2016年 jeeliu. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface cht_BundleTools : NSObject

+ (NSString *)getBundlePath: (NSString *) assetName;
+ (NSBundle *)getBundle;

@end
