/*
 * FUN_10039ba7 (582 B) — __cdecl.
 * Locale-string table parser: guarded by a spinlock on 0x10076a8c,
 * parses "LC_*" category strings and fills the 0x10051d74 table.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076a88;
extern unsigned int g_10076a8c;
extern void *g_10049090;   /* IAT: Sleep */
extern unsigned int g_10051d74;
extern void FUN_10039b19(void);
extern void FUN_10039b7a(void);
extern void FUN_10039ded(void);
extern void FUN_1003fd90(void);
extern void FUN_1003d130(void);
extern void FUN_1003c5f0(void);
extern void FUN_1003fd50(void);
extern void FUN_10037f30(void);
extern void FUN_10039fc1(void);
extern void FUN_1003eb10(void);
extern void FUN_10039f08(void);
extern void FUN_1003c2dc(void);

__declspec(naked) void FUN_10039ba7(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x88
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 8]
        xor     ebx, ebx
        cmp     esi, ebx
        jl      L_ret0
        cmp     esi, 5
        jg      L_ret0
        push    0x13
        call    FUN_10039b19
        inc     dword ptr [g_10076a88]
        pop     ecx
    L_spin:
        cmp     dword ptr [g_10076a8c], ebx
        jz      L_after_spin
        push    1
        call    dword ptr [g_10049090]
        jmp     L_spin
    L_after_spin:
        cmp     esi, ebx
        push    edi
        jz      L_param2
        cmp     dword ptr [ebp + 0xc], ebx
        jz      L_esi_table
        push    dword ptr [ebp + 0xc]
        push    esi
        call    FUN_10039ded
        pop     ecx
        pop     ecx
        jmp     L_dd2
    L_esi_table:
        lea     eax, [esi + esi*2]
        mov     esi, dword ptr [eax*4 + g_10051d74]
        jmp     L_dd4
    L_param2:
        mov     edi, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 4], 1
        cmp     edi, ebx
        mov     dword ptr [ebp + 8], ebx
        jz      L_dcd
        cmp     byte ptr [edi], 0x4c
        jnz     L_d44
        cmp     byte ptr [edi + 1], 0x43
        jnz     L_d44
        cmp     byte ptr [edi + 2], 0x5f
        jnz     L_d44
        push    0x1004b704
        push    edi
        call    FUN_1003fd90
        mov     esi, eax
        pop     ecx
        cmp     esi, ebx
        pop     ecx
        jz      L_d24
        jmp     L_c5e
    L_c5c:
        xor     ebx, ebx
    L_c5e:
        mov     eax, esi
        sub     eax, edi
        mov     dword ptr [ebp - 4], eax
        jz      L_d24
        cmp     byte ptr [esi], 0x3b
        jz      L_d24
        mov     dword ptr [ebp + 0xc], 1
        mov     ebx, 0x10051d7c
        jmp     L_c85
    L_c82:
        mov     eax, dword ptr [ebp - 4]
    L_c85:
        push    eax
        push    edi
        push    dword ptr [ebx]
        call    FUN_1003d130
        add     esp, 0xc
        test    eax, eax
        jnz     L_ca2
        push    dword ptr [ebx]
        call    FUN_1003c5f0
        cmp     dword ptr [ebp - 4], eax
        pop     ecx
        jz      L_cb0
    L_ca2:
        inc     dword ptr [ebp + 0xc]
        add     ebx, 0xc
        cmp     ebx, 0x10051dac
        jle     L_c82
    L_cb0:
        inc     esi
        push    0x1004b700
        push    esi
        call    FUN_1003fd50
        mov     edi, eax
        pop     ecx
        test    edi, edi
        pop     ecx
        jnz     L_cc9
        cmp     byte ptr [esi], 0x3b
        jnz     L_d24
    L_cc9:
        cmp     dword ptr [ebp + 0xc], 5
        jg      L_cfe
        push    edi
        lea     eax, [ebp - 0x88]
        push    esi
        push    eax
        call    FUN_10037f30
        and     byte ptr [ebp + edi - 0x88], 0
        lea     eax, [ebp - 0x88]
        push    eax
        push    dword ptr [ebp + 0xc]
        call    FUN_10039ded
        add     esp, 0x14
        test    eax, eax
        jz      L_cfe
        inc     dword ptr [ebp + 8]
    L_cfe:
        add     edi, esi
        cmp     byte ptr [edi], 0
        jz      L_d33
        inc     edi
        cmp     byte ptr [edi], 0
        jz      L_d33
        push    0x1004b704
        push    edi
        call    FUN_1003fd90
        mov     esi, eax
        pop     ecx
        test    esi, esi
        pop     ecx
        jnz     L_c5c
        xor     ebx, ebx
    L_d24:
        push    0x13
        call    FUN_10039b7a
        pop     ecx
        xor     esi, esi
        jmp     L_ddc
    L_d33:
        cmp     dword ptr [ebp + 8], 0
    L_d37:
        jnz     L_dcd
        xor     esi, esi
        jmp     L_dd4
    L_d44:
        push    ebx
        push    ebx
        lea     eax, [ebp - 0x88]
        push    ebx
        push    eax
        push    edi
        call    FUN_10039fc1
        mov     esi, eax
        add     esp, 0x14
        cmp     esi, ebx
        jz      L_dd4
        mov     esi, 0x10051d74
        mov     edi, esi
    L_d64:
        cmp     edi, esi
        jz      L_d97
        push    dword ptr [edi]
        lea     eax, [ebp - 0x88]
        push    eax
        call    FUN_1003eb10
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_d94
        lea     eax, [ebp - 0x88]
        push    eax
        push    ebx
        call    FUN_10039ded
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_d94
        and     dword ptr [ebp - 4], eax
        jmp     L_d97
    L_d94:
        inc     dword ptr [ebp + 8]
    L_d97:
        add     edi, 0xc
        inc     ebx
        cmp     edi, 0x10051db0
        jle     L_d64
        xor     edi, edi
        cmp     dword ptr [ebp - 4], edi
        jz      L_dc5
        call    FUN_10039f08
        push    dword ptr [g_10051d74]
        mov     esi, eax
        call    FUN_1003c2dc
        pop     ecx
        mov     dword ptr [g_10051d74], edi
        jmp     L_dd4
    L_dc5:
        cmp     dword ptr [ebp + 8], edi
        jmp     L_d37
    L_dcd:
        call    FUN_10039f08
    L_dd2:
        mov     esi, eax
    L_dd4:
        push    0x13
        call    FUN_10039b7a
        pop     ecx
    L_ddc:
        dec     dword ptr [g_10076a88]
        mov     eax, esi
        pop     edi
        jmp     L_de9
    L_ret0:
        xor     eax, eax
    L_de9:
        pop     esi
        pop     ebx
        leave
        ret
    }
}
