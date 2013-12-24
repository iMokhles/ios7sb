/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBStarkAlertToAppWorkspaceTransaction.h"

@class SBAlert, SBApplication, SBUIAnimationController;

@interface SBStarkAlertToImpersonatedAppWorkspaceTransaction : SBStarkAlertToAppWorkspaceTransaction
{
    SBAlert *_fromAlert;
    SBAlert *_toAlert;
    SBApplication *_toApplication;
    SBUIAnimationController *_animation;
}

- (void)_activateAlert;
- (BOOL)selfStarkAlertDidActivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfStarkAlertWillActivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfStarkAlertDidDeactivate:(id)arg1;
- (int)_setupMilestonesFrom:(id)arg1 to:(id)arg2;
- (id)_newAnimationControllerFrom:(id)arg1 to:(id)arg2;
- (void)_beginAnimation;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 alert:(id)arg4 toApplication:(id)arg5;

@end

