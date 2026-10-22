/*
 * FUN_005d71f0 (30 B) — __thiscall (ECX = this, 1 stack param, RET 0x4).
 * Calls FUN_005d7b50 (dtor), and if (param & 1) frees this via
 * FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_005d7b50(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void *__fastcall FUN_005d71f0(int param1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005d7b50
        test    byte ptr [esp + 0x8], 0x1
        jz      l_208
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    l_208:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
