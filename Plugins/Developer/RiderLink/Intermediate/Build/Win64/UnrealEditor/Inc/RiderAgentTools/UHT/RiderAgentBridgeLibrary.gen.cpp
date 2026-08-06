// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RiderAgentBridgeLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRiderAgentBridgeLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RiderAgentTools(ETypeConstructPhase);
RIDERAGENTTOOLS_API UClass* Z_Construct_UClass_URiderAgentBridgeLibrary(ETypeConstructPhase);
RIDERAGENTTOOLS_API UClass* Z_Construct_UClass_URiderAgentBridgeLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URiderAgentBridgeLibrary Function AddBlueprintNode ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString NodeClassName;
		FString NodeParamsJson;
		int32 X;
		int32 Y;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeParamsJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddBlueprintNode constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeClassName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeParamsJson;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddBlueprintNode constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddBlueprintNode Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_NodeClassName = { "NodeClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, NodeClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeClassName_MetaData), NewProp_NodeClassName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_NodeParamsJson = { "NodeParamsJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, NodeParamsJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeParamsJson_MetaData), NewProp_NodeParamsJson_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeParamsJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddBlueprintNode Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "AddBlueprintNode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventAddBlueprintNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execAddBlueprintNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeClassName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeParamsJson);
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::AddBlueprintNode(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_NodeClassName,Z_Param_NodeParamsJson,Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function AddBlueprintNode *************************

// ********** Begin Class URiderAgentBridgeLibrary Function AddBlueprintVariable *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms
	{
		FString BlueprintPath;
		FString VariableName;
		FString PinCategoryName;
		FString PinSubCategoryName;
		FString PinSubCategoryObject;
		FString ContainerType;
		bool bIsReference;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Blueprint Variables \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Blueprint Variables \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddBlueprintVariable constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinCategoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinSubCategoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinSubCategoryObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContainerType;
	static void NewProp_bIsReference_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms*)Obj)->bIsReference = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReference;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddBlueprintVariable constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddBlueprintVariable Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PinCategoryName = { "PinCategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, PinCategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinCategoryName_MetaData), NewProp_PinCategoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PinSubCategoryName = { "PinSubCategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, PinSubCategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSubCategoryName_MetaData), NewProp_PinSubCategoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PinSubCategoryObject = { "PinSubCategoryObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, PinSubCategoryObject), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSubCategoryObject_MetaData), NewProp_PinSubCategoryObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms, ContainerType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerType_MetaData), NewProp_ContainerType_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsReference = { "bIsReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms), &UHT_STATICS::NewProp_bIsReference_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PinCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PinSubCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PinSubCategoryObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ContainerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddBlueprintVariable Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "AddBlueprintVariable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventAddBlueprintVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execAddBlueprintVariable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PinCategoryName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PinSubCategoryName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PinSubCategoryObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContainerType);
	P_GET_UBOOL(Z_Param_bIsReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::AddBlueprintVariable(Z_Param_BlueprintPath,Z_Param_VariableName,Z_Param_PinCategoryName,Z_Param_PinSubCategoryName,Z_Param_PinSubCategoryObject,Z_Param_ContainerType,Z_Param_bIsReference);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function AddBlueprintVariable *********************

// ********** Begin Class URiderAgentBridgeLibrary Function AddWidgetToTree ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms
	{
		FString WidgetBlueprintPath;
		FString ParentWidgetName;
		FString ChildWidgetClass;
		FString ChildWidgetName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Widget Tree \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Widget Tree \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidgetClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddWidgetToTree constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetBlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentWidgetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChildWidgetClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChildWidgetName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddWidgetToTree constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddWidgetToTree Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WidgetBlueprintPath = { "WidgetBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms, WidgetBlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBlueprintPath_MetaData), NewProp_WidgetBlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ParentWidgetName = { "ParentWidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms, ParentWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentWidgetName_MetaData), NewProp_ParentWidgetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ChildWidgetClass = { "ChildWidgetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms, ChildWidgetClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidgetClass_MetaData), NewProp_ChildWidgetClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ChildWidgetName = { "ChildWidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms, ChildWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidgetName_MetaData), NewProp_ChildWidgetName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetBlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChildWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChildWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddWidgetToTree Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "AddWidgetToTree", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventAddWidgetToTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execAddWidgetToTree)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetBlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParentWidgetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChildWidgetClass);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChildWidgetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::AddWidgetToTree(Z_Param_WidgetBlueprintPath,Z_Param_ParentWidgetName,Z_Param_ChildWidgetClass,Z_Param_ChildWidgetName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function AddWidgetToTree **************************

// ********** Begin Class URiderAgentBridgeLibrary Function ConnectBlueprintPins *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString SourceNodeName;
		FString SourcePinName;
		FString TargetNodeName;
		FString TargetPinName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePinName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConnectBlueprintPins constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceNodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePinName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetNodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPinName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConnectBlueprintPins constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConnectBlueprintPins Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceNodeName = { "SourceNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, SourceNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceNodeName_MetaData), NewProp_SourceNodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePinName = { "SourcePinName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, SourcePinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePinName_MetaData), NewProp_SourcePinName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TargetNodeName = { "TargetNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, TargetNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNodeName_MetaData), NewProp_TargetNodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TargetPinName = { "TargetPinName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms, TargetPinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPinName_MetaData), NewProp_TargetPinName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceNodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetNodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetPinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConnectBlueprintPins Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ConnectBlueprintPins", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventConnectBlueprintPins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execConnectBlueprintPins)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceNodeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_SourcePinName);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetNodeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetPinName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::ConnectBlueprintPins(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_SourceNodeName,Z_Param_SourcePinName,Z_Param_TargetNodeName,Z_Param_TargetPinName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ConnectBlueprintPins *********************

// ********** Begin Class URiderAgentBridgeLibrary Function DuplicateAsset *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventDuplicateAsset_Parms
	{
		FString SourcePath;
		FString DestPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Asset" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DuplicateAsset constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DuplicateAsset constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DuplicateAsset Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventDuplicateAsset_Parms, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DestPath = { "DestPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventDuplicateAsset_Parms, DestPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestPath_MetaData), NewProp_DestPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventDuplicateAsset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DuplicateAsset Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "DuplicateAsset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventDuplicateAsset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventDuplicateAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execDuplicateAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourcePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_DestPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::DuplicateAsset(Z_Param_SourcePath,Z_Param_DestPath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function DuplicateAsset ***************************

// ********** Begin Class URiderAgentBridgeLibrary Function EnsureAsset ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventEnsureAsset_Parms
	{
		FString PackagePath;
		FString AssetName;
		FString ClassName;
		FString FactoryClassName;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Asset" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnsureAsset constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FactoryClassName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnsureAsset constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnsureAsset Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventEnsureAsset_Parms, PackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagePath_MetaData), NewProp_PackagePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventEnsureAsset_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventEnsureAsset_Parms, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FactoryClassName = { "FactoryClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventEnsureAsset_Parms, FactoryClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryClassName_MetaData), NewProp_FactoryClassName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventEnsureAsset_Parms, ReturnValue), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FactoryClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnsureAsset Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "EnsureAsset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventEnsureAsset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventEnsureAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execEnsureAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
	P_GET_PROPERTY(FStrProperty,Z_Param_FactoryClassName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=URiderAgentBridgeLibrary::EnsureAsset(Z_Param_PackagePath,Z_Param_AssetName,Z_Param_ClassName,Z_Param_FactoryClassName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function EnsureAsset ******************************

// ********** Begin Class URiderAgentBridgeLibrary Function ExportBlueprintNodes *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString NodeNamesJson;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeNamesJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExportBlueprintNodes constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeNamesJson;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExportBlueprintNodes constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExportBlueprintNodes Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_NodeNamesJson = { "NodeNamesJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms, NodeNamesJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeNamesJson_MetaData), NewProp_NodeNamesJson_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeNamesJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ExportBlueprintNodes Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ExportBlueprintNodes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventExportBlueprintNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execExportBlueprintNodes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeNamesJson);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::ExportBlueprintNodes(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_NodeNamesJson);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ExportBlueprintNodes *********************

// ********** Begin Class URiderAgentBridgeLibrary Function ForceDeleteAsset ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms
	{
		FString PackagePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Asset Operations \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Asset Operations \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceDeleteAsset constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceDeleteAsset constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceDeleteAsset Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms, PackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagePath_MetaData), NewProp_PackagePath_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ForceDeleteAsset Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ForceDeleteAsset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventForceDeleteAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execForceDeleteAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::ForceDeleteAsset(Z_Param_PackagePath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ForceDeleteAsset *************************

// ********** Begin Class URiderAgentBridgeLibrary Function ForceDeleteAssets **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventForceDeleteAssets_Parms
	{
		TArray<FString> PackagePaths;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Asset" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceDeleteAssets constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagePaths;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceDeleteAssets constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceDeleteAssets Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PackagePaths_Inner = { "PackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PackagePaths = { "PackagePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventForceDeleteAssets_Parms, PackagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagePaths_MetaData), NewProp_PackagePaths_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventForceDeleteAssets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackagePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackagePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ForceDeleteAssets Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ForceDeleteAssets", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventForceDeleteAssets_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventForceDeleteAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execForceDeleteAssets)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_PackagePaths);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URiderAgentBridgeLibrary::ForceDeleteAssets(Z_Param_Out_PackagePaths);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ForceDeleteAssets ************************

// ********** Begin Class URiderAgentBridgeLibrary Function GetAllBlueprintGraphs ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventGetAllBlueprintGraphs_Parms
	{
		FString BlueprintPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Blueprint Graph \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Blueprint Graph \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllBlueprintGraphs constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllBlueprintGraphs constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllBlueprintGraphs Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetAllBlueprintGraphs_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetAllBlueprintGraphs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllBlueprintGraphs Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "GetAllBlueprintGraphs", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventGetAllBlueprintGraphs_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventGetAllBlueprintGraphs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execGetAllBlueprintGraphs)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::GetAllBlueprintGraphs(Z_Param_BlueprintPath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function GetAllBlueprintGraphs ********************

// ********** Begin Class URiderAgentBridgeLibrary Function GetBlueprintGraphNodes *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBlueprintGraphNodes constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBlueprintGraphNodes constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBlueprintGraphNodes Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBlueprintGraphNodes Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "GetBlueprintGraphNodes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventGetBlueprintGraphNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execGetBlueprintGraphNodes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::GetBlueprintGraphNodes(Z_Param_BlueprintPath,Z_Param_GraphName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function GetBlueprintGraphNodes *******************

// ********** Begin Class URiderAgentBridgeLibrary Function GetCVarInfo ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventGetCVarInfo_Parms
	{
		FString Name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|CVar" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCVarInfo constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCVarInfo constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCVarInfo Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetCVarInfo_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetCVarInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCVarInfo Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "GetCVarInfo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventGetCVarInfo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventGetCVarInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execGetCVarInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::GetCVarInfo(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function GetCVarInfo ******************************

// ********** Begin Class URiderAgentBridgeLibrary Function GetNiagaraSystemEmitters ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventGetNiagaraSystemEmitters_Parms
	{
		FString NiagaraSystemPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Niagara" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystemPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNiagaraSystemEmitters constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_NiagaraSystemPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNiagaraSystemEmitters constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNiagaraSystemEmitters Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_NiagaraSystemPath = { "NiagaraSystemPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetNiagaraSystemEmitters_Parms, NiagaraSystemPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystemPath_MetaData), NewProp_NiagaraSystemPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetNiagaraSystemEmitters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NiagaraSystemPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNiagaraSystemEmitters Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "GetNiagaraSystemEmitters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventGetNiagaraSystemEmitters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventGetNiagaraSystemEmitters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execGetNiagaraSystemEmitters)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NiagaraSystemPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::GetNiagaraSystemEmitters(Z_Param_NiagaraSystemPath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function GetNiagaraSystemEmitters *****************

// ********** Begin Class URiderAgentBridgeLibrary Function GetNiagaraSystemParameters *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventGetNiagaraSystemParameters_Parms
	{
		FString NiagaraSystemPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Niagara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Niagara \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Niagara \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystemPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNiagaraSystemParameters constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_NiagaraSystemPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNiagaraSystemParameters constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNiagaraSystemParameters Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_NiagaraSystemPath = { "NiagaraSystemPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetNiagaraSystemParameters_Parms, NiagaraSystemPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystemPath_MetaData), NewProp_NiagaraSystemPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventGetNiagaraSystemParameters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NiagaraSystemPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNiagaraSystemParameters Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "GetNiagaraSystemParameters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventGetNiagaraSystemParameters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventGetNiagaraSystemParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execGetNiagaraSystemParameters)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NiagaraSystemPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::GetNiagaraSystemParameters(Z_Param_NiagaraSystemPath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function GetNiagaraSystemParameters ***************

// ********** Begin Class URiderAgentBridgeLibrary Function ImportBlueprintNodes *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString ClipboardText;
		int32 OffsetX;
		int32 OffsetY;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipboardText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ImportBlueprintNodes constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClipboardText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetY;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ImportBlueprintNodes constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ImportBlueprintNodes Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ClipboardText = { "ClipboardText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, ClipboardText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipboardText_MetaData), NewProp_ClipboardText_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OffsetX = { "OffsetX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, OffsetX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, OffsetY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClipboardText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ImportBlueprintNodes Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ImportBlueprintNodes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventImportBlueprintNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execImportBlueprintNodes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClipboardText);
	P_GET_PROPERTY(FIntProperty,Z_Param_OffsetX);
	P_GET_PROPERTY(FIntProperty,Z_Param_OffsetY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::ImportBlueprintNodes(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_ClipboardText,Z_Param_OffsetX,Z_Param_OffsetY);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ImportBlueprintNodes *********************

// ********** Begin Class URiderAgentBridgeLibrary Function IsSuppressingModalDialogs **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventIsSuppressingModalDialogs_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Dialog" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSuppressingModalDialogs constinit property declarations *************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventIsSuppressingModalDialogs_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSuppressingModalDialogs constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSuppressingModalDialogs Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventIsSuppressingModalDialogs_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsSuppressingModalDialogs Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "IsSuppressingModalDialogs", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventIsSuppressingModalDialogs_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventIsSuppressingModalDialogs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execIsSuppressingModalDialogs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::IsSuppressingModalDialogs();
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function IsSuppressingModalDialogs ****************

// ********** Begin Class URiderAgentBridgeLibrary Function ListWidgetsInTree **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventListWidgetsInTree_Parms
	{
		FString WidgetBlueprintPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Widget" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ListWidgetsInTree constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetBlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ListWidgetsInTree constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ListWidgetsInTree Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WidgetBlueprintPath = { "WidgetBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventListWidgetsInTree_Parms, WidgetBlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBlueprintPath_MetaData), NewProp_WidgetBlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventListWidgetsInTree_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetBlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ListWidgetsInTree Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ListWidgetsInTree", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventListWidgetsInTree_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventListWidgetsInTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execListWidgetsInTree)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetBlueprintPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::ListWidgetsInTree(Z_Param_WidgetBlueprintPath);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ListWidgetsInTree ************************

// ********** Begin Class URiderAgentBridgeLibrary Function ReadCVar *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventReadCVar_Parms
	{
		FString Name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|CVar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Console Variables \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Console Variables \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadCVar constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadCVar constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadCVar Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventReadCVar_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventReadCVar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReadCVar Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ReadCVar", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventReadCVar_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventReadCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execReadCVar)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URiderAgentBridgeLibrary::ReadCVar(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ReadCVar *********************************

// ********** Begin Class URiderAgentBridgeLibrary Function RemoveBlueprintNode ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString NodeName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveBlueprintNode constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveBlueprintNode constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveBlueprintNode Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveBlueprintNode Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "RemoveBlueprintNode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventRemoveBlueprintNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execRemoveBlueprintNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::RemoveBlueprintNode(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_NodeName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function RemoveBlueprintNode **********************

// ********** Begin Class URiderAgentBridgeLibrary Function RemoveBlueprintVariable ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms
	{
		FString BlueprintPath;
		FString VariableName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveBlueprintVariable constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveBlueprintVariable constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveBlueprintVariable Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveBlueprintVariable Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "RemoveBlueprintVariable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventRemoveBlueprintVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execRemoveBlueprintVariable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::RemoveBlueprintVariable(Z_Param_BlueprintPath,Z_Param_VariableName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function RemoveBlueprintVariable ******************

// ********** Begin Class URiderAgentBridgeLibrary Function RemoveWidgetFromTree *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms
	{
		FString WidgetBlueprintPath;
		FString WidgetName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Widget" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveWidgetFromTree constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetBlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveWidgetFromTree constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveWidgetFromTree Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WidgetBlueprintPath = { "WidgetBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms, WidgetBlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBlueprintPath_MetaData), NewProp_WidgetBlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetBlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveWidgetFromTree Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "RemoveWidgetFromTree", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventRemoveWidgetFromTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execRemoveWidgetFromTree)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetBlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::RemoveWidgetFromTree(Z_Param_WidgetBlueprintPath,Z_Param_WidgetName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function RemoveWidgetFromTree *********************

// ********** Begin Class URiderAgentBridgeLibrary Function SetBlueprintVariableCategory ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms
	{
		FString BlueprintPath;
		FString VariableName;
		FString CategoryName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBlueprintVariableCategory constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBlueprintVariableCategory constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBlueprintVariableCategory Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBlueprintVariableCategory Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetBlueprintVariableCategory", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventSetBlueprintVariableCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetBlueprintVariableCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::SetBlueprintVariableCategory(Z_Param_BlueprintPath,Z_Param_VariableName,Z_Param_CategoryName);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetBlueprintVariableCategory *************

// ********** Begin Class URiderAgentBridgeLibrary Function SetBlueprintVariableDefaultValue *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms
	{
		FString BlueprintPath;
		FString VariableName;
		FString ValueText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBlueprintVariableDefaultValue constinit property declarations ******
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueText;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBlueprintVariableDefaultValue constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBlueprintVariableDefaultValue Property Definitions *****************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ValueText = { "ValueText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms, ValueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueText_MetaData), NewProp_ValueText_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBlueprintVariableDefaultValue Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetBlueprintVariableDefaultValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventSetBlueprintVariableDefaultValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetBlueprintVariableDefaultValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ValueText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::SetBlueprintVariableDefaultValue(Z_Param_BlueprintPath,Z_Param_VariableName,Z_Param_ValueText);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetBlueprintVariableDefaultValue *********

// ********** Begin Class URiderAgentBridgeLibrary Function SetPinDefaultValue *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms
	{
		FString BlueprintPath;
		FString GraphName;
		FString NodeName;
		FString PinName;
		FString DefaultValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Blueprint" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPinDefaultValue constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPinDefaultValue constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPinDefaultValue Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinName_MetaData), NewProp_PinName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPinDefaultValue Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetPinDefaultValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventSetPinDefaultValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetPinDefaultValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PinName);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::SetPinDefaultValue(Z_Param_BlueprintPath,Z_Param_GraphName,Z_Param_NodeName,Z_Param_PinName,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetPinDefaultValue ***********************

// ********** Begin Class URiderAgentBridgeLibrary Function SetSuppressModalDialogs ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventSetSuppressModalDialogs_Parms
	{
		bool bSuppress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Dialog" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Modal Dialog Suppression \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Modal Dialog Suppression \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetSuppressModalDialogs constinit property declarations ***************
	static void NewProp_bSuppress_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventSetSuppressModalDialogs_Parms*)Obj)->bSuppress = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSuppressModalDialogs constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSuppressModalDialogs Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuppress = { "bSuppress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetSuppressModalDialogs_Parms), &UHT_STATICS::NewProp_bSuppress_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuppress,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSuppressModalDialogs Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetSuppressModalDialogs", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventSetSuppressModalDialogs_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventSetSuppressModalDialogs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetSuppressModalDialogs)
{
	P_GET_UBOOL(Z_Param_bSuppress);
	P_FINISH;
	P_NATIVE_BEGIN;
	URiderAgentBridgeLibrary::SetSuppressModalDialogs(Z_Param_bSuppress);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetSuppressModalDialogs ******************

// ********** Begin Class URiderAgentBridgeLibrary Function SetWidgetProperty **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms
	{
		FString WidgetBlueprintPath;
		FString WidgetName;
		FString PropertyName;
		FString ValueText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Widget" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWidgetProperty constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetBlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueText;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWidgetProperty constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWidgetProperty Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WidgetBlueprintPath = { "WidgetBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms, WidgetBlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBlueprintPath_MetaData), NewProp_WidgetBlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ValueText = { "ValueText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms, ValueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueText_MetaData), NewProp_ValueText_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetBlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWidgetProperty Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetWidgetProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventSetWidgetProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetWidgetProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetBlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ValueText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::SetWidgetProperty(Z_Param_WidgetBlueprintPath,Z_Param_WidgetName,Z_Param_PropertyName,Z_Param_ValueText);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetWidgetProperty ************************

// ********** Begin Class URiderAgentBridgeLibrary Function SetWidgetSlotProperty ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms
	{
		FString WidgetBlueprintPath;
		FString WidgetName;
		FString PropertyName;
		FString ValueText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Widget" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWidgetSlotProperty constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetBlueprintPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueText;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWidgetSlotProperty constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWidgetSlotProperty Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WidgetBlueprintPath = { "WidgetBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms, WidgetBlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetBlueprintPath_MetaData), NewProp_WidgetBlueprintPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ValueText = { "ValueText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms, ValueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueText_MetaData), NewProp_ValueText_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetBlueprintPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWidgetSlotProperty Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "SetWidgetSlotProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventSetWidgetSlotProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execSetWidgetSlotProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetBlueprintPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_WidgetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ValueText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::SetWidgetSlotProperty(Z_Param_WidgetBlueprintPath,Z_Param_WidgetName,Z_Param_PropertyName,Z_Param_ValueText);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function SetWidgetSlotProperty ********************

// ********** Begin Class URiderAgentBridgeLibrary Function ShowNotification ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventShowNotification_Parms
	{
		FString Text;
		FString Type;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|Notify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Editor Notification \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Type", "info" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Editor Notification \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowNotification constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowNotification constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowNotification Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventShowNotification_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventShowNotification_Parms, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventShowNotification_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ShowNotification Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "ShowNotification", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventShowNotification_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventShowNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execShowNotification)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_PROPERTY(FStrProperty,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	URiderAgentBridgeLibrary::ShowNotification(Z_Param_Text,Z_Param_Type,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function ShowNotification *************************

// ********** Begin Class URiderAgentBridgeLibrary Function WriteCVar ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar_Statics
struct UHT_STATICS
{
	struct RiderAgentBridgeLibrary_eventWriteCVar_Parms
	{
		FString Name;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RiderAgentBridge|CVar" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteCVar constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RiderAgentBridgeLibrary_eventWriteCVar_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteCVar constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteCVar Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventWriteCVar_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(RiderAgentBridgeLibrary_eventWriteCVar_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RiderAgentBridgeLibrary_eventWriteCVar_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function WriteCVar Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URiderAgentBridgeLibrary, nullptr, "WriteCVar", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RiderAgentBridgeLibrary_eventWriteCVar_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RiderAgentBridgeLibrary_eventWriteCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URiderAgentBridgeLibrary::execWriteCVar)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URiderAgentBridgeLibrary::WriteCVar(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class URiderAgentBridgeLibrary Function WriteCVar ********************************

// ********** Begin Class URiderAgentBridgeLibrary *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URiderAgentBridgeLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Python-exposed editor helpers that fill gaps in Unreal's Python API.\n * Callable from Rider's ue_execute_python tool as:\n *   unreal.RiderAgentBridgeLibrary.method_name(args)\n * Editor-only. Runs on the game thread (the Python transport dispatches there).\n */" },
#endif
		{ "IncludePath", "RiderAgentBridgeLibrary.h" },
		{ "ModuleRelativePath", "Private/RiderAgentBridgeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Python-exposed editor helpers that fill gaps in Unreal's Python API.\nCallable from Rider's ue_execute_python tool as:\n  unreal.RiderAgentBridgeLibrary.method_name(args)\nEditor-only. Runs on the game thread (the Python transport dispatches there)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URiderAgentBridgeLibrary constinit property declarations *****************
// ********** End Class URiderAgentBridgeLibrary constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddBlueprintNode"), .Pointer = &URiderAgentBridgeLibrary::execAddBlueprintNode },
		{ .NameUTF8 = UTF8TEXT("AddBlueprintVariable"), .Pointer = &URiderAgentBridgeLibrary::execAddBlueprintVariable },
		{ .NameUTF8 = UTF8TEXT("AddWidgetToTree"), .Pointer = &URiderAgentBridgeLibrary::execAddWidgetToTree },
		{ .NameUTF8 = UTF8TEXT("ConnectBlueprintPins"), .Pointer = &URiderAgentBridgeLibrary::execConnectBlueprintPins },
		{ .NameUTF8 = UTF8TEXT("DuplicateAsset"), .Pointer = &URiderAgentBridgeLibrary::execDuplicateAsset },
		{ .NameUTF8 = UTF8TEXT("EnsureAsset"), .Pointer = &URiderAgentBridgeLibrary::execEnsureAsset },
		{ .NameUTF8 = UTF8TEXT("ExportBlueprintNodes"), .Pointer = &URiderAgentBridgeLibrary::execExportBlueprintNodes },
		{ .NameUTF8 = UTF8TEXT("ForceDeleteAsset"), .Pointer = &URiderAgentBridgeLibrary::execForceDeleteAsset },
		{ .NameUTF8 = UTF8TEXT("ForceDeleteAssets"), .Pointer = &URiderAgentBridgeLibrary::execForceDeleteAssets },
		{ .NameUTF8 = UTF8TEXT("GetAllBlueprintGraphs"), .Pointer = &URiderAgentBridgeLibrary::execGetAllBlueprintGraphs },
		{ .NameUTF8 = UTF8TEXT("GetBlueprintGraphNodes"), .Pointer = &URiderAgentBridgeLibrary::execGetBlueprintGraphNodes },
		{ .NameUTF8 = UTF8TEXT("GetCVarInfo"), .Pointer = &URiderAgentBridgeLibrary::execGetCVarInfo },
		{ .NameUTF8 = UTF8TEXT("GetNiagaraSystemEmitters"), .Pointer = &URiderAgentBridgeLibrary::execGetNiagaraSystemEmitters },
		{ .NameUTF8 = UTF8TEXT("GetNiagaraSystemParameters"), .Pointer = &URiderAgentBridgeLibrary::execGetNiagaraSystemParameters },
		{ .NameUTF8 = UTF8TEXT("ImportBlueprintNodes"), .Pointer = &URiderAgentBridgeLibrary::execImportBlueprintNodes },
		{ .NameUTF8 = UTF8TEXT("IsSuppressingModalDialogs"), .Pointer = &URiderAgentBridgeLibrary::execIsSuppressingModalDialogs },
		{ .NameUTF8 = UTF8TEXT("ListWidgetsInTree"), .Pointer = &URiderAgentBridgeLibrary::execListWidgetsInTree },
		{ .NameUTF8 = UTF8TEXT("ReadCVar"), .Pointer = &URiderAgentBridgeLibrary::execReadCVar },
		{ .NameUTF8 = UTF8TEXT("RemoveBlueprintNode"), .Pointer = &URiderAgentBridgeLibrary::execRemoveBlueprintNode },
		{ .NameUTF8 = UTF8TEXT("RemoveBlueprintVariable"), .Pointer = &URiderAgentBridgeLibrary::execRemoveBlueprintVariable },
		{ .NameUTF8 = UTF8TEXT("RemoveWidgetFromTree"), .Pointer = &URiderAgentBridgeLibrary::execRemoveWidgetFromTree },
		{ .NameUTF8 = UTF8TEXT("SetBlueprintVariableCategory"), .Pointer = &URiderAgentBridgeLibrary::execSetBlueprintVariableCategory },
		{ .NameUTF8 = UTF8TEXT("SetBlueprintVariableDefaultValue"), .Pointer = &URiderAgentBridgeLibrary::execSetBlueprintVariableDefaultValue },
		{ .NameUTF8 = UTF8TEXT("SetPinDefaultValue"), .Pointer = &URiderAgentBridgeLibrary::execSetPinDefaultValue },
		{ .NameUTF8 = UTF8TEXT("SetSuppressModalDialogs"), .Pointer = &URiderAgentBridgeLibrary::execSetSuppressModalDialogs },
		{ .NameUTF8 = UTF8TEXT("SetWidgetProperty"), .Pointer = &URiderAgentBridgeLibrary::execSetWidgetProperty },
		{ .NameUTF8 = UTF8TEXT("SetWidgetSlotProperty"), .Pointer = &URiderAgentBridgeLibrary::execSetWidgetSlotProperty },
		{ .NameUTF8 = UTF8TEXT("ShowNotification"), .Pointer = &URiderAgentBridgeLibrary::execShowNotification },
		{ .NameUTF8 = UTF8TEXT("WriteCVar"), .Pointer = &URiderAgentBridgeLibrary::execWriteCVar },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintNode, "AddBlueprintNode" }, // b8ca3a1751c78eac6e6b52f4a3b8f766a2b4632f
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_AddBlueprintVariable, "AddBlueprintVariable" }, // ef405cdd400315ad0a68b9cf818cff54ee2c77bf
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_AddWidgetToTree, "AddWidgetToTree" }, // dad1a54fc2b6d5535d18e3eaed3e0443b42cde49
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ConnectBlueprintPins, "ConnectBlueprintPins" }, // e3af92fd5be741a11fdadce5ea526b1db1e5a84f
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_DuplicateAsset, "DuplicateAsset" }, // ccc3af9151e053247b12e3ee874d174cd48170ef
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_EnsureAsset, "EnsureAsset" }, // a43f487981bfdbc0811e9fc88557b9115c988f7a
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ExportBlueprintNodes, "ExportBlueprintNodes" }, // dd61881aa39d67acd1ef8c7d95b18b5eb95b3232
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAsset, "ForceDeleteAsset" }, // 5fa3d48dc066024f5e5833c7f035c81ac5302faa
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ForceDeleteAssets, "ForceDeleteAssets" }, // 6ef6df46d46b1b6e6bdad10555a69f42f070255e
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_GetAllBlueprintGraphs, "GetAllBlueprintGraphs" }, // ffac8a588ccdcab20a5b701476bc242f17de7d94
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_GetBlueprintGraphNodes, "GetBlueprintGraphNodes" }, // 9ed30f2bcca574c0b51d7db115a791be933df013
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_GetCVarInfo, "GetCVarInfo" }, // fb59f9e19539dc27694fb8909983ee6750996df3
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemEmitters, "GetNiagaraSystemEmitters" }, // bcf13ddaccca1a9d03dc5c92e6f4fe2d63352cf7
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_GetNiagaraSystemParameters, "GetNiagaraSystemParameters" }, // 56f67bd45630aedc1b258c37048e0722574361ec
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ImportBlueprintNodes, "ImportBlueprintNodes" }, // f21e5cfbdbeb6207a1d32cc81b074525329d1034
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_IsSuppressingModalDialogs, "IsSuppressingModalDialogs" }, // a87ff49d7e3dbc51d5d9f8d4a11fad358f147534
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ListWidgetsInTree, "ListWidgetsInTree" }, // 6d030bda39b532b71466b69660bd504d3b032f87
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ReadCVar, "ReadCVar" }, // 80a2a8c315b2dc867d05ccb168d46fb4eb16f244
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintNode, "RemoveBlueprintNode" }, // e2044e8d968e707054cf3474575f6c0576b8ba24
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveBlueprintVariable, "RemoveBlueprintVariable" }, // 3fdad48f1b714899cc36bd65b633eff54aa62519
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_RemoveWidgetFromTree, "RemoveWidgetFromTree" }, // 4bdb553d635ea540f041efdf93d3574a161b0dd6
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableCategory, "SetBlueprintVariableCategory" }, // 6949c562798b8d09f05597ff1e696eef041c1690
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetBlueprintVariableDefaultValue, "SetBlueprintVariableDefaultValue" }, // c0e15daa9e4db18a0ae2d16f96cdee580f031bc1
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetPinDefaultValue, "SetPinDefaultValue" }, // 7db161451705d71d169eb89c8b74d5c87644700e
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetSuppressModalDialogs, "SetSuppressModalDialogs" }, // bf798a479d8f2714e0fcdbb934b81138d018033b
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetProperty, "SetWidgetProperty" }, // 7a6aba6b749ac92067c6d0229abcc2faca70f2bf
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_SetWidgetSlotProperty, "SetWidgetSlotProperty" }, // 25a9b2286f2e1520015849bb945ed01e19c304e5
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_ShowNotification, "ShowNotification" }, // 47a929e1a2e4c6ff7f4c3c53c6820eecd60cf04d
		{ &Z_Construct_UFunction_URiderAgentBridgeLibrary_WriteCVar, "WriteCVar" }, // fd64492e9ee6cc2b6884b111f38d1e7286194306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URiderAgentBridgeLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RiderAgentTools,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URiderAgentBridgeLibrary,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URiderAgentBridgeLibrary_StaticRegisterNativesURiderAgentBridgeLibrary()
{
	UClass* Class = URiderAgentBridgeLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URiderAgentBridgeLibrary;
UClass* Z_Construct_UClass_URiderAgentBridgeLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URiderAgentBridgeLibrary;
		if (!Z_Registration_Info_UClass_URiderAgentBridgeLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RiderAgentBridgeLibrary"),
				Z_Registration_Info_UClass_URiderAgentBridgeLibrary.InnerSingleton,
				URiderAgentBridgeLibrary_StaticRegisterNativesURiderAgentBridgeLibrary,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_URiderAgentBridgeLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URiderAgentBridgeLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URiderAgentBridgeLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URiderAgentBridgeLibrary.OuterSingleton;
}
#undef UHT_STATICS
URiderAgentBridgeLibrary::URiderAgentBridgeLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URiderAgentBridgeLibrary);
URiderAgentBridgeLibrary::~URiderAgentBridgeLibrary() {}
// ********** End Class URiderAgentBridgeLibrary ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h__Script_RiderAgentTools_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URiderAgentBridgeLibrary, TEXT("URiderAgentBridgeLibrary"), &Z_Registration_Info_UClass_URiderAgentBridgeLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URiderAgentBridgeLibrary), 524967416U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Soulslike_5_8_Plugins_Developer_RiderLink_Source_RiderAgentTools_Private_RiderAgentBridgeLibrary_h__Script_RiderAgentTools_8f73ee934452b2accf32a0dcad34828274e0a6e3{
	TEXT("/Script/RiderAgentTools"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
