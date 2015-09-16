//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/Developer/Platforms/WatchSimulator.platform/Developer/Library/PrivateFrameworks/IBWatchKitImageCatalogToolExtensions.framework/IBWatchKitImageCatalogToolExtensions
// UUID: 3A1044BB-4F6E-3FFD-B3D5-AA3CC47C17AF
//
//                           Arch: i386
//                Current version: 0.0.0
//          Compatibility version: 0.0.0
//                 Source version: 8092.0.0.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol IBICSchemaProvider <NSObject>
- (void)registerSchemaComponents:(IBICSchema *)arg1;
- (float)precedence;

@optional
+ (void)setContextDataFromCallingHost:(id)arg1;
+ (id)contextDataForRemoteTool;
+ (_Bool)supportsRemoteToolsTargetingPlatformNamed:(NSString *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned int hash;
- (struct _NSZone *)zone;
- (unsigned int)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@interface IBICWatchComplicationSet : IBICSlottedAssetCollection
{
}

+ (id)contentReferenceTypeName;
+ (id)defaultInstanceForIdioms:(id)arg1;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (Class)requiredChildrenClass;
- (Class)expectedClassForSlot:(id)arg1;
- (void)populateIssues:(id)arg1 forUnconflictedChild:(id)arg2 inSlot:(id)arg3 context:(id)arg4;
- (id)overridingUnqualifiedRuntimeNameForChild:(id)arg1;
- (id)conflictFreeSlotForChild:(id)arg1;
- (id)defaultUnqualifiedRuntimeName;
- (id)runtimeNamespaceQualifier;
- (Class)manifestArchivistSlotClassForChildren:(id)arg1;
- (id)slotForChild:(id)arg1;

@end

@interface IBICWatchComplicationSlot : IBICSlot
{
    IBICIdiom *_idiom;
    IBICLocus *_role;
}

+ (id)slotWithIdiom:(id)arg1 role:(id)arg2;
+ (id)orderedComponentClasses;
@property(readonly) IBICLocus *role; // @synthesize role=_role;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)detailAreaKey;
- (int)compareDisplayOrder:(id)arg1;
- (id)shortDisplayName;
- (void)captureComponents;

@end

@interface IBICWatchSchemaProvider : NSObject <IBICSchemaProvider>
{
    IBICPlatform *_watchPlatform;
    IBICIdiom *_universalIdiom;
    IBICIdiom *_watchIdiom;
    IBICScale *_twoXScale;
    IBICScale *_threeXScale;
    IBICSubtype *_watch38mmSubtype;
    IBICSubtype *_watch42mmSubtype;
    IBICScreenWidth *_screenWidthNarrow;
    IBICScreenWidth *_screenWidthWide;
    IBICLocus *_roleNotificationCenter;
    IBICLocus *_roleCompanion;
    IBICLocus *_roleHomeScreen;
    IBICLocus *_roleLongLook;
    IBICLocus *_roleQuickLook;
    IBICSize *_size24;
    IBICSize *_size27_5;
    IBICSize *_size29;
    IBICSize *_size40;
    IBICSize *_size44;
    IBICSize *_size86;
    IBICSize *_size98;
    IBICDeviceOrientation *_portraitOrientation;
    IBICExtent *_extentFullScreen;
    IBICSystemVersion *_iOSv8;
    IBICFileType *_pngFileType;
    IBICFileType *_jpegFileType;
    IBICFileType *_pdfFileType;
    IBICLocus *_roleCircular;
    IBICLocus *_roleUtilitarian;
    IBICLocus *_roleModular;
}

+ (_Bool)supportsRemoteToolsTargetingPlatformNamed:(id)arg1;
- (void).cxx_destruct;
- (void)registerDataSetSlots:(id)arg1;
- (void)registerComplicationSlots:(id)arg1;
- (void)registerAppIconSetSlots:(id)arg1;
- (void)registerImageSetSlots:(id)arg1;
- (void)registerSlotComponents:(id)arg1;
- (void)captureExistingComponents:(id)arg1;
- (float)precedence;
- (void)registerSchemaComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

