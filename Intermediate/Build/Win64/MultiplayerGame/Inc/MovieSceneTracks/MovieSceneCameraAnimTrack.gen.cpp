// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/MovieSceneCameraAnimTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraAnimTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraAnimTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraAnimTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
// End Cross Module References
	void UMovieSceneCameraAnimTrack::StaticRegisterNativesUMovieSceneCameraAnimTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraAnimTrack_NoRegister()
	{
		return UMovieSceneCameraAnimTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnimSections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnimSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraAnimSections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tracks/MovieSceneCameraAnimTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraAnimTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::NewProp_CameraAnimSections_Inner = { "CameraAnimSections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::NewProp_CameraAnimSections_MetaData[] = {
		{ "Comment", "/** List of all sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraAnimTrack.h" },
		{ "ToolTip", "List of all sections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::NewProp_CameraAnimSections = { "CameraAnimSections", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimTrack, CameraAnimSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::NewProp_CameraAnimSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::NewProp_CameraAnimSections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::NewProp_CameraAnimSections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::NewProp_CameraAnimSections,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneCameraAnimTrack, IMovieSceneTrackTemplateProducer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraAnimTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::ClassParams = {
		&UMovieSceneCameraAnimTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraAnimTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCameraAnimTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCameraAnimTrack, 535446037);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraAnimTrack>()
	{
		return UMovieSceneCameraAnimTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraAnimTrack(Z_Construct_UClass_UMovieSceneCameraAnimTrack, &UMovieSceneCameraAnimTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraAnimTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraAnimTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
