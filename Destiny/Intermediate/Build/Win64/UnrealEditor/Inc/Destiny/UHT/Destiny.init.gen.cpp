// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestiny_init() {}
	DESTINY_API UFunction* Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Destiny;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Destiny()
	{
		if (!Z_Registration_Info_UPackage__Script_Destiny.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Destiny",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x366A663A,
				0x58B45B81,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Destiny.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Destiny.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Destiny(Z_Construct_UPackage__Script_Destiny, TEXT("/Script/Destiny"), Z_Registration_Info_UPackage__Script_Destiny, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x366A663A, 0x58B45B81));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
