/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockOverlayTransition : NSObject
{
    SBLockOverlayContext *_from;
    SBLockOverlayContext *_to;
    SBLockScreenViewController *_lockScreenVC;
}

- (id)_requestForContext:(id)arg1;
- (void)_hideLockContent;
- (void)performTransitionAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)initFromOverlay:(id)arg1 toOverlay:(id)arg2 inside:(id)arg3;

@end

