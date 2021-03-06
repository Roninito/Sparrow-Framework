//
//  DemoAppDelegate.h
//  Demo
//
//  Created by Daniel Sperl on 25.07.09.
//  Copyright Incognitek 2009. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Sparrow.h"

@interface DemoAppDelegate : NSObject <UIApplicationDelegate> 
{
    UIWindow *window;
    SPView *sparrowView;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet SPView *sparrowView;

@end

