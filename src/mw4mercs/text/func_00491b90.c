/*
 * FUN_00491b90 (30 B) — __thiscall, RET 4 (1 stack param).
 * Destructor wrapper: calls FUN_00491c80 then optionally frees.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00491c80(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __fastcall FUN_00491b90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00491c80
        test    byte ptr [esp + 0x8], 0x1
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
