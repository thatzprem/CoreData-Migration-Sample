//
//  MasterViewController.h
//  PassingThoughts
//
//  Created by Prem kumar on 16/04/14.
//  Copyright (c) 2014 Happiest Minds. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
