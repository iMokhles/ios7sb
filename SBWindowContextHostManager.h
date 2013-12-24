/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString, SBOrderedRequesters, SBWindowContextHostView, SBWindowContextManager, UIColor, UIScreen;

@interface SBWindowContextHostManager : NSObject
{
    SBWindowContextManager *_contextManager;
    UIScreen *_screen;
    NSString *_identifier;
    UIColor *_defaultBackgroundColorWhileHosting;
    UIColor *_defaultBackgroundColorWhileNotHosting;
    SBWindowContextHostView *_hostView;
    BOOL _suspended;
    SBOrderedRequesters *_hostRequesters;
    NSMutableDictionary *_hostRequesterInfo;
    int _jailBehavior;
    id <SBWindowContextHostManagerDelegate> _delegate;
    struct {
        unsigned int delegateOverrideRequester:1;
        unsigned int delegateShouldEnableContextHostingForRequester:1;
    } _flags;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void)_notePropertiesSetOnRealContextHostViewWhichIReallyNeedToChangeAndIKnowWhatImDoingISwear:(id)arg1 originalProperties:(id)arg2 forRequester:(id)arg3;
- (id)_realContextHostViewWhichIReallyNeedToAccessAndIKnowWhatImDoingISwear;
- (void)_hostOnDefaultWindowForRequester:(id)arg1 priority:(int)arg2 hide:(BOOL)arg3;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (void)_removeRequesterInfo:(id)arg1;
- (void)_applyRequesterInfo:(id)arg1;
- (id)_infoForRequester:(id)arg1;
- (void *)createIOSurfaceForFrame:(struct CGRect)arg1 excludeContext:(unsigned int)arg2 outTransform:(struct CGAffineTransform *)arg3;
- (void *)createIOSurfaceForFrame:(struct CGRect)arg1 outTransform:(struct CGAffineTransform *)arg2;
- (void *)createIOSurfaceForFrame:(struct CGRect)arg1;
- (void)setContextId:(unsigned int)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3;
- (void)hideHostViewOnDefaultWindowForRequester:(id)arg1 priority:(int)arg2;
- (void)hideHostViewOnDefaultWindowForRequester:(id)arg1;
- (void)unhideHostViewOnDefaultWindowForRequester:(id)arg1;
- (void)orderRequesterFront:(id)arg1;
- (void)disableHostingForRequester:(id)arg1;
- (void)resumeContextHosting;
- (void)suspendContextHosting;
- (void)enableHostingForRequester:(id)arg1 priority:(int)arg2;
- (void)enableHostingForRequester:(id)arg1 orderFront:(BOOL)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)hostViewForRequester:(id)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned int contextCount;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileNotHosting;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileHosting;
@property(nonatomic) id <SBWindowContextHostManagerDelegate> delegate;
- (void)dealloc;
- (id)initWithContextManager:(id)arg1 screen:(id)arg2 jailBehavior:(int)arg3;
- (id)initWithContextManager:(id)arg1 screen:(id)arg2;

@end

