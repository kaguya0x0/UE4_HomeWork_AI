// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EARSpatialMeshUsageFlags : uint8;
enum class EARObjectClassification : uint8;
class UMRMeshComponent;
enum class EARTrackingState : uint8;
struct FTransform;
enum class EARPlaneOrientation : uint8;
class UARPlaneGeometry;
struct FVector;
struct FVector2D;
class UARCandidateImage;
enum class EAREye : uint8;
enum class EARFaceBlendShape : uint8; 
enum class EARFaceBlendShape : uint8;
class UAREnvironmentCaptureProbeTexture;
class UARCandidateObject;
struct FARPose3D;
enum class EARAltitudeSource : uint8;
#ifdef AUGMENTEDREALITY_ARTrackable_generated_h
#error "ARTrackable.generated.h already included, missing '#pragma once' in ARTrackable.h"
#endif
#define AUGMENTEDREALITY_ARTrackable_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasSpatialMeshUsageFlag); \
	DECLARE_FUNCTION(execGetObjectClassification); \
	DECLARE_FUNCTION(execGetUnderlyingMesh); \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp); \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetDebugName); \
	DECLARE_FUNCTION(execIsTracked); \
	DECLARE_FUNCTION(execGetTrackingState); \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform); \
	DECLARE_FUNCTION(execGetLocalToWorldTransform);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasSpatialMeshUsageFlag); \
	DECLARE_FUNCTION(execGetObjectClassification); \
	DECLARE_FUNCTION(execGetUnderlyingMesh); \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp); \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetDebugName); \
	DECLARE_FUNCTION(execIsTracked); \
	DECLARE_FUNCTION(execGetTrackingState); \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform); \
	DECLARE_FUNCTION(execGetLocalToWorldTransform);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedGeometry(); \
	friend struct Z_Construct_UClass_UARTrackedGeometry_Statics; \
