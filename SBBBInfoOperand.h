/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class SBBBBulletinInfo, SBBBSectionInfo;

@interface SBBBInfoOperand : NSObject
{
    SBBBSectionInfo *_section;
    SBBBBulletinInfo *_bulletin;
}

+ (id)operandWithSection:(id)arg1 bulletin:(id)arg2;
@property(readonly, nonatomic) SBBBBulletinInfo *bulletin; // @synthesize bulletin=_bulletin;
@property(readonly, nonatomic) SBBBSectionInfo *section; // @synthesize section=_section;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic, getter=isSectionOperand) BOOL sectionOperand;
- (void)dealloc;
- (id)initWithSection:(id)arg1 bulletin:(id)arg2;

@end

