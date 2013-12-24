/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager, UIView;

@interface SBUIAnimationFadePluginAlertToHome : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBAlert *_alert;
    UIView *_viewToAnimate;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDelay;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithDeactivatingAlert:(id)arg1 alertManager:(id)arg2;

@end

