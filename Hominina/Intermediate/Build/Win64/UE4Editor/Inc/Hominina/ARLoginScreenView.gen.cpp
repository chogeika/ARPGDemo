// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/Menu/ARLoginScreenView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARLoginScreenView() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_UARLoginScreenView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARLoginScreenView();
	HOMININA_API UClass* Z_Construct_UClass_UARUMGWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_UARLoginScreenView_OnLoginClicked();
	HOMININA_API UFunction* Z_Construct_UFunction_UARLoginScreenView_OnLoginFailed();
	HOMININA_API UFunction* Z_Construct_UFunction_UARLoginScreenView_OnLoginSuccess();
	HOMININA_API UFunction* Z_Construct_UFunction_UARLoginScreenView_OnRegisterClicked();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	void UARLoginScreenView::StaticRegisterNativesUARLoginScreenView()
	{
		UClass* Class = UARLoginScreenView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLoginClicked", &UARLoginScreenView::execOnLoginClicked },
			{ "OnLoginFailed", &UARLoginScreenView::execOnLoginFailed },
			{ "OnLoginSuccess", &UARLoginScreenView::execOnLoginSuccess },
			{ "OnRegisterClicked", &UARLoginScreenView::execOnRegisterClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARLoginScreenView_OnLoginClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARLoginScreenView_OnLoginClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Menu/ARLoginScreenView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARLoginScreenView_OnLoginClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARLoginScreenView, nullptr, "OnLoginClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARLoginScreenView_OnLoginClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARLoginScreenView_OnLoginClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARLoginScreenView_OnLoginClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARLoginScreenView_OnLoginClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARLoginScreenView_OnLoginFailed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARLoginScreenView_OnLoginFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Menu/ARLoginScreenView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARLoginScreenView_OnLoginFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARLoginScreenView, nullptr, "OnLoginFailed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARLoginScreenView_OnLoginFailed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARLoginScreenView_OnLoginFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARLoginScreenView_OnLoginFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARLoginScreenView_OnLoginFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARLoginScreenView_OnLoginSuccess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARLoginScreenView_OnLoginSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Menu/ARLoginScreenView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARLoginScreenView_OnLoginSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARLoginScreenView, nullptr, "OnLoginSuccess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARLoginScreenView_OnLoginSuccess_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARLoginScreenView_OnLoginSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARLoginScreenView_OnLoginSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARLoginScreenView_OnLoginSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARLoginScreenView_OnRegisterClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARLoginScreenView_OnRegisterClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Menu/ARLoginScreenView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARLoginScreenView_OnRegisterClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARLoginScreenView, nullptr, "OnRegisterClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARLoginScreenView_OnRegisterClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARLoginScreenView_OnRegisterClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARLoginScreenView_OnRegisterClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARLoginScreenView_OnRegisterClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARLoginScreenView_NoRegister()
	{
		return UARLoginScreenView::StaticClass();
	}
	struct Z_Construct_UClass_UARLoginScreenView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarrningText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WarrningText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisterButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisterButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoginButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PasswordBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PasswordBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserNameBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserNameBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARLoginScreenView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARUMGWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARLoginScreenView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARLoginScreenView_OnLoginClicked, "OnLoginClicked" }, // 2606639029
		{ &Z_Construct_UFunction_UARLoginScreenView_OnLoginFailed, "OnLoginFailed" }, // 242188279
		{ &Z_Construct_UFunction_UARLoginScreenView_OnLoginSuccess, "OnLoginSuccess" }, // 2253855320
		{ &Z_Construct_UFunction_UARLoginScreenView_OnRegisterClicked, "OnRegisterClicked" }, // 4286363310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLoginScreenView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Menu/ARLoginScreenView.h" },
		{ "ModuleRelativePath", "Public/UI/Menu/ARLoginScreenView.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_WarrningText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARLoginScreenView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Menu/ARLoginScreenView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_WarrningText = { "WarrningText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARLoginScreenView, WarrningText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_WarrningText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_WarrningText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_RegisterButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARLoginScreenView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Menu/ARLoginScreenView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_RegisterButton = { "RegisterButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARLoginScreenView, RegisterButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_RegisterButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_RegisterButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_LoginButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARLoginScreenView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Menu/ARLoginScreenView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_LoginButton = { "LoginButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARLoginScreenView, LoginButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_LoginButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_LoginButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_PasswordBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARLoginScreenView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Menu/ARLoginScreenView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_PasswordBox = { "PasswordBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARLoginScreenView, PasswordBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_PasswordBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_PasswordBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_UserNameBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ARLoginScreenView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Menu/ARLoginScreenView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_UserNameBox = { "UserNameBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARLoginScreenView, UserNameBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_UserNameBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_UserNameBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARLoginScreenView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_WarrningText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_RegisterButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_LoginButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_PasswordBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLoginScreenView_Statics::NewProp_UserNameBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARLoginScreenView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARLoginScreenView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARLoginScreenView_Statics::ClassParams = {
		&UARLoginScreenView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARLoginScreenView_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARLoginScreenView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARLoginScreenView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARLoginScreenView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARLoginScreenView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARLoginScreenView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARLoginScreenView, 1162951620);
	template<> HOMININA_API UClass* StaticClass<UARLoginScreenView>()
	{
		return UARLoginScreenView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARLoginScreenView(Z_Construct_UClass_UARLoginScreenView, &UARLoginScreenView::StaticClass, TEXT("/Script/Hominina"), TEXT("UARLoginScreenView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARLoginScreenView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
