/*
 * FUN_006F2FC0 (46 B) — Calls FUN_0041fd80(this+0x60). If non-zero,
 * calls FUN_0041fd80 again and stores result in *param_1. Else stores 0.
 * RET 4.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Disassembly:
 *   56                   push    esi
 *   8D 71 60             lea     esi, [ecx + 0x60]
 *   8B CE                mov     ecx, esi
 *   E8 B5 CD D2 FF       call    0x0041fd80
 *   85 C0                test    eax, eax
 *   74 11                jz      zero
 *   8B CE                mov     ecx, esi
 *   E8 AA CD D2 FF       call    0x0041fd80
 *   8B 4C 24 08          mov     ecx, dword ptr [esp + 8]
 *   89 01                mov     dword ptr [ecx], eax
 *   5E                   pop     esi
 *   C2 04 00             ret     4
 *   8B 54 24 08          mov     edx, dword ptr [esp + 8]
 *   C7 02 00 00 00 00    mov     dword ptr [edx], 0
 *   5E                   pop     esi
 *   C2 04 00             ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

int __fastcall FUN_0041fd80(int);

__declspec(naked) void __stdcall FUN_006f2fc0(int *param_1)
{
    __asm {
        push    esi
        lea     esi, [ecx + 0x60]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      zero
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        pop     esi
        ret     4
zero:
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edx], 0
        pop     esi
        ret     4
    }
}
