/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem
{
    NSString *_bodyText;
    NSString *_title;
}

- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 bodyText:(id)arg2;

@end
