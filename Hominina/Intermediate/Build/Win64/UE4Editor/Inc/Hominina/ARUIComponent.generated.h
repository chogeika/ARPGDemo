// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARUIComponent_generated_h
#error "ARUIComponent.generated.h already included, missing '#pragma once' in ARUIComponent.h"
#endif
#define HOMININA_ARUIComponent_generated_h

#define Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_RPC_WRAPPERS
#define Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARUIComponent(); \
	friend struct Z_Construct_UClass_UARUIComponent_Statics; \
public: \
	DECLARE_CLASS(UARUIComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARUIComponent)


#define Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUARUIComponent(); \
	friend struct Z_Construct_UClass_UARUIComponent_Statics; \
public: \
	DECLARE_CLASS(UARUIComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARUIComponent)


#define Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARUIComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARUIComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARUIComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARUIComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARUIComponent(UARUIComponent&&); \
	NO_API UARUIComponent(const UARUIComponent&); \
public:


#define Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARUIComponent(UARUIComponent&&); \
	NO_API UARUIComponent(const UARUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARUIComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARUIComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARUIComponent)


#define Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Brush() { return STRUCT_OFFSET(UARUIComponent, Brush); } \
	FORCEINLINE static uint32 __PPO__CrosshairClass() { return STRUCT_OFFSET(UARUIComponent, CrosshairClass); } \
	FORCEINLINE static uint32 __PPO__CrosshairWidget() { return STRUCT_OFFSET(UARUIComponent, CrosshairWidget); } \
	FORCEINLINE static uint32 __PPO__HUDWidgetClass() { return STRUCT_OFFSET(UARUIComponent, HUDWidgetClass); }


#define Hominina_Source_Hominina_Public_UI_ARUIComponent_h_15_PROLOG
#define Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_INCLASS \
	Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_ARUIComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UI_ARUIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
