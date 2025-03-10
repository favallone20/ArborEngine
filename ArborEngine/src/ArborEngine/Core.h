#pragma once

#ifdef AE_PLATFORM_WINDOWS
	#ifdef AE_BUILD_DLL
		#define ARBOR_API __declspec(dllexport)
	#else
		#define ARBOR_API __declspec(dllimport)
	#endif
#else
	#error ArborEngine only supports Windows!
#endif