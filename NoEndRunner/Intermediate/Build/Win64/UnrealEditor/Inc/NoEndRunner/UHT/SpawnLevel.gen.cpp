// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoEndRunner/Public/SpawnLevel.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnLevel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NOENDRUNNER_API UClass* Z_Construct_UClass_ABaselvl_NoRegister();
	NOENDRUNNER_API UClass* Z_Construct_UClass_ASpawnLevel();
	NOENDRUNNER_API UClass* Z_Construct_UClass_ASpawnLevel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoEndRunner();
// End Cross Module References
	DEFINE_FUNCTION(ASpawnLevel::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_BFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_BFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawnLevel::execSpawnlevel)
	{
		P_GET_UBOOL(Z_Param_IsFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawnlevel(Z_Param_IsFirst);
		P_NATIVE_END;
	}
	void ASpawnLevel::StaticRegisterNativesASpawnLevel()
	{
		UClass* Class = ASpawnLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ASpawnLevel::execOnOverlapBegin },
			{ "Spawnlevel", &ASpawnLevel::execSpawnlevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics
	{
		struct SpawnLevel_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool BFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_BFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_BFromSweep_SetBit(void* Obj)
	{
		((SpawnLevel_eventOnOverlapBegin_Parms*)Obj)->BFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_BFromSweep = { "BFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpawnLevel_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_BFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData), Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_BFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare a function to handle overlap events\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare a function to handle overlap events" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnLevel, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::SpawnLevel_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::SpawnLevel_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics
	{
		struct SpawnLevel_eventSpawnlevel_Parms
		{
			bool IsFirst;
		};
		static void NewProp_IsFirst_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFirst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::NewProp_IsFirst_SetBit(void* Obj)
	{
		((SpawnLevel_eventSpawnlevel_Parms*)Obj)->IsFirst = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::NewProp_IsFirst = { "IsFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpawnLevel_eventSpawnlevel_Parms), &Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::NewProp_IsFirst_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::NewProp_IsFirst,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare a function to spawn a level\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare a function to spawn a level" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnLevel, nullptr, "Spawnlevel", nullptr, nullptr, Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::SpawnLevel_eventSpawnlevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::SpawnLevel_eventSpawnlevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASpawnLevel_Spawnlevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnLevel_Spawnlevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnLevel);
	UClass* Z_Construct_UClass_ASpawnLevel_NoRegister()
	{
		return ASpawnLevel::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level1_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_level1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level2_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_level2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level3_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_level3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level4_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_level4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level5_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_level5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level6_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_level6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level7_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_level7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level8_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_level8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level9_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_level9;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NoEndRunner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawnLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin, "OnOverlapBegin" }, // 2005936855
		{ &Z_Construct_UFunction_ASpawnLevel_Spawnlevel, "Spawnlevel" }, // 3170435504
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include necessary headers and define class AbaseLevel\n" },
#endif
		{ "IncludePath", "SpawnLevel.h" },
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include necessary headers and define class AbaseLevel" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level1_MetaData[] = {
		{ "Category", "SpawnLevel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare properties for different level classes using TSubclassOf\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare properties for different level classes using TSubclassOf" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level1 = { "level1", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, level1), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaselvl_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level1_MetaData), Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level2_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level2 = { "level2", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, level2), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaselvl_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level2_MetaData), Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level3_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level3 = { "level3", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, level3), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaselvl_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level3_MetaData), Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level4_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level4 = { "level4", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, level4), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaselvl_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level4_MetaData), Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level4_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level5_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level5 = { "level5", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, level5), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaselvl_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level5_MetaData), Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level5_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level6_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level6 = { "level6", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, level6), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaselvl_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level6_MetaData), Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level6_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level7_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level7 = { "level7", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, level7), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaselvl_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level7_MetaData), Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level7_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level8_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level8 = { "level8", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, level8), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaselvl_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level8_MetaData), Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level8_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level9_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "Public/SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level9 = { "level9", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLevel, level9), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaselvl_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level9_MetaData), Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level9_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_level9,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnLevel_Statics::ClassParams = {
		&ASpawnLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawnLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnLevel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpawnLevel()
	{
		if (!Z_Registration_Info_UClass_ASpawnLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnLevel.OuterSingleton, Z_Construct_UClass_ASpawnLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnLevel.OuterSingleton;
	}
	template<> NOENDRUNNER_API UClass* StaticClass<ASpawnLevel>()
	{
		return ASpawnLevel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnLevel);
	ASpawnLevel::~ASpawnLevel() {}
	struct Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_SpawnLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_SpawnLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnLevel, ASpawnLevel::StaticClass, TEXT("ASpawnLevel"), &Z_Registration_Info_UClass_ASpawnLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnLevel), 2274043756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_SpawnLevel_h_1772438896(TEXT("/Script/NoEndRunner"),
		Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_SpawnLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_SpawnLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
