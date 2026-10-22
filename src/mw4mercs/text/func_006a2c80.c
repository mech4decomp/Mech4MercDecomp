/*
 * FUN_006A2C80 (56 B) — Destructor (__thiscall, RET 4).
 *
 * Calls FUN_006A22E0 on sub-objects at this+0x28, +0x1c, +0xc, and this,
 * then optionally frees this if param & 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_006a22e0(void *this);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void __fastcall FUN_006a2c80(void *this, int param)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x28]
        call    FUN_006a22e0
        lea     ecx, [esi + 0x1c]
        call    FUN_006a22e0
        lea     ecx, [esi + 0xc]
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_006a22e0
        test    byte ptr [esp + 8], 1
        jz      l_return
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_return:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
