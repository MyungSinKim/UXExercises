//
//  DetailViewController.h
//  MasterDetail_iOS
//
//  Created by Presley Cannady on 1/11/15.
//  Copyright (c)  2015 Universal Secure Registry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic)  id detailItem;
@property (weak, nonatomic)  IBOutlet UILabel * detailDescriptionLabel;

@end

