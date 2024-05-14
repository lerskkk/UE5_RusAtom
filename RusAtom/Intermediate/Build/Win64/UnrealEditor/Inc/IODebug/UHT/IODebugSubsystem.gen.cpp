// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IODebug/Public/IODebugSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIODebugSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	IODEBUG_API UClass* Z_Construct_UClass_UIODebugSubsystem();
	IODEBUG_API UClass* Z_Construct_UClass_UIODebugSubsystem_NoRegister();
	IODEBUG_API UFunction* Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_IODebug();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_IODebug_eventMultiDynamicDelegate_Parms
		{
			FString ParamName;
			float ParamValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParamValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_IODebug_eventMultiDynamicDelegate_Parms, ParamName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::NewProp_ParamValue = { "ParamValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_IODebug_eventMultiDynamicDelegate_Parms, ParamValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::NewProp_ParamValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IODebugSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IODebug, nullptr, "MultiDynamicDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::_Script_IODebug_eventMultiDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::_Script_IODebug_eventMultiDynamicDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMultiDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& MultiDynamicDelegate, const FString& ParamName, float ParamValue)
{
	struct _Script_IODebug_eventMultiDynamicDelegate_Parms
	{
		FString ParamName;
		float ParamValue;
	};
	_Script_IODebug_eventMultiDynamicDelegate_Parms Parms;
	Parms.ParamName=ParamName;
	Parms.ParamValue=ParamValue;
	MultiDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UIODebugSubsystem::execSetUPS)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUPS(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIODebugSubsystem::execSendAllParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendAllParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIODebugSubsystem::execAddParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Param);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddParam(Z_Param_Param,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIODebugSubsystem::execChangeParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Param);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeParam(Z_Param_Param,Z_Param_Value);
		P_NATIVE_END;
	}
	void UIODebugSubsystem::StaticRegisterNativesUIODebugSubsystem()
	{
		UClass* Class = UIODebugSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddParam", &UIODebugSubsystem::execAddParam },
			{ "ChangeParam", &UIODebugSubsystem::execChangeParam },
			{ "SendAllParams", &UIODebugSubsystem::execSendAllParams },
			{ "SetUPS", &UIODebugSubsystem::execSetUPS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics
	{
		struct IODebugSubsystem_eventAddParam_Parms
		{
			FString Param;
			double Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IODebugSubsystem_eventAddParam_Parms, Param), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IODebugSubsystem_eventAddParam_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IODebugSubsystem_eventAddParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IODebugSubsystem_eventAddParam_Parms), &Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IODebugSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIODebugSubsystem, nullptr, "AddParam", nullptr, nullptr, Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::IODebugSubsystem_eventAddParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::IODebugSubsystem_eventAddParam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIODebugSubsystem_AddParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIODebugSubsystem_AddParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics
	{
		struct IODebugSubsystem_eventChangeParam_Parms
		{
			FString Param;
			double Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IODebugSubsystem_eventChangeParam_Parms, Param), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IODebugSubsystem_eventChangeParam_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IODebugSubsystem_eventChangeParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IODebugSubsystem_eventChangeParam_Parms), &Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Change param and send it to IOProtocol\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Public/IODebugSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change param and send it to IOProtocol" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIODebugSubsystem, nullptr, "ChangeParam", nullptr, nullptr, Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::IODebugSubsystem_eventChangeParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::IODebugSubsystem_eventChangeParam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIODebugSubsystem_ChangeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIODebugSubsystem_ChangeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIODebugSubsystem_SendAllParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIODebugSubsystem_SendAllParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IODebugSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIODebugSubsystem_SendAllParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIODebugSubsystem, nullptr, "SendAllParams", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIODebugSubsystem_SendAllParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIODebugSubsystem_SendAllParams_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UIODebugSubsystem_SendAllParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIODebugSubsystem_SendAllParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics
	{
		struct IODebugSubsystem_eventSetUPS_Parms
		{
			int32 Amount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IODebugSubsystem_eventSetUPS_Parms, Amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set new timer with \"Amount\" updates per second\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Public/IODebugSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set new timer with \"Amount\" updates per second" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIODebugSubsystem, nullptr, "SetUPS", nullptr, nullptr, Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::IODebugSubsystem_eventSetUPS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::IODebugSubsystem_eventSetUPS_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIODebugSubsystem_SetUPS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIODebugSubsystem_SetUPS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIODebugSubsystem);
	UClass* Z_Construct_UClass_UIODebugSubsystem_NoRegister()
	{
		return UIODebugSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UIODebugSubsystem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpdatesPerSecond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIODebugSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_IODebug,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIODebugSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIODebugSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIODebugSubsystem_AddParam, "AddParam" }, // 3521609108
		{ &Z_Construct_UFunction_UIODebugSubsystem_ChangeParam, "ChangeParam" }, // 1211249989
		{ &Z_Construct_UFunction_UIODebugSubsystem_SendAllParams, "SendAllParams" }, // 3480960736
		{ &Z_Construct_UFunction_UIODebugSubsystem_SetUPS, "SetUPS" }, // 2742698336
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIODebugSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIODebugSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  This subsystem is a debug port for the dynamic behavior visualization object.\n */" },
#endif
		{ "IncludePath", "IODebugSubsystem.h" },
		{ "ModuleRelativePath", "Public/IODebugSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This subsystem is a debug port for the dynamic behavior visualization object." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIODebugSubsystem_Statics::NewProp_OnParamChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/IODebugSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIODebugSubsystem_Statics::NewProp_OnParamChanged = { "OnParamChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIODebugSubsystem, OnParamChanged), Z_Construct_UDelegateFunction_IODebug_MultiDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIODebugSubsystem_Statics::NewProp_OnParamChanged_MetaData), Z_Construct_UClass_UIODebugSubsystem_Statics::NewProp_OnParamChanged_MetaData) }; // 666631588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIODebugSubsystem_Statics::NewProp_UpdatesPerSecond_MetaData[] = {
		{ "Category", "IODebugSubsystem" },
		{ "ModuleRelativePath", "Public/IODebugSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIODebugSubsystem_Statics::NewProp_UpdatesPerSecond = { "UpdatesPerSecond", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIODebugSubsystem, UpdatesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIODebugSubsystem_Statics::NewProp_UpdatesPerSecond_MetaData), Z_Construct_UClass_UIODebugSubsystem_Statics::NewProp_UpdatesPerSecond_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIODebugSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIODebugSubsystem_Statics::NewProp_OnParamChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIODebugSubsystem_Statics::NewProp_UpdatesPerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIODebugSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIODebugSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIODebugSubsystem_Statics::ClassParams = {
		&UIODebugSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIODebugSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIODebugSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIODebugSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UIODebugSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIODebugSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIODebugSubsystem()
	{
		if (!Z_Registration_Info_UClass_UIODebugSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIODebugSubsystem.OuterSingleton, Z_Construct_UClass_UIODebugSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIODebugSubsystem.OuterSingleton;
	}
	template<> IODEBUG_API UClass* StaticClass<UIODebugSubsystem>()
	{
		return UIODebugSubsystem::StaticClass();
	}
	UIODebugSubsystem::UIODebugSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIODebugSubsystem);
	UIODebugSubsystem::~UIODebugSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIODebugSubsystem, UIODebugSubsystem::StaticClass, TEXT("UIODebugSubsystem"), &Z_Registration_Info_UClass_UIODebugSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIODebugSubsystem), 262128931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_1682624835(TEXT("/Script/IODebug"),
		Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
