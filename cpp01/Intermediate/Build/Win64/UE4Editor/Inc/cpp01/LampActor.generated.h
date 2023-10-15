// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CPP01_LampActor_generated_h
#error "LampActor.generated.h already included, missing '#pragma once' in LampActor.h"
#endif
#define CPP01_LampActor_generated_h

#define ue4cppS01_Source_cpp01_LampActor_h_16_SPARSE_DATA
#define ue4cppS01_Source_cpp01_LampActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define ue4cppS01_Source_cpp01_LampActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define ue4cppS01_Source_cpp01_LampActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALampActor(); \
	friend struct Z_Construct_UClass_ALampActor_Statics; \
public: \
	DECLARE_CLASS(ALampActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cpp01"), NO_API) \
	DECLARE_SERIALIZER(ALampActor)


#define ue4cppS01_Source_cpp01_LampActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALampActor(); \
	friend struct Z_Construct_UClass_ALampActor_Statics; \
public: \
	DECLARE_CLASS(ALampActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cpp01"), NO_API) \
	DECLARE_SERIALIZER(ALampActor)


#define ue4cppS01_Source_cpp01_LampActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALampActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALampActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALampActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALampActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALampActor(ALampActor&&); \
	NO_API ALampActor(const ALampActor&); \
public:


#define ue4cppS01_Source_cpp01_LampActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALampActor(ALampActor&&); \
	NO_API ALampActor(const ALampActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALampActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALampActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALampActor)


#define ue4cppS01_Source_cpp01_LampActor_h_16_PRIVATE_PROPERTY_OFFSET
#define ue4cppS01_Source_cpp01_LampActor_h_13_PROLOG
#define ue4cppS01_Source_cpp01_LampActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4cppS01_Source_cpp01_LampActor_h_16_PRIVATE_PROPERTY_OFFSET \
	ue4cppS01_Source_cpp01_LampActor_h_16_SPARSE_DATA \
	ue4cppS01_Source_cpp01_LampActor_h_16_RPC_WRAPPERS \
	ue4cppS01_Source_cpp01_LampActor_h_16_INCLASS \
	ue4cppS01_Source_cpp01_LampActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ue4cppS01_Source_cpp01_LampActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ue4cppS01_Source_cpp01_LampActor_h_16_PRIVATE_PROPERTY_OFFSET \
	ue4cppS01_Source_cpp01_LampActor_h_16_SPARSE_DATA \
	ue4cppS01_Source_cpp01_LampActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ue4cppS01_Source_cpp01_LampActor_h_16_INCLASS_NO_PURE_DECLS \
	ue4cppS01_Source_cpp01_LampActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP01_API UClass* StaticClass<class ALampActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ue4cppS01_Source_cpp01_LampActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
