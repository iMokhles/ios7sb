/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIColor;

@interface SBPieChartSlice : NSObject
{
    float _value;
    UIColor *_fillColor;
}

+ (id)sliceWithValue:(float)arg1 fillColor:(id)arg2;
@property(readonly) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(readonly) float value; // @synthesize value=_value;
- (void)dealloc;
- (id)initWithValue:(float)arg1 fillColor:(id)arg2;

@end

