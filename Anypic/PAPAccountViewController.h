//
//  PAPAccountViewController.h
//  Project Way
//
//  Created by Bryan Marks on 9/20/15.
//  Copyright (c) 2015 Project Way. All rights reserved.
//


#import "PAPPhotoTimelineViewController.h"

@interface PAPAccountViewController : PAPPhotoTimelineViewController

@property (nonatomic, strong) PFUser *user;

- (id)initWithUser:(PFUser *)aUser;

@end
