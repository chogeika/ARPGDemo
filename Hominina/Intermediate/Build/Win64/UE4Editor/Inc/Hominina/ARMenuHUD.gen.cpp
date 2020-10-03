// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/Menu/ARMenuHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARMenuHUD() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AARMenuHUD_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARMenuHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_AARMenuHUD_OnLoginSuccess();
	HOMININA_API UClass* Z_Construct_UClass_UARRegisterView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARMainMenuView_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARLoginScreenView_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AARMenuHUD::StaticRegisterNativesAARMenuHUD()
	{
		UClass* Class = AARMenuHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLoginSuccess", &AARMenuHUD::execOnLoginSuccess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARMenuHUD_OnLoginSuccess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARMenuHUD_OnLoginSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu/ARMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARMenuHUD_OnLoginSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARMenuHUD, nullptr, "OnLoginSuccess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARMenuHUD_OnLoginSuccess_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARMenuHUD_OnLoginSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARMenuHUD_OnLoginSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARMenuHUD_OnLoginSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARMenuHUD_NoRegister()
	{
		return AARMenuHUD::StaticClass();
	}
	struct Z_Construct_UClass_AARMenuHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisterView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisterView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoginScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisterViewClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RegisterViewClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuScreenClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuScreenClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginScreenClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoginScreenClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARMenuHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARMenuHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARMenuHUD_OnLoginSuccess, "OnLoginSuccess" }, // 634631315
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARMenuHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Menu/ARMenuHUD.h" },
		{ "ModuleRelativePath", "Public/Menu/ARMenuHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARMenuHUD_Statics::NewProp_RegisterView_MetaData[] = {
		{ "Category", "ARMenuHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/ARMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARMenuHUD_Statics::NewProp_RegisterView = { "RegisterView", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARMenuHUD, RegisterView), Z_Construct_UClass_UARRegisterView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_RegisterView_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_RegisterView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARMenuHUD_Statics::NewProp_MainMenuScreen_MetaData[] = {
		{ "Category", "ARMenuHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/ARMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARMenuHUD_Statics::NewProp_MainMenuScreen = { "MainMenuScreen", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARMenuHUD, MainMenuScreen), Z_Construct_UClass_UARMainMenuView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_MainMenuScreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_MainMenuScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARMenuHUD_Statics::NewProp_LoginScreen_MetaData[] = {
		{ "Category", "ARMenuHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/ARMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARMenuHUD_Statics::NewProp_LoginScreen = { "LoginScreen", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARMenuHUD, LoginScreen), Z_Construct_UClass_UARLoginScreenView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_LoginScreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_LoginScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARMenuHUD_Statics::NewProp_RegisterViewClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Menu/ARMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AARMenuHUD_Statics::NewProp_RegisterViewClass = { "RegisterViewClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARMenuHUD, RegisterViewClass), Z_Construct_UClass_UARRegisterView_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_RegisterViewClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_RegisterViewClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARMenuHUD_Statics::NewProp_MainMenuScreenClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Menu/ARMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AARMenuHUD_Statics::NewProp_MainMenuScreenClass = { "MainMenuScreenClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARMenuHUD, MainMenuScreenClass), Z_Construct_UClass_UARMainMenuView_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_MainMenuScreenClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_MainMenuScreenClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARMenuHUD_Statics::NewProp_LoginScreenClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Menu/ARMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AARMenuHUD_Statics::NewProp_LoginScreenClass = { "LoginScreenClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARMenuHUD, LoginScreenClass), Z_Construct_UClass_UARLoginScreenView_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_LoginScreenClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARMenuHUD_Statics::NewProp_LoginScreenClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARMenuHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARMenuHUD_Statics::NewProp_RegisterView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARMenuHUD_Statics::NewProp_MainMenuScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARMenuHUD_Statics::NewProp_LoginScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARMenuHUD_Statics::NewProp_RegisterViewClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARMenuHUD_Statics::NewProp_MainMenuScreenClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARMenuHUD_Statics::NewProp_LoginScreenClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARMenuHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARMenuHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARMenuHUD_Statics::ClassParams = {
		&AARMenuHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARMenuHUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AARMenuHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AARMenuHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARMenuHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARMenuHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARMenuHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARMenuHUD, 3010304095);
	template<> HOMININA_API UClass* StaticClass<AARMenuHUD>()
	{
		return AARMenuHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARMenuHUD(Z_Construct_UClass_AARMenuHUD, &AARMenuHUD::StaticClass, TEXT("/Script/Hominina"), TEXT("AARMenuHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARMenuHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
