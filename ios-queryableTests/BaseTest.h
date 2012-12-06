//
//  BaseTest.h
//  ios-queryableTests
//
//  Created by Marty on 2012-11-07.
//  Copyright (c) 2012 Marty. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>
#import <CoreData/CoreData.h>
#import "NSManagedObjectContext+Queryable.h"
#import "Product.h"

@interface BaseTest : SenTestCase

-(NSManagedObjectContext*)getContext;

@property (strong) NSArray* testProductData;

@end
