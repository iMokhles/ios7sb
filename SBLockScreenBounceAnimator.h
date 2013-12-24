/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBResponderTouchDelegate.h"
#import "UIDynamicAnimatorDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSMutableSet, NSSet, SBBounceBehavior, SBBounceSettings, SBBouncingItem, SBBouncingSystem, UIDynamicAnimator, UIGestureRecognizer, UIView;

@interface SBLockScreenBounceAnimator : NSObject <UIDynamicAnimatorDelegate, _UISettingsKeyObserver, SBResponderTouchDelegate>
{
    NSMutableSet *_tapExcludedViews;
    BOOL _isAnimating;
    BOOL _bounceEnabled;
    UIView *_view;
    SBBouncingSystem *_system;
    UIDynamicAnimator *_animator;
    SBBouncingItem *_item;
    SBBounceBehavior *_behavior;
    UIGestureRecognizer *_tapRecognizer;
    UIGestureRecognizer *_panRecognizer;
    id _prepareBlock;
    id _translateBlock;
    id _canceledBlock;
    id _completedBlock;
    SBBounceSettings *_settings;
}

@property(retain, nonatomic) SBBounceSettings *settings; // @synthesize settings=_settings;
@property(copy) id completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy) id canceledBlock; // @synthesize canceledBlock=_canceledBlock;
@property(copy) id translateBlock; // @synthesize translateBlock=_translateBlock;
@property(copy) id prepareBlock; // @synthesize prepareBlock=_prepareBlock;
- (void)responder:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)responder:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)responder:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateSettings;
- (void)_createAnimator;
- (void)_removeAnimator;
- (void)_resetAnimator;
- (void)_beginAnimating;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_addPanRecognizer;
- (void)_removeTapRecognizer;
- (void)_addTapRecognizer;
@property(readonly, nonatomic) NSSet *tapExcludedViews;
- (void)removeTapExcludedView:(id)arg1;
- (void)addTapExcludedView:(id)arg1;
- (void)setBounceEnabled:(BOOL)arg1;
- (void)cancelAnimation;
- (BOOL)isAnimating;
- (void)dealloc;
- (id)initWithView:(id)arg1 allowPan:(BOOL)arg2;

@end
