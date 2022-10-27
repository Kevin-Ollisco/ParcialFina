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
#ifdef ARCONAID2_allBound_generated_h
#error "allBound.generated.h already included, missing '#pragma once' in allBound.h"
#endif
#define ARCONAID2_allBound_generated_h

#define ARCONAID2_Source_ARCONAID2_allBound_h_19_SPARSE_DATA
#define ARCONAID2_Source_ARCONAID2_allBound_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define ARCONAID2_Source_ARCONAID2_allBound_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define ARCONAID2_Source_ARCONAID2_allBound_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAallBound(); \
	friend struct Z_Construct_UClass_AallBound_Statics; \
public: \
	DECLARE_CLASS(AallBound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARCONAID2"), NO_API) \
	DECLARE_SERIALIZER(AallBound)


#define ARCONAID2_Source_ARCONAID2_allBound_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAallBound(); \
	friend struct Z_Construct_UClass_AallBound_Statics; \
public: \
	DECLARE_CLASS(AallBound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARCONAID2"), NO_API) \
	DECLARE_SERIALIZER(AallBound)


#define ARCONAID2_Source_ARCONAID2_allBound_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AallBound(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AallBound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AallBound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AallBound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AallBound(AallBound&&); \
	NO_API AallBound(const AallBound&); \
public:


#define ARCONAID2_Source_ARCONAID2_allBound_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AallBound(AallBound&&); \
	NO_API AallBound(const AallBound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AallBound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AallBound); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AallBound)


#define ARCONAID2_Source_ARCONAID2_allBound_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxCollision() { return STRUCT_OFFSET(AallBound, BoxCollision); }


#define ARCONAID2_Source_ARCONAID2_allBound_h_16_PROLOG
#define ARCONAID2_Source_ARCONAID2_allBound_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCONAID2_Source_ARCONAID2_allBound_h_19_PRIVATE_PROPERTY_OFFSET \
	ARCONAID2_Source_ARCONAID2_allBound_h_19_SPARSE_DATA \
	ARCONAID2_Source_ARCONAID2_allBound_h_19_RPC_WRAPPERS \
	ARCONAID2_Source_ARCONAID2_allBound_h_19_INCLASS \
	ARCONAID2_Source_ARCONAID2_allBound_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARCONAID2_Source_ARCONAID2_allBound_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCONAID2_Source_ARCONAID2_allBound_h_19_PRIVATE_PROPERTY_OFFSET \
	ARCONAID2_Source_ARCONAID2_allBound_h_19_SPARSE_DATA \
	ARCONAID2_Source_ARCONAID2_allBound_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ARCONAID2_Source_ARCONAID2_allBound_h_19_INCLASS_NO_PURE_DECLS \
	ARCONAID2_Source_ARCONAID2_allBound_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCONAID2_API UClass* StaticClass<class AallBound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARCONAID2_Source_ARCONAID2_allBound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
