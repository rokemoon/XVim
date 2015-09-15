//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/Library/Xcode/PrivatePlugIns/IDEInterfaceBuilderiOSIntegration.ideplugin/Contents/MacOS/IDEInterfaceBuilderiOSIntegration
// UUID: AF79C763-0F75-3773-A4EB-B5FDBE03BD4B
//
//                           Arch: x86_64
//                Current version: 8154.0.0
//          Compatibility version: 1.0.0
//                 Source version: 8154.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../../../../../../../../../Applications/Xcode.app/Contents/PlugIns/
//                               = /Applications/Xcode-7GM.app/Contents/Developer/Applications/Xcode.app/Contents/PlugIns
//                       Run path: @loader_path/../../../../../PrivateFrameworks
//                               = /Applications/Xcode-7GM.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/Library/PrivateFrameworks
//                       Run path: @loader_path/../../../../../../../../iPhoneOS.platform/Developer/Library/PrivateFrameworks
//                               = /Applications/Xcode-7GM.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/Library/PrivateFrameworks
//                       Run path: @loader_path/../../../../../../../../../Library/PrivateFrameworks
//                               = /Applications/Xcode-7GM.app/Contents/Developer/Library/PrivateFrameworks
//

@protocol IDEInitialization
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
@end

@interface IBAbstractDocumentEditor (IBiOSDocumentEditor)
- (BOOL)validateiOSUserInterfaceItem:(id)arg1;
- (void)debugConvertToIOS7WithScreenMetrics:(id)arg1;
- (void)debugConvertToIOS7IPad:(id)arg1;
- (void)debugConvertToIOS7IPhone:(id)arg1;
@end

@interface IBDeviceFamilyChooserView : NSView
{
    NSPopUpButton *_popUpButton;
}

+ (id)deviceFamilyChooserView;
@property(retain, nonatomic) NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
- (void).cxx_destruct;
- (id)selectedIdiom;
- (void)awakeFromNib;

@end

@interface IBiOSIdiom : IBCocoaTouchIdiom
{
}

- (double)masterWidthForScreenWidth:(double)arg1;
- (id)simDeviceTypeForToolDescription:(id)arg1 error:(id *)arg2;
- (void)populateAdditionalSimDeviceTypeSearchPaths:(id)arg1;
- (id)designablesAgentApplicationName;
- (id)designablesAgentName;
- (id)cocoaTouchApplicationName;
- (id)screenMetricsWithArchiveIdentifier:(id)arg1;
- (id)allScreenMetricsForArchiving;
- (Class)storyboardVerifierClass;
- (Class)xibVerifierClass;
- (id)platform;
- (id)pluginName;

@end

@interface IBIPadIdiom : IBiOSIdiom
{
}

- (struct CGSize)pageSheetFixedSizeForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (struct CGSize)formSheetFixedSizeForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (BOOL)regularWidthDetailIsFullScreen:(id)arg1 screenMetrics:(id)arg2;
- (long long)legacyTypeForScreenMetrics:(id)arg1;
- (id)screenMetricsForLegacyType:(long long)arg1;
- (double)defaultOverviewZoomFactor;
- (id)supportedOSVersions;
- (id)supportedAdBannerSizes;
- (int)defaultOrientationForArchiving;
- (id)defaultOrientationMetrics;
- (id)defaultScreenMetricsForArchiving;
- (id)defaultScreenMetrics;
- (id)backwardsDeploymentConfiguration;
- (id)presentedConcreteScreenMetrics;
- (id)iPadTwoThirdsScreenMetrics;
- (id)iPadHalfScreenMetrics;
- (id)iPadOneThirdScreenMetrics;
- (id)iPadFullScreenMetrics;
- (id)screenMetrics;
- (id)presentationOrderedSiblingIdioms;
- (id)resourceIdiomVariant;
- (id)designatedIdiomForConfigurations;
- (BOOL)ignoresStatusBarForUIBarStyleComputation;
- (BOOL)supportsSearchBarsEmbeddedInBarButtonItems;
- (BOOL)supportsTopToolbars;
- (id)icon;
- (BOOL)wantsRoundedCornersOn6AndEarlier;
- (int)defaultStatusBarStyleFor6AndEarlier;
- (id)xibArchiveType;
- (id)iPhoneSimulatorDeviceEnvVar;
- (id)colorListName;
- (id)archiveIdentifier;
- (id)identifier;
- (id)idiomName;

@end

@interface IBIPhoneIdiom : IBiOSIdiom
{
}

- (struct CGSize)pageSheetFixedSizeForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (struct CGSize)formSheetFixedSizeForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (long long)legacyTypeForScreenMetrics:(id)arg1;
- (id)screenMetricsForLegacyType:(long long)arg1;
- (double)defaultOverviewZoomFactor;
- (id)unsupportedSegueClasses;
- (id)supportedOSVersions;
- (id)supportedAdBannerSizes;
- (id)backwardsDeploymentConfiguration;
- (id)nextScreenMetricsForTogglingFromMetrics:(id)arg1;
- (id)screenMetrics;
- (BOOL)regularWidthDetailIsFullScreen:(id)arg1 screenMetrics:(id)arg2;
- (id)iPhone40InchScreenMetrics;
- (id)iPhone35InchScreenMetrics;
- (id)retina47ScreenMetrics;
- (id)retinaHDScreenMetrics;
- (id)presentationOrderedSiblingIdioms;
- (id)resourceIdiomVariant;
- (int)defaultOrientationForArchiving;
- (id)defaultOrientationMetrics;
- (id)defaultScreenMetrics;
- (id)defaultScreenMetricsForArchiving;
- (id)icon;
- (BOOL)supportsSplitViewControllersOnIOS7AndEarlier;
- (BOOL)ignoresStatusBarForUIBarStyleComputation;
- (BOOL)supportsSearchBarsEmbeddedInBarButtonItems;
- (BOOL)supportsTopToolbars;
- (id)xibArchiveType;
- (id)iPhoneSimulatorDeviceEnvVar;
- (id)colorListName;
- (id)archiveIdentifier;
- (id)identifier;
- (id)idiomName;

