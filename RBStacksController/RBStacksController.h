//
//  RBStacksController.h
//  RBStacksViewDemo
//
//  Created by Rob Booth on 8/23/13.
//  Copyright (c) 2013 Rob Booth. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RBStacksController : UIViewController

- (id)initWithRootViewController:(UIViewController *)rootViewController;

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated withGestures:(BOOL)gestures;
- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (UIViewController *)popViewController;
- (void)popViewController:(UIViewController *)viewController completion:(void(^)(BOOL finished))completionBlock;
- (void)popViewController:(UIViewController *)viewController;

- (void)reveal:(UIViewController *)viewController;
- (void)unReveal:(UIViewController *)viewController completion:(void(^)(BOOL finished))completionBlock;
- (void)unReveal:(UIViewController *)viewController;

@end


#pragma mark - Segues

@interface RBStacksPushSegue : UIStoryboardSegue

@end

@interface RBStacksPopSegue : UIStoryboardSegue

@end

@interface RBStacksRevealSegue : UIStoryboardSegue

@end

@interface RBStacksUnRevealSegue : UIStoryboardSegue

@end

@interface RBStacksRemoveSegue : UIStoryboardSegue

@end