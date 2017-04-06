//
//  MGAlertView.h
//  MGAlertView
//
//  Created by MarvesG on 2017/3/31.
//  Copyright © 2017年 MarvesG. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, MGAlertViewAnimationType)
{
    MGAlertViewAnimationTypeFade = 0
};

typedef void(^MGAlertViewConfirmAction)(NSArray<NSString *> *result);
typedef void(^MGAlertViewClickAction)(NSArray<NSString *> *result);


@interface MGAlertView : UIView

@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, assign) MGAlertViewAnimationType *animationType;



- (void)show;
- (void)hide;


@end
