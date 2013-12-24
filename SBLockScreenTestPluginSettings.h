/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_UISettings.h"

@interface SBLockScreenTestPluginSettings : _UISettings
{
    BOOL _enablePlugin;
    BOOL _enableLostModePlugin;
    BOOL _showDateView;
    BOOL _showDate;
    BOOL _disableOnUnlock;
    BOOL _showCamera;
    BOOL _showBackgroundView;
    unsigned int _overlayStyle;
    unsigned int _notificationBehavior;
}

+ (id)settingsControllerModule;
@property BOOL showBackgroundView; // @synthesize showBackgroundView=_showBackgroundView;
@property BOOL showCamera; // @synthesize showCamera=_showCamera;
@property BOOL disableOnUnlock; // @synthesize disableOnUnlock=_disableOnUnlock;
@property BOOL showDate; // @synthesize showDate=_showDate;
@property BOOL showDateView; // @synthesize showDateView=_showDateView;
@property unsigned int notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property unsigned int overlayStyle; // @synthesize overlayStyle=_overlayStyle;
@property BOOL enableLostModePlugin; // @synthesize enableLostModePlugin=_enableLostModePlugin;
@property BOOL enablePlugin; // @synthesize enablePlugin=_enablePlugin;
- (void)setDefaultValues;

@end

