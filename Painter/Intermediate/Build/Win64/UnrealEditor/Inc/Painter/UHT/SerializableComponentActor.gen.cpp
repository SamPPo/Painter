// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Painter/Public/SerializableComponentActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerializableComponentActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
PAINTER_API UClass* Z_Construct_UClass_ASerializableComponentActor();
PAINTER_API UClass* Z_Construct_UClass_ASerializableComponentActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Painter();
// End Cross Module References

// Begin Class ASerializableComponentActor Function ClearSerializeableComponentsOfClass
struct Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics
{
	struct SerializableComponentActor_eventClearSerializeableComponentsOfClass_Parms
	{
		TSubclassOf<UActorComponent> ComponentClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SerializableActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clears serializeable components of given class\n\x09 * Only editor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SerializableComponentActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears serializeable components of given class\nOnly editor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerializableComponentActor_eventClearSerializeableComponentsOfClass_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::NewProp_ComponentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASerializableComponentActor, nullptr, "ClearSerializeableComponentsOfClass", nullptr, nullptr, Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::SerializableComponentActor_eventClearSerializeableComponentsOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::SerializableComponentActor_eventClearSerializeableComponentsOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASerializableComponentActor::execClearSerializeableComponentsOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_ComponentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSerializeableComponentsOfClass(Z_Param_ComponentClass);
	P_NATIVE_END;
}
// End Class ASerializableComponentActor Function ClearSerializeableComponentsOfClass

// Begin Class ASerializableComponentActor Function MakeComponentSerializeable
struct Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics
{
	struct SerializableComponentActor_eventMakeComponentSerializeable_Parms
	{
		UActorComponent* Component;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SerializableActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Marks component serializeable, so it would be loaded from disk\n\x09* Only editor.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SerializableComponentActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Marks component serializeable, so it would be loaded from disk\nOnly editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SerializableComponentActor_eventMakeComponentSerializeable_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASerializableComponentActor, nullptr, "MakeComponentSerializeable", nullptr, nullptr, Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::SerializableComponentActor_eventMakeComponentSerializeable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::SerializableComponentActor_eventMakeComponentSerializeable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASerializableComponentActor::execMakeComponentSerializeable)
{
	P_GET_OBJECT(UActorComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeComponentSerializeable(Z_Param_Component);
	P_NATIVE_END;
}
// End Class ASerializableComponentActor Function MakeComponentSerializeable

// Begin Class ASerializableComponentActor
void ASerializableComponentActor::StaticRegisterNativesASerializableComponentActor()
{
	UClass* Class = ASerializableComponentActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearSerializeableComponentsOfClass", &ASerializableComponentActor::execClearSerializeableComponentsOfClass },
		{ "MakeComponentSerializeable", &ASerializableComponentActor::execMakeComponentSerializeable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASerializableComponentActor);
UClass* Z_Construct_UClass_ASerializableComponentActor_NoRegister()
{
	return ASerializableComponentActor::StaticClass();
}
struct Z_Construct_UClass_ASerializableComponentActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SerializableComponentActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SerializableComponentActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASerializableComponentActor_ClearSerializeableComponentsOfClass, "ClearSerializeableComponentsOfClass" }, // 1410682920
		{ &Z_Construct_UFunction_ASerializableComponentActor_MakeComponentSerializeable, "MakeComponentSerializeable" }, // 502514489
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASerializableComponentActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASerializableComponentActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Painter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASerializableComponentActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASerializableComponentActor_Statics::ClassParams = {
	&ASerializableComponentActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASerializableComponentActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASerializableComponentActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASerializableComponentActor()
{
	if (!Z_Registration_Info_UClass_ASerializableComponentActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASerializableComponentActor.OuterSingleton, Z_Construct_UClass_ASerializableComponentActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASerializableComponentActor.OuterSingleton;
}
template<> PAINTER_API UClass* StaticClass<ASerializableComponentActor>()
{
	return ASerializableComponentActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASerializableComponentActor);
ASerializableComponentActor::~ASerializableComponentActor() {}
// End Class ASerializableComponentActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASerializableComponentActor, ASerializableComponentActor::StaticClass, TEXT("ASerializableComponentActor"), &Z_Registration_Info_UClass_ASerializableComponentActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASerializableComponentActor), 3938195277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_1016574058(TEXT("/Script/Painter"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
