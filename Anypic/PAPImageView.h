//
//  PAPImageView.h
//  Project Way
//
//  Created by Bryan Marks on 9/20/15.
//  Copyright (c) 2015 Project Way. All rights reserved.
//


@interface PAPImageView : UIImageView

@property (nonatomic, strong) UIImage *placeholderImage;

- (void) setFile:(PFFile *)file;

@end
