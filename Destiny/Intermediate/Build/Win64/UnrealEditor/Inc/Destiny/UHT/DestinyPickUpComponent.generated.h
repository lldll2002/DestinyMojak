// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestinyPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADestinyCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DESTINY_DestinyPickUpComponent_generated_h
#error "DestinyPickUpComponent.generated.h already included, missing '#pragma once' in DestinyPickUpComponent.h"
#endif
#define DESTINY_DestinyPickUpComponent_generated_h

#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_12_DELEGATE \
DESTINY_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ADestinyCharacter* PickUpCharacter);


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDestinyPickUpComponent(); \
	friend struct Z_Construct_UClass_UDestinyPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UDestinyPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Destiny"), NO_API) \
	DECLARE_SERIALIZER(UDestinyPickUpComponent)


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDestinyPickUpComponent(UDestinyPickUpComponent&&); \
	UDestinyPickUpComponent(const UDestinyPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestinyPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestinyPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDestinyPickUpComponent) \
	NO_API virtual ~UDestinyPickUpComponent();


#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_14_PROLOG
#define FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESTINY_API UClass* StaticClass<class UDestinyPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
