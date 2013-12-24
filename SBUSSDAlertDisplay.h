/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBAlertView.h"

#import "UITextFieldDelegate.h"

@class TPButton, UIActivityIndicatorView, UITextField, UITextView, UITransitionView, UIView;

@interface SBUSSDAlertDisplay : SBAlertView <UITextFieldDelegate>
{
    TPButton *_dismissButton;
    TPButton *_replyButton;
    UIView *_notifyView;
    UIView *_replyView;
    UITransitionView *_transitionView;
    UITextView *_charsRemainingView;
    UIActivityIndicatorView *_progressIndicator;
    UITextField *_responseField;
    UITextView *_textView;
    UITextView *_responseMessageView;
    BOOL _allowsResponse;
}

- (void)_cancelClicked;
- (void)_okayClicked;
- (void)_replyClicked;
- (void)_textChanged:(id)arg1;
- (void)_updateCharsRemaining;
- (BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (void)setAllowsResponse:(BOOL)arg1;
- (BOOL)allowsResponse;
- (void)alertStringAvailable:(id)arg1;
- (void)_setupResponseBar;
- (void)layoutSubviews;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)displayString:(id)arg1;
- (id)_responseMessageView;
- (id)_textView;
- (id)_charsRemainingView;
- (void)dealloc;
- (id)_replyView;
- (id)_notifyView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

