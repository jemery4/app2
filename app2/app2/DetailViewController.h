//
//  DetailViewController.h
//  app2
//
//  Created by Jase Emery on 2/2/13.
//  Copyright (c) 2013 Jase Emery. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
