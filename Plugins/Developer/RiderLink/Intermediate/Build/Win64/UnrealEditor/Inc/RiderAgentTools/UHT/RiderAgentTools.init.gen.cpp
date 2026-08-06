// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRiderAgentTools_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RiderAgentTools;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RiderAgentTools(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_RiderAgentTools.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/RiderAgentTools",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000040,
			0x132458FE,
			0xF8D5BA08,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RiderAgentTools.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_RiderAgentTools.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RiderAgentTools(Z_Construct_UPackage__Script_RiderAgentTools, TEXT("/Script/RiderAgentTools"), Z_Registration_Info_UPackage__Script_RiderAgentTools, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x132458FE, 0xF8D5BA08));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
