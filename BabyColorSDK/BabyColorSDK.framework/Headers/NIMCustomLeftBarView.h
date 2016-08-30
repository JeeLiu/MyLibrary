//
//  NIMCustomLeftBarView.h
//  NIMKit
//
//  Created by chris.
//  Copyright (c) 2014年 Netease. All rights reserved.
//

#import <UIKit/UIKit.h>
@class NIMBadgeView;

@interface NIMCustomLeftBarView : UIControl

@property (nonatomic, strong) UIButton *badgeIcon;
@property (nonatomic, strong) NIMBadgeView *badgeView;

- (id)initWithBadgeImageName:(NSString *)imageName target:(id)target action:(SEL)action;

@end
