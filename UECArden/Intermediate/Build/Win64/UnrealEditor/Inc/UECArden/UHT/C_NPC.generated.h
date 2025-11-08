// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_NPC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UECARDEN_C_NPC_generated_h
#error "C_NPC.generated.h already included, missing '#pragma once' in C_NPC.h"
#endif
#define UECARDEN_C_NPC_generated_h

#define FID_UECArden_Source_UECArden_C_NPC_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_NPC(); \
	friend struct Z_Construct_UClass_AC_NPC_Statics; \
public: \
	DECLARE_CLASS(AC_NPC, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UECArden"), NO_API) \
	DECLARE_SERIALIZER(AC_NPC)


#define FID_UECArden_Source_UECArden_C_NPC_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_NPC(AC_NPC&&); \
	AC_NPC(const AC_NPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_NPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_NPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_NPC) \
	NO_API virtual ~AC_NPC();


#define FID_UECArden_Source_UECArden_C_NPC_h_10_PROLOG
#define FID_UECArden_Source_UECArden_C_NPC_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECArden_Source_UECArden_C_NPC_h_13_INCLASS_NO_PURE_DECLS \
	FID_UECArden_Source_UECArden_C_NPC_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UECARDEN_API UClass* StaticClass<class AC_NPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UECArden_Source_UECArden_C_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
