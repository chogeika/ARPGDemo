// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMININA_ARWeaponsTypes_generated_h
#error "ARWeaponsTypes.generated.h already included, missing '#pragma once' in ARWeaponsTypes.h"
#endif
#define HOMININA_ARWeaponsTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hominina_Source_Hominina_Public_Weapons_ARWeaponsTypes_h


#define FOREACH_ENUM_EARWEAPONSLOT(op) \
	op(EARWeaponSlot::Slot1) \
	op(EARWeaponSlot::Slot2) \
	op(EARWeaponSlot::Slot3) \
	op(EARWeaponSlot::Slot4) 

enum class EARWeaponSlot : uint8;
template<> HOMININA_API UEnum* StaticEnum<EARWeaponSlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
