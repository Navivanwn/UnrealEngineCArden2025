// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Car.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UECARDEN_Car_generated_h
#error "Car.generated.h already included, missing '#pragma once' in Car.h"
#endif
#define UECARDEN_Car_generated_h

#define FID_UECArden_Source_UECArden_Car_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACar(); \
	friend struct Z_Construct_UClass_ACar_Statics; \
public: \
	DECLARE_CLASS(ACar, AVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UECArden"), NO_API) \
	DECLARE_SERIALIZER(ACar)


#define FID_UECArden_Source_UECArden_Car_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACar(ACar&&); \
	ACar(const ACar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACar) \
	NO_API virtual ~ACar();


#define FID_UECArden_Source_UECArden_Car_h_26_PROLOG
#define FID_UECArden_Source_UECArden_Car_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECArden_Source_UECArden_Car_h_29_INCLASS_NO_PURE_DECLS \
	FID_UECArden_Source_UECArden_Car_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UECARDEN_API UClass* StaticClass<class ACar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UECArden_Source_UECArden_Car_h


#define FOREACH_ENUM_ECARBRAND(op) \
	op(ECarBrand::Toyota) \
	op(ECarBrand::Ford) \
	op(ECarBrand::Honda) \
	op(ECarBrand::Chevrolet) \
	op(ECarBrand::BMW) \
	op(ECarBrand::Audi) \
	op(ECarBrand::Mercedes) \
	op(ECarBrand::VolksWagen) \
	op(ECarBrand::Nissan) 

enum class ECarBrand;
template<> struct TIsUEnumClass<ECarBrand> { enum { Value = true }; };
template<> UECARDEN_API UEnum* StaticEnum<ECarBrand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
