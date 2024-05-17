// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Shape2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShape2() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AShape2_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AShape2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AShape2::StaticRegisterNativesAShape2()
	{
	}
	UClass* Z_Construct_UClass_AShape2_NoRegister()
	{
		return AShape2::StaticClass();
	}
	struct Z_Construct_UClass_AShape2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_malla_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_malla;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShape2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shape2.h" },
		{ "ModuleRelativePath", "Shape2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape2_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Shape2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShape2_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape2, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShape2_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape2_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape2_Statics::NewProp_malla_MetaData[] = {
		{ "Category", "Shape2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Shape2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShape2_Statics::NewProp_malla = { "malla", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape2, malla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShape2_Statics::NewProp_malla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape2_Statics::NewProp_malla_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape2_Statics::NewProp_velocity_MetaData[] = {
		{ "Category", "Nave Enemiga" },
		{ "ModuleRelativePath", "Shape2.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape2_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape2, velocity), METADATA_PARAMS(Z_Construct_UClass_AShape2_Statics::NewProp_velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape2_Statics::NewProp_velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape2_Statics::NewProp_damageLevel_MetaData[] = {
		{ "Category", "Nave Enemiga" },
		{ "ModuleRelativePath", "Shape2.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape2_Statics::NewProp_damageLevel = { "damageLevel", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape2, damageLevel), METADATA_PARAMS(Z_Construct_UClass_AShape2_Statics::NewProp_damageLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape2_Statics::NewProp_damageLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShape2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape2_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape2_Statics::NewProp_malla,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape2_Statics::NewProp_velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape2_Statics::NewProp_damageLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShape2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShape2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShape2_Statics::ClassParams = {
		&AShape2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShape2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShape2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShape2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShape2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShape2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShape2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShape2, 1219223332);
	template<> MYPROJECT_API UClass* StaticClass<AShape2>()
	{
		return AShape2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShape2(Z_Construct_UClass_AShape2, &AShape2::StaticClass, TEXT("/Script/MyProject"), TEXT("AShape2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShape2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
