// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ARCONAID2_Brik_generated_h
#error "Brik.generated.h already included, missing '#pragma once' in Brik.h"
#endif
#define ARCONAID2_Brik_generated_h

#define ARCONAID2_Source_ARCONAID2_Brik_h_15_SPARSE_DATA
#define ARCONAID2_Source_ARCONAID2_Brik_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define ARCONAID2_Source_ARCONAID2_Brik_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define ARCONAID2_Source_ARCONAID2_Brik_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABrik(); \
	friend struct Z_Construct_UClass_ABrik_Statics; \
public: \
	DECLARE_CLASS(ABrik, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARCONAID2"), NO_API) \
	DECLARE_SERIALIZER(ABrik)


#define ARCONAID2_Source_ARCONAID2_Brik_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABrik(); \
	friend struct Z_Construct_UClass_ABrik_Statics; \
public: \
	DECLARE_CLASS(ABrik, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARCONAID2"), NO_API) \
	DECLARE_SERIALIZER(ABrik)


#define ARCONAID2_Source_ARCONAID2_Brik_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABrik(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrik) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrik); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrik); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrik(ABrik&&); \
	NO_API ABrik(const ABrik&); \
public:


#define ARCONAID2_Source_ARCONAID2_Brik_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrik(ABrik&&); \
	NO_API ABrik(const ABrik&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrik); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrik); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABrik)


#define ARCONAID2_Source_ARCONAID2_Brik_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Brick() { return STRUCT_OFFSET(ABrik, SM_Brick); } \
	FORCEINLINE static uint32 __PPO__BoxCollision() { return STRUCT_OFFSET(ABrik, BoxCollision); }


#define ARCONAID2_Source_ARCONAID2_Brik_h_12_PROLOG
#define ARCONAID2_Source_ARCONAID2_Brik_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCONAID2_Source_ARCONAID2_Brik_h_15_PRIVATE_PROPERTY_OFFSET \
	ARCONAID2_Source_ARCONAID2_Brik_h_15_SPARSE_DATA \
	ARCONAID2_Source_ARCONAID2_Brik_h_15_RPC_WRAPPERS \
	ARCONAID2_Source_ARCONAID2_Brik_h_15_INCLASS \
	ARCONAID2_Source_ARCONAID2_Brik_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARCONAID2_Source_ARCONAID2_Brik_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCONAID2_Source_ARCONAID2_Brik_h_15_PRIVATE_PROPERTY_OFFSET \
	ARCONAID2_Source_ARCONAID2_Brik_h_15_SPARSE_DATA \
	ARCONAID2_Source_ARCONAID2_Brik_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ARCONAID2_Source_ARCONAID2_Brik_h_15_INCLASS_NO_PURE_DECLS \
	ARCONAID2_Source_ARCONAID2_Brik_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCONAID2_API UClass* StaticClass<class ABrik>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARCONAID2_Source_ARCONAID2_Brik_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
