// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Weapons/ARItemWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARItemWeapon() {}
// Cross Module References
	HOMININA_API UEnum* Z_Construct_UEnum_Hominina_EARWeaponUpgradeType();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UClass* Z_Construct_UClass_UARItemWeapon_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemWeapon();
	HOMININA_API UClass* Z_Construct_UClass_UARItemBase();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAbilitySpecHandle();
	HOMININA_API UClass* Z_Construct_UClass_UARMagazineUpgradeItem_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponAbilityBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HOMININA_API UClass* Z_Construct_UClass_AARWeaponBase_NoRegister();
	HOMININA_API UScriptStruct* Z_Construct_UScriptStruct_FARGunAttributesItem();
// End Cross Module References
	static UEnum* EARWeaponUpgradeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Hominina_EARWeaponUpgradeType, Z_Construct_UPackage__Script_Hominina(), TEXT("EARWeaponUpgradeType"));
		}
		return Singleton;
	}
	template<> HOMININA_API UEnum* StaticEnum<EARWeaponUpgradeType>()
	{
		return EARWeaponUpgradeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARWeaponUpgradeType(EARWeaponUpgradeType_StaticEnum, TEXT("/Script/Hominina"), TEXT("EARWeaponUpgradeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Hominina_EARWeaponUpgradeType_Hash() { return 3825724626U; }
	UEnum* Z_Construct_UEnum_Hominina_EARWeaponUpgradeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Hominina();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARWeaponUpgradeType"), 0, Get_Z_Construct_UEnum_Hominina_EARWeaponUpgradeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARWeaponUpgradeType::Magazine", (int64)EARWeaponUpgradeType::Magazine },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Magazine.Name", "EARWeaponUpgradeType::Magazine" },
				{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Hominina,
				nullptr,
				"EARWeaponUpgradeType",
				"EARWeaponUpgradeType",
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
	void UARItemWeapon::StaticRegisterNativesUARItemWeapon()
	{
	}
	UClass* Z_Construct_UClass_UARItemWeapon_NoRegister()
	{
		return UARItemWeapon::StaticClass();
	}
	struct Z_Construct_UClass_UARItemWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineUpgradeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagazineUpgradeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineModification_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagazineModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipedPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipedPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HolsteredRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HolsteredRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HolsteredPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HolsteredPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratedAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Ability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARItemWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/ARItemWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_AbilityHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, AbilityHandle), Z_Construct_UScriptStruct_FAFAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_AbilityHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_AbilityHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_MagazineUpgradeValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_MagazineUpgradeValue = { "MagazineUpgradeValue", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, MagazineUpgradeValue), METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_MagazineUpgradeValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_MagazineUpgradeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_MagazineModification_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "//possibly replace with struct containing identical fields.\n//so it can be easier serialized and saved.\n" },
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
		{ "ToolTip", "possibly replace with struct containing identical fields.\nso it can be easier serialized and saved." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_MagazineModification = { "MagazineModification", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, MagazineModification), Z_Construct_UClass_UARMagazineUpgradeItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_MagazineModification_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_MagazineModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_AbilityInstance_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_AbilityInstance = { "AbilityInstance", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, AbilityInstance), Z_Construct_UClass_UARWeaponAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_AbilityInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_AbilityInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_EquipedRotation_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_EquipedRotation = { "EquipedRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, EquipedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_EquipedRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_EquipedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_EquipedPosition_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_EquipedPosition = { "EquipedPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, EquipedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_EquipedPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_EquipedPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_HolsteredRotation_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_HolsteredRotation = { "HolsteredRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, HolsteredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_HolsteredRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_HolsteredRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_HolsteredPosition_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_HolsteredPosition = { "HolsteredPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, HolsteredPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_HolsteredPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_HolsteredPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, Weapon), Z_Construct_UClass_AARWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_Weapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_GeneratedAttributes_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_GeneratedAttributes = { "GeneratedAttributes", nullptr, (EPropertyFlags)0x0010008001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, GeneratedAttributes), Z_Construct_UScriptStruct_FARGunAttributesItem, METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_GeneratedAttributes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_GeneratedAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemWeapon_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Weapons/ARItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UARItemWeapon_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARItemWeapon, Ability), Z_Construct_UClass_UARWeaponAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_Ability_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::NewProp_Ability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARItemWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_AbilityHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_MagazineUpgradeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_MagazineModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_AbilityInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_EquipedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_EquipedPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_HolsteredRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_HolsteredPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_GeneratedAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARItemWeapon_Statics::NewProp_Ability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARItemWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARItemWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARItemWeapon_Statics::ClassParams = {
		&UARItemWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARItemWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARItemWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARItemWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARItemWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARItemWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARItemWeapon, 1962999109);
	template<> HOMININA_API UClass* StaticClass<UARItemWeapon>()
	{
		return UARItemWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARItemWeapon(Z_Construct_UClass_UARItemWeapon, &UARItemWeapon::StaticClass, TEXT("/Script/Hominina"), TEXT("UARItemWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARItemWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
