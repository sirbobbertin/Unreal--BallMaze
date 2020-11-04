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
#ifdef CHELLO_Player_Ball_generated_h
#error "Player_Ball.generated.h already included, missing '#pragma once' in Player_Ball.h"
#endif
#define CHELLO_Player_Ball_generated_h

#define CHello_Source_CHello_Public_Player_Ball_h_20_SPARSE_DATA
#define CHello_Source_CHello_Public_Player_Ball_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define CHello_Source_CHello_Public_Player_Ball_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define CHello_Source_CHello_Public_Player_Ball_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Ball(); \
	friend struct Z_Construct_UClass_APlayer_Ball_Statics; \
public: \
	DECLARE_CLASS(APlayer_Ball, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CHello"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Ball)


#define CHello_Source_CHello_Public_Player_Ball_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_Ball(); \
	friend struct Z_Construct_UClass_APlayer_Ball_Statics; \
public: \
	DECLARE_CLASS(APlayer_Ball, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CHello"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Ball)


#define CHello_Source_CHello_Public_Player_Ball_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_Ball(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Ball) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Ball); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Ball); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Ball(APlayer_Ball&&); \
	NO_API APlayer_Ball(const APlayer_Ball&); \
public:


#define CHello_Source_CHello_Public_Player_Ball_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Ball(APlayer_Ball&&); \
	NO_API APlayer_Ball(const APlayer_Ball&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Ball); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Ball); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_Ball)


#define CHello_Source_CHello_Public_Player_Ball_h_20_PRIVATE_PROPERTY_OFFSET
#define CHello_Source_CHello_Public_Player_Ball_h_17_PROLOG
#define CHello_Source_CHello_Public_Player_Ball_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CHello_Source_CHello_Public_Player_Ball_h_20_PRIVATE_PROPERTY_OFFSET \
	CHello_Source_CHello_Public_Player_Ball_h_20_SPARSE_DATA \
	CHello_Source_CHello_Public_Player_Ball_h_20_RPC_WRAPPERS \
	CHello_Source_CHello_Public_Player_Ball_h_20_INCLASS \
	CHello_Source_CHello_Public_Player_Ball_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CHello_Source_CHello_Public_Player_Ball_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CHello_Source_CHello_Public_Player_Ball_h_20_PRIVATE_PROPERTY_OFFSET \
	CHello_Source_CHello_Public_Player_Ball_h_20_SPARSE_DATA \
	CHello_Source_CHello_Public_Player_Ball_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	CHello_Source_CHello_Public_Player_Ball_h_20_INCLASS_NO_PURE_DECLS \
	CHello_Source_CHello_Public_Player_Ball_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHELLO_API UClass* StaticClass<class APlayer_Ball>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CHello_Source_CHello_Public_Player_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
