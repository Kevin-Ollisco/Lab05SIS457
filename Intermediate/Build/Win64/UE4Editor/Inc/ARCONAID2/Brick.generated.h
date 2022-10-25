// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCONAID2_Brick_generated_h
#error "Brick.generated.h already included, missing '#pragma once' in Brick.h"
#endif
#define ARCONAID2_Brick_generated_h

#define ARCONAID2_Source_ARCONAID2_Brick_h_12_SPARSE_DATA
#define ARCONAID2_Source_ARCONAID2_Brick_h_12_RPC_WRAPPERS
#define ARCONAID2_Source_ARCONAID2_Brick_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ARCONAID2_Source_ARCONAID2_Brick_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABrick(); \
	friend struct Z_Construct_UClass_ABrick_Statics; \
public: \
	DECLARE_CLASS(ABrick, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARCONAID2"), NO_API) \
	DECLARE_SERIALIZER(ABrick)


#define ARCONAID2_Source_ARCONAID2_Brick_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABrick(); \
	friend struct Z_Construct_UClass_ABrick_Statics; \
public: \
	DECLARE_CLASS(ABrick, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARCONAID2"), NO_API) \
	DECLARE_SERIALIZER(ABrick)


#define ARCONAID2_Source_ARCONAID2_Brick_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABrick(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrick) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrick); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrick(ABrick&&); \
	NO_API ABrick(const ABrick&); \
public:


#define ARCONAID2_Source_ARCONAID2_Brick_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrick(ABrick&&); \
	NO_API ABrick(const ABrick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABrick)


#define ARCONAID2_Source_ARCONAID2_Brick_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Brick() { return STRUCT_OFFSET(ABrick, SM_Brick); }


#define ARCONAID2_Source_ARCONAID2_Brick_h_9_PROLOG
#define ARCONAID2_Source_ARCONAID2_Brick_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCONAID2_Source_ARCONAID2_Brick_h_12_PRIVATE_PROPERTY_OFFSET \
	ARCONAID2_Source_ARCONAID2_Brick_h_12_SPARSE_DATA \
	ARCONAID2_Source_ARCONAID2_Brick_h_12_RPC_WRAPPERS \
	ARCONAID2_Source_ARCONAID2_Brick_h_12_INCLASS \
	ARCONAID2_Source_ARCONAID2_Brick_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARCONAID2_Source_ARCONAID2_Brick_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCONAID2_Source_ARCONAID2_Brick_h_12_PRIVATE_PROPERTY_OFFSET \
	ARCONAID2_Source_ARCONAID2_Brick_h_12_SPARSE_DATA \
	ARCONAID2_Source_ARCONAID2_Brick_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ARCONAID2_Source_ARCONAID2_Brick_h_12_INCLASS_NO_PURE_DECLS \
	ARCONAID2_Source_ARCONAID2_Brick_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCONAID2_API UClass* StaticClass<class ABrick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARCONAID2_Source_ARCONAID2_Brick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
