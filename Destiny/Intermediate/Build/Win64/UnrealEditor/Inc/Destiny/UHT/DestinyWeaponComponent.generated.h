// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestinyWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADestinyCharacter;
#ifdef DESTINY_DestinyWeaponComponent_generated_h
#error "DestinyWeaponComponent.generated.h already included, missing '#pragma once' in DestinyWeaponComponent.h"
#endif
#define DESTINY_DestinyWeaponComponent_generated_h

#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDestinyWeaponComponent(); \
	friend struct Z_Construct_UClass_UDestinyWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UDestinyWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Destiny"), NO_API) \
	DECLARE_SERIALIZER(UDestinyWeaponComponent)


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDestinyWeaponComponent(UDestinyWeaponComponent&&); \
	UDestinyWeaponComponent(const UDestinyWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestinyWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestinyWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDestinyWeaponComponent) \
	NO_API virtual ~UDestinyWeaponComponent();


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyWeaponComponent_h_11_PROLOG
#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESTINY_API UClass* StaticClass<class UDestinyWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
