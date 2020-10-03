// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARHUDPlayerInfo_generated_h
#error "ARHUDPlayerInfo.generated.h already included, missing '#pragma once' in ARHUDPlayerInfo.h"
#endif
#define HOMININA_ARHUDPlayerInfo_generated_h

#define Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_RPC_WRAPPERS
#define Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARHUDPlayerInfo(); \
	friend struct Z_Construct_UClass_UARHUDPlayerInfo_Statics; \
public: \
	DECLARE_CLASS(UARHUDPlayerInfo, UARUMGWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARHUDPlayerInfo)


#define Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUARHUDPlayerInfo(); \
	friend struct Z_Construct_UClass_UARHUDPlayerInfo_Statics; \
public: \
	DECLARE_CLASS(UARHUDPlayerInfo, UARUMGWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(UARHUDPlayerInfo)


#define Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARHUDPlayerInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARHUDPlayerInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARHUDPlayerInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARHUDPlayerInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARHUDPlayerInfo(UARHUDPlayerInfo&&); \
	NO_API UARHUDPlayerInfo(const UARHUDPlayerInfo&); \
public:


#define Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARHUDPlayerInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARHUDPlayerInfo(UARHUDPlayerInfo&&); \
	NO_API UARHUDPlayerInfo(const UARHUDPlayerInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARHUDPlayerInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARHUDPlayerInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARHUDPlayerInfo)


#define Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerHealth() { return STRUCT_OFFSET(UARHUDPlayerInfo, PlayerHealth); } \
	FORCEINLINE static uint32 __PPO__PlayerStamina() { return STRUCT_OFFSET(UARHUDPlayerInfo, PlayerStamina); } \
	FORCEINLINE static uint32 __PPO__PlayerEnergy() { return STRUCT_OFFSET(UARHUDPlayerInfo, PlayerEnergy); }


#define Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_15_PROLOG
#define Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_INCLASS \
	Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class UARHUDPlayerInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UI_HUD_ARHUDPlayerInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
