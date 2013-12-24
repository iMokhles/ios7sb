/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SpringBoardFoundation/SBFWallpaperView.h>

#import "SBFProceduralWallpaperDelegate.h"

@class NSTimer, UIImage;

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate>
{
    id <SBFProceduralWallpaper> _proceduralWallpaper;
    NSTimer *_colorSampleTimer;
    UIImage *_blur;
    int _thermalNotificationToken;
    _Bool _pausedForThermalReasons;
}

+ (_Bool)_allowsRasterization;
+ (_Bool)_allowsParallax;
- (void)_updateAnimating;
- (void)_sample;
- (_Bool)_shouldSampleContinuously;
- (void)_updateSampleTimer;
- (id)_newImageFromBlurSurface:(struct __IOSurface *)arg1 rect:(struct CGRect)arg2;
- (void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(struct CGRect)arg3;
- (void)wallpaper:(id)arg1 didGenerateBlur:(struct __IOSurface *)arg2 forRect:(struct CGRect)arg3;
- (id)_blurredImage;
- (void)_stopGeneratingBlurredImages;
- (void)_startGeneratingBlurredImages;
- (id)_computeAverageColor;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (_Bool)isDisplayingWallpaper:(id)arg1;
- (void)layoutSubviews;
- (void)setWallpaperAnimationEnabled:(_Bool)arg1;
- (void)setContinuousColorSamplingEnabled:(_Bool)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 proceduralWallpaper:(id)arg2;

@end

