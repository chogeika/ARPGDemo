// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/ARGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARGameInstance() {}
// Cross Module References
	HOMININA_API UFunction* Z_Construct_UDelegateFunction_Hominina_ARLoginAttemptEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UDelegateFunction_Hominina_AROnConnectedToGS__DelegateSignature();
	HOMININA_API UClass* Z_Construct_UClass_UARGameInstance_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	HOMININA_API UFunction* Z_Construct_UFunction_UARGameInstance_ConnectToHub();
	HOMININA_API UFunction* Z_Construct_UFunction_UARGameInstance_ConnectToWorld();
	HOMININA_API UFunction* Z_Construct_UFunction_UARGameInstance_HealthCheck();
	HOMININA_API UFunction* Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable();
	HOMININA_API UFunction* Z_Construct_UFunction_UARGameInstance_TestGSRequest();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Hominina_ARLoginAttemptEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Hominina_ARLoginAttemptEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Hominina_ARLoginAttemptEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Hominina, nullptr, "ARLoginAttemptEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Hominina_ARLoginAttemptEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_ARLoginAttemptEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Hominina_ARLoginAttemptEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Hominina_ARLoginAttemptEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Hominina_AROnConnectedToGS__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Hominina_AROnConnectedToGS__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Hominina_AROnConnectedToGS__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Hominina, nullptr, "AROnConnectedToGS__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Hominina_AROnConnectedToGS__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Hominina_AROnConnectedToGS__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Hominina_AROnConnectedToGS__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Hominina_AROnConnectedToGS__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UARGameInstance::StaticRegisterNativesUARGameInstance()
	{
		UClass* Class = UARGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectToHub", &UARGameInstance::execConnectToHub },
			{ "ConnectToWorld", &UARGameInstance::execConnectToWorld },
			{ "HealthCheck", &UARGameInstance::execHealthCheck },
			{ "OnGameSparksAvailable", &UARGameInstance::execOnGameSparksAvailable },
			{ "TestGSRequest", &UARGameInstance::execTestGSRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARGameInstance_ConnectToHub_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGameInstance_ConnectToHub_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameLift|Test" },
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGameInstance_ConnectToHub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGameInstance, nullptr, "ConnectToHub", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGameInstance_ConnectToHub_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARGameInstance_ConnectToHub_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGameInstance_ConnectToHub()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGameInstance_ConnectToHub_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGameInstance_ConnectToWorld_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGameInstance_ConnectToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameLift|Test" },
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGameInstance_ConnectToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGameInstance, nullptr, "ConnectToWorld", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGameInstance_ConnectToWorld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARGameInstance_ConnectToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGameInstance_ConnectToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGameInstance_ConnectToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGameInstance_HealthCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGameInstance_HealthCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGameInstance_HealthCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGameInstance, nullptr, "HealthCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGameInstance_HealthCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARGameInstance_HealthCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGameInstance_HealthCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGameInstance_HealthCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics
	{
		struct ARGameInstance_eventOnGameSparksAvailable_Parms
		{
			bool bAvailable;
		};
		static void NewProp_bAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAvailable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::NewProp_bAvailable_SetBit(void* Obj)
	{
		((ARGameInstance_eventOnGameSparksAvailable_Parms*)Obj)->bAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::NewProp_bAvailable = { "bAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARGameInstance_eventOnGameSparksAvailable_Parms), &Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::NewProp_bAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::NewProp_bAvailable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Function used to determine what happens if GameSparks connects or fails to (Needs to be UFUNCTION)\n" },
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
		{ "ToolTip", "Function used to determine what happens if GameSparks connects or fails to (Needs to be UFUNCTION)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGameInstance, nullptr, "OnGameSparksAvailable", nullptr, nullptr, sizeof(ARGameInstance_eventOnGameSparksAvailable_Parms), Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGameInstance_TestGSRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGameInstance_TestGSRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameLift|Test" },
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGameInstance_TestGSRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGameInstance, nullptr, "TestGSRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGameInstance_TestGSRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARGameInstance_TestGSRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGameInstance_TestGSRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGameInstance_TestGSRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARGameInstance_NoRegister()
	{
		return UARGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UARGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoginFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoginSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectedToGameSparks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectedToGameSparks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GSSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GSKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARGameInstance_ConnectToHub, "ConnectToHub" }, // 3465666126
		{ &Z_Construct_UFunction_UARGameInstance_ConnectToWorld, "ConnectToWorld" }, // 3222062243
		{ &Z_Construct_UFunction_UARGameInstance_HealthCheck, "HealthCheck" }, // 2003081153
		{ &Z_Construct_UFunction_UARGameInstance_OnGameSparksAvailable, "OnGameSparksAvailable" }, // 1907986175
		{ &Z_Construct_UFunction_UARGameInstance_TestGSRequest, "TestGSRequest" }, // 4263102997
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ARGameInstance.h" },
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnLoginFailed_MetaData[] = {
		{ "Category", "ARGameInstance" },
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnLoginFailed = { "OnLoginFailed", nullptr, (EPropertyFlags)0x0010000010080014, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGameInstance, OnLoginFailed), Z_Construct_UDelegateFunction_Hominina_ARLoginAttemptEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnLoginFailed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnLoginFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnLoginSuccess_MetaData[] = {
		{ "Category", "ARGameInstance" },
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnLoginSuccess = { "OnLoginSuccess", nullptr, (EPropertyFlags)0x0010000010080014, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGameInstance, OnLoginSuccess), Z_Construct_UDelegateFunction_Hominina_ARLoginAttemptEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnLoginSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnLoginSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnConnectedToGameSparks_MetaData[] = {
		{ "Category", "ARGameInstance" },
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnConnectedToGameSparks = { "OnConnectedToGameSparks", nullptr, (EPropertyFlags)0x0010000010080014, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGameInstance, OnConnectedToGameSparks), Z_Construct_UDelegateFunction_Hominina_AROnConnectedToGS__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnConnectedToGameSparks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnConnectedToGameSparks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGameInstance_Statics::NewProp_GSSecret_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UARGameInstance_Statics::NewProp_GSSecret = { "GSSecret", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGameInstance, GSSecret), METADATA_PARAMS(Z_Construct_UClass_UARGameInstance_Statics::NewProp_GSSecret_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGameInstance_Statics::NewProp_GSSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGameInstance_Statics::NewProp_GSKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UARGameInstance_Statics::NewProp_GSKey = { "GSKey", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGameInstance, GSKey), METADATA_PARAMS(Z_Construct_UClass_UARGameInstance_Statics::NewProp_GSKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGameInstance_Statics::NewProp_GSKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnLoginFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnLoginSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGameInstance_Statics::NewProp_OnConnectedToGameSparks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGameInstance_Statics::NewProp_GSSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGameInstance_Statics::NewProp_GSKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARGameInstance_Statics::ClassParams = {
		&UARGameInstance::StaticClass,
		"ARGame",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARGameInstance_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UARGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARGameInstance, 2313462338);
	template<> HOMININA_API UClass* StaticClass<UARGameInstance>()
	{
		return UARGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARGameInstance(Z_Construct_UClass_UARGameInstance, &UARGameInstance::StaticClass, TEXT("/Script/Hominina"), TEXT("UARGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
