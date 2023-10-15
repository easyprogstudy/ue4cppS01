// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cpp01/cpp01GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecpp01GameModeBase() {}
// Cross Module References
	CPP01_API UClass* Z_Construct_UClass_Acpp01GameModeBase_NoRegister();
	CPP01_API UClass* Z_Construct_UClass_Acpp01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_cpp01();
// End Cross Module References
	void Acpp01GameModeBase::StaticRegisterNativesAcpp01GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Acpp01GameModeBase_NoRegister()
	{
		return Acpp01GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Acpp01GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acpp01GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_cpp01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp01GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "cpp01GameModeBase.h" },
		{ "ModuleRelativePath", "cpp01GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acpp01GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acpp01GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acpp01GameModeBase_Statics::ClassParams = {
		&Acpp01GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Acpp01GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp01GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acpp01GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acpp01GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acpp01GameModeBase, 3857528720);
	template<> CPP01_API UClass* StaticClass<Acpp01GameModeBase>()
	{
		return Acpp01GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acpp01GameModeBase(Z_Construct_UClass_Acpp01GameModeBase, &Acpp01GameModeBase::StaticClass, TEXT("/Script/cpp01"), TEXT("Acpp01GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acpp01GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
