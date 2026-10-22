/*
 * FUN_00481900 (61 B) — Refcounted pointer setter.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: int new_ptr).
 * Releases old refcounted pointer at this+0x8C, assigns new one,
 * increments its refcount, sets flag bit 0x40 in this+0x78.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_00481900(void *this, int new_ptr)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x8c]
        test    ecx, ecx
        jz      l_assign
        dec     dword ptr [ecx + 8]
        jnz     l_assign
        test    ecx, ecx
        jz      l_assign
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_assign:
        mov     eax, dword ptr [esp + 8]     ; new_ptr
        test    eax, eax
        mov     dword ptr [esi + 0x8c], eax
        jnz     l_increment
        and     dword ptr [esi + 0x78], 0xffffffbf
        pop     esi
        ret     4
    l_increment:
        inc     dword ptr [eax + 8]
        or      dword ptr [esi + 0x78], 0x40
        pop     esi
        ret     4
    }
}
