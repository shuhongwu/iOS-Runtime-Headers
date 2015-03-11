/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString, _UIViewControllerTransitionContext;

@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {
    NSMutableArray *__alongsideAnimationViews;
    NSMutableArray *__alongsideAnimations;
    NSMutableArray *__alongsideCompletions;
    NSMutableArray *__interactiveChangeHandlers;
    _UIViewControllerTransitionContext *__mainContext;
}

@property(setter=_setAlongsideAnimationViews:,retain) NSMutableArray * _alongsideAnimationViews;
@property(setter=_setAlongsideAnimations:,retain) NSMutableArray * _alongsideAnimations;
@property(setter=_setAlongsideCompletions:,retain) NSMutableArray * _alongsideCompletions;
@property(setter=_setInteractiveChangeHandlers:,retain) NSMutableArray * _interactiveChangeHandlers;
@property(setter=_setMainContext:) _UIViewControllerTransitionContext * _mainContext;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)_alongsideAnimationViews;
- (id)_alongsideAnimations:(bool)arg1;
- (id)_alongsideAnimations;
- (id)_alongsideCompletions:(bool)arg1;
- (id)_alongsideCompletions;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id)arg2;
- (id)_interactiveChangeHandlers:(bool)arg1;
- (id)_interactiveChangeHandlers;
- (id)_mainContext;
- (void)_setAlongsideAnimationViews:(id)arg1;
- (void)_setAlongsideAnimations:(id)arg1;
- (void)_setAlongsideCompletions:(id)arg1;
- (void)_setInteractiveChangeHandlers:(id)arg1;
- (void)_setMainContext:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (bool)animateAlongsideTransition:(id)arg1 completion:(id)arg2;
- (bool)animateAlongsideTransitionInView:(id)arg1 animation:(id)arg2 completion:(id)arg3;
- (long long)completionCurve;
- (double)completionVelocity;
- (id)containerView;
- (void)dealloc;
- (void)handlerToInvokeOnInteractivityChanges:(id)arg1;
- (id)initWithMainContext:(id)arg1;
- (bool)initiallyInteractive;
- (bool)isAnimated;
- (bool)isCancelled;
- (bool)isCompleting;
- (bool)isInteractive;
- (bool)isRotating;
- (void)notifyWhenInteractionEndsUsingBlock:(id)arg1;
- (double)percentComplete;
- (long long)presentationStyle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (double)transitionDuration;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end