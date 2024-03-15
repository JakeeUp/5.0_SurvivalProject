// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Survival/Public/FPS_Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_Weapon() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_AFPS_Weapon();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_AFPS_Weapon_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_Survival();
// End Cross Module References
	void AFPS_Weapon::StaticRegisterNativesAFPS_Weapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPS_Weapon);
	UClass* Z_Construct_UClass_AFPS_Weapon_NoRegister()
	{
		return AFPS_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pFireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pFireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pEmptySound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pEmptySound;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pEnvironmentalSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pEnvironmentalSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_pEnvironmentalSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_vMuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_vMuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pMuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pMuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iClipSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_iClipSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iMaxSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_iMaxSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Survival,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FPS_Weapon.h" },
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pMesh = { "m_pMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Weapon, m_pMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pMesh_MetaData), Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pFireSound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Weapon Sounds\n" },
#endif
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon Sounds" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pFireSound = { "m_pFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Weapon, m_pFireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pFireSound_MetaData), Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pFireSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEmptySound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEmptySound = { "m_pEmptySound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Weapon, m_pEmptySound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEmptySound_MetaData), Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEmptySound_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEnvironmentalSounds_Inner = { "m_pEnvironmentalSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEnvironmentalSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEnvironmentalSounds = { "m_pEnvironmentalSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Weapon, m_pEnvironmentalSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEnvironmentalSounds_MetaData), Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEnvironmentalSounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_vMuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Muzzle Offset\n" },
#endif
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Muzzle Offset" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_vMuzzleOffset = { "m_vMuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Weapon, m_vMuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_vMuzzleOffset_MetaData), Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_vMuzzleOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pMuzzleFlash_MetaData[] = {
		{ "Category", "SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//muzzle flash\n" },
#endif
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "muzzle flash" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pMuzzleFlash = { "m_pMuzzleFlash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Weapon, m_pMuzzleFlash), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pMuzzleFlash_MetaData), Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pMuzzleFlash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_FireMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_FireMappingContext = { "FireMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Weapon, FireMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_FireMappingContext_MetaData), Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_FireMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_FireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Weapon, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_FireAction_MetaData), Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_FireAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_iClipSize_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ammo sizes\n" },
#endif
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ammo sizes" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_iClipSize = { "m_iClipSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Weapon, m_iClipSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_iClipSize_MetaData), Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_iClipSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_iMaxSize_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/FPS_Weapon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_iMaxSize = { "m_iMaxSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Weapon, m_iMaxSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_iMaxSize_MetaData), Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_iMaxSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPS_Weapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEmptySound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEnvironmentalSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pEnvironmentalSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_vMuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_pMuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_FireMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_FireAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_iClipSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Weapon_Statics::NewProp_m_iMaxSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_Weapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_Weapon_Statics::ClassParams = {
		&AFPS_Weapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPS_Weapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPS_Weapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Weapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFPS_Weapon()
	{
		if (!Z_Registration_Info_UClass_AFPS_Weapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_Weapon.OuterSingleton, Z_Construct_UClass_AFPS_Weapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPS_Weapon.OuterSingleton;
	}
	template<> FPS_SURVIVAL_API UClass* StaticClass<AFPS_Weapon>()
	{
		return AFPS_Weapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_Weapon);
	AFPS_Weapon::~AFPS_Weapon() {}
	struct Z_CompiledInDeferFile_FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_FPS_Weapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_FPS_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_Weapon, AFPS_Weapon::StaticClass, TEXT("AFPS_Weapon"), &Z_Registration_Info_UClass_AFPS_Weapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_Weapon), 76574988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_FPS_Weapon_h_3700118835(TEXT("/Script/FPS_Survival"),
		Z_CompiledInDeferFile_FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_FPS_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_FPS_Weapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
