// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/AIC_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIC_NPC() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
UECARDEN_API UClass* Z_Construct_UClass_AAIC_NPC();
UECARDEN_API UClass* Z_Construct_UClass_AAIC_NPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class AAIC_NPC
void AAIC_NPC::StaticRegisterNativesAAIC_NPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIC_NPC);
UClass* Z_Construct_UClass_AAIC_NPC_NoRegister()
{
	return AAIC_NPC::StaticClass();
}
struct Z_Construct_UClass_AAIC_NPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIC_NPC.h" },
		{ "ModuleRelativePath", "AIC_NPC.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIC_NPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAIC_NPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_NPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIC_NPC_Statics::ClassParams = {
	&AAIC_NPC::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIC_NPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIC_NPC()
{
	if (!Z_Registration_Info_UClass_AAIC_NPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIC_NPC.OuterSingleton, Z_Construct_UClass_AAIC_NPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIC_NPC.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<AAIC_NPC>()
{
	return AAIC_NPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIC_NPC);
AAIC_NPC::~AAIC_NPC() {}
// End Class AAIC_NPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_AIC_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIC_NPC, AAIC_NPC::StaticClass, TEXT("AAIC_NPC"), &Z_Registration_Info_UClass_AAIC_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIC_NPC), 121626598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_AIC_NPC_h_1341179136(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_AIC_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_AIC_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
