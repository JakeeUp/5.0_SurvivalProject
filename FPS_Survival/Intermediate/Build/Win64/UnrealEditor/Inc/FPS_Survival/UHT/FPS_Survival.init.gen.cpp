// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_Survival_init() {}
	FPS_SURVIVAL_API UFunction* Z_Construct_UDelegateFunction_FPS_Survival_OnPickUp__DelegateSignature();
	FPS_SURVIVAL_API UFunction* Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPS_Survival;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPS_Survival()
	{
		if (!Z_Registration_Info_UPackage__Script_FPS_Survival.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_Survival_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_Survival_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPS_Survival",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x70194AB0,
				0x035B4413,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPS_Survival.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPS_Survival.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPS_Survival(Z_Construct_UPackage__Script_FPS_Survival, TEXT("/Script/FPS_Survival"), Z_Registration_Info_UPackage__Script_FPS_Survival, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x70194AB0, 0x035B4413));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
