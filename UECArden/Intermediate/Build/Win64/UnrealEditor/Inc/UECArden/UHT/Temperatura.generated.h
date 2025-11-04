// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Temperatura.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UECARDEN_Temperatura_generated_h
#error "Temperatura.generated.h already included, missing '#pragma once' in Temperatura.h"
#endif
#define UECARDEN_Temperatura_generated_h

#define FID_UECArden_Source_UECArden_Temperatura_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateAverageTemperature); \
	DECLARE_FUNCTION(execConvertKelvinToCelcius); \
	DECLARE_FUNCTION(execCalculateTemperatureDifference); \
	DECLARE_FUNCTION(execGetTemperatureFarenheit);


#define FID_UECArden_Source_UECArden_Temperatura_h_12_CALLBACK_WRAPPERS
#define FID_UECArden_Source_UECArden_Temperatura_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATemperatura(); \
	friend struct Z_Construct_UClass_ATemperatura_Statics; \
public: \
	DECLARE_CLASS(ATemperatura, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UECArden"), NO_API) \
	DECLARE_SERIALIZER(ATemperatura)


#define FID_UECArden_Source_UECArden_Temperatura_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATemperatura(ATemperatura&&); \
	ATemperatura(const ATemperatura&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATemperatura); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATemperatura); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATemperatura) \
	NO_API virtual ~ATemperatura();


#define FID_UECArden_Source_UECArden_Temperatura_h_9_PROLOG
#define FID_UECArden_Source_UECArden_Temperatura_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECArden_Source_UECArden_Temperatura_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UECArden_Source_UECArden_Temperatura_h_12_CALLBACK_WRAPPERS \
	FID_UECArden_Source_UECArden_Temperatura_h_12_INCLASS_NO_PURE_DECLS \
	FID_UECArden_Source_UECArden_Temperatura_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UECARDEN_API UClass* StaticClass<class ATemperatura>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UECArden_Source_UECArden_Temperatura_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
