//
//  MasterViewController.h
//  MasterDetail_iOS
//
//  Created by Presley Cannady on 1/11/15.
//  Copyright (c)  2015 Universal Secure Registry. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic)  DetailViewController * detailViewController;


@end

