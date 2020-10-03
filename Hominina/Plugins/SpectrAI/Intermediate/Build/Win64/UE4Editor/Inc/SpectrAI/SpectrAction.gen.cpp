// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpectrAI/Public/SpectrAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectrAction() {}
// Cross Module References
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrAction_NoRegister();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpectrAI();
	SPECTRAI_API UFunction* Z_Construct_UFunction_USpectrAction_ActionFinished();
	SPECTRAI_API UFunction* Z_Construct_UFunction_USpectrAction_EvaluateCondition();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrContext_NoRegister();
	SPECTRAI_API UFunction* Z_Construct_UFunction_USpectrAction_FinishMove();
	SPECTRAI_API UClass* Z_Construct_UClass_USpectrBrainComponent_NoRegister();
	SPECTRAI_API UFunction* Z_Construct_UFunction_USpectrAction_MoveTo();
	SPECTRAI_API UFunction* Z_Construct_UFunction_USpectrAction_MoveToTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SPECTRAI_API UFunction* Z_Construct_UFunction_USpectrAction_OnExecute();
	SPECTRAI_API UFunction* Z_Construct_UFunction_USpectrAction_OnMoveFinished();
	SPECTRAI_API UFunction* Z_Construct_UFunction_USpectrAction_Score();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	static FName NAME_USpectrAction_EvaluateCondition = FName(TEXT("EvaluateCondition"));
	bool USpectrAction::EvaluateCondition(USpectrContext* InContext, AAIController* AIController)
	{
		SpectrAction_eventEvaluateCondition_Parms Parms;
		Parms.InContext=InContext;
		Parms.AIController=AIController;
		ProcessEvent(FindFunctionChecked(NAME_USpectrAction_EvaluateCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USpectrAction_MoveTo = FName(TEXT("MoveTo"));
	void USpectrAction::MoveTo(USpectrBrainComponent* Brain)
	{
		SpectrAction_eventMoveTo_Parms Parms;
		Parms.Brain=Brain;
		ProcessEvent(FindFunctionChecked(NAME_USpectrAction_MoveTo),&Parms);
	}
	static FName NAME_USpectrAction_OnExecute = FName(TEXT("OnExecute"));
	void USpectrAction::OnExecute(USpectrContext* InContext, AAIController* AIController, USpectrBrainComponent* Brain)
	{
		SpectrAction_eventOnExecute_Parms Parms;
		Parms.InContext=InContext;
		Parms.AIController=AIController;
		Parms.Brain=Brain;
		ProcessEvent(FindFunctionChecked(NAME_USpectrAction_OnExecute),&Parms);
	}
	static FName NAME_USpectrAction_OnMoveFinished = FName(TEXT("OnMoveFinished"));
	void USpectrAction::OnMoveFinished(USpectrContext* InContext, AAIController* AIController, USpectrBrainComponent* Brain)
	{
		SpectrAction_eventOnMoveFinished_Parms Parms;
		Parms.InContext=InContext;
		Parms.AIController=AIController;
		Parms.Brain=Brain;
		ProcessEvent(FindFunctionChecked(NAME_USpectrAction_OnMoveFinished),&Parms);
	}
	static FName NAME_USpectrAction_Score = FName(TEXT("Score"));
	float USpectrAction::Score(USpectrContext* InContext, AAIController* AIController)
	{
		SpectrAction_eventScore_Parms Parms;
		Parms.InContext=InContext;
		Parms.AIController=AIController;
		ProcessEvent(FindFunctionChecked(NAME_USpectrAction_Score),&Parms);
		return Parms.ReturnValue;
	}
	void USpectrAction::StaticRegisterNativesUSpectrAction()
	{
		UClass* Class = USpectrAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActionFinished", &USpectrAction::execActionFinished },
			{ "EvaluateCondition", &USpectrAction::execEvaluateCondition },
			{ "FinishMove", &USpectrAction::execFinishMove },
			{ "MoveTo", &USpectrAction::execMoveTo },
			{ "MoveToTarget", &USpectrAction::execMoveToTarget },
			{ "Score", &USpectrAction::execScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpectrAction_ActionFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_ActionFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spectr AI" },
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectrAction_ActionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectrAction, nullptr, "ActionFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_ActionFinished_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_ActionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectrAction_ActionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectrAction_ActionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpectrAction_eventEvaluateCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpectrAction_eventEvaluateCondition_Parms), &Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventEvaluateCondition_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventEvaluateCondition_Parms, InContext), Z_Construct_UClass_USpectrContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::NewProp_InContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectrAction, nullptr, "EvaluateCondition", nullptr, nullptr, sizeof(SpectrAction_eventEvaluateCondition_Parms), Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectrAction_EvaluateCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectrAction_EvaluateCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpectrAction_FinishMove_Statics
	{
		struct SpectrAction_eventFinishMove_Parms
		{
			USpectrContext* InContext;
			AAIController* AIController;
			USpectrBrainComponent* Brain;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brain;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_FinishMove_Statics::NewProp_Brain_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_FinishMove_Statics::NewProp_Brain = { "Brain", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventFinishMove_Parms, Brain), Z_Construct_UClass_USpectrBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_FinishMove_Statics::NewProp_Brain_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_FinishMove_Statics::NewProp_Brain_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_FinishMove_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventFinishMove_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_FinishMove_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventFinishMove_Parms, InContext), Z_Construct_UClass_USpectrContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectrAction_FinishMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_FinishMove_Statics::NewProp_Brain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_FinishMove_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_FinishMove_Statics::NewProp_InContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_FinishMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spectr AI" },
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectrAction_FinishMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectrAction, nullptr, "FinishMove", nullptr, nullptr, sizeof(SpectrAction_eventFinishMove_Parms), Z_Construct_UFunction_USpectrAction_FinishMove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_FinishMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_FinishMove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_FinishMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectrAction_FinishMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectrAction_FinishMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpectrAction_MoveTo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_MoveTo_Statics::NewProp_Brain_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_MoveTo_Statics::NewProp_Brain = { "Brain", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventMoveTo_Parms, Brain), Z_Construct_UClass_USpectrBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_MoveTo_Statics::NewProp_Brain_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_MoveTo_Statics::NewProp_Brain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectrAction_MoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_MoveTo_Statics::NewProp_Brain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_MoveTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectrAction_MoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectrAction, nullptr, "MoveTo", nullptr, nullptr, sizeof(SpectrAction_eventMoveTo_Parms), Z_Construct_UFunction_USpectrAction_MoveTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_MoveTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_MoveTo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_MoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectrAction_MoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectrAction_MoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics
	{
		struct SpectrAction_eventMoveToTarget_Parms
		{
			AActor* Target;
			float MinimumDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::NewProp_MinimumDistance = { "MinimumDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventMoveToTarget_Parms, MinimumDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventMoveToTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::NewProp_MinimumDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectrAction, nullptr, "MoveToTarget", nullptr, nullptr, sizeof(SpectrAction_eventMoveToTarget_Parms), Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectrAction_MoveToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectrAction_MoveToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpectrAction_OnExecute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brain;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_OnExecute_Statics::NewProp_Brain_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_OnExecute_Statics::NewProp_Brain = { "Brain", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventOnExecute_Parms, Brain), Z_Construct_UClass_USpectrBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_OnExecute_Statics::NewProp_Brain_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_OnExecute_Statics::NewProp_Brain_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_OnExecute_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventOnExecute_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_OnExecute_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventOnExecute_Parms, InContext), Z_Construct_UClass_USpectrContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectrAction_OnExecute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_OnExecute_Statics::NewProp_Brain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_OnExecute_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_OnExecute_Statics::NewProp_InContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_OnExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spectr AI" },
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectrAction_OnExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectrAction, nullptr, "OnExecute", nullptr, nullptr, sizeof(SpectrAction_eventOnExecute_Parms), Z_Construct_UFunction_USpectrAction_OnExecute_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_OnExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_OnExecute_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_OnExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectrAction_OnExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectrAction_OnExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brain;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::NewProp_Brain_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::NewProp_Brain = { "Brain", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventOnMoveFinished_Parms, Brain), Z_Construct_UClass_USpectrBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::NewProp_Brain_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::NewProp_Brain_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventOnMoveFinished_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventOnMoveFinished_Parms, InContext), Z_Construct_UClass_USpectrContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::NewProp_Brain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::NewProp_InContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spectr AI" },
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectrAction, nullptr, "OnMoveFinished", nullptr, nullptr, sizeof(SpectrAction_eventOnMoveFinished_Parms), Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectrAction_OnMoveFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectrAction_OnMoveFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpectrAction_Score_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpectrAction_Score_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_Score_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventScore_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpectrAction_Score_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectrAction_eventScore_Parms, InContext), Z_Construct_UClass_USpectrContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectrAction_Score_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_Score_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_Score_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectrAction_Score_Statics::NewProp_InContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectrAction_Score_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectrAction_Score_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectrAction, nullptr, "Score", nullptr, nullptr, sizeof(SpectrAction_eventScore_Parms), Z_Construct_UFunction_USpectrAction_Score_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_Score_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectrAction_Score_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpectrAction_Score_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectrAction_Score()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectrAction_Score_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpectrAction_NoRegister()
	{
		return USpectrAction::StaticClass();
	}
	struct Z_Construct_UClass_USpectrAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningBrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningBrain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Effects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effects_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Effects_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PreConditions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreConditions_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreConditions_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpectrAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpectrAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpectrAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpectrAction_ActionFinished, "ActionFinished" }, // 4182148458
		{ &Z_Construct_UFunction_USpectrAction_EvaluateCondition, "EvaluateCondition" }, // 214971941
		{ &Z_Construct_UFunction_USpectrAction_FinishMove, "FinishMove" }, // 3111647991
		{ &Z_Construct_UFunction_USpectrAction_MoveTo, "MoveTo" }, // 748286788
		{ &Z_Construct_UFunction_USpectrAction_MoveToTarget, "MoveToTarget" }, // 1396433196
		{ &Z_Construct_UFunction_USpectrAction_OnExecute, "OnExecute" }, // 1491621009
		{ &Z_Construct_UFunction_USpectrAction_OnMoveFinished, "OnMoveFinished" }, // 2594350355
		{ &Z_Construct_UFunction_USpectrAction_Score, "Score" }, // 3708458244
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Default implmenetations of Native* functions call to either blueprint events\n *\x09or blueprint Native functions which can be overriden from blueprint. \n *\x09Though they do provide default implementation (where possible).\n */" },
		{ "IncludePath", "SpectrAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
		{ "ToolTip", "Default implmenetations of Native* functions call to either blueprint events\nor blueprint Native functions which can be overriden from blueprint.\nThough they do provide default implementation (where possible)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrAction_Statics::NewProp_OwningBrain_MetaData[] = {
		{ "Category", "Spectr AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpectrAction_Statics::NewProp_OwningBrain = { "OwningBrain", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrAction, OwningBrain), Z_Construct_UClass_USpectrBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpectrAction_Statics::NewProp_OwningBrain_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrAction_Statics::NewProp_OwningBrain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrAction_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "Comment", "/*\n\x09\x09Tag Name of change applied to agent state is effect is executed, Desiared State Value\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
		{ "ToolTip", "Tag Name of change applied to agent state is effect is executed, Desiared State Value" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpectrAction_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrAction, Effects), METADATA_PARAMS(Z_Construct_UClass_USpectrAction_Statics::NewProp_Effects_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrAction_Statics::NewProp_Effects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpectrAction_Statics::NewProp_Effects_Key_KeyProp = { "Effects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectrAction_Statics::NewProp_Effects_ValueProp = { "Effects", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrAction_Statics::NewProp_PreConditions_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "Comment", "/*\n\x09\x09Tag Name of requirent condition in agent state, Desiared State Value\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
		{ "ToolTip", "Tag Name of requirent condition in agent state, Desiared State Value" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpectrAction_Statics::NewProp_PreConditions = { "PreConditions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrAction, PreConditions), METADATA_PARAMS(Z_Construct_UClass_USpectrAction_Statics::NewProp_PreConditions_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrAction_Statics::NewProp_PreConditions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpectrAction_Statics::NewProp_PreConditions_Key_KeyProp = { "PreConditions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectrAction_Statics::NewProp_PreConditions_ValueProp = { "PreConditions", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectrAction_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "State Configuration" },
		{ "ModuleRelativePath", "Public/SpectrAction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpectrAction_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectrAction, Cost), METADATA_PARAMS(Z_Construct_UClass_USpectrAction_Statics::NewProp_Cost_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpectrAction_Statics::NewProp_Cost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpectrAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrAction_Statics::NewProp_OwningBrain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrAction_Statics::NewProp_Effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrAction_Statics::NewProp_Effects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrAction_Statics::NewProp_Effects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrAction_Statics::NewProp_PreConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrAction_Statics::NewProp_PreConditions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrAction_Statics::NewProp_PreConditions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectrAction_Statics::NewProp_Cost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectrAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectrAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpectrAction_Statics::ClassParams = {
		&USpectrAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpectrAction_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USpectrAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpectrAction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpectrAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectrAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpectrAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpectrAction, 2260270437);
	template<> SPECTRAI_API UClass* StaticClass<USpectrAction>()
	{
		return USpectrAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpectrAction(Z_Construct_UClass_USpectrAction, &USpectrAction::StaticClass, TEXT("/Script/SpectrAI"), TEXT("USpectrAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectrAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
