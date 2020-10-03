// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/AI/ARAICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARAICharacter() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AARAICharacter_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARAICharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_AARAICharacter_GetAbilityComp();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityComponent_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_AARAICharacter_GetAttributeValue();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute();
	HOMININA_API UFunction* Z_Construct_UFunction_AARAICharacter_GetEffectsComponent();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectsComponent_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AAREnemySpawner_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityInterface_NoRegister();
// End Cross Module References
	void AARAICharacter::StaticRegisterNativesAARAICharacter()
	{
		UClass* Class = AARAICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilityComp", &AARAICharacter::execGetAbilityComp },
			{ "GetAttributeValue", &AARAICharacter::execGetAttributeValue },
			{ "GetEffectsComponent", &AARAICharacter::execGetEffectsComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics
	{
		struct ARAICharacter_eventGetAbilityComp_Parms
		{
			UAFAbilityComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARAICharacter_eventGetAbilityComp_Parms, ReturnValue), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "Comment", "/* IAFAbilityInterface- BEGIN */" },
		{ "ModuleRelativePath", "Public/AI/ARAICharacter.h" },
		{ "ToolTip", "IAFAbilityInterface- BEGIN" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARAICharacter, nullptr, "GetAbilityComp", nullptr, nullptr, sizeof(ARAICharacter_eventGetAbilityComp_Parms), Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARAICharacter_GetAbilityComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARAICharacter_GetAbilityComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics
	{
		struct ARAICharacter_eventGetAttributeValue_Parms
		{
			FGAAttribute AttributeIn;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARAICharacter_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::NewProp_AttributeIn = { "AttributeIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARAICharacter_eventGetAttributeValue_Parms, AttributeIn), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::NewProp_AttributeIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "ModuleRelativePath", "Public/AI/ARAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARAICharacter, nullptr, "GetAttributeValue", nullptr, nullptr, sizeof(ARAICharacter_eventGetAttributeValue_Parms), Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARAICharacter_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARAICharacter_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics
	{
		struct ARAICharacter_eventGetEffectsComponent_Parms
		{
			UAFEffectsComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARAICharacter_eventGetEffectsComponent_Parms, ReturnValue), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "ModuleRelativePath", "Public/AI/ARAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARAICharacter, nullptr, "GetEffectsComponent", nullptr, nullptr, sizeof(ARAICharacter_eventGetEffectsComponent_Parms), Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARAICharacter_GetEffectsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARAICharacter_GetEffectsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARAICharacter_NoRegister()
	{
		return AARAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AARAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectsComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Abilities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARAICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARAICharacter_GetAbilityComp, "GetAbilityComp" }, // 656132033
		{ &Z_Construct_UFunction_AARAICharacter_GetAttributeValue, "GetAttributeValue" }, // 3739051293
		{ &Z_Construct_UFunction_AARAICharacter_GetEffectsComponent, "GetEffectsComponent" }, // 201970093
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARAICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/ARAICharacter.h" },
		{ "ModuleRelativePath", "Public/AI/ARAICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARAICharacter_Statics::NewProp_SpawnedBy_MetaData[] = {
		{ "Category", "ActionRPGGame|Spawn" },
		{ "ModuleRelativePath", "Public/AI/ARAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARAICharacter_Statics::NewProp_SpawnedBy = { "SpawnedBy", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARAICharacter, SpawnedBy), Z_Construct_UClass_AAREnemySpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARAICharacter_Statics::NewProp_SpawnedBy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARAICharacter_Statics::NewProp_SpawnedBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARAICharacter_Statics::NewProp_EffectsComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/ARAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARAICharacter_Statics::NewProp_EffectsComponent = { "EffectsComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARAICharacter, EffectsComponent), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARAICharacter_Statics::NewProp_EffectsComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARAICharacter_Statics::NewProp_EffectsComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARAICharacter_Statics::NewProp_Abilities_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/ARAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARAICharacter_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARAICharacter, Abilities), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARAICharacter_Statics::NewProp_Abilities_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARAICharacter_Statics::NewProp_Abilities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARAICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARAICharacter_Statics::NewProp_SpawnedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARAICharacter_Statics::NewProp_EffectsComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARAICharacter_Statics::NewProp_Abilities,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AARAICharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAFAbilityInterface_NoRegister, (int32)VTABLE_OFFSET(AARAICharacter, IAFAbilityInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARAICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARAICharacter_Statics::ClassParams = {
		&AARAICharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARAICharacter_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AARAICharacter_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AARAICharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARAICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARAICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARAICharacter, 817591062);
	template<> HOMININA_API UClass* StaticClass<AARAICharacter>()
	{
		return AARAICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARAICharacter(Z_Construct_UClass_AARAICharacter, &AARAICharacter::StaticClass, TEXT("/Script/Hominina"), TEXT("AARAICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARAICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
