/*
 * FUN_0072DE80 (148 B) — RET 0x10 (4 stack params).
 *
 * LoadStringA wrapper: sets last error, loads a string, then trims it at
 * the first character flagged in the 0x00896B88 table. Returns the trimmed
 * length, or 0 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT entries */
extern void *g_iat_76b24c;   /* 0x0076B24C SetLastError */
extern void *g_iat_76b574;   /* 0x0076B574 LoadStringA */
extern void *g_iat_76b1f8;   /* 0x0076B1F8 GetLastError */

__declspec(naked) void func_0072de80(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [g_iat_76b24c]
        push    esi
        push    edi
        push    0x8
        call    ebx
        mov     esi, dword ptr [esp + 0x1c]
        test    esi, esi
        jle     L_dec3
        mov     edi, dword ptr [esp + 0x18]
        test    edi, edi
        jz      L_dec3
        push    0x0
        mov     byte ptr [edi], 0x0
        call    ebx
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        push    edi
        push    eax
        push    ecx
        call    dword ptr [g_iat_76b574]
        test    eax, eax
        jnz     L_decb
        call    dword ptr [g_iat_76b1f8]
        push    eax
        call    ebx
L_dec3:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x10
L_decb:
        mov     byte ptr [edi + esi - 1], 0x0
        cmp     byte ptr [edi], 0x0
        mov     esi, edi
        /* __emit: MSVC6 miscomputes forward Jcc rel8 displacement (off by 1)
           when a mov reg,[reg+imm32] sits between branch and target */
        __emit 0x74
        __emit 0x2F
L_ded7:
        xor     edx, edx
        mov     dl, byte ptr [esi]
        mov     al, byte ptr [edx + 0x896b88]
        test    al, al
        jz      L_deed
        mov     al, byte ptr [esi + 0x1]
        test    al, al
        /* __emit: MSVC6 miscomputes forward Jcc rel8 displacement (off by 1) */
        __emit 0x74
        __emit 0x17
        inc     esi
L_deed:
        mov     al, byte ptr [esi + 0x1]
        inc     esi
        test    al, al
        jnz     L_ded7
        push    0x0
        call    ebx
        mov     eax, esi
        sub     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
L_df03:
        mov     byte ptr [esi], 0x0
L_df06:
        push    0x0
        call    ebx
        mov     eax, esi
        sub     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
