/*
 * FUN_005CC8C0 (32 B) — Returns a float constant based on a comparison.
 *
 * Calls FUN_00415020() to get a value; if it is less than the float at
 * 0x0076d070, returns the float at 0x0076d064, else the float at 0x0076d598.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float __cdecl FUN_00415020(void);

__declspec(naked) void FUN_005cc8c0(void)
{
    

extern int DAT_0076d070;
extern int DAT_0076d064;
extern int DAT_0076d598;
__asm {
call    FUN_00415020
        fcomp dword ptr [DAT_0076d070]
        fnstsw ax
        test    ah, 1
        jz      l_else
        fld dword ptr [DAT_0076d064]
        ret
    l_else:
        fld dword ptr [DAT_0076d598]
        ret
    }


}
