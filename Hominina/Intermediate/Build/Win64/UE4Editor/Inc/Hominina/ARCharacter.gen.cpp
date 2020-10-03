// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hominina/Public/ARCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARCharacter() {}
// Cross Module References
	HOMININA_API UEnum* Z_Construct_UEnum_Hominina_AbilityInput();
	UPackage* Z_Construct_UPackage__Script_Hominina();
	HOMININA_API UScriptStruct* Z_Construct_UScriptStruct_FARCameraTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HOMININA_API UClass* Z_Construct_UClass_AARCharacter_NoRegister();
	HOMININA_API UClass* Z_Construct_UClass_AARCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	HOMININA_API UFunction* Z_Construct_UFunction_AARCharacter_CalculateSpatialGrid();
	HOMININA_API UFunction* Z_Construct_UFunction_AARCharacter_ClientPossesedBy();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_AARCharacter_GetAbilityComp();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityComponent_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_AARCharacter_GetAttributeValue();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute();
	HOMININA_API UFunction* Z_Construct_UFunction_AARCharacter_GetEffectsComponent();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFEffectsComponent_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_AARCharacter_GetMainWeapon();
	HOMININA_API UClass* Z_Construct_UClass_AARWeaponBase_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	HOMININA_API UFunction* Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAbilitySpecHandle();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	HOMININA_API UClass* Z_Construct_UClass_UARWeaponInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityInterface_NoRegister();
	INVENTORYFRAMEWORK_API UClass* Z_Construct_UClass_UIFInventoryInterface_NoRegister();
