//
//  LGUIAdd.m
//  CustomXibDemo
//
//  Created by SSQJ on 2019/4/12.
//  Copyright © 2019 ssqj. All rights reserved.
//

#import "LGUIAdd.h"

@implementation LGUIAdd


+ (UIView *)initViewWithFrame:(CGRect)frame andWithBackgroundColor:(UIColor *)backgroundColor {
    
    UIView *view = [[UIView alloc]init];
    view.frame = frame;
    view.backgroundColor = backgroundColor;
    return view;
    
}

+ (UIImageView *)initImageViewWithFrame:(CGRect)frame andWithImage:(UIImage *)image {
    
    UIImageView *imageView = [[UIImageView alloc]init];
    imageView.frame = frame;
    imageView.image = image;
    return imageView;
}


+ (UILabel *)initLabelWithFrame:(CGRect)frame andWithFont:(UIFont *)font andWithTextColor:(UIColor *)textColor andWithTextAlignment:(NSTextAlignment)textAlignment {
    
    UILabel *label = [[UILabel alloc]init];
    label.frame = frame;
    label.font = font;
    label.textColor = textColor;
    label.textAlignment = textAlignment;
    
    return label;
}

+ (UIButton *)initButtonWithFrame:(CGRect)frame andWithTitleFont:(UIFont *)font andWithTextColor:(UIColor *)textColor andWithTextAlignment:(UIControlContentHorizontalAlignment)textAlignment {
    
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.frame = frame;
    button.titleLabel.font = font;
    [button setTitleColor:textColor forState:UIControlStateNormal];
    button.contentHorizontalAlignment = textAlignment;
    return button;
    
}

@end
