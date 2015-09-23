//
//  PAPSettingsButtonItem.m
//  Project Way
//
//  Created by Bryan Marks on 9/20/15.
//  Copyright (c) 2015 Project Way. All rights reserved.
//


#import "PAPSettingsButtonItem.h"

@implementation PAPSettingsButtonItem

#pragma mark - Initialization

- (id)initWithTarget:(id)target action:(SEL)action {
    UIButton *settingsButton = [UIButton buttonWithType:UIButtonTypeCustom];

    self = [super initWithCustomView:settingsButton];
    if (self) {
//        [settingsButton setBackgroundImage:[UIImage imageNamed:@"ButtonSettings.png"] forState:UIControlStateNormal];
        [settingsButton addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
        [settingsButton setFrame:CGRectMake(0.0f, 0.0f, 35.0f, 32.0f)];
        [settingsButton setImage:[UIImage imageNamed:@"ButtonImageSettings.png"] forState:UIControlStateNormal];
        [settingsButton setImage:[UIImage imageNamed:@"ButtonImageSettingsSelected.png"] forState:UIControlStateHighlighted];
    }
    
    return self;
}
@end
