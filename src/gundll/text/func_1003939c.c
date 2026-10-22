/*
 * FUN_1003939c (93 B) - __cdecl. Compares two objects (param_1, param_2) by
 * string at +8 (via FUN_1003eb10) and by flag bits against param_3; returns
 * 1 if equal/compatible, else 0.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003eb10(void);   /* rel32 call (strcmp) */

__declspec(naked) void __cdecl FUN_1003939c(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [edi + 4]
        test    eax, eax
        jz      L_f3
        cmp     byte ptr [eax + 8], 0
        lea     edx, [eax + 8]
        jz      L_f3
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 4]
        cmp     eax, ecx
        jz      L_cd
        add     ecx, 8
        push    ecx
        push    edx
        call    FUN_1003eb10
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_ef
L_cd:
        test    byte ptr [esi], 2
        jz      L_d7
        test    byte ptr [edi], 8
        jz      L_ef
L_d7:
        mov     eax, dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax]
        test    al, 1
        jz      L_e6
        test    byte ptr [edi], 1
        jz      L_ef
L_e6:
        test    al, 2
        jz      L_f3
        test    byte ptr [edi], 2
        jnz     L_f3
L_ef:
        xor     eax, eax
        jmp     L_f6
L_f3:
        push    1
        pop     eax
L_f6:
        pop     edi
        pop     esi
        ret
    }
}
