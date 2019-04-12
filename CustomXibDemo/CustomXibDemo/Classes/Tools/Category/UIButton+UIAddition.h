//
//  UIButton+UIAddition.h
//  CustomXibDemo
//
//  Created by SSQJ on 2019/4/12.
//  Copyright © 2019 ssqj. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (UIAddition)

/**
 *  图片文字上下排列居中对齐
 *
 *  @param spacing 上下间距
 */
- (void)middleAlignButtonWithSpacing:(CGFloat)spacing;

@end

NS_ASSUME_NONNULL_END
