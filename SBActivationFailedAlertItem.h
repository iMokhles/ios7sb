/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBAlertItem.h"

#import "UIAlertViewDelegate.h"

@interface SBActivationFailedAlertItem : SBAlertItem <UIAlertViewDelegate>
{
    BOOL _showRetryButton;
    BOOL _showSupportNumber;
}

- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)performUnlockAction;
- (id)initWithFailureCount:(int)arg1;

@end

