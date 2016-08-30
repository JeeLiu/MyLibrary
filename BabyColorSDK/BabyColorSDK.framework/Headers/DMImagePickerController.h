//
//  DMImagePickerController.h
//  duimian
//
//  Created by guojiubo on 15/11/30.
//  Copyright © 2015年 yy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DMImagePickerController : UIImagePickerController <UIImagePickerControllerDelegate,UINavigationControllerDelegate>

@property (nonatomic, copy) void (^finishedBlock) (DMImagePickerController *imagePicker, NSDictionary *mediaInfo);
@property (nonatomic, copy) void (^cancelBlock) (DMImagePickerController *imagePicker);

@property (nonatomic, strong, readonly) UIImage *orignalImage;
@property (nonatomic, strong, readonly) UIImage *editedImage;

@property (nonatomic, strong, readonly) UIImage *fullResolutionImage;
@property (nonatomic, strong, readonly) UIImage *fullScreenImage;

@end
