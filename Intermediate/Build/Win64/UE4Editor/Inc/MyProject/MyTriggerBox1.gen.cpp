// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyTriggerBox1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTriggerBox1() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTriggerBox1_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTriggerBox1();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyTriggerBox1::execcolisionar)
	{
		P_GET_OBJECT(AActor,Z_Param_objetoA);
		P_GET_OBJECT(AActor,Z_Param_navechoque);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->colisionar(Z_Param_objetoA,Z_Param_navechoque);
		P_NATIVE_END;
	}
	void AMyTriggerBox1::StaticRegisterNativesAMyTriggerBox1()
	{
		UClass* Class = AMyTriggerBox1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "colisionar", &AMyTriggerBox1::execcolisionar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics
	{
		struct MyTriggerBox1_eventcolisionar_Parms
		{
			AActor* objetoA;
			AActor* navechoque;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objetoA;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_navechoque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::NewProp_objetoA = { "objetoA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyTriggerBox1_eventcolisionar_Parms, objetoA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::NewProp_navechoque = { "navechoque", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyTriggerBox1_eventcolisionar_Parms, navechoque), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::NewProp_objetoA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::NewProp_navechoque,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyTriggerBox1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTriggerBox1, nullptr, "colisionar", nullptr, nullptr, sizeof(MyTriggerBox1_eventcolisionar_Parms), Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyTriggerBox1_colisionar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyTriggerBox1_colisionar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyTriggerBox1_NoRegister()
	{
		return AMyTriggerBox1::StaticClass();
	}
	struct Z_Construct_UClass_AMyTriggerBox1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTriggerBox1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyTriggerBox1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyTriggerBox1_colisionar, "colisionar" }, // 1596340256
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTriggerBox1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyTriggerBox1.h" },
		{ "ModuleRelativePath", "MyTriggerBox1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTriggerBox1_Statics::NewProp_nave_MetaData[] = {
		{ "Category", "MyTriggerBox1" },
		{ "ModuleRelativePath", "MyTriggerBox1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTriggerBox1_Statics::NewProp_nave = { "nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyTriggerBox1, nave), Z_Construct_UClass_AMyProjectPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyTriggerBox1_Statics::NewProp_nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerBox1_Statics::NewProp_nave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTriggerBox1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTriggerBox1_Statics::NewProp_nave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTriggerBox1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTriggerBox1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTriggerBox1_Statics::ClassParams = {
		&AMyTriggerBox1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyTriggerBox1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerBox1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyTriggerBox1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerBox1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTriggerBox1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTriggerBox1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTriggerBox1, 1184740982);
	template<> MYPROJECT_API UClass* StaticClass<AMyTriggerBox1>()
	{
		return AMyTriggerBox1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTriggerBox1(Z_Construct_UClass_AMyTriggerBox1, &AMyTriggerBox1::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyTriggerBox1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTriggerBox1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
