// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/GAEffectField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEffectField() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_AGAEffectField_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_AGAEffectField();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_AGAEffectField_OnAbilityExecuted();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_AGAEffectField_OnOtherFieldOverlap();
// End Cross Module References
	static FName NAME_AGAEffectField_OnAbilityExecuted = FName(TEXT("OnAbilityExecuted"));
	void AGAEffectField::OnAbilityExecuted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGAEffectField_OnAbilityExecuted),NULL);
	}
	static FName NAME_AGAEffectField_OnOtherFieldOverlap = FName(TEXT("OnOtherFieldOverlap"));
	void AGAEffectField::OnOtherFieldOverlap()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGAEffectField_OnOtherFieldOverlap),NULL);
	}
	void AGAEffectField::StaticRegisterNativesAGAEffectField()
	{
		UClass* Class = AGAEffectField::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAbilityExecuted", &AGAEffectField::execOnAbilityExecuted },
			{ "OnOtherFieldOverlap", &AGAEffectField::execOnOtherFieldOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGAEffectField_OnAbilityExecuted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAEffectField_OnAbilityExecuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Field" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAEffectField_OnAbilityExecuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAEffectField, nullptr, "OnAbilityExecuted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGAEffectField_OnAbilityExecuted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGAEffectField_OnAbilityExecuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGAEffectField_OnAbilityExecuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGAEffectField_OnAbilityExecuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGAEffectField_OnOtherFieldOverlap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAEffectField_OnOtherFieldOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Field" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAEffectField_OnOtherFieldOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAEffectField, nullptr, "OnOtherFieldOverlap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGAEffectField_OnOtherFieldOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGAEffectField_OnOtherFieldOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGAEffectField_OnOtherFieldOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGAEffectField_OnOtherFieldOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGAEffectField_NoRegister()
	{
		return AGAEffectField::StaticClass();
	}
	struct Z_Construct_UClass_AGAEffectField_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFieldPersistent_MetaData[];
#endif
		static void NewProp_bIsFieldPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFieldPersistent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGAEffectField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGAEffectField_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGAEffectField_OnAbilityExecuted, "OnAbilityExecuted" }, // 1483411190
		{ &Z_Construct_UFunction_AGAEffectField_OnOtherFieldOverlap, "OnOtherFieldOverlap" }, // 1048303874
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAEffectField_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09""Base class for effect field.\n\x09These fields might exist in two states:\n\x09""1. As long as ability is channeled.\n\x09""2. They are persistent on their own, which means that ability only create them once\n\x09""and from create tim they might exist set amount of time (including indefinetly), or \n\x09until they are manually removed or destroyed.\n\n\x09Main use cases:\n\x09""1. Createing persistent level effects (fire wall, oil puddle, wall of ice etc).\n\x09""2. Spawning other actors (rain of meteors, other pawns).\n\x09\n\x09Possible functionaltity:\n\x09""1. Interacting with other fields (Wind field can extinguish fire field).\n\x09""2. Interacting with other direct damage/attribute changes (fire damage, can\n\x09ignite oil field, creating fire field).\n\x09Not sure about this. I would probabaly need to implement this functionality down the line in\n\x09GameSystem Module, or add GameAttributes dependency here.\n\n\x09""Fields are only created on server, and then replicated back to clients.\n\n\x09Need custom K2 Node to properly spawn this actor!. Default SpawnActorFromClass is\n\x09not sufficient.\n*/" },
		{ "IncludePath", "Effects/GAEffectField.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectField.h" },
		{ "ToolTip", "Base class for effect field.\nThese fields might exist in two states:\n1. As long as ability is channeled.\n2. They are persistent on their own, which means that ability only create them once\nand from create tim they might exist set amount of time (including indefinetly), or\nuntil they are manually removed or destroyed.\n\nMain use cases:\n1. Createing persistent level effects (fire wall, oil puddle, wall of ice etc).\n2. Spawning other actors (rain of meteors, other pawns).\n\nPossible functionaltity:\n1. Interacting with other fields (Wind field can extinguish fire field).\n2. Interacting with other direct damage/attribute changes (fire damage, can\nignite oil field, creating fire field).\nNot sure about this. I would probabaly need to implement this functionality down the line in\nGameSystem Module, or add GameAttributes dependency here.\n\nFields are only created on server, and then replicated back to clients.\n\nNeed custom K2 Node to properly spawn this actor!. Default SpawnActorFromClass is\nnot sufficient." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAEffectField_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/**\n\x09 *\x09How long this field will live in world ?\n\x09 *\x09Only applicable if bIsFieldPersistent = true;\n\x09 */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectField.h" },
		{ "ToolTip", "How long this field will live in world ?\nOnly applicable if bIsFieldPersistent = true;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAEffectField_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0011000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGAEffectField, Lifetime), METADATA_PARAMS(Z_Construct_UClass_AGAEffectField_Statics::NewProp_Lifetime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGAEffectField_Statics::NewProp_Lifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAEffectField_Statics::NewProp_bIsFieldPersistent_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/**\n\x09 *\x09If false, field will exist only as long as ability is channeled.\n\x09 *\x09Otherwise specific life time.\n\x09 */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectField.h" },
		{ "ToolTip", "If false, field will exist only as long as ability is channeled.\nOtherwise specific life time." },
	};
#endif
	void Z_Construct_UClass_AGAEffectField_Statics::NewProp_bIsFieldPersistent_SetBit(void* Obj)
	{
		((AGAEffectField*)Obj)->bIsFieldPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAEffectField_Statics::NewProp_bIsFieldPersistent = { "bIsFieldPersistent", nullptr, (EPropertyFlags)0x0011000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGAEffectField), &Z_Construct_UClass_AGAEffectField_Statics::NewProp_bIsFieldPersistent_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGAEffectField_Statics::NewProp_bIsFieldPersistent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGAEffectField_Statics::NewProp_bIsFieldPersistent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAEffectField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAEffectField_Statics::NewProp_Lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAEffectField_Statics::NewProp_bIsFieldPersistent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGAEffectField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAEffectField>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGAEffectField_Statics::ClassParams = {
		&AGAEffectField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGAEffectField_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AGAEffectField_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGAEffectField_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGAEffectField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGAEffectField()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGAEffectField_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGAEffectField, 2595867398);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<AGAEffectField>()
	{
		return AGAEffectField::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGAEffectField(Z_Construct_UClass_AGAEffectField, &AGAEffectField::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("AGAEffectField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGAEffectField);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
