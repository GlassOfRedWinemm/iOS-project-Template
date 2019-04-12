//
//  UIScrollView+UITouch.h
//  CustomXibDemo
//
//  Created by SSQJ on 2019/4/12.
//  Copyright © 2019 ssqj. All rights reserved.
//

#import <UIKit/UIKit.h>
// 点击ScrollView收起键盘

@interface UIScrollView (UITouch)

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event;

@end
