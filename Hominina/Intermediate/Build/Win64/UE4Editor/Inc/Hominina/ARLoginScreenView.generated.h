// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARLoginScreenView_generated_h
#error "ARLoginScreenView.generated.h already included, missing '#pragma once' in ARLoginScreenView.h"
#endif
#define HOMININA_ARLoginScreenView_generated_h

#define Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRegisterClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRegisterClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoginFailed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoginFailed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoginSuccess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoginSuccess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoginClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoginClicked(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRegisterClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRegisterClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoginFailed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoginFailed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoginSuccess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoginSuccess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoginClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoginClicked(); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARLoginScreenView(); \
	friend struct Z_Construct_UClass_UARLoginScreenView_Statics; \
public: \
	DECLARE_CLASS(UARLoginScreenView, UARUMGWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARLoginScreenView)


#define Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUARLoginScreenView(); \
	friend struct Z_Construct_UClass_UARLoginScreenView_Statics; \
public: \
	DECLARE_CLASS(UARLoginScreenView, UARUMGWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARLoginScreenView)


#define Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLoginScreenView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLoginScreenView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLoginScreenView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLoginScreenView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARLoginScreenView(UARLoginScreenView&&); \
	NO_API UARLoginScreenView(const UARLoginScreenView&); \
public:


#define Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLoginScreenView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARLoginScreenView(UARLoginScreenView&&); \
	NO_API UARLoginScreenView(const UARLoginScreenView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLoginScreenView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLoginScreenView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLoginScreenView)


#define Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserNameBox() { return STRUCT_OFFSET(UARLoginScreenView, UserNameBox); } \
	FORCEINLINE static uint32 __PPO__PasswordBox() { return STRUCT_OFFSET(UARLoginScreenView, PasswordBox); } \
	FORCEINLINE static uint32 __PPO__LoginButton() { return STRUCT_OFFSET(UARLoginScreenView, LoginButton); } \
	FORCEINLINE static uint32 __PPO__RegisterButton() { return STRUCT_OFFSET(UARLoginScreenView, RegisterButton); } \
	FORCEINLINE static uint32 __PPO__WarrningText() { return STRUCT_OFFSET(UARLoginScreenView, WarrningText); }


#define Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_16_PROLOG
#define Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_INCLASS \
	Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARLoginScreenView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UI_Menu_ARLoginScreenView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
