// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CHello/Public/MyActorComponent1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorComponent1() {}
// Cross Module References
	CHELLO_API UClass* Z_Construct_UClass_UMyActorComponent1_NoRegister();
	CHELLO_API UClass* Z_Construct_UClass_UMyActorComponent1();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CHello();
// End Cross Module References
	void UMyActorComponent1::StaticRegisterNativesUMyActorComponent1()
	{
	}
	UClass* Z_Construct_UClass_UMyActorComponent1_NoRegister()
	{
		return UMyActorComponent1::StaticClass();
	}
	struct Z_Construct_UClass_UMyActorComponent1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyActorComponent1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CHello,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyActorComponent1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyActorComponent1.h" },
		{ "ModuleRelativePath", "Public/MyActorComponent1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyActorComponent1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyActorComponent1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyActorComponent1_Statics::ClassParams = {
		&UMyActorComponent1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyActorComponent1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyActorComponent1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyActorComponent1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyActorComponent1, 4175086521);
	template<> CHELLO_API UClass* StaticClass<UMyActorComponent1>()
	{
		return UMyActorComponent1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyActorComponent1(Z_Construct_UClass_UMyActorComponent1, &UMyActorComponent1::StaticClass, TEXT("/Script/CHello"), TEXT("UMyActorComponent1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyActorComponent1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
