/*
 * FUN_004AA420 (30 B) — __thiscall init + conditional delete.
 *   Calls FUN_004AA470 (init), then optionally deletes this via FUN_004084E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004aa470(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_004aa420(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004aa470
        test    byte ptr [esp + 8], 1
        jz      l_skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
