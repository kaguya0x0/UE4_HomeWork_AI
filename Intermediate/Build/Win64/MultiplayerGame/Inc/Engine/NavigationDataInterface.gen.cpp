// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationDataInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavigationDataInterface::StaticRegisterNativesUNavigationDataInterface()
	{
	}
	UClass* Z_Construct_UClass_UNavigationDataInterface_NoRegister()
	{
		return UNavigationDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationDataInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavigationDataInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationDataInterface_Statics::ClassParams = {
		&UNavigationDataInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationDataInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationDataInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationDataInterface, 1441273015);
	template<> ENGINE_API UClass* StaticClass<UNavigationDataInterface>()
	{
		return UNavigationDataInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationDataInterface(Z_Construct_UClass_UNavigationDataInterface, &UNavigationDataInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationDataInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationDataInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
