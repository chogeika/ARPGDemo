// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/EffectTasks/AFEffectTask_EffectEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFEffectTask_EffectEvent() {}
// Cross Module References
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFEventData();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectTask_EffectEvent_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectTask_EffectEvent();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectTask();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectExtension_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectsComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics
	{
		struct _Script_AbilityFramework_eventAFEffectEventDelegate_Parms
		{
			FAFEventData Payload;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AbilityFramework_eventAFEffectEventDelegate_Parms, Payload), Z_Construct_UScriptStruct_FAFEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask_EffectEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AbilityFramework, nullptr, "AFEffectEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AbilityFramework_eventAFEffectEventDelegate_Parms), Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAFEffectTask_EffectEvent::StaticRegisterNativesUAFEffectTask_EffectEvent()
	{
		UClass* Class = UAFEffectTask_EffectEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ListenEffectEvent", &UAFEffectTask_EffectEvent::execListenEffectEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics
	{
		struct AFEffectTask_EffectEvent_eventListenEffectEvent_Parms
		{
			UGAEffectExtension* OwningExtension;
			FName TaskName;
			FGameplayTag EventTag;
			AActor* OptionalExternalTarget;
			bool OnlyTriggerOnce;
			UAFEffectTask_EffectEvent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningExtension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectTask_EffectEvent_eventListenEffectEvent_Parms, ReturnValue), Z_Construct_UClass_UAFEffectTask_EffectEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
	{
		((AFEffectTask_EffectEvent_eventListenEffectEvent_Parms*)Obj)->OnlyTriggerOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFEffectTask_EffectEvent_eventListenEffectEvent_Parms), &Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectTask_EffectEvent_eventListenEffectEvent_Parms, OptionalExternalTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectTask_EffectEvent_eventListenEffectEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectTask_EffectEvent_eventListenEffectEvent_Parms, TaskName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_OwningExtension = { "OwningExtension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFEffectTask_EffectEvent_eventListenEffectEvent_Parms, OwningExtension), Z_Construct_UClass_UGAEffectExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_OnlyTriggerOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_OptionalExternalTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_EventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_TaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::NewProp_OwningExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "AbilityFramework|Effects|Tasks" },
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "CPP_Default_OptionalExternalTarget", "None" },
		{ "DefaultToSelf", "OwningExtension" },
		{ "HidePin", "OwningExtension" },
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask_EffectEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAFEffectTask_EffectEvent, nullptr, "ListenEffectEvent", nullptr, nullptr, sizeof(AFEffectTask_EffectEvent_eventListenEffectEvent_Parms), Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAFEffectTask_EffectEvent_NoRegister()
	{
		return UAFEffectTask_EffectEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics
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
	UObject* (*const Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAFEffectTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAFEffectTask_EffectEvent_ListenEffectEvent, "ListenEffectEvent" }, // 2860238040
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Effects/EffectTasks/AFEffectTask_EffectEvent.h" },
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask_EffectEvent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::NewProp_OptionalExternalTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask_EffectEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFEffectTask_EffectEvent, OptionalExternalTarget), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::NewProp_OptionalExternalTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::NewProp_OptionalExternalTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::NewProp_OnEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/EffectTasks/AFEffectTask_EffectEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::NewProp_OnEvent = { "OnEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAFEffectTask_EffectEvent, OnEvent), Z_Construct_UDelegateFunction_AbilityFramework_AFEffectEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::NewProp_OnEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::NewProp_OnEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::NewProp_OptionalExternalTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::NewProp_OnEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAFEffectTask_EffectEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::ClassParams = {
		&UAFEffectTask_EffectEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAFEffectTask_EffectEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAFEffectTask_EffectEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAFEffectTask_EffectEvent, 2700928048);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UAFEffectTask_EffectEvent>()
	{
		return UAFEffectTask_EffectEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAFEffectTask_EffectEvent(Z_Construct_UClass_UAFEffectTask_EffectEvent, &UAFEffectTask_EffectEvent::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UAFEffectTask_EffectEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAFEffectTask_EffectEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
