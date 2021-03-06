/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, SBFolderController, SBIconAnimationSettings, UIView, UIWindow;

@interface SBIconAnimator : NSObject
{
    float _fraction;
    BOOL _startedAnimation;
    BOOL _startAnimationAfterRotationEnds;
    BOOL _windowIsRotating;
    UIWindow *_animationWindow;
    NSMutableArray *_pendedAnimationContexts;
    NSString *_instanceIdentifier;
    BOOL _invalidated;
    id <SBIconAnimatorDelegate> _delegate;
    SBIconAnimationSettings *_settings;
    SBFolderController *_folderController;
}

@property(readonly, nonatomic) UIView *animationWindow; // @synthesize animationWindow=_animationWindow;
@property(readonly, nonatomic) SBFolderController *folderController; // @synthesize folderController=_folderController;
@property(nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) SBIconAnimationSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) id <SBIconAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_windowFinishedRotating;
- (void)_invalidateCompletions;
- (id)_centralAnimationFactory;
- (void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned int)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(float)arg1;
- (void)_prepareAnimation;
- (BOOL)_isDelayedForRotation;
- (void)_animateToFractionFromContext:(id)arg1;
- (void)_animateToFractionFromPendingContexts;
- (void)cleanup;
- (void)animateToFraction:(float)arg1 afterDelay:(double)arg2 withCompletion:(id)arg3;
- (void)setFraction:(float)arg1;
- (void)prepare;
- (id)centralAnimationFactory;
@property(readonly, nonatomic) UIView *referenceView;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1;

@end

