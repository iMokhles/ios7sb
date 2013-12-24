/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UILabel.h"

#import "SBBulletinDateLabel.h"

@class NSTimer;

@interface SBSnoozedAlarmDateLabel : UILabel <SBBulletinDateLabel>
{
    double _fireTime;
    NSTimer *_tickTimer;
    BOOL _allDay;
    BOOL isTimestamp;
    id <SBDateLabelDelegate> _delegate;
    int _labelType;
}

@property(nonatomic) BOOL isTimestamp; // @synthesize isTimestamp;
@property(nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property(nonatomic) int labelType; // @synthesize labelType=_labelType;
@property(nonatomic) id <SBDateLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)prepareForReuse;
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
- (void)_tickTimerFired:(id)arg1;
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
- (void)_updateText;
- (id)_formatDuration:(double)arg1;
- (void)dealloc;
- (void)_invalidateTimer;

@end

