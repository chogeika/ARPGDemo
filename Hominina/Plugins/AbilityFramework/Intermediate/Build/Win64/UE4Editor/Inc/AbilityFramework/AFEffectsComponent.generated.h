// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGAEffectHandle;
struct FGAEffectCueParams;
struct FAFCueHandle;
class UGAGameEffectSpec;
struct FAFPredictionHandle;
#ifdef ABILITYFRAMEWORK_AFEffectsComponent_generated_h
#error "AFEffectsComponent.generated.h already included, missing '#pragma once' in AFEffectsComponent.h"
#endif
#define ABILITYFRAMEWORK_AFEffectsComponent_generated_h

#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_RPC_WRAPPERS \
	virtual void MulticastExtendDurationCue_Implementation(FGAEffectHandle EffectHandle, float NewDurationIn); \
	virtual void MulticastUpdateTimersCue_Implementation(FGAEffectHandle EffectHandle, float NewDurationIn, float NewPeriodIn); \
	virtual void MulticastUpdatePeriodCue_Implementation(FGAEffectHandle EffectHandle, float NewPeriodIn); \
	virtual void MulticastUpdateDurationCue_Implementation(FGAEffectHandle EffectHandle, float NewDurationIn); \
	virtual void MulticastRemoveEffectCue_Implementation(FGAEffectCueParams CueParams, FAFCueHandle InHandle); \
	virtual void MulticastExecuteEffectCue_Implementation(TSubclassOf<UGAGameEffectSpec>  EffectSpec, FGAEffectCueParams CueParams); \
	virtual void MulticastApplyEffectCue_Implementation(FGAEffectCueParams CueParams, FAFCueHandle InHandle); \
	virtual void ClientExpireEffect_Implementation(FAFPredictionHandle PredictionHandle); \
 \
	DECLARE_FUNCTION(execOnRep_GameEffectContainer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GameEffectContainer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastExtendDurationCue) \
	{ \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_EffectHandle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDurationIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastExtendDurationCue_Implementation(Z_Param_EffectHandle,Z_Param_NewDurationIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastUpdateTimersCue) \
	{ \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_EffectHandle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDurationIn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPeriodIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastUpdateTimersCue_Implementation(Z_Param_EffectHandle,Z_Param_NewDurationIn,Z_Param_NewPeriodIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastUpdatePeriodCue) \
	{ \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_EffectHandle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPeriodIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastUpdatePeriodCue_Implementation(Z_Param_EffectHandle,Z_Param_NewPeriodIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastUpdateDurationCue) \
	{ \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_EffectHandle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDurationIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastUpdateDurationCue_Implementation(Z_Param_EffectHandle,Z_Param_NewDurationIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastRemoveEffectCue) \
	{ \
		P_GET_STRUCT(FGAEffectCueParams,Z_Param_CueParams); \
		P_GET_STRUCT(FAFCueHandle,Z_Param_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastRemoveEffectCue_Implementation(Z_Param_CueParams,Z_Param_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastExecuteEffectCue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_EffectSpec); \
		P_GET_STRUCT(FGAEffectCueParams,Z_Param_CueParams); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastExecuteEffectCue_Implementation(Z_Param_EffectSpec,Z_Param_CueParams); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastApplyEffectCue) \
	{ \
		P_GET_STRUCT(FGAEffectCueParams,Z_Param_CueParams); \
		P_GET_STRUCT(FAFCueHandle,Z_Param_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastApplyEffectCue_Implementation(Z_Param_CueParams,Z_Param_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientExpireEffect) \
	{ \
		P_GET_STRUCT(FAFPredictionHandle,Z_Param_PredictionHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientExpireEffect_Implementation(Z_Param_PredictionHandle); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_GameEffectContainer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GameEffectContainer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastExtendDurationCue) \
	{ \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_EffectHandle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDurationIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastExtendDurationCue_Implementation(Z_Param_EffectHandle,Z_Param_NewDurationIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastUpdateTimersCue) \
	{ \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_EffectHandle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDurationIn); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPeriodIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastUpdateTimersCue_Implementation(Z_Param_EffectHandle,Z_Param_NewDurationIn,Z_Param_NewPeriodIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastUpdatePeriodCue) \
	{ \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_EffectHandle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPeriodIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastUpdatePeriodCue_Implementation(Z_Param_EffectHandle,Z_Param_NewPeriodIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastUpdateDurationCue) \
	{ \
		P_GET_STRUCT(FGAEffectHandle,Z_Param_EffectHandle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDurationIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastUpdateDurationCue_Implementation(Z_Param_EffectHandle,Z_Param_NewDurationIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastRemoveEffectCue) \
	{ \
		P_GET_STRUCT(FGAEffectCueParams,Z_Param_CueParams); \
		P_GET_STRUCT(FAFCueHandle,Z_Param_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastRemoveEffectCue_Implementation(Z_Param_CueParams,Z_Param_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastExecuteEffectCue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_EffectSpec); \
		P_GET_STRUCT(FGAEffectCueParams,Z_Param_CueParams); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastExecuteEffectCue_Implementation(Z_Param_EffectSpec,Z_Param_CueParams); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastApplyEffectCue) \
	{ \
		P_GET_STRUCT(FGAEffectCueParams,Z_Param_CueParams); \
		P_GET_STRUCT(FAFCueHandle,Z_Param_InHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastApplyEffectCue_Implementation(Z_Param_CueParams,Z_Param_InHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientExpireEffect) \
	{ \
		P_GET_STRUCT(FAFPredictionHandle,Z_Param_PredictionHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientExpireEffect_Implementation(Z_Param_PredictionHandle); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_EVENT_PARMS \
	struct AFEffectsComponent_eventClientExpireEffect_Parms \
	{ \
		FAFPredictionHandle PredictionHandle; \
	}; \
	struct AFEffectsComponent_eventMulticastApplyEffectCue_Parms \
	{ \
		FGAEffectCueParams CueParams; \
		FAFCueHandle InHandle; \
	}; \
	struct AFEffectsComponent_eventMulticastExecuteEffectCue_Parms \
	{ \
		TSubclassOf<UGAGameEffectSpec>  EffectSpec; \
		FGAEffectCueParams CueParams; \
	}; \
	struct AFEffectsComponent_eventMulticastExtendDurationCue_Parms \
	{ \
		FGAEffectHandle EffectHandle; \
		float NewDurationIn; \
	}; \
	struct AFEffectsComponent_eventMulticastRemoveEffectCue_Parms \
	{ \
		FGAEffectCueParams CueParams; \
		FAFCueHandle InHandle; \
	}; \
	struct AFEffectsComponent_eventMulticastUpdateDurationCue_Parms \
	{ \
		FGAEffectHandle EffectHandle; \
		float NewDurationIn; \
	}; \
	struct AFEffectsComponent_eventMulticastUpdatePeriodCue_Parms \
	{ \
		FGAEffectHandle EffectHandle; \
		float NewPeriodIn; \
	}; \
	struct AFEffectsComponent_eventMulticastUpdateTimersCue_Parms \
	{ \
		FGAEffectHandle EffectHandle; \
		float NewDurationIn; \
		float NewPeriodIn; \
	};


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_CALLBACK_WRAPPERS
#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAFEffectsComponent(); \
	friend struct Z_Construct_UClass_UAFEffectsComponent_Statics; \
public: \
	DECLARE_CLASS(UAFEffectsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectsComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAFEffectsComponent(); \
	friend struct Z_Construct_UClass_UAFEffectsComponent_Statics; \
public: \
	DECLARE_CLASS(UAFEffectsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilityFramework"), NO_API) \
	DECLARE_SERIALIZER(UAFEffectsComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAFEffectsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectsComponent(UAFEffectsComponent&&); \
	NO_API UAFEffectsComponent(const UAFEffectsComponent&); \
public:


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAFEffectsComponent(UAFEffectsComponent&&); \
	NO_API UAFEffectsComponent(const UAFEffectsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAFEffectsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAFEffectsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAFEffectsComponent)


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultTags() { return STRUCT_OFFSET(UAFEffectsComponent, DefaultTags); } \
	FORCEINLINE static uint32 __PPO__AppliedTags() { return STRUCT_OFFSET(UAFEffectsComponent, AppliedTags); } \
	FORCEINLINE static uint32 __PPO__ImmunityTags() { return STRUCT_OFFSET(UAFEffectsComponent, ImmunityTags); } \
	FORCEINLINE static uint32 __PPO__GameEffectContainer() { return STRUCT_OFFSET(UAFEffectsComponent, GameEffectContainer); }


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_23_PROLOG \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_EVENT_PARMS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_RPC_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_INCLASS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_CALLBACK_WRAPPERS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYFRAMEWORK_API UClass* StaticClass<class UAFEffectsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_AbilityFramework_Source_AbilityFramework_Public_AFEffectsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
