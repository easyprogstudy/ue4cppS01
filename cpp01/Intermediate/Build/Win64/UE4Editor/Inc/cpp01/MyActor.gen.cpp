// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cpp01/MyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	CPP01_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	CPP01_API UClass* Z_Construct_UClass_AMyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cpp01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyActor::execgetPlus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_a);
		P_GET_PROPERTY(FIntProperty,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getPlus(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	void AMyActor::StaticRegisterNativesAMyActor()
	{
		UClass* Class = AMyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getPlus", &AMyActor::execgetPlus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActor_getPlus_Statics
	{
		struct MyActor_eventgetPlus_Parms
		{
			int32 a;
			int32 b;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyActor_getPlus_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActor_eventgetPlus_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyActor_getPlus_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActor_eventgetPlus_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyActor_getPlus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActor_eventgetPlus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_getPlus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_getPlus_Statics::NewProp_a,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_getPlus_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_getPlus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_getPlus_Statics::Function_MetaDataParams[] = {
		{ "Category", "TESTUTIL" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_getPlus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "getPlus", nullptr, nullptr, sizeof(MyActor_eventgetPlus_Parms), Z_Construct_UFunction_AMyActor_getPlus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_getPlus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor_getPlus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_getPlus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor_getPlus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActor_getPlus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cpp01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_getPlus, "getPlus" }, // 2468656920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_pMeshComp_MetaData[] = {
		{ "Category", "MyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_pMeshComp = { "pMeshComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, pMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_pMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_pMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "\xec\x9b\x80\xec\xa7\x81\xec\x9e\x84" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, speed), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_pMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor, 1750053931);
	template<> CPP01_API UClass* StaticClass<AMyActor>()
	{
		return AMyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor(Z_Construct_UClass_AMyActor, &AMyActor::StaticClass, TEXT("/Script/cpp01"), TEXT("AMyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
