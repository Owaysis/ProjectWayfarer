//
//  PAPWelcomeViewController.h
//  Project Way
//
//  Created by Bryan Marks on 9/20/15.
//  Copyright (c) 2015 Project Way. All rights reserved.
//


#include "PAPLogInViewController.h"

@interface PAPWelcomeViewController : UIViewController <PAPLogInViewControllerDelegate>

- (void)presentLoginViewController:(BOOL)animated;

@end
