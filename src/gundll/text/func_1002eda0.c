/*
 * FUN_1002eda0 (197 B) - __thiscall, RET 0x4. State-machine: queries
 * FUN_1002e750, validates against 6/8, appends to an array at +0x34/+0x234
 * indexed by +0x434, and reports errors via FUN_1002e3a0.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e750(void); /* __thiscall(0) rel32 call */
extern void __cdecl FUN_1002e3a0(void); /* __thiscall(1) rel32 call */

__declspec(naked) void FUN_1002eda0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        push    edi
        mov     esi, ecx
        jnz     L_edb4
        call    FUN_1002e750
        mov     dword ptr [esi + 0x24], eax
L_edb4:
        cmp     eax, 6
        mov     ecx, esi
        jz      L_edcc
        push    0xc1121c00
        call    FUN_1002e3a0
        mov     edi, eax
        pop     edi
        pop     esi
        ret     4
L_edcc:
        call    FUN_1002e750
        cmp     eax, 8
        mov     dword ptr [esi + 0x24], eax
        jz      L_edec
        push    0xc1121c00
        mov     ecx, esi
        call    FUN_1002e3a0
        mov     edi, eax
        pop     edi
        pop     esi
        ret     4
L_edec:
        mov     ecx, dword ptr [esi + 0x434]
        mov     edi, dword ptr [esi + 0x30]
        xor     eax, eax
        cmp     ecx, 0x7e
        push    ebx
        mov     ebx, dword ptr [esi + 0x2c]
        jc      L_ee10
        push    0xc1121c01
        mov     ecx, esi
        call    FUN_1002e3a0
        test    eax, eax
        jl      L_ee2d
L_ee10:
        mov     ecx, dword ptr [esi + 0x434]
        mov     dword ptr [esi + ecx*4 + 0x34], ebx
        mov     edx, dword ptr [esi + 0x434]
        mov     dword ptr [esi + edx*4 + 0x234], edi
        inc     dword ptr [esi + 0x434]
L_ee2d:
        test    eax, eax
        mov     edi, eax
        pop     ebx
        jl      L_ee5e
        mov     ecx, esi
        call    FUN_1002e750
        cmp     eax, 6
        mov     dword ptr [esi + 0x24], eax
        mov     ecx, esi
        jz      L_ee56
        push    0xc1121c00
        call    FUN_1002e3a0
        mov     edi, eax
        pop     edi
        pop     esi
        ret     4
L_ee56:
        call    FUN_1002e750
        mov     dword ptr [esi + 0x24], eax
L_ee5e:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
    }
}
