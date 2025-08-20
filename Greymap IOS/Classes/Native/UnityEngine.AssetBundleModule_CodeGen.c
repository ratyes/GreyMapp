#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile_Internal(System.String,System.UInt32,System.UInt64)
extern void AssetBundle_LoadFromFile_Internal_mC5A549D462272D3E202D62CF295BDAF44F4E4B7C (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
extern void AssetBundle_LoadFromFile_mE9B8D7BC74F2F67AE710881EFBBB541E8A8F6B3A (void);
// 0x00000004 System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern void AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66 (void);
// 0x00000005 System.String[] UnityEngine.AssetBundle::GetAllScenePaths()
extern void AssetBundle_GetAllScenePaths_mFE0D5927A3BEEC04BDB62FA436FA9051299B7BC6 (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71,
	AssetBundle_LoadFromFile_Internal_mC5A549D462272D3E202D62CF295BDAF44F4E4B7C,
	AssetBundle_LoadFromFile_mE9B8D7BC74F2F67AE710881EFBBB541E8A8F6B3A,
	AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66,
	AssetBundle_GetAllScenePaths_mFE0D5927A3BEEC04BDB62FA436FA9051299B7BC6,
};
static const int32_t s_InvokerIndices[5] = 
{
	4285,
	5307,
	6395,
	3353,
	4219,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AssetBundleModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	5,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_AssetBundleModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
