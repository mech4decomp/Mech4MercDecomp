/*
 * FUN_004A2C40 (17 B) — __fastcall: clears bit 1 at *(*(ecx+0xf4)+0x18),
 *   then jumps to FUN_00494960.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00494960(void);

__declspec(naked) void __fastcall FUN_004a2c40(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xf4]
        mov     eax, dword ptr [eax + 0x18]
        and     byte ptr [eax], 0xfd
        jmp     FUN_00494960
    }
}
