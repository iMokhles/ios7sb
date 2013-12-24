/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_UISettings.h"

@interface SBFolderSettings : _UISettings
{
    BOOL _allowNestedFolders;
    BOOL _pinchToClose;
    BOOL _blurFolderBackground;
    BOOL _oneColumnAtATime;
}

+ (id)settingsControllerModule;
@property(nonatomic) BOOL oneColumnAtATime; // @synthesize oneColumnAtATime=_oneColumnAtATime;
@property(nonatomic) BOOL blurFolderBackground; // @synthesize blurFolderBackground=_blurFolderBackground;
@property(nonatomic) BOOL pinchToClose; // @synthesize pinchToClose=_pinchToClose;
@property(nonatomic) BOOL allowNestedFolders; // @synthesize allowNestedFolders=_allowNestedFolders;
- (void)setDefaultValues;

@end
