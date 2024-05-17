// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MYPROJECT_BoxCollider_generated_h
#error "BoxCollider.generated.h already included, missing '#pragma once' in BoxCollider.h"
#endif
#define MYPROJECT_BoxCollider_generated_h

#define MyProject_Source_MyProject_BoxCollider_h_16_SPARSE_DATA
#define MyProject_Source_MyProject_BoxCollider_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execcolisionar);


#define MyProject_Source_MyProject_BoxCollider_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcolisionar);


#define MyProject_Source_MyProject_BoxCollider_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxCollider(); \
	friend struct Z_Construct_UClass_ABoxCollider_Statics; \
public: \
	DECLARE_CLASS(ABoxCollider, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABoxCollider)


#define MyProject_Source_MyProject_BoxCollider_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABoxCollider(); \
	friend struct Z_Construct_UClass_ABoxCollider_Statics; \
public: \
	DECLARE_CLASS(ABoxCollider, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABoxCollider)


#define MyProject_Source_MyProject_BoxCollider_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoxCollider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxCollider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxCollider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxCollider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxCollider(ABoxCollider&&); \
	NO_API ABoxCollider(const ABoxCollider&); \
public:


#define MyProject_Source_MyProject_BoxCollider_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoxCollider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxCollider(ABoxCollider&&); \
	NO_API ABoxCollider(const ABoxCollider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxCollider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxCollider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxCollider)


#define MyProject_Source_MyProject_BoxCollider_h_16_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_BoxCollider_h_13_PROLOG
#define MyProject_Source_MyProject_BoxCollider_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_BoxCollider_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_BoxCollider_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_BoxCollider_h_16_RPC_WRAPPERS \
	MyProject_Source_MyProject_BoxCollider_h_16_INCLASS \
	MyProject_Source_MyProject_BoxCollider_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_BoxCollider_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_BoxCollider_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_BoxCollider_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_BoxCollider_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_BoxCollider_h_16_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_BoxCollider_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABoxCollider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_BoxCollider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
