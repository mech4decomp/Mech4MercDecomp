/*
 * FUN_5e0324ec (149 B) - builds a ':'-separated string from a 12-entry
 * table of string pairs (pointed to by g_5e039fc8, entries at +0x38).
 * Computes total length (sum of strlen of each pair + 2 per entry),
 * mallocs that +1, then fills the buffer with "str:str:" ... and
 * NUL-terminates.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02e6b0(void);   /* _strlen */
extern void __cdecl FUN_5e02b6e4(void);   /* _malloc */
extern void __cdecl FUN_5e02e220(void);
extern int g_5e039fc8;

__declspec(naked) void FUN_5e0324ec(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        and     dword ptr [ebp-0x4], 0x0
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [g_5e039fc8]
        mov     dword ptr [ebp-0x8], 0xc
        lea     esi, [edi+0x38]
    L508:
        push    dword ptr [esi+0x30]
        call    FUN_5e02e6b0
        push    dword ptr [esi]
        mov     ebx, eax
        call    FUN_5e02e6b0
        add     eax, dword ptr [ebp-0x4]
        pop     ecx
        add     esi, 0x4
        dec     dword ptr [ebp-0x8]
        pop     ecx
        lea     eax, [eax+ebx+0x2]
        mov     dword ptr [ebp-0x4], eax
        jnz     L508
        inc     eax
        push    eax
        call    FUN_5e02b6e4
        mov     esi, eax
        pop     ecx
        test    esi, esi
        mov     dword ptr [ebp-0x8], esi
        jz      L579
        push    0xc
        add     edi, 0x68
        pop     ebx
        mov     byte ptr [esi], 0x3a
    L544:
        push    dword ptr [edi-0x30]
        inc     esi
        push    esi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        add     esi, eax
        mov     byte ptr [esi], 0x3a
        push    dword ptr [edi]
        inc     esi
        push    esi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        add     esp, 0x18
        add     esi, eax
        add     edi, 0x4
        dec     ebx
        /* __emit: jnz L544 - MSVC6 miscomputes backward rel-offset (75 D1);
           ref uses 75 CE (call-relocs sit between branch and target) */
        __emit 0x75
        __emit 0xCE
        and     byte ptr [esi], 0x0
    L579:
        mov     eax, dword ptr [ebp-0x8]
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
