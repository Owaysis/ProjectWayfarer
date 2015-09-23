//
//  PAPSettingsActionSheetDelegate.h
//  Project Way
//
//  Created by Bryan Marks on 9/20/15.
//  Copyright (c) 2015 Project Way. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface PAPSettingsActionSheetDelegate : NSObject <UIActionSheetDelegate>

// Navigation controller of calling view controller
@property (nonatomic, strong) UINavigationController *navController;

- (id)initWithNavigationController:(UINavigationController *)navigationController;

@end
