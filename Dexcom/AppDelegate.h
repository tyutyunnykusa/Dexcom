//
//  AppDelegate.h
//  Dexcom
//
//  Created by Andrii Tiutiunnyk on 2/17/18.
//  Copyright © 2018 Andrii Tiutiunnyk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

