// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoEndRunner/Public/MCRunner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCRunner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	NOENDRUNNER_API UClass* Z_Construct_UClass_AMCRunner();
	NOENDRUNNER_API UClass* Z_Construct_UClass_AMCRunner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoEndRunner();
// End Cross Module References
	void AMCRunner::StaticRegisterNativesAMCRunner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMCRunner);
	UClass* Z_Construct_UClass_AMCRunner_NoRegister()
	{
		return AMCRunner::StaticClass();
	}
	struct Z_Construct_UClass_AMCRunner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMCRunner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NoEndRunner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCRunner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCRunner_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MCRunner.h" },
		{ "ModuleRelativePath", "Public/MCRunner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMCRunner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMCRunner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMCRunner_Statics::ClassParams = {
		&AMCRunner::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCRunner_Statics::Class_MetaDataParams), Z_Construct_UClass_AMCRunner_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMCRunner()
	{
		if (!Z_Registration_Info_UClass_AMCRunner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMCRunner.OuterSingleton, Z_Construct_UClass_AMCRunner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMCRunner.OuterSingleton;
	}
	template<> NOENDRUNNER_API UClass* StaticClass<AMCRunner>()
	{
		return AMCRunner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMCRunner);
	AMCRunner::~AMCRunner() {}
	struct Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_MCRunner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_MCRunner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMCRunner, AMCRunner::StaticClass, TEXT("AMCRunner"), &Z_Registration_Info_UClass_AMCRunner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMCRunner), 2328006166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_MCRunner_h_269030654(TEXT("/Script/NoEndRunner"),
		Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_MCRunner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_MCRunner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
