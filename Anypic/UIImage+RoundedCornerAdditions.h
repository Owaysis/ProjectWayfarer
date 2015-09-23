// UIImage+RoundedCornerAdditions.h
//  Project Way
//
//  Created by Bryan Marks on 9/20/15.
//  Copyright (c) 2015 Project Way. All rights reserved.
//


// Extends the UIImage class to support making rounded corners

// http://vocaro.com/trevor/blog/2009/10/12/resize-a-uiimage-the-right-way/

@interface UIImage (RoundedCorner)
- (UIImage *)roundedCornerImage:(NSInteger)cornerSize borderSize:(NSInteger)borderSize;
@end