//
//  NFLoadMoreControl.h
//  NFRefreshableScrollViewController
//
//  Created by guojiubo on 5/9/16.
//  Copyright © 2016 guojiubo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NFLoadMoreControl : UIControl

@property (nonatomic, readonly, getter=isLoading) BOOL loading;

@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat verticalOffset;

@property (readonly, nonatomic, weak) UIActivityIndicatorView *activityIndicator;

- (void)endLoadingMore;

@property (nonatomic, assign) BOOL noMore;

@end
