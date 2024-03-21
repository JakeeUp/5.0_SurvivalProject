// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Survival/Public/AmmoStation.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoStation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_AAmmoStation();
	FPS_SURVIVAL_API UClass* Z_Construct_UClass_AAmmoStation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_Survival();
// End Cross Module References
	DEFINE_FUNCTION(AAmmoStation::execOnCapsuleEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_pOverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_a_pOtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_pOtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_a_iOtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleEndOverlap(Z_Param_a_pOverlappedComponent,Z_Param_a_pOtherActor,Z_Param_a_pOtherComp,Z_Param_a_iOtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoStation::execOnCapsuleBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_pOverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_a_pOtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_pOtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_a_iOtherBodyIndex);
		P_GET_UBOOL(Z_Param_a_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_a_pSweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleBeginOverlap(Z_Param_a_pOverlappedComponent,Z_Param_a_pOtherActor,Z_Param_a_pOtherComp,Z_Param_a_iOtherBodyIndex,Z_Param_a_bFromSweep,Z_Param_Out_a_pSweepResult);
		P_NATIVE_END;
	}
	void AAmmoStation::StaticRegisterNativesAAmmoStation()
	{
		UClass* Class = AAmmoStation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCapsuleBeginOverlap", &AAmmoStation::execOnCapsuleBeginOverlap },
			{ "OnCapsuleEndOverlap", &AAmmoStation::execOnCapsuleEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics
	{
		struct AmmoStation_eventOnCapsuleBeginOverlap_Parms
		{
			UPrimitiveComponent* a_pOverlappedComponent;
			AActor* a_pOtherActor;
			UPrimitiveComponent* a_pOtherComp;
			int32 a_iOtherBodyIndex;
			bool a_bFromSweep;
			FHitResult a_pSweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_pOverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_a_pOverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_a_pOtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_pOtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_a_pOtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_a_iOtherBodyIndex;
		static void NewProp_a_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_a_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_pSweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_a_pSweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOverlappedComponent = { "a_pOverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleBeginOverlap_Parms, a_pOverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOverlappedComponent_MetaData), Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOtherActor = { "a_pOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleBeginOverlap_Parms, a_pOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOtherComp = { "a_pOtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleBeginOverlap_Parms, a_pOtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOtherComp_MetaData), Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_iOtherBodyIndex = { "a_iOtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleBeginOverlap_Parms, a_iOtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_bFromSweep_SetBit(void* Obj)
	{
		((AmmoStation_eventOnCapsuleBeginOverlap_Parms*)Obj)->a_bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_bFromSweep = { "a_bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AmmoStation_eventOnCapsuleBeginOverlap_Parms), &Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pSweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pSweepResult = { "a_pSweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleBeginOverlap_Parms, a_pSweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pSweepResult_MetaData), Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pSweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pOtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_iOtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_a_pSweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BEGIN OVERLAP EVENT HANDLER\n" },
#endif
		{ "ModuleRelativePath", "Public/AmmoStation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BEGIN OVERLAP EVENT HANDLER" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoStation, nullptr, "OnCapsuleBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::AmmoStation_eventOnCapsuleBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::AmmoStation_eventOnCapsuleBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics
	{
		struct AmmoStation_eventOnCapsuleEndOverlap_Parms
		{
			UPrimitiveComponent* a_pOverlappedComponent;
			AActor* a_pOtherActor;
			UPrimitiveComponent* a_pOtherComp;
			int32 a_iOtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_pOverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_a_pOverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_a_pOtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_pOtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_a_pOtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_a_iOtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOverlappedComponent = { "a_pOverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleEndOverlap_Parms, a_pOverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOverlappedComponent_MetaData), Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOtherActor = { "a_pOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleEndOverlap_Parms, a_pOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOtherComp = { "a_pOtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleEndOverlap_Parms, a_pOtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOtherComp_MetaData), Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_iOtherBodyIndex = { "a_iOtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleEndOverlap_Parms, a_iOtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_pOtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_a_iOtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//endOverlap event handler\n" },
#endif
		{ "ModuleRelativePath", "Public/AmmoStation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "endOverlap event handler" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoStation, nullptr, "OnCapsuleEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::AmmoStation_eventOnCapsuleEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::AmmoStation_eventOnCapsuleEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmoStation);
	UClass* Z_Construct_UClass_AAmmoStation_NoRegister()
	{
		return AAmmoStation::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoStation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_M_PCapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_M_PCapsuleComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoStation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Survival,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAmmoStation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap, "OnCapsuleBeginOverlap" }, // 2286204165
		{ &Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap, "OnCapsuleEndOverlap" }, // 2229800870
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoStation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AmmoStation.h" },
		{ "ModuleRelativePath", "Public/AmmoStation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoStation_Statics::NewProp_m_pMesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ammo Station Mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmmoStation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ammo Station Mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoStation_Statics::NewProp_m_pMesh = { "m_pMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoStation, m_pMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::NewProp_m_pMesh_MetaData), Z_Construct_UClass_AAmmoStation_Statics::NewProp_m_pMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoStation_Statics::NewProp_M_PCapsuleComponent_MetaData[] = {
		{ "Category", "Trigger Capsule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Trigger Capsule Collider\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmmoStation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger Capsule Collider" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoStation_Statics::NewProp_M_PCapsuleComponent = { "M_PCapsuleComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoStation, M_PCapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::NewProp_M_PCapsuleComponent_MetaData), Z_Construct_UClass_AAmmoStation_Statics::NewProp_M_PCapsuleComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoStation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoStation_Statics::NewProp_m_pMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoStation_Statics::NewProp_M_PCapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoStation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoStation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmoStation_Statics::ClassParams = {
		&AAmmoStation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAmmoStation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmmoStation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAmmoStation()
	{
		if (!Z_Registration_Info_UClass_AAmmoStation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmoStation.OuterSingleton, Z_Construct_UClass_AAmmoStation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAmmoStation.OuterSingleton;
	}
	template<> FPS_SURVIVAL_API UClass* StaticClass<AAmmoStation>()
	{
		return AAmmoStation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoStation);
	AAmmoStation::~AAmmoStation() {}
	struct Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_AmmoStation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_AmmoStation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAmmoStation, AAmmoStation::StaticClass, TEXT("AAmmoStation"), &Z_Registration_Info_UClass_AAmmoStation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmoStation), 3555906988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_AmmoStation_h_1319507468(TEXT("/Script/FPS_Survival"),
		Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_AmmoStation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UE5_5_0_SurvivalProject_FPS_Survival_Source_FPS_Survival_Public_AmmoStation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
