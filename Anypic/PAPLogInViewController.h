//
//  PAPLogInViewController.h
//  Project Way
//
//  Created by Bryan Marks on 9/20/15.
//  Copyright (c) 2015 Project Way. All rights reserved.
//


@protocol PAPLogInViewControllerDelegate;

@interface PAPLogInViewController : UIViewController <FBLoginViewDelegate>

@property (nonatomic, assign) id<PAPLogInViewControllerDelegate> delegate;

@end

@protocol PAPLogInViewControllerDelegate <NSObject>

- (void)logInViewControllerDidLogUserIn:(PAPLogInViewController *)logInViewController;

@end