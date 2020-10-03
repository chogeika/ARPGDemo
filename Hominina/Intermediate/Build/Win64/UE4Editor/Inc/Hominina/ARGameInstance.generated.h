// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARGameInstance_generated_h
#error "ARGameInstance.generated.h already included, missing '#pragma once' in ARGameInstance.h"
#endif
#define HOMININA_ARGameInstance_generated_h

#define Hominina_Source_Hominina_Public_ARGameInstance_h_10_DELEGATE \
static inline void FARLoginAttemptEvent_DelegateWrapper(const FMulticastScriptDelegate& ARLoginAttemptEvent) \
{ \
	ARLoginAttemptEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Hominina_Source_Hominina_Public_ARGameInstance_h_9_DELEGATE \
static inline void FAROnConnectedToGS_DelegateWrapper(const FMulticastScriptDelegate& AROnConnectedToGS) \
{ \
	AROnConnectedToGS.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Hominina_Source_Hominina_Public_ARGameInstance_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHealthCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HealthCheck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestGSRequest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestGSRequest(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectToWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConnectToWorld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectToHub) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConnectToHub(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGameSparksAvailable) \
	{ \
		P_GET_UBOOL(Z_Param_bAvailable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGameSparksAvailable(Z_Param_bAvailable); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_ARGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHealthCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HealthCheck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestGSRequest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestGSRequest(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectToWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConnectToWorld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectToHub) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConnectToHub(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGameSparksAvailable) \
	{ \
		P_GET_UBOOL(Z_Param_bAvailable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGameSparksAvailable(Z_Param_bAvailable); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_ARGameInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGameInstance(); \
	friend struct Z_Construct_UClass_UARGameInstance_Statics; \
public: \
	DECLARE_CLASS(UARGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("ARGame");} \



#define Hominina_Source_Hominina_Public_ARGameInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUARGameInstance(); \
	friend struct Z_Construct_UClass_UARGameInstance_Statics; \
public: \
	DECLARE_CLASS(UARGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("ARGame");} \



#define Hominina_Source_Hominina_Public_ARGameInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGameInstance(UARGameInstance&&); \
	NO_API UARGameInstance(const UARGameInstance&); \
public:


#define Hominina_Source_Hominina_Public_ARGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGameInstance(UARGameInstance&&); \
	NO_API UARGameInstance(const UARGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGameInstance)


#define Hominina_Source_Hominina_Public_ARGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GSKey() { return STRUCT_OFFSET(UARGameInstance, GSKey); } \
	FORCEINLINE static uint32 __PPO__GSSecret() { return STRUCT_OFFSET(UARGameInstance, GSSecret); }


#define Hominina_Source_Hominina_Public_ARGameInstance_h_15_PROLOG
#define Hominina_Source_Hominina_Public_ARGameInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARGameInstance_h_18_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_ARGameInstance_h_18_INCLASS \
	Hominina_Source_Hominina_Public_ARGameInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_ARGameInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_ARGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_ARGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARGameInstance_h_18_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_ARGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_ARGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
