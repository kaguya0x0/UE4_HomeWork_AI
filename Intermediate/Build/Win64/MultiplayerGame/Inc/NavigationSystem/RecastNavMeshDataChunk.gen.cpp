// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavMesh/RecastNavMeshDataChunk.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastNavMeshDataChunk() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_URecastNavMeshDataChunk_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_URecastNavMeshDataChunk();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void URecastNavMeshDataChunk::StaticRegisterNativesURecastNavMeshDataChunk()
	{
	}
	UClass* Z_Construct_UClass_URecastNavMeshDataChunk_NoRegister()
	{
		return URecastNavMeshDataChunk::StaticClass();
	}
	struct Z_Construct_UClass_URecastNavMeshDataChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecastNavMeshDataChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationDataChunk,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecastNavMeshDataChunk_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * \n */" },
		{ "IncludePath", "NavMesh/RecastNavMeshDataChunk.h" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMeshDataChunk.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecastNavMeshDataChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecastNavMeshDataChunk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URecastNavMeshDataChunk_Statics::ClassParams = {
		&URecastNavMeshDataChunk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URecastNavMeshDataChunk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URecastNavMeshDataChunk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecastNavMeshDataChunk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URecastNavMeshDataChunk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URecastNavMeshDataChunk, 2842346630);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<URecastNavMeshDataChunk>()
	{
		return URecastNavMeshDataChunk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URecastNavMeshDataChunk(Z_Construct_UClass_URecastNavMeshDataChunk, &URecastNavMeshDataChunk::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("URecastNavMeshDataChunk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecastNavMeshDataChunk);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URecastNavMeshDataChunk)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
