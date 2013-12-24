/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBNewsstand : NSObject
{
}

+ (BOOL)useInternationalAssets;
+ (BOOL)addFakeApps;
+ (id)bundleIDToReplicate;
+ (BOOL)addManyIcons;
+ (BOOL)alwaysShowIconLabels;
+ (BOOL)disableIconSkew;
+ (BOOL)_newsstandStoreIsSupported;
+ (BOOL)_newsstandStoreIsRestricted;
+ (BOOL)newsstandStoreIsAvailable;
+ (BOOL)newsstandEnabled;
+ (void)_iconVisibilityDidChange:(id)arg1;
+ (void)_availableStoreItemKindsDidChange:(id)arg1;
+ (void)reloadDefaults;
+ (void)noteAppRestrictionsDidChange;
+ (void)_checkStoreSupport;
+ (void)_updateStoreAvailability;
+ (void)_loadDefaults;
+ (void)openNewsstandAppStore;
+ (void)initialize;

@end

