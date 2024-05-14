// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IODebugSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IODEBUG_IODebugSubsystem_generated_h
#error "IODebugSubsystem.generated.h already included, missing '#pragma once' in IODebugSubsystem.h"
#endif
#define IODEBUG_IODebugSubsystem_generated_h

#define FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_9_DELEGATE \
IODEBUG_API void FMultiDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& MultiDynamicDelegate, const FString& ParamName, float ParamValue);


#define FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_SPARSE_DATA
#define FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUPS); \
	DECLARE_FUNCTION(execSendAllParams); \
	DECLARE_FUNCTION(execAddParam); \
	DECLARE_FUNCTION(execChangeParam);


#define FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_ACCESSORS
#define FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIODebugSubsystem(); \
	friend struct Z_Construct_UClass_UIODebugSubsystem_Statics; \
public: \
	DECLARE_CLASS(UIODebugSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IODebug"), NO_API) \
	DECLARE_SERIALIZER(UIODebugSubsystem)


#define FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIODebugSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIODebugSubsystem(UIODebugSubsystem&&); \
	NO_API UIODebugSubsystem(const UIODebugSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIODebugSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIODebugSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIODebugSubsystem) \
	NO_API virtual ~UIODebugSubsystem();


#define FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_15_PROLOG
#define FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_SPARSE_DATA \
	FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_ACCESSORS \
	FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IODEBUG_API UClass* StaticClass<class UIODebugSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_RusAtom_Source_IODebug_Public_IODebugSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
