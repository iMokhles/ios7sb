/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_SBFVibrantTableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface SBTodayBulletinCell : _SBFVibrantTableViewCell
{
    UILabel *_label;
    UIImageView *_iconImageView;
}

+ (id)defaultTextAttributes;
+ (id)defaultFontColor;
+ (id)defaultFont;
- (void)layoutSubviews;
- (void)setIcon:(id)arg1;
@property(copy, nonatomic) NSString *labelText;
@property(nonatomic) struct CGRect textRect;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

