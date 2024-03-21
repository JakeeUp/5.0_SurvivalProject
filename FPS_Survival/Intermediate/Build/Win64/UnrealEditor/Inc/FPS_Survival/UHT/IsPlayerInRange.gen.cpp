// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Survival/Public/IsPlayerInRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsPlayerInRange() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_UIsPlayerInRange();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_UIsPlayerInRange_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_Survival();
// End Cross Module References
	void UIsPlayerInRange::StaticRegisterNativesUIsPlayerInRange()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsPlayerInRange);
	UClass* Z_Construct_UClass_UIsPlayerInRange_NoRegister()
	{
		return UIsPlayerInRange::StaticClass();
	}
	struct Z_Construct_UClass_UIsPlayerInRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsPlayerInRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Survival,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInRange_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerInRange_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "IsPlayerInRange.h" },
		{ "ModuleRelativePath", "Public/IsPlayerInRange.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerInRange_Statics::NewProp_m_fRange_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//field for range\n" },
#endif
		{ "ModuleRelativePath", "Public/IsPlayerInRange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "field for range" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsPlayerInRange_Statics::NewProp_m_fRange = { "m_fRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsPlayerInRange, m_fRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInRange_Statics::NewProp_m_fRange_MetaData), Z_Construct_UClass_UIsPlayerInRange_Statics::NewProp_m_fRange_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsPlayerInRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsPlayerInRange_Statics::NewProp_m_fRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsPlayerInRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsPlayerInRange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsPlayerInRange_Statics::ClassParams = {
		&UIsPlayerInRange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIsPlayerInRange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInRange_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsPlayerInRange_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInRange_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIsPlayerInRange()
	{
		if (!Z_Registration_Info_UClass_UIsPlayerInRange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsPlayerInRange.OuterSingleton, Z_Construct_UClass_UIsPlayerInRange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsPlayerInRange.OuterSingleton;
	}
	template<> FPS_SURVIVAL_API UClass* StaticClass<UIsPlayerInRange>()
	{
		return UIsPlayerInRange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsPlayerInRange);
	UIsPlayerInRange::~UIsPlayerInRange() {}
	struct Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_IsPlayerInRange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_IsPlayerInRange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsPlayerInRange, UIsPlayerInRange::StaticClass, TEXT("UIsPlayerInRange"), &Z_Registration_Info_UClass_UIsPlayerInRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsPlayerInRange), 2200991118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_IsPlayerInRange_h_3103372473(TEXT("/Script/FPS_Survival"),
		Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_IsPlayerInRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_IsPlayerInRange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
