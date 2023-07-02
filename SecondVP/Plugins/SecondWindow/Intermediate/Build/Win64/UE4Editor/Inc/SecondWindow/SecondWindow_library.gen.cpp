// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWindow/Public/SecondWindow_library.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondWindow_library() {}
// Cross Module References
	SECONDWINDOW_API UClass* Z_Construct_UClass_USecondWindow_library_NoRegister();
	SECONDWINDOW_API UClass* Z_Construct_UClass_USecondWindow_library();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SecondWindow();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USecondWindow_library::execSetTextureTargetSize)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_target);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		USecondWindow_library::SetTextureTargetSize(Z_Param_target,Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	void USecondWindow_library::StaticRegisterNativesUSecondWindow_library()
	{
		UClass* Class = USecondWindow_library::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTextureTargetSize", &USecondWindow_library::execSetTextureTargetSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics
	{
		struct SecondWindow_library_eventSetTextureTargetSize_Parms
		{
			UTextureRenderTarget2D* target;
			int32 x;
			int32 y;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SecondWindow_library_eventSetTextureTargetSize_Parms, target), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SecondWindow_library_eventSetTextureTargetSize_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SecondWindow_library_eventSetTextureTargetSize_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Public/SecondWindow_library.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecondWindow_library, nullptr, "SetTextureTargetSize", nullptr, nullptr, sizeof(SecondWindow_library_eventSetTextureTargetSize_Parms), Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USecondWindow_library_NoRegister()
	{
		return USecondWindow_library::StaticClass();
	}
	struct Z_Construct_UClass_USecondWindow_library_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USecondWindow_library_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondWindow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USecondWindow_library_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USecondWindow_library_SetTextureTargetSize, "SetTextureTargetSize" }, // 4197540663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondWindow_library_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SecondWindow_library.h" },
		{ "ModuleRelativePath", "Public/SecondWindow_library.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USecondWindow_library_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecondWindow_library>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USecondWindow_library_Statics::ClassParams = {
		&USecondWindow_library::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USecondWindow_library_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USecondWindow_library_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USecondWindow_library()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USecondWindow_library_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USecondWindow_library, 1361395914);
	template<> SECONDWINDOW_API UClass* StaticClass<USecondWindow_library>()
	{
		return USecondWindow_library::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USecondWindow_library(Z_Construct_UClass_USecondWindow_library, &USecondWindow_library::StaticClass, TEXT("/Script/SecondWindow"), TEXT("USecondWindow_library"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USecondWindow_library);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
