// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Weapons/ARWeaponInventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARWeaponInventoryComponent() {}
// Cross Module References
	HOMININA_API UFunction* Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponUpgradeItem_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemWeapon_NoRegister();
	HOMININA_API UFunction* Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature();
	HOMININA_API UEnum* Z_Construct_UEnum_Hominina_EARWeaponPosition();
	HOMININA_API UScriptStruct* Z_Construct_UScriptStruct_FARWeaponRPC();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	HOMININA_API UScriptStruct* Z_Construct_UScriptStruct_FARWeapon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HOMININA_API UClass* Z_Construct_UClass_AARWeaponBase_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponInventoryComponent_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponInventoryComponent();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFEquipmentComponent();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_HolsterWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_NextWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAbilitySpecHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAbilitySpec();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_PreviousWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics
	{
		struct _Script_Hominina_eventAROnUpgradeRemoved_Parms
		{
			UARItemWeapon* Weapon;
			UARWeaponUpgradeItem* Upgrade;
			int8 WeaponIndex;
		};
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Upgrade;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventAROnUpgradeRemoved_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::NewProp_Upgrade = { "Upgrade", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventAROnUpgradeRemoved_Parms, Upgrade), Z_Construct_UClass_UARWeaponUpgradeItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventAROnUpgradeRemoved_Parms, Weapon), Z_Construct_UClass_UARItemWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::NewProp_WeaponIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::NewProp_Upgrade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Hominina, nullptr, "AROnUpgradeRemoved__DelegateSignature", nullptr, nullptr, sizeof(_Script_Hominina_eventAROnUpgradeRemoved_Parms), Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Hominina_AROnUpgradeRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics
	{
		struct _Script_Hominina_eventAROnUpgradeInstalled_Parms
		{
			UARItemWeapon* Weapon;
			UARWeaponUpgradeItem* Upgrade;
			int8 WeaponIndex;
		};
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Upgrade;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventAROnUpgradeInstalled_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::NewProp_Upgrade = { "Upgrade", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventAROnUpgradeInstalled_Parms, Upgrade), Z_Construct_UClass_UARWeaponUpgradeItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Hominina_eventAROnUpgradeInstalled_Parms, Weapon), Z_Construct_UClass_UARItemWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::NewProp_WeaponIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::NewProp_Upgrade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Hominina, nullptr, "AROnUpgradeInstalled__DelegateSignature", nullptr, nullptr, sizeof(_Script_Hominina_eventAROnUpgradeInstalled_Parms), Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Hominina_AROnUpgradeInstalled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EARWeaponPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Hominina_EARWeaponPosition, Z_Construct_UPackage__Script_Hominina(), TEXT("EARWeaponPosition"));
		}
		return Singleton;
	}
	template<> HOMININA_API UEnum* StaticEnum<EARWeaponPosition>()
	{
		return EARWeaponPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARWeaponPosition(EARWeaponPosition_StaticEnum, TEXT("/Script/Hominina"), TEXT("EARWeaponPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Hominina_EARWeaponPosition_Hash() { return 4108142034U; }
	UEnum* Z_Construct_UEnum_Hominina_EARWeaponPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Hominina();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARWeaponPosition"), 0, Get_Z_Construct_UEnum_Hominina_EARWeaponPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARWeaponPosition::Right", (int64)EARWeaponPosition::Right },
				{ "EARWeaponPosition::Left", (int64)EARWeaponPosition::Left },
				{ "EARWeaponPosition::BottomBack", (int64)EARWeaponPosition::BottomBack },
				{ "EARWeaponPosition::Side", (int64)EARWeaponPosition::Side },
				{ "EARWeaponPosition::Equiped", (int64)EARWeaponPosition::Equiped },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BottomBack.Name", "EARWeaponPosition::BottomBack" },
				{ "Equiped.Name", "EARWeaponPosition::Equiped" },
				{ "Left.Name", "EARWeaponPosition::Left" },
				{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
				{ "Right.Name", "EARWeaponPosition::Right" },
				{ "Side.Name", "EARWeaponPosition::Side" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Hominina,
				nullptr,
				"EARWeaponPosition",
				"EARWeaponPosition",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FARWeaponRPC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOMININA_API uint32 Get_Z_Construct_UScriptStruct_FARWeaponRPC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARWeaponRPC, Z_Construct_UPackage__Script_Hominina(), TEXT("ARWeaponRPC"), sizeof(FARWeaponRPC), Get_Z_Construct_UScriptStruct_FARWeaponRPC_Hash());
	}
	return Singleton;
}
template<> HOMININA_API UScriptStruct* StaticStruct<FARWeaponRPC>()
{
	return FARWeaponRPC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARWeaponRPC(FARWeaponRPC::StaticStruct, TEXT("/Script/Hominina"), TEXT("ARWeaponRPC"), false, nullptr, nullptr);
static struct FScriptStruct_Hominina_StaticRegisterNativesFARWeaponRPC
{
	FScriptStruct_Hominina_StaticRegisterNativesFARWeaponRPC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARWeaponRPC")),new UScriptStruct::TCppStructOps<FARWeaponRPC>);
	}
} ScriptStruct_Hominina_StaticRegisterNativesFARWeaponRPC;
	struct Z_Construct_UScriptStruct_FARWeaponRPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachSlot;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AttachSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeaponRPC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARWeaponRPC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_AttachSlot_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_AttachSlot = { "AttachSlot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeaponRPC, AttachSlot), Z_Construct_UEnum_Hominina_EARWeaponPosition, METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_AttachSlot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_AttachSlot_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_AttachSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeaponRPC, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeaponRPC, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeaponRPC, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Index_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeaponRPC, Weapon), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Weapon_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Weapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARWeaponRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_AttachSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_AttachSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeaponRPC_Statics::NewProp_Weapon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARWeaponRPC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
		nullptr,
		&NewStructOps,
		"ARWeaponRPC",
		sizeof(FARWeaponRPC),
		alignof(FARWeaponRPC),
		Z_Construct_UScriptStruct_FARWeaponRPC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeaponRPC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARWeaponRPC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARWeaponRPC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Hominina();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARWeaponRPC"), sizeof(FARWeaponRPC), Get_Z_Construct_UScriptStruct_FARWeaponRPC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARWeaponRPC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARWeaponRPC_Hash() { return 2570915135U; }
class UScriptStruct* FARWeapon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOMININA_API uint32 Get_Z_Construct_UScriptStruct_FARWeapon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARWeapon, Z_Construct_UPackage__Script_Hominina(), TEXT("ARWeapon"), sizeof(FARWeapon), Get_Z_Construct_UScriptStruct_FARWeapon_Hash());
	}
	return Singleton;
}
template<> HOMININA_API UScriptStruct* StaticStruct<FARWeapon>()
{
	return FARWeapon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARWeapon(FARWeapon::StaticStruct, TEXT("/Script/Hominina"), TEXT("ARWeapon"), false, nullptr, nullptr);
static struct FScriptStruct_Hominina_StaticRegisterNativesFARWeapon
{
	FScriptStruct_Hominina_StaticRegisterNativesFARWeapon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARWeapon")),new UScriptStruct::TCppStructOps<FARWeapon>);
	}
} ScriptStruct_Hominina_StaticRegisterNativesFARWeapon;
	struct Z_Construct_UScriptStruct_FARWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_RepCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_NetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeapon_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARWeapon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARWeapon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_RepCounter_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_RepCounter = { "RepCounter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeapon, RepCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_RepCounter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_RepCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_NetIndex_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_NetIndex = { "NetIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeapon, NetIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_NetIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_NetIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeapon, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeapon, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeapon, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_SocketName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeapon, Item), Z_Construct_UClass_UARItemWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Attachment Test" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARWeapon, Weapon), Z_Construct_UClass_AARWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Weapon_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Weapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_RepCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_NetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARWeapon_Statics::NewProp_Weapon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARWeapon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
		nullptr,
		&NewStructOps,
		"ARWeapon",
		sizeof(FARWeapon),
		alignof(FARWeapon),
		Z_Construct_UScriptStruct_FARWeapon_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeapon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARWeapon_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FARWeapon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARWeapon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARWeapon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Hominina();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARWeapon"), sizeof(FARWeapon), Get_Z_Construct_UScriptStruct_FARWeapon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARWeapon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARWeapon_Hash() { return 514463819U; }
	static FName NAME_UARWeaponInventoryComponent_ClientAddMagazineMod = FName(TEXT("ClientAddMagazineMod"));
	void UARWeaponInventoryComponent::ClientAddMagazineMod(int8 WeaponIdx, int8 MagazineModIndex)
	{
		ARWeaponInventoryComponent_eventClientAddMagazineMod_Parms Parms;
		Parms.WeaponIdx=WeaponIdx;
		Parms.MagazineModIndex=MagazineModIndex;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_ClientAddMagazineMod),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_ClientNextWeapon = FName(TEXT("ClientNextWeapon"));
	void UARWeaponInventoryComponent::ClientNextWeapon(int8 WeaponIndex, bool bPredictionSuccess)
	{
		ARWeaponInventoryComponent_eventClientNextWeapon_Parms Parms;
		Parms.WeaponIndex=WeaponIndex;
		Parms.bPredictionSuccess=bPredictionSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_ClientNextWeapon),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_ClientPreviousWeapon = FName(TEXT("ClientPreviousWeapon"));
	void UARWeaponInventoryComponent::ClientPreviousWeapon(int8 WeaponIndex, bool bPredictionSuccess)
	{
		ARWeaponInventoryComponent_eventClientPreviousWeapon_Parms Parms;
		Parms.WeaponIndex=WeaponIndex;
		Parms.bPredictionSuccess=bPredictionSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_ClientPreviousWeapon),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_ClientRemoveMagazineMod = FName(TEXT("ClientRemoveMagazineMod"));
	void UARWeaponInventoryComponent::ClientRemoveMagazineMod(int8 WeaponIdx)
	{
		ARWeaponInventoryComponent_eventClientRemoveMagazineMod_Parms Parms;
		Parms.WeaponIdx=WeaponIdx;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_ClientRemoveMagazineMod),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_MulticastAddWeapon = FName(TEXT("MulticastAddWeapon"));
	void UARWeaponInventoryComponent::MulticastAddWeapon(FARWeaponRPC const& WeaponData)
	{
		ARWeaponInventoryComponent_eventMulticastAddWeapon_Parms Parms;
		Parms.WeaponData=WeaponData;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_MulticastAddWeapon),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_MulticastEquipWeapon = FName(TEXT("MulticastEquipWeapon"));
	void UARWeaponInventoryComponent::MulticastEquipWeapon(int8 WeaponIndex, FARWeaponRPC const& WeaponData)
	{
		ARWeaponInventoryComponent_eventMulticastEquipWeapon_Parms Parms;
		Parms.WeaponIndex=WeaponIndex;
		Parms.WeaponData=WeaponData;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_MulticastEquipWeapon),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_MulticastHolster = FName(TEXT("MulticastHolster"));
	void UARWeaponInventoryComponent::MulticastHolster(FARWeaponRPC const& WeaponData)
	{
		ARWeaponInventoryComponent_eventMulticastHolster_Parms Parms;
		Parms.WeaponData=WeaponData;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_MulticastHolster),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_MulticastRemoveWeapon = FName(TEXT("MulticastRemoveWeapon"));
	void UARWeaponInventoryComponent::MulticastRemoveWeapon(FARWeaponRPC const& WeaponData)
	{
		ARWeaponInventoryComponent_eventMulticastRemoveWeapon_Parms Parms;
		Parms.WeaponData=WeaponData;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_MulticastRemoveWeapon),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_MulticastUnequipWeapon = FName(TEXT("MulticastUnequipWeapon"));
	void UARWeaponInventoryComponent::MulticastUnequipWeapon(int8 OldWeaponIndex, FARWeaponRPC const& WeaponData)
	{
		ARWeaponInventoryComponent_eventMulticastUnequipWeapon_Parms Parms;
		Parms.OldWeaponIndex=OldWeaponIndex;
		Parms.WeaponData=WeaponData;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_MulticastUnequipWeapon),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_ServerAddMagazineMod = FName(TEXT("ServerAddMagazineMod"));
	void UARWeaponInventoryComponent::ServerAddMagazineMod(int8 WeaponIdx, int8 MagazineModIndex)
	{
		ARWeaponInventoryComponent_eventServerAddMagazineMod_Parms Parms;
		Parms.WeaponIdx=WeaponIdx;
		Parms.MagazineModIndex=MagazineModIndex;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_ServerAddMagazineMod),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_ServerHolster = FName(TEXT("ServerHolster"));
	void UARWeaponInventoryComponent::ServerHolster(FARWeaponRPC const& WeaponData)
	{
		ARWeaponInventoryComponent_eventServerHolster_Parms Parms;
		Parms.WeaponData=WeaponData;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_ServerHolster),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_ServerNextWeapon = FName(TEXT("ServerNextWeapon"));
	void UARWeaponInventoryComponent::ServerNextWeapon(int8 WeaponIndex)
	{
		ARWeaponInventoryComponent_eventServerNextWeapon_Parms Parms;
		Parms.WeaponIndex=WeaponIndex;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_ServerNextWeapon),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_ServerPreviousWeapon = FName(TEXT("ServerPreviousWeapon"));
	void UARWeaponInventoryComponent::ServerPreviousWeapon(int8 WeaponIndex)
	{
		ARWeaponInventoryComponent_eventServerPreviousWeapon_Parms Parms;
		Parms.WeaponIndex=WeaponIndex;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_ServerPreviousWeapon),&Parms);
	}
	static FName NAME_UARWeaponInventoryComponent_ServerRemoveMagazineMod = FName(TEXT("ServerRemoveMagazineMod"));
	void UARWeaponInventoryComponent::ServerRemoveMagazineMod(int8 WeaponIdx)
	{
		ARWeaponInventoryComponent_eventServerRemoveMagazineMod_Parms Parms;
		Parms.WeaponIdx=WeaponIdx;
		ProcessEvent(FindFunctionChecked(NAME_UARWeaponInventoryComponent_ServerRemoveMagazineMod),&Parms);
	}
	void UARWeaponInventoryComponent::StaticRegisterNativesUARWeaponInventoryComponent()
	{
		UClass* Class = UARWeaponInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsynWeaponLoaded", &UARWeaponInventoryComponent::execAsynWeaponLoaded },
			{ "ClientAddMagazineMod", &UARWeaponInventoryComponent::execClientAddMagazineMod },
			{ "ClientNextWeapon", &UARWeaponInventoryComponent::execClientNextWeapon },
			{ "ClientPreviousWeapon", &UARWeaponInventoryComponent::execClientPreviousWeapon },
			{ "ClientRemoveMagazineMod", &UARWeaponInventoryComponent::execClientRemoveMagazineMod },
			{ "HolsterWeapon", &UARWeaponInventoryComponent::execHolsterWeapon },
			{ "MulticastAddWeapon", &UARWeaponInventoryComponent::execMulticastAddWeapon },
			{ "MulticastEquipWeapon", &UARWeaponInventoryComponent::execMulticastEquipWeapon },
			{ "MulticastHolster", &UARWeaponInventoryComponent::execMulticastHolster },
			{ "MulticastRemoveWeapon", &UARWeaponInventoryComponent::execMulticastRemoveWeapon },
			{ "MulticastUnequipWeapon", &UARWeaponInventoryComponent::execMulticastUnequipWeapon },
			{ "NextWeapon", &UARWeaponInventoryComponent::execNextWeapon },
			{ "OnAbilityAdded", &UARWeaponInventoryComponent::execOnAbilityAdded },
			{ "PreviousWeapon", &UARWeaponInventoryComponent::execPreviousWeapon },
			{ "ServerAddMagazineMod", &UARWeaponInventoryComponent::execServerAddMagazineMod },
			{ "ServerHolster", &UARWeaponInventoryComponent::execServerHolster },
			{ "ServerNextWeapon", &UARWeaponInventoryComponent::execServerNextWeapon },
			{ "ServerPreviousWeapon", &UARWeaponInventoryComponent::execServerPreviousWeapon },
			{ "ServerRemoveMagazineMod", &UARWeaponInventoryComponent::execServerRemoveMagazineMod },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics
	{
		struct ARWeaponInventoryComponent_eventAsynWeaponLoaded_Parms
		{
			UChildActorComponent* Component;
			FARWeaponRPC InWeapon;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::NewProp_InWeapon = { "InWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventAsynWeaponLoaded_Parms, InWeapon), Z_Construct_UScriptStruct_FARWeaponRPC, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventAsynWeaponLoaded_Parms, Component), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::NewProp_InWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "AsynWeaponLoaded", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventAsynWeaponLoaded_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_MagazineModIndex;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::NewProp_MagazineModIndex = { "MagazineModIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventClientAddMagazineMod_Parms, MagazineModIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::NewProp_WeaponIdx = { "WeaponIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventClientAddMagazineMod_Parms, WeaponIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::NewProp_MagazineModIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::NewProp_WeaponIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "ClientAddMagazineMod", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventClientAddMagazineMod_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics
	{
		static void NewProp_bPredictionSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPredictionSuccess;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::NewProp_bPredictionSuccess_SetBit(void* Obj)
	{
		((ARWeaponInventoryComponent_eventClientNextWeapon_Parms*)Obj)->bPredictionSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::NewProp_bPredictionSuccess = { "bPredictionSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARWeaponInventoryComponent_eventClientNextWeapon_Parms), &Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::NewProp_bPredictionSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventClientNextWeapon_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::NewProp_bPredictionSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::NewProp_WeaponIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "ClientNextWeapon", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventClientNextWeapon_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics
	{
		static void NewProp_bPredictionSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPredictionSuccess;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::NewProp_bPredictionSuccess_SetBit(void* Obj)
	{
		((ARWeaponInventoryComponent_eventClientPreviousWeapon_Parms*)Obj)->bPredictionSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::NewProp_bPredictionSuccess = { "bPredictionSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARWeaponInventoryComponent_eventClientPreviousWeapon_Parms), &Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::NewProp_bPredictionSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventClientPreviousWeapon_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::NewProp_bPredictionSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::NewProp_WeaponIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "ClientPreviousWeapon", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventClientPreviousWeapon_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics::NewProp_WeaponIdx = { "WeaponIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventClientRemoveMagazineMod_Parms, WeaponIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics::NewProp_WeaponIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "ClientRemoveMagazineMod", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventClientRemoveMagazineMod_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_HolsterWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_HolsterWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_HolsterWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "HolsterWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_HolsterWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_HolsterWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_HolsterWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_HolsterWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::NewProp_WeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventMulticastAddWeapon_Parms, WeaponData), Z_Construct_UScriptStruct_FARWeaponRPC, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::NewProp_WeaponData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::NewProp_WeaponData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "MulticastAddWeapon", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventMulticastAddWeapon_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::NewProp_WeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventMulticastEquipWeapon_Parms, WeaponData), Z_Construct_UScriptStruct_FARWeaponRPC, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::NewProp_WeaponData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventMulticastEquipWeapon_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::NewProp_WeaponIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "MulticastEquipWeapon", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventMulticastEquipWeapon_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::NewProp_WeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventMulticastHolster_Parms, WeaponData), Z_Construct_UScriptStruct_FARWeaponRPC, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::NewProp_WeaponData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::NewProp_WeaponData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "MulticastHolster", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventMulticastHolster_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::NewProp_WeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventMulticastRemoveWeapon_Parms, WeaponData), Z_Construct_UScriptStruct_FARWeaponRPC, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::NewProp_WeaponData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::NewProp_WeaponData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "MulticastRemoveWeapon", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventMulticastRemoveWeapon_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_OldWeaponIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::NewProp_WeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventMulticastUnequipWeapon_Parms, WeaponData), Z_Construct_UScriptStruct_FARWeaponRPC, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::NewProp_WeaponData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::NewProp_OldWeaponIndex = { "OldWeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventMulticastUnequipWeapon_Parms, OldWeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::NewProp_OldWeaponIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "MulticastUnequipWeapon", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventMulticastUnequipWeapon_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_NextWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_NextWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_NextWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "NextWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_NextWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_NextWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_NextWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_NextWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics
	{
		struct ARWeaponInventoryComponent_eventOnAbilityAdded_Parms
		{
			FAFAbilitySpec Spec;
			FAFAbilitySpecHandle ServerHandle;
			FAFAbilitySpecHandle ClientHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::NewProp_ClientHandle = { "ClientHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventOnAbilityAdded_Parms, ClientHandle), Z_Construct_UScriptStruct_FAFAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::NewProp_ServerHandle = { "ServerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventOnAbilityAdded_Parms, ServerHandle), Z_Construct_UScriptStruct_FAFAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventOnAbilityAdded_Parms, Spec), Z_Construct_UScriptStruct_FAFAbilitySpec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::NewProp_ClientHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::NewProp_ServerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::NewProp_Spec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "OnAbilityAdded", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventOnAbilityAdded_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_PreviousWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_PreviousWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_PreviousWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "PreviousWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_PreviousWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_PreviousWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_PreviousWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_PreviousWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_MagazineModIndex;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::NewProp_MagazineModIndex = { "MagazineModIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventServerAddMagazineMod_Parms, MagazineModIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::NewProp_WeaponIdx = { "WeaponIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventServerAddMagazineMod_Parms, WeaponIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::NewProp_MagazineModIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::NewProp_WeaponIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "ServerAddMagazineMod", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventServerAddMagazineMod_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::NewProp_WeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventServerHolster_Parms, WeaponData), Z_Construct_UScriptStruct_FARWeaponRPC, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::NewProp_WeaponData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::NewProp_WeaponData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "ServerHolster", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventServerHolster_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventServerNextWeapon_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics::NewProp_WeaponIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "ServerNextWeapon", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventServerNextWeapon_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventServerPreviousWeapon_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics::NewProp_WeaponIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "ServerPreviousWeapon", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventServerPreviousWeapon_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeaponIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics::NewProp_WeaponIdx = { "WeaponIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponInventoryComponent_eventServerRemoveMagazineMod_Parms, WeaponIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics::NewProp_WeaponIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponInventoryComponent, nullptr, "ServerRemoveMagazineMod", nullptr, nullptr, sizeof(ARWeaponInventoryComponent_eventServerRemoveMagazineMod_Parms), Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARWeaponInventoryComponent_NoRegister()
	{
		return UARWeaponInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARWeaponInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponInput;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponInput_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_POwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARWeaponInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIFEquipmentComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARWeaponInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_AsynWeaponLoaded, "AsynWeaponLoaded" }, // 3907484013
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_ClientAddMagazineMod, "ClientAddMagazineMod" }, // 3633713409
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_ClientNextWeapon, "ClientNextWeapon" }, // 2373870502
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_ClientPreviousWeapon, "ClientPreviousWeapon" }, // 1214037760
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_ClientRemoveMagazineMod, "ClientRemoveMagazineMod" }, // 972465915
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_HolsterWeapon, "HolsterWeapon" }, // 81942368
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastAddWeapon, "MulticastAddWeapon" }, // 1164090931
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastEquipWeapon, "MulticastEquipWeapon" }, // 3205959670
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastHolster, "MulticastHolster" }, // 1310345974
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastRemoveWeapon, "MulticastRemoveWeapon" }, // 4172360046
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_MulticastUnequipWeapon, "MulticastUnequipWeapon" }, // 3473589096
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_NextWeapon, "NextWeapon" }, // 2848498168
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_OnAbilityAdded, "OnAbilityAdded" }, // 1457626643
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_PreviousWeapon, "PreviousWeapon" }, // 830406549
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_ServerAddMagazineMod, "ServerAddMagazineMod" }, // 91972594
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_ServerHolster, "ServerHolster" }, // 1858818416
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_ServerNextWeapon, "ServerNextWeapon" }, // 3438095740
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_ServerPreviousWeapon, "ServerPreviousWeapon" }, // 49496336
		{ &Z_Construct_UFunction_UARWeaponInventoryComponent_ServerRemoveMagazineMod, "ServerRemoveMagazineMod" }, // 173717531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Inventory" },
		{ "Comment", "/*\n\x09Manages currently equipped weapons (holstered and unholstered).\n*/" },
		{ "IncludePath", "Weapons/ARWeaponInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
		{ "ToolTip", "Manages currently equipped weapons (holstered and unholstered)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_WeaponInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_WeaponInput = { "WeaponInput", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponInventoryComponent, WeaponInput), METADATA_PARAMS(Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_WeaponInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_WeaponInput_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_WeaponInput_Inner = { "WeaponInput", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_POwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_POwner = { "POwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponInventoryComponent, POwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_POwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_POwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARWeaponInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_WeaponInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_WeaponInput_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponInventoryComponent_Statics::NewProp_POwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARWeaponInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARWeaponInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARWeaponInventoryComponent_Statics::ClassParams = {
		&UARWeaponInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARWeaponInventoryComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARWeaponInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARWeaponInventoryComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARWeaponInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARWeaponInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARWeaponInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARWeaponInventoryComponent, 3130646302);
	template<> HOMININA_API UClass* StaticClass<UARWeaponInventoryComponent>()
	{
		return UARWeaponInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARWeaponInventoryComponent(Z_Construct_UClass_UARWeaponInventoryComponent, &UARWeaponInventoryComponent::StaticClass, TEXT("/Script/Hominina"), TEXT("UARWeaponInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARWeaponInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
