/*
 * FUN_005f8ec0 (15 B) -- __stdcall, 2 stack params, plain RET.
 * Forwards param_1 to FUN_005f8ed0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_005f8ed0(void *param);

__declspec(naked) void __stdcall FUN_005f8ec0(void *param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        push    eax
        call    FUN_005f8ed0
        ret
    }
}
