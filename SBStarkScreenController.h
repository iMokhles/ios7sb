/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBAlertManagerDelegate.h"
#import "SBAlertManagerObserver.h"
#import "UIStatusBarStyleDelegate.h"
#import "_UISettingsKeyObserver.h"

@class AVExternalDevice, NSTimer, SBAlertManager, SBCarDisplaySettings, SBStarkDefaultHostingWindow, SBStarkFakeIconOperationController, SBStarkHomeController, SBStarkLockOutViewController, SBStarkLockOutWindow, SBStarkNotificationWindow, SBStarkScreenFocusController, SBStarkSiriWindow, UIScreen, UIWindow, _UIBackdropView;

@interface SBStarkScreenController : NSObject <SBAlertManagerDelegate, SBAlertManagerObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver>
{
    UIScreen *_screen;
    SBCarDisplaySettings *_settings;
    id <SBStarkScreenControllerDelegate> _delegate;
    id <SBDisplayProtocol> _topDisplay;
    int _lockOutMode;
    NSTimer *_lockOutModeUpdateTimer;
    SBStarkLockOutViewController *_lockOutViewController;
    SBStarkLockOutWindow *_lockOutWindow;
    SBStarkDefaultHostingWindow *_defaultHostingWindow;
    SBStarkHomeController *_homeController;
    SBStarkNotificationWindow *_notificationWindow;
    SBStarkSiriWindow *_siriWindow;
    _UIBackdropView *_siriBackdropView;
    BOOL _showingSiri;
    SBAlertManager *_alertManager;
    id _starkScreenBorrowingToken;
    SBStarkScreenFocusController *_focusController;
    SBStarkFakeIconOperationController *_fakeIconOperationController;
    AVExternalDevice *_externalDevice;
}

@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic) id <SBStarkScreenControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)statusBar:(id)arg1 didTriggerButtonType:(int)arg2 withAction:(int)arg3;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(int)arg5;
- (int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
- (BOOL)allowNavigationOverrideStyle;
- (BOOL)allowInCallOverrideStyle;
- (void)alertManagerDidChangeTopAlert:(id)arg1;
- (void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (BOOL)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2;
- (id)alertManager:(id)arg1 newAlertWindowForLockAlerts:(BOOL)arg2;
- (void)_showNowPlaying;
- (void)_createFakeIconOperationController;
- (void)_updateLockOutModeAfterDelay;
- (void)_updateLockOutMode;
- (void)_startInitialAppLaunchTimer;
- (void)_cancelInitialAppLaunchTimer;
- (void)_launchInitialAppIfNecessary;
- (BOOL)_shouldLaunchMapsAtConnect;
- (void)_takeScreenRequested:(id)arg1;
- (void)_setShowingSiri:(BOOL)arg1;
- (void)_dismissSiriWithDuration:(double)arg1 animations:(id)arg2 completion:(void)arg3;
- (void)dismissSiriWithFade:(double)arg1 completion:(id)arg2;
- (void)dismissSiri:(BOOL)arg1 completion:(id)arg2;
- (void)presentSiri:(BOOL)arg1 viewController:(id)arg2;
- (id)focusWindow;
@property(readonly, nonatomic) UIWindow *animationWindow;
@property(readonly, nonatomic) UIWindow *mainWindow;
- (void)updateStatusBarStateForDisplay:(id)arg1 withAnimationFactory:(id)arg2;
- (void)handleLongBackPress;
- (void)handleUnhandledBack;
- (void)handleUncompletedAppLaunch;
- (void)setTopDisplay:(id)arg1 withAnimationFactory:(id)arg2;
@property(retain, nonatomic) id <SBDisplayProtocol> topDisplay;
@property(readonly, nonatomic) int state;
- (void)invalidate;
- (void)_tearDownAndInvalidate:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithScreen:(id)arg1;

@end

