/*
 * FUN_5e03245d (143 B) - builds a ':'-separated string from a 7-entry
 * table of string pairs (pointed to by g_5e039fc8). First computes the
 * total length (sum of strlen of each pair + 2 per entry), mallocs that
 * +1, then fills the buffer with "str:str:" ... and NUL-terminates.
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

__declspec(naked) void FUN_5e03245d(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [g_5e039fc8]
        push    edi
        mov     dword ptr [ebp-0x8], esi
        xor     ebx, ebx
        mov     dword ptr [ebp-0x4], 0x7
    L477:
        push    dword ptr [esi+0x1c]
        call    FUN_5e02e6b0
        push    dword ptr [esi]
        mov     edi, eax
        call    FUN_5e02e6b0
        add     eax, ebx
        pop     ecx
        add     esi, 0x4
        dec     dword ptr [ebp-0x4]
        pop     ecx
        lea     ebx, [eax+edi+0x2]
        jnz     L477
        inc     ebx
        push    ebx
        call    FUN_5e02b6e4
        mov     esi, eax
        pop     ecx
        test    esi, esi
        mov     dword ptr [ebp-0x4], esi
        jz      L4e4
        mov     edi, dword ptr [ebp-0x8]
        push    0x7
        pop     ebx
        mov     byte ptr [esi], 0x3a
    L4af:
        push    dword ptr [edi]
        inc     esi
        push    esi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        add     esi, eax
        mov     byte ptr [esi], 0x3a
        push    dword ptr [edi+0x1c]
        inc     esi
        push    esi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        add     esp, 0x18
        add     esi, eax
        add     edi, 0x4
        dec     ebx
        /* __emit: jnz L4af - MSVC6 miscomputes backward rel-offset (75 D1);
           ref uses 75 CE (call-relocs sit between branch and target) */
        __emit 0x75
        __emit 0xCE
        and     byte ptr [esi], 0x0
    L4e4:
        mov     eax, dword ptr [ebp-0x4]
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
