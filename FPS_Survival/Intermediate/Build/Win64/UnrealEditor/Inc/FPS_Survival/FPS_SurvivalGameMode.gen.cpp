// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Survival/FPS_SurvivalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_SurvivalGameMode() {}
// Cross Module References
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_AFPS_SurvivalGameMode_NoRegister();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_AFPS_SurvivalGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPS_Survival();
// End Cross Module References
	void AFPS_SurvivalGameMode::StaticRegisterNativesAFPS_SurvivalGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPS_SurvivalGameMode);
	UClass* Z_Construct_UClass_AFPS_SurvivalGameMode_NoRegister()
	{
		return AFPS_SurvivalGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_SurvivalGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_SurvivalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Survival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_SurvivalGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPS_SurvivalGameMode.h" },
		{ "ModuleRelativePath", "FPS_SurvivalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_SurvivalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_SurvivalGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_SurvivalGameMode_Statics::ClassParams = {
		&AFPS_SurvivalGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPS_SurvivalGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_SurvivalGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPS_SurvivalGameMode()
	{
		if (!Z_Registration_Info_UClass_AFPS_SurvivalGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_SurvivalGameMode.OuterSingleton, Z_Construct_UClass_AFPS_SurvivalGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPS_SurvivalGameMode.OuterSingleton;
	}
	template<> FPS_SURVIVAL_API UClass* StaticClass<AFPS_SurvivalGameMode>()
	{
		return AFPS_SurvivalGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_SurvivalGameMode);
	struct Z_CompiledInDeferFile_FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_SurvivalGameMode, AFPS_SurvivalGameMode::StaticClass, TEXT("AFPS_SurvivalGameMode"), &Z_Registration_Info_UClass_AFPS_SurvivalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_SurvivalGameMode), 166753873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalGameMode_h_3193445659(TEXT("/Script/FPS_Survival"),
		Z_CompiledInDeferFile_FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
