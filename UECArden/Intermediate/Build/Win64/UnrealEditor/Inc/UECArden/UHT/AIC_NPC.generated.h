// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIC_NPC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UECARDEN_AIC_NPC_generated_h
#error "AIC_NPC.generated.h already included, missing '#pragma once' in AIC_NPC.h"
#endif
#define UECARDEN_AIC_NPC_generated_h

#define FID_UECArden_Source_UECArden_AIC_NPC_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIC_NPC(); \
	friend struct Z_Construct_UClass_AAIC_NPC_Statics; \
public: \
	DECLARE_CLASS(AAIC_NPC, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UECArden"), NO_API) \
	DECLARE_SERIALIZER(AAIC_NPC)


#define FID_UECArden_Source_UECArden_AIC_NPC_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAIC_NPC(AAIC_NPC&&); \
	AAIC_NPC(const AAIC_NPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIC_NPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIC_NPC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIC_NPC) \
	NO_API virtual ~AAIC_NPC();


#define FID_UECArden_Source_UECArden_AIC_NPC_h_12_PROLOG
#define FID_UECArden_Source_UECArden_AIC_NPC_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECArden_Source_UECArden_AIC_NPC_h_15_INCLASS_NO_PURE_DECLS \
	FID_UECArden_Source_UECArden_AIC_NPC_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UECARDEN_API UClass* StaticClass<class AAIC_NPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UECArden_Source_UECArden_AIC_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
