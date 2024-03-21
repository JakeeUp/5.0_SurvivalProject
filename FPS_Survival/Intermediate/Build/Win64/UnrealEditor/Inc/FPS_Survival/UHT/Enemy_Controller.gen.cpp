// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Survival/Public/Enemy_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Controller() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_AEnemy_Controller();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_AEnemy_Controller_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_Survival();
// End Cross Module References
	void AEnemy_Controller::StaticRegisterNativesAEnemy_Controller()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_Controller);
	UClass* Z_Construct_UClass_AEnemy_Controller_NoRegister()
	{
		return AEnemy_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBehaviorTreeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBehaviorTreeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBehaviorTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Survival,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemy_Controller.h" },
		{ "ModuleRelativePath", "Public/Enemy_Controller.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTreeComponent_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//treee comps\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy_Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "treee comps" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTreeComponent = { "m_pBehaviorTreeComponent", nullptr, (EPropertyFlags)0x001000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_Controller, m_pBehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTreeComponent_MetaData), Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTreeComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Enemy_Controller.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTree = { "m_pBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_Controller, m_pBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTree_MetaData), Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTree_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTreeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Controller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Controller_Statics::ClassParams = {
		&AEnemy_Controller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemy_Controller()
	{
		if (!Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton, Z_Construct_UClass_AEnemy_Controller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton;
	}
	template<> FPS_SURVIVAL_API UClass* StaticClass<AEnemy_Controller>()
	{
		return AEnemy_Controller::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Controller);
	AEnemy_Controller::~AEnemy_Controller() {}
	struct Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_Enemy_Controller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_Enemy_Controller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_Controller, AEnemy_Controller::StaticClass, TEXT("AEnemy_Controller"), &Z_Registration_Info_UClass_AEnemy_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_Controller), 386348349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_Enemy_Controller_h_3171120827(TEXT("/Script/FPS_Survival"),
		Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_Enemy_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_Enemy_Controller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
