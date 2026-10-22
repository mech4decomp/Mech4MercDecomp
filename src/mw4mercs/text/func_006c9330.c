/*
 * FUN_006C9330 — Bresenham-style line drawing dispatcher.
 *
 * __cdecl, RET 0x18.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

void __stdcall FUN_006c9430(int param_1, int param_2, int param_3);

__declspec(naked) void __stdcall func_006c9330(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp + 0x18]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        push    edi
        lea     edi, [eax * 4]
        lea     edx, [esi * 4]
        mov     eax, edi
        sub     eax, edx
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        push    ebp
        mov     dword ptr [esp + 0x18], edi
        push    ebx
        mov     dword ptr [esp + 0x20], ecx
        sub     edi, esi
        call    FUN_006c9430
        mov     ecx, esi
        dec     esi
        test    ecx, ecx
        jz      L_done
        inc     esi
    L_loop:
        test    edi, edi
        jl      L_neg
        mov     eax, dword ptr [esp + 0x28]
        inc     ebp
        jmp     L_cont
    L_neg:
        mov     eax, dword ptr [esp + 0x10]
    L_cont:
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x2c]
        push    edx
        add     ebx, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    ebp
        push    ebx
        add     edi, eax
        call    FUN_006c9430
        dec     esi
        jnz     L_loop
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x18
    }
}
