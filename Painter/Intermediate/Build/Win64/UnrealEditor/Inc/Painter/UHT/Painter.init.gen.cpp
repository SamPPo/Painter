// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePainter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Painter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Painter()
	{
		if (!Z_Registration_Info_UPackage__Script_Painter.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Painter",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x2581CBDE,
				0xA9F41B90,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Painter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Painter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Painter(Z_Construct_UPackage__Script_Painter, TEXT("/Script/Painter"), Z_Registration_Info_UPackage__Script_Painter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2581CBDE, 0xA9F41B90));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
