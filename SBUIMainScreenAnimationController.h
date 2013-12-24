/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBUIAnimationController.h"

@interface SBUIMainScreenAnimationController : SBUIAnimationController
{
    BOOL _needsToClearBulletinWindowOrientation;
}

- (void)_noteAnimationDidCommit:(BOOL)arg1 withDuration:(double)arg2 afterDelay:(double)arg3;
- (void)_cleanupAnimation;
- (void)_removeWallpaperAnimationPriorityWithFactory:(id)arg1;
- (void)beginAnimation;
- (void)_dismissBannerAnimated:(BOOL)arg1;
- (BOOL)_shouldDismissBanner;
- (void)__startAnimation;
- (void)_clearBulletinWindowOverrideOrientationIfNecessary;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2;
- (id)_getTransitionWindow;

@end

