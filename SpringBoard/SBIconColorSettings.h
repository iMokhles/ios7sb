/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_UISettings.h"

@interface SBIconColorSettings : _UISettings
{
    BOOL _blurryFolderIcons;
    BOOL _blurryCloseBoxes;
    BOOL _suppressJitter;
    BOOL _closeBoxesEverywhere;
    float _maxSaturationBoost;
    float _maxSaturation;
    float _maxBrightnessBoost;
    float _maxBrightness;
    float _colorAlpha;
    float _whiteAlpha;
}

+ (id)settingsControllerModule;
@property(nonatomic) BOOL closeBoxesEverywhere; // @synthesize closeBoxesEverywhere=_closeBoxesEverywhere;
@property(nonatomic) BOOL suppressJitter; // @synthesize suppressJitter=_suppressJitter;
@property(nonatomic) float whiteAlpha; // @synthesize whiteAlpha=_whiteAlpha;
@property(nonatomic) float colorAlpha; // @synthesize colorAlpha=_colorAlpha;
@property(nonatomic) float maxBrightness; // @synthesize maxBrightness=_maxBrightness;
@property(nonatomic) float maxBrightnessBoost; // @synthesize maxBrightnessBoost=_maxBrightnessBoost;
@property(nonatomic) float maxSaturation; // @synthesize maxSaturation=_maxSaturation;
@property(nonatomic) float maxSaturationBoost; // @synthesize maxSaturationBoost=_maxSaturationBoost;
@property(nonatomic) BOOL blurryCloseBoxes; // @synthesize blurryCloseBoxes=_blurryCloseBoxes;
@property(nonatomic) BOOL blurryFolderIcons; // @synthesize blurryFolderIcons=_blurryFolderIcons;
- (void)setDefaultValues;

@end

