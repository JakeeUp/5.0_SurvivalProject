// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPS_SURVIVAL_FPS_SurvivalProjectile_generated_h
#error "FPS_SurvivalProjectile.generated.h already included, missing '#pragma once' in FPS_SurvivalProjectile.h"
#endif
#define FPS_SURVIVAL_FPS_SurvivalProjectile_generated_h

#define FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_SPARSE_DATA
#define FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_SurvivalProjectile(); \
	friend struct Z_Construct_UClass_AFPS_SurvivalProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPS_SurvivalProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Survival"), NO_API) \
	DECLARE_SERIALIZER(AFPS_SurvivalProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_SurvivalProjectile(); \
	friend struct Z_Construct_UClass_AFPS_SurvivalProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPS_SurvivalProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Survival"), NO_API) \
	DECLARE_SERIALIZER(AFPS_SurvivalProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_SurvivalProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_SurvivalProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_SurvivalProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_SurvivalProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_SurvivalProjectile(AFPS_SurvivalProjectile&&); \
	NO_API AFPS_SurvivalProjectile(const AFPS_SurvivalProjectile&); \
public:


#define FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_SurvivalProjectile(AFPS_SurvivalProjectile&&); \
	NO_API AFPS_SurvivalProjectile(const AFPS_SurvivalProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_SurvivalProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_SurvivalProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_SurvivalProjectile)


#define FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_12_PROLOG
#define FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_SPARSE_DATA \
	FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_RPC_WRAPPERS \
	FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_INCLASS \
	FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_SPARSE_DATA \
	FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_SURVIVAL_API UClass* StaticClass<class AFPS_SurvivalProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Survival_Source_FPS_Survival_FPS_SurvivalProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
