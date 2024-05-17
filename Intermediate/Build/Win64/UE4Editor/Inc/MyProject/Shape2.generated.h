// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Shape2_generated_h
#error "Shape2.generated.h already included, missing '#pragma once' in Shape2.h"
#endif
#define MYPROJECT_Shape2_generated_h

#define MyProject_Source_MyProject_Shape2_h_13_SPARSE_DATA
#define MyProject_Source_MyProject_Shape2_h_13_RPC_WRAPPERS
#define MyProject_Source_MyProject_Shape2_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Shape2_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShape2(); \
	friend struct Z_Construct_UClass_AShape2_Statics; \
public: \
	DECLARE_CLASS(AShape2, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AShape2)


#define MyProject_Source_MyProject_Shape2_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAShape2(); \
	friend struct Z_Construct_UClass_AShape2_Statics; \
public: \
	DECLARE_CLASS(AShape2, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AShape2)


#define MyProject_Source_MyProject_Shape2_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShape2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShape2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShape2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShape2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShape2(AShape2&&); \
	NO_API AShape2(const AShape2&); \
public:


#define MyProject_Source_MyProject_Shape2_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShape2(AShape2&&); \
	NO_API AShape2(const AShape2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShape2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShape2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShape2)


#define MyProject_Source_MyProject_Shape2_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__velocity() { return STRUCT_OFFSET(AShape2, velocity); } \
	FORCEINLINE static uint32 __PPO__damageLevel() { return STRUCT_OFFSET(AShape2, damageLevel); }


#define MyProject_Source_MyProject_Shape2_h_10_PROLOG
#define MyProject_Source_MyProject_Shape2_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Shape2_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Shape2_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_Shape2_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_Shape2_h_13_INCLASS \
	MyProject_Source_MyProject_Shape2_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Shape2_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Shape2_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Shape2_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_Shape2_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Shape2_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Shape2_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AShape2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Shape2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
