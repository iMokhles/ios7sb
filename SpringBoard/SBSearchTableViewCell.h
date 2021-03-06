/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSOperation, NSString, UIImageView, UILabel, UIView;

@interface SBSearchTableViewCell : UITableViewCell
{
    BOOL _badged;
    BOOL _starred;
    BOOL _isFirstInSection;
    BOOL _isLastInSection;
    BOOL _hasImage;
    BOOL _aboveSelectedCell;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_auxiliaryTitleLabel;
    UILabel *_auxiliarySubtitleLabel;
    UILabel *_summaryLabel;
    UIImageView *_titleImageView;
    UIImageView *_badgeImageView;
    UIImageView *_starImageView;
    NSOperation *_fetchImageOperation;
    UIView *_background;
    UIView *_clippingContainer;
    UIView *_separatorView;
    BOOL _hasRoundedImage;
    BOOL _shouldKnockoutImage;
}

+ (float)summaryBaselineOriginForContentSizeCategory:(id)arg1;
+ (float)subtitleBaselineOriginForContentSizeCategory:(id)arg1;
+ (float)titleBaselineOriginForContentSizeCategory:(id)arg1;
+ (float)rowHeightForPreferredContentSizeWithNumberOfSummaryLines:(int)arg1;
+ (void)resetContentSizeCache;
+ (id)starImage;
+ (id)unreadImage;
+ (id)selectedTextColor;
+ (id)secontaryTextColor;
+ (id)maskedSelectedBackgroundColor;
+ (id)unmaskedSelectedBackgroundColor;
+ (id)backgroundColor;
+ (id)lineColor;
+ (void)initialize;
@property(nonatomic) BOOL shouldKnockoutImage; // @synthesize shouldKnockoutImage=_shouldKnockoutImage;
@property(nonatomic, getter=hasRoundedImage) BOOL hasRoundedImage; // @synthesize hasRoundedImage=_hasRoundedImage;
@property(retain, nonatomic) NSOperation *fetchImageOperation; // @synthesize fetchImageOperation=_fetchImageOperation;
@property(nonatomic, getter=isAboveSelectedCell) BOOL aboveSelectedCell; // @synthesize aboveSelectedCell=_aboveSelectedCell;
@property(nonatomic, getter=hasImage) BOOL hasImage; // @synthesize hasImage=_hasImage;
@property(nonatomic, getter=isLastInSection) BOOL lastInSection; // @synthesize lastInSection=_isLastInSection;
@property(nonatomic, getter=isFirstInSection) BOOL firstInSection; // @synthesize firstInSection=_isFirstInSection;
@property(nonatomic, getter=isStarred) BOOL starred; // @synthesize starred=_starred;
@property(nonatomic, getter=isBadged) BOOL badged; // @synthesize badged=_badged;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateSelectedState;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setTitleImage:(id)arg1 animated:(BOOL)arg2;
- (id)_scriptingInfo;
- (void)clipToTopHeaderInTableView:(id)arg1;
- (void)updateBottomLine;
- (void)setIsLastInSection:(BOOL)arg1;
- (void)setSummary:(id)arg1 withNumberOfLines:(int)arg2;
@property(retain, nonatomic) NSString *summary;
@property(retain, nonatomic) NSString *auxiliarySubtitle;
@property(retain, nonatomic) NSString *auxiliaryTitle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

