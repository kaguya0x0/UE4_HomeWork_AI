// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/NamedSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNamedSlot();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UNamedSlot::StaticRegisterNativesUNamedSlot()
	{
	}
	UClass* Z_Construct_UClass_UNamedSlot_NoRegister()
	{
		return UNamedSlot::StaticClass();
	}
	struct Z_Construct_UClass_UNamedSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNamedSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows you to expose an external slot for your user widget.  When others reuse your user control, \n * they can put whatever they want in this named slot.\n */" },
		{ "IncludePath", "Components/NamedSlot.h" },
		{ "ModuleRelativePath", "Public/Components/NamedSlot.h" },
		{ "ToolTip", "Allows you to expose an external slot for your user widget.  When others reuse your user control,\nthey can put whatever they want in this named slot." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNamedSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNamedSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNamedSlot_Statics::ClassParams = {
		&UNamedSlot::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNamedSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNamedSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNamedSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNamedSlot, 2348277154);
	template<> UMG_API UClass* StaticClass<UNamedSlot>()
	{
		return UNamedSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNamedSlot(Z_Construct_UClass_UNamedSlot, &UNamedSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UNamedSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
