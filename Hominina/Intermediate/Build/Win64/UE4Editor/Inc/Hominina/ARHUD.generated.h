// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAFAttributeChangedData;
#ifdef HOMININA_ARHUD_generated_h
#error "ARHUD.generated.h already included, missing '#pragma once' in ARHUD.h"
#endif
#define HOMININA_ARHUD_generated_h

#define Hominina_Source_Hominina_Public_UI_ARHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEnemyDamageCaused) \
	{ \
		P_GET_STRUCT_REF(FAFAttributeChangedData,Z_Param_Out_InMod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEnemyDamageCaused(Z_Param_Out_InMod); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UI_ARHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEnemyDamageCaused) \
	{ \
		P_GET_STRUCT_REF(FAFAttributeChangedData,Z_Param_Out_InMod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEnemyDamageCaused(Z_Param_Out_InMod); \
		P_NATIVE_END; \
	}


#define Hominina_Source_Hominina_Public_UI_ARHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARHUD(); \
	friend struct Z_Construct_UClass_AARHUD_Statics; \
public: \
	DECLARE_CLASS(AARHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARHUD)


#define Hominina_Source_Hominina_Public_UI_ARHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAARHUD(); \
	friend struct Z_Construct_UClass_AARHUD_Statics; \
public: \
	DECLARE_CLASS(AARHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hominina"), NO_API) \
	DECLARE_SERIALIZER(AARHUD)


#define Hominina_Source_Hominina_Public_UI_ARHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARHUD(AARHUD&&); \
	NO_API AARHUD(const AARHUD&); \
public:


#define Hominina_Source_Hominina_Public_UI_ARHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARHUD(AARHUD&&); \
	NO_API AARHUD(const AARHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARHUD)


#define Hominina_Source_Hominina_Public_UI_ARHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UIInventoryComponent() { return STRUCT_OFFSET(AARHUD, UIInventoryComponent); } \
	FORCEINLINE static uint32 __PPO__HUDEnemyHealthBarClass() { return STRUCT_OFFSET(AARHUD, HUDEnemyHealthBarClass); } \
	FORCEINLINE static uint32 __PPO__EnemyChannel() { return STRUCT_OFFSET(AARHUD, EnemyChannel); } \
	FORCEINLINE static uint32 __PPO__DistanceScaleEnemyBar() { return STRUCT_OFFSET(AARHUD, DistanceScaleEnemyBar); } \
	FORCEINLINE static uint32 __PPO__HUDEnemyHealthBar() { return STRUCT_OFFSET(AARHUD, HUDEnemyHealthBar); } \
	FORCEINLINE static uint32 __PPO__HUDFloatingCombatTextClass() { return STRUCT_OFFSET(AARHUD, HUDFloatingCombatTextClass); } \
	FORCEINLINE static uint32 __PPO__FloatingCombatText() { return STRUCT_OFFSET(AARHUD, FloatingCombatText); } \
	FORCEINLINE static uint32 __PPO__FCTMoveSpeed() { return STRUCT_OFFSET(AARHUD, FCTMoveSpeed); } \
	FORCEINLINE static uint32 __PPO__FCTLifeTime() { return STRUCT_OFFSET(AARHUD, FCTLifeTime); } \
	FORCEINLINE static uint32 __PPO__FCTFont() { return STRUCT_OFFSET(AARHUD, FCTFont); } \
	FORCEINLINE static uint32 __PPO__ARCharacter() { return STRUCT_OFFSET(AARHUD, ARCharacter); } \
	FORCEINLINE static uint32 __PPO__ARPC() { return STRUCT_OFFSET(AARHUD, ARPC); }


#define Hominina_Source_Hominina_Public_UI_ARHUD_h_12_PROLOG
#define Hominina_Source_Hominina_Public_UI_ARHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_ARHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_ARHUD_h_15_RPC_WRAPPERS \
	Hominina_Source_Hominina_Public_UI_ARHUD_h_15_INCLASS \
	Hominina_Source_Hominina_Public_UI_ARHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Source_Hominina_Public_UI_ARHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Source_Hominina_Public_UI_ARHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Hominina_Source_Hominina_Public_UI_ARHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_ARHUD_h_15_INCLASS_NO_PURE_DECLS \
	Hominina_Source_Hominina_Public_UI_ARHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMININA_API UClass* StaticClass<class AARHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_UI_ARHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
