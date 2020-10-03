// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/ARGameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARGameSession() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AARGameSession_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	UPackage* Z_Construct_UPackage__Script_Hominina();
// End Cross Module References
	void AARGameSession::StaticRegisterNativesAARGameSession()
	{
	}
	UClass* Z_Construct_UClass_AARGameSession_NoRegister()
	{
		return AARGameSession::StaticClass();
	}
	struct Z_Construct_UClass_AARGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameSession,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARGameSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARGameSession.h" },
		{ "ModuleRelativePath", "Public/ARGameSession.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARGameSession_Statics::ClassParams = {
		&AARGameSession::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AARGameSession_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARGameSession, 1742510643);
	template<> HOMININA_API UClass* StaticClass<AARGameSession>()
	{
		return AARGameSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARGameSession(Z_Construct_UClass_AARGameSession, &AARGameSession::StaticClass, TEXT("/Script/Hominina"), TEXT("AARGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
