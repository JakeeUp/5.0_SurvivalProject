// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Survival/FPS_SurvivalCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_SurvivalCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_AFPS_SurvivalCharacter();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_AFPS_SurvivalCharacter_NoRegister();
	FPS_SURVIVAL_API UFunction* Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_Survival();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPS_Survival, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem)
{
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AFPS_SurvivalCharacter::execHandleOnMontageEnd)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_a_pMontage);
		P_GET_UBOOL(Z_Param_a_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnMontageEnd(Z_Param_a_pMontage,Z_Param_a_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPS_SurvivalCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPS_SurvivalCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void AFPS_SurvivalCharacter::StaticRegisterNativesAFPS_SurvivalCharacter()
	{
		UClass* Class = AFPS_SurvivalCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasRifle", &AFPS_SurvivalCharacter::execGetHasRifle },
			{ "HandleOnMontageEnd", &AFPS_SurvivalCharacter::execHandleOnMontageEnd },
			{ "SetHasRifle", &AFPS_SurvivalCharacter::execSetHasRifle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics
	{
		struct FPS_SurvivalCharacter_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPS_SurvivalCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPS_SurvivalCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for the bool */" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPS_SurvivalCharacter, nullptr, "GetHasRifle", nullptr, nullptr, Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::FPS_SurvivalCharacter_eventGetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::FPS_SurvivalCharacter_eventGetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics
	{
		struct FPS_SurvivalCharacter_eventHandleOnMontageEnd_Parms
		{
			UAnimMontage* a_pMontage;
			bool a_bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_a_pMontage;
		static void NewProp_a_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_a_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::NewProp_a_pMontage = { "a_pMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPS_SurvivalCharacter_eventHandleOnMontageEnd_Parms, a_pMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::NewProp_a_bInterrupted_SetBit(void* Obj)
	{
		((FPS_SurvivalCharacter_eventHandleOnMontageEnd_Parms*)Obj)->a_bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::NewProp_a_bInterrupted = { "a_bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPS_SurvivalCharacter_eventHandleOnMontageEnd_Parms), &Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::NewProp_a_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::NewProp_a_pMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::NewProp_a_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPS_SurvivalCharacter, nullptr, "HandleOnMontageEnd", nullptr, nullptr, Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::FPS_SurvivalCharacter_eventHandleOnMontageEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::FPS_SurvivalCharacter_eventHandleOnMontageEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics
	{
		struct FPS_SurvivalCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((FPS_SurvivalCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPS_SurvivalCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter to set the bool */" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter to set the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPS_SurvivalCharacter, nullptr, "SetHasRifle", nullptr, nullptr, Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::FPS_SurvivalCharacter_eventSetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::FPS_SurvivalCharacter_eventSetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPS_SurvivalCharacter);
	UClass* Z_Construct_UClass_AFPS_SurvivalCharacter_NoRegister()
	{
		return AFPS_SurvivalCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_SurvivalCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_cPistol_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_m_cPistol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonSpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonSpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_cPlayerHud_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_m_cPlayerHud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pReloadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pReloadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pShootMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pShootMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_totalAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_totalAmmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Survival,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPS_SurvivalCharacter_GetHasRifle, "GetHasRifle" }, // 2453349882
		{ &Z_Construct_UFunction_AFPS_SurvivalCharacter_HandleOnMontageEnd, "HandleOnMontageEnd" }, // 455416840
		{ &Z_Construct_UFunction_AFPS_SurvivalCharacter_SetHasRifle, "SetHasRifle" }, // 1142849608
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPS_SurvivalCharacter.h" },
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_cPistol_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_cPistol = { "m_cPistol", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, m_cPistol), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_cPistol_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_cPistol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_FirstPersonSpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person SpringArm */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person SpringArm" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_FirstPersonSpringArmComponent = { "FirstPersonSpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, FirstPersonSpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_FirstPersonSpringArmComponent_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_FirstPersonSpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_ReloadAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_ReloadAction_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_ReloadAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_MainAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_MainAction = { "MainAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, MainAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_MainAction_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_MainAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_cPlayerHud_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/****************************************************/" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_cPlayerHud = { "m_cPlayerHud", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, m_cPlayerHud), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_cPlayerHud_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_cPlayerHud_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
#endif
	};
#endif
	void Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((AFPS_SurvivalCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPS_SurvivalCharacter), &Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_bHasRifle_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_bHasRifle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_pReloadMontage_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//reload montage\n" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "reload montage" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_pReloadMontage = { "m_pReloadMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, m_pReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_pReloadMontage_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_pReloadMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_pShootMontage_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//fire montage\n" },
#endif
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "fire montage" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_pShootMontage = { "m_pShootMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, m_pShootMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_pShootMontage_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_pShootMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, OnUseItem), Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_OnUseItem_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_OnUseItem_MetaData) }; // 2299827336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_fHealth_MetaData[] = {
		{ "Category", "FPS_SurvivalCharacter" },
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_fHealth = { "m_fHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, m_fHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_fHealth_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_fHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_currentAmmo_MetaData[] = {
		{ "Category", "FPS_SurvivalCharacter" },
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_currentAmmo = { "currentAmmo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, currentAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_currentAmmo_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_currentAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_totalAmmo_MetaData[] = {
		{ "Category", "FPS_SurvivalCharacter" },
		{ "ModuleRelativePath", "FPS_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_totalAmmo = { "totalAmmo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_SurvivalCharacter, totalAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_totalAmmo_MetaData), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_totalAmmo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_cPistol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_FirstPersonSpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_ReloadAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_MainAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_cPlayerHud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_bHasRifle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_pReloadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_pShootMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_OnUseItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_m_fHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_currentAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::NewProp_totalAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_SurvivalCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::ClassParams = {
		&AFPS_SurvivalCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFPS_SurvivalCharacter()
	{
		if (!Z_Registration_Info_UClass_AFPS_SurvivalCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_SurvivalCharacter.OuterSingleton, Z_Construct_UClass_AFPS_SurvivalCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPS_SurvivalCharacter.OuterSingleton;
	}
	template<> FPS_SURVIVAL_API UClass* StaticClass<AFPS_SurvivalCharacter>()
	{
		return AFPS_SurvivalCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_SurvivalCharacter);
	AFPS_SurvivalCharacter::~AFPS_SurvivalCharacter() {}
	struct Z_CompiledInDeferFile_FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_SurvivalCharacter, AFPS_SurvivalCharacter::StaticClass, TEXT("AFPS_SurvivalCharacter"), &Z_Registration_Info_UClass_AFPS_SurvivalCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_SurvivalCharacter), 1561063202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalCharacter_h_2997379391(TEXT("/Script/FPS_Survival"),
		Z_CompiledInDeferFile_FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
