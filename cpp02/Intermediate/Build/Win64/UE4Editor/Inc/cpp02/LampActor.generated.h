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
#ifdef CPP02_LampActor_generated_h
#error "LampActor.generated.h already included, missing '#pragma once' in LampActor.h"
#endif
#define CPP02_LampActor_generated_h

#define cpp02_Source_cpp02_LampActor_h_16_SPARSE_DATA
#define cpp02_Source_cpp02_LampActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define cpp02_Source_cpp02_LampActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define cpp02_Source_cpp02_LampActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALampActor(); \
	friend struct Z_Construct_UClass_ALampActor_Statics; \
public: \
	DECLARE_CLASS(ALampActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cpp02"), NO_API) \
	DECLARE_SERIALIZER(ALampActor)


#define cpp02_Source_cpp02_LampActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALampActor(); \
	friend struct Z_Construct_UClass_ALampActor_Statics; \
public: \
	DECLARE_CLASS(ALampActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/cpp02"), NO_API) \
	DECLARE_SERIALIZER(ALampActor)


#define cpp02_Source_cpp02_LampActor_h_16_STANDARD_CONSTRUCTORS \
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


#define cpp02_Source_cpp02_LampActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALampActor(ALampActor&&); \
	NO_API ALampActor(const ALampActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALampActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALampActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALampActor)


#define cpp02_Source_cpp02_LampActor_h_16_PRIVATE_PROPERTY_OFFSET
#define cpp02_Source_cpp02_LampActor_h_13_PROLOG
#define cpp02_Source_cpp02_LampActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cpp02_Source_cpp02_LampActor_h_16_PRIVATE_PROPERTY_OFFSET \
	cpp02_Source_cpp02_LampActor_h_16_SPARSE_DATA \
	cpp02_Source_cpp02_LampActor_h_16_RPC_WRAPPERS \
	cpp02_Source_cpp02_LampActor_h_16_INCLASS \
	cpp02_Source_cpp02_LampActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define cpp02_Source_cpp02_LampActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cpp02_Source_cpp02_LampActor_h_16_PRIVATE_PROPERTY_OFFSET \
	cpp02_Source_cpp02_LampActor_h_16_SPARSE_DATA \
	cpp02_Source_cpp02_LampActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	cpp02_Source_cpp02_LampActor_h_16_INCLASS_NO_PURE_DECLS \
	cpp02_Source_cpp02_LampActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP02_API UClass* StaticClass<class ALampActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID cpp02_Source_cpp02_LampActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
