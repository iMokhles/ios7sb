/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "SBStarkBannerItemObserver.h"
#import "SBUIBannerView.h"

@class SBStarkBannerItem, SBUIBannerContext, UIColor, UIImageView, UILabel;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, SBUIBannerView>
{
    SBUIBannerContext *_context;
    SBStarkBannerItem *_bannerItem;
    UIImageView *_categoryImageView;
    UILabel *_titleLabel;
    float _titleAscender;
    UILabel *_subTitleLabel;
    float _subTitleAscender;
    UIImageView *_actionImageView;
    struct UIEdgeInsets _contentInsets;
}

+ (struct UIEdgeInsets)_contentInsetsForActionType:(int)arg1;
+ (id)_imageForActionType:(int)arg1;
- (void)starkBannerItemDidReloadDisplayProperties:(id)arg1;
- (id)bannerContext;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(copy, nonatomic) UIColor *grabberColor;

@end

