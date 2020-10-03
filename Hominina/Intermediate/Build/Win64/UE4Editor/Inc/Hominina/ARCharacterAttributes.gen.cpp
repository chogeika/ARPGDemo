// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Attributes/ARCharacterAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARCharacterAttributes() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARCharacterAttributes_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARCharacterAttributes();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributesBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_UARCharacterAttributes_OnRep_Health();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeBase();
// End Cross Module References
	void UARCharacterAttributes::StaticRegisterNativesUARCharacterAttributes()
	{
		UClass* Class = UARCharacterAttributes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Health", &UARCharacterAttributes::execOnRep_Health },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARCharacterAttributes_OnRep_Health_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCharacterAttributes_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCharacterAttributes_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCharacterAttributes, nullptr, "OnRep_Health", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCharacterAttributes_OnRep_Health_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARCharacterAttributes_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCharacterAttributes_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARCharacterAttributes_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARCharacterAttributes_NoRegister()
	{
		return UARCharacterAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UARCharacterAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrowAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotgunAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotgunAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineGunAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MachineGunAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Energy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARCharacterAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGAAttributesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARCharacterAttributes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARCharacterAttributes_OnRep_Health, "OnRep_Health" }, // 1978798824
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterAttributes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Attributes/ARCharacterAttributes.h" },
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_ArrowAmmo_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_ArrowAmmo = { "ArrowAmmo", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCharacterAttributes, ArrowAmmo), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_ArrowAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_ArrowAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_ShotgunAmmo_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_ShotgunAmmo = { "ShotgunAmmo", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCharacterAttributes, ShotgunAmmo), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_ShotgunAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_ShotgunAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_MachineGunAmmo_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_MachineGunAmmo = { "MachineGunAmmo", nullptr, (EPropertyFlags)0x0010008000000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCharacterAttributes, MachineGunAmmo), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_MachineGunAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_MachineGunAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Ammo_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010008000000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCharacterAttributes, Ammo), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Ammo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010008000000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCharacterAttributes, Stamina), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Stamina_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0010008000000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCharacterAttributes, Energy), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Energy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Energy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010008000000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCharacterAttributes, Armor), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Armor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Shield_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Shield = { "Shield", nullptr, (EPropertyFlags)0x0010008000000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCharacterAttributes, Shield), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Shield_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Shield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Base" },
		{ "ModuleRelativePath", "Public/Attributes/ARCharacterAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010008100000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARCharacterAttributes, Health), Z_Construct_UScriptStruct_FAFAttributeBase, METADATA_PARAMS(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARCharacterAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_ArrowAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_ShotgunAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_MachineGunAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Energy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Shield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCharacterAttributes_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARCharacterAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARCharacterAttributes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARCharacterAttributes_Statics::ClassParams = {
		&UARCharacterAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARCharacterAttributes_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARCharacterAttributes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARCharacterAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARCharacterAttributes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARCharacterAttributes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARCharacterAttributes, 2815959012);
	template<> HOMININA_API UClass* StaticClass<UARCharacterAttributes>()
	{
		return UARCharacterAttributes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARCharacterAttributes(Z_Construct_UClass_UARCharacterAttributes, &UARCharacterAttributes::StaticClass, TEXT("/Script/Hominina"), TEXT("UARCharacterAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARCharacterAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
