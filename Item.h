//
//  Item.h
//  CoreDataObjc
//
//  Created by Zac on 12/02/2015.
//  Copyright (c) 2015 1st1k. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Item;

@interface Item : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSNumber * order;
@property (nonatomic, retain) Item *parent;
@property (nonatomic, retain) Item *children;

@end
