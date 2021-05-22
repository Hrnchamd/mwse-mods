#define LUA_LIB

extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>



// patchCloudVertexColours
// Set cloud vertex colour to fog colour, instead of using fog blended with another colour.
// Allows cloud colour to be adjusted near full black.
extern "C" int patchCloudVertexColours(lua_State* L) {
	void* address = reinterpret_cast<void*>(0x43EE81);
	unsigned char patch[] = {
		0x8D, 0x86, 0x9C, 0, 0, 0,		// lea eax, [esi+fogCol]
		0x50,							// push eax
		0x8D, 0x4C, 0x24, 0x20,			// lea eax, [esp+finalCol]
		0xEB, 0x20						// jmp $+0x20
	};

	DWORD oldProtect;
	VirtualProtect(address, sizeof(patch), PAGE_READWRITE, &oldProtect);
	memcpy(address, patch, sizeof(patch));
	VirtualProtect(address, sizeof(patch), oldProtect, &oldProtect);

	lua_pushboolean(L, true);
	return 1;
}

static const struct luaL_Reg functions[] = {
	{ "patchCloudVertexColours", patchCloudVertexColours },
	{ NULL, NULL }
};

// MWSE mod registration

extern "C" int __declspec(dllexport) luaopen_hrnchamd_weatheradjust_WeatherPatch(lua_State* L) {
	luaL_register(L, "WeatherPatch", functions);
	return 1;
}

extern "C" int __declspec(dllexport) luaopen_weatheradjust_WeatherPatch(lua_State* L) {
	luaL_register(L, "WeatherPatch", functions);
	return 1;
}
