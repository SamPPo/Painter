// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SerializableComponentActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
#ifdef PAINTER_SerializableComponentActor_generated_h
#error "SerializableComponentActor.generated.h already included, missing '#pragma once' in SerializableComponentActor.h"
#endif
#define PAINTER_SerializableComponentActor_generated_h

#define FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearSerializeableComponentsOfClass); \
	DECLARE_FUNCTION(execMakeComponentSerializeable);


#define FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASerializableComponentActor(); \
	friend struct Z_Construct_UClass_ASerializableComponentActor_Statics; \
public: \
	DECLARE_CLASS(ASerializableComponentActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Painter"), NO_API) \
	DECLARE_SERIALIZER(ASerializableComponentActor)


#define FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASerializableComponentActor(ASerializableComponentActor&&); \
	ASerializableComponentActor(const ASerializableComponentActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASerializableComponentActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASerializableComponentActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASerializableComponentActor) \
	NO_API virtual ~ASerializableComponentActor();


#define FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_9_PROLOG
#define FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAINTER_API UClass* StaticClass<class ASerializableComponentActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Painter_Painter_Source_Painter_Public_SerializableComponentActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
