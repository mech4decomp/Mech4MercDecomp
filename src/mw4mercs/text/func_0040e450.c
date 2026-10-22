/*
 * FUN_0040e450 (67 B) — __thiscall helper in the loader region. RET 0x4
 * (1 stack param + this in ECX). Walks a linked list at this+0x44 and calls
 * FUN_00411940 for each node whose key differs from FUN_0040ecc0(&DAT_0076b768).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_76b768[];
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411940(void);

__declspec(naked) void FUN_0040e450(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    offset g_76b768
        call    FUN_0040ecc0
        mov     ebx, dword ptr [esp+0x10]
        mov     edi, eax
        test    edi, edi
        jz      L_e471
        push    ebx
        mov     ecx, edi
        call    FUN_00411940
L_e471:
        mov     esi, dword ptr [esi+0x44]
L_e474:
        test    esi, esi
        jz      L_e48d
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+4]
        jz      L_e48d
        cmp     ecx, edi
        jz      L_e474
        push    ebx
        call    FUN_00411940
        jmp     L_e474
L_e48d:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
