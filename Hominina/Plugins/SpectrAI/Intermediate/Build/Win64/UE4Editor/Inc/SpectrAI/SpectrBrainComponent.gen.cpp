// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAI/Public/SpectrBrainComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectrBrainComponent() {}
// Cross Module References
	SPECTRAI_API UScriptStruct* Z_Construct_UScriptStruct_FGoalSpec();
	UPackage* Z_Construct_UPackage__Script_SpectrAI();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrConsideration_NoRegister();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrGoal_NoRegister();
	SPECTRAI_API UScriptStruct* Z_Construct_UScriptStruct_FSpectrAI();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrBrainComponent_NoRegister();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrBrainComponent();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent();
	SPECTRAI_API UFunction* Z_Construct_UFunction_USpectrBrainComponent_NextPlan();
	SPECTRAI_API UFunction* Z_Construct_UFunction_USpectrBrainComponent_StarPlanning();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FGoalSpec::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPECTRAI_API uint32 Get_Z_Construct_UScriptStruct_FGoalSpec_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoalSpec, Z_Construct_UPackage__Script_SpectrAI(), TEXT("GoalSpec"), sizeof(FGoalSpec), Get_Z_Construct_UScriptStruct_FGoalSpec_Hash());
	}
	return Singleton;
}
template<> SPECTRAI_API UScriptStruct* StaticStruct<FGoalSpec>()
{
	return FGoalSpec::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoalSpec(FGoalSpec::StaticStruct, TEXT("/Script/SpectrAI"), TEXT("GoalSpec"), false, nullptr, nullptr);
static struct FScriptStruct_SpectrAI_StaticRegisterNativesFGoalSpec
{
	FScriptStruct_SpectrAI_StaticRegisterNativesFGoalSpec()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GoalSpec")),new UScriptStruct::TCppStructOps<FGoalSpec>);
	}
} ScriptStruct_SpectrAI_StaticRegisterNativesFGoalSpec;
	struct Z_Construct_UScriptStruct_FGoalSpec_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Considerations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Considerations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Considerations_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Considerations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoalSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoalSpec>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Considerations_MetaData[] = {
		{ "Category", "GoalSpec" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Considerations = { "Considerations", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoalSpec, Considerations), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Considerations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Considerations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Considerations_Inner_MetaData[] = {
		{ "Category", "GoalSpec" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Considerations_Inner = { "Considerations", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USpectrConsideration_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Considerations_Inner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Considerations_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "GoalSpec" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoalSpec, Goal), Z_Construct_UClass_USpectrGoal_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoalSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Considerations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Considerations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoalSpec_Statics::NewProp_Goal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoalSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAI,
		nullptr,
		&NewStructOps,
		"GoalSpec",
		sizeof(FGoalSpec),
		alignof(FGoalSpec),
		Z_Construct_UScriptStruct_FGoalSpec_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoalSpec_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoalSpec()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoalSpec_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpectrAI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoalSpec"), sizeof(FGoalSpec), Get_Z_Construct_UScriptStruct_FGoalSpec_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoalSpec_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoalSpec_Hash() { return 1667988354U; }
class UScriptStruct* FSpectrAI::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPECTRAI_API uint32 Get_Z_Construct_UScriptStruct_FSpectrAI_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpectrAI, Z_Construct_UPackage__Script_SpectrAI(), TEXT("SpectrAI"), sizeof(FSpectrAI), Get_Z_Construct_UScriptStruct_FSpectrAI_Hash());
	}
	return Singleton;
}
template<> SPECTRAI_API UScriptStruct* StaticStruct<FSpectrAI>()
{
	return FSpectrAI::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpectrAI(FSpectrAI::StaticStruct, TEXT("/Script/SpectrAI"), TEXT("SpectrAI"), false, nullptr, nullptr);
static struct FScriptStruct_SpectrAI_StaticRegisterNativesFSpectrAI
{
	FScriptStruct_SpectrAI_StaticRegisterNativesFSpectrAI()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpectrAI")),new UScriptStruct::TCppStructOps<FSpectrAI>);
	}
} ScriptStruct_SpectrAI_StaticRegisterNativesFSpectrAI;
	struct Z_Construct_UScriptStruct_FSpectrAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectrAI_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpectrAI_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpectrAI>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpectrAI_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAI,
		nullptr,
		&NewStructOps,
		"SpectrAI",
		sizeof(FSpectrAI),
		alignof(FSpectrAI),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectrAI_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectrAI_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpectrAI()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpectrAI_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpectrAI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpectrAI"), sizeof(FSpectrAI), Get_Z_Construct_UScriptStruct_FSpectrAI_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpectrAI_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpectrAI_Hash() { return 1862394006U; }
	void USpectrBrainComponent::StaticRegisterNativesUSpectrBrainComponent()
	{
		UClass* Class = USpectrBrainComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NextPlan", &USpectrBrainComponent::execNextPlan },
			{ "StarPlanning", &USpectrBrainComponent::execStarPlanning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpectrBrainComponent_NextPlan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrBrainComponent_NextPlan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectrBrainComponent_NextPlan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectrBrainComponent, nullptr, "NextPlan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectrBrainComponent_NextPlan_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpectrBrainComponent_NextPlan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectrBrainComponent_NextPlan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectrBrainComponent_NextPlan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpectrBrainComponent_StarPlanning_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrBrainComponent_StarPlanning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectrBrainComponent_StarPlanning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectrBrainComponent, nullptr, "StarPlanning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectrBrainComponent_StarPlanning_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpectrBrainComponent_StarPlanning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectrBrainComponent_StarPlanning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectrBrainComponent_StarPlanning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpectrBrainComponent_NoRegister()
	{
		return USpectrBrainComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpectrBrainComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingPlan_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingPlan;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingPlan_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Goals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goals2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Goals2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Goals2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionList;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentState_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CurrentState_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Goal_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Goal_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpectrBrainComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTasksComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpectrBrainComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpectrBrainComponent_NextPlan, "NextPlan" }, // 1515945592
		{ &Z_Construct_UFunction_USpectrBrainComponent_StarPlanning, "StarPlanning" }, // 1653923489
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "SpectrBrainComponent.h" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentContext = { "CurrentContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, CurrentContext), Z_Construct_UClass_USpectrContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentContext_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "SpectrBrainComponent" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, Context), Z_Construct_UClass_USpectrContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentAction = { "CurrentAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, CurrentAction), Z_Construct_UClass_USpectrAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentAction_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_PendingPlan_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_PendingPlan = { "PendingPlan", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, PendingPlan), METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_PendingPlan_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_PendingPlan_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_PendingPlan_Inner = { "PendingPlan", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USpectrAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentGoal_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentGoal = { "CurrentGoal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, CurrentGoal), Z_Construct_UClass_USpectrGoal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentGoal_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals_MetaData[] = {
		{ "Category", "SpectrBrainComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals = { "Goals", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, Goals), METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals_Inner_MetaData[] = {
		{ "Category", "SpectrBrainComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals_Inner = { "Goals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USpectrGoal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals2_MetaData[] = {
		{ "Category", "SpectrBrainComponent" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals2 = { "Goals2", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, Goals2), METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals2_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals2_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals2_Inner = { "Goals2", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGoalSpec, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, Actions), METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Actions_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Actions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USpectrAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_ActionList_MetaData[] = {
		{ "Category", "SpectrBrainComponent" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_ActionList = { "ActionList", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, ActionList), METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_ActionList_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_ActionList_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_ActionList_Inner = { "ActionList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USpectrAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "SpectrBrainComponent" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, CurrentState), METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentState_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentState_Key_KeyProp = { "CurrentState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentState_ValueProp = { "CurrentState", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "SpectrBrainComponent" },
		{ "ModuleRelativePath", "Public/SpectrBrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrBrainComponent, Goal), METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goal_Key_KeyProp = { "Goal_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goal_ValueProp = { "Goal", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpectrBrainComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_PendingPlan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_PendingPlan_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goals2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Actions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Actions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_ActionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_ActionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentState_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_CurrentState_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goal_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrBrainComponent_Statics::NewProp_Goal_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectrBrainComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectrBrainComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpectrBrainComponent_Statics::ClassParams = {
		&USpectrBrainComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpectrBrainComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpectrBrainComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpectrBrainComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectrBrainComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpectrBrainComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpectrBrainComponent, 1641550269);
	template<> SPECTRAI_API UClass* StaticClass<USpectrBrainComponent>()
	{
		return USpectrBrainComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpectrBrainComponent(Z_Construct_UClass_USpectrBrainComponent, &USpectrBrainComponent::StaticClass, TEXT("/Script/SpectrAI"), TEXT("USpectrBrainComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectrBrainComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
