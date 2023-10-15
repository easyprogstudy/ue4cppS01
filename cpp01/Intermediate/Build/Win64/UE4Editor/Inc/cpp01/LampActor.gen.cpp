// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cpp01/LampActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLampActor() {}
// Cross Module References
	CPP01_API UClass* Z_Construct_UClass_ALampActor_NoRegister();
	CPP01_API UClass* Z_Construct_UClass_ALampActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cpp01();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALampActor::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_overlappedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALampActor::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_overlappedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	void ALampActor::StaticRegisterNativesALampActor()
	{
		UClass* Class = ALampActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ALampActor::execOnOverlapBegin },
			{ "OnOverlapEnd", &ALampActor::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics
	{
		struct LampActor_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LampActor_eventOnOverlapBegin_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_overlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LampActor_eventOnOverlapBegin_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LampActor_eventOnOverlapBegin_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LampActor_eventOnOverlapBegin_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LampActor_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LampActor_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LampActor_eventOnOverlapBegin_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_overlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LampActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALampActor, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(LampActor_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALampActor_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALampActor_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics
	{
		struct LampActor_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LampActor_eventOnOverlapEnd_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_overlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LampActor_eventOnOverlapEnd_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LampActor_eventOnOverlapEnd_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LampActor_eventOnOverlapEnd_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_overlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::NewProp_otherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LampActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALampActor, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(LampActor_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALampActor_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALampActor_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALampActor_NoRegister()
	{
		return ALampActor::StaticClass();
	}
	struct Z_Construct_UClass_ALampActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALampActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cpp01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALampActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALampActor_OnOverlapBegin, "OnOverlapBegin" }, // 4266296647
		{ &Z_Construct_UFunction_ALampActor_OnOverlapEnd, "OnOverlapEnd" }, // 2872355909
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALampActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LampActor.h" },
		{ "ModuleRelativePath", "LampActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALampActor_Statics::NewProp_m_pLight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LampActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALampActor_Statics::NewProp_m_pLight = { "m_pLight", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALampActor, m_pLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALampActor_Statics::NewProp_m_pLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALampActor_Statics::NewProp_m_pLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALampActor_Statics::NewProp_m_pBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LampActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALampActor_Statics::NewProp_m_pBox = { "m_pBox", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALampActor, m_pBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALampActor_Statics::NewProp_m_pBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALampActor_Statics::NewProp_m_pBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALampActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALampActor_Statics::NewProp_m_pLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALampActor_Statics::NewProp_m_pBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALampActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALampActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALampActor_Statics::ClassParams = {
		&ALampActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALampActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALampActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALampActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALampActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALampActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALampActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALampActor, 148278939);
	template<> CPP01_API UClass* StaticClass<ALampActor>()
	{
		return ALampActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALampActor(Z_Construct_UClass_ALampActor, &ALampActor::StaticClass, TEXT("/Script/cpp01"), TEXT("ALampActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALampActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
