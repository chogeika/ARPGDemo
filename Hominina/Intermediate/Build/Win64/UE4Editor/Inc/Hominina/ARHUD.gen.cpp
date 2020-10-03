// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/UI/ARHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARHUD() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AARHUD_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAttributeChangedData();
	HOMININA_API UClass* Z_Construct_UClass_AARPlayerController_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARCharacter_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	HOMININA_API UClass* Z_Construct_UClass_UARHUDFloatingCombatText_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HOMININA_API UClass* Z_Construct_UClass_UARHUDEnemyHealthBar_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	HOMININA_API UClass* Z_Construct_UClass_UARUIInventoryComponent_NoRegister();
// End Cross Module References
	void AARHUD::StaticRegisterNativesAARHUD()
	{
		UClass* Class = AARHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnemyDamageCaused", &AARHUD::execOnEnemyDamageCaused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics
	{
		struct ARHUD_eventOnEnemyDamageCaused_Parms
		{
			FAFAttributeChangedData InMod;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::NewProp_InMod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::NewProp_InMod = { "InMod", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARHUD_eventOnEnemyDamageCaused_Parms, InMod), Z_Construct_UScriptStruct_FAFAttributeChangedData, METADATA_PARAMS(Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::NewProp_InMod_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::NewProp_InMod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::NewProp_InMod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARHUD, nullptr, "OnEnemyDamageCaused", nullptr, nullptr, sizeof(ARHUD_eventOnEnemyDamageCaused_Parms), Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARHUD_NoRegister()
	{
		return AARHUD::StaticClass();
	}
	struct Z_Construct_UClass_AARHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ARPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ARCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FCTFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FCTFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FCTLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FCTLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FCTMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FCTMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCombatText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingCombatText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDFloatingCombatTextClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDFloatingCombatTextClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDEnemyHealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDEnemyHealthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceScaleEnemyBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceScaleEnemyBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDEnemyHealthBarClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDEnemyHealthBarClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIInventoryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIInventoryComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARHUD_OnEnemyDamageCaused, "OnEnemyDamageCaused" }, // 3894538234
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/ARHUD.h" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_ARPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_ARPC = { "ARPC", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, ARPC), Z_Construct_UClass_AARPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_ARPC_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_ARPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_ARCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_ARCharacter = { "ARCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, ARCharacter), Z_Construct_UClass_AARCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_ARCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_ARCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_FCTFont_MetaData[] = {
		{ "Category", "Floating Combat Text" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_FCTFont = { "FCTFont", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, FCTFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_FCTFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_FCTFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_FCTLifeTime_MetaData[] = {
		{ "Category", "Floating Combat Text" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_FCTLifeTime = { "FCTLifeTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, FCTLifeTime), METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_FCTLifeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_FCTLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_FCTMoveSpeed_MetaData[] = {
		{ "Category", "Floating Combat Text" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_FCTMoveSpeed = { "FCTMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, FCTMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_FCTMoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_FCTMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_FloatingCombatText_MetaData[] = {
		{ "Category", "Floating Combat Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_FloatingCombatText = { "FloatingCombatText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, FloatingCombatText), Z_Construct_UClass_UARHUDFloatingCombatText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_FloatingCombatText_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_FloatingCombatText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_HUDFloatingCombatTextClass_MetaData[] = {
		{ "Category", "Floating Combat Text" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_HUDFloatingCombatTextClass = { "HUDFloatingCombatTextClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, HUDFloatingCombatTextClass), Z_Construct_UClass_UARHUDFloatingCombatText_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_HUDFloatingCombatTextClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_HUDFloatingCombatTextClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_HUDEnemyHealthBar_MetaData[] = {
		{ "Category", "Enemy Info" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_HUDEnemyHealthBar = { "HUDEnemyHealthBar", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, HUDEnemyHealthBar), Z_Construct_UClass_UARHUDEnemyHealthBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_HUDEnemyHealthBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_HUDEnemyHealthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_DistanceScaleEnemyBar_MetaData[] = {
		{ "Category", "Enemy Info" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_DistanceScaleEnemyBar = { "DistanceScaleEnemyBar", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, DistanceScaleEnemyBar), METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_DistanceScaleEnemyBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_DistanceScaleEnemyBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_EnemyChannel_MetaData[] = {
		{ "Category", "Enemy Info" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_EnemyChannel = { "EnemyChannel", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, EnemyChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_EnemyChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_EnemyChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_HUDEnemyHealthBarClass_MetaData[] = {
		{ "Category", "Enemy Info" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_HUDEnemyHealthBarClass = { "HUDEnemyHealthBarClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, HUDEnemyHealthBarClass), Z_Construct_UClass_UARHUDEnemyHealthBar_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_HUDEnemyHealthBarClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_HUDEnemyHealthBarClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARHUD_Statics::NewProp_UIInventoryComponent_MetaData[] = {
		{ "Category", "Components|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ARHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARHUD_Statics::NewProp_UIInventoryComponent = { "UIInventoryComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARHUD, UIInventoryComponent), Z_Construct_UClass_UARUIInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::NewProp_UIInventoryComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::NewProp_UIInventoryComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_ARPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_ARCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_FCTFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_FCTLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_FCTMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_FloatingCombatText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_HUDFloatingCombatTextClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_HUDEnemyHealthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_DistanceScaleEnemyBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_EnemyChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_HUDEnemyHealthBarClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARHUD_Statics::NewProp_UIInventoryComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARHUD_Statics::ClassParams = {
		&AARHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARHUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AARHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARHUD, 594303220);
	template<> HOMININA_API UClass* StaticClass<AARHUD>()
	{
		return AARHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARHUD(Z_Construct_UClass_AARHUD, &AARHUD::StaticClass, TEXT("/Script/Hominina"), TEXT("AARHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
