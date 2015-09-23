//
//  PAPImageView.m
//  Project Way
//
//  Created by Bryan Marks on 9/20/15.
//  Copyright (c) 2015 Project Way. All rights reserved.
//


#import "PAPImageView.h"

@interface PAPImageView ()

@property (nonatomic, strong) PFFile *currentFile;
@property (nonatomic, strong) NSString *url;

@end

@implementation PAPImageView

@synthesize currentFile,url;
@synthesize placeholderImage;

#pragma mark - PAPImageView

- (void) setFile:(PFFile *)file {
    
    NSString *requestURL = file.url; // Save copy of url locally (will not change in block)
    [self setUrl:file.url]; // Save copy of url on the instance
    
    [file getDataInBackgroundWithBlock:^(NSData *data, NSError *error) {
        if (!error) {
            UIImage *image = [UIImage imageWithData:data];
            if ([requestURL isEqualToString:self.url]) {
                [self setImage:image];
                [self setNeedsDisplay];
            }
        } else {
            NSLog(@"Error on fetching file");
        }
    }]; 
}

@end
