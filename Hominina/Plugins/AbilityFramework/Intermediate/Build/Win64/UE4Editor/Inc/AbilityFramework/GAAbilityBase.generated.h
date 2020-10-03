// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
struct FLinearColor;
struct FVector;
struct FGameplayTagContainer;
struct FGameplayTag;
class UAnimMontage;
struct FGAEffectHandle;
struct FGAAttribute;
class UGAAttributesBase;
#ifdef ABILITYFRAMEWORK_GAAbilityBase_generated_h
#error "GAAbilityBase.generated.h already included, missing '#pragma once' in GAAbilityBase.h"
#endif
#define ABILITYFRAMEWORK_GAAbilityBase_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGAActiationInfo_Statics; \
	ABILITYFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<struct FGAActiationInfo>();

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_58_DELEGATE \
static inline void FGASGenericAbilityDelegate_DelegateWrapper(const FMulticastScriptDelegate& GASGenericAbilityDelegate) \
{ \
	GASGenericAbilityDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_RPC_WRAPPERS \
	virtual void ClientSetCooldownHandle_Implementation(FGAEffectHandle InCooldownHandle); \
 \
	DECLARE_FUNCTION(execBP_GetAvatar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->BP_GetAvatar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetCooldownEndTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetCooldownEndTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetCooldownCurrentTimeNormalized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetCooldownCurrentTimeNormalized(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetCooldownCurrentTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetCooldownCurrentTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetCooldownRemainingTimeNormalized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetCooldownRemainingTimeNormalized(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetCooldownRemainingTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetCooldownRemainingTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetActivationEndTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetActivationEndTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetActivationCurrentTimeNormalized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetActivationCurrentTimeNormalized(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetActivationCurrentTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetActivationCurrentTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetActivationRemainingTimeNormalized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetActivationRemainingTimeNormalized(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetActivationRemainingTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetActivationRemainingTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleByChannelCorrected) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Range); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleByChannelCorrected(Z_Param_SocketName,Z_Param_Range,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_OutHit,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleByChannelFromSocket) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Range); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleByChannelFromSocket(Z_Param_SocketName,Z_Param_Range,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_OutHit,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleByChannelFromCamera) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Range); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleByChannelFromCamera(Z_Param_Range,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_OutHit,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleByChannel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleByChannel(Z_Param_Start,Z_Param_End,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHaveAnyGameplayTag) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HaveAnyGameplayTag(Z_Param_Target,Z_Param_Out_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHaveGameplayTag) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HaveGameplayTag(Z_Param_Target,Z_Param_Out_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteAbilityInputReleasedFromTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTagIn); \
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteAbilityInputReleasedFromTag(Z_Param_AbilityTagIn,Z_Param_ActionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteAbilityInputPressedFromTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTagIn); \
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteAbilityInputPressedFromTag(Z_Param_AbilityTagIn,Z_Param_ActionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateAnimationSpeed) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateAnimationSpeed(Z_Param_MontageIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentActivationTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentActivationTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CheckAbilityAttributeCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_CheckAbilityAttributeCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ApplyAbilityAttributeCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_ApplyAbilityAttributeCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CheckAttributeCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_CheckAttributeCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ApplyAttributeCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_ApplyAttributeCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ApplyCooldown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ApplyCooldown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_IsOnCooldown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_IsOnCooldown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetCooldownHandle) \
	{ \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_InCooldownHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientSetCooldownHandle_Implementation(Z_Param_InCooldownHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributeVal) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttributeVal(Z_Param_AttributeIn); \
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
	DECLARE_FUNCTION(execBP_CanUseAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_CanUseAbility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelActivation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelActivation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAbility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNativeOnAbilityActivationCancel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NativeOnAbilityActivationCancel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNativeOnAbilityActivationFinish) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NativeOnAbilityActivationFinish(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCooldownEffectExpired) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCooldownEffectExpired(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartActivation) \
	{ \
		P_GET_UBOOL(Z_Param_bApplyActivationEffect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartActivation(Z_Param_bApplyActivationEffect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttributeSetReplicated) \
	{ \
		P_GET_OBJECT(UGAAttributesBase,Z_Param_ReplicatedAttributes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttributeSetReplicated(Z_Param_ReplicatedAttributes); \
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
	DECLARE_FUNCTION(execOnActivationEffectPeriod) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActivationEffectPeriod(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetAvatar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->BP_GetAvatar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetCooldownEndTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetCooldownEndTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetCooldownCurrentTimeNormalized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetCooldownCurrentTimeNormalized(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetCooldownCurrentTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetCooldownCurrentTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetCooldownRemainingTimeNormalized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetCooldownRemainingTimeNormalized(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetCooldownRemainingTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetCooldownRemainingTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetActivationEndTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetActivationEndTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetActivationCurrentTimeNormalized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetActivationCurrentTimeNormalized(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetActivationCurrentTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetActivationCurrentTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetActivationRemainingTimeNormalized) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetActivationRemainingTimeNormalized(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetActivationRemainingTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->BP_GetActivationRemainingTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleByChannelCorrected) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Range); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleByChannelCorrected(Z_Param_SocketName,Z_Param_Range,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_OutHit,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleByChannelFromSocket) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Range); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleByChannelFromSocket(Z_Param_SocketName,Z_Param_Range,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_OutHit,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleByChannelFromCamera) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Range); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DrawDebugType); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleByChannelFromCamera(Z_Param_Range,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_OutHit,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineTraceSingleByChannel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingleByChannel(Z_Param_Start,Z_Param_End,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHaveAnyGameplayTag) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HaveAnyGameplayTag(Z_Param_Target,Z_Param_Out_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHaveGameplayTag) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HaveGameplayTag(Z_Param_Target,Z_Param_Out_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteAbilityInputReleasedFromTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTagIn); \
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteAbilityInputReleasedFromTag(Z_Param_AbilityTagIn,Z_Param_ActionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteAbilityInputPressedFromTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTagIn); \
		P_GET_STRUCT(FGameplayTag,Z_Param_ActionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteAbilityInputPressedFromTag(Z_Param_AbilityTagIn,Z_Param_ActionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateAnimationSpeed) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateAnimationSpeed(Z_Param_MontageIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentActivationTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentActivationTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CheckAbilityAttributeCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_CheckAbilityAttributeCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ApplyAbilityAttributeCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_ApplyAbilityAttributeCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CheckAttributeCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_CheckAttributeCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ApplyAttributeCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_ApplyAttributeCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ApplyCooldown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ApplyCooldown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_IsOnCooldown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_IsOnCooldown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetCooldownHandle) \
	{ \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_InCooldownHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientSetCooldownHandle_Implementation(Z_Param_InCooldownHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttributeVal) \
	{ \
		P_GET_STRUCT(FGAAttribute,Z_Param_AttributeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttributeVal(Z_Param_AttributeIn); \
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
	DECLARE_FUNCTION(execBP_CanUseAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_CanUseAbility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelActivation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelActivation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishAbility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishAbility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNativeOnAbilityActivationCancel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NativeOnAbilityActivationCancel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNativeOnAbilityActivationFinish) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NativeOnAbilityActivationFinish(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCooldownEffectExpired) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCooldownEffectExpired(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartActivation) \
	{ \
		P_GET_UBOOL(Z_Param_bApplyActivationEffect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartActivation(Z_Param_bApplyActivationEffect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttributeSetReplicated) \
	{ \
		P_GET_OBJECT(UGAAttributesBase,Z_Param_ReplicatedAttributes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttributeSetReplicated(Z_Param_ReplicatedAttributes); \
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
	DECLARE_FUNCTION(execOnActivationEffectPeriod) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActivationEffectPeriod(); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_EVENT_PARMS \
	struct GAAbilityBase_eventClientSetCooldownHandle_Parms \
	{ \
		FGAEffectHandle InCooldownHandle; \
	}; \
	struct GAAbilityBase_eventOnInputPressed_Parms \
	{ \
		uint8 InputID; \
	}; \
	struct GAAbilityBase_eventOnInputReleased_Parms \
	{ \
		uint8 InputID; \
	};


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_CALLBACK_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGAAbilityBase, NO_API)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAAbilityBase(); \
	friend struct Z_Construct_UClass_UGAAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityBase) \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGAAbilityBase*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUGAAbilityBase(); \
	friend struct Z_Construct_UClass_UGAAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UGAAbilityBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UGAAbilityBase) \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGAAbilityBase*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityBase(UGAAbilityBase&&); \
	NO_API UGAAbilityBase(const UGAAbilityBase&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAAbilityBase(UGAAbilityBase&&); \
	NO_API UGAAbilityBase(const UGAAbilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAAbilityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAAbilityBase)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_95_PROLOG \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_EVENT_PARMS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UGAAbilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_Abilities_GAAbilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
