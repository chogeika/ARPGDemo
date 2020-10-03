// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/ARMenuPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARMenuPlayerController() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AARMenuPlayerController_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARMenuPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void AARMenuPlayerController::StaticRegisterNativesAARMenuPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AARMenuPlayerController_NoRegister()
	{
		return AARMenuPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AARMenuPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARMenuPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARMenuPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARMenuPlayerController.h" },
		{ "ModuleRelativePath", "Public/ARMenuPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARMenuPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARMenuPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARMenuPlayerController_Statics::ClassParams = {
		&AARMenuPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARMenuPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARMenuPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARMenuPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARMenuPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARMenuPlayerController, 585263486);
	template<> HOMININA_API UClass* StaticClass<AARMenuPlayerController>()
	{
		return AARMenuPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARMenuPlayerController(Z_Construct_UClass_AARMenuPlayerController, &AARMenuPlayerController::StaticClass, TEXT("/Script/Hominina"), TEXT("AARMenuPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARMenuPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
