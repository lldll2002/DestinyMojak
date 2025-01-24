// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestinyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESTINY_DestinyCharacter_generated_h
#error "DestinyCharacter.generated.h already included, missing '#pragma once' in DestinyCharacter.h"
#endif
#define DESTINY_DestinyCharacter_generated_h

#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestinyCharacter(); \
	friend struct Z_Construct_UClass_ADestinyCharacter_Statics; \
public: \
	DECLARE_CLASS(ADestinyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Destiny"), NO_API) \
	DECLARE_SERIALIZER(ADestinyCharacter)


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADestinyCharacter(ADestinyCharacter&&); \
	ADestinyCharacter(const ADestinyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestinyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestinyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestinyCharacter) \
	NO_API virtual ~ADestinyCharacter();


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyCharacter_h_19_PROLOG
#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESTINY_API UClass* StaticClass<class ADestinyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
