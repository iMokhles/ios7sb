/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIDynamicItem.h"

@interface _SBNotificationCenterBouncingItem : NSObject <UIDynamicItem>
{
    struct CGPoint _center;
    struct CGRect _bounds;
    id _stepper;
}

@property(nonatomic) struct CGRect frame;
@property(nonatomic) struct CGAffineTransform transform;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 stepper:(id)arg2;

@end

