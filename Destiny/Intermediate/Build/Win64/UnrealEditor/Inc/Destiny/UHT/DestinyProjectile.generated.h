// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestinyProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DESTINY_DestinyProjectile_generated_h
#error "DestinyProjectile.generated.h already included, missing '#pragma once' in DestinyProjectile.h"
#endif
#define DESTINY_DestinyProjectile_generated_h

#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestinyProjectile(); \
	friend struct Z_Construct_UClass_ADestinyProjectile_Statics; \
public: \
	DECLARE_CLASS(ADestinyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Destiny"), NO_API) \
	DECLARE_SERIALIZER(ADestinyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADestinyProjectile(ADestinyProjectile&&); \
	ADestinyProjectile(const ADestinyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestinyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestinyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestinyProjectile) \
	NO_API virtual ~ADestinyProjectile();


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyProjectile_h_12_PROLOG
#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESTINY_API UClass* StaticClass<class ADestinyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
