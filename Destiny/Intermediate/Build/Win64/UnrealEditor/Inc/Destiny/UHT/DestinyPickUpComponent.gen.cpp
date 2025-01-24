// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Destiny/DestinyPickUpComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestinyPickUpComponent() {}

// Begin Cross Module References
DESTINY_API UClass* Z_Construct_UClass_ADestinyCharacter_NoRegister();
DESTINY_API UClass* Z_Construct_UClass_UDestinyPickUpComponent();
DESTINY_API UClass* Z_Construct_UClass_UDestinyPickUpComponent_NoRegister();
DESTINY_API UFunction* Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Destiny();
// End Cross Module References

// Begin Delegate FOnPickUp
struct Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics
{
	struct _Script_Destiny_eventOnPickUp_Parms
	{
		ADestinyCharacter* PickUpCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declaration of the delegate that will be called when someone picks this up\n// The character picking this up is the parameter sent with the notification\n" },
#endif
		{ "ModuleRelativePath", "DestinyPickUpComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declaration of the delegate that will be called when someone picks this up\nThe character picking this up is the parameter sent with the notification" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::NewProp_PickUpCharacter = { "PickUpCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Destiny_eventOnPickUp_Parms, PickUpCharacter), Z_Construct_UClass_ADestinyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::NewProp_PickUpCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Destiny, nullptr, "OnPickUp__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::_Script_Destiny_eventOnPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::_Script_Destiny_eventOnPickUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ADestinyCharacter* PickUpCharacter)
{
	struct _Script_Destiny_eventOnPickUp_Parms
	{
		ADestinyCharacter* PickUpCharacter;
	};
	_Script_Destiny_eventOnPickUp_Parms Parms;
	Parms.PickUpCharacter=PickUpCharacter;
	OnPickUp.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPickUp

// Begin Class UDestinyPickUpComponent Function OnSphereBeginOverlap
struct Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics
{
	struct DestinyPickUpComponent_eventOnSphereBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Code for when something overlaps this component */" },
#endif
		{ "ModuleRelativePath", "DestinyPickUpComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Code for when something overlaps this component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestinyPickUpComponent_eventOnSphereBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestinyPickUpComponent_eventOnSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestinyPickUpComponent_eventOnSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestinyPickUpComponent_eventOnSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((DestinyPickUpComponent_eventOnSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DestinyPickUpComponent_eventOnSphereBeginOverlap_Parms), &Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestinyPickUpComponent_eventOnSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestinyPickUpComponent, nullptr, "OnSphereBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::DestinyPickUpComponent_eventOnSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::DestinyPickUpComponent_eventOnSphereBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDestinyPickUpComponent::execOnSphereBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class UDestinyPickUpComponent Function OnSphereBeginOverlap

// Begin Class UDestinyPickUpComponent
void UDestinyPickUpComponent::StaticRegisterNativesUDestinyPickUpComponent()
{
	UClass* Class = UDestinyPickUpComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSphereBeginOverlap", &UDestinyPickUpComponent::execOnSphereBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDestinyPickUpComponent);
UClass* Z_Construct_UClass_UDestinyPickUpComponent_NoRegister()
{
	return UDestinyPickUpComponent::StaticClass();
}
struct Z_Construct_UClass_UDestinyPickUpComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "DestinyPickUpComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DestinyPickUpComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPickUp_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
#endif
		{ "ModuleRelativePath", "DestinyPickUpComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPickUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDestinyPickUpComponent_OnSphereBeginOverlap, "OnSphereBeginOverlap" }, // 3802771506
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestinyPickUpComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDestinyPickUpComponent_Statics::NewProp_OnPickUp = { "OnPickUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDestinyPickUpComponent, OnPickUp), Z_Construct_UDelegateFunction_Destiny_OnPickUp__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPickUp_MetaData), NewProp_OnPickUp_MetaData) }; // 260374677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestinyPickUpComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestinyPickUpComponent_Statics::NewProp_OnPickUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDestinyPickUpComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDestinyPickUpComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USphereComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Destiny,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDestinyPickUpComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDestinyPickUpComponent_Statics::ClassParams = {
	&UDestinyPickUpComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDestinyPickUpComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDestinyPickUpComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDestinyPickUpComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDestinyPickUpComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDestinyPickUpComponent()
{
	if (!Z_Registration_Info_UClass_UDestinyPickUpComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDestinyPickUpComponent.OuterSingleton, Z_Construct_UClass_UDestinyPickUpComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDestinyPickUpComponent.OuterSingleton;
}
template<> DESTINY_API UClass* StaticClass<UDestinyPickUpComponent>()
{
	return UDestinyPickUpComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDestinyPickUpComponent);
UDestinyPickUpComponent::~UDestinyPickUpComponent() {}
// End Class UDestinyPickUpComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDestinyPickUpComponent, UDestinyPickUpComponent::StaticClass, TEXT("UDestinyPickUpComponent"), &Z_Registration_Info_UClass_UDestinyPickUpComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDestinyPickUpComponent), 1228717522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_1308452156(TEXT("/Script/Destiny"),
	Z_CompiledInDeferFile_FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_DestinyMojak_Destiny_Source_Destiny_DestinyPickUpComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
