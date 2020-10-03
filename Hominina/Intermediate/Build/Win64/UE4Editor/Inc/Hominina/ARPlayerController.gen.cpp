// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/ARPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPlayerController() {}
// Cross Module References
	HOMININA_API UClass* Z_Construct_UClass_AARPlayerController_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UFunction* Z_Construct_UFunction_AARPlayerController_ClientPossesed();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAbilitySpecHandle();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFInventoryComponent_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_UARUIComponent_NoRegister();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFInventoryInterface_NoRegister();
// End Cross Module References
	static FName NAME_AARPlayerController_ClientPossesed = FName(TEXT("ClientPossesed"));
	void AARPlayerController::ClientPossesed(APawn* InPawn)
	{
		ARPlayerController_eventClientPossesed_Parms Parms;
		Parms.InPawn=InPawn;
		ProcessEvent(FindFunctionChecked(NAME_AARPlayerController_ClientPossesed),&Parms);
	}
	void AARPlayerController::StaticRegisterNativesAARPlayerController()
	{
		UClass* Class = AARPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientPossesed", &AARPlayerController::execClientPossesed },
			{ "ComputeBoundsScreenSize", &AARPlayerController::execComputeBoundsScreenSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlayerController_eventClientPossesed_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics::NewProp_InPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPlayerController, nullptr, "ClientPossesed", nullptr, nullptr, sizeof(ARPlayerController_eventClientPossesed_Parms), Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPlayerController_ClientPossesed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPlayerController_ClientPossesed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics
	{
		struct ARPlayerController_eventComputeBoundsScreenSize_Parms
		{
			UCapsuleComponent* InTarget;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlayerController_eventComputeBoundsScreenSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::NewProp_InTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::NewProp_InTarget = { "InTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPlayerController_eventComputeBoundsScreenSize_Parms, InTarget), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::NewProp_InTarget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::NewProp_InTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::NewProp_InTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActionRPGGame|HUD" },
		{ "Comment", "/* IIFInventoryInterface */" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
		{ "ToolTip", "IIFInventoryInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPlayerController, nullptr, "ComputeBoundsScreenSize", nullptr, nullptr, sizeof(ARPlayerController_eventComputeBoundsScreenSize_Parms), Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARPlayerController_NoRegister()
	{
		return AARPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AARPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLiftId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameLiftId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetAbilityGroup02_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SetAbilityGroup02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputSetAbilityGroup02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputSetAbilityGroup02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetAbilityGroup01_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SetAbilityGroup01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputSetAbilityGroup01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputSetAbilityGroup01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitytHolstersWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AbilitytHolstersWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputHolsterWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputHolsterWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitytPreviousWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AbilitytPreviousWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPreviousWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPreviousWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputNextWeaponSpecHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputNextWeaponSpecHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitytNextWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AbilitytNextWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputNextWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputNextWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARPlayerController_ClientPossesed, "ClientPossesed" }, // 591332478
		{ &Z_Construct_UFunction_AARPlayerController_ComputeBoundsScreenSize, "ComputeBoundsScreenSize" }, // 3944105134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARPlayerController.h" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_GameLiftId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_GameLiftId = { "GameLiftId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, GameLiftId), METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_GameLiftId_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_GameLiftId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_SetAbilityGroup02_MetaData[] = {
		{ "Category", "Ability Input" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_SetAbilityGroup02 = { "SetAbilityGroup02", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, SetAbilityGroup02), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_SetAbilityGroup02_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_SetAbilityGroup02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputSetAbilityGroup02_MetaData[] = {
		{ "Category", "Ability Input" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputSetAbilityGroup02 = { "InputSetAbilityGroup02", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, InputSetAbilityGroup02), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputSetAbilityGroup02_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputSetAbilityGroup02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_SetAbilityGroup01_MetaData[] = {
		{ "Category", "Ability Input" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_SetAbilityGroup01 = { "SetAbilityGroup01", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, SetAbilityGroup01), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_SetAbilityGroup01_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_SetAbilityGroup01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputSetAbilityGroup01_MetaData[] = {
		{ "Category", "Ability Input" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputSetAbilityGroup01 = { "InputSetAbilityGroup01", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, InputSetAbilityGroup01), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputSetAbilityGroup01_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputSetAbilityGroup01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytHolstersWeapon_MetaData[] = {
		{ "Category", "Ability Input" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytHolstersWeapon = { "AbilitytHolstersWeapon", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, AbilitytHolstersWeapon), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytHolstersWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytHolstersWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputHolsterWeapon_MetaData[] = {
		{ "Category", "Ability Input" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputHolsterWeapon = { "InputHolsterWeapon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, InputHolsterWeapon), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputHolsterWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputHolsterWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytPreviousWeapon_MetaData[] = {
		{ "Category", "Ability Input" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytPreviousWeapon = { "AbilitytPreviousWeapon", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, AbilitytPreviousWeapon), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytPreviousWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytPreviousWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputPreviousWeapon_MetaData[] = {
		{ "Category", "Ability Input" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputPreviousWeapon = { "InputPreviousWeapon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, InputPreviousWeapon), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputPreviousWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputPreviousWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputNextWeaponSpecHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputNextWeaponSpecHandle = { "InputNextWeaponSpecHandle", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, InputNextWeaponSpecHandle), Z_Construct_UScriptStruct_FAFAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputNextWeaponSpecHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputNextWeaponSpecHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytNextWeapon_MetaData[] = {
		{ "Category", "Ability Input" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytNextWeapon = { "AbilitytNextWeapon", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, AbilitytNextWeapon), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytNextWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytNextWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputNextWeapon_MetaData[] = {
		{ "Category", "Ability Input" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputNextWeapon = { "InputNextWeapon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, InputNextWeapon), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputNextWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputNextWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_MainInventory_MetaData[] = {
		{ "Category", "Components|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_MainInventory = { "MainInventory", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, MainInventory), Z_Construct_UClass_UIFInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_MainInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_MainInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPlayerController_Statics::NewProp_UIComponent_MetaData[] = {
		{ "Category", "Components|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPlayerController_Statics::NewProp_UIComponent = { "UIComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPlayerController, UIComponent), Z_Construct_UClass_UARUIComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::NewProp_UIComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::NewProp_UIComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_GameLiftId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_SetAbilityGroup02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputSetAbilityGroup02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_SetAbilityGroup01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputSetAbilityGroup01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytHolstersWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputHolsterWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytPreviousWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputPreviousWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputNextWeaponSpecHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_AbilitytNextWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_InputNextWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_MainInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPlayerController_Statics::NewProp_UIComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AARPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIFInventoryInterface_NoRegister, (int32)VTABLE_OFFSET(AARPlayerController, IIFInventoryInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARPlayerController_Statics::ClassParams = {
		&AARPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARPlayerController_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPlayerController, 3156588647);
	template<> HOMININA_API UClass* StaticClass<AARPlayerController>()
	{
		return AARPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPlayerController(Z_Construct_UClass_AARPlayerController, &AARPlayerController::StaticClass, TEXT("/Script/Hominina"), TEXT("AARPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
