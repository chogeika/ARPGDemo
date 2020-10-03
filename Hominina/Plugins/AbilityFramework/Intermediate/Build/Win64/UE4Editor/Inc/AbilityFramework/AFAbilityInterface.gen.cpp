// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/AFAbilityInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAbilityInterface() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityInterface_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityComponent_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectsComponent_NoRegister();
// End Cross Module References
	void UAFAbilityInterface::StaticRegisterNativesUAFAbilityInterface()
	{
		UClass* Class = UAFAbilityInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilityComp", &IAFAbilityInterface::execGetAbilityComp },
			{ "GetAttributeValue", &IAFAbilityInterface::execGetAttributeValue },
			{ "GetEffectsComponent", &IAFAbilityInterface::execGetEffectsComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics
	{
		struct AFAbilityInterface_eventGetAbilityComp_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFAbilityInterface_eventGetAbilityComp_Parms, ReturnValue), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "ModuleRelativePath", "Public/AFAbilityInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFAbilityInterface, nullptr, "GetAbilityComp", nullptr, nullptr, sizeof(AFAbilityInterface_eventGetAbilityComp_Parms), Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics
	{
		struct AFAbilityInterface_eventGetAttributeValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFAbilityInterface_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::NewProp_AttributeIn = { "AttributeIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFAbilityInterface_eventGetAttributeValue_Parms, AttributeIn), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::NewProp_AttributeIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "ModuleRelativePath", "Public/AFAbilityInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFAbilityInterface, nullptr, "GetAttributeValue", nullptr, nullptr, sizeof(AFAbilityInterface_eventGetAttributeValue_Parms), Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics
	{
		struct AFAbilityInterface_eventGetEffectsComponent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFAbilityInterface_eventGetEffectsComponent_Parms, ReturnValue), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "ModuleRelativePath", "Public/AFAbilityInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFAbilityInterface, nullptr, "GetEffectsComponent", nullptr, nullptr, sizeof(AFAbilityInterface_eventGetEffectsComponent_Parms), Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAFAbilityInterface_NoRegister()
	{
		return UAFAbilityInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAFAbilityInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFAbilityInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAFAbilityInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAFAbilityInterface_GetAbilityComp, "GetAbilityComp" }, // 3840886730
		{ &Z_Construct_UFunction_UAFAbilityInterface_GetAttributeValue, "GetAttributeValue" }, // 3216037868
		{ &Z_Construct_UFunction_UAFAbilityInterface_GetEffectsComponent, "GetEffectsComponent" }, // 3314426841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFAbilityInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AFAbilityInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFAbilityInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAFAbilityInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFAbilityInterface_Statics::ClassParams = {
		&UAFAbilityInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAFAbilityInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFAbilityInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFAbilityInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFAbilityInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFAbilityInterface, 583458360);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFAbilityInterface>()
	{
		return UAFAbilityInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFAbilityInterface(Z_Construct_UClass_UAFAbilityInterface, &UAFAbilityInterface::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFAbilityInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFAbilityInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
