// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARItemWeapon;
class UARWeaponUpgradeItem;
class UChildActorComponent;
struct FARWeaponRPC;
struct FAFAbilitySpec;
struct FAFAbilitySpecHandle;
#ifdef HOMININA_ARWeaponInventoryComponent_generated_h
#error "ARWeaponInventoryComponent.generated.h already included, missing '#pragma once' in ARWeaponInventoryComponent.h"
#endif
#define HOMININA_ARWeaponInventoryComponent_generated_h

#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARWeaponRPC_Statics; \
	HOMININA_API static class UScriptStruct* StaticStruct();


template<> HOMININA_API UScriptStruct* StaticStruct<struct FARWeaponRPC>();

#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARWeapon_Statics; \
	HOMININA_API static class UScriptStruct* StaticStruct();


template<> HOMININA_API UScriptStruct* StaticStruct<struct FARWeapon>();

#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_70_DELEGATE \
struct _Script_Hominina_eventAROnUpgradeRemoved_Parms \
{ \
	UARItemWeapon* Weapon; \
	UARWeaponUpgradeItem* Upgrade; \
	int8 WeaponIndex; \
}; \
static inline void FAROnUpgradeRemoved_DelegateWrapper(const FMulticastScriptDelegate& AROnUpgradeRemoved, UARItemWeapon* Weapon, UARWeaponUpgradeItem* Upgrade, int8 WeaponIndex) \
{ \
	_Script_Hominina_eventAROnUpgradeRemoved_Parms Parms; \
	Parms.Weapon=Weapon; \
	Parms.Upgrade=Upgrade; \
	Parms.WeaponIndex=WeaponIndex; \
	AROnUpgradeRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_69_DELEGATE \
struct _Script_Hominina_eventAROnUpgradeInstalled_Parms \
{ \
	UARItemWeapon* Weapon; \
	UARWeaponUpgradeItem* Upgrade; \
	int8 WeaponIndex; \
}; \
static inline void FAROnUpgradeInstalled_DelegateWrapper(const FMulticastScriptDelegate& AROnUpgradeInstalled, UARItemWeapon* Weapon, UARWeaponUpgradeItem* Upgrade, int8 WeaponIndex) \
{ \
	_Script_Hominina_eventAROnUpgradeInstalled_Parms Parms; \
	Parms.Weapon=Weapon; \
	Parms.Upgrade=Upgrade; \
	Parms.WeaponIndex=WeaponIndex; \
	AROnUpgradeInstalled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_RPC_WRAPPERS \
	virtual void ClientRemoveMagazineMod_Implementation(int8 WeaponIdx); \
	virtual bool ServerRemoveMagazineMod_Validate(int8 ); \
	virtual void ServerRemoveMagazineMod_Implementation(int8 WeaponIdx); \
	virtual void ClientAddMagazineMod_Implementation(int8 WeaponIdx, int8 MagazineModIndex); \
	virtual bool ServerAddMagazineMod_Validate(int8 , int8 ); \
	virtual void ServerAddMagazineMod_Implementation(int8 WeaponIdx, int8 MagazineModIndex); \
	virtual void ClientPreviousWeapon_Implementation(int8 WeaponIndex, bool bPredictionSuccess); \
	virtual bool ServerPreviousWeapon_Validate(int8 ); \
	virtual void ServerPreviousWeapon_Implementation(int8 WeaponIndex); \
	virtual void ClientNextWeapon_Implementation(int8 WeaponIndex, bool bPredictionSuccess); \
	virtual bool ServerNextWeapon_Validate(int8 ); \
	virtual void ServerNextWeapon_Implementation(int8 WeaponIndex); \
	virtual void MulticastHolster_Implementation(FARWeaponRPC const& WeaponData); \
	virtual bool ServerHolster_Validate(FARWeaponRPC const& ); \
	virtual void ServerHolster_Implementation(FARWeaponRPC const& WeaponData); \
	virtual void MulticastUnequipWeapon_Implementation(int8 OldWeaponIndex, FARWeaponRPC const& WeaponData); \
	virtual void MulticastEquipWeapon_Implementation(int8 WeaponIndex, FARWeaponRPC const& WeaponData); \
	virtual void MulticastRemoveWeapon_Implementation(FARWeaponRPC const& WeaponData); \
	virtual void MulticastAddWeapon_Implementation(FARWeaponRPC const& WeaponData); \
 \
	DECLARE_FUNCTION(execClientRemoveMagazineMod) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientRemoveMagazineMod_Implementation(Z_Param_WeaponIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerRemoveMagazineMod) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerRemoveMagazineMod_Validate(Z_Param_WeaponIdx)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerRemoveMagazineMod_Validate")); \
			return; \
		} \
		P_THIS->ServerRemoveMagazineMod_Implementation(Z_Param_WeaponIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddMagazineMod) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIdx); \
		P_GET_PROPERTY(UInt8Property,Z_Param_MagazineModIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAddMagazineMod_Implementation(Z_Param_WeaponIdx,Z_Param_MagazineModIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddMagazineMod) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIdx); \
		P_GET_PROPERTY(UInt8Property,Z_Param_MagazineModIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddMagazineMod_Validate(Z_Param_WeaponIdx,Z_Param_MagazineModIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddMagazineMod_Validate")); \
			return; \
		} \
		P_THIS->ServerAddMagazineMod_Implementation(Z_Param_WeaponIdx,Z_Param_MagazineModIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsynWeaponLoaded) \
	{ \
		P_GET_OBJECT(UChildActorComponent,Z_Param_Component); \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_InWeapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AsynWeaponLoaded(Z_Param_Component,Z_Param_InWeapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPreviousWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIndex); \
		P_GET_UBOOL(Z_Param_bPredictionSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientPreviousWeapon_Implementation(Z_Param_WeaponIndex,Z_Param_bPredictionSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerPreviousWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerPreviousWeapon_Validate(Z_Param_WeaponIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerPreviousWeapon_Validate")); \
			return; \
		} \
		P_THIS->ServerPreviousWeapon_Implementation(Z_Param_WeaponIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientNextWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIndex); \
		P_GET_UBOOL(Z_Param_bPredictionSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientNextWeapon_Implementation(Z_Param_WeaponIndex,Z_Param_bPredictionSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNextWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerNextWeapon_Validate(Z_Param_WeaponIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNextWeapon_Validate")); \
			return; \
		} \
		P_THIS->ServerNextWeapon_Implementation(Z_Param_WeaponIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHolsterWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HolsterWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastHolster) \
	{ \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastHolster_Implementation(Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerHolster) \
	{ \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerHolster_Validate(Z_Param_WeaponData)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerHolster_Validate")); \
			return; \
		} \
		P_THIS->ServerHolster_Implementation(Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastUnequipWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_OldWeaponIndex); \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastUnequipWeapon_Implementation(Z_Param_OldWeaponIndex,Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastEquipWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIndex); \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastEquipWeapon_Implementation(Z_Param_WeaponIndex,Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastRemoveWeapon) \
	{ \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastRemoveWeapon_Implementation(Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastAddWeapon) \
	{ \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastAddWeapon_Implementation(Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAbilityAdded) \
	{ \
		P_GET_STRUCT(FAFAbilitySpec,Z_Param_Spec); \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_ServerHandle); \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_ClientHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAbilityAdded(Z_Param_Spec,Z_Param_ServerHandle,Z_Param_ClientHandle); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClientRemoveMagazineMod) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientRemoveMagazineMod_Implementation(Z_Param_WeaponIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerRemoveMagazineMod) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerRemoveMagazineMod_Validate(Z_Param_WeaponIdx)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerRemoveMagazineMod_Validate")); \
			return; \
		} \
		P_THIS->ServerRemoveMagazineMod_Implementation(Z_Param_WeaponIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAddMagazineMod) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIdx); \
		P_GET_PROPERTY(UInt8Property,Z_Param_MagazineModIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAddMagazineMod_Implementation(Z_Param_WeaponIdx,Z_Param_MagazineModIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddMagazineMod) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIdx); \
		P_GET_PROPERTY(UInt8Property,Z_Param_MagazineModIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddMagazineMod_Validate(Z_Param_WeaponIdx,Z_Param_MagazineModIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddMagazineMod_Validate")); \
			return; \
		} \
		P_THIS->ServerAddMagazineMod_Implementation(Z_Param_WeaponIdx,Z_Param_MagazineModIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsynWeaponLoaded) \
	{ \
		P_GET_OBJECT(UChildActorComponent,Z_Param_Component); \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_InWeapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AsynWeaponLoaded(Z_Param_Component,Z_Param_InWeapon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientPreviousWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIndex); \
		P_GET_UBOOL(Z_Param_bPredictionSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientPreviousWeapon_Implementation(Z_Param_WeaponIndex,Z_Param_bPredictionSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerPreviousWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerPreviousWeapon_Validate(Z_Param_WeaponIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerPreviousWeapon_Validate")); \
			return; \
		} \
		P_THIS->ServerPreviousWeapon_Implementation(Z_Param_WeaponIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientNextWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIndex); \
		P_GET_UBOOL(Z_Param_bPredictionSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientNextWeapon_Implementation(Z_Param_WeaponIndex,Z_Param_bPredictionSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerNextWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerNextWeapon_Validate(Z_Param_WeaponIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNextWeapon_Validate")); \
			return; \
		} \
		P_THIS->ServerNextWeapon_Implementation(Z_Param_WeaponIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHolsterWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HolsterWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastHolster) \
	{ \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastHolster_Implementation(Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerHolster) \
	{ \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerHolster_Validate(Z_Param_WeaponData)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerHolster_Validate")); \
			return; \
		} \
		P_THIS->ServerHolster_Implementation(Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastUnequipWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_OldWeaponIndex); \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastUnequipWeapon_Implementation(Z_Param_OldWeaponIndex,Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastEquipWeapon) \
	{ \
		P_GET_PROPERTY(UInt8Property,Z_Param_WeaponIndex); \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastEquipWeapon_Implementation(Z_Param_WeaponIndex,Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastRemoveWeapon) \
	{ \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastRemoveWeapon_Implementation(Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticastAddWeapon) \
	{ \
		P_GET_STRUCT(FARWeaponRPC,Z_Param_WeaponData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastAddWeapon_Implementation(Z_Param_WeaponData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAbilityAdded) \
	{ \
		P_GET_STRUCT(FAFAbilitySpec,Z_Param_Spec); \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_ServerHandle); \
		P_GET_STRUCT(FAFAbilitySpecHandle,Z_Param_ClientHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAbilityAdded(Z_Param_Spec,Z_Param_ServerHandle,Z_Param_ClientHandle); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_EVENT_PARMS \
	struct ARWeaponInventoryComponent_eventClientAddMagazineMod_Parms \
	{ \
		int8 WeaponIdx; \
		int8 MagazineModIndex; \
	}; \
	struct ARWeaponInventoryComponent_eventClientNextWeapon_Parms \
	{ \
		int8 WeaponIndex; \
		bool bPredictionSuccess; \
	}; \
	struct ARWeaponInventoryComponent_eventClientPreviousWeapon_Parms \
	{ \
		int8 WeaponIndex; \
		bool bPredictionSuccess; \
	}; \
	struct ARWeaponInventoryComponent_eventClientRemoveMagazineMod_Parms \
	{ \
		int8 WeaponIdx; \
	}; \
	struct ARWeaponInventoryComponent_eventMulticastAddWeapon_Parms \
	{ \
		FARWeaponRPC WeaponData; \
	}; \
	struct ARWeaponInventoryComponent_eventMulticastEquipWeapon_Parms \
	{ \
		int8 WeaponIndex; \
		FARWeaponRPC WeaponData; \
	}; \
	struct ARWeaponInventoryComponent_eventMulticastHolster_Parms \
	{ \
		FARWeaponRPC WeaponData; \
	}; \
	struct ARWeaponInventoryComponent_eventMulticastRemoveWeapon_Parms \
	{ \
		FARWeaponRPC WeaponData; \
	}; \
	struct ARWeaponInventoryComponent_eventMulticastUnequipWeapon_Parms \
	{ \
		int8 OldWeaponIndex; \
		FARWeaponRPC WeaponData; \
	}; \
	struct ARWeaponInventoryComponent_eventServerAddMagazineMod_Parms \
	{ \
		int8 WeaponIdx; \
		int8 MagazineModIndex; \
	}; \
	struct ARWeaponInventoryComponent_eventServerHolster_Parms \
	{ \
		FARWeaponRPC WeaponData; \
	}; \
	struct ARWeaponInventoryComponent_eventServerNextWeapon_Parms \
	{ \
		int8 WeaponIndex; \
	}; \
	struct ARWeaponInventoryComponent_eventServerPreviousWeapon_Parms \
	{ \
		int8 WeaponIndex; \
	}; \
	struct ARWeaponInventoryComponent_eventServerRemoveMagazineMod_Parms \
	{ \
		int8 WeaponIdx; \
	};


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_CALLBACK_WRAPPERS
#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARWeaponInventoryComponent(); \
	friend struct Z_Construct_UClass_UARWeaponInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UARWeaponInventoryComponent, UIFEquipmentComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARWeaponInventoryComponent)


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUARWeaponInventoryComponent(); \
	friend struct Z_Construct_UClass_UARWeaponInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UARWeaponInventoryComponent, UIFEquipmentComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARWeaponInventoryComponent)


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARWeaponInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARWeaponInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARWeaponInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARWeaponInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARWeaponInventoryComponent(UARWeaponInventoryComponent&&); \
	NO_API UARWeaponInventoryComponent(const UARWeaponInventoryComponent&); \
public:


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARWeaponInventoryComponent(UARWeaponInventoryComponent&&); \
	NO_API UARWeaponInventoryComponent(const UARWeaponInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARWeaponInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARWeaponInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARWeaponInventoryComponent)


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__POwner() { return STRUCT_OFFSET(UARWeaponInventoryComponent, POwner); } \
	FORCEINLINE static uint32 __PPO__WeaponInput() { return STRUCT_OFFSET(UARWeaponInventoryComponent, WeaponInput); }


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_74_PROLOG \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_EVENT_PARMS


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_CALLBACK_WRAPPERS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_INCLASS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_CALLBACK_WRAPPERS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARWeaponInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_Weapons_ARWeaponInventoryComponent_h


#define FOREACH_ENUM_EARWEAPONPOSITION(op) \
	op(EARWeaponPosition::Right) \
	op(EARWeaponPosition::Left) \
	op(EARWeaponPosition::BottomBack) \
	op(EARWeaponPosition::Side) \
	op(EARWeaponPosition::Equiped) 

enum class EARWeaponPosition;
template<> HOMININA_API UEnum* StaticEnum<EARWeaponPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
