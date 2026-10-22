/*
 * FUN_00495180 (30 B) — __thiscall, RET 4 (1 stack param).
 * Destructor wrapper: calls FUN_004951a0 then optionally frees.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004951a0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __fastcall FUN_00495180(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004951a0
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
