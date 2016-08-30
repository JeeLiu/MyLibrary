// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#import <BabyColorSDK/BabyColorSDK.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC12BabyColorSDK10APIFetcher")
@interface APIFetcher : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class User;

SWIFT_CLASS("_TtC12BabyColorSDK7Account")
@interface Account : NSObject
+ (User * _Nullable)user;
+ (void)setUser:(User * _Nullable)newValue;
+ (NSString * _Nullable)token;
+ (void)logout;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSError;

SWIFT_CLASS("_TtC12BabyColorSDK10AccountAPI")
@interface AccountAPI : APIFetcher
- (void)logout:(NSDictionary<NSString *, id> * _Nullable)parameters completion:(void (^ _Nonnull)(APIFetcher * _Nonnull data, id _Nullable response, NSError * _Nullable error))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;
@class NSCoder;

SWIFT_CLASS("_TtC12BabyColorSDK11ColorButton")
@interface ColorButton : UIButton
@property (nonatomic, strong) UIColor * _Nullable normalColor;
@property (nonatomic, strong) UIColor * _Nullable highlightedColor;
@property (nonatomic, strong) UIColor * _Nullable selectedColor;
@property (nonatomic, strong) UIColor * _Nullable disabledColor;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic) CGFloat cornerRaiuds;
@property (nonatomic, strong) UIColor * _Nullable borderColor;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NFPageViewController;
@class UIView;
@class NSBundle;

SWIFT_CLASS("_TtC12BabyColorSDK21ExploreViewController")
@interface ExploreViewController : UIViewController <NFPageViewControllerDataSource>
- (void)viewDidLoad;
- (UIView * _Nullable)menuViewForPageViewController:(NFPageViewController * _Nonnull)pageViewController;
- (NSArray<KindofMenuItem> * _Nullable)menuItemsForPageViewController:(NFPageViewController * _Nonnull)pageViewController;
- (NSArray<UIViewController *> * _Nullable)viewControllersForPageViewController:(NFPageViewController * _Nonnull)pageViewController;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12BabyColorSDK25FairyDetailViewController")
@interface FairyDetailViewController : UIViewController
@property (nonatomic, strong) User * _Null_unspecified user;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIScrollView;

@interface FairyDetailViewController (SWIFT_EXTENSION(BabyColorSDK)) <UIScrollViewDelegate>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end

@class UITableView;
@class NSIndexPath;
@class UITableViewCell;

@interface FairyDetailViewController (SWIFT_EXTENSION(BabyColorSDK)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@interface FairyDetailViewController (SWIFT_EXTENSION(BabyColorSDK)) <NIMMediaManagerDelgate>
- (void)playAudio:(NSString * _Nonnull)filePath didBeganWithError:(NSError * _Nullable)error;
- (void)playAudio:(NSString * _Nonnull)filePath didCompletedWithError:(NSError * _Nullable)error;
- (void)playAudioInterruptionBegin;
- (void)playAudioInterruptionEnd;
@end

@class UICollectionView;
@class UICollectionViewCell;
@class UICollectionViewLayout;

@interface FairyDetailViewController (SWIFT_EXTENSION(BabyColorSDK)) <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


SWIFT_CLASS("_TtC12BabyColorSDK12GradientView")
@interface GradientView : UIView
+ (Class _Nonnull)layerClass;
+ (GradientView * _Null_unspecified)gradientView:(CGRect)frame;
+ (GradientView * _Null_unspecified)maskView:(CGRect)frame;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

enum IndicatorType : NSInteger;

SWIFT_CLASS_NAMED("IndicatorController")
@interface IndicatorController : NSObject
- (void)showIndicatorView:(enum IndicatorType)type rect:(CGRect)rect inView:(UIView * _Nonnull)inView showMssage:(NSString * _Nullable)showMssage;
- (void)hideIndicatorView;

/// 注意调用这个函数，在你设置的时间内不能调用show的方法，如果调用了，会先show，然后时间到了，就hide
///
/// \param afterTime <#afterTime description#>
- (void)hideIndicatorView:(double)afterTime;
- (void)messageAlertViewDidSelectedReloadButton:(UIButton * _Nonnull)button;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, IndicatorType, "IndicatorType") {
  IndicatorTypeIndicatorNoneType = 0,
  IndicatorTypeIndicatorLoopActivityType = 1,
  IndicatorTypeIndicatorNetWorkErrorType = 2,
  IndicatorTypeIndicatorShowMessageType = 3,
};


