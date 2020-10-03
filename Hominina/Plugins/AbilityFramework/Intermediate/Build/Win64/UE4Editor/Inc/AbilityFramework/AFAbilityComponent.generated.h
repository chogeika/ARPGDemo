// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FAFAttributeChangedData;
struct FAFAbilitySpecHandle;
class UGAAbilityBase;
struct FSoftObjectPath;
struct FAFPredictionHandle;
class UAnimMontage;
struct FGAAttribute;
class UGAAttributesBase;
struct FGameplayTagContainer;
#ifdef ABILITYFRAMEWORK_AFAbilityComponent_generated_h
#error "AFAbilityComponent.generated.h already included, missing '#pragma once' in AFAbilityComponent.h"
#endif
#define ABILITYFRAMEWORK_AFAbilityComponent_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAFAbilityActionSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FAFAbilityActionSet>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAFReplicatedAttributeContainer_Statics; \
	ABILITYFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super;


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FAFReplicatedAttributeContainer>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAFReplicatedAttributeItem_Statics; \
	ABILITYFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FAFReplicatedAttributeItem>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGASMontageRepData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGASMontageRepData>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAEffectUIData_Statics; \
	ABILITYFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGAEffectUIData>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAModifiedAttributeData_Statics; \
	ABILITYFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGAModifiedAttributeData>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_33_DELEGATE \
