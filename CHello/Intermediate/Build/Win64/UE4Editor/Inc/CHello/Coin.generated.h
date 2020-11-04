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
#ifdef CHELLO_Coin_generated_h
#error "Coin.generated.h already included, missing '#pragma once' in Coin.h"
#endif
#define CHELLO_Coin_generated_h

#define CHello_Source_CHello_Public_Coin_h_15_SPARSE_DATA
#define CHello_Source_CHello_Public_Coin_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define CHello_Source_CHello_Public_Coin_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define CHello_Source_CHello_Public_Coin_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoin(); \
	friend struct Z_Construct_UClass_UCoin_Statics; \
public: \
	DECLARE_CLASS(UCoin, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CHello"), NO_API) \
	DECLARE_SERIALIZER(UCoin)


#define CHello_Source_CHello_Public_Coin_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCoin(); \
	friend struct Z_Construct_UClass_UCoin_Statics; \
public: \
	DECLARE_CLASS(UCoin, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CHello"), NO_API) \
	DECLARE_SERIALIZER(UCoin)


#define CHello_Source_CHello_Public_Coin_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoin(UCoin&&); \
	NO_API UCoin(const UCoin&); \
public:


#define CHello_Source_CHello_Public_Coin_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoin(UCoin&&); \
	NO_API UCoin(const UCoin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoin)


#define CHello_Source_CHello_Public_Coin_h_15_PRIVATE_PROPERTY_OFFSET
#define CHello_Source_CHello_Public_Coin_h_12_PROLOG
#define CHello_Source_CHello_Public_Coin_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CHello_Source_CHello_Public_Coin_h_15_PRIVATE_PROPERTY_OFFSET \
	CHello_Source_CHello_Public_Coin_h_15_SPARSE_DATA \
	CHello_Source_CHello_Public_Coin_h_15_RPC_WRAPPERS \
	CHello_Source_CHello_Public_Coin_h_15_INCLASS \
	CHello_Source_CHello_Public_Coin_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CHello_Source_CHello_Public_Coin_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CHello_Source_CHello_Public_Coin_h_15_PRIVATE_PROPERTY_OFFSET \
	CHello_Source_CHello_Public_Coin_h_15_SPARSE_DATA \
	CHello_Source_CHello_Public_Coin_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CHello_Source_CHello_Public_Coin_h_15_INCLASS_NO_PURE_DECLS \
	CHello_Source_CHello_Public_Coin_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHELLO_API UClass* StaticClass<class UCoin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CHello_Source_CHello_Public_Coin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
