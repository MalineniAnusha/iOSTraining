//
//  ViewController.h
//  Notifications
//
//  Created by mac mini on 10/31/14.
//  Copyright (c) 2014 ParadigmCreatives. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
- (IBAction)buttonClicked:(id)sender;
-(void)postNotification:(NSString *)orientation;
-(void)useNotification:(NSNotification *)notification;

@end

