// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoEndRunner/NoEndRunnerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoEndRunnerGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NOENDRUNNER_API UClass* Z_Construct_UClass_ANoEndRunnerGameMode();
	NOENDRUNNER_API UClass* Z_Construct_UClass_ANoEndRunnerGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoEndRunner();
// End Cross Module References
	void ANoEndRunnerGameMode::StaticRegisterNativesANoEndRunnerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANoEndRunnerGameMode);
	UClass* Z_Construct_UClass_ANoEndRunnerGameMode_NoRegister()
	{
		return ANoEndRunnerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANoEndRunnerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoEndRunnerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NoEndRunner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANoEndRunnerGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoEndRunnerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NoEndRunnerGameMode.h" },
		{ "ModuleRelativePath", "NoEndRunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoEndRunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoEndRunnerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANoEndRunnerGameMode_Statics::ClassParams = {
		&ANoEndRunnerGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoEndRunnerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANoEndRunnerGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANoEndRunnerGameMode()
	{
		if (!Z_Registration_Info_UClass_ANoEndRunnerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANoEndRunnerGameMode.OuterSingleton, Z_Construct_UClass_ANoEndRunnerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANoEndRunnerGameMode.OuterSingleton;
	}
	template<> NOENDRUNNER_API UClass* StaticClass<ANoEndRunnerGameMode>()
	{
		return ANoEndRunnerGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoEndRunnerGameMode);
	ANoEndRunnerGameMode::~ANoEndRunnerGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_NoEndRunnerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_NoEndRunnerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANoEndRunnerGameMode, ANoEndRunnerGameMode::StaticClass, TEXT("ANoEndRunnerGameMode"), &Z_Registration_Info_UClass_ANoEndRunnerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANoEndRunnerGameMode), 3241335794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_NoEndRunnerGameMode_h_1981550758(TEXT("/Script/NoEndRunner"),
		Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_NoEndRunnerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_NoEndRunnerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
