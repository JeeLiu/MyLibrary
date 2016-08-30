//
//  NFRefreshableScrollViewController.h
//  NFRefreshableScrollViewController
//
//  Created by guojiubo on 5/10/16.
//  Copyright © 2016 guojiubo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NFRefreshControl.h"
#import "NFLoadMoreControl.h"

@interface NFRefreshableScrollViewController : UIViewController

@property (nonatomic, weak, readonly) NFRefreshControl *refreshControl;
@property (nonatomic, weak, readonly) NFLoadMoreControl *loadMoreControl;

// Scroll view which to add refresh/load-more feature
- (__kindof UIScrollView *)scrollView;

// Force refresh control to begin refreshing, will trigger 'refreshTriggered' method
- (void)beginRefreshing;

// Call this method when finish refreshing to restore refresh state
- (void)endRefreshing;

// Determine whether continue to use load-more feature
@property (nonatomic, assign) BOOL noMore;

// Call this method when finish loading-more to restore load-more state
- (void)endLoadingMore;

// Hook, determine whether to use pull-to-refresh feature
// overide this method and return NO to disable pull-to-refresh feature, defaults to YES
- (BOOL)useRefreshControl;

// Hook, determine whether to use load-more feature
// overide this method and return NO to disable pull-to-refresh feature, defaults to YES
- (BOOL)useLoadMoreControl;

// Template methods

- (void)refreshTriggered;

- (void)loadMoreTriggered;

@end
