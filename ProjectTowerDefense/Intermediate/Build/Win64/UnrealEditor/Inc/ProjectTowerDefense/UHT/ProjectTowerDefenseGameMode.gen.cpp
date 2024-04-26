// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectTowerDefense/ProjectTowerDefenseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectTowerDefenseGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTTOWERDEFENSE_API UClass* Z_Construct_UClass_AProjectTowerDefenseGameMode();
PROJECTTOWERDEFENSE_API UClass* Z_Construct_UClass_AProjectTowerDefenseGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectTowerDefense();
// End Cross Module References

// Begin Class AProjectTowerDefenseGameMode
void AProjectTowerDefenseGameMode::StaticRegisterNativesAProjectTowerDefenseGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectTowerDefenseGameMode);
UClass* Z_Construct_UClass_AProjectTowerDefenseGameMode_NoRegister()
{
	return AProjectTowerDefenseGameMode::StaticClass();
}
struct Z_Construct_UClass_AProjectTowerDefenseGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectTowerDefenseGameMode.h" },
		{ "ModuleRelativePath", "ProjectTowerDefenseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectTowerDefenseGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectTowerDefenseGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectTowerDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectTowerDefenseGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectTowerDefenseGameMode_Statics::ClassParams = {
	&AProjectTowerDefenseGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectTowerDefenseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectTowerDefenseGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectTowerDefenseGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectTowerDefenseGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectTowerDefenseGameMode.OuterSingleton, Z_Construct_UClass_AProjectTowerDefenseGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectTowerDefenseGameMode.OuterSingleton;
}
template<> PROJECTTOWERDEFENSE_API UClass* StaticClass<AProjectTowerDefenseGameMode>()
{
	return AProjectTowerDefenseGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectTowerDefenseGameMode);
AProjectTowerDefenseGameMode::~AProjectTowerDefenseGameMode() {}
// End Class AProjectTowerDefenseGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_ProjectTowerDefense_Source_ProjectTowerDefense_ProjectTowerDefenseGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectTowerDefenseGameMode, AProjectTowerDefenseGameMode::StaticClass, TEXT("AProjectTowerDefenseGameMode"), &Z_Registration_Info_UClass_AProjectTowerDefenseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectTowerDefenseGameMode), 1871385319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_ProjectTowerDefense_Source_ProjectTowerDefense_ProjectTowerDefenseGameMode_h_198783285(TEXT("/Script/ProjectTowerDefense"),
	Z_CompiledInDeferFile_FID_Projects_ProjectTowerDefense_Source_ProjectTowerDefense_ProjectTowerDefenseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_ProjectTowerDefense_Source_ProjectTowerDefense_ProjectTowerDefenseGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
