//
//  NFMenuItem.h
//  NFPageViewController
//
//  Created by guojiubo on 4/7/16.
//  Copyright © 2016 guojiubo. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NFMenuView;

@protocol NFMenuItem <NSObject>

@optional

@property (nonatomic, assign, getter=isSelected) BOOL selected;

@property (nonatomic, assign) CGFloat selectionRate;

@end


typedef __kindof UIControl<NFMenuItem> * KindofMenuItem;


@interface NFMenuItem : UIControl <NFMenuItem>

@property (nonatomic, assign) CGFloat selectionRate;

@property (nonatomic, copy) NSString *title;

// normal font size, defaults to system font of size 14
@property (nonatomic, strong) UIFont *font;

// normal text color, defaults to black
@property (nonatomic, strong) UIColor *normalColor;

// selected text color, defaults to red
@property (nonatomic, strong) UIColor *selectedColor;

@end


