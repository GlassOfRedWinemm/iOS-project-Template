//
//  Define.h
//  CustomXibDemo
//
//  Created by SSQJ on 2019/4/12.
//  Copyright © 2019 ssqj. All rights reserved.
//

#ifndef Define_h
#define Define_h
// 自定义宏

// Frame
#define SCREEN_FRAME    ([UIScreen mainScreen].applicationFrame)
// 宽度
#define SCREEN_WIDTH    ([UIScreen mainScreen].bounds.size.width)
// 高度
#define SCREEN_HEIGHT   ([UIScreen mainScreen].bounds.size.height)
// iPhone6宽比
#define KBaseW          [UIScreen mainScreen].bounds.size.width / 375
// iPhone6高比
#define KBaseH          [UIScreen mainScreen].bounds.size.height / 667
// RGBA
#define RGBA(R /*红*/, G /*绿*/, B /*蓝*/, A /*透明*/)   [UIColor colorWithRed: (float)R / 255.f green: (float)G / 255.f blue: (float)B / 255.f alpha: A]
// RGB
#define RGB(r, g, b)        [UIColor colorWithRed: (r) / 255.0 green: (g) / 255.0 blue: (b) / 255.0 alpha: 1.0]

// 沙盒目录
#define kUserDefaults       [NSUserDefaults standardUserDefaults]

// 获取通知中心
#define kNotificationCenter [NSNotificationCenter defaultCenter]

// 设置随机颜色
#define kRandomColor        [UIColor colorWithRed:arc4random_uniform(256) / 255.0 green:arc4random_uniform(256) / 255.0 blue:arc4random_uniform(256) / 255.0 alpha:1.0]

// clear背景颜色
#define kClearColor         [UIColor clearColor]

// 自定义高效率的 NSLog
#ifdef DEBUG
#define kLog(...) NSLog(@"%s 第%d行 \n %@\n\n", __func__, __LINE__, [NSString stringWithFormat:__VA_ARGS__])
#else
#define kLog(...)

#endif

// 弱引用/强引用
#define kWeakSelf(type)     __weak typeof(type) weak##type = type;
#define kStrongSelf(type)   __strong typeof(type) type = weak##type;

// 设置 view 圆角和边框
#define kViewBorderRadius(View, Radius, Width, Color) \
\
[View.layer setCornerRadius: (Radius)];           \
[View.layer setMasksToBounds:YES];                \
[View.layer setBorderWidth:(Width)];              \
[View.layer setBorderColor:[Color CGColor]]

// 由角度转换弧度 由弧度转换角度
#define kDegreesToRadian(x)         (M_PI * (x) / 180.0)
#define kRadianToDegrees(radian)    (radian * 180.0) / (M_PI)

// 获取keyWindow
#define kWindow [UIApplication sharedApplication].keyWindow

// 设置状态条加载
#define kShowNetworkActivityIndicator() [UIApplication sharedApplication].networkActivityIndicatorVisible = YES
// 收起状态条加载
#define kHideNetworkActivityIndicator() [UIApplication sharedApplication].networkActivityIndicatorVisible = NO

// MBProgressHUD加载
#define kShowHUDAndActivity kBackView; [MBProgressHUD showHUDAddedTo:kWindow animated:YES]; kShowNetworkActivityIndicator()

// MBProgressHUD隐藏
#define kHiddenHUD          [MBProgressHUD hideAllHUDsForView:kWindow animated:YES]; kHideNetworkActivityIndicator()

// 获取图片资源
#define kGetImage(imageName) [UIImage imageNamed:[NSString stringWithFormat:@"%@", imageName]]

// 获取当前语言
#define kCurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])

// 使用 ARC 和 MRC
#if __has_feature(objc_arc)
// ARC
#else
// MRC
#endif

// 判断是否为iPhone
#define IS_IPHONE               (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

// 判断是否为iPad
#define IS_IPAD                 (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

// 判断是否为ipod
#define IS_IPOD                 ([[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"])

// 判断是否为 iPhone 5/5s/SE
#define iPhone5SE               [[UIScreen mainScreen] bounds].size.width == 320.0f && [[UIScreen mainScreen] bounds].size.height == 568.0f

// 判断是否为iPhone 6/6s
#define iPhone6_6s              [[UIScreen mainScreen] bounds].size.width == 375.0f && [[UIScreen mainScreen] bounds].size.height == 667.0f

// 判断是否为iPhone 6Plus/6sPlus
#define iPhone6Plus_6sPlus      [[UIScreen mainScreen] bounds].size.width == 414.0f && [[UIScreen mainScreen] bounds].size.height == 736.0f

// 获取系统版本
#define IOS_SYSTEM_VERSION      [[[UIDevice currentDevice] systemVersion] floatValue]

// 判断 iOS 8 或更高的系统版本
#define IOS_VERSION_8_OR_LATER  (([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0) ? (YES) : (NO))

// 判断是真机还是模拟器
#if TARGET_OS_IPHONE
// iPhone Device
#endif

#if TARGET_IPHONE_SIMULATOR
// iPhone Simulator
#endif

// 沙盒目录文件
// 获取temp
#define kPathTemp       NSTemporaryDirectory()

// 获取沙盒 Document
#define kPathDocument   [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]

// 获取沙盒 Cache
#define kPathCache      [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject]

// GCD 的宏定义
// GCD - 一次性执行
#define kDISPATCH_ONCE_BLOCK(onceBlock)                     static dispatch_once_t onceToken; dispatch_once(&onceToken, onceBlock);

// GCD - 在Main线程上运行
#define kDISPATCH_MAIN_THREAD(mainQueueBlock)               dispatch_async(dispatch_get_main_queue(), mainQueueBlock);

// GCD - 开启异步线程
#define kDISPATCH_GLOBAL_QUEUE_DEFAULT(globalQueueBlock)    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), globalQueueBlocl);

#endif /* Define_h */
