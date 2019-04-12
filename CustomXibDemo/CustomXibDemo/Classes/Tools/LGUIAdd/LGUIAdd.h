//
//  LGUIAdd.h
//  CustomXibDemo
//
//  Created by SSQJ on 2019/4/12.
//  Copyright © 2019 ssqj. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LGUIAdd : NSObject

+ (UIView *)initViewWithFrame:(CGRect)frame andWithBackgroundColor:(UIColor *)backgroundColor;

+ (UIImageView *)initImageViewWithFrame:(CGRect)frame andWithImage:(UIImage *)image;

+ (UILabel *)initLabelWithFrame:(CGRect)frame andWithFont:(UIFont *)font andWithTextColor:(UIColor *)textColor andWithTextAlignment:(NSTextAlignment)textAlignment;

+ (UIButton *)initButtonWithFrame:(CGRect)frame andWithTitleFont:(UIFont *)font andWithTextColor:(UIColor *)textColor andWithTextAlignment:(UIControlContentHorizontalAlignment)textAlignment;

@end
