//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/SharedFrameworks/DVTDeveloperModeHelper.framework/Versions/A/DVTDeveloperModeHelper
// UUID: 4C83EA26-F89B-3ADE-B5B6-44FC45557AA0
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 8201.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol __ARCLiteIndexedSubscripting__
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

@protocol __ARCLiteKeyedSubscripting__
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

@interface DVTDeveloperModeAlertHelper : NSObject
{
    BOOL _shouldAskUserAboutDeveloperMode;
    int _messageType;
    NSWindow *_parentWindow;
}

+ (void)initialize;
@property(nonatomic) BOOL shouldAskUserAboutDeveloperMode; // @synthesize shouldAskUserAboutDeveloperMode=_shouldAskUserAboutDeveloperMode;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
@property(readonly) NSString *informativeText;
- (void)setDeveloperModeWithReturnCode:(long long)arg1;
- (void)_performAskToEnableDeveloperModeIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_synchronizedPerformDeveloperModeAlertCompletionCallbacks;
- (void)_synchronizedAskToEnableDeveloperModeIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)askToEnableDeveloperModeIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

@interface DVTDeveloperModeHelper : NSObject
{
}

- (id)_stringForFileHandleData:(id)arg1;
- (void)setDeveloperModeEnabled:(BOOL)arg1;
- (BOOL)isDeveloperModeEnabled;

@end

