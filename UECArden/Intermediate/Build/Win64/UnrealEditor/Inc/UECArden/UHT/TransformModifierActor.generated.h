// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TransformModifierActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
#ifdef UECARDEN_TransformModifierActor_generated_h
#error "TransformModifierActor.generated.h already included, missing '#pragma once' in TransformModifierActor.h"
#endif
#define UECARDEN_TransformModifierActor_generated_h

#define FID_UECArden_Source_UECArden_TransformModifierActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeMaterial); \
	DECLARE_FUNCTION(execMoveToNextPosition); \
	DECLARE_FUNCTION(execModifyTargetTransform);


#define FID_UECArden_Source_UECArden_TransformModifierActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATransformModifierActor(); \
	friend struct Z_Construct_UClass_ATransformModifierActor_Statics; \
public: \
	DECLARE_CLASS(ATransformModifierActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UECArden"), NO_API) \
	DECLARE_SERIALIZER(ATransformModifierActor)


#define FID_UECArden_Source_UECArden_TransformModifierActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATransformModifierActor(ATransformModifierActor&&); \
	ATransformModifierActor(const ATransformModifierActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATransformModifierActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATransformModifierActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATransformModifierActor) \
	NO_API virtual ~ATransformModifierActor();


#define FID_UECArden_Source_UECArden_TransformModifierActor_h_9_PROLOG
#define FID_UECArden_Source_UECArden_TransformModifierActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECArden_Source_UECArden_TransformModifierActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UECArden_Source_UECArden_TransformModifierActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_UECArden_Source_UECArden_TransformModifierActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UECARDEN_API UClass* StaticClass<class ATransformModifierActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UECArden_Source_UECArden_TransformModifierActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
