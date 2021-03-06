/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBRelaunchAppWorkspaceTransaction.h"

@class SSKeybagRequest;

@interface SBKeybagNonsenseWorkspaceTransaction : SBRelaunchAppWorkspaceTransaction
{
    SSKeybagRequest *_keybagRequest;
}

- (void)_handleAppRelaunch:(id)arg1;
- (void)_interruptWithReason:(int)arg1;
- (BOOL)_canBeInterrupted;
- (void)_completeKeybagRefetchForApp:(id)arg1 relaunch:(BOOL)arg2;
- (void)_transactionComplete;
- (void)_commit;
- (id)_setupAnimationForApp:(id)arg1;
- (BOOL)_shouldBeWatchdogged:(id *)arg1;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 application:(id)arg3;

@end

