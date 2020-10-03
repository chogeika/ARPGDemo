// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARRegisterView_generated_h
#error "ARRegisterView.generated.h already included, missing '#pragma once' in ARRegisterView.h"
#endif
#define HOMININA_ARRegisterView_generated_h

#define Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRegisterFailed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRegisterFailed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRegisterSuccess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRegisterSuccess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRegisterClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRegisterClicked(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRegisterFailed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRegisterFailed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRegisterSuccess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRegisterSuccess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRegisterClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRegisterClicked(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARRegisterView(); \
	friend struct Z_Construct_UClass_UARRegisterView_Statics; \
public: \
	DECLARE_CLASS(UARRegisterView, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARRegisterView)


#define Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUARRegisterView(); \
	friend struct Z_Construct_UClass_UARRegisterView_Statics; \
public: \
	DECLARE_CLASS(UARRegisterView, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARRegisterView)


#define Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARRegisterView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARRegisterView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARRegisterView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARRegisterView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARRegisterView(UARRegisterView&&); \
	NO_API UARRegisterView(const UARRegisterView&); \
public:


#define Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARRegisterView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARRegisterView(UARRegisterView&&); \
	NO_API UARRegisterView(const UARRegisterView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARRegisterView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARRegisterView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARRegisterView)


#define Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserNameBox() { return STRUCT_OFFSET(UARRegisterView, UserNameBox); } \
	FORCEINLINE static uint32 __PPO__DisplayNameBox() { return STRUCT_OFFSET(UARRegisterView, DisplayNameBox); } \
	FORCEINLINE static uint32 __PPO__PasswordBox() { return STRUCT_OFFSET(UARRegisterView, PasswordBox); } \
	FORCEINLINE static uint32 __PPO__RegisterButton() { return STRUCT_OFFSET(UARRegisterView, RegisterButton); } \
	FORCEINLINE static uint32 __PPO__WarrningText() { return STRUCT_OFFSET(UARRegisterView, WarrningText); }


#define Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_17_PROLOG
#define Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_INCLASS \
	Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_Menu_ARRegisterView_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARRegisterView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_Menu_ARRegisterView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
