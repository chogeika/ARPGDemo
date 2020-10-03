// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/EffectTasks/AFEffectTask_AttributeChange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFEffectTask_AttributeChange() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeChangedData();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectTask_AttributeChange_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectTask_AttributeChange();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectTask();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectExtension_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectsComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_AbilityFramework_eventAFTaskAttributeChangedDelegate_Parms
		{
			FAFAttributeChangedData Payload;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AbilityFramework_eventAFTaskAttributeChangedDelegate_Parms, Payload), Z_Construct_UScriptStruct_FAFAttributeChangedData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask_AttributeChange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework, nullptr, "AFTaskAttributeChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AbilityFramework_eventAFTaskAttributeChangedDelegate_Parms), Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAFEffectTask_AttributeChange::StaticRegisterNativesUAFEffectTask_AttributeChange()
	{
		UClass* Class = UAFEffectTask_AttributeChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ListenAttributeChanged", &UAFEffectTask_AttributeChange::execListenAttributeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics
	{
		struct AFEffectTask_AttributeChange_eventListenAttributeChanged_Parms
		{
			UGAEffectExtension* OwningExtension;
			FGAAttribute InAttribute;
			AActor* OptionalExternalTarget;
			bool OnlyTriggerOnce;
			UAFEffectTask_AttributeChange* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAttribute;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningExtension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectTask_AttributeChange_eventListenAttributeChanged_Parms, ReturnValue), Z_Construct_UClass_UAFEffectTask_AttributeChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
	{
		((AFEffectTask_AttributeChange_eventListenAttributeChanged_Parms*)Obj)->OnlyTriggerOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFEffectTask_AttributeChange_eventListenAttributeChanged_Parms), &Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectTask_AttributeChange_eventListenAttributeChanged_Parms, OptionalExternalTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_InAttribute = { "InAttribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectTask_AttributeChange_eventListenAttributeChanged_Parms, InAttribute), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_OwningExtension = { "OwningExtension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectTask_AttributeChange_eventListenAttributeChanged_Parms, OwningExtension), Z_Construct_UClass_UGAEffectExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_OnlyTriggerOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_OptionalExternalTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_InAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::NewProp_OwningExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "AbilityFramework|Effects|Tasks" },
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "CPP_Default_OptionalExternalTarget", "None" },
		{ "DefaultToSelf", "OwningExtension" },
		{ "HidePin", "OwningExtension" },
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask_AttributeChange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectTask_AttributeChange, nullptr, "ListenAttributeChanged", nullptr, nullptr, sizeof(AFEffectTask_AttributeChange_eventListenAttributeChanged_Parms), Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAFEffectTask_AttributeChange_NoRegister()
	{
		return UAFEffectTask_AttributeChange::StaticClass();
	}
	struct Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalExternalTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAFEffectTask_AttributeChange_ListenAttributeChanged, "ListenAttributeChanged" }, // 2984098164
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Effects/EffectTasks/AFEffectTask_AttributeChange.h" },
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask_AttributeChange.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::NewProp_OptionalExternalTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask_AttributeChange.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFEffectTask_AttributeChange, OptionalExternalTarget), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::NewProp_OptionalExternalTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::NewProp_OptionalExternalTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::NewProp_OnEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask_AttributeChange.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::NewProp_OnEvent = { "OnEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFEffectTask_AttributeChange, OnEvent), Z_Construct_UDelegateFunction_AbilityFramework_AFTaskAttributeChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::NewProp_OnEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::NewProp_OnEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::NewProp_OptionalExternalTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::NewProp_OnEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFEffectTask_AttributeChange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::ClassParams = {
		&UAFEffectTask_AttributeChange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFEffectTask_AttributeChange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFEffectTask_AttributeChange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFEffectTask_AttributeChange, 1248988869);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFEffectTask_AttributeChange>()
	{
		return UAFEffectTask_AttributeChange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFEffectTask_AttributeChange(Z_Construct_UClass_UAFEffectTask_AttributeChange, &UAFEffectTask_AttributeChange::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFEffectTask_AttributeChange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFEffectTask_AttributeChange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
