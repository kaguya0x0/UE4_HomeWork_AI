// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeController() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventInstigatedAnyDamageSignature_Parms
		{
			float Damage;
			const UDamageType* DamageType;
			AActor* DamagedActor;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventInstigatedAnyDamageSignature_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventInstigatedAnyDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventInstigatedAnyDamageSignature_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventInstigatedAnyDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "InstigatedAnyDamageSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventInstigatedAnyDamageSignature_Parms), Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AController::execResetIgnoreInputFlags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetIgnoreInputFlags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execIsLookInputIgnored)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLookInputIgnored();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execResetIgnoreLookInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetIgnoreLookInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execSetIgnoreLookInput)
	{
		P_GET_UBOOL(Z_Param_bNewLookInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoreLookInput(Z_Param_bNewLookInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execIsMoveInputIgnored)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMoveInputIgnored();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execResetIgnoreMoveInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetIgnoreMoveInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execSetIgnoreMoveInput)
	{
		P_GET_UBOOL(Z_Param_bNewMoveInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoreMoveInput(Z_Param_bNewMoveInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execStopMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execUnPossess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnPossess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execPossess)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Possess(Z_Param_InPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execIsLocalController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execIsLocalPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execIsPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execGetDesiredRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execGetViewTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetViewTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execK2_GetPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->K2_GetPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execClientSetRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_GET_UBOOL(Z_Param_bResetCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientSetRotation_Validate(Z_Param_NewRotation,Z_Param_bResetCamera))
		{
			RPC_ValidateFailed(TEXT("ClientSetRotation_Validate"));
			return;
		}
		P_THIS->ClientSetRotation_Implementation(Z_Param_NewRotation,Z_Param_bResetCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execClientSetLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientSetLocation_Validate(Z_Param_NewLocation,Z_Param_NewRotation))
		{
			RPC_ValidateFailed(TEXT("ClientSetLocation_Validate"));
			return;
		}
		P_THIS->ClientSetLocation_Implementation(Z_Param_NewLocation,Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execCastToPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->CastToPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execOnRep_PlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execOnRep_Pawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Pawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execLineOfSightTo)
	{
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_STRUCT(FVector,Z_Param_ViewPoint);
		P_GET_UBOOL(Z_Param_bAlternateChecks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LineOfSightTo(Z_Param_Other,Z_Param_ViewPoint,Z_Param_bAlternateChecks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execSetInitialLocationAndRotation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitialLocationAndRotation(Z_Param_Out_NewLocation,Z_Param_Out_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execSetControlRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlRotation(Z_Param_Out_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AController::execGetControlRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetControlRotation();
		P_NATIVE_END;
	}
	static FName NAME_AController_ClientSetLocation = FName(TEXT("ClientSetLocation"));
	void AController::ClientSetLocation(FVector NewLocation, FRotator NewRotation)
	{
		Controller_eventClientSetLocation_Parms Parms;
		Parms.NewLocation=NewLocation;
		Parms.NewRotation=NewRotation;
		ProcessEvent(FindFunctionChecked(NAME_AController_ClientSetLocation),&Parms);
	}
	static FName NAME_AController_ClientSetRotation = FName(TEXT("ClientSetRotation"));
	void AController::ClientSetRotation(FRotator NewRotation, bool bResetCamera)
	{
		Controller_eventClientSetRotation_Parms Parms;
		Parms.NewRotation=NewRotation;
		Parms.bResetCamera=bResetCamera ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AController_ClientSetRotation),&Parms);
	}
	static FName NAME_AController_ReceiveInstigatedAnyDamage = FName(TEXT("ReceiveInstigatedAnyDamage"));
	void AController::ReceiveInstigatedAnyDamage(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser)
	{
		Controller_eventReceiveInstigatedAnyDamage_Parms Parms;
		Parms.Damage=Damage;
		Parms.DamageType=DamageType;
		Parms.DamagedActor=DamagedActor;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AController_ReceiveInstigatedAnyDamage),&Parms);
	}
	static FName NAME_AController_ReceivePossess = FName(TEXT("ReceivePossess"));
	void AController::ReceivePossess(APawn* PossessedPawn)
	{
		Controller_eventReceivePossess_Parms Parms;
		Parms.PossessedPawn=PossessedPawn;
		ProcessEvent(FindFunctionChecked(NAME_AController_ReceivePossess),&Parms);
	}
	static FName NAME_AController_ReceiveUnPossess = FName(TEXT("ReceiveUnPossess"));
	void AController::ReceiveUnPossess(APawn* UnpossessedPawn)
	{
		Controller_eventReceiveUnPossess_Parms Parms;
		Parms.UnpossessedPawn=UnpossessedPawn;
		ProcessEvent(FindFunctionChecked(NAME_AController_ReceiveUnPossess),&Parms);
	}
	void AController::StaticRegisterNativesAController()
	{
		UClass* Class = AController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CastToPlayerController", &AController::execCastToPlayerController },
			{ "ClientSetLocation", &AController::execClientSetLocation },
			{ "ClientSetRotation", &AController::execClientSetRotation },
			{ "GetControlRotation", &AController::execGetControlRotation },
			{ "GetDesiredRotation", &AController::execGetDesiredRotation },
			{ "GetViewTarget", &AController::execGetViewTarget },
			{ "IsLocalController", &AController::execIsLocalController },
			{ "IsLocalPlayerController", &AController::execIsLocalPlayerController },
			{ "IsLookInputIgnored", &AController::execIsLookInputIgnored },
			{ "IsMoveInputIgnored", &AController::execIsMoveInputIgnored },
			{ "IsPlayerController", &AController::execIsPlayerController },
			{ "K2_GetPawn", &AController::execK2_GetPawn },
			{ "LineOfSightTo", &AController::execLineOfSightTo },
			{ "OnRep_Pawn", &AController::execOnRep_Pawn },
			{ "OnRep_PlayerState", &AController::execOnRep_PlayerState },
			{ "Possess", &AController::execPossess },
			{ "ResetIgnoreInputFlags", &AController::execResetIgnoreInputFlags },
			{ "ResetIgnoreLookInput", &AController::execResetIgnoreLookInput },
			{ "ResetIgnoreMoveInput", &AController::execResetIgnoreMoveInput },
			{ "SetControlRotation", &AController::execSetControlRotation },
			{ "SetIgnoreLookInput", &AController::execSetIgnoreLookInput },
			{ "SetIgnoreMoveInput", &AController::execSetIgnoreMoveInput },
			{ "SetInitialLocationAndRotation", &AController::execSetInitialLocationAndRotation },
			{ "StopMovement", &AController::execStopMovement },
			{ "UnPossess", &AController::execUnPossess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AController_CastToPlayerController_Statics
	{
		struct Controller_eventCastToPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AController_CastToPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventCastToPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_CastToPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_CastToPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_CastToPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use standard Cast To node instead." },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_CastToPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "CastToPlayerController", nullptr, nullptr, sizeof(Controller_eventCastToPlayerController_Parms), Z_Construct_UFunction_AController_CastToPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_CastToPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_CastToPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_CastToPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_CastToPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_CastToPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_ClientSetLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AController_ClientSetLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventClientSetLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AController_ClientSetLocation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventClientSetLocation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_ClientSetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_ClientSetLocation_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_ClientSetLocation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_ClientSetLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replicated function to set the pawn location and rotation, allowing server to force (ex. teleports). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Replicated function to set the pawn location and rotation, allowing server to force (ex. teleports)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_ClientSetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "ClientSetLocation", nullptr, nullptr, sizeof(Controller_eventClientSetLocation_Parms), Z_Construct_UFunction_AController_ClientSetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ClientSetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81820CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_ClientSetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ClientSetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_ClientSetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_ClientSetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_ClientSetRotation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static void NewProp_bResetCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AController_ClientSetRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventClientSetRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AController_ClientSetRotation_Statics::NewProp_bResetCamera_SetBit(void* Obj)
	{
		((Controller_eventClientSetRotation_Parms*)Obj)->bResetCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AController_ClientSetRotation_Statics::NewProp_bResetCamera = { "bResetCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Controller_eventClientSetRotation_Parms), &Z_Construct_UFunction_AController_ClientSetRotation_Statics::NewProp_bResetCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_ClientSetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_ClientSetRotation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_ClientSetRotation_Statics::NewProp_bResetCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_ClientSetRotation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replicated function to set the pawn rotation, allowing the server to force. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Replicated function to set the pawn rotation, allowing the server to force." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_ClientSetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "ClientSetRotation", nullptr, nullptr, sizeof(Controller_eventClientSetRotation_Parms), Z_Construct_UFunction_AController_ClientSetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ClientSetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81820CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_ClientSetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ClientSetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_ClientSetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_ClientSetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_GetControlRotation_Statics
	{
		struct Controller_eventGetControlRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AController_GetControlRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventGetControlRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_GetControlRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_GetControlRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_GetControlRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Get the control rotation. This is the full aim rotation, which may be different than a camera orientation (for example in a third person view),\n\x09 * and may differ from the rotation of the controlled Pawn (which may choose not to visually pitch or roll, for example).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Get the control rotation. This is the full aim rotation, which may be different than a camera orientation (for example in a third person view),\nand may differ from the rotation of the controlled Pawn (which may choose not to visually pitch or roll, for example)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_GetControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "GetControlRotation", nullptr, nullptr, sizeof(Controller_eventGetControlRotation_Parms), Z_Construct_UFunction_AController_GetControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_GetControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_GetControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_GetControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_GetControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_GetControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_GetDesiredRotation_Statics
	{
		struct Controller_eventGetDesiredRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AController_GetDesiredRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventGetDesiredRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_GetDesiredRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_GetDesiredRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_GetDesiredRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Get the desired pawn target rotation */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Get the desired pawn target rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_GetDesiredRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "GetDesiredRotation", nullptr, nullptr, sizeof(Controller_eventGetDesiredRotation_Parms), Z_Construct_UFunction_AController_GetDesiredRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_GetDesiredRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_GetDesiredRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_GetDesiredRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_GetDesiredRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_GetDesiredRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_GetViewTarget_Statics
	{
		struct Controller_eventGetViewTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AController_GetViewTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventGetViewTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_GetViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_GetViewTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_GetViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Get the actor the controller is looking at */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Get the actor the controller is looking at" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_GetViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "GetViewTarget", nullptr, nullptr, sizeof(Controller_eventGetViewTarget_Parms), Z_Construct_UFunction_AController_GetViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_GetViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_GetViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_GetViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_GetViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_GetViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_IsLocalController_Statics
	{
		struct Controller_eventIsLocalController_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AController_IsLocalController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Controller_eventIsLocalController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AController_IsLocalController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Controller_eventIsLocalController_Parms), &Z_Construct_UFunction_AController_IsLocalController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_IsLocalController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_IsLocalController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_IsLocalController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Returns whether this Controller is a local controller.\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Returns whether this Controller is a local controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_IsLocalController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "IsLocalController", nullptr, nullptr, sizeof(Controller_eventIsLocalController_Parms), Z_Construct_UFunction_AController_IsLocalController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_IsLocalController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_IsLocalController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_IsLocalController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_IsLocalController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_IsLocalController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_IsLocalPlayerController_Statics
	{
		struct Controller_eventIsLocalPlayerController_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Controller_eventIsLocalPlayerController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Controller_eventIsLocalPlayerController_Parms), &Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Returns whether this Controller is a locally controlled PlayerController.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Returns whether this Controller is a locally controlled PlayerController." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "IsLocalPlayerController", nullptr, nullptr, sizeof(Controller_eventIsLocalPlayerController_Parms), Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_IsLocalPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_IsLocalPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_IsLookInputIgnored_Statics
	{
		struct Controller_eventIsLookInputIgnored_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Controller_eventIsLookInputIgnored_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Controller_eventIsLookInputIgnored_Parms), &Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Returns true if look input is ignored. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Returns true if look input is ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "IsLookInputIgnored", nullptr, nullptr, sizeof(Controller_eventIsLookInputIgnored_Parms), Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_IsLookInputIgnored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_IsLookInputIgnored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics
	{
		struct Controller_eventIsMoveInputIgnored_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Controller_eventIsMoveInputIgnored_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Controller_eventIsMoveInputIgnored_Parms), &Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Returns true if movement input is ignored. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Returns true if movement input is ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "IsMoveInputIgnored", nullptr, nullptr, sizeof(Controller_eventIsMoveInputIgnored_Parms), Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_IsMoveInputIgnored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_IsMoveInputIgnored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_IsPlayerController_Statics
	{
		struct Controller_eventIsPlayerController_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AController_IsPlayerController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Controller_eventIsPlayerController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AController_IsPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Controller_eventIsPlayerController_Parms), &Z_Construct_UFunction_AController_IsPlayerController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_IsPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_IsPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_IsPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Returns whether this Controller is a PlayerController.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Returns whether this Controller is a PlayerController." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_IsPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "IsPlayerController", nullptr, nullptr, sizeof(Controller_eventIsPlayerController_Parms), Z_Construct_UFunction_AController_IsPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_IsPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_IsPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_IsPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_IsPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_IsPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_K2_GetPawn_Statics
	{
		struct Controller_eventK2_GetPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AController_K2_GetPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventK2_GetPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_K2_GetPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_K2_GetPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_K2_GetPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Return the Pawn that is currently 'controlled' by this PlayerController */" },
		{ "DisplayName", "Get Controlled Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ScriptName", "GetControlledPawn" },
		{ "ToolTip", "Return the Pawn that is currently 'controlled' by this PlayerController" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_K2_GetPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "K2_GetPawn", nullptr, nullptr, sizeof(Controller_eventK2_GetPawn_Parms), Z_Construct_UFunction_AController_K2_GetPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_K2_GetPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_K2_GetPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_K2_GetPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_K2_GetPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_K2_GetPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_LineOfSightTo_Statics
	{
		struct Controller_eventLineOfSightTo_Parms
		{
			const AActor* Other;
			FVector ViewPoint;
			bool bAlternateChecks;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewPoint;
		static void NewProp_bAlternateChecks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlternateChecks;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventLineOfSightTo_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_Other_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_ViewPoint = { "ViewPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventLineOfSightTo_Parms, ViewPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_bAlternateChecks_SetBit(void* Obj)
	{
		((Controller_eventLineOfSightTo_Parms*)Obj)->bAlternateChecks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_bAlternateChecks = { "bAlternateChecks", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Controller_eventLineOfSightTo_Parms), &Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_bAlternateChecks_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Controller_eventLineOfSightTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Controller_eventLineOfSightTo_Parms), &Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_LineOfSightTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_ViewPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_bAlternateChecks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_LineOfSightTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_LineOfSightTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controller" },
		{ "Comment", "/**\n\x09 * Checks line to center and top of other actor\n\x09 * @param Other is the actor whose visibility is being checked.\n\x09 * @param ViewPoint is eye position visibility is being checked from.  If vect(0,0,0) passed in, uses current viewtarget's eye position.\n\x09 * @param bAlternateChecks used only in AIController implementation\n\x09 * @return true if controller's pawn can see Other actor.\n\x09 */" },
		{ "CPP_Default_bAlternateChecks", "false" },
		{ "CPP_Default_ViewPoint", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Checks line to center and top of other actor\n@param Other is the actor whose visibility is being checked.\n@param ViewPoint is eye position visibility is being checked from.  If vect(0,0,0) passed in, uses current viewtarget's eye position.\n@param bAlternateChecks used only in AIController implementation\n@return true if controller's pawn can see Other actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_LineOfSightTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "LineOfSightTo", nullptr, nullptr, sizeof(Controller_eventLineOfSightTo_Parms), Z_Construct_UFunction_AController_LineOfSightTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_LineOfSightTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_LineOfSightTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_LineOfSightTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_LineOfSightTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_LineOfSightTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_OnRep_Pawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_OnRep_Pawn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replication Notification Callbacks */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_OnRep_Pawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "OnRep_Pawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_OnRep_Pawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_OnRep_Pawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_OnRep_Pawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_OnRep_Pawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_OnRep_PlayerState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_OnRep_PlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_OnRep_PlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "OnRep_PlayerState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_OnRep_PlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_OnRep_PlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_OnRep_PlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_OnRep_PlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_Possess_Statics
	{
		struct Controller_eventPossess_Parms
		{
			APawn* InPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AController_Possess_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventPossess_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_Possess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_Possess_Statics::NewProp_InPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_Possess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Handles attaching this controller to the specified pawn.\n\x09 * Only runs on the network authority (where HasAuthority() returns true).\n\x09 * Derived native classes can override OnPossess to filter the specified pawn.\n\x09 * When possessed pawn changed, blueprint class gets notified by ReceivePossess\n\x09 * and OnNewPawn delegate is broadcasted.\n\x09 * @param InPawn The Pawn to be possessed.\n\x09 * @see HasAuthority, OnPossess, ReceivePossess\n\x09 */" },
		{ "Keywords", "set controller" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Handles attaching this controller to the specified pawn.\nOnly runs on the network authority (where HasAuthority() returns true).\nDerived native classes can override OnPossess to filter the specified pawn.\nWhen possessed pawn changed, blueprint class gets notified by ReceivePossess\nand OnNewPawn delegate is broadcasted.\n@param InPawn The Pawn to be possessed.\n@see HasAuthority, OnPossess, ReceivePossess" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_Possess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "Possess", nullptr, nullptr, sizeof(Controller_eventPossess_Parms), Z_Construct_UFunction_AController_Possess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_Possess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_Possess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_Possess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_Possess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_Possess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventReceiveInstigatedAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventReceiveInstigatedAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventReceiveInstigatedAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventReceiveInstigatedAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when this controller instigates ANY damage */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Event when this controller instigates ANY damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "ReceiveInstigatedAnyDamage", nullptr, nullptr, sizeof(Controller_eventReceiveInstigatedAnyDamage_Parms), Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_ReceivePossess_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PossessedPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AController_ReceivePossess_Statics::NewProp_PossessedPawn = { "PossessedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventReceivePossess_Parms, PossessedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_ReceivePossess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_ReceivePossess_Statics::NewProp_PossessedPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_ReceivePossess_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Blueprint implementable event to react to the controller possessing a pawn */" },
		{ "DisplayName", "On Possess" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Blueprint implementable event to react to the controller possessing a pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_ReceivePossess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "ReceivePossess", nullptr, nullptr, sizeof(Controller_eventReceivePossess_Parms), Z_Construct_UFunction_AController_ReceivePossess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ReceivePossess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_ReceivePossess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ReceivePossess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_ReceivePossess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_ReceivePossess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_ReceiveUnPossess_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnpossessedPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AController_ReceiveUnPossess_Statics::NewProp_UnpossessedPawn = { "UnpossessedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventReceiveUnPossess_Parms, UnpossessedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_ReceiveUnPossess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_ReceiveUnPossess_Statics::NewProp_UnpossessedPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_ReceiveUnPossess_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Blueprint implementable event to react to the controller unpossessing a pawn */" },
		{ "DisplayName", "On UnPossess" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Blueprint implementable event to react to the controller unpossessing a pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_ReceiveUnPossess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "ReceiveUnPossess", nullptr, nullptr, sizeof(Controller_eventReceiveUnPossess_Parms), Z_Construct_UFunction_AController_ReceiveUnPossess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ReceiveUnPossess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_ReceiveUnPossess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ReceiveUnPossess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_ReceiveUnPossess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_ReceiveUnPossess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_ResetIgnoreInputFlags_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_ResetIgnoreInputFlags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Reset move and look input ignore flags. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Reset move and look input ignore flags." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_ResetIgnoreInputFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "ResetIgnoreInputFlags", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_ResetIgnoreInputFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ResetIgnoreInputFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_ResetIgnoreInputFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_ResetIgnoreInputFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_ResetIgnoreLookInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_ResetIgnoreLookInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Stops ignoring look input by resetting the ignore look input state. */" },
		{ "Keywords", "ClearIgnoreLookInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Stops ignoring look input by resetting the ignore look input state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_ResetIgnoreLookInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "ResetIgnoreLookInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_ResetIgnoreLookInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ResetIgnoreLookInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_ResetIgnoreLookInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_ResetIgnoreLookInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_ResetIgnoreMoveInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_ResetIgnoreMoveInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Stops ignoring move input by resetting the ignore move input state. */" },
		{ "Keywords", "ClearIgnoreMoveInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Stops ignoring move input by resetting the ignore move input state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_ResetIgnoreMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "ResetIgnoreMoveInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_ResetIgnoreMoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_ResetIgnoreMoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_ResetIgnoreMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_ResetIgnoreMoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_SetControlRotation_Statics
	{
		struct Controller_eventSetControlRotation_Parms
		{
			FRotator NewRotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_SetControlRotation_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AController_SetControlRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventSetControlRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AController_SetControlRotation_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetControlRotation_Statics::NewProp_NewRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_SetControlRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_SetControlRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_SetControlRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "Tooltip", "Set the control rotation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_SetControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "SetControlRotation", nullptr, nullptr, sizeof(Controller_eventSetControlRotation_Parms), Z_Construct_UFunction_AController_SetControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_SetControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_SetControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_SetControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics
	{
		struct Controller_eventSetIgnoreLookInput_Parms
		{
			bool bNewLookInput;
		};
		static void NewProp_bNewLookInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLookInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::NewProp_bNewLookInput_SetBit(void* Obj)
	{
		((Controller_eventSetIgnoreLookInput_Parms*)Obj)->bNewLookInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::NewProp_bNewLookInput = { "bNewLookInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Controller_eventSetIgnoreLookInput_Parms), &Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::NewProp_bNewLookInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::NewProp_bNewLookInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Locks or unlocks look input, consecutive calls stack up and require the same amount of calls to undo, or can all be undone using ResetIgnoreLookInput.\n\x09* @param bNewLookInput\x09If true, look input is ignored. If false, input is not ignored.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Locks or unlocks look input, consecutive calls stack up and require the same amount of calls to undo, or can all be undone using ResetIgnoreLookInput.\n@param bNewLookInput  If true, look input is ignored. If false, input is not ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "SetIgnoreLookInput", nullptr, nullptr, sizeof(Controller_eventSetIgnoreLookInput_Parms), Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_SetIgnoreLookInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_SetIgnoreLookInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics
	{
		struct Controller_eventSetIgnoreMoveInput_Parms
		{
			bool bNewMoveInput;
		};
		static void NewProp_bNewMoveInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewMoveInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::NewProp_bNewMoveInput_SetBit(void* Obj)
	{
		((Controller_eventSetIgnoreMoveInput_Parms*)Obj)->bNewMoveInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::NewProp_bNewMoveInput = { "bNewMoveInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Controller_eventSetIgnoreMoveInput_Parms), &Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::NewProp_bNewMoveInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::NewProp_bNewMoveInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Locks or unlocks movement input, consecutive calls stack up and require the same amount of calls to undo, or can all be undone using ResetIgnoreMoveInput.\n\x09 * @param bNewMoveInput\x09If true, move input is ignored. If false, input is not ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Locks or unlocks movement input, consecutive calls stack up and require the same amount of calls to undo, or can all be undone using ResetIgnoreMoveInput.\n@param bNewMoveInput If true, move input is ignored. If false, input is not ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "SetIgnoreMoveInput", nullptr, nullptr, sizeof(Controller_eventSetIgnoreMoveInput_Parms), Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_SetIgnoreMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_SetIgnoreMoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics
	{
		struct Controller_eventSetInitialLocationAndRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventSetInitialLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::NewProp_NewLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Controller_eventSetInitialLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::NewProp_NewRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Set the initial location and rotation of the controller, as well as the control rotation. Typically used when the controller is first created. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Set the initial location and rotation of the controller, as well as the control rotation. Typically used when the controller is first created." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "SetInitialLocationAndRotation", nullptr, nullptr, sizeof(Controller_eventSetInitialLocationAndRotation_Parms), Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_SetInitialLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_SetInitialLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_StopMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_StopMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Aborts the move the controller is currently performing */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Aborts the move the controller is currently performing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_StopMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "StopMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_StopMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_StopMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_StopMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_StopMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AController_UnPossess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AController_UnPossess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Called to unpossess our pawn for any reason that is not the pawn being destroyed (destruction handled by PawnDestroyed()). */" },
		{ "Keywords", "set controller" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Called to unpossess our pawn for any reason that is not the pawn being destroyed (destruction handled by PawnDestroyed())." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AController_UnPossess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, nullptr, "UnPossess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AController_UnPossess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AController_UnPossess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AController_UnPossess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AController_UnPossess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AController_NoRegister()
	{
		return AController::StaticClass();
	}
	struct Z_Construct_UClass_AController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInstigatedAnyDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInstigatedAnyDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransformComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachToPawn_MetaData[];
#endif
		static void NewProp_bAttachToPawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachToPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AController_CastToPlayerController, "CastToPlayerController" }, // 2562348280
		{ &Z_Construct_UFunction_AController_ClientSetLocation, "ClientSetLocation" }, // 688714641
		{ &Z_Construct_UFunction_AController_ClientSetRotation, "ClientSetRotation" }, // 3033520997
		{ &Z_Construct_UFunction_AController_GetControlRotation, "GetControlRotation" }, // 2148907744
		{ &Z_Construct_UFunction_AController_GetDesiredRotation, "GetDesiredRotation" }, // 617705404
		{ &Z_Construct_UFunction_AController_GetViewTarget, "GetViewTarget" }, // 3722277838
		{ &Z_Construct_UFunction_AController_IsLocalController, "IsLocalController" }, // 4042234887
		{ &Z_Construct_UFunction_AController_IsLocalPlayerController, "IsLocalPlayerController" }, // 934593211
		{ &Z_Construct_UFunction_AController_IsLookInputIgnored, "IsLookInputIgnored" }, // 4194393653
		{ &Z_Construct_UFunction_AController_IsMoveInputIgnored, "IsMoveInputIgnored" }, // 3996386214
		{ &Z_Construct_UFunction_AController_IsPlayerController, "IsPlayerController" }, // 1592620364
		{ &Z_Construct_UFunction_AController_K2_GetPawn, "K2_GetPawn" }, // 2448450390
		{ &Z_Construct_UFunction_AController_LineOfSightTo, "LineOfSightTo" }, // 1911025454
		{ &Z_Construct_UFunction_AController_OnRep_Pawn, "OnRep_Pawn" }, // 2631402218
		{ &Z_Construct_UFunction_AController_OnRep_PlayerState, "OnRep_PlayerState" }, // 2265575947
		{ &Z_Construct_UFunction_AController_Possess, "Possess" }, // 247254527
		{ &Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage, "ReceiveInstigatedAnyDamage" }, // 2811176037
		{ &Z_Construct_UFunction_AController_ReceivePossess, "ReceivePossess" }, // 1853249915
		{ &Z_Construct_UFunction_AController_ReceiveUnPossess, "ReceiveUnPossess" }, // 59376048
		{ &Z_Construct_UFunction_AController_ResetIgnoreInputFlags, "ResetIgnoreInputFlags" }, // 3741338754
		{ &Z_Construct_UFunction_AController_ResetIgnoreLookInput, "ResetIgnoreLookInput" }, // 303350078
		{ &Z_Construct_UFunction_AController_ResetIgnoreMoveInput, "ResetIgnoreMoveInput" }, // 3180832807
		{ &Z_Construct_UFunction_AController_SetControlRotation, "SetControlRotation" }, // 2620591082
		{ &Z_Construct_UFunction_AController_SetIgnoreLookInput, "SetIgnoreLookInput" }, // 2310496932
		{ &Z_Construct_UFunction_AController_SetIgnoreMoveInput, "SetIgnoreMoveInput" }, // 2793159613
		{ &Z_Construct_UFunction_AController_SetInitialLocationAndRotation, "SetInitialLocationAndRotation" }, // 4270738948
		{ &Z_Construct_UFunction_AController_StopMovement, "StopMovement" }, // 3501084240
		{ &Z_Construct_UFunction_AController_UnPossess, "UnPossess" }, // 3880342348
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Controllers are non-physical actors that can possess a Pawn to control\n * its actions.  PlayerControllers are used by human players to control pawns, while\n * AIControllers implement the artificial intelligence for the pawns they control.\n * Controllers take control of a pawn using their Possess() method, and relinquish\n * control of the pawn by calling UnPossess().\n *\n * Controllers receive notifications for many of the events occurring for the Pawn they\n * are controlling.  This gives the controller the opportunity to implement the behavior\n * in response to this event, intercepting the event and superseding the Pawn's default\n * behavior.\n *\n * ControlRotation (accessed via GetControlRotation()), determines the viewing/aiming\n * direction of the controlled Pawn and is affected by input such as from a mouse or gamepad.\n * \n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/Controller.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Controllers are non-physical actors that can possess a Pawn to control\nits actions.  PlayerControllers are used by human players to control pawns, while\nAIControllers implement the artificial intelligence for the pawns they control.\nControllers take control of a pawn using their Possess() method, and relinquish\ncontrol of the pawn by calling UnPossess().\n\nControllers receive notifications for many of the events occurring for the Pawn they\nare controlling.  This gives the controller the opportunity to implement the behavior\nin response to this event, intercepting the event and superseding the Pawn's default\nbehavior.\n\nControlRotation (accessed via GetControlRotation()), determines the viewing/aiming\ndirection of the controlled Pawn and is affected by input such as from a mouse or gamepad.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AController_Statics::NewProp_PlayerState_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "/** PlayerState containing replicated information about the player using this controller (only exists for players, not NPCs). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "PlayerState containing replicated information about the player using this controller (only exists for players, not NPCs)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AController_Statics::NewProp_PlayerState = { "PlayerState", "OnRep_PlayerState", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AController, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AController_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AController_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AController_Statics::NewProp_OnInstigatedAnyDamage_MetaData[] = {
		{ "Comment", "/** Called when the controller has instigated damage in any way */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Called when the controller has instigated damage in any way" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AController_Statics::NewProp_OnInstigatedAnyDamage = { "OnInstigatedAnyDamage", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AController, OnInstigatedAnyDamage), Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AController_Statics::NewProp_OnInstigatedAnyDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AController_Statics::NewProp_OnInstigatedAnyDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AController_Statics::NewProp_StateName_MetaData[] = {
		{ "Comment", "/** Current gameplay state this controller is in */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Current gameplay state this controller is in" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AController_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AController, StateName), METADATA_PARAMS(Z_Construct_UClass_AController_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AController_Statics::NewProp_StateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AController_Statics::NewProp_Pawn_MetaData[] = {
		{ "Comment", "/** Pawn currently being controlled by this controller.  Use Pawn.Possess() to take control of a pawn */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Pawn currently being controlled by this controller.  Use Pawn.Possess() to take control of a pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AController_Statics::NewProp_Pawn = { "Pawn", "OnRep_Pawn", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AController, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AController_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AController_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AController_Statics::NewProp_Character_MetaData[] = {
		{ "Comment", "/** Character currently being controlled by this controller.  Value is same as Pawn if the controlled pawn is a character, otherwise nullptr */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Character currently being controlled by this controller.  Value is same as Pawn if the controlled pawn is a character, otherwise nullptr" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AController_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AController, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AController_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AController_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AController_Statics::NewProp_TransformComponent_MetaData[] = {
		{ "Comment", "/** Component to give controllers a transform and enable attachment if desired. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "Component to give controllers a transform and enable attachment if desired." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AController_Statics::NewProp_TransformComponent = { "TransformComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AController, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AController_Statics::NewProp_TransformComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AController_Statics::NewProp_TransformComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AController_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Comment", "/** The control rotation of the Controller. See GetControlRotation. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "The control rotation of the Controller. See GetControlRotation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AController_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AController, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AController_Statics::NewProp_ControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AController_Statics::NewProp_ControlRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AController_Statics::NewProp_bAttachToPawn_MetaData[] = {
		{ "Category", "Controller|Transform" },
		{ "Comment", "/**\n\x09 * If true, the controller location will match the possessed Pawn's location. If false, it will not be updated. Rotation will match ControlRotation in either case.\n\x09 * Since a Controller's location is normally inaccessible, this is intended mainly for purposes of being able to attach\n\x09 * an Actor that follows the possessed Pawn location, but that still has the full aim rotation (since a Pawn might\n\x09 * update only some components of the rotation).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
		{ "ToolTip", "If true, the controller location will match the possessed Pawn's location. If false, it will not be updated. Rotation will match ControlRotation in either case.\nSince a Controller's location is normally inaccessible, this is intended mainly for purposes of being able to attach\nan Actor that follows the possessed Pawn location, but that still has the full aim rotation (since a Pawn might\nupdate only some components of the rotation)." },
	};
#endif
	void Z_Construct_UClass_AController_Statics::NewProp_bAttachToPawn_SetBit(void* Obj)
	{
		((AController*)Obj)->bAttachToPawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AController_Statics::NewProp_bAttachToPawn = { "bAttachToPawn", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AController), &Z_Construct_UClass_AController_Statics::NewProp_bAttachToPawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AController_Statics::NewProp_bAttachToPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AController_Statics::NewProp_bAttachToPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AController_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AController_Statics::NewProp_OnInstigatedAnyDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AController_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AController_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AController_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AController_Statics::NewProp_TransformComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AController_Statics::NewProp_ControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AController_Statics::NewProp_bAttachToPawn,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AController, INavAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AController_Statics::ClassParams = {
		&AController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AController, 1144023652);
	template<> ENGINE_API UClass* StaticClass<AController>()
	{
		return AController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AController(Z_Construct_UClass_AController, &AController::StaticClass, TEXT("/Script/Engine"), TEXT("AController"), false, nullptr, nullptr, nullptr);

	void AController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PlayerState(TEXT("PlayerState"));
		static const FName Name_Pawn(TEXT("Pawn"));

		const bool bIsValid = true
			&& Name_PlayerState == ClassReps[(int32)ENetFields_Private::PlayerState].Property->GetFName()
			&& Name_Pawn == ClassReps[(int32)ENetFields_Private::Pawn].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
