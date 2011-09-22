//
//  OpenWatchAppDelegate.h
//  OpenWatch
//
//  Created by micah on 9/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OpenWatchViewController;

@interface OpenWatchAppDelegate : NSObject <UIApplicationDelegate> {
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet OpenWatchViewController *viewController;

- (void) recordVideo;

@end
