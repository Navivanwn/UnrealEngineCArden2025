// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/TransformModifierActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformModifierActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UECARDEN_API UClass* Z_Construct_UClass_ATransformModifierActor();
UECARDEN_API UClass* Z_Construct_UClass_ATransformModifierActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class ATransformModifierActor Function ChangeMaterial
struct Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics
{
	struct TransformModifierActor_eventChangeMaterial_Parms
	{
		TArray<UMaterialInterface*> NewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::NewProp_NewMaterial_Inner = { "NewMaterial", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformModifierActor_eventChangeMaterial_Parms, NewMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::NewProp_NewMaterial_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformModifierActor, nullptr, "ChangeMaterial", nullptr, nullptr, Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::TransformModifierActor_eventChangeMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::TransformModifierActor_eventChangeMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATransformModifierActor::execChangeMaterial)
{
	P_GET_TARRAY(UMaterialInterface*,Z_Param_NewMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeMaterial(Z_Param_NewMaterial);
	P_NATIVE_END;
}
// End Class ATransformModifierActor Function ChangeMaterial

// Begin Class ATransformModifierActor Function ModifyTargetTransform
struct Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics
{
	struct TransformModifierActor_eventModifyTargetTransform_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformModifierActor_eventModifyTargetTransform_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformModifierActor, nullptr, "ModifyTargetTransform", nullptr, nullptr, Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::TransformModifierActor_eventModifyTargetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::TransformModifierActor_eventModifyTargetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATransformModifierActor::execModifyTargetTransform)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyTargetTransform(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ATransformModifierActor Function ModifyTargetTransform

// Begin Class ATransformModifierActor Function MoveToNextPosition
struct Z_Construct_UFunction_ATransformModifierActor_MoveToNextPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformModifierActor_MoveToNextPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformModifierActor, nullptr, "MoveToNextPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifierActor_MoveToNextPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformModifierActor_MoveToNextPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATransformModifierActor_MoveToNextPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformModifierActor_MoveToNextPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATransformModifierActor::execMoveToNextPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToNextPosition();
	P_NATIVE_END;
}
// End Class ATransformModifierActor Function MoveToNextPosition

// Begin Class ATransformModifierActor
void ATransformModifierActor::StaticRegisterNativesATransformModifierActor()
{
	UClass* Class = ATransformModifierActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeMaterial", &ATransformModifierActor::execChangeMaterial },
		{ "ModifyTargetTransform", &ATransformModifierActor::execModifyTargetTransform },
		{ "MoveToNextPosition", &ATransformModifierActor::execMoveToNextPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATransformModifierActor);
UClass* Z_Construct_UClass_ATransformModifierActor_NoRegister()
{
	return ATransformModifierActor::StaticClass();
}
struct Z_Construct_UClass_ATransformModifierActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TransformModifierActor.h" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Transform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPositionIndex_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPositionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATransformModifierActor_ChangeMaterial, "ChangeMaterial" }, // 3281170881
		{ &Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform, "ModifyTargetTransform" }, // 3548602117
		{ &Z_Construct_UFunction_ATransformModifierActor_MoveToNextPosition, "MoveToNextPosition" }, // 1935636221
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransformModifierActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTransform_MetaData), NewProp_NewTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_CurrentPositionIndex = { "CurrentPositionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, CurrentPositionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPositionIndex_MetaData), NewProp_CurrentPositionIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_NewTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_CurrentPositionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATransformModifierActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATransformModifierActor_Statics::ClassParams = {
	&ATransformModifierActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATransformModifierActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATransformModifierActor()
{
	if (!Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton, Z_Construct_UClass_ATransformModifierActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<ATransformModifierActor>()
{
	return ATransformModifierActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATransformModifierActor);
ATransformModifierActor::~ATransformModifierActor() {}
// End Class ATransformModifierActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_TransformModifierActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATransformModifierActor, ATransformModifierActor::StaticClass, TEXT("ATransformModifierActor"), &Z_Registration_Info_UClass_ATransformModifierActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATransformModifierActor), 2636646115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_TransformModifierActor_h_2011286525(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_TransformModifierActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_TransformModifierActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
