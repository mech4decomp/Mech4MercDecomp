/*
 * FUN_00496200 (30 B) — __thiscall (ECX = this), RET 0x4.
 * Dtor: calls FUN_00496220(), then optionally frees via FUN_004084e0.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_00496220(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_00496200(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00496220
        test    byte ptr [esp + 0x08], 0x01
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     0x04
    }
}