public: \
	DECLARE_CLASS(UARTrackedGeometry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedGeometry(); \
	friend struct Z_Construct_UClass_UARTrackedGeometry_Statics; \
public: \
	DECLARE_CLASS(UARTrackedGeometry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedGeometry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedGeometry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedGeometry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedGeometry(UARTrackedGeometry&&); \
	NO_API UARTrackedGeometry(const UARTrackedGeometry&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedGeometry(UARTrackedGeometry&&); \
	NO_API UARTrackedGeometry(const UARTrackedGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocalToTrackingTransform() { return STRUCT_OFFSET(UARTrackedGeometry, LocalToTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__LocalToAlignedTrackingTransform() { return STRUCT_OFFSET(UARTrackedGeometry, LocalToAlignedTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__TrackingState() { return STRUCT_OFFSET(UARTrackedGeometry, TrackingState); } \
	FORCEINLINE static uint32 __PPO__UnderlyingMesh() { return STRUCT_OFFSET(UARTrackedGeometry, UnderlyingMesh); } \
	FORCEINLINE static uint32 __PPO__ObjectClassification() { return STRUCT_OFFSET(UARTrackedGeometry, ObjectClassification); } \
	FORCEINLINE static uint32 __PPO__SpatialMeshUsageFlags() { return STRUCT_OFFSET(UARTrackedGeometry, SpatialMeshUsageFlags); } \
	FORCEINLINE static uint32 __PPO__LastUpdateFrameNumber() { return STRUCT_OFFSET(UARTrackedGeometry, LastUpdateFrameNumber); } \
	FORCEINLINE static uint32 __PPO__DebugName() { return STRUCT_OFFSET(UARTrackedGeometry, DebugName); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedGeometry>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetSubsumedBy); \
	DECLARE_FUNCTION(execGetBoundaryPolygonInLocalSpace); \
	DECLARE_FUNCTION(execGetExtent); \
	DECLARE_FUNCTION(execGetCenter);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetSubsumedBy); \
	DECLARE_FUNCTION(execGetBoundaryPolygonInLocalSpace); \
	DECLARE_FUNCTION(execGetExtent); \
	DECLARE_FUNCTION(execGetCenter);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPlaneGeometry(); \
	friend struct Z_Construct_UClass_UARPlaneGeometry_Statics; \
public: \
	DECLARE_CLASS(UARPlaneGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_INCLASS \
private: \
	static void StaticRegisterNativesUARPlaneGeometry(); \
	friend struct Z_Construct_UClass_UARPlaneGeometry_Statics; \
public: \
	DECLARE_CLASS(UARPlaneGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneGeometry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPlaneGeometry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneGeometry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPlaneGeometry(UARPlaneGeometry&&); \
	NO_API UARPlaneGeometry(const UARPlaneGeometry&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneGeometry() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPlaneGeometry(UARPlaneGeometry&&); \
	NO_API UARPlaneGeometry(const UARPlaneGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPlaneGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Orientation() { return STRUCT_OFFSET(UARPlaneGeometry, Orientation); } \
	FORCEINLINE static uint32 __PPO__Center() { return STRUCT_OFFSET(UARPlaneGeometry, Center); } \
	FORCEINLINE static uint32 __PPO__Extent() { return STRUCT_OFFSET(UARPlaneGeometry, Extent); } \
	FORCEINLINE static uint32 __PPO__BoundaryPolygon() { return STRUCT_OFFSET(UARPlaneGeometry, BoundaryPolygon); } \
	FORCEINLINE static uint32 __PPO__SubsumedBy() { return STRUCT_OFFSET(UARPlaneGeometry, SubsumedBy); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_129_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPlaneGeometry>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedPoint(); \
	friend struct Z_Construct_UClass_UARTrackedPoint_Statics; \
public: \
	DECLARE_CLASS(UARTrackedPoint, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPoint)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedPoint(); \
	friend struct Z_Construct_UClass_UARTrackedPoint_Statics; \
public: \
	DECLARE_CLASS(UARTrackedPoint, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPoint)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedPoint(UARTrackedPoint&&); \
	NO_API UARTrackedPoint(const UARTrackedPoint&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPoint() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedPoint(UARTrackedPoint&&); \
	NO_API UARTrackedPoint(const UARTrackedPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedPoint)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_179_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedPoint>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEstimateSize); \
	DECLARE_FUNCTION(execGetDetectedImage);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEstimateSize); \
	DECLARE_FUNCTION(execGetDetectedImage);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedImage(); \
	friend struct Z_Construct_UClass_UARTrackedImage_Statics; \
public: \
	DECLARE_CLASS(UARTrackedImage, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedImage(); \
	friend struct Z_Construct_UClass_UARTrackedImage_Statics; \
public: \
	DECLARE_CLASS(UARTrackedImage, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedImage(UARTrackedImage&&); \
	NO_API UARTrackedImage(const UARTrackedImage&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedImage() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedImage(UARTrackedImage&&); \
	NO_API UARTrackedImage(const UARTrackedImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedImage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DetectedImage() { return STRUCT_OFFSET(UARTrackedImage, DetectedImage); } \
	FORCEINLINE static uint32 __PPO__EstimatedSize() { return STRUCT_OFFSET(UARTrackedImage, EstimatedSize); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_192_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedImage>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedQRCode(); \
	friend struct Z_Construct_UClass_UARTrackedQRCode_Statics; \
public: \
	DECLARE_CLASS(UARTrackedQRCode, UARTrackedImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedQRCode)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedQRCode(); \
	friend struct Z_Construct_UClass_UARTrackedQRCode_Statics; \
public: \
	DECLARE_CLASS(UARTrackedQRCode, UARTrackedImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedQRCode)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedQRCode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedQRCode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedQRCode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedQRCode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedQRCode(UARTrackedQRCode&&); \
	NO_API UARTrackedQRCode(const UARTrackedQRCode&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedQRCode() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedQRCode(UARTrackedQRCode&&); \
	NO_API UARTrackedQRCode(const UARTrackedQRCode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedQRCode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedQRCode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedQRCode)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_230_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedQRCode>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWorldSpaceEyeTransform); \
	DECLARE_FUNCTION(execGetLocalSpaceEyeTransform); \
	DECLARE_FUNCTION(execGetBlendShapes); \
	DECLARE_FUNCTION(execGetBlendShapeValue);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWorldSpaceEyeTransform); \
	DECLARE_FUNCTION(execGetLocalSpaceEyeTransform); \
	DECLARE_FUNCTION(execGetBlendShapes); \
	DECLARE_FUNCTION(execGetBlendShapeValue);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARFaceGeometry(); \
	friend struct Z_Construct_UClass_UARFaceGeometry_Statics; \
public: \
	DECLARE_CLASS(UARFaceGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_INCLASS \
private: \
	static void StaticRegisterNativesUARFaceGeometry(); \
	friend struct Z_Construct_UClass_UARFaceGeometry_Statics; \
public: \
	DECLARE_CLASS(UARFaceGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceGeometry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARFaceGeometry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceGeometry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARFaceGeometry(UARFaceGeometry&&); \
	NO_API UARFaceGeometry(const UARFaceGeometry&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceGeometry() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARFaceGeometry(UARFaceGeometry&&); \
	NO_API UARFaceGeometry(const UARFaceGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARFaceGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlendShapes() { return STRUCT_OFFSET(UARFaceGeometry, BlendShapes); } \
	FORCEINLINE static uint32 __PPO__LeftEyeTransform() { return STRUCT_OFFSET(UARFaceGeometry, LeftEyeTransform); } \
	FORCEINLINE static uint32 __PPO__RightEyeTransform() { return STRUCT_OFFSET(UARFaceGeometry, RightEyeTransform); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_344_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARFaceGeometry>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnvironmentCaptureTexture); \
	DECLARE_FUNCTION(execGetExtent);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnvironmentCaptureTexture); \
	DECLARE_FUNCTION(execGetExtent);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAREnvironmentCaptureProbe(); \
	friend struct Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics; \
public: \
	DECLARE_CLASS(UAREnvironmentCaptureProbe, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UAREnvironmentCaptureProbe)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_INCLASS \
private: \
	static void StaticRegisterNativesUAREnvironmentCaptureProbe(); \
	friend struct Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics; \
public: \
	DECLARE_CLASS(UAREnvironmentCaptureProbe, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UAREnvironmentCaptureProbe)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAREnvironmentCaptureProbe(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAREnvironmentCaptureProbe) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAREnvironmentCaptureProbe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentCaptureProbe); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAREnvironmentCaptureProbe(UAREnvironmentCaptureProbe&&); \
	NO_API UAREnvironmentCaptureProbe(const UAREnvironmentCaptureProbe&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAREnvironmentCaptureProbe(UAREnvironmentCaptureProbe&&); \
	NO_API UAREnvironmentCaptureProbe(const UAREnvironmentCaptureProbe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAREnvironmentCaptureProbe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentCaptureProbe); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAREnvironmentCaptureProbe)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Extent() { return STRUCT_OFFSET(UAREnvironmentCaptureProbe, Extent); } \
	FORCEINLINE static uint32 __PPO__EnvironmentCaptureTexture() { return STRUCT_OFFSET(UAREnvironmentCaptureProbe, EnvironmentCaptureTexture); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UAREnvironmentCaptureProbe>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDetectedObject);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDetectedObject);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedObject(); \
	friend struct Z_Construct_UClass_UARTrackedObject_Statics; \
public: \
	DECLARE_CLASS(UARTrackedObject, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedObject(); \
	friend struct Z_Construct_UClass_UARTrackedObject_Statics; \
public: \
	DECLARE_CLASS(UARTrackedObject, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedObject(UARTrackedObject&&); \
	NO_API UARTrackedObject(const UARTrackedObject&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedObject() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedObject(UARTrackedObject&&); \
	NO_API UARTrackedObject(const UARTrackedObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DetectedObject() { return STRUCT_OFFSET(UARTrackedObject, DetectedObject); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_437_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedObject>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTrackedPoseData);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTrackedPoseData);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedPose(); \
	friend struct Z_Construct_UClass_UARTrackedPose_Statics; \
public: \
	DECLARE_CLASS(UARTrackedPose, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPose)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedPose(); \
	friend struct Z_Construct_UClass_UARTrackedPose_Statics; \
public: \
	DECLARE_CLASS(UARTrackedPose, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPose)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPose(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedPose) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPose); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedPose(UARTrackedPose&&); \
	NO_API UARTrackedPose(const UARTrackedPose&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPose() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedPose(UARTrackedPose&&); \
	NO_API UARTrackedPose(const UARTrackedPose&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPose); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedPose)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrackedPose() { return STRUCT_OFFSET(UARTrackedPose, TrackedPose); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_459_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedPose>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetObjectClassificationAtLocation);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetObjectClassificationAtLocation);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARMeshGeometry(); \
	friend struct Z_Construct_UClass_UARMeshGeometry_Statics; \
public: \
	DECLARE_CLASS(UARMeshGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARMeshGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_INCLASS \
private: \
	static void StaticRegisterNativesUARMeshGeometry(); \
	friend struct Z_Construct_UClass_UARMeshGeometry_Statics; \
public: \
	DECLARE_CLASS(UARMeshGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARMeshGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARMeshGeometry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARMeshGeometry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARMeshGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARMeshGeometry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARMeshGeometry(UARMeshGeometry&&); \
	NO_API UARMeshGeometry(const UARMeshGeometry&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARMeshGeometry() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARMeshGeometry(UARMeshGeometry&&); \
	NO_API UARMeshGeometry(const UARMeshGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARMeshGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARMeshGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARMeshGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_480_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARMeshGeometry>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAltitudeSource); \
	DECLARE_FUNCTION(execGetAltitudeMeters); \
	DECLARE_FUNCTION(execGetLatitude); \
	DECLARE_FUNCTION(execGetLongitude);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAltitudeSource); \
	DECLARE_FUNCTION(execGetAltitudeMeters); \
	DECLARE_FUNCTION(execGetLatitude); \
	DECLARE_FUNCTION(execGetLongitude);


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGeoAnchor(); \
	friend struct Z_Construct_UClass_UARGeoAnchor_Statics; \
public: \
	DECLARE_CLASS(UARGeoAnchor, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoAnchor)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_INCLASS \
private: \
	static void StaticRegisterNativesUARGeoAnchor(); \
	friend struct Z_Construct_UClass_UARGeoAnchor_Statics; \
public: \
	DECLARE_CLASS(UARGeoAnchor, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoAnchor)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGeoAnchor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoAnchor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGeoAnchor(UARGeoAnchor&&); \
	NO_API UARGeoAnchor(const UARGeoAnchor&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoAnchor() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGeoAnchor(UARGeoAnchor&&); \
	NO_API UARGeoAnchor(const UARGeoAnchor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoAnchor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARGeoAnchor)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_502_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARGeoAnchor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h


#define FOREACH_ENUM_EAREYE(op) \
	op(EAREye::LeftEye) \
	op(EAREye::RightEye) 

enum class EAREye : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREye>();

#define FOREACH_ENUM_EARFACEBLENDSHAPE(op) \
	op(EARFaceBlendShape::EyeBlinkLeft) \
	op(EARFaceBlendShape::EyeLookDownLeft) \
	op(EARFaceBlendShape::EyeLookInLeft) \
	op(EARFaceBlendShape::EyeLookOutLeft) \
	op(EARFaceBlendShape::EyeLookUpLeft) \
	op(EARFaceBlendShape::EyeSquintLeft) \
	op(EARFaceBlendShape::EyeWideLeft) \
	op(EARFaceBlendShape::EyeBlinkRight) \
	op(EARFaceBlendShape::EyeLookDownRight) \
	op(EARFaceBlendShape::EyeLookInRight) \
	op(EARFaceBlendShape::EyeLookOutRight) \
	op(EARFaceBlendShape::EyeLookUpRight) \
	op(EARFaceBlendShape::EyeSquintRight) \
	op(EARFaceBlendShape::EyeWideRight) \
	op(EARFaceBlendShape::JawForward) \
	op(EARFaceBlendShape::JawLeft) \
	op(EARFaceBlendShape::JawRight) \
	op(EARFaceBlendShape::JawOpen) \
	op(EARFaceBlendShape::MouthClose) \
	op(EARFaceBlendShape::MouthFunnel) \
	op(EARFaceBlendShape::MouthPucker) \
	op(EARFaceBlendShape::MouthLeft) \
	op(EARFaceBlendShape::MouthRight) \
	op(EARFaceBlendShape::MouthSmileLeft) \
	op(EARFaceBlendShape::MouthSmileRight) \
	op(EARFaceBlendShape::MouthFrownLeft) \
	op(EARFaceBlendShape::MouthFrownRight) \
	op(EARFaceBlendShape::MouthDimpleLeft) \
	op(EARFaceBlendShape::MouthDimpleRight) \
	op(EARFaceBlendShape::MouthStretchLeft) \
	op(EARFaceBlendShape::MouthStretchRight) \
	op(EARFaceBlendShape::MouthRollLower) \
	op(EARFaceBlendShape::MouthRollUpper) \
	op(EARFaceBlendShape::MouthShrugLower) \
	op(EARFaceBlendShape::MouthShrugUpper) \
	op(EARFaceBlendShape::MouthPressLeft) \
	op(EARFaceBlendShape::MouthPressRight) \
	op(EARFaceBlendShape::MouthLowerDownLeft) \
	op(EARFaceBlendShape::MouthLowerDownRight) \
	op(EARFaceBlendShape::MouthUpperUpLeft) \
	op(EARFaceBlendShape::MouthUpperUpRight) \
	op(EARFaceBlendShape::BrowDownLeft) \
	op(EARFaceBlendShape::BrowDownRight) \
	op(EARFaceBlendShape::BrowInnerUp) \
	op(EARFaceBlendShape::BrowOuterUpLeft) \
	op(EARFaceBlendShape::BrowOuterUpRight) \
	op(EARFaceBlendShape::CheekPuff) \
	op(EARFaceBlendShape::CheekSquintLeft) \
	op(EARFaceBlendShape::CheekSquintRight) \
	op(EARFaceBlendShape::NoseSneerLeft) \
	op(EARFaceBlendShape::NoseSneerRight) \
	op(EARFaceBlendShape::TongueOut) \
	op(EARFaceBlendShape::HeadYaw) \
	op(EARFaceBlendShape::HeadPitch) \
	op(EARFaceBlendShape::HeadRoll) \
	op(EARFaceBlendShape::LeftEyeYaw) \
	op(EARFaceBlendShape::LeftEyePitch) \
	op(EARFaceBlendShape::LeftEyeRoll) \
	op(EARFaceBlendShape::RightEyeYaw) \
	op(EARFaceBlendShape::RightEyePitch) \
	op(EARFaceBlendShape::RightEyeRoll) 

enum class EARFaceBlendShape : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceBlendShape>();

#define FOREACH_ENUM_EARFACETRACKINGDIRECTION(op) \
	op(EARFaceTrackingDirection::FaceRelative) \
	op(EARFaceTrackingDirection::FaceMirrored) 

enum class EARFaceTrackingDirection : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
