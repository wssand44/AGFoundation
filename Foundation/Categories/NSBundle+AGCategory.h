//
//  NSBundle+AGCategory.h
//  AGFoundation
//
//  Created by Andrew Garn on 08/06/2012.
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

#import <Foundation/Foundation.h>

/** A collection of category extensions for `NSBundle` */
@interface NSBundle (AGCategory)

/**-------------------------------------------------------------------------------------
 @name Getting Bundle Information
 ---------------------------------------------------------------------------------------
*/ 

/**
 Returns the value associated with the CFBundleName key in the receiver's information property list.
 @return The value associated with CFBundleName key in the receiver's property list (Info.plist).
*/
+ (NSString *)bundleName_AG;

/**
 Returns the value associated with the CFBundleDisplayName key in the receiver's information property list.
 @return The value associated with CFBundleDisplayName key in the receiver's property list (Info.plist).
*/
+ (NSString *)bundleDisplayName_AG;

/**
 Returns the value associated with the CFBundleVersion key in the receiver's information property list.
 @return The value associated with CFBundleVersion key in the receiver's property list (Info.plist).
 */
+ (NSString *)bundleVersion_AG;

/**
 Returns the value associated with the CFBundleShortVersionString key in the receiver's information property list.
 @return The value associated with CFBundleShortVersionString key in the receiver's property list (Info.plist).
 */
+ (NSString *)bundleShortVersionString_AG;

@end