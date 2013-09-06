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

- (void)setRootViewController:(UIViewController *)rootViewController;

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated withGestures:(BOOL)gestures;
- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (UIViewController *)popViewController;
- (void)popViewController:(UIViewController *)viewController completion:(void(^)(BOOL finished))completionBlock;
- (void)popViewController:(UIViewController *)viewController;

- (void)reveal:(UIViewController *)viewController;
- (void)reveal:(UIViewController *)viewController withGutter:(CGFloat)gutter;
- (void)unReveal:(UIViewController *)viewController completion:(void(^)(BOOL finished))completionBlock;
- (void)unReveal:(UIViewController *)viewController;

@end


#pragma mark - Segues

@interface RBStacksSegue : UIStoryboardSegue

@end

@interface RBStacksPushSegue : RBStacksSegue

@end

@interface RBStacksPushWithoutGesturesSegue : RBStacksSegue

@end

@interface RBStacksReplaceLastSegue : RBStacksSegue

@end

@interface RBStacksPopSegue : RBStacksSegue

@end

@interface RBStacksRevealSegue : RBStacksSegue

@end

@interface RBStacksRevealGutterSegue : RBStacksSegue

@end

@interface RBStacksUnRevealSegue : RBStacksSegue

@end

@interface RBStacksRemoveSegue : RBStacksSegue

@end