//
//  RootViewController.m
//  CustomXibDemo
//
//  Created by SSQJ on 2019/4/12.
//  Copyright © 2019 ssqj. All rights reserved.
//

#import "RootViewController.h"

@interface RootViewController ()

@end

@implementation RootViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor whiteColor];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

#pragma mark - 常用方法汇总

- (BOOL)isBlankString:(NSString *)string {
    if (string == nil || string == NULL) { return YES; } if ([string isKindOfClass:[NSNull class]]) { return YES; } if ([[string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length]==0) { return YES; } if([string isEqualToString:@"null"])return YES; return NO;
}

- (BOOL)isBlankArray:(NSArray *)array {
    if (array == nil || array == NULL) {
        return YES;
    }
    if ([array isKindOfClass:[NSNull class]]) { return YES; }
    if([array count]==0)
        return YES;
    return NO;
}

- (BOOL) isBlankDictionary:(NSDictionary *)dictionary {
    if (dictionary == nil || dictionary == NULL) { return YES; }
    if ([dictionary isKindOfClass:[NSNull class]]) { return YES; }
    if ([dictionary allKeys].count == 0)  {
        return YES;
    }  return NO;
}

- (id)jsonTestFileName:(NSString *)fileName {
    NSString *jsonPath = [[NSBundle mainBundle] pathForResource:fileName ofType:@"json"];
    NSData *data=[NSData dataWithContentsOfFile:jsonPath];
    NSError *error;
    id jsonObject=[NSJSONSerialization JSONObjectWithData:data
                                                  options:NSJSONReadingAllowFragments
                                                    error:&error];
    return jsonObject;
}

@end
