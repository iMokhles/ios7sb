/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBAlert.h"

#import "SBUIPasscodeLockViewDelegate.h"

@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate>
{
    BOOL _attemptingUnlock;
}

- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (void)deactivate;
- (BOOL)hasTranslucentBackground;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;

@end