// End Cross Module References
	static UEnum* AbilityInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Hominina_AbilityInput, Z_Construct_UPackage__Script_Hominina(), TEXT("AbilityInput"));
		}
		return Singleton;
	}
	template<> HOMININA_API UEnum* StaticEnum<AbilityInput>()
	{
		return AbilityInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AbilityInput(AbilityInput_StaticEnum, TEXT("/Script/Hominina"), TEXT("AbilityInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Hominina_AbilityInput_Hash() { return 539634510U; }
	UEnum* Z_Construct_UEnum_Hominina_AbilityInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Hominina();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AbilityInput"), 0, Get_Z_Construct_UEnum_Hominina_AbilityInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AbilityInput::Shoot", (int64)AbilityInput::Shoot },
				{ "AbilityInput::Reload", (int64)AbilityInput::Reload },
				{ "AbilityInput::NextWeapon", (int64)AbilityInput::NextWeapon },
				{ "AbilityInput::PreviousWeapon", (int64)AbilityInput::PreviousWeapon },
				{ "AbilityInput::NextAbilitySet", (int64)AbilityInput::NextAbilitySet },
				{ "AbilityInput::PreviousAbilitySet", (int64)AbilityInput::PreviousAbilitySet },
				{ "AbilityInput::Ability01", (int64)AbilityInput::Ability01 },
				{ "AbilityInput::Ability02", (int64)AbilityInput::Ability02 },
				{ "AbilityInput::Ability03", (int64)AbilityInput::Ability03 },
				{ "AbilityInput::Ability04", (int64)AbilityInput::Ability04 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ability01.Name", "AbilityInput::Ability01" },
				{ "Ability02.Name", "AbilityInput::Ability02" },
				{ "Ability03.Name", "AbilityInput::Ability03" },
				{ "Ability04.Name", "AbilityInput::Ability04" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARCharacter.h" },
				{ "NextAbilitySet.Name", "AbilityInput::NextAbilitySet" },
				{ "NextWeapon.Name", "AbilityInput::NextWeapon" },
				{ "PreviousAbilitySet.Name", "AbilityInput::PreviousAbilitySet" },
				{ "PreviousWeapon.Name", "AbilityInput::PreviousWeapon" },
				{ "Reload.Name", "AbilityInput::Reload" },
				{ "Shoot.Name", "AbilityInput::Shoot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Hominina,
				nullptr,
				"AbilityInput",
				"AbilityInput",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FARCameraTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOMININA_API uint32 Get_Z_Construct_UScriptStruct_FARCameraTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARCameraTransform, Z_Construct_UPackage__Script_Hominina(), TEXT("ARCameraTransform"), sizeof(FARCameraTransform), Get_Z_Construct_UScriptStruct_FARCameraTransform_Hash());
	}
	return Singleton;
}
template<> HOMININA_API UScriptStruct* StaticStruct<FARCameraTransform>()
{
	return FARCameraTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARCameraTransform(FARCameraTransform::StaticStruct, TEXT("/Script/Hominina"), TEXT("ARCameraTransform"), false, nullptr, nullptr);
static struct FScriptStruct_Hominina_StaticRegisterNativesFARCameraTransform
{
	FScriptStruct_Hominina_StaticRegisterNativesFARCameraTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARCameraTransform")),new UScriptStruct::TCppStructOps<FARCameraTransform>);
	}
} ScriptStruct_Hominina_StaticRegisterNativesFARCameraTransform;
	struct Z_Construct_UScriptStruct_FARCameraTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARCameraTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARCameraTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "ARCameraTransform" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARCameraTransform, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewProp_ForwardVector_MetaData[] = {
		{ "Category", "ARCameraTransform" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARCameraTransform, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewProp_ForwardVector_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewProp_ForwardVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARCameraTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARCameraTransform_Statics::NewProp_ForwardVector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARCameraTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
		nullptr,
		&NewStructOps,
		"ARCameraTransform",
		sizeof(FARCameraTransform),
		alignof(FARCameraTransform),
		Z_Construct_UScriptStruct_FARCameraTransform_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FARCameraTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARCameraTransform_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FARCameraTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARCameraTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARCameraTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Hominina();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARCameraTransform"), sizeof(FARCameraTransform), Get_Z_Construct_UScriptStruct_FARCameraTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARCameraTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARCameraTransform_Hash() { return 3578510172U; }
	static FName NAME_AARCharacter_ClientPossesedBy = FName(TEXT("ClientPossesedBy"));
	void AARCharacter::ClientPossesedBy(AController* NewController)
	{
		ARCharacter_eventClientPossesedBy_Parms Parms;
		Parms.NewController=NewController;
		ProcessEvent(FindFunctionChecked(NAME_AARCharacter_ClientPossesedBy),&Parms);
	}
	void AARCharacter::StaticRegisterNativesAARCharacter()
	{
		UClass* Class = AARCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateSpatialGrid", &AARCharacter::execCalculateSpatialGrid },
			{ "ClientPossesedBy", &AARCharacter::execClientPossesedBy },
			{ "GetAbilityComp", &AARCharacter::execGetAbilityComp },
			{ "GetAttributeValue", &AARCharacter::execGetAttributeValue },
			{ "GetEffectsComponent", &AARCharacter::execGetEffectsComponent },
			{ "GetMainWeapon", &AARCharacter::execGetMainWeapon },
			{ "GetMainWeaponMesh", &AARCharacter::execGetMainWeaponMesh },
			{ "GetMainWeaponSocket", &AARCharacter::execGetMainWeaponSocket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARCharacter_CalculateSpatialGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_CalculateSpatialGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActionRPGGame" },
		{ "Comment", "/* IIFInventoryInterface */" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
		{ "ToolTip", "IIFInventoryInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARCharacter_CalculateSpatialGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCharacter, nullptr, "CalculateSpatialGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_CalculateSpatialGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_CalculateSpatialGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARCharacter_CalculateSpatialGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARCharacter_CalculateSpatialGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCharacter_eventClientPossesedBy_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCharacter, nullptr, "ClientPossesedBy", nullptr, nullptr, sizeof(ARCharacter_eventClientPossesedBy_Parms), Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARCharacter_ClientPossesedBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARCharacter_ClientPossesedBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics
	{
		struct ARCharacter_eventGetAbilityComp_Parms
		{
			UAFAbilityComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCharacter_eventGetAbilityComp_Parms, ReturnValue), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "Comment", "/* IAFAbilityInterface- BEGIN */" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
		{ "ToolTip", "IAFAbilityInterface- BEGIN" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCharacter, nullptr, "GetAbilityComp", nullptr, nullptr, sizeof(ARCharacter_eventGetAbilityComp_Parms), Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARCharacter_GetAbilityComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARCharacter_GetAbilityComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics
	{
		struct ARCharacter_eventGetAttributeValue_Parms
		{
			FGAAttribute AttributeIn;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCharacter_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::NewProp_AttributeIn = { "AttributeIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCharacter_eventGetAttributeValue_Parms, AttributeIn), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::NewProp_AttributeIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCharacter, nullptr, "GetAttributeValue", nullptr, nullptr, sizeof(ARCharacter_eventGetAttributeValue_Parms), Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARCharacter_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARCharacter_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics
	{
		struct ARCharacter_eventGetEffectsComponent_Parms
		{
			UAFEffectsComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCharacter_eventGetEffectsComponent_Parms, ReturnValue), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCharacter, nullptr, "GetEffectsComponent", nullptr, nullptr, sizeof(ARCharacter_eventGetEffectsComponent_Parms), Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARCharacter_GetEffectsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARCharacter_GetEffectsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics
	{
		struct ARCharacter_eventGetMainWeapon_Parms
		{
			AARWeaponBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCharacter_eventGetMainWeapon_Parms, ReturnValue), Z_Construct_UClass_AARWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character | Weapons" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCharacter, nullptr, "GetMainWeapon", nullptr, nullptr, sizeof(ARCharacter_eventGetMainWeapon_Parms), Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARCharacter_GetMainWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARCharacter_GetMainWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics
	{
		struct ARCharacter_eventGetMainWeaponMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCharacter_eventGetMainWeaponMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character | Weapons" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCharacter, nullptr, "GetMainWeaponMesh", nullptr, nullptr, sizeof(ARCharacter_eventGetMainWeaponMesh_Parms), Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics
	{
		struct ARCharacter_eventGetMainWeaponSocket_Parms
		{
			FName Socket;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Socket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCharacter_eventGetMainWeaponSocket_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::NewProp_Socket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARCharacter_eventGetMainWeaponSocket_Parms, Socket), METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::NewProp_Socket_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::NewProp_Socket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::NewProp_Socket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character | Weapons" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARCharacter, nullptr, "GetMainWeaponSocket", nullptr, nullptr, sizeof(ARCharacter_eventGetMainWeaponSocket_Parms), Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARCharacter_NoRegister()
	{
		return AARCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AARCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAbility04Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestAbility04Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAbility04_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_TestAbility04;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAbility03Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestAbility03Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAbility03_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_TestAbility03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAbility02Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestAbility02Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAbility02_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_TestAbility02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAbility01Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestAbility01Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestAbility01_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_TestAbility01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEquipedMain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponEquipedMain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponHolsteredSideLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponHolsteredSideLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HolsteredBackDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HolsteredBackDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponHolsteredLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponHolsteredLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponHolsteredRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponHolsteredRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegsCloth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LegsCloth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Backpack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Backpack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Legs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Torso_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Torso;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hands_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arms_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shoulders_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shoulders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitiesToGive_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilitiesToGive;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilitiesToGive_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectsComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Abilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Hominina,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARCharacter_CalculateSpatialGrid, "CalculateSpatialGrid" }, // 360738432
		{ &Z_Construct_UFunction_AARCharacter_ClientPossesedBy, "ClientPossesedBy" }, // 1796883241
		{ &Z_Construct_UFunction_AARCharacter_GetAbilityComp, "GetAbilityComp" }, // 1303193749
		{ &Z_Construct_UFunction_AARCharacter_GetAttributeValue, "GetAttributeValue" }, // 3787994799
		{ &Z_Construct_UFunction_AARCharacter_GetEffectsComponent, "GetEffectsComponent" }, // 85115096
		{ &Z_Construct_UFunction_AARCharacter_GetMainWeapon, "GetMainWeapon" }, // 2266037567
		{ &Z_Construct_UFunction_AARCharacter_GetMainWeaponMesh, "GetMainWeaponMesh" }, // 3981949987
		{ &Z_Construct_UFunction_AARCharacter_GetMainWeaponSocket, "GetMainWeaponSocket" }, // 908212495
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ARCharacter.h" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility04Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility04Handle = { "TestAbility04Handle", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, TestAbility04Handle), Z_Construct_UScriptStruct_FAFAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility04Handle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility04Handle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility04_MetaData[] = {
		{ "Category", "Test Ability" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility04 = { "TestAbility04", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, TestAbility04), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility04_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility04_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility03Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility03Handle = { "TestAbility03Handle", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, TestAbility03Handle), Z_Construct_UScriptStruct_FAFAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility03Handle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility03Handle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility03_MetaData[] = {
		{ "Category", "Test Ability" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility03 = { "TestAbility03", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, TestAbility03), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility03_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility02Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility02Handle = { "TestAbility02Handle", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, TestAbility02Handle), Z_Construct_UScriptStruct_FAFAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility02Handle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility02Handle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility02_MetaData[] = {
		{ "Category", "Test Ability" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility02 = { "TestAbility02", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, TestAbility02), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility02_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility01Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility01Handle = { "TestAbility01Handle", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, TestAbility01Handle), Z_Construct_UScriptStruct_FAFAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility01Handle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility01Handle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility01_MetaData[] = {
		{ "Category", "Test Ability" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility01 = { "TestAbility01", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, TestAbility01), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility01_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraTransform_MetaData[] = {
		{ "Category", "Player Character Camera" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, CameraTransform), Z_Construct_UScriptStruct_FARCameraTransform, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponEquipedMain_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponEquipedMain = { "WeaponEquipedMain", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, WeaponEquipedMain), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponEquipedMain_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponEquipedMain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredSideLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredSideLeft = { "WeaponHolsteredSideLeft", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, WeaponHolsteredSideLeft), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredSideLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredSideLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_HolsteredBackDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_HolsteredBackDown = { "HolsteredBackDown", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, HolsteredBackDown), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_HolsteredBackDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_HolsteredBackDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredLeft = { "WeaponHolsteredLeft", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, WeaponHolsteredLeft), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapons" },
		{ "Comment", "//Weapons\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
		{ "ToolTip", "Weapons" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredRight = { "WeaponHolsteredRight", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, WeaponHolsteredRight), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_LegsCloth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_LegsCloth = { "LegsCloth", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, LegsCloth), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_LegsCloth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_LegsCloth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_Backpack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_Backpack = { "Backpack", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, Backpack), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_Backpack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_Backpack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_Feets_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_Feets = { "Feets", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, Feets), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_Feets_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_Feets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_Legs_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, Legs), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_Legs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_Legs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_Torso_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_Torso = { "Torso", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, Torso), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_Torso_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_Torso_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_Hands_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_Hands = { "Hands", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, Hands), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_Hands_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_Hands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_Arms_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_Arms = { "Arms", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, Arms), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_Arms_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_Arms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_Shoulders_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Parts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_Shoulders = { "Shoulders", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, Shoulders), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_Shoulders_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_Shoulders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_Head_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Parts" },
		{ "Comment", "//Character parts:\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
		{ "ToolTip", "Character parts:" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, Head), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_Head_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_AbilitiesToGive_MetaData[] = {
		{ "Category", "Default Abilities" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_AbilitiesToGive = { "AbilitiesToGive", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, AbilitiesToGive), METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_AbilitiesToGive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_AbilitiesToGive_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_AbilitiesToGive_Inner = { "AbilitiesToGive", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponInventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponInventory = { "WeaponInventory", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, WeaponInventory), Z_Construct_UClass_UARWeaponInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_EffectsComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_EffectsComponent = { "EffectsComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, EffectsComponent), Z_Construct_UClass_UAFEffectsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_EffectsComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_EffectsComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_Abilities_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, Abilities), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_Abilities_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_Abilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility04Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility04,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility03Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility02Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility01Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_TestAbility01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponEquipedMain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredSideLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_HolsteredBackDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponHolsteredRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_LegsCloth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_Backpack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_Feets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_Legs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_Torso,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_Hands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_Arms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_Shoulders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_AbilitiesToGive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_AbilitiesToGive_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_WeaponInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_EffectsComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARCharacter_Statics::NewProp_CameraBoom,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AARCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAFAbilityInterface_NoRegister, (int32)VTABLE_OFFSET(AARCharacter, IAFAbilityInterface), false },
			{ Z_Construct_UClass_UIFInventoryInterface_NoRegister, (int32)VTABLE_OFFSET(AARCharacter, IIFInventoryInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARCharacter_Statics::ClassParams = {
		&AARCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARCharacter_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AARCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARCharacter, 3475615703);
	template<> HOMININA_API UClass* StaticClass<AARCharacter>()
	{
		return AARCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARCharacter(Z_Construct_UClass_AARCharacter, &AARCharacter::StaticClass, TEXT("/Script/Hominina"), TEXT("AARCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
