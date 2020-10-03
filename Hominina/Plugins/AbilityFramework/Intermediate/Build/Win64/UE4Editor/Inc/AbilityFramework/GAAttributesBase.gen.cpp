// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/Attributes/GAAttributesBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAttributesBase() {}
// Cross Module References
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAttributesProperty();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributesBase_NoRegister();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAttributesBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ABILITYFRAMEWORK_API UFunction* Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UAFAbilityComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FAFAttributesProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFAttributesProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFAttributesProperty, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFAttributesProperty"), sizeof(FAFAttributesProperty), Get_Z_Construct_UScriptStruct_FAFAttributesProperty_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFAttributesProperty>()
{
	return FAFAttributesProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFAttributesProperty(FAFAttributesProperty::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFAttributesProperty"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributesProperty
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributesProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFAttributesProperty")),new UScriptStruct::TCppStructOps<FAFAttributesProperty>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFAttributesProperty;
	struct Z_Construct_UScriptStruct_FAFAttributesProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFAttributesProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewProp_AttributeValues_MetaData[] = {
		{ "Category", "AFAttributesProperty" },
		{ "Comment", "/*\n\x09\x09If set, any values in Attributes will be overriden by table.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBase.h" },
		{ "ToolTip", "If set, any values in Attributes will be overriden by table." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewProp_AttributeValues = { "AttributeValues", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributesProperty, AttributeValues), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewProp_AttributeValues_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewProp_AttributeValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "AFAttributesProperty" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAttributesProperty, Attributes), Z_Construct_UClass_UGAAttributesBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewProp_Attributes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewProp_Attributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewProp_AttributeValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::NewProp_Attributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFAttributesProperty",
		sizeof(FAFAttributesProperty),
		alignof(FAFAttributesProperty),
		Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFAttributesProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFAttributesProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFAttributesProperty"), sizeof(FAFAttributesProperty), Get_Z_Construct_UScriptStruct_FAFAttributesProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFAttributesProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFAttributesProperty_Hash() { return 2763249070U; }
	static FName NAME_UGAAttributesBase_BP_InitializeAttributes = FName(TEXT("BP_InitializeAttributes"));
	bool UGAAttributesBase::BP_InitializeAttributes()
	{
		GAAttributesBase_eventBP_InitializeAttributes_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGAAttributesBase_BP_InitializeAttributes),&Parms);
		return !!Parms.ReturnValue;
	}
	void UGAAttributesBase::StaticRegisterNativesUGAAttributesBase()
	{
	}
	struct Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GAAttributesBase_eventBP_InitializeAttributes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GAAttributesBase_eventBP_InitializeAttributes_Parms), &Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Initialize Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAAttributesBase, nullptr, "BP_InitializeAttributes", nullptr, nullptr, sizeof(GAAttributesBase_eventBP_InitializeAttributes_Parms), Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAAttributesBase_NoRegister()
	{
		return UGAAttributesBase::StaticClass();
	}
	struct Z_Construct_UClass_UGAAttributesBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningAttributeComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAttributeComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAttributesBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAAttributesBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAAttributesBase_BP_InitializeAttributes, "BP_InitializeAttributes" }, // 240927104
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributesBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n\x09What I need.\n\x09""Easy way to create Targeted modifications.\n\x09""For Example, we have ability Fireball, which have cast time 3s, and recharge time 5 seconds.\n\x09Targeted modification, will only affect this one ability! \n\x09\n\x09So we want  attribute which will decrease recharge time of this ability by 2 seconds (or decrease recharge time by 25%\n\x09or increase recharge speed). How to do it ?\n\x09\n\x09Path of least resistance is to create special object, which will be instanced, which will listen for abilities\n\x09which are activated, and you can cast to your particular ability (or check for tags), and just modify it's\n\x09properties directly.\n\n\x09Second way, (??) would be to create small objects, contained within array (structs), which would do the same thing.\n\x09""Except they would only be able to catch something like ability activation by tag. They wouldn't know, what kind of\n\x09properties are on ability.\n\n\x09The ability in this case would be needed to be treated as source of incoming attribute, and that object would check \n\x09""for this attribute and modify it.\n\x09Well kind of.\n\n\x09The same problems exist for any kind of abilities more broad (like Hex), more narrow (only Necromancer Hex),\n\x09or for weapons (we want to increase fire rate, if you have equiped machine gun).\n\n\x09Though on the very base level attribute system have no idea, what kind of properties you might have on\n\x09your machine gun.\n\n\n\x09This bring us to the core issue. How to create system like Traits/Feats/Talents, which can contain\n\x09myriads of possible combinations of those tree systems. We would need to mix some instanced/non-instanced UObjects\n\x09""along with plain structs. Which is probabaly going to be total mess.\n*/" },
		{ "IncludePath", "Attributes/GAAttributesBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "What I need.\nEasy way to create Targeted modifications.\nFor Example, we have ability Fireball, which have cast time 3s, and recharge time 5 seconds.\nTargeted modification, will only affect this one ability!\n\nSo we want  attribute which will decrease recharge time of this ability by 2 seconds (or decrease recharge time by 25%\nor increase recharge speed). How to do it ?\n\nPath of least resistance is to create special object, which will be instanced, which will listen for abilities\nwhich are activated, and you can cast to your particular ability (or check for tags), and just modify it's\nproperties directly.\n\nSecond way, (??) would be to create small objects, contained within array (structs), which would do the same thing.\nExcept they would only be able to catch something like ability activation by tag. They wouldn't know, what kind of\nproperties are on ability.\n\nThe ability in this case would be needed to be treated as source of incoming attribute, and that object would check\nfor this attribute and modify it.\nWell kind of.\n\nThe same problems exist for any kind of abilities more broad (like Hex), more narrow (only Necromancer Hex),\nor for weapons (we want to increase fire rate, if you have equiped machine gun).\n\nThough on the very base level attribute system have no idea, what kind of properties you might have on\nyour machine gun.\n\n\nThis bring us to the core issue. How to create system like Traits/Feats/Talents, which can contain\nmyriads of possible combinations of those tree systems. We would need to mix some instanced/non-instanced UObjects\nalong with plain structs. Which is probabaly going to be total mess." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributesBase_Statics::NewProp_OwningAttributeComp_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Updates attributes.\n\x09\x09@param AttributeIn - attribute which changed value.\n\n\x09\x09You can use this function to update other attributes (for example derived ones),\n\x09\x09""based on the primary attribute, if the primary attribute (AttributeIn), changed.\n\n\x09\x09I have yet to fully figure out how do I want it to work. But one thing for certain is\n\x09\x09that it must be fully functional from within blueprint.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBase.h" },
		{ "ToolTip", "Updates attributes.\n@param AttributeIn - attribute which changed value.\n\nYou can use this function to update other attributes (for example derived ones),\nbased on the primary attribute, if the primary attribute (AttributeIn), changed.\n\nI have yet to fully figure out how do I want it to work. But one thing for certain is\nthat it must be fully functional from within blueprint." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAAttributesBase_Statics::NewProp_OwningAttributeComp = { "OwningAttributeComp", nullptr, (EPropertyFlags)0x0010000000080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAttributesBase, OwningAttributeComp), Z_Construct_UClass_UAFAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAAttributesBase_Statics::NewProp_OwningAttributeComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAttributesBase_Statics::NewProp_OwningAttributeComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributesBase_Statics::NewProp_AttributeValues_MetaData[] = {
		{ "Category", "GAAttributesBase" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Attributes/GAAttributesBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAAttributesBase_Statics::NewProp_AttributeValues = { "AttributeValues", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAAttributesBase, AttributeValues), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAAttributesBase_Statics::NewProp_AttributeValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGAAttributesBase_Statics::NewProp_AttributeValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAAttributesBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAttributesBase_Statics::NewProp_OwningAttributeComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAttributesBase_Statics::NewProp_AttributeValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAttributesBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAttributesBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAAttributesBase_Statics::ClassParams = {
		&UGAAttributesBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAAttributesBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGAAttributesBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAttributesBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGAAttributesBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAttributesBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAAttributesBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAAttributesBase, 3918464151);
	template<> ABILITYFRAMEWORK_API UClass* StaticClass<UGAAttributesBase>()
	{
		return UGAAttributesBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAAttributesBase(Z_Construct_UClass_UGAAttributesBase, &UGAAttributesBase::StaticClass, TEXT("/Script/AbilityFramework"), TEXT("UGAAttributesBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAttributesBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
