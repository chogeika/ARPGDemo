// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FDWWWindowHandle;
#ifdef DRAGGABLEWINDOW_DWBPFunctionLibrary_generated_h
#error "DWBPFunctionLibrary.generated.h already included, missing '#pragma once' in DWBPFunctionLibrary.h"
#endif
#define DRAGGABLEWINDOW_DWBPFunctionLibrary_generated_h

#define Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateWindowWithContent) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_InWindowContent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_WindowName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDWWWindowHandle*)Z_Param__Result=UDWBPFunctionLibrary::CreateWindowWithContent(Z_Param_InWindowContent,Z_Param_WindowName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateWindow) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_WindowName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDWWWindowHandle*)Z_Param__Result=UDWBPFunctionLibrary::CreateWindow(Z_Param_WindowName); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateWindowWithContent) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_InWindowContent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_WindowName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDWWWindowHandle*)Z_Param__Result=UDWBPFunctionLibrary::CreateWindowWithContent(Z_Param_InWindowContent,Z_Param_WindowName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateWindow) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_WindowName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDWWWindowHandle*)Z_Param__Result=UDWBPFunctionLibrary::CreateWindow(Z_Param_WindowName); \
		P_NATIVE_END; \
	}


#define Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDWBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDWBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDWBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DraggableWindow"), NO_API) \
	DECLARE_SERIALIZER(UDWBPFunctionLibrary)


#define Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDWBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDWBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDWBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DraggableWindow"), NO_API) \
	DECLARE_SERIALIZER(UDWBPFunctionLibrary)


#define Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDWBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDWBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDWBPFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDWBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDWBPFunctionLibrary(UDWBPFunctionLibrary&&); \
	NO_API UDWBPFunctionLibrary(const UDWBPFunctionLibrary&); \
public:


#define Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDWBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDWBPFunctionLibrary(UDWBPFunctionLibrary&&); \
	NO_API UDWBPFunctionLibrary(const UDWBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDWBPFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDWBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDWBPFunctionLibrary)


#define Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_15_PROLOG
#define Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_RPC_WRAPPERS \
	Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_INCLASS \
	Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRAGGABLEWINDOW_API UClass* StaticClass<class UDWBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Plugins_DraggableWindow_Source_DraggableWindow_Public_DWBPFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
