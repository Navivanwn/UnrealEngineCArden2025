// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/MyCharacterInput2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterInput2() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UECARDEN_API UClass* Z_Construct_UClass_AMyCharacterInput2();
UECARDEN_API UClass* Z_Construct_UClass_AMyCharacterInput2_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class AMyCharacterInput2
void AMyCharacterInput2::StaticRegisterNativesAMyCharacterInput2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacterInput2);
UClass* Z_Construct_UClass_AMyCharacterInput2_NoRegister()
{
	return AMyCharacterInput2::StaticClass();
}
struct Z_Construct_UClass_AMyCharacterInput2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacterInput2.h" },
		{ "ModuleRelativePath", "MyCharacterInput2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacterInput2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyCharacterInput2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterInput2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacterInput2_Statics::ClassParams = {
	&AMyCharacterInput2::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterInput2_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacterInput2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacterInput2()
{
	if (!Z_Registration_Info_UClass_AMyCharacterInput2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacterInput2.OuterSingleton, Z_Construct_UClass_AMyCharacterInput2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacterInput2.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<AMyCharacterInput2>()
{
	return AMyCharacterInput2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacterInput2);
AMyCharacterInput2::~AMyCharacterInput2() {}
// End Class AMyCharacterInput2

// Begin Registration
struct Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_MyCharacterInput2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacterInput2, AMyCharacterInput2::StaticClass, TEXT("AMyCharacterInput2"), &Z_Registration_Info_UClass_AMyCharacterInput2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacterInput2), 553399159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_MyCharacterInput2_h_4060415869(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_MyCharacterInput2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_MyCharacterInput2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
