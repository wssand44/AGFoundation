//
//  UIApplication+AGCategory.h
//  AGFoundation
//
//  Created by Andrew Garn on 03/05/2012.
//  Copyright (c) 2012 Andrew Garn. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice, this
//  list of conditions and the following disclaimer.
//  2. Redistributions in binary form must reproduce the above copyright notice,
//  this list of conditions and the following disclaimer in the documentation
//  and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
//  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
//  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#import <UIKit/UIKit.h>

/** A collection of category extensions for `UIApplication` */
@interface UIApplication (AGCategory)

/**-------------------------------------------------------------------------------------
 @name Debugging
 ---------------------------------------------------------------------------------------
*/ 

/** Indicates whether the application is currently being run under the debugger
 @return `YES` if the application is being run under the debugger, otherwise `NO`.
*/ 
+ (BOOL)isBeingDebugged;

/** Indicates whether the application is currently not being run under the debugger
 @return `YES` if the application is not being run under the debugger, otherwise `NO`.
 */  
+ (BOOL)isNotBeingDebugged;

/**-------------------------------------------------------------------------------------
 @name Detecting Piracy
 ---------------------------------------------------------------------------------------
*/ 

/** Indicates whether the application has been pirated.
 @return `YES` if the application has been pirated, otherwise `NO`.
*/ 
+ (BOOL)isPirated;

/** Indicates whether the application has not been pirated.
 @return `YES` if the application has not been pirated, otherwise `NO`.
*/ 
+ (BOOL)isNotPirated;

/**-------------------------------------------------------------------------------------
 @name Console Logging
 ---------------------------------------------------------------------------------------
*/

/** Returns the application's memory usage.
 @return The application's memory usage in megabytes.
*/
+ (NSNumber *)usedMemory;

/** Logs the application's memory usage to the console. */
+ (void)logMemoryUsage;

/** Logs the application launch to the console along with basic device information.
 @param launchOptions A dictionary indicating the reason the application was launched (if any). The contents of this dictionary may be empty in situations where the user launched the application directly.
*/ 
+ (void)logApplicationDidFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

+ (void)logApplicationDidEnterBackground;
+ (void)logApplicationWillEnterForeground;
+ (void)logApplicationWillResignActive;
+ (void)logApplicationDidBecomeActive;

/** Adds an observer to `NSNotificationCenter` to log to the console when the navigation controllers stack changes. */ 
+ (void)observeNavigationControllerStack;

/**-------------------------------------------------------------------------------------
 @name Interface Orientation
 ---------------------------------------------------------------------------------------
*/ 

/** Returns a string representation of a given interface orientation. 
 @param interfaceOrientation An orientation of the application's user interface.
 @return A string representation of interfaceOrientation.
*/
+ (NSString *)stringFromInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;

/** Returns a boolean to indicate whether a device orientation is supported in the application's information property list.
 @param interfaceOrientation An orientation of the application's user interface.
 @return YES if the application's information property list allows the interfaceOrientation, otherwise NO.
*/ 
+ (BOOL)interfaceOrientationIsSupported:(UIInterfaceOrientation)interfaceOrientation;

/**-------------------------------------------------------------------------------------
 @name Local Notifications
 ---------------------------------------------------------------------------------------
*/ 

/** Returns an array of scheduled local notifications.
 @return An array of scheduled local notifications.
*/ 
+ (NSArray *)scheduledLocalNotifications;

/** Returns an array of scheduled local notifications with the specified ordering.
 @param ascending A boolean to indicate whether the array should be sorted in ascending or not.
 @return An array of scheduled local notifications with the specified ordering.
*/ 
+ (NSArray *)scheduledLocalNotificationsSortedAscending:(BOOL)ascending;

/**-------------------------------------------------------------------------------------
 @name Network Activity Indication
 ---------------------------------------------------------------------------------------
*/ 

/** Increments the number of network activity requests. If this number was zero before incrementing, this will start animating the network activity indicator. */
+ (void)showNetworkActivityIndicator;

/** Decrements the number of network activity requests. If this number becomes zero after incrementing, this will stop animating the network activity indicator. */
+ (void)hideNetworkActivityIndicator;

/** Stops the network activity indicator from animating and sets the number of network activity requests to zero. */ 
+ (void)hideNetworkActivityIndicatorNow;

@end