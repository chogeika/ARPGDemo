// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityFramework/Public/AFAbilityTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFAbilityTypes() {}
// Cross Module References
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAbilityContainer();
	UPackage* Z_Construct_UPackage__Script_AbilityFramework();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAbilitySpec();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	ABILITYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAFAbilitySpecHandle();
	ABILITYFRAMEWORK_API UClass* Z_Construct_UClass_UGAAbilityBase_NoRegister();
// End Cross Module References
class UScriptStruct* FAFAbilityContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFAbilityContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFAbilityContainer, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFAbilityContainer"), sizeof(FAFAbilityContainer), Get_Z_Construct_UScriptStruct_FAFAbilityContainer_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFAbilityContainer>()
{
	return FAFAbilityContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFAbilityContainer(FAFAbilityContainer::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFAbilityContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAbilityContainer
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAbilityContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFAbilityContainer")),new UScriptStruct::TCppStructOps<FAFAbilityContainer>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFAbilityContainer;
	struct Z_Construct_UScriptStruct_FAFAbilityContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatableAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActivatableAbilities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivatableAbilities_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AFAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFAbilityContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::NewProp_ActivatableAbilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::NewProp_ActivatableAbilities = { "ActivatableAbilities", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAbilityContainer, ActivatableAbilities), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::NewProp_ActivatableAbilities_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::NewProp_ActivatableAbilities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::NewProp_ActivatableAbilities_Inner = { "ActivatableAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAFAbilitySpec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::NewProp_ActivatableAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::NewProp_ActivatableAbilities_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"AFAbilityContainer",
		sizeof(FAFAbilityContainer),
		alignof(FAFAbilityContainer),
		Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFAbilityContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFAbilityContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFAbilityContainer"), sizeof(FAFAbilityContainer), Get_Z_Construct_UScriptStruct_FAFAbilityContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFAbilityContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFAbilityContainer_Hash() { return 1915710442U; }
class UScriptStruct* FAFAbilitySpec::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFAbilitySpec_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFAbilitySpec, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFAbilitySpec"), sizeof(FAFAbilitySpec), Get_Z_Construct_UScriptStruct_FAFAbilitySpec_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFAbilitySpec>()
{
	return FAFAbilitySpec::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFAbilitySpec(FAFAbilitySpec::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFAbilitySpec"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAbilitySpec
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAbilitySpec()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFAbilitySpec")),new UScriptStruct::TCppStructOps<FAFAbilitySpec>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFAbilitySpec;
	struct Z_Construct_UScriptStruct_FAFAbilitySpec_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n\x09Handle is created on calling client and then send to server. If/when server instance ability and send back it to client\n\x09it will use exactly the same handle.\n*/" },
		{ "ModuleRelativePath", "Public/AFAbilityTypes.h" },
		{ "ToolTip", "Handle is created on calling client and then send to server. If/when server instance ability and send back it to client\nit will use exactly the same handle." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFAbilitySpec>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_ClientHandle_MetaData[] = {
		{ "Comment", "/* Client generated handle that is only used temporarily to fire events on owning client. */" },
		{ "ModuleRelativePath", "Public/AFAbilityTypes.h" },
		{ "ToolTip", "Client generated handle that is only used temporarily to fire events on owning client." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_ClientHandle = { "ClientHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAbilitySpec, ClientHandle), Z_Construct_UScriptStruct_FAFAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_ClientHandle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_ClientHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "/* Server generated handle that is valid on both client and server. Use it to find ability */" },
		{ "ModuleRelativePath", "Public/AFAbilityTypes.h" },
		{ "ToolTip", "Server generated handle that is valid on both client and server. Use it to find ability" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAbilitySpec, Handle), Z_Construct_UScriptStruct_FAFAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_Handle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_Handle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_InputID_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAbilitySpec, InputID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_InputID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_InputID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_Ability_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAbilitySpec, Ability), Z_Construct_UClass_UGAAbilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_Ability_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_Ability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_ClientHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_InputID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::NewProp_Ability,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"AFAbilitySpec",
		sizeof(FAFAbilitySpec),
		alignof(FAFAbilitySpec),
		Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFAbilitySpec()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFAbilitySpec_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFAbilitySpec"), sizeof(FAFAbilitySpec), Get_Z_Construct_UScriptStruct_FAFAbilitySpec_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFAbilitySpec_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFAbilitySpec_Hash() { return 4114532107U; }
class UScriptStruct* FAFAbilitySpecHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABILITYFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAFAbilitySpecHandle, Z_Construct_UPackage__Script_AbilityFramework(), TEXT("AFAbilitySpecHandle"), sizeof(FAFAbilitySpecHandle), Get_Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Hash());
	}
	return Singleton;
}
template<> ABILITYFRAMEWORK_API UScriptStruct* StaticStruct<FAFAbilitySpecHandle>()
{
	return FAFAbilitySpecHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAFAbilitySpecHandle(FAFAbilitySpecHandle::StaticStruct, TEXT("/Script/AbilityFramework"), TEXT("AFAbilitySpecHandle"), false, nullptr, nullptr);
static struct FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAbilitySpecHandle
{
	FScriptStruct_AbilityFramework_StaticRegisterNativesFAFAbilitySpecHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AFAbilitySpecHandle")),new UScriptStruct::TCppStructOps<FAFAbilitySpecHandle>);
	}
} ScriptStruct_AbilityFramework_StaticRegisterNativesFAFAbilitySpecHandle;
	struct Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AFAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAFAbilitySpecHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/AFAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAFAbilitySpecHandle, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::NewProp_Handle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::NewProp_Handle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AbilityFramework,
		nullptr,
		&NewStructOps,
		"AFAbilitySpecHandle",
		sizeof(FAFAbilitySpecHandle),
		alignof(FAFAbilitySpecHandle),
		Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAFAbilitySpecHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AbilityFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AFAbilitySpecHandle"), sizeof(FAFAbilitySpecHandle), Get_Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAFAbilitySpecHandle_Hash() { return 569849021U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
