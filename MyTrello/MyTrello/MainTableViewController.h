//
//  MainTableViewController.h
//  MyTrello
//
//  Created by Thomas Nakache on 12/07/2016.
//  Copyright © 2016 Thomas Nakache. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewController.h"

@interface MainTableViewController : UITableViewController
@property (nonatomic) NSString *token;
@property(nonatomic) BOOL *isSomethingEnabled;
@property (nonatomic) NSMutableArray *array;

@end
