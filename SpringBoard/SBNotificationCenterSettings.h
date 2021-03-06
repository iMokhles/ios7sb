/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_UISettings.h"

@class SBBounceSettings;

@interface SBNotificationCenterSettings : _UISettings
{
    SBBounceSettings *_bounceSettings;
    float _modeButtonTintLevel;
    float _modeButtonTintAlpha;
    float _modeLabelTintLevel;
    float _modeLabelTintAlpha;
    double _grabberAnimationDuration;
}

+ (id)settingsControllerModule;
@property(nonatomic) float modeLabelTintAlpha; // @synthesize modeLabelTintAlpha=_modeLabelTintAlpha;
@property(nonatomic) float modeLabelTintLevel; // @synthesize modeLabelTintLevel=_modeLabelTintLevel;
@property(nonatomic) float modeButtonTintAlpha; // @synthesize modeButtonTintAlpha=_modeButtonTintAlpha;
@property(nonatomic) float modeButtonTintLevel; // @synthesize modeButtonTintLevel=_modeButtonTintLevel;
@property double grabberAnimationDuration; // @synthesize grabberAnimationDuration=_grabberAnimationDuration;
@property(retain, nonatomic) SBBounceSettings *bounceSettings; // @synthesize bounceSettings=_bounceSettings;
- (void)setDefaultValues;

@end

