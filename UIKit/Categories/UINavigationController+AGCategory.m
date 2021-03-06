//
//  UINavigationController+AGCategory.m
//  AGFoundation
//
//  Created by Andrew Garn on 12/11/2012.
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

#import "UINavigationController+AGCategory.h"

#ifdef AGFOUNDATION_FRAMEWORK
FIX_CATEGORY_BUG(UINavigationController_AGCategory);
#endif

@implementation UINavigationController (AGCategory)

#pragma mark -

- (void)pushViewController:(UIViewController *)viewController withTransition:(UIViewAnimationTransition)transition
{
    [self pushViewController:viewController withTransition:transition withDuration:0.5f];
}

- (void)pushViewController:(UIViewController *)viewController
            withTransition:(UIViewAnimationTransition)transition
              withDuration:(NSTimeInterval)duration
{
    [UIView beginAnimations:nil context:NULL];
    [self pushViewController:viewController animated:NO];
    [UIView setAnimationDuration:duration];
    [UIView setAnimationBeginsFromCurrentState:YES];
    [UIView setAnimationTransition:transition forView:self.view cache:YES];
    [UIView commitAnimations];
}

#pragma mark -

- (void)popViewControllerWithTransition:(UIViewAnimationTransition)transition
{
    UIViewController *viewController = [self topViewController];
    if (viewController != nil) {
        [self popViewController:viewController withTransition:transition];
    }
}

- (void)popViewController:(UIViewController *)viewController withTransition:(UIViewAnimationTransition)transition
{
    [self popViewController:viewController withTransition:transition withDuration:0.5f];
}

- (void)popViewController:(UIViewController *)viewController
           withTransition:(UIViewAnimationTransition)transition
             withDuration:(NSTimeInterval)duration
{
    [UIView beginAnimations:nil context:NULL];
    [self popToViewController:viewController animated:NO];
    [UIView setAnimationDuration:duration];
    [UIView setAnimationBeginsFromCurrentState:YES];
    [UIView setAnimationTransition:transition forView:self.view cache:YES];
    [UIView commitAnimations];
}

@end