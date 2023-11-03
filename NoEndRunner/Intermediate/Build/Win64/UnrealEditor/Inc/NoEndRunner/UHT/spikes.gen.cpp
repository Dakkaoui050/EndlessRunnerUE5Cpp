// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoEndRunner/Public/spikes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodespikes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NOENDRUNNER_API UClass* Z_Construct_UClass_Aspikes();
	NOENDRUNNER_API UClass* Z_Construct_UClass_Aspikes_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoEndRunner();
// End Cross Module References
	void Aspikes::StaticRegisterNativesAspikes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aspikes);
	UClass* Z_Construct_UClass_Aspikes_NoRegister()
	{
		return Aspikes::StaticClass();
	}
	struct Z_Construct_UClass_Aspikes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aspikes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NoEndRunner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aspikes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aspikes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "spikes.h" },
		{ "ModuleRelativePath", "Public/spikes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aspikes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aspikes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aspikes_Statics::ClassParams = {
		&Aspikes::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aspikes_Statics::Class_MetaDataParams), Z_Construct_UClass_Aspikes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_Aspikes()
	{
		if (!Z_Registration_Info_UClass_Aspikes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aspikes.OuterSingleton, Z_Construct_UClass_Aspikes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aspikes.OuterSingleton;
	}
	template<> NOENDRUNNER_API UClass* StaticClass<Aspikes>()
	{
		return Aspikes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aspikes);
	Aspikes::~Aspikes() {}
	struct Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_spikes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_spikes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aspikes, Aspikes::StaticClass, TEXT("Aspikes"), &Z_Registration_Info_UClass_Aspikes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aspikes), 3376601234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_spikes_h_576123732(TEXT("/Script/NoEndRunner"),
		Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_spikes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_spikes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
