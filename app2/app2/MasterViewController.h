//
//  MasterViewController.h
//  app2
//
//  Created by Jase Emery on 2/2/13.
//  Copyright (c) 2013 Jase Emery. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
