/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBFolder.h"

@interface SBNewsstandFolder : SBFolder
{
}

- (id)nodeIdentifier;
- (void)_setDisplayNameFromRepresentation:(id)arg1;
- (BOOL)canAddIcon;
- (id)folderType;
- (BOOL)canEditDisplayName;
- (BOOL)canRemoveIcons;
- (BOOL)shouldRemoveWhenEmpty;
- (BOOL)isNewsstandFolder;
- (Class)listViewClass;
- (Class)listModelClass;
- (void)setIsOpen:(BOOL)arg1;
- (id)icon;
- (id)init;
- (Class)controllerClass;

@end