SWIFT_CLASS("_TtC12BabyColorSDK18MainViewController")
@interface MainViewController : UITabBarController <UITabBarControllerDelegate>
+ (UITabBarController * _Nullable)instanceController;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSError (SWIFT_EXTENSION(BabyColorSDK))
@end


SWIFT_CLASS("_TtC12BabyColorSDK14NetCallControl")
@interface NetCallControl : NSObject
+ (NetCallControl * _Nonnull)shared;
- (void)endCalling;
- (void)call:(User * _Nonnull)user viewController:(UIViewController * _Nonnull)viewController;
@end


@interface NetCallControl (SWIFT_EXTENSION(BabyColorSDK)) <NIMNetCallManagerDelegate>
- (void)onCall:(uint64_t)callID status:(NIMNetCallStatus)status;
- (void)onHangup:(uint64_t)callID by:(NSString * _Nonnull)user;
@end


SWIFT_CLASS("_TtC12BabyColorSDK8OrderAPI")
@interface OrderAPI : APIFetcher
- (void)startTalk:(NSDictionary<NSString *, id> * _Nonnull)parameters completion:(void (^ _Nonnull)(APIFetcher * _Nonnull data, id _Nullable response, NSError * _Nullable error))completion;
- (void)endTalk:(NSDictionary<NSString *, id> * _Nonnull)parameters completion:(void (^ _Nonnull)(APIFetcher * _Nonnull data, id _Nullable response, NSError * _Nullable error))completion;
- (void)fetchGiftInfo:(NSDictionary<NSString *, id> * _Nonnull)parameters completion:(void (^ _Nonnull)(APIFetcher * _Nonnull data, id _Nullable response, NSError * _Nullable error))completion;
- (void)sendFlower:(NSDictionary<NSString *, id> * _Nonnull)parameters completion:(void (^ _Nonnull)(APIFetcher * _Nonnull data, id _Nullable response, NSError * _Nullable error))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12BabyColorSDK10ProfileAPI")
@interface ProfileAPI : APIFetcher
- (void)fetchFairyProfle:(NSDictionary<NSString *, id> * _Nonnull)parameters completion:(void (^ _Nonnull)(APIFetcher * _Nonnull data, id _Nullable response, NSError * _Nullable error))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12BabyColorSDK24SendFlowerViewController")
@interface SendFlowerViewController : UIViewController
+ (SendFlowerViewController * _Nonnull)showFrom:(UIViewController * _Nonnull)viewController user:(User * _Nonnull)user;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIColor (SWIFT_EXTENSION(BabyColorSDK))
+ (UIColor * _Nonnull)cht_Color:(NSInteger)rgbValue;
+ (UIColor * _Nonnull)cht_color:(NSInteger)rgbValue alpha:(CGFloat)alpha;
@end


@interface UIControl (SWIFT_EXTENSION(BabyColorSDK))
@end


@interface UIImage (SWIFT_EXTENSION(BabyColorSDK))
+ (UIImage * _Nonnull)cht_imageWithColor:(UIColor * _Nonnull)color;
@end


@interface UILabel (SWIFT_EXTENSION(BabyColorSDK))
@end


@interface UITextField (SWIFT_EXTENSION(BabyColorSDK))
@end


@interface UIView (SWIFT_EXTENSION(BabyColorSDK))
@end


@interface UIViewController (SWIFT_EXTENSION(BabyColorSDK))
+ (nonnull instancetype)instantiateFromStoryboard:(NSString * _Nonnull)storyboardName isInitialViewController:(BOOL)isInitialViewController;
@end


@interface UIViewController (SWIFT_EXTENSION(BabyColorSDK))
@end


SWIFT_CLASS("_TtC12BabyColorSDK4User")
@interface User : NSObject
@property (nonatomic, copy) NSString * _Nullable avatar;
@property (nonatomic, copy) NSString * _Nullable nickname;
@property (nonatomic, copy) NSString * _Nullable imToken;
@property (nonatomic) NSInteger role;
@property (nonatomic, readonly, copy) NSString * _Nullable uidString;
@property (nonatomic, readonly) BOOL isBlacking;
- (void)setUid:(NSInteger)uid;
@end

#pragma clang diagnostic pop
