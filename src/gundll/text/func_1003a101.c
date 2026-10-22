/*
 * FUN_1003a101 (204 B) -- __cdecl.
 * Parses a dot-separated string (param_2) into a 0x88-byte buffer (param_1)
 * in up to 3 fields (at +0x0/+0x40/+0x80). Uses FUN_1003fd50 to find field
 * length, FUN_10037f30 to copy, FUN_1003c500 for the leading-dot case.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10040680(void);
extern void __cdecl FUN_1003c500(void);
extern void __cdecl FUN_1003fd50(void);
extern void __cdecl FUN_10037f30(void);

__declspec(naked) void FUN_1003a101(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        push    0x88
        push    0x0
        push    edi
        call    FUN_10040680
        mov     esi, dword ptr [ebp + 0xc]
        add     esp, 0xc
        mov     al, byte ptr [esi]
        test    al, al
        jz      L_13f
        cmp     al, 0x2e
        jnz     L_146
        cmp     byte ptr [esi + 0x1], 0x0
        lea     eax, [esi + 0x1]
        jz      L_146
        add     edi, 0x80
        push    eax
        push    edi
        call    FUN_1003c500
        pop     ecx
        pop     ecx
    L_13f:
        xor     eax, eax
        jmp     L_1c8
    L_146:
        and     dword ptr [ebp + 0xc], 0x0
        push    0x1004b70c
        push    esi
        call    FUN_1003fd50
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_1c5
        cmp     dword ptr [ebp + 0xc], 0x0
        mov     bl, byte ptr [eax + esi]
        lea     edi, [eax + esi]
        jnz     L_178
        cmp     eax, 0x40
        jge     L_1c5
        cmp     bl, 0x2e
        jz      L_1c5
        push    eax
        push    esi
        push    dword ptr [ebp + 0x8]
        jmp     L_1ac
    L_178:
        cmp     dword ptr [ebp + 0xc], 0x1
        jnz     L_192
        cmp     eax, 0x40
        jge     L_1c5
        cmp     bl, 0x5f
        jz      L_1c5
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        push    esi
        add     eax, 0x40
        jmp     L_1ab
    L_192:
        cmp     dword ptr [ebp + 0xc], 0x2
        jnz     L_1c5
        test    bl, bl
        jz      L_1a1
        cmp     bl, 0x2c
        jnz     L_1c5
    L_1a1:
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        push    esi
        add     eax, 0x80
    L_1ab:
        push    eax
    L_1ac:
        call    FUN_10037f30
        add     esp, 0xc
        cmp     bl, 0x2c
        jz      L_13f
        test    bl, bl
        jz      L_13f
        inc     dword ptr [ebp + 0xc]
        lea     esi, [edi + 0x1]
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward jmp rel8 (off-by-4) across the call-reloc at FUN_10037f30 */
        __emit 0x85
    L_1c5:
        or      eax, 0xffffffff
    L_1c8:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
