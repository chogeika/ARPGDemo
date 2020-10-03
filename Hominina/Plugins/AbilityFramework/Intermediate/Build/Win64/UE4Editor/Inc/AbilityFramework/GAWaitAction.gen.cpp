// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/LatentActions/GAWaitAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAWaitAction() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAWaitAction();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAWaitAction_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFTaskBase();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LatentActions/GAWaitAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAWaitAction, nullptr, "GAWaitActionDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGAWaitAction::StaticRegisterNativesUGAWaitAction()
	{
		UClass* Class = UGAWaitAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewGAWaitAction", &UGAWaitAction::execNewGAWaitAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics
	{
		struct GAWaitAction_eventNewGAWaitAction_Parms
		{
			UObject* InTaskOwner;
			float Time;
			UGAWaitAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTaskOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAWaitAction_eventNewGAWaitAction_Parms, ReturnValue), Z_Construct_UClass_UGAWaitAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAWaitAction_eventNewGAWaitAction_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::NewProp_InTaskOwner = { "InTaskOwner", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAWaitAction_eventNewGAWaitAction_Parms, InTaskOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::NewProp_InTaskOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "InTaskOwner, Priority" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Latent Actions" },
		{ "DefaultToSelf", "InTaskOwner" },
		{ "ModuleRelativePath", "Public/LatentActions/GAWaitAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAWaitAction, nullptr, "NewGAWaitAction", nullptr, nullptr, sizeof(GAWaitAction_eventNewGAWaitAction_Parms), Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAWaitAction_NoRegister()
	{
		return UGAWaitAction::StaticClass();
	}
	struct Z_Construct_UClass_UGAWaitAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInitialized_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAWaitAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAWaitAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature, "GAWaitActionDelegate__DelegateSignature" }, // 1829228654
		{ &Z_Construct_UFunction_UGAWaitAction_NewGAWaitAction, "NewGAWaitAction" }, // 130528735
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAWaitAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09""AbilityActions are generic (preferably C++) defined actions, which then can be added to ability and\n\x09the should be activated from ability. \n\x09Then can perform tasks, like spawn tagetting helpers (splines, circles), spawn actors, \n\x09gather targeting data etc.\n\n\x09Should they be activated automatically after ability is initialized, (it'e ability enterted in\n\x09""active state, which means it's ready to be fired and display helpers, but did not yet received input,\n\x09or should designer in blueprint decide when to launch actions ?).\n*/" },
		{ "ExposedAsyncProxy", "true" },
		{ "IncludePath", "LatentActions/GAWaitAction.h" },
		{ "ModuleRelativePath", "Public/LatentActions/GAWaitAction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AbilityActions are generic (preferably C++) defined actions, which then can be added to ability and\nthe should be activated from ability.\nThen can perform tasks, like spawn tagetting helpers (splines, circles), spawn actors,\ngather targeting data etc.\n\nShould they be activated automatically after ability is initialized, (it'e ability enterted in\nactive state, which means it's ready to be fired and display helpers, but did not yet received input,\nor should designer in blueprint decide when to launch actions ?)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnTick_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatentActions/GAWaitAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnTick = { "OnTick", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAWaitAction, OnTick), Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatentActions/GAWaitAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAWaitAction, OnFinish), Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnFinish_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatentActions/GAWaitAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnInitialized = { "OnInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAWaitAction, OnInitialized), Z_Construct_UDelegateFunction_UGAWaitAction_GAWaitActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnInitialized_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnInitialized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAWaitAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAWaitAction_Statics::NewProp_OnInitialized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAWaitAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAWaitAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAWaitAction_Statics::ClassParams = {
		&UGAWaitAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAWaitAction_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAWaitAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAWaitAction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAWaitAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAWaitAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAWaitAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAWaitAction, 349016604);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAWaitAction>()
	{
		return UGAWaitAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAWaitAction(Z_Construct_UClass_UGAWaitAction, &UGAWaitAction::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAWaitAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAWaitAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
