// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Inventory/ARItemTooltipView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARItemTooltipView() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARItemTooltipView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARItemTooltipView();
	HOMININA_API UClass* Z_Construct_UClass_UARItemView();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated();
	HOMININA_API UScriptStruct* Z_Construct_UScriptStruct_FARItemTooltipData();
// End Cross Module References
	static FName NAME_UARItemTooltipView_OnTooltipCreated = FName(TEXT("OnTooltipCreated"));
	void UARItemTooltipView::OnTooltipCreated(TArray<FARItemTooltipData> const& OutItems)
	{
		ARItemTooltipView_eventOnTooltipCreated_Parms Parms;
		Parms.OutItems=OutItems;
		ProcessEvent(FindFunctionChecked(NAME_UARItemTooltipView_OnTooltipCreated),&Parms);
	}
	void UARItemTooltipView::StaticRegisterNativesUARItemTooltipView()
	{
	}
	struct Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::NewProp_OutItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::NewProp_OutItems = { "OutItems", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARItemTooltipView_eventOnTooltipCreated_Parms, OutItems), METADATA_PARAMS(Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::NewProp_OutItems_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::NewProp_OutItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::NewProp_OutItems_Inner = { "OutItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FARItemTooltipData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::NewProp_OutItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::NewProp_OutItems_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActionRPGGame|UI" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARItemTooltipView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARItemTooltipView, nullptr, "OnTooltipCreated", nullptr, nullptr, sizeof(ARItemTooltipView_eventOnTooltipCreated_Parms), Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARItemTooltipView_NoRegister()
	{
		return UARItemTooltipView::StaticClass();
	}
	struct Z_Construct_UClass_UARItemTooltipView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARItemTooltipView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARItemView,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARItemTooltipView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARItemTooltipView_OnTooltipCreated, "OnTooltipCreated" }, // 509939711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARItemTooltipView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Inventory/ARItemTooltipView.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/ARItemTooltipView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARItemTooltipView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARItemTooltipView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARItemTooltipView_Statics::ClassParams = {
		&UARItemTooltipView::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARItemTooltipView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARItemTooltipView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARItemTooltipView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARItemTooltipView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARItemTooltipView, 4189727517);
	template<> HOMININA_API UClass* StaticClass<UARItemTooltipView>()
	{
		return UARItemTooltipView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARItemTooltipView(Z_Construct_UClass_UARItemTooltipView, &UARItemTooltipView::StaticClass, TEXT("/Script/Hominina"), TEXT("UARItemTooltipView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARItemTooltipView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
