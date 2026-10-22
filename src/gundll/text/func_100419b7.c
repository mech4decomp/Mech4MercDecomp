/*
 * FUN_100419b7 (137 B) - __cdecl. Translates a set of flag bits into a
 * different flag encoding.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_100419b7(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        xor     eax, eax
        push    esi
        test    bl, 0x10
        jz      L_c7
        push    0x1
        pop     eax
    L_c7:
        test    bl, 0x8
        jz      L_ce
        or      al, 0x4
    L_ce:
        test    bl, 0x4
        jz      L_d5
        or      al, 0x8
    L_d5:
        test    bl, 0x2
        jz      L_dc
        or      al, 0x10
    L_dc:
        test    bl, 0x1
        jz      L_e3
        or      al, 0x20
    L_e3:
        test    ebx, 0x80000
        jz      L_ed
        or      al, 0x2
    L_ed:
        mov     ecx, ebx
        mov     edx, 0x300
        and     ecx, edx
        mov     esi, 0x200
        jz      L_1a
        cmp     ecx, 0x100
        jz      L_17
        cmp     ecx, esi
        jz      L_12
        cmp     ecx, edx
        jnz     L_1a
        or      ah, 0xc
        jmp     L_1a
    L_12:
        or      ah, 0x8
        jmp     L_1a
    L_17:
        or      ah, 0x4
    L_1a:
        mov     ecx, ebx
        and     ecx, 0x30000
        jz      L_30
        cmp     ecx, 0x10000
        jnz     L_32
        or      eax, esi
        jmp     L_32
    L_30:
        or      eax, edx
    L_32:
        pop     esi
        test    ebx, 0x40000
        pop     ebx
        jz      L_3f
        or      ah, 0x10
    L_3f:
        ret
    }
}
