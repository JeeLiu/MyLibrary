//
//  NFRefreshControl.h
//  NFRefreshControl
//
//  Created by guojiubo on 5/9/16.
//  Copyright © 2016 guojiubo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NFRefreshControl : UIControl

@property (nonatomic, readonly, getter=isRefreshing) BOOL refreshing;

@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat verticalOffset;

@property (readonly, nonatomic, weak) UIView *contentView;
@property (readonly, nonatomic, weak) UIImageView *arrowImageView;
@property (readonly, nonatomic, weak) UIActivityIndicatorView *activityIndicator;

- (void)beginRefreshing;
- (void)endRefreshing;

@end
