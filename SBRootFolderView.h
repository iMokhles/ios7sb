/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBFolderView.h"

#import "SBSearchGestureObserver.h"
#import "_UISettingsKeyObserver.h"

@class SBDockIconListView, SBDockView, SBFParallaxSettings, SBRootFolder, SBSearchViewController, TPLegacyLCDTextView;

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBSearchGestureObserver>
{
    SBDockView *_dockView;
    SBDockIconListView *_dockListView;
    TPLegacyLCDTextView *_idleTextView;
    SBFParallaxSettings *_parallaxSettings;
    float _searchGestureProgress;
    SBSearchViewController *_searchViewController;
}

@property(readonly, nonatomic) SBSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
- (void)searchGesture:(id)arg1 changedPercentComplete:(float)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_configureParallax;
- (void)lcdTextViewCompletedScroll:(id)arg1;
- (void)setIdleText:(id)arg1;
- (void)layoutIconLists:(double)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3;
- (void)tearDownListViews;
- (void)_updateEditingStateAnimated:(BOOL)arg1;
- (void)resetIconListViews;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (id)iconListViewAtIndex:(unsigned int)arg1;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (void)fadeContentForMinificationFraction:(float)arg1;
- (void)fadeContentForMagnificationFraction:(float)arg1;
- (void)didAnimate;
- (void)willAnimate;
- (void)setDockVerticalStretch:(float)arg1;
- (void)setDockOffscreenFraction:(float)arg1;
- (id)dockView;
- (void)_layoutSubviews;
- (void)layoutViewsForSearch;
- (void)setOrientation:(int)arg1;
- (void)setNeedsLayout;
- (void)returnScalingView;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(int)arg2 forSnapshot:(BOOL)arg3;
- (id)initWithFolder:(id)arg1 orientation:(int)arg2;

// Remaining properties
@property(retain, nonatomic) SBRootFolder *folder;

@end
