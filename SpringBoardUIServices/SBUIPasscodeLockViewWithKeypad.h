/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>

#import "SBUIPasscodeEntryFieldDelegate.h"
#import "SBUIPasscodeLockNumberPadDelegate.h"

@class NSString, SBUIPasscodeLockNumberPad, UILabel, UIView;

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeEntryFieldDelegate>
{
    UILabel *_statusTitleView;
    UIView *_statusBackgroundView;
    SBUIPasscodeLockNumberPad *_numberPad;
    UIView *_topToStatusFieldOrEntryFieldFiller;
    UIView *_entryFieldToNumberPadFiller;
    UIView *_leftToNumberPadFiller;
    UIView *_rightToNumberPadFiller;
    UIView *_bottomToNumberPadFiller;
    NSString *_lastCharacterBeforeBackspace;
    _Bool _undoInputOnTouchCancellation;
}

@property(retain, nonatomic) UILabel *statusTitleView; // @synthesize statusTitleView=_statusTitleView;
@property(retain, nonatomic) NSString *lastCharacterBeforeBackspace; // @synthesize lastCharacterBeforeBackspace=_lastCharacterBeforeBackspace;
@property(nonatomic, getter=_undoInputOnTouchCancellation, setter=_setUndoInputOnTouchCancellation:) _Bool undoInputOnTouchCancellation; // @synthesize undoInputOnTouchCancellation=_undoInputOnTouchCancellation;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (_Bool)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg1;
- (void)passcodeLockNumberPadBackspaceButtonHit:(id)arg1;
- (void)passcodeLockNumberPadCancelButtonHit:(id)arg1;
- (void)passcodeLockNumberPad:(id)arg1 keyCancelled:(id)arg2;
- (void)passcodeLockNumberPad:(id)arg1 keyUp:(id)arg2;
- (void)passcodeLockNumberPad:(id)arg1 keyDown:(id)arg2;
- (id)_numericEntryFieldIfExists;
- (double)_numberPadOffsetFromTopOfScreen;
- (void)_noteKeyUp:(id)arg1;
- (void)_noteBackspaceHit;
- (void)_noteStringEntered:(id)arg1 eligibleForPlayingSounds:(_Bool)arg2;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegatePasscodeEntered;
- (void)_toggleForStatusField;
- (void)_layoutStatusView:(id)arg1;
- (id)_newStatusTitleView;
- (void)_layoutStatusView;
- (double)_statusTitleWidth;
- (void)_updateStatusText:(id)arg1 animated:(_Bool)arg2;
- (double)_statusTitleViewHeight;
- (id)_statusTitleViewTitleFont;
- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (void)_setHasInput:(_Bool)arg1;
- (_Bool)_includesStatusView;
- (id)_newEntryField;
- (id)_numberPad;
- (id)_statusBackgroundView;
- (id)_statusTitleView;
- (void)_luminanceBoostDidChange;
- (void)setShowsStatusField:(_Bool)arg1;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)reset;
- (void)resetForFailedPasscode;
- (id)passcode;
- (void)layoutSubviews;
- (double)backgroundAlpha;
- (void)dealloc;
- (id)init;

@end

