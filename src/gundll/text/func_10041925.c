/*
 * FUN_10041925 (146 B) - __cdecl.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_10041925(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        xor     eax, eax
        push    ebp
        test    bl, 1
        push    edi
        jz      L_36
        push    0x10
        pop     eax
L_36:
        test    bl, 4
        jz      L_3d
        or      al, 8
L_3d:
        test    bl, 8
        jz      L_44
        or      al, 4
L_44:
        test    bl, 0x10
        jz      L_4b
        or      al, 2
L_4b:
        test    bl, 0x20
        jz      L_52
        or      al, 1
L_52:
        test    bl, 2
        jz      L_5c
        or      eax, 0x80000
L_5c:
        movzx   ecx, bx
        push    esi
        mov     edx, ecx
        mov     esi, 0xc00
        mov     edi, 0x300
        and     edx, esi
        mov     ebp, 0x200
        jz      L_94
        cmp     edx, 0x400
        jz      L_91
        cmp     edx, 0x800
        jz      L_8d
        cmp     edx, esi
        jnz     L_94
        or      eax, edi
        jmp     L_94
L_8d:
        or      eax, ebp
        jmp     L_94
L_91:
        or      ah, 1
L_94:
        and     ecx, edi
        pop     esi
        jz      L_a4
        cmp     ecx, ebp
        jnz     L_a9
        or      eax, 0x10000
        jmp     L_a9
L_a4:
        or      eax, 0x20000
L_a9:
        pop     edi
        pop     ebp
        test    bh, 0x10
        pop     ebx
        jz      L_b6
        or      eax, 0x40000
L_b6:
        ret
    }
}
