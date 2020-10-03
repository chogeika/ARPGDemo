// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/LatentActions/AFTaskBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFTaskBase() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFTaskBase_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFTaskBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFTaskBase_ReadyForActivation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UAFTaskBase::StaticRegisterNativesUAFTaskBase()
	{
		UClass* Class = UAFTaskBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadyForActivation", &UAFTaskBase::execReadyForActivation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAFTaskBase_ReadyForActivation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFTaskBase_ReadyForActivation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Latent Action" },
		{ "ModuleRelativePath", "Public/LatentActions/AFTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFTaskBase_ReadyForActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFTaskBase, nullptr, "ReadyForActivation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFTaskBase_ReadyForActivation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFTaskBase_ReadyForActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFTaskBase_ReadyForActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFTaskBase_ReadyForActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAFTaskBase_NoRegister()
	{
		return UAFTaskBase::StaticClass();
	}
	struct Z_Construct_UClass_UAFTaskBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFTaskBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAFTaskBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAFTaskBase_ReadyForActivation, "ReadyForActivation" }, // 2096643377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFTaskBase_Statics::Class_MetaDataParams[] = {
		{ "ExposedAsyncProxy", "true" },
		{ "IncludePath", "LatentActions/AFTaskBase.h" },
		{ "ModuleRelativePath", "Public/LatentActions/AFTaskBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFTaskBase_Statics::NewProp_TaskOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatentActions/AFTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAFTaskBase_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFTaskBase, TaskOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAFTaskBase_Statics::NewProp_TaskOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFTaskBase_Statics::NewProp_TaskOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFTaskBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFTaskBase_Statics::NewProp_TaskOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFTaskBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFTaskBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFTaskBase_Statics::ClassParams = {
		&UAFTaskBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAFTaskBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAFTaskBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFTaskBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFTaskBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFTaskBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFTaskBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFTaskBase, 4063906463);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFTaskBase>()
	{
		return UAFTaskBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFTaskBase(Z_Construct_UClass_UAFTaskBase, &UAFTaskBase::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFTaskBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFTaskBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
