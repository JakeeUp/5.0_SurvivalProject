// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPS_SurvivalProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPS_SURVIVAL_FPS_SurvivalProjectile_generated_h
#error "FPS_SurvivalProjectile.generated.h already included, missing '#pragma once' in FPS_SurvivalProjectile.h"
#endif
#define FPS_SURVIVAL_FPS_SurvivalProjectile_generated_h

#define FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_SPARSE_DATA
#define FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_ACCESSORS
#define FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_SurvivalProjectile(); \
	friend struct Z_Construct_UClass_AFPS_SurvivalProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPS_SurvivalProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Survival"), NO_API) \
	DECLARE_SERIALIZER(AFPS_SurvivalProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_SurvivalProjectile(AFPS_SurvivalProjectile&&); \
	NO_API AFPS_SurvivalProjectile(const AFPS_SurvivalProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_SurvivalProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_SurvivalProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_SurvivalProjectile) \
	NO_API virtual ~AFPS_SurvivalProjectile();


#define FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_12_PROLOG
#define FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_SPARSE_DATA \
	FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_ACCESSORS \
	FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_SURVIVAL_API UClass* StaticClass<class AFPS_SurvivalProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_UE_5_0_Project_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
