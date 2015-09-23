// UIImage+AlphaAdditions.h
//  Project Way
//
//  Created by Bryan Marks on 9/20/15.
//  Copyright (c) 2015 Project Way. All rights reserved.
//

// Helper methods for adding an alpha layer to an image

// http://vocaro.com/trevor/blog/2009/10/12/resize-a-uiimage-the-right-way/

@interface UIImage (Alpha)
- (BOOL)hasAlpha;
- (UIImage *)imageWithAlpha;
- (UIImage *)transparentBorderImage:(NSUInteger)borderSize;
@end