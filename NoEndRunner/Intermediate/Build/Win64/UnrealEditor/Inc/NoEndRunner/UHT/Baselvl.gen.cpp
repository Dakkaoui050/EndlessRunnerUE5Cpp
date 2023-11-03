// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoEndRunner/Public/Baselvl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaselvl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	NOENDRUNNER_API UClass* Z_Construct_UClass_ABaselvl();
	NOENDRUNNER_API UClass* Z_Construct_UClass_ABaselvl_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NoEndRunner();
// End Cross Module References
	void ABaselvl::StaticRegisterNativesABaselvl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaselvl);
	UClass* Z_Construct_UClass_ABaselvl_NoRegister()
	{
		return ABaselvl::StaticClass();
	}
	struct Z_Construct_UClass_ABaselvl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spawnlocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawnlocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaselvl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NoEndRunner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaselvl_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaselvl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Baselvl.h" },
		{ "ModuleRelativePath", "Public/Baselvl.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaselvl_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Baselvl.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaselvl_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaselvl, Trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaselvl_Statics::NewProp_Trigger_MetaData), Z_Construct_UClass_ABaselvl_Statics::NewProp_Trigger_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaselvl_Statics::NewProp_Spawnlocation_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Baselvl.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaselvl_Statics::NewProp_Spawnlocation = { "Spawnlocation", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaselvl, Spawnlocation), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaselvl_Statics::NewProp_Spawnlocation_MetaData), Z_Construct_UClass_ABaselvl_Statics::NewProp_Spawnlocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaselvl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaselvl_Statics::NewProp_Trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaselvl_Statics::NewProp_Spawnlocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaselvl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaselvl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaselvl_Statics::ClassParams = {
		&ABaselvl::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaselvl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaselvl_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaselvl_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaselvl_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaselvl_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaselvl()
	{
		if (!Z_Registration_Info_UClass_ABaselvl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaselvl.OuterSingleton, Z_Construct_UClass_ABaselvl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaselvl.OuterSingleton;
	}
	template<> NOENDRUNNER_API UClass* StaticClass<ABaselvl>()
	{
		return ABaselvl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaselvl);
	ABaselvl::~ABaselvl() {}
	struct Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_Baselvl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_Baselvl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaselvl, ABaselvl::StaticClass, TEXT("ABaselvl"), &Z_Registration_Info_UClass_ABaselvl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaselvl), 2482143359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_Baselvl_h_1160203840(TEXT("/Script/NoEndRunner"),
		Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_Baselvl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_EndlessRunnerUE5Cpp_NoEndRunner_Source_NoEndRunner_Public_Baselvl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
