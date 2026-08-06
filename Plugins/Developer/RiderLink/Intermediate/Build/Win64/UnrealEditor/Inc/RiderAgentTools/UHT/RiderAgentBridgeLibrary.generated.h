// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RiderAgentBridgeLibrary.h"

#ifdef RIDERAGENTTOOLS_RiderAgentBridgeLibrary_generated_h
#error "RiderAgentBridgeLibrary.generated.h already included, missing '#pragma once' in RiderAgentBridgeLibrary.h"
#endif
#define RIDERAGENTTOOLS_RiderAgentBridgeLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class URiderAgentBridgeLibrary *************************************************
#define FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNiagaraSystemEmitters); \
	DECLARE_FUNCTION(execGetNiagaraSystemParameters); \
	DECLARE_FUNCTION(execSetWidgetSlotProperty); \
	DECLARE_FUNCTION(execSetWidgetProperty); \
	DECLARE_FUNCTION(execListWidgetsInTree); \
	DECLARE_FUNCTION(execRemoveWidgetFromTree); \
	DECLARE_FUNCTION(execAddWidgetToTree); \
	DECLARE_FUNCTION(execImportBlueprintNodes); \
	DECLARE_FUNCTION(execExportBlueprintNodes); \
	DECLARE_FUNCTION(execSetBlueprintVariableDefaultValue); \
	DECLARE_FUNCTION(execSetBlueprintVariableCategory); \
	DECLARE_FUNCTION(execRemoveBlueprintVariable); \
	DECLARE_FUNCTION(execAddBlueprintVariable); \
	DECLARE_FUNCTION(execSetPinDefaultValue); \
	DECLARE_FUNCTION(execRemoveBlueprintNode); \
	DECLARE_FUNCTION(execConnectBlueprintPins); \
	DECLARE_FUNCTION(execAddBlueprintNode); \
	DECLARE_FUNCTION(execGetBlueprintGraphNodes); \
	DECLARE_FUNCTION(execGetAllBlueprintGraphs); \
	DECLARE_FUNCTION(execEnsureAsset); \
	DECLARE_FUNCTION(execDuplicateAsset); \
	DECLARE_FUNCTION(execForceDeleteAssets); \
	DECLARE_FUNCTION(execForceDeleteAsset); \
	DECLARE_FUNCTION(execIsSuppressingModalDialogs); \
	DECLARE_FUNCTION(execSetSuppressModalDialogs); \
	DECLARE_FUNCTION(execShowNotification); \
	DECLARE_FUNCTION(execGetCVarInfo); \
	DECLARE_FUNCTION(execWriteCVar); \
	DECLARE_FUNCTION(execReadCVar);


struct Z_Construct_UClass_URiderAgentBridgeLibrary_Statics;
RIDERAGENTTOOLS_API UClass* Z_Construct_UClass_URiderAgentBridgeLibrary(ETypeConstructPhase);

#define FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URiderAgentBridgeLibrary_Statics; \
	friend RIDERAGENTTOOLS_API UClass* ::Z_Construct_UClass_URiderAgentBridgeLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URiderAgentBridgeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RiderAgentTools"), Z_Construct_UClass_URiderAgentBridgeLibrary) \
	DECLARE_SERIALIZER(URiderAgentBridgeLibrary)


#define FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URiderAgentBridgeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URiderAgentBridgeLibrary(URiderAgentBridgeLibrary&&) = delete; \
	URiderAgentBridgeLibrary(const URiderAgentBridgeLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URiderAgentBridgeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URiderAgentBridgeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URiderAgentBridgeLibrary) \
	NO_API virtual ~URiderAgentBridgeLibrary();


#define FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h_13_PROLOG
#define FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URiderAgentBridgeLibrary;

// ********** End Class URiderAgentBridgeLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
