//
//  ListsViewController.h
//  ListIt!
//
//  Created by Ryan on 7/19/16.
//  Copyright © 2016 Ryan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ListsViewController : UIViewController
@property (nonatomic, strong) NSMutableArray *Lists;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end