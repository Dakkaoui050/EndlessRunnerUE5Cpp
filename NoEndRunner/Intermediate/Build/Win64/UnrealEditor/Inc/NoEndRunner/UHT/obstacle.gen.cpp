// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoEndRunner/Public/obstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeobstacle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NOENDRUNNER_API UClass* Z_Construct_UClass_Aobstacle();
	NOENDRUNNER_API UClass* Z_Construct_UClass_Aobstacle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoEndRunner();
// End Cross Module References
	void Aobstacle::StaticRegisterNativesAobstacle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aobstacle);
	UClass* Z_Construct_UClass_Aobstacle_NoRegister()
	{
		return Aobstacle::StaticClass();
	}
	struct Z_Construct_UClass_Aobstacle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aobstacle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NoEndRunner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aobstacle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aobstacle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "obstacle.h" },
		{ "ModuleRelativePath", "Public/obstacle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aobstacle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aobstacle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aobstacle_Statics::ClassParams = {
		&Aobstacle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aobstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_Aobstacle_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_Aobstacle()
	{
		if (!Z_Registration_Info_UClass_Aobstacle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aobstacle.OuterSingleton, Z_Construct_UClass_Aobstacle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aobstacle.OuterSingleton;
	}
	template<> NOENDRUNNER_API UClass* StaticClass<Aobstacle>()
	{
		return Aobstacle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aobstacle);
	Aobstacle::~Aobstacle() {}
	struct Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_obstacle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_obstacle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aobstacle, Aobstacle::StaticClass, TEXT("Aobstacle"), &Z_Registration_Info_UClass_Aobstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aobstacle), 418874687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_obstacle_h_2994231885(TEXT("/Script/NoEndRunner"),
		Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_obstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_obstacle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS