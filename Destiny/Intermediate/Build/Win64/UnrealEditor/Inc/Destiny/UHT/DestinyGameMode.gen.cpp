// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Destiny/DestinyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestinyGameMode() {}

// Begin Cross Module References
DESTINY_API UClass* Z_Construct_UClass_ADestinyGameMode();
DESTINY_API UClass* Z_Construct_UClass_ADestinyGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Destiny();
// End Cross Module References

// Begin Class ADestinyGameMode
void ADestinyGameMode::StaticRegisterNativesADestinyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADestinyGameMode);
UClass* Z_Construct_UClass_ADestinyGameMode_NoRegister()
{
	return ADestinyGameMode::StaticClass();
}
struct Z_Construct_UClass_ADestinyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DestinyGameMode.h" },
		{ "ModuleRelativePath", "DestinyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestinyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADestinyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Destiny,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestinyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADestinyGameMode_Statics::ClassParams = {
	&ADestinyGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADestinyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADestinyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADestinyGameMode()
{
	if (!Z_Registration_Info_UClass_ADestinyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADestinyGameMode.OuterSingleton, Z_Construct_UClass_ADestinyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADestinyGameMode.OuterSingleton;
}
template<> DESTINY_API UClass* StaticClass<ADestinyGameMode>()
{
	return ADestinyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADestinyGameMode);
ADestinyGameMode::~ADestinyGameMode() {}
// End Class ADestinyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADestinyGameMode, ADestinyGameMode::StaticClass, TEXT("ADestinyGameMode"), &Z_Registration_Info_UClass_ADestinyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADestinyGameMode), 3583133859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyGameMode_h_3124282806(TEXT("/Script/Destiny"),
	Z_CompiledInDeferFile_FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
