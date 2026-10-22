/*
 * FUN_10007d10 (172 B) - __fastcall XML prolog tokenizer. Reads a wide char
 * from this+0x14, skips whitespace via FUN_10007f00, then wcsncmp-checks
 * against 0x1002566c (4 chars) and 0x10025664 (2 chars), calling
 * FUN_100087b0 / FUN_10007df0 on match. Returns 1 on success, 0 on failure.
 *
 * __fastcall (ECX = param_1), plain RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1002114C;   /* function pointer loaded into ESI, called via CALL ESI */
extern void __cdecl FUN_10007f00(void);
extern void __cdecl FUN_100087b0(void);
extern void __cdecl FUN_10007df0(void);

__declspec(naked) void __cdecl FUN_10007d10(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_1002114C]
        push    edi
        mov     edi, ecx
loc_7d1a:
        mov     eax, dword ptr [edi + 0x14]
        mov     cx, word ptr [eax]
        cmp     cx, 0x20
        jz      loc_7d38
        cmp     cx, 0x9
        jz      loc_7d38
        cmp     cx, 0xd
        jz      loc_7d38
        cmp     cx, 0xa
        jnz     loc_7d41
loc_7d38:
        mov     ecx, edi
        call    FUN_10007f00
        jmp     loc_7d1a
loc_7d41:
        mov     ecx, 0x1002566c
        test    ecx, ecx
        jnz     loc_7d55
        xor     edx, edx
        test    eax, eax
        setz    dl
        mov     eax, edx
        jmp     loc_7d66
loc_7d55:
        test    eax, eax
        jz      loc_7d6a
        push    4
        push    eax
        push    0x1002566c
        call    esi
        add     esp, 0xc
loc_7d66:
        test    eax, eax
        jnz     loc_7d77
loc_7d6a:
        mov     ecx, edi
        call    FUN_100087b0
        test    al, al
        jz      loc_7db2
        jmp     loc_7d1a
loc_7d77:
        mov     eax, dword ptr [edi + 0x14]
        mov     ecx, 0x10025664
        test    ecx, ecx
        jnz     loc_7d8e
        xor     edx, edx
        test    eax, eax
        setz    dl
        mov     eax, edx
        jmp     loc_7d9f
loc_7d8e:
        test    eax, eax
        jz      loc_7da3
        push    2
        push    eax
        push    0x10025664
        call    esi
        add     esp, 0xc
loc_7d9f:
        test    eax, eax
        jnz     loc_7db7
loc_7da3:
        mov     ecx, edi
        call    FUN_10007df0
        test    al, al
        jnz     loc_7d1a
loc_7db2:
        pop     edi
        xor     al, al
        pop     esi
        ret
loc_7db7:
        pop     edi
        mov     al, 1
        pop     esi
        ret
    }
}
