// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DraggableWindow/Public/DWBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDWBPFunctionLibrary() {}
// Cross Module References
	DRAGGABLEWINDOW_API UClass* Z_Construct_UClass_UDWBPFunctionLibrary_NoRegister();
	DRAGGABLEWINDOW_API UClass* Z_Construct_UClass_UDWBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DraggableWindow();
	DRAGGABLEWINDOW_API UFunction* Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow();
	DRAGGABLEWINDOW_API UScriptStruct* Z_Construct_UScriptStruct_FDWWWindowHandle();
	DRAGGABLEWINDOW_API UFunction* Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UDWBPFunctionLibrary::StaticRegisterNativesUDWBPFunctionLibrary()
	{
		UClass* Class = UDWBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWindow", &UDWBPFunctionLibrary::execCreateWindow },
			{ "CreateWindowWithContent", &UDWBPFunctionLibrary::execCreateWindowWithContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics
	{
		struct DWBPFunctionLibrary_eventCreateWindow_Parms
		{
			FString WindowName;
			FDWWWindowHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WindowName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DWBPFunctionLibrary_eventCreateWindow_Parms, ReturnValue), Z_Construct_UScriptStruct_FDWWWindowHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::NewProp_WindowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::NewProp_WindowName = { "WindowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DWBPFunctionLibrary_eventCreateWindow_Parms, WindowName), METADATA_PARAMS(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::NewProp_WindowName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::NewProp_WindowName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::NewProp_WindowName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "ModuleRelativePath", "Public/DWBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDWBPFunctionLibrary, nullptr, "CreateWindow", nullptr, nullptr, sizeof(DWBPFunctionLibrary_eventCreateWindow_Parms), Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics
	{
		struct DWBPFunctionLibrary_eventCreateWindowWithContent_Parms
		{
			UUserWidget* InWindowContent;
			FString WindowName;
			FDWWWindowHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WindowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWindowContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWindowContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DWBPFunctionLibrary_eventCreateWindowWithContent_Parms, ReturnValue), Z_Construct_UScriptStruct_FDWWWindowHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_WindowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_WindowName = { "WindowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DWBPFunctionLibrary_eventCreateWindowWithContent_Parms, WindowName), METADATA_PARAMS(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_WindowName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_WindowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_InWindowContent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_InWindowContent = { "InWindowContent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DWBPFunctionLibrary_eventCreateWindowWithContent_Parms, InWindowContent), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_InWindowContent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_InWindowContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_WindowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::NewProp_InWindowContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "ModuleRelativePath", "Public/DWBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDWBPFunctionLibrary, nullptr, "CreateWindowWithContent", nullptr, nullptr, sizeof(DWBPFunctionLibrary_eventCreateWindowWithContent_Parms), Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDWBPFunctionLibrary_NoRegister()
	{
		return UDWBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDWBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDWBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DraggableWindow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDWBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindow, "CreateWindow" }, // 3908822681
		{ &Z_Construct_UFunction_UDWBPFunctionLibrary_CreateWindowWithContent, "CreateWindowWithContent" }, // 2442536237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDWBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DWBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/DWBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDWBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDWBPFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDWBPFunctionLibrary_Statics::ClassParams = {
		&UDWBPFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDWBPFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDWBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDWBPFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDWBPFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDWBPFunctionLibrary, 3944149536);
	template<> DRAGGABLEWINDOW_API UClass* StaticClass<UDWBPFunctionLibrary>()
	{
		return UDWBPFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDWBPFunctionLibrary(Z_Construct_UClass_UDWBPFunctionLibrary, &UDWBPFunctionLibrary::StaticClass, TEXT("/Script/DraggableWindow"), TEXT("UDWBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDWBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
