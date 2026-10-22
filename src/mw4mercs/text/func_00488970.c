/*
 * FUN_00488970 (53 B) — Insert index into hash bucket.
 *
 * __thiscall (ECX = this), RET 0x04 (1 stack param: index).
 * Looks up a hash from a global table, then inserts the index into
 * a bucket array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int *DAT_007da7dc;

__declspec(naked) void __fastcall FUN_00488970(int param1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x08]
        test    esi, esi
        jl      l_done
        mov     edx, dword ptr [DAT_007da7dc]
        mov     edx, dword ptr [edx]
        mov     eax, esi
        shl     eax, 0x05
        mov     eax, dword ptr [eax + edx + 0x04]
        and     eax, 0x0f
        mov     edx, dword ptr [ecx + eax * 4 + 0x14]
        push    edi
        lea     edi, [edx + 0x01]
        mov     dword ptr [ecx + eax * 4 + 0x14], edi
        mov     eax, dword ptr [ecx + eax * 8 + 0x54]
        mov     dword ptr [eax + edx * 4], esi
        pop     edi
    l_done:
        pop     esi
        ret     0x04
    }
}
