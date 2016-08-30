//
//  NFMenuView.h
//  NFPageViewController
//
//  Created by guojiubo on 4/8/16.
//  Copyright © 2016 guojiubo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NFMenuItem.h"

@class NFPageViewController;

@protocol NFMenuView

@property (nonatomic, strong) NSArray<KindofMenuItem> *items;

@property (nonatomic, assign) NSUInteger selectedIndex;

- (void)selectingItem:(KindofMenuItem)item fromItem:(KindofMenuItem)fromItem rate:(CGFloat)rate;

@end

typedef __kindof UIView<NFMenuView> * KindofMenuView;

@interface NFMenuView : UIView <NFMenuView>

@property (nonatomic, strong) NSArray<KindofMenuItem> *items;

@property (nonatomic, assign) NSUInteger selectedIndex;

- (void)selectingItem:(KindofMenuItem)item fromItem:(KindofMenuItem)fromItem rate:(CGFloat)rate;

@property (nonatomic, strong) UIColor *indicatorColor;
@property (nonatomic, assign) CGFloat indicatorHeight;

@end
