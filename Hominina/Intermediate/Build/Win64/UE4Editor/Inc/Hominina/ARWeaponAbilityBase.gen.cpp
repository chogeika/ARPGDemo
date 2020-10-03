// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Weapons/ARWeaponAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARWeaponAbilityBase() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponAbilityBase_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponAbilityBase();
	HOMININA_API UClass* Z_Construct_UClass_UARAbilityBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFFunctionModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_UARWeaponAbilityBase_ReloadWeapon();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEffectSpecHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFPropertytHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEffectContainerSimple();
	HOMININA_API UClass* Z_Construct_UClass_UARItemWeapon_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARWeaponBase_NoRegister();
// End Cross Module References
	void UARWeaponAbilityBase::StaticRegisterNativesUARWeaponAbilityBase()
	{
		UClass* Class = UARWeaponAbilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamageEffect", &UARWeaponAbilityBase::execApplyDamageEffect },
			{ "ReloadWeapon", &UARWeaponAbilityBase::execReloadWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics
	{
		struct ARWeaponAbilityBase_eventApplyDamageEffect_Parms
		{
			UObject* Target;
			FAFFunctionModifier Modifier;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponAbilityBase_eventApplyDamageEffect_Parms, Modifier), Z_Construct_UScriptStruct_FAFFunctionModifier, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARWeaponAbilityBase_eventApplyDamageEffect_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActionRPGGame|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponAbilityBase, nullptr, "ApplyDamageEffect", nullptr, nullptr, sizeof(ARWeaponAbilityBase_eventApplyDamageEffect_Parms), Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARWeaponAbilityBase_ReloadWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARWeaponAbilityBase_ReloadWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActionRPGGame|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARWeaponAbilityBase_ReloadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARWeaponAbilityBase, nullptr, "ReloadWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARWeaponAbilityBase_ReloadWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARWeaponAbilityBase_ReloadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARWeaponAbilityBase_ReloadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARWeaponAbilityBase_ReloadWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARWeaponAbilityBase_NoRegister()
	{
		return UARWeaponAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UARWeaponAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScopeSpecHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScopeSpecHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScopeEffectHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScopeEffectHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScopeUpgradeProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScopeUpgradeProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelSpecHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BarrelSpecHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelEffectHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BarrelEffectHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelUpgradeProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BarrelUpgradeProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineSpecHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MagazineSpecHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineEffectHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MagazineEffectHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineUpgradeProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MagazineUpgradeProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpgradeContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpgradeContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageEffects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDamageEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultDamageEffects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultDamageEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoToTake_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoToTake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARWeaponAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARAbilityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARWeaponAbilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARWeaponAbilityBase_ApplyDamageEffect, "ApplyDamageEffect" }, // 4170925552
		{ &Z_Construct_UFunction_UARWeaponAbilityBase_ReloadWeapon, "ReloadWeapon" }, // 2157819715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/ARWeaponAbilityBase.h" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeSpecHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeSpecHandle = { "ScopeSpecHandle", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, ScopeSpecHandle), Z_Construct_UScriptStruct_FAFEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeSpecHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeSpecHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeEffectHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeEffectHandle = { "ScopeEffectHandle", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, ScopeEffectHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeEffectHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeEffectHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeUpgradeProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeUpgradeProperty = { "ScopeUpgradeProperty", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, ScopeUpgradeProperty), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeUpgradeProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeUpgradeProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelSpecHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelSpecHandle = { "BarrelSpecHandle", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, BarrelSpecHandle), Z_Construct_UScriptStruct_FAFEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelSpecHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelSpecHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelEffectHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelEffectHandle = { "BarrelEffectHandle", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, BarrelEffectHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelEffectHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelEffectHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelUpgradeProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelUpgradeProperty = { "BarrelUpgradeProperty", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, BarrelUpgradeProperty), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelUpgradeProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelUpgradeProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineSpecHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineSpecHandle = { "MagazineSpecHandle", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, MagazineSpecHandle), Z_Construct_UScriptStruct_FAFEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineSpecHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineSpecHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineEffectHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineEffectHandle = { "MagazineEffectHandle", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, MagazineEffectHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineEffectHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineEffectHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineUpgradeProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineUpgradeProperty = { "MagazineUpgradeProperty", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, MagazineUpgradeProperty), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineUpgradeProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineUpgradeProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_UpgradeContainer_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Upgrades for this ability.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
		{ "ToolTip", "Upgrades for this ability." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_UpgradeContainer = { "UpgradeContainer", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, UpgradeContainer), Z_Construct_UScriptStruct_FAFEffectContainerSimple, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_UpgradeContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_UpgradeContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_WeaponItem_MetaData[] = {
		{ "Category", "ActionRPGGame|Weapon" },
		{ "Comment", "/*\n\x09\x09Weapon item to which this abiliy belongs.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
		{ "ToolTip", "Weapon item to which this abiliy belongs." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_WeaponItem = { "WeaponItem", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, WeaponItem), Z_Construct_UClass_UARItemWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_WeaponItem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_WeaponItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_WeaponActor_MetaData[] = {
		{ "Category", "ActionRPGGame|Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_WeaponActor = { "WeaponActor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, WeaponActor), Z_Construct_UClass_AARWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_WeaponActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_WeaponActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DamageEffects_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/*\n\x09\x09""Damage effects which are actually applied by this weapon. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
		{ "ToolTip", "Damage effects which are actually applied by this weapon." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DamageEffects = { "DamageEffects", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, DamageEffects), METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DamageEffects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DamageEffects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DamageEffects_Inner = { "DamageEffects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DefaultDamageEffects_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/*\n\x09\x09""Default damage effects used, when no upgrades are present for this weapon ability.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
		{ "ToolTip", "Default damage effects used, when no upgrades are present for this weapon ability." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DefaultDamageEffects = { "DefaultDamageEffects", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, DefaultDamageEffects), METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DefaultDamageEffects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DefaultDamageEffects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DefaultDamageEffects_Inner = { "DefaultDamageEffects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_AmmoToTake_MetaData[] = {
		{ "Category", "Weapon Reload Effects" },
		{ "Comment", "/* Amount of ammo to take from owner */" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
		{ "ToolTip", "Amount of ammo to take from owner" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_AmmoToTake = { "AmmoToTake", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, AmmoToTake), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_AmmoToTake_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_AmmoToTake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_AmmoToAdd_MetaData[] = {
		{ "Category", "Weapon Reload Effects" },
		{ "Comment", "/* Amount of ammunition to add to magazine */" },
		{ "ModuleRelativePath", "Public/Weapons/ARWeaponAbilityBase.h" },
		{ "ToolTip", "Amount of ammunition to add to magazine" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_AmmoToAdd = { "AmmoToAdd", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARWeaponAbilityBase, AmmoToAdd), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_AmmoToAdd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_AmmoToAdd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARWeaponAbilityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeSpecHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeEffectHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_ScopeUpgradeProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelSpecHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelEffectHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_BarrelUpgradeProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineSpecHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineEffectHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_MagazineUpgradeProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_UpgradeContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_WeaponItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_WeaponActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DamageEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DamageEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DefaultDamageEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_DefaultDamageEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_AmmoToTake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARWeaponAbilityBase_Statics::NewProp_AmmoToAdd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARWeaponAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARWeaponAbilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARWeaponAbilityBase_Statics::ClassParams = {
		&UARWeaponAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARWeaponAbilityBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARWeaponAbilityBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARWeaponAbilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARWeaponAbilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARWeaponAbilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARWeaponAbilityBase, 819940796);
	template<> HOMININA_API UClass* StaticClass<UARWeaponAbilityBase>()
	{
		return UARWeaponAbilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARWeaponAbilityBase(Z_Construct_UClass_UARWeaponAbilityBase, &UARWeaponAbilityBase::StaticClass, TEXT("/Script/Hominina"), TEXT("UARWeaponAbilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARWeaponAbilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
