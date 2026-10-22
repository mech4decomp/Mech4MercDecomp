/*
 * FUN_004A6E40 (30 B) — __thiscall init + conditional delete.
 *   Calls FUN_004A6EA0 (init), then optionally deletes this via FUN_004084E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004a6ea0(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_004a6e40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004a6ea0
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
