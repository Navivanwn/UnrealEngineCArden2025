// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/Vehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicle() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UECARDEN_API UClass* Z_Construct_UClass_AVehicle();
UECARDEN_API UClass* Z_Construct_UClass_AVehicle_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class AVehicle Function Move
struct Z_Construct_UFunction_AVehicle_Move_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Vehicle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicle_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicle, nullptr, "Move", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicle_Move_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVehicle_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicle_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicle::execMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move();
	P_NATIVE_END;
}
// End Class AVehicle Function Move

// Begin Class AVehicle
void AVehicle::StaticRegisterNativesAVehicle()
{
	UClass* Class = AVehicle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Move", &AVehicle::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVehicle);
UClass* Z_Construct_UClass_AVehicle_NoRegister()
{
	return AVehicle::StaticClass();
}
struct Z_Construct_UClass_AVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicle.h" },
		{ "ModuleRelativePath", "Vehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Vehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fuel_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Vehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleName_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Vehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wheels_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Vehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isElectric_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Vehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleColor_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Vehicle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Fuel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VehicleName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Wheels;
	static void NewProp_isElectric_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isElectric;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VehicleColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVehicle_Move, "Move" }, // 1352265890
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicle, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_Fuel = { "Fuel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicle, Fuel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fuel_MetaData), NewProp_Fuel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_VehicleName = { "VehicleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicle, VehicleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleName_MetaData), NewProp_VehicleName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_Wheels = { "Wheels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicle, Wheels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wheels_MetaData), NewProp_Wheels_MetaData) };
void Z_Construct_UClass_AVehicle_Statics::NewProp_isElectric_SetBit(void* Obj)
{
	((AVehicle*)Obj)->isElectric = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_isElectric = { "isElectric", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVehicle), &Z_Construct_UClass_AVehicle_Statics::NewProp_isElectric_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isElectric_MetaData), NewProp_isElectric_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_VehicleColor = { "VehicleColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicle, VehicleColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleColor_MetaData), NewProp_VehicleColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_Fuel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_VehicleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_Wheels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_isElectric,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_VehicleColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVehicle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVehicle_Statics::ClassParams = {
	&AVehicle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVehicle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVehicle()
{
	if (!Z_Registration_Info_UClass_AVehicle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVehicle.OuterSingleton, Z_Construct_UClass_AVehicle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVehicle.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<AVehicle>()
{
	return AVehicle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicle);
AVehicle::~AVehicle() {}
// End Class AVehicle

// Begin Registration
struct Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_Vehicle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVehicle, AVehicle::StaticClass, TEXT("AVehicle"), &Z_Registration_Info_UClass_AVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVehicle), 433970395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_Vehicle_h_861448556(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_Vehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_Vehicle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
