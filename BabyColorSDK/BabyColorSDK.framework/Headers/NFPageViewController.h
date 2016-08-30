//
//  NFPageViewController.h
//  NFPageViewController
//
//  Created by guojiubo on 4/6/16.
//  Copyright © 2016 guojiubo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NFMenuItem.h"
#import "NFMenuView.h"

@protocol NFPageViewControllerDataSource;
@protocol NFPageViewControllerDelegate;

@interface NFPageViewController : UIViewController

@property (nullable, nonatomic, readonly) NSArray<__kindof UIViewController *> *viewControllers;

@property (nonatomic, assign) NSUInteger selectedIndex;
@property (nullable, nonatomic, readonly) __kindof UIViewController *selectedViewController;

@property (nonnull, nonatomic, readonly) KindofMenuView menuView;

@property (nullable, nonatomic, weak) id<NFPageViewControllerDataSource> dataSource;

@property (nullable, nonatomic, weak) id<NFPageViewControllerDelegate> delegate;

- (void)embedIntoViewController:(nonnull UIViewController *)viewController;

- (void)reloadData;

@end


@protocol NFPageViewControllerDataSource <NSObject>

@required

- (nullable KindofMenuView)menuViewForPageViewController:(nonnull NFPageViewController *)pageViewController;

- (nullable NSArray<KindofMenuItem> *)menuItemsForPageViewController:(nonnull NFPageViewController *)pageViewController;

- (nullable NSArray<__kindof UIViewController *> *)viewControllersForPageViewController:(nonnull NFPageViewController *)pageViewController;

@end

@protocol NFPageViewControllerDelegate <NSObject>

@optional

// MARK - TODO: implement
- (CGFloat)heightForMenuViewInPageViewController:(nonnull NFPageViewController *)pageViewController;

- (void)pageViewController:(nonnull NFPageViewController *)pageViewController didTransitionToViewControllers:(nonnull __kindof UIViewController *)viewController;

@end


@interface UIViewController (NFPageViewController)

@property (nullable, nonatomic, readonly, strong) NFPageViewController *nf_pageViewController;

@end
