//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Argument {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct CoreFunction {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    union {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
    struct Argument _field6;
    struct Argument _field7[16];
    unsigned int _field8;
    unsigned int _field9;
    void *_field10;
    void *_field11;
};

struct Function {
    struct CoreFunction _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
    unsigned short _field5;
    unsigned short _field6;
    int _field7;
    void *_field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    struct Function *_field13;
    void *_field14;
};

struct ObjectTrackingMap<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>, unsigned long long> {
    struct unordered_map<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>> _objectMap;
};

struct PassthroughBase {
    struct function<void *(const char *, unsigned long *)> LoadURLData;
};

struct StateMirrorManager<GPUTools::SM::MTL::DefaultBaseObjectTypes> {
    struct unordered_map<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>>> _deviceMap;
    struct ObjectTrackingMap<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>, unsigned long long> _layerMap;
    unsigned long long _surfaceBoundsLayerID;
    struct PassthroughBase _passthrough;
    int _lastFunctionIndex;
};

struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>;

struct function<void *(const char *, unsigned long *)> {
    struct type __buf_;
    struct __base<void *(const char *, unsigned long *)> *__f_;
};

struct type {
    unsigned char __lx[24];
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::shared_ptr<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct StateMirrorManager<GPUTools::SM::MTL::DefaultBaseObjectTypes> {
    struct unordered_map<unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unique_ptr<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>, std::__1::default_delete<GPUTools::SM::MTL::Device<GPUTools::SM::MTL::DefaultBaseObjectTypes>>>>>> _deviceMap;
    struct ObjectTrackingMap<GPUTools::SM::MTL::Layer<GPUTools::SM::MTL::DefaultBaseObjectTypes>, unsigned long long> _layerMap;
    unsigned long long _surfaceBoundsLayerID;
    struct PassthroughBase _passthrough;
    int _lastFunctionIndex;
} StateMirrorManager_4613010e;

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/SharedFrameworks/MTLToolsAnalysisEngine.framework/Versions/A/MTLToolsAnalysisEngine
// UUID: DCD0DE2F-FE76-36BD-B621-821D0C35D566
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 18058.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../../../../../../PrivateFrameworks
//                               = /Applications/PrivateFrameworks
//

@interface DYMTLAnalyzerArchiveVisitor : DYAnalyzerArchiveVisitor
{
}

- (id)generateFindingsAndAddTo:(id)arg1 singleFrameMode:(BOOL)arg2;

@end

@interface DYMTLAnalyzerEngine : DYAnalyzerEngine
{
    StateMirrorManager_4613010e _mng;
    BOOL _presort;
}

@property(nonatomic) BOOL presort; // @synthesize presort=_presort;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setUsePreSortHeuristics:(BOOL)arg1;
- (id)_newHeuristicPoolWithGraphicsEngineID:(unsigned long long)arg1;
- (id)newFrameStatisticsFinding;
- (unsigned int)_stateMirrorProcessFunctionAndAnnotate:(const struct Function *)arg1 functionIndex:(int)arg2;
- (unsigned int)_stateMirrorProcessFunction:(const struct Function *)arg1 functionIndex:(int)arg2;
- (void)_stateMirrorInitialize;
- (unsigned int)_supportedGraphicsAPI;
- (id)nameForVariable:(const char *)arg1 graphicsEngineID:(unsigned long long)arg2;
- (id)getObjectLabel:(unsigned long long)arg1 objectType:(int)arg2 objectID:(int)arg3;
- (BOOL)isUniformFullyPreUpdatedInCapture:(unsigned long long)arg1 programID:(unsigned int)arg2 uniformLoc:(int)arg3;
- (BOOL)isObjectDataUpdatedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (BOOL)doesProgramHaveLinkedShader:(unsigned long long)arg1 programID:(unsigned int)arg2 shaderType:(int)arg3;
- (BOOL)isObjectCreatedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (BOOL)isObjectUsedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (BOOL)isObjectFullyPreUpdatedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (id)drawCallsUsingProgram:(unsigned int)arg1 graphicsEngineID:(unsigned long long)arg2;
- (void)enableStateDeltaGeneratorHeuristics;
- (void)configureForArchive:(id)arg1;
- (StateMirrorManager_4613010e *)getStateMirrorManager;
- (struct Device<GPUTools::SM::MTL::DefaultBaseObjectTypes> *)getStateMirrorDevice:(unsigned long long)arg1;
- (id)getStaticProgramIdArray:(unsigned long long)arg1;
- (id)getStaticShaderIdArray:(unsigned long long)arg1;
- (id)getStaticBufferIdArray:(unsigned long long)arg1;
- (id)getStaticTextureIdArray:(unsigned long long)arg1;
- (void)processFunction:(const struct Function *)arg1 blockMode:(int)arg2 streamMode:(BOOL)arg3 analyzeInserted:(BOOL)arg4 findingsHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

@interface DYMTLAnalyzerFinding : DYAnalyzerFinding
{
}

- (id)_simplifiedDetailsStringSubstituted:(id)arg1 plural:(BOOL)arg2;
- (BOOL)isTextureImageCompletelyUpdated;
- (BOOL)isBufferDataCompletelyUpdated;
- (BOOL)isInefficientStateUpdate;
- (BOOL)isRedundantCallOrQuery;
- (BOOL)isRedundantCall;
- (BOOL)isEncoderStatistics;
- (BOOL)isFrameStatistics;
- (BOOL)isDataRestoreUnnecessaryForFunc:(const struct Function *)arg1 targetArgIndex:(int)arg2 objectType:(unsigned int)arg3 analyzerEngine:(id)arg4;
- (id)localizedKind;
- (id)synopsis;

@end

@interface DYMTLAnalyzerHeuristic : DYAnalyzerHeuristic
{
}

+ (BOOL)supportsAPI:(unsigned int)arg1;
- (void)addFunctionIndexOfMipFilterChange:(id)arg1 textureID:(unsigned long long)arg2;
- (void)addFunctionIndicesForTextureCreationAndMipLevelUpdate:(id)arg1 textureID:(unsigned long long)arg2;
- (void)appendObjectDescription:(id)arg1 objectType:(long long)arg2 objectID:(unsigned long long)arg3 andShortDesc:(BOOL)arg4;
- (id)objectDescription:(long long)arg1 objectID:(unsigned long long)arg2;
- (id)finding;
- (void)_setGenerationEnvironmentForFinding:(id)arg1;
- (void)processFunction:(const struct Function *)arg1 stateMirrorRetCode:(unsigned int)arg2;

@end

@interface DYMTLAnalyzerHeuristicPool : DYAnalyzerHeuristicPool
{
}

- (void)processPreMirrorHeuristics:(const struct Function *)arg1 captureBlockMode:(int)arg2 functionIndex:(int)arg3;
- (id)initWithEngine:(id)arg1 graphicsEngineID:(unsigned long long)arg2;

@end

