// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/BTTask_FindRandomLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindRandomLocation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
UECARDEN_API UClass* Z_Construct_UClass_UBTTask_FindRandomLocation();
UECARDEN_API UClass* Z_Construct_UClass_UBTTask_FindRandomLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class UBTTask_FindRandomLocation
void UBTTask_FindRandomLocation::StaticRegisterNativesUBTTask_FindRandomLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindRandomLocation);
UClass* Z_Construct_UClass_UBTTask_FindRandomLocation_NoRegister()
{
	return UBTTask_FindRandomLocation::StaticClass();
}
struct Z_Construct_UClass_UBTTask_FindRandomLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_FindRandomLocation.h" },
		{ "ModuleRelativePath", "BTTask_FindRandomLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BTTask_FindRandomLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindRandomLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindRandomLocation, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::ClassParams = {
	&UBTTask_FindRandomLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FindRandomLocation()
{
	if (!Z_Registration_Info_UClass_UBTTask_FindRandomLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindRandomLocation.OuterSingleton, Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FindRandomLocation.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<UBTTask_FindRandomLocation>()
{
	return UBTTask_FindRandomLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindRandomLocation);
UBTTask_FindRandomLocation::~UBTTask_FindRandomLocation() {}
// End Class UBTTask_FindRandomLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_BTTask_FindRandomLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindRandomLocation, UBTTask_FindRandomLocation::StaticClass, TEXT("UBTTask_FindRandomLocation"), &Z_Registration_Info_UClass_UBTTask_FindRandomLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindRandomLocation), 620138745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_BTTask_FindRandomLocation_h_1752702247(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_BTTask_FindRandomLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_BTTask_FindRandomLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
