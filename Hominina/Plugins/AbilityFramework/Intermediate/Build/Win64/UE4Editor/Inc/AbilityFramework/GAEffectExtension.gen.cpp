// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Effects/GAEffectExtension.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAEffectExtension() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectExtension_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAEffectExtension();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectApplied();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectAppliedCDO();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectExecuted();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectExecutedCOD();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectExpired();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectExpiredCDO();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectRemoved();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectRemovedCDO();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFTaskBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectsComponent_NoRegister();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectContext();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFLatentInterface_NoRegister();
// End Cross Module References
	static FName NAME_UGAEffectExtension_OnEffectApplied = FName(TEXT("OnEffectApplied"));
	void UGAEffectExtension::OnEffectApplied()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGAEffectExtension_OnEffectApplied),NULL);
	}
	static FName NAME_UGAEffectExtension_OnEffectAppliedCDO = FName(TEXT("OnEffectAppliedCDO"));
	void UGAEffectExtension::OnEffectAppliedCDO() const
	{
		const_cast<UGAEffectExtension*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGAEffectExtension_OnEffectAppliedCDO),NULL);
	}
	static FName NAME_UGAEffectExtension_OnEffectExecuted = FName(TEXT("OnEffectExecuted"));
	void UGAEffectExtension::OnEffectExecuted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGAEffectExtension_OnEffectExecuted),NULL);
	}
	static FName NAME_UGAEffectExtension_OnEffectExecutedCOD = FName(TEXT("OnEffectExecutedCOD"));
	void UGAEffectExtension::OnEffectExecutedCOD() const
	{
		const_cast<UGAEffectExtension*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGAEffectExtension_OnEffectExecutedCOD),NULL);
	}
	static FName NAME_UGAEffectExtension_OnEffectExpired = FName(TEXT("OnEffectExpired"));
	void UGAEffectExtension::OnEffectExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGAEffectExtension_OnEffectExpired),NULL);
	}
	static FName NAME_UGAEffectExtension_OnEffectExpiredCDO = FName(TEXT("OnEffectExpiredCDO"));
	void UGAEffectExtension::OnEffectExpiredCDO() const
	{
		const_cast<UGAEffectExtension*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGAEffectExtension_OnEffectExpiredCDO),NULL);
	}
	static FName NAME_UGAEffectExtension_OnEffectRemoved = FName(TEXT("OnEffectRemoved"));
	void UGAEffectExtension::OnEffectRemoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGAEffectExtension_OnEffectRemoved),NULL);
	}
	static FName NAME_UGAEffectExtension_OnEffectRemovedCDO = FName(TEXT("OnEffectRemovedCDO"));
	void UGAEffectExtension::OnEffectRemovedCDO() const
	{
		const_cast<UGAEffectExtension*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGAEffectExtension_OnEffectRemovedCDO),NULL);
	}
	void UGAEffectExtension::StaticRegisterNativesUGAEffectExtension()
	{
	}
	struct Z_Construct_UFunction_UGAEffectExtension_OnEffectApplied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAEffectExtension_OnEffectApplied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event Graph" },
		{ "Comment", "/*\n\x09\x09This event is always executed once upon application.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
		{ "ToolTip", "This event is always executed once upon application." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAEffectExtension_OnEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAEffectExtension, nullptr, "OnEffectApplied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAEffectExtension_OnEffectApplied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectExtension_OnEffectApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAEffectExtension_OnEffectApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAEffectExtension_OnEffectAppliedCDO_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAEffectExtension_OnEffectAppliedCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event Graph" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAEffectExtension_OnEffectAppliedCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAEffectExtension, nullptr, "OnEffectAppliedCDO", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAEffectExtension_OnEffectAppliedCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectExtension_OnEffectAppliedCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectAppliedCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAEffectExtension_OnEffectAppliedCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAEffectExtension_OnEffectExecuted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAEffectExtension_OnEffectExecuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event Graph" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAEffectExtension_OnEffectExecuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAEffectExtension, nullptr, "OnEffectExecuted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAEffectExtension_OnEffectExecuted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectExtension_OnEffectExecuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectExecuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAEffectExtension_OnEffectExecuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAEffectExtension_OnEffectExecutedCOD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAEffectExtension_OnEffectExecutedCOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event Graph" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAEffectExtension_OnEffectExecutedCOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAEffectExtension, nullptr, "OnEffectExecutedCOD", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAEffectExtension_OnEffectExecutedCOD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectExtension_OnEffectExecutedCOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectExecutedCOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAEffectExtension_OnEffectExecutedCOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAEffectExtension_OnEffectExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAEffectExtension_OnEffectExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event Graph" },
		{ "Comment", "/*\n\x09\x09""Event executed when effet naturally expires.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
		{ "ToolTip", "Event executed when effet naturally expires." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAEffectExtension_OnEffectExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAEffectExtension, nullptr, "OnEffectExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAEffectExtension_OnEffectExpired_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectExtension_OnEffectExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAEffectExtension_OnEffectExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAEffectExtension_OnEffectExpiredCDO_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAEffectExtension_OnEffectExpiredCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event Graph" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAEffectExtension_OnEffectExpiredCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAEffectExtension, nullptr, "OnEffectExpiredCDO", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAEffectExtension_OnEffectExpiredCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectExtension_OnEffectExpiredCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectExpiredCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAEffectExtension_OnEffectExpiredCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAEffectExtension_OnEffectRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAEffectExtension_OnEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event Graph" },
		{ "Comment", "/*\n\x09\x09""Event executed when this effect is removed by force.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
		{ "ToolTip", "Event executed when this effect is removed by force." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAEffectExtension_OnEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAEffectExtension, nullptr, "OnEffectRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAEffectExtension_OnEffectRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectExtension_OnEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAEffectExtension_OnEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAEffectExtension_OnEffectRemovedCDO_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAEffectExtension_OnEffectRemovedCDO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event Graph" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAEffectExtension_OnEffectRemovedCDO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAEffectExtension, nullptr, "OnEffectRemovedCDO", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAEffectExtension_OnEffectRemovedCDO_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAEffectExtension_OnEffectRemovedCDO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAEffectExtension_OnEffectRemovedCDO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAEffectExtension_OnEffectRemovedCDO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAEffectExtension_NoRegister()
	{
		return UGAEffectExtension::StaticClass();
	}
	struct Z_Construct_UClass_UGAEffectExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Tasks;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tasks_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tasks_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ActiveTasks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveTasks_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAEffectExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAEffectExtension_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAEffectExtension_OnEffectApplied, "OnEffectApplied" }, // 2650110120
		{ &Z_Construct_UFunction_UGAEffectExtension_OnEffectAppliedCDO, "OnEffectAppliedCDO" }, // 883215517
		{ &Z_Construct_UFunction_UGAEffectExtension_OnEffectExecuted, "OnEffectExecuted" }, // 3051415624
		{ &Z_Construct_UFunction_UGAEffectExtension_OnEffectExecutedCOD, "OnEffectExecutedCOD" }, // 2108968189
		{ &Z_Construct_UFunction_UGAEffectExtension_OnEffectExpired, "OnEffectExpired" }, // 2733841314
		{ &Z_Construct_UFunction_UGAEffectExtension_OnEffectExpiredCDO, "OnEffectExpiredCDO" }, // 4282193902
		{ &Z_Construct_UFunction_UGAEffectExtension_OnEffectRemoved, "OnEffectRemoved" }, // 2081329120
		{ &Z_Construct_UFunction_UGAEffectExtension_OnEffectRemovedCDO, "OnEffectRemovedCDO" }, // 2388324377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectExtension_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09Instanced effect with active event graph, where you can bind events\n\x09on application.\n*/" },
		{ "IncludePath", "Effects/GAEffectExtension.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Instanced effect with active event graph, where you can bind events\non application." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Tasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAEffectExtension, Tasks), METADATA_PARAMS(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Tasks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Tasks_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Tasks_Key_KeyProp = { "Tasks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Tasks_ValueProp = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAFTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_ActiveTasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_ActiveTasks = { "ActiveTasks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAEffectExtension, ActiveTasks), METADATA_PARAMS(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_ActiveTasks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_ActiveTasks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_ActiveTasks_ElementProp = { "ActiveTasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAFTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Avatar_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAEffectExtension, Avatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Avatar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Avatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Comment", "/* Component from this effect has originated (Effect Instigator) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
		{ "ToolTip", "Component from this effect has originated (Effect Instigator)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAEffectExtension, SourceComponent), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_SourceComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_SourceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_OwningComponent_MetaData[] = {
		{ "Comment", "/*Component which actually owns this Effect (Effect Target) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
		{ "ToolTip", "Component which actually owns this Effect (Effect Target)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAEffectExtension, OwningComponent), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_OwningComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_OwningComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/Effects/GAEffectExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAEffectExtension, Context), Z_Construct_UScriptStruct_FGAEffectContext, METADATA_PARAMS(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAEffectExtension_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Tasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Tasks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Tasks_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_ActiveTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_ActiveTasks_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Avatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_SourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_OwningComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAEffectExtension_Statics::NewProp_Context,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGAEffectExtension_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAFLatentInterface_NoRegister, (int32)VTABLE_OFFSET(UGAEffectExtension, IAFLatentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAEffectExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAEffectExtension>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAEffectExtension_Statics::ClassParams = {
		&UGAEffectExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAEffectExtension_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAEffectExtension_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAEffectExtension_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAEffectExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAEffectExtension()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAEffectExtension_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAEffectExtension, 682739467);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAEffectExtension>()
	{
		return UGAEffectExtension::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAEffectExtension(Z_Construct_UClass_UGAEffectExtension, &UGAEffectExtension::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAEffectExtension"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAEffectExtension);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
