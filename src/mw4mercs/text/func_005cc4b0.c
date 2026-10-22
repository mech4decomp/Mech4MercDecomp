/*
 * FUN_005cc4b0 (90 B) — __thiscall method (RET 8, 2 params). If
 *   [this+0x1e4] == 0x40000000, checks a flag via FUN_0041fd80 and calls a
 *   virtual at vtable+0x88, then calls FUN_004dae60(param_1, param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_0041fd80(void);
extern void FUN_004dae60(void);

__declspec(naked) void FUN_005cc4b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi + 0x1e4], 0x40000000
        push    edi
        jnz     l_4f4
        lea     edi, [esi + 0x1c8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_4f4
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, [eax + 0x10]
        shr     eax, 0x13
        test    al, 1
        jz      l_4f4
        mov     ecx, [esi + 0x314]
        mov     edx, [ecx]
        push    0
        push    3
        call    dword ptr [edx + 0x88]

    l_4f4:
        mov     eax, [esp + 0x10]
        mov     ecx, [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004dae60
        pop     edi
        pop     esi
        ret     8
    }
}
