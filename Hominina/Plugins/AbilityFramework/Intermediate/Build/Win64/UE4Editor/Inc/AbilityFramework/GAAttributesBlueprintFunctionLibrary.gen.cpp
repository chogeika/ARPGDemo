// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Attributes/GAAttributesBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAttributesBlueprintFunctionLibrary() {}
// Cross Module References
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAAttribute();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGAEffectHandle();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFPropertytHandle();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue();
// End Cross Module References
	void UGAAttributesBlueprintFunctionLibrary::StaticRegisterNativesUGAAttributesBlueprintFunctionLibrary()
	{
		UClass* Class = UGAAttributesBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EqualAttribute", &UGAAttributesBlueprintFunctionLibrary::execEqualAttribute },
			{ "ExchangeAttributesValues", &UGAAttributesBlueprintFunctionLibrary::execExchangeAttributesValues },
			{ "GetAttribute", &UGAAttributesBlueprintFunctionLibrary::execGetAttribute },
			{ "GetAttributeFloat", &UGAAttributesBlueprintFunctionLibrary::execGetAttributeFloat },
			{ "GetCurrentAttributeValue", &UGAAttributesBlueprintFunctionLibrary::execGetCurrentAttributeValue },
			{ "GetFinalAttributeValue", &UGAAttributesBlueprintFunctionLibrary::execGetFinalAttributeValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics
	{
		struct GAAttributesBlueprintFunctionLibrary_eventEqualAttribute_Parms
		{
			FGAAttribute Compare;
			FGAAttribute Against;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Against;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Compare_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Compare;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GAAttributesBlueprintFunctionLibrary_eventEqualAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GAAttributesBlueprintFunctionLibrary_eventEqualAttribute_Parms), &Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_Against = { "Against", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventEqualAttribute_Parms, Against), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_Compare_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_Compare = { "Compare", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventEqualAttribute_Parms, Compare), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_Compare_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_Compare_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_Against,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::NewProp_Compare,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "DisplayName", "Equal" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary, nullptr, "EqualAttribute", nullptr, nullptr, sizeof(GAAttributesBlueprintFunctionLibrary_eventEqualAttribute_Parms), Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics
	{
		struct GAAttributesBlueprintFunctionLibrary_eventExchangeAttributesValues_Parms
		{
			APawn* Instigator;
			UObject* Causer;
			FAFPropertytHandle From;
			FGAEffectHandle FromHandle;
			UObject* FromTarget;
			FAFPropertytHandle To;
			FGAEffectHandle ToHandle;
			UObject* ToTarget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_ToTarget = { "ToTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventExchangeAttributesValues_Parms, ToTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_ToHandle = { "ToHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventExchangeAttributesValues_Parms, ToHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventExchangeAttributesValues_Parms, To), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_FromTarget = { "FromTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventExchangeAttributesValues_Parms, FromTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_FromHandle = { "FromHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventExchangeAttributesValues_Parms, FromHandle), Z_Construct_UScriptStruct_FGAEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventExchangeAttributesValues_Parms, From), Z_Construct_UScriptStruct_FAFPropertytHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventExchangeAttributesValues_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventExchangeAttributesValues_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_ToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_ToHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_FromTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_FromHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "Comment", "/**\n\x09 *\x09Subtracts value specified by From effect\n\x09 *  and adds it by effect specified by To.\n\x09 *\n\x09 *\x09@param Instigator - Who Insigated effects.\n\x09 *\x09@param Causer - Who Caused Effects\n\x09 *\x09@param From - effect which will subtract Value\n\x09 *\x09@param FromTarget - from whose attributes value will be subtracted\n\x09 *\x09@param To - Effect specifing where attribute should be added.\n\x09 *\x09@param ToTarget - Target to which attributes will be added.\n\x09 *\n\x09 *  @return value of attribute from actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Subtracts value specified by From effect\nand adds it by effect specified by To.\n\n@param Instigator - Who Insigated effects.\n@param Causer - Who Caused Effects\n@param From - effect which will subtract Value\n@param FromTarget - from whose attributes value will be subtracted\n@param To - Effect specifing where attribute should be added.\n@param ToTarget - Target to which attributes will be added.\n\n@return value of attribute from actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary, nullptr, "ExchangeAttributesValues", nullptr, nullptr, sizeof(GAAttributesBlueprintFunctionLibrary_eventExchangeAttributesValues_Parms), Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics
	{
		struct GAAttributesBlueprintFunctionLibrary_eventGetAttribute_Parms
		{
			FGAAttribute AttributeIn;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::NewProp_AttributeIn = { "AttributeIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetAttribute_Parms, AttributeIn), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::NewProp_AttributeIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary, nullptr, "GetAttribute", nullptr, nullptr, sizeof(GAAttributesBlueprintFunctionLibrary_eventGetAttribute_Parms), Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics
	{
		struct GAAttributesBlueprintFunctionLibrary_eventGetAttributeFloat_Parms
		{
			AActor* Target;
			FGAAttribute AttributeIn;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeIn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetAttributeFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::NewProp_AttributeIn = { "AttributeIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetAttributeFloat_Parms, AttributeIn), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetAttributeFloat_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::NewProp_AttributeIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "Comment", "/**\n\x09*\x09Takes actor, and return value of specified attribute.\n\x09*\n\x09*\x09@param Target - Actrom from which take attribute\n\x09*\x09@param AttributeIn - Attribute from which we want to get value\n\x09*\n\x09*  @return value of attribute from actor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Takes actor, and return value of specified attribute.\n\n@param Target - Actrom from which take attribute\n@param AttributeIn - Attribute from which we want to get value\n\n@return value of attribute from actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary, nullptr, "GetAttributeFloat", nullptr, nullptr, sizeof(GAAttributesBlueprintFunctionLibrary_eventGetAttributeFloat_Parms), Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics
	{
		struct GAAttributesBlueprintFunctionLibrary_eventGetCurrentAttributeValue_Parms
		{
			AActor* Target;
			FGAAttribute Name;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetCurrentAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetCurrentAttributeValue_Parms, Name), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetCurrentAttributeValue_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary, nullptr, "GetCurrentAttributeValue", nullptr, nullptr, sizeof(GAAttributesBlueprintFunctionLibrary_eventGetCurrentAttributeValue_Parms), Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics
	{
		struct GAAttributesBlueprintFunctionLibrary_eventGetFinalAttributeValue_Parms
		{
			AActor* Target;
			FGAAttribute Name;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetFinalAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetFinalAttributeValue_Parms, Name), Z_Construct_UScriptStruct_FGAAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAAttributesBlueprintFunctionLibrary_eventGetFinalAttributeValue_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityFramework|Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary, nullptr, "GetFinalAttributeValue", nullptr, nullptr, sizeof(GAAttributesBlueprintFunctionLibrary_eventGetFinalAttributeValue_Parms), Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_NoRegister()
	{
		return UGAAttributesBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_EqualAttribute, "EqualAttribute" }, // 2238160729
		{ &Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_ExchangeAttributesValues, "ExchangeAttributesValues" }, // 1935418685
		{ &Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttribute, "GetAttribute" }, // 3465980872
		{ &Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetAttributeFloat, "GetAttributeFloat" }, // 2085508056
		{ &Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetCurrentAttributeValue, "GetCurrentAttributeValue" }, // 3706490897
		{ &Z_Construct_UFunction_UGAAttributesBlueprintFunctionLibrary_GetFinalAttributeValue, "GetFinalAttributeValue" }, // 2774526199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09Some static helper functions, to interact with Attribute system.\n*/" },
		{ "IncludePath", "Attributes/GAAttributesBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Some static helper functions, to interact with Attribute system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAttributesBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics::ClassParams = {
		&UGAAttributesBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAttributesBlueprintFunctionLibrary, 694405870);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAttributesBlueprintFunctionLibrary>()
	{
		return UGAAttributesBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAttributesBlueprintFunctionLibrary(Z_Construct_UClass_UGAAttributesBlueprintFunctionLibrary, &UGAAttributesBlueprintFunctionLibrary::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAttributesBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAttributesBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
