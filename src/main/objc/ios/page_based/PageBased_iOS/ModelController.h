//
//  ModelController.h
//  PageBased_iOS
//
//  Created by Presley Cannady on 1/11/15.
//  Copyright (c)  2015 Universal Secure Registry. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController * ) viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard * ) storyboard;
- (NSUInteger) indexOfViewController:(DataViewController * )viewController;

@end

