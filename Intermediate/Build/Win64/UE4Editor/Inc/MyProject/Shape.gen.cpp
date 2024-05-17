// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Shape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShape() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AShape_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AShape();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AShape::StaticRegisterNativesAShape()
	{
	}
	UClass* Z_Construct_UClass_AShape_NoRegister()
	{
		return AShape::StaticClass();
	}
	struct Z_Construct_UClass_AShape_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_direccion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_direccion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frecuencia_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frecuencia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desfase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desfase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shape.h" },
		{ "ModuleRelativePath", "Shape.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_Root_MetaData[] = {
		{ "Comment", "// Sets default values for this actor's properties\n//a?adido definicion a los objetos \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "Sets default values for this actor's properties\na?adido definicion a los objetos" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_malla_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "//donde sea conveniente pero mayormente ahi\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "donde sea conveniente pero mayormente ahi" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_malla = { "malla", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, malla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_malla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_malla_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_velocity_MetaData[] = {
		{ "Category", "nave enemiga" },
		{ "Comment", "//hasta aqui se va a cpp ya para poner lo de la malla \n//\n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "hasta aqui se va a cpp ya para poner lo de la malla" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, velocity), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_damageLevel_MetaData[] = {
		{ "Category", "nave enemiga" },
		{ "Comment", "//definicon ***\n//\n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "definicon ***" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_damageLevel = { "damageLevel", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, damageLevel), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_damageLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_damageLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_direccion_MetaData[] = {
		{ "Category", "nave enemiga" },
		{ "Comment", "//\n//=======pantalla\n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "=======pantalla" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_direccion = { "direccion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, direccion), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_direccion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_direccion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Movimiento Sinusoidal" },
		{ "Comment", "// Propiedades para el movimiento sinusoidal\n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "Propiedades para el movimiento sinusoidal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, Amplitude), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_Frecuencia_MetaData[] = {
		{ "Category", "Movimiento Sinusoidal" },
		{ "Comment", "//amplitud \n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "amplitud" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_Frecuencia = { "Frecuencia", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, Frecuencia), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_Frecuencia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_Frecuencia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShape_Statics::NewProp_desfase_MetaData[] = {
		{ "Category", "Movimiento Sinusoidal" },
		{ "Comment", "// frecuencia \n" },
		{ "ModuleRelativePath", "Shape.h" },
		{ "ToolTip", "frecuencia" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShape_Statics::NewProp_desfase = { "desfase", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShape, desfase), METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::NewProp_desfase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::NewProp_desfase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_malla,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_damageLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_direccion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_Frecuencia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShape_Statics::NewProp_desfase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShape_Statics::ClassParams = {
		&AShape::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShape, 1547250319);
	template<> MYPROJECT_API UClass* StaticClass<AShape>()
	{
		return AShape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShape(Z_Construct_UClass_AShape, &AShape::StaticClass, TEXT("/Script/MyProject"), TEXT("AShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
