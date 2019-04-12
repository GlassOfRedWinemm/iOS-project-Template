//
//  RootViewController.h
//  CustomXibDemo
//
//  Created by SSQJ on 2019/4/12.
//  Copyright © 2019 ssqj. All rights reserved.
//

#import <UIKit/UIKit.h>
// vc总基类

NS_ASSUME_NONNULL_BEGIN

@interface RootViewController : UIViewController


// 空字符串判断
- (BOOL) isBlankString:(NSString *)string;
// 空数组判断
- (BOOL) isBlankArray:(NSArray *)array;
// 空字典判断
- (BOOL) isBlankDictionary:(NSDictionary *)dictionary;



/**
 加载Json文件

 @param fileName Json文件名 如test.json 直接传入test即可
 @return Data
 */
- (id)jsonTestFileName:(NSString *)fileName;

@end

NS_ASSUME_NONNULL_END
