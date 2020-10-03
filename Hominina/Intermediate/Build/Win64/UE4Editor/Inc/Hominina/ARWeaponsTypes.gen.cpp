// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Weapons/ARWeaponsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARWeaponsTypes() {}
// Cross Module References
	HOMININA_API UEnum* Z_Construct_UEnum_Hominina_EARWeaponSlot();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	static UEnum* EARWeaponSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Hominina_EARWeaponSlot, Z_Construct_UPackage__Script_Hominina(), TEXT("EARWeaponSlot"));
		}
		return Singleton;
	}
	template<> HOMININA_API UEnum* StaticEnum<EARWeaponSlot>()
	{
		return EARWeaponSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARWeaponSlot(EARWeaponSlot_StaticEnum, TEXT("/Script/Hominina"), TEXT("EARWeaponSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Hominina_EARWeaponSlot_Hash() { return 1815575524U; }
	UEnum* Z_Construct_UEnum_Hominina_EARWeaponSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Hominina();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARWeaponSlot"), 0, Get_Z_Construct_UEnum_Hominina_EARWeaponSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARWeaponSlot::Slot1", (int64)EARWeaponSlot::Slot1 },
				{ "EARWeaponSlot::Slot2", (int64)EARWeaponSlot::Slot2 },
				{ "EARWeaponSlot::Slot3", (int64)EARWeaponSlot::Slot3 },
				{ "EARWeaponSlot::Slot4", (int64)EARWeaponSlot::Slot4 },
				{ "EARWeaponSlot::MAX", (int64)EARWeaponSlot::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MAX.Name", "EARWeaponSlot::MAX" },
				{ "ModuleRelativePath", "Public/Weapons/ARWeaponsTypes.h" },
				{ "Slot1.Name", "EARWeaponSlot::Slot1" },
				{ "Slot2.Name", "EARWeaponSlot::Slot2" },
				{ "Slot3.Name", "EARWeaponSlot::Slot3" },
				{ "Slot4.Name", "EARWeaponSlot::Slot4" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Hominina,
				nullptr,
				"EARWeaponSlot",
				"EARWeaponSlot",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
