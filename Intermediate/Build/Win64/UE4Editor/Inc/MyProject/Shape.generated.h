// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Shape_generated_h
#error "Shape.generated.h already included, missing '#pragma once' in Shape.h"
#endif
#define MYPROJECT_Shape_generated_h

#define MyProject_Source_MyProject_Shape_h_12_SPARSE_DATA
#define MyProject_Source_MyProject_Shape_h_12_RPC_WRAPPERS
#define MyProject_Source_MyProject_Shape_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Shape_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShape(); \
	friend struct Z_Construct_UClass_AShape_Statics; \
public: \
	DECLARE_CLASS(AShape, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AShape)


#define MyProject_Source_MyProject_Shape_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShape(); \
	friend struct Z_Construct_UClass_AShape_Statics; \
public: \
	DECLARE_CLASS(AShape, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AShape)


#define MyProject_Source_MyProject_Shape_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShape(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShape(AShape&&); \
	NO_API AShape(const AShape&); \
public:


#define MyProject_Source_MyProject_Shape_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShape(AShape&&); \
	NO_API AShape(const AShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShape)


#define MyProject_Source_MyProject_Shape_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__velocity() { return STRUCT_OFFSET(AShape, velocity); } \
	FORCEINLINE static uint32 __PPO__damageLevel() { return STRUCT_OFFSET(AShape, damageLevel); }


#define MyProject_Source_MyProject_Shape_h_9_PROLOG
#define MyProject_Source_MyProject_Shape_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Shape_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Shape_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_Shape_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_Shape_h_12_INCLASS \
	MyProject_Source_MyProject_Shape_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Shape_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Shape_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Shape_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_Shape_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Shape_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Shape_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AShape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Shape_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