@end

@interface IBUICollectionReusableView (IBiOSUICollectionReusableViewIntegration)
- (void)ibCustomizeForiOSLibraryInstantiation;
@end

@interface IBUITableViewCell (IBiOSUITableViewCellIntegration)
- (void)ibCustomizeForiOSLibraryInstantiation;
@end

@interface IBUITextField (IBiOSUITextFieldIntegration)
- (void)ibCustomizeForiOSLibraryInstantiation;
@end

@interface IBUITextView (IBiOSUITextViewIntegration)
- (void)ibCustomizeForiOSLibraryInstantiation;
@end

@interface IBiOSDocumentInspectorViewController : IBCocoaTouchDocumentInspectorViewController
{
}

+ (id)documentPlatform;
- (id)alertAccessoryViewForDisablingConfigurations;
- (void)finishDisablingConfigurationsAndAutolayout:(BOOL)arg1 forDocuments:(id)arg2 withAlert:(id)arg3;

@end

@interface IBiOSDocumentVerifier : IBCocoaTouchDocumentVerifier
{
}

- (id)verify;
- (void)verifySimulatedStatusBarStyle;

@end

@interface IBiOSPlatform : IBCocoaTouchPlatform <IDEInitialization>
{
}

+ (void)customizeObjectForLibraryInstantiation:(id)arg1;
+ (Class)idiomClass;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
- (BOOL)allowLegacySegues;
- (BOOL)supportsLaunchScreen;
- (int)defaultUITableViewCellSeparatorStyle;
- (double)defaultUITableViewSectionHeaderFooterHeightForStyle:(int)arg1;
- (double)defaultUITableViewRowHeight;
- (id)defaultFontForUIButtonType:(int)arg1;
- (BOOL)supportsBlackBarsForSimulationMetrics;
- (BOOL)supportsNavigationBarWithPrompts;
- (BOOL)supportsPresentationSizeMetrics;
- (BOOL)supportsOrientationMetrics;
- (BOOL)supportsBottomBarMetrics;
- (BOOL)supportsStatusBarMetrics;
- (BOOL)documentEditor:(id)arg1 validateUserInterfaceItem:(id)arg2;
- (void)verifySimulatedStatusBarStyleForDocument:(id)arg1 version:(long long)arg2;
- (void)finishChangingTargetRuntimeInCompiledIntermediateDocument:(id)arg1;
- (BOOL)supportsInternationalizationWithSystemTarget:(long long)arg1 returningError:(id *)arg2;
- (id)alternateTopLevelPathsForCompilationOutputPath:(id)arg1;
- (BOOL)shouldBackwardsDeployStoryboardReferencesWithDeploymentTarget:(id)arg1;
- (BOOL)shouldValidateStoryboardReferencesWithDeploymentTarget:(id)arg1;
- (id)systemDocumentDependency;
- (id)cocoaTouchTargetRuntime;
- (id)availableSecondaryIdiomScreenMetricsForDocument:(id)arg1;
- (id)availablePrimaryIdiomScreenMetricsForDocument:(id)arg1;
- (id)defaultSimulatedBackgroundColorForRenderingForViewPortWithSize:(struct CGSize)arg1;
- (id)defaultTargetRuntimeForArchiving;
- (id)defaultTargetRuntime;
- (id)buildSystemPlatformIdentifier;
- (id)buildSystemPlatformName;
- (id)operatingSystemName;
- (id)identifier;

@end

@interface IBiOSPlugin : NSObject <IDEInitialization>
{
}

+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
+ (id)sharedInstance;
- (id)init;

@end

@interface IBiOSStoryboardDocumentVerifier : IBiOSDocumentVerifier
{
}

+ (BOOL)shouldNeverUseAutoincrementingIDs;
- (id)verify;
- (void)verifyOrderOfViewControllerInGroupObjects;
- (void)verifyMinimumDevelopmentTarget;
- (void)verifyErroneousViewSimulatedMetrics;
- (void)verifyDanglingGroups;
- (void)verifyEmptyExplicitStoryboardIdentifierIdentifiers;
- (void)verifyIdentifiedSceneMemberIdentifiers;
- (void)verifySwitchSizes;
- (id)verifySeguesAreValid;
- (id)document;

@end

@interface IBiOSXIBDocumentVerifier : IBiOSDocumentVerifier
{
}

+ (id)verifiedDanglingSubviewParentClassWhitelist;
- (id)verify;
- (void)verifyTargetRuntimeOfFilesOwnerAndFirstResponder;
- (void)verifyByEnsuringPresenceOfFirstResponder;
- (id)document;

@end

@interface NSObject (IBiOSObjectIntegration)
- (void)ibCustomizeForiOSLibraryInstantiation;
@end