struct _Script_AbilityFramework_eventAFOnAbilityAdded_Parms \
{ \
	FGameplayTag AbilityTag; \
}; \
static inline void FAFOnAbilityAdded_DelegateWrapper(const FMulticastScriptDelegate& AFOnAbilityAdded, FGameplayTag const& AbilityTag) \
{ \
	_Script_AbilityFramework_eventAFOnAbilityAdded_Parms Parms; \
	Parms.AbilityTag=AbilityTag; \
	AFOnAbilityAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_25_DELEGATE \
struct _Script_AbilityFramework_eventGAOnAttributeModifed_Parms \
{ \
	FAFAttributeChangedData Mod; \
}; \
static inline void FGAOnAttributeModifed_DelegateWrapper(const FMulticastScriptDelegate& GAOnAttributeModifed, FAFAttributeChangedData const& Mod) \
{ \
	_Script_AbilityFramework_eventGAOnAttributeModifed_Parms Parms; \
	Parms.Mod=Mod; \
	GAOnAttributeModifed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_24_DELEGATE \
static inline void FGAOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& GAOnAttributeChanged) \
{ \
	GAOnAttributeChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_RPC_WRAPPERS \
	virtual bool ServerNativeRemoveAbility_Validate(FAFAbilitySpecHandle const& ); \
	virtual void ServerNativeRemoveAbility_Implementation(FAFAbilitySpecHandle const& InHandle); \
	virtual bool ServerNativeAddAbility_Validate(FSoftObjectPath const& , FAFAbilitySpecHandle const& ); \
	virtual void ServerNativeAddAbility_Implementation(FSoftObjectPath const& InAbility, FAFAbilitySpecHandle const& ClientHandle); \
	virtual bool ServerNativeInputReleased_Validate(uint8 ); \
	virtual void ServerNativeInputReleased_Implementation(uint8 InputID); \
	virtual bool ServerNativeInputPressed_Validate(uint8 , FAFPredictionHandle ); \
	virtual void ServerNativeInputPressed_Implementation(uint8 InputID, FAFPredictionHandle InPredictionHandle); \
	virtual bool ServerBindAbilityToInputIDs_Validate(const FAFAbilitySpecHandle , TArray<uint8> const& ); \
	virtual void ServerBindAbilityToInputIDs_Implementation(const FAFAbilitySpecHandle Handle, TArray<uint8> const& InputIDs); \
	virtual void ClientNotifyAbilityInputReady_Implementation(TSoftClassPtr<UGAAbilityBase>  const& InAbilityPtr); \
	virtual void MulticastPlayMontage_Implementation(UAnimMontage* MontageIn, FName SectionName, float Speed); \
	virtual void ClientNotifyAttributeModifier_Implementation(FAFAttributeChangedData const& InData); \
 \
	DECLARE_FUNCTION(execBP_GetAbilityByHandle) \
	{ \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_TagIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityBase**)Z_Param__Result=P_THIS->BP_GetAbilityByHandle(Z_Param_TagIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNativeRemoveAbility) \
	{ \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerNativeRemoveAbility_Validate(Z_Param_InHandle)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNativeRemoveAbility_Validate")); \
			return; \
		} \
		P_THIS->ServerNativeRemoveAbility_Implementation(Z_Param_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_RemoveAbility) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UGAAbilityBase> ,Z_Param_TagIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_RemoveAbility(Z_Param_TagIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNativeAddAbility) \
	{ \
		P_GET_STRUCT(FSoftObjectPath,Z_Param_InAbility); \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_ClientHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerNativeAddAbility_Validate(Z_Param_InAbility,Z_Param_ClientHandle)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNativeAddAbility_Validate")); \
			return; \
		} \
		P_THIS->ServerNativeAddAbility_Implementation(Z_Param_InAbility,Z_Param_ClientHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddAbility) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UGAAbilityBase> ,Z_Param_InAbility); \
		P_GET_TARRAY(FGameplayTag,Z_Param_InInputTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddAbility(Z_Param_InAbility,Z_Param_InInputTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNativeInputReleased) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InputID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerNativeInputReleased_Validate(Z_Param_InputID)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNativeInputReleased_Validate")); \
			return; \
		} \
		P_THIS->ServerNativeInputReleased_Implementation(Z_Param_InputID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNativeInputPressed) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InputID); \
		P_GET_STRUCT(FAFPredictionHandle,Z_Param_InPredictionHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerNativeInputPressed_Validate(Z_Param_InputID,Z_Param_InPredictionHandle)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNativeInputPressed_Validate")); \
			return; \
		} \
		P_THIS->ServerNativeInputPressed_Implementation(Z_Param_InputID,Z_Param_InPredictionHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerBindAbilityToInputIDs) \
	{ \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_Handle); \
		P_GET_TARRAY(uint8,Z_Param_InputIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerBindAbilityToInputIDs_Validate(Z_Param_Handle,Z_Param_InputIDs)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerBindAbilityToInputIDs_Validate")); \
			return; \
		} \
		P_THIS->ServerBindAbilityToInputIDs_Implementation(Z_Param_Handle,Z_Param_InputIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientNotifyAbilityInputReady) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UGAAbilityBase> ,Z_Param_InAbilityPtr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientNotifyAbilityInputReady_Implementation(Z_Param_InAbilityPtr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastPlayMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageIn); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastPlayMontage_Implementation(Z_Param_MontageIn,Z_Param_SectionName,Z_Param_Speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageIn); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayMontage(Z_Param_MontageIn,Z_Param_SectionName,Z_Param_Speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PlayMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_InstancedAbilities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InstancedAbilities(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientNotifyAttributeModifier) \
	{ \
		P_GET_STRUCT(FAFAttributeChangedData,Z_Param_InData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientNotifyAttributeModifier_Implementation(Z_Param_InData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributeValue) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_AttributeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAttributesBase**)Z_Param__Result=P_THIS->GetAttributes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnedGameplayTags) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOwnedGameplayTags(Z_Param_Out_TagContainer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributeStructTest) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAttributeStructTest(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GameEffectContainer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GameEffectContainer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActiveCues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActiveCues(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActiveEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActiveEffects(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPlayMontage_Implementation(UAnimMontage* MontageIn, FName SectionName, float Speed); \
 \
	DECLARE_FUNCTION(execBP_GetAbilityByHandle) \
	{ \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_TagIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAbilityBase**)Z_Param__Result=P_THIS->BP_GetAbilityByHandle(Z_Param_TagIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNativeRemoveAbility) \
	{ \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerNativeRemoveAbility_Validate(Z_Param_InHandle)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNativeRemoveAbility_Validate")); \
			return; \
		} \
		P_THIS->ServerNativeRemoveAbility_Implementation(Z_Param_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_RemoveAbility) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UGAAbilityBase> ,Z_Param_TagIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_RemoveAbility(Z_Param_TagIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNativeAddAbility) \
	{ \
		P_GET_STRUCT(FSoftObjectPath,Z_Param_InAbility); \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_ClientHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerNativeAddAbility_Validate(Z_Param_InAbility,Z_Param_ClientHandle)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNativeAddAbility_Validate")); \
			return; \
		} \
		P_THIS->ServerNativeAddAbility_Implementation(Z_Param_InAbility,Z_Param_ClientHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddAbility) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UGAAbilityBase> ,Z_Param_InAbility); \
		P_GET_TARRAY(FGameplayTag,Z_Param_InInputTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddAbility(Z_Param_InAbility,Z_Param_InInputTag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNativeInputReleased) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InputID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerNativeInputReleased_Validate(Z_Param_InputID)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNativeInputReleased_Validate")); \
			return; \
		} \
		P_THIS->ServerNativeInputReleased_Implementation(Z_Param_InputID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNativeInputPressed) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InputID); \
		P_GET_STRUCT(FAFPredictionHandle,Z_Param_InPredictionHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerNativeInputPressed_Validate(Z_Param_InputID,Z_Param_InPredictionHandle)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNativeInputPressed_Validate")); \
			return; \
		} \
		P_THIS->ServerNativeInputPressed_Implementation(Z_Param_InputID,Z_Param_InPredictionHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerBindAbilityToInputIDs) \
	{ \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_Handle); \
		P_GET_TARRAY(uint8,Z_Param_InputIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerBindAbilityToInputIDs_Validate(Z_Param_Handle,Z_Param_InputIDs)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerBindAbilityToInputIDs_Validate")); \
			return; \
		} \
		P_THIS->ServerBindAbilityToInputIDs_Implementation(Z_Param_Handle,Z_Param_InputIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientNotifyAbilityInputReady) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UGAAbilityBase> ,Z_Param_InAbilityPtr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientNotifyAbilityInputReady_Implementation(Z_Param_InAbilityPtr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastPlayMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageIn); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastPlayMontage_Implementation(Z_Param_MontageIn,Z_Param_SectionName,Z_Param_Speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageIn); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayMontage(Z_Param_MontageIn,Z_Param_SectionName,Z_Param_Speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PlayMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_InstancedAbilities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InstancedAbilities(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientNotifyAttributeModifier) \
	{ \
		P_GET_STRUCT(FAFAttributeChangedData,Z_Param_InData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientNotifyAttributeModifier_Implementation(Z_Param_InData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributeValue) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_AttributeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGAAttributesBase**)Z_Param__Result=P_THIS->GetAttributes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnedGameplayTags) \
	{ \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOwnedGameplayTags(Z_Param_Out_TagContainer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributeStructTest) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAttributeStructTest(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GameEffectContainer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GameEffectContainer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActiveCues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActiveCues(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActiveEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActiveEffects(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_EVENT_PARMS \
	struct AFAbilityComponent_eventClientNotifyAbilityInputReady_Parms \
	{ \
		TSoftClassPtr<UGAAbilityBase>  InAbilityPtr; \
	}; \
	struct AFAbilityComponent_eventClientNotifyAttributeModifier_Parms \
	{ \
		FAFAttributeChangedData InData; \
	}; \
	struct AFAbilityComponent_eventMulticastPlayMontage_Parms \
	{ \
		UAnimMontage* MontageIn; \
		FName SectionName; \
		float Speed; \
	}; \
	struct AFAbilityComponent_eventServerBindAbilityToInputIDs_Parms \
	{ \
		FAFAbilitySpecHandle Handle; \
		TArray<uint8> InputIDs; \
	}; \
	struct AFAbilityComponent_eventServerNativeAddAbility_Parms \
	{ \
		FSoftObjectPath InAbility; \
		FAFAbilitySpecHandle ClientHandle; \
	}; \
	struct AFAbilityComponent_eventServerNativeInputPressed_Parms \
	{ \
		uint8 InputID; \
		FAFPredictionHandle InPredictionHandle; \
	}; \
	struct AFAbilityComponent_eventServerNativeInputReleased_Parms \
	{ \
		uint8 InputID; \
	}; \
	struct AFAbilityComponent_eventServerNativeRemoveAbility_Parms \
	{ \
		FAFAbilitySpecHandle InHandle; \
	};


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_CALLBACK_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFAbilityComponent(); \
	friend struct Z_Construct_UClass_UAFAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UAFAbilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFAbilityComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAFAbilityComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_INCLASS \
private: \
	static void StaticRegisterNativesUAFAbilityComponent(); \
	friend struct Z_Construct_UClass_UAFAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UAFAbilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFAbilityComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAFAbilityComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFAbilityComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFAbilityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFAbilityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFAbilityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFAbilityComponent(UAFAbilityComponent&&); \
	NO_API UAFAbilityComponent(const UAFAbilityComponent&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFAbilityComponent(UAFAbilityComponent&&); \
	NO_API UAFAbilityComponent(const UAFAbilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFAbilityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFAbilityComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFAbilityComponent)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RepMontage() { return STRUCT_OFFSET(UAFAbilityComponent, RepMontage); }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_184_PROLOG \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_EVENT_PARMS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFAbilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFAbilityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
