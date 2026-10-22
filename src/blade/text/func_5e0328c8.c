/*
 * FUN_5e0328c8 (1007 B) - format-specifier dispatcher. Decodes a single
 * format char (param_1) and emits the corresponding localized string via
 * FUN_5e032cb7 / FUN_5e032cde / FUN_5e032d96, using the string-table
 * structure at param_5 and the DAT_5e77abd8 '#' flag.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77abd8;   /* DAT_5e77abd8 ('#' flag) */
extern int g_5e77abdc;   /* DAT_5e77abdc */
extern int g_5e03a408;   /* PTR_DAT_5e03a408 (string table) */

extern void __cdecl FUN_5e032cde(int, int, int, int);
extern void __cdecl FUN_5e032d96(int, int, int, int, int);
extern void __cdecl FUN_5e032cb7(int, int, int);
extern void __cdecl FUN_5e033831(void);

__declspec(naked) void FUN_5e0328c8(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        movsx   eax, byte ptr [ebp+0x8]
        push    ebx
        push    esi
        cmp     eax, 0x5a
        push    edi
        jg      L2aaa
        jz      L2be6
        cmp     eax, 0x4d
        jg      L29b2
        jz      L2998
        sub     eax, 0x25
        jz      L2984
        sub     eax, 0x1c
        jz      L296c
        dec     eax
        jz      L2954
        sub     eax, 0x6
        jz      L2937
        dec     eax
        jnz     L2cb2
        mov     eax, dword ptr [g_5e77abd8]
        push    0xc
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        pop     ecx
        mov     eax, dword ptr [eax+0x8]
        cdq
        idiv    ecx
        test    edx, edx
        jnz     L2929
        push    ecx
        pop     edx
    L2929:
        push    dword ptr [ebp+0x14]
        push    dword ptr [ebp+0x10]
        push    0x2
    L2931:
        push    edx
        jmp     L2a04
    L2937:
        push    dword ptr [ebp+0x14]
        mov     eax, dword ptr [g_5e77abd8]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x10]
        push    0x2
        push    dword ptr [eax+0x8]
        jmp     L2a04
    L2954:
        push    dword ptr [ebp+0x14]
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [ebp+0x18]
        push    dword ptr [ebp+0x10]
        mov     eax, dword ptr [eax+0x10]
        push    dword ptr [ecx+eax*4+0x68]
        jmp     L2caa
    L296c:
        push    dword ptr [ebp+0x14]
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [ebp+0x18]
        push    dword ptr [ebp+0x10]
        mov     eax, dword ptr [eax+0x18]
        push    dword ptr [ecx+eax*4+0x1c]
        jmp     L2caa
    L2984:
        mov     eax, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [eax]
        mov     byte ptr [ecx], 0x25
        inc     dword ptr [eax]
        mov     eax, dword ptr [ebp+0x14]
        dec     dword ptr [eax]
        jmp     L2cb2
    L2998:
        push    dword ptr [ebp+0x14]
        mov     eax, dword ptr [g_5e77abd8]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x10]
        push    0x2
        push    dword ptr [eax+0x4]
        jmp     L2a04
    L29b2:
        sub     eax, 0x53
        jz      L2a8e
        dec     eax
        dec     eax
        jz      L2a4e
        dec     eax
        dec     eax
        jz      L2a30
        dec     eax
        jz      L2a11
        dec     eax
        jnz     L2cb2
        mov     eax, dword ptr [g_5e77abd8]
        push    dword ptr [ebp+0x14]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x10]
        mov     ecx, dword ptr [eax+0x14]
        push    0x4
        mov     eax, ecx
        push    0x64
        cdq
        pop     esi
        idiv    esi
        push    0x64
        mov     esi, eax
        mov     eax, ecx
        cdq
        pop     ecx
        add     esi, 0x13
        idiv    ecx
        imul    esi, esi, 0x64
        add     esi, edx
        push    esi
    L2a04:
        call    FUN_5e032cde
        add     esp, 0x10
        jmp     L2cb2
    L2a11:
        mov     eax, dword ptr [ebp+0x18]
        and     dword ptr [g_5e77abd8], 0
        push    eax
        push    dword ptr [ebp+0x14]
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        push    dword ptr [eax+0xa8]
        jmp     L2c4e
    L2a30:
        mov     eax, dword ptr [g_5e77abd8]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [eax+0x18]
        test    ecx, ecx
        jnz     L2a49
        push    0x6
        pop     esi
        jmp     L2a5e
    L2a49:
        lea     esi, [ecx-0x1]
        jmp     L2a5e
    L2a4e:
        mov     eax, dword ptr [g_5e77abd8]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        mov     esi, dword ptr [eax+0x18]
    L2a5e:
        mov     ecx, dword ptr [eax+0x1c]
        cmp     ecx, esi
        jge     L2a69
        xor     edi, edi
        jmp     L2a80
    L2a69:
        mov     eax, ecx
        push    0x7
        cdq
        pop     edi
        idiv    edi
        push    0x7
        mov     edi, eax
        mov     eax, ecx
        cdq
        pop     ecx
        idiv    ecx
        cmp     edx, esi
        jl      L2a80
        inc     edi
    L2a80:
        push    dword ptr [ebp+0x14]
        push    dword ptr [ebp+0x10]
        push    0x2
        push    edi
        jmp     L2a04
    L2a8e:
        push    dword ptr [ebp+0x14]
        mov     eax, dword ptr [g_5e77abd8]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x10]
        push    0x2
        push    dword ptr [eax]
        jmp     L2a04
    L2aaa:
        cmp     eax, 0x6d
        jg      L2bc7
        jz      L2baa
        sub     eax, 0x61
        jz      L2b93
        dec     eax
        jz      L2b7b
        dec     eax
        jz      L2b14
        dec     eax
        jz      L2af7
        sub     eax, 0x6
        jnz     L2cb2
        mov     eax, dword ptr [g_5e77abd8]
        push    dword ptr [ebp+0x14]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x10]
        mov     eax, dword ptr [eax+0x1c]
        push    0x3
    L2af0:
        inc     eax
        push    eax
        jmp     L2a04
    L2af7:
        push    dword ptr [ebp+0x14]
        mov     eax, dword ptr [g_5e77abd8]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x10]
        push    0x2
        push    dword ptr [eax+0xc]
        jmp     L2a04
    L2b14:
        cmp     dword ptr [g_5e77abd8], 0
        jz      L2b3b
        mov     ebx, dword ptr [ebp+0x18]
        mov     esi, dword ptr [ebp+0x14]
        mov     edi, dword ptr [ebp+0x10]
        and     dword ptr [g_5e77abd8], 0
        push    ebx
        push    esi
        push    edi
        push    dword ptr [ebp+0xc]
        push    dword ptr [ebx+0xa4]
        jmp     L2b50
    L2b3b:
        mov     ebx, dword ptr [ebp+0x18]
        mov     esi, dword ptr [ebp+0x14]
        mov     edi, dword ptr [ebp+0x10]
        push    ebx
        push    esi
        push    edi
        push    dword ptr [ebp+0xc]
        push    dword ptr [ebx+0xa0]
    L2b50:
        call    FUN_5e032d96
        add     esp, 0x14
        cmp     dword ptr [esi], 0
        jz      L2cb2
        mov     eax, dword ptr [edi]
        push    ebx
        push    esi
        push    edi
        push    dword ptr [ebp+0xc]
        mov     byte ptr [eax], 0x20
        inc     dword ptr [edi]
        dec     dword ptr [esi]
        push    dword ptr [ebx+0xa8]
        jmp     L2c4e
    L2b7b:
        push    dword ptr [ebp+0x14]
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [ebp+0x18]
        push    dword ptr [ebp+0x10]
        mov     eax, dword ptr [eax+0x10]
        push    dword ptr [ecx+eax*4+0x38]
        jmp     L2caa
    L2b93:
        push    dword ptr [ebp+0x14]
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [ebp+0x18]
        push    dword ptr [ebp+0x10]
        mov     eax, dword ptr [eax+0x18]
        push    dword ptr [ecx+eax*4]
        jmp     L2caa
    L2baa:
        mov     eax, dword ptr [g_5e77abd8]
        push    dword ptr [ebp+0x14]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x10]
        mov     eax, dword ptr [eax+0x10]
        push    0x2
        jmp     L2af0
    L2bc7:
        sub     eax, 0x70
        jz      L2c8a
        sub     eax, 0x7
        jz      L2c6d
        dec     eax
        jz      L2c2b
        dec     eax
        jz      L2c08
        dec     eax
        jnz     L2cb2
    L2be6:
        call    FUN_5e033831
        mov     ecx, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x14]
        xor     eax, eax
        cmp     dword ptr [ecx+0x20], eax
        push    dword ptr [ebp+0x10]
        setnz   al
        push    dword ptr [eax*4+g_5e03a408]
        jmp     L2caa
    L2c08:
        mov     eax, dword ptr [g_5e77abd8]
        push    dword ptr [ebp+0x14]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x10]
        mov     eax, dword ptr [eax+0x14]
        push    0x2
        push    0x64
        cdq
        pop     ecx
        idiv    ecx
        jmp     L2931
    L2c2b:
        cmp     dword ptr [g_5e77abd8], 0
        jz      L2c58
        mov     eax, dword ptr [ebp+0x18]
        and     dword ptr [g_5e77abd8], 0
        push    eax
        push    dword ptr [ebp+0x14]
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        push    dword ptr [eax+0xa4]
    L2c4e:
        call    FUN_5e032d96
        add     esp, 0x14
        jmp     L2cb2
    L2c58:
        mov     eax, dword ptr [ebp+0x18]
        push    eax
        push    dword ptr [ebp+0x14]
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        push    dword ptr [eax+0xa0]
        jmp     L2c4e
    L2c6d:
        push    dword ptr [ebp+0x14]
        mov     eax, dword ptr [g_5e77abd8]
        mov     dword ptr [g_5e77abdc], eax
        mov     eax, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x10]
        push    0x1
        push    dword ptr [eax+0x18]
        jmp     L2a04
    L2c8a:
        mov     eax, dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x14]
        cmp     dword ptr [eax+0x8], 0xb
        push    dword ptr [ebp+0x10]
        mov     eax, dword ptr [ebp+0x18]
        jg      L2ca4
        push    dword ptr [eax+0x98]
        jmp     L2caa
    L2ca4:
        push    dword ptr [eax+0x9c]
    L2caa:
        call    FUN_5e032cb7
        add     esp, 0xc
    L2cb2:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
