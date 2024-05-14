// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IODebug/Public/IOBehaviorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOBehaviorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	IODEBUG_API UClass* Z_Construct_UClass_UIOBehaviorComponent();
	IODEBUG_API UClass* Z_Construct_UClass_UIOBehaviorComponent_NoRegister();
	IODEBUG_API UFunction* Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IODebug();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics
	{
		struct _Script_IODebug_eventOnChangeParamDelegate_Parms
		{
			float ParamValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParamValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::NewProp_ParamValue = { "ParamValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_IODebug_eventOnChangeParamDelegate_Parms, ParamValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::NewProp_ParamValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IODebug, nullptr, "OnChangeParamDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::_Script_IODebug_eventOnChangeParamDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::_Script_IODebug_eventOnChangeParamDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChangeParamDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnChangeParamDelegate, float ParamValue)
{
	struct _Script_IODebug_eventOnChangeParamDelegate_Parms
	{
		float ParamValue;
	};
	_Script_IODebug_eventOnChangeParamDelegate_Parms Parms;
	Parms.ParamValue=ParamValue;
	OnChangeParamDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UIOBehaviorComponent::execUpdateParam)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateParam(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOBehaviorComponent::execTakeParamChanged)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NParamName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NParamValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeParamChanged(Z_Param_NParamName,Z_Param_NParamValue);
		P_NATIVE_END;
	}
	void UIOBehaviorComponent::StaticRegisterNativesUIOBehaviorComponent()
	{
		UClass* Class = UIOBehaviorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeParamChanged", &UIOBehaviorComponent::execTakeParamChanged },
			{ "UpdateParam", &UIOBehaviorComponent::execUpdateParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics
	{
		struct IOBehaviorComponent_eventTakeParamChanged_Parms
		{
			FString NParamName;
			float NParamValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NParamName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NParamValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::NewProp_NParamName = { "NParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOBehaviorComponent_eventTakeParamChanged_Parms, NParamName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::NewProp_NParamValue = { "NParamValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOBehaviorComponent_eventTakeParamChanged_Parms, NParamValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::NewProp_NParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::NewProp_NParamValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOBehaviorComponent, nullptr, "TakeParamChanged", nullptr, nullptr, Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::IOBehaviorComponent_eventTakeParamChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::IOBehaviorComponent_eventTakeParamChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics
	{
		struct IOBehaviorComponent_eventUpdateParam_Parms
		{
			double NewValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOBehaviorComponent_eventUpdateParam_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOBehaviorComponent, nullptr, "UpdateParam", nullptr, nullptr, Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::IOBehaviorComponent_eventUpdateParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::IOBehaviorComponent_eventUpdateParam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOBehaviorComponent);
	UClass* Z_Construct_UClass_UIOBehaviorComponent_NoRegister()
	{
		return UIOBehaviorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UIOBehaviorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnParamChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParamChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ParamValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOBehaviorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IODebug,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOBehaviorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIOBehaviorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIOBehaviorComponent_TakeParamChanged, "TakeParamChanged" }, // 2704045976
		{ &Z_Construct_UFunction_UIOBehaviorComponent_UpdateParam, "UpdateParam" }, // 3237431063
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOBehaviorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOBehaviorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "IOBehaviorComponent.h" },
		{ "ModuleRelativePath", "Public/IOBehaviorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_OnParamChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/IOBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_OnParamChanged = { "OnParamChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOBehaviorComponent, OnParamChanged), Z_Construct_UDelegateFunction_IODebug_OnChangeParamDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_OnParamChanged_MetaData), Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_OnParamChanged_MetaData) }; // 1879324129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "IOBehaviorComponent" },
		{ "ModuleRelativePath", "Public/IOBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOBehaviorComponent, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_ParamName_MetaData), Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_ParamName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_ParamValue_MetaData[] = {
		{ "Category", "IOBehaviorComponent" },
		{ "ModuleRelativePath", "Public/IOBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_ParamValue = { "ParamValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOBehaviorComponent, ParamValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_ParamValue_MetaData), Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_ParamValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIOBehaviorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_OnParamChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOBehaviorComponent_Statics::NewProp_ParamValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOBehaviorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOBehaviorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOBehaviorComponent_Statics::ClassParams = {
		&UIOBehaviorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIOBehaviorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIOBehaviorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOBehaviorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIOBehaviorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOBehaviorComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIOBehaviorComponent()
	{
		if (!Z_Registration_Info_UClass_UIOBehaviorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOBehaviorComponent.OuterSingleton, Z_Construct_UClass_UIOBehaviorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOBehaviorComponent.OuterSingleton;
	}
	template<> IODEBUG_API UClass* StaticClass<UIOBehaviorComponent>()
	{
		return UIOBehaviorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOBehaviorComponent);
	UIOBehaviorComponent::~UIOBehaviorComponent() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IOBehaviorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IOBehaviorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOBehaviorComponent, UIOBehaviorComponent::StaticClass, TEXT("UIOBehaviorComponent"), &Z_Registration_Info_UClass_UIOBehaviorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOBehaviorComponent), 3243532038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IOBehaviorComponent_h_3744473911(TEXT("/Script/IODebug"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IOBehaviorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IOBehaviorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
