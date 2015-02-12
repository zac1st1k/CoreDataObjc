//
//  PersistentStack.h
//  CoreDataObjc
//
//  Created by Zac on 12/02/2015.
//  Copyright (c) 2015 1st1k. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface PersistentStack : NSObject

- (id)initWithStoreURL:(NSURL*)storeURL modelURL:(NSURL*)modelURL;

@property (nonatomic,strong,readonly) NSManagedObjectContext* managedObjectContext;

@end
