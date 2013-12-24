/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBLeafIcon.h"

@class SBApplicationPlaceholder;

@interface SBDownloadingIcon : SBLeafIcon
{
    BOOL _wasUninstalledByUser;
    BOOL _isNewsstandDownload;
    SBApplicationPlaceholder *_appPlaceholder;
}

+ (id)leafIdentifierForApplicationPlaceholder:(id)arg1;
+ (id)leafIdentifierForApplicationPlaceholderBundleID:(id)arg1;
- (void)cancelDownload;
- (BOOL)iconAppearsInNewsstand;
- (void)_showAlertForError:(id)arg1;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitle;
- (void)setUninstalledByUser:(BOOL)arg1;
- (BOOL)uninstalledByUser;
- (void)setNewsstandDownload:(BOOL)arg1;
- (BOOL)isNewsstandDownload;
- (BOOL)matchesApplicationIcon:(id)arg1;
- (id)appPlaceholder;
- (void)setApplicationPlaceholder:(id)arg1;
- (void)reloadForStatusChange;
- (void)completeUninstall;
- (id)realDisplayName;
- (id)homescreenIconImage;
- (id)_darkenedIconImageForImage:(id)arg1;
- (id)gridCellImage;
- (id)identifierForCorrespondingApplicationIcon;
- (id)description;
- (id)representation;
- (BOOL)matchesRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithApplicationPlaceholder:(id)arg1;

@end

