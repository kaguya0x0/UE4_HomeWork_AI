// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeQualityLevel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeQualityLevel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeQualityLevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeQualityLevel();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeQualityLevel::StaticRegisterNativesUSoundNodeQualityLevel()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeQualityLevel_NoRegister()
	{
		return USoundNodeQualityLevel::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeQualityLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedQualityLevelIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookedQualityLevelIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeQualityLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeQualityLevel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This SoundNode uses GameUserSettings AudioQualityLevel (or the editor override) to choose which branch to play\n * and at runtime will only load in to memory sound waves connected to the branch that will be selected\n */" },
		{ "DisplayName", "Quality Level" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeQualityLevel.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeQualityLevel.h" },
		{ "ToolTip", "This SoundNode uses GameUserSettings AudioQualityLevel (or the editor override) to choose which branch to play\nand at runtime will only load in to memory sound waves connected to the branch that will be selected" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeQualityLevel_Statics::NewProp_CookedQualityLevelIndex_MetaData[] = {
		{ "Comment", "// A Property to indicate which quality this node was cooked with. (INDEX_NONE if not cooked, or unset).\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeQualityLevel.h" },
		{ "ToolTip", "A Property to indicate which quality this node was cooked with. (INDEX_NONE if not cooked, or unset)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeQualityLevel_Statics::NewProp_CookedQualityLevelIndex = { "CookedQualityLevelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeQualityLevel, CookedQualityLevelIndex), METADATA_PARAMS(Z_Construct_UClass_USoundNodeQualityLevel_Statics::NewProp_CookedQualityLevelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeQualityLevel_Statics::NewProp_CookedQualityLevelIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeQualityLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeQualityLevel_Statics::NewProp_CookedQualityLevelIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeQualityLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeQualityLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeQualityLevel_Statics::ClassParams = {
		&USoundNodeQualityLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeQualityLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeQualityLevel_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeQualityLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeQualityLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeQualityLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeQualityLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeQualityLevel, 2723446304);
	template<> ENGINE_API UClass* StaticClass<USoundNodeQualityLevel>()
	{
		return USoundNodeQualityLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeQualityLevel(Z_Construct_UClass_USoundNodeQualityLevel, &USoundNodeQualityLevel::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeQualityLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeQualityLevel);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeQualityLevel)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
