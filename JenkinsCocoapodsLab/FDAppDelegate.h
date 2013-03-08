//
//  FDAppDelegate.h
//  JenkinsCocoapodsLab
//
//  Created by Joel Söderström on 2013-03-08.
//  Copyright (c) 2013 Frost. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "JenkinsCocoapodsLabIncrementalStore.h"

@interface FDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;

@property (strong, nonatomic) UINavigationController *navigationController;

@end
